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

#include <alibabacloud/gpdb/model/DescribeDataReDistributeInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeDataReDistributeInfoResult::DescribeDataReDistributeInfoResult() :
	ServiceResult()
{}

DescribeDataReDistributeInfoResult::DescribeDataReDistributeInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataReDistributeInfoResult::~DescribeDataReDistributeInfoResult()
{}

void DescribeDataReDistributeInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataReDistributeInfoNode = value["DataReDistributeInfo"];
	if(!dataReDistributeInfoNode["Type"].isNull())
		dataReDistributeInfo_.type = dataReDistributeInfoNode["Type"].asString();
	if(!dataReDistributeInfoNode["StartTime"].isNull())
		dataReDistributeInfo_.startTime = dataReDistributeInfoNode["StartTime"].asString();
	if(!dataReDistributeInfoNode["Progress"].isNull())
		dataReDistributeInfo_.progress = std::stol(dataReDistributeInfoNode["Progress"].asString());
	if(!dataReDistributeInfoNode["RemainTime"].isNull())
		dataReDistributeInfo_.remainTime = dataReDistributeInfoNode["RemainTime"].asString();
	if(!dataReDistributeInfoNode["Message"].isNull())
		dataReDistributeInfo_.message = dataReDistributeInfoNode["Message"].asString();
	if(!dataReDistributeInfoNode["Status"].isNull())
		dataReDistributeInfo_.status = dataReDistributeInfoNode["Status"].asString();

}

DescribeDataReDistributeInfoResult::DataReDistributeInfo DescribeDataReDistributeInfoResult::getDataReDistributeInfo()const
{
	return dataReDistributeInfo_;
}

