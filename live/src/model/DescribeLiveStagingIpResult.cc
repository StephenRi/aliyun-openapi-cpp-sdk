/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/live/model/DescribeLiveStagingIpResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveStagingIpResult::DescribeLiveStagingIpResult() :
	ServiceResult()
{}

DescribeLiveStagingIpResult::DescribeLiveStagingIpResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStagingIpResult::~DescribeLiveStagingIpResult()
{}

void DescribeLiveStagingIpResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIPV4s = value["IPV4s"]["IPV4"];
	for (const auto &item : allIPV4s)
		iPV4s_.push_back(item.asString());

}

std::vector<std::string> DescribeLiveStagingIpResult::getIPV4s()const
{
	return iPV4s_;
}

