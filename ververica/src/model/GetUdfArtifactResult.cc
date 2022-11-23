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

#include <alibabacloud/ververica/model/GetUdfArtifactResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ververica;
using namespace AlibabaCloud::Ververica::Model;

GetUdfArtifactResult::GetUdfArtifactResult() :
	ServiceResult()
{}

GetUdfArtifactResult::GetUdfArtifactResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUdfArtifactResult::~GetUdfArtifactResult()
{}

void GetUdfArtifactResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["data"].isNull())
		data_ = value["data"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string GetUdfArtifactResult::getRequestId()const
{
	return requestId_;
}

std::string GetUdfArtifactResult::getData()const
{
	return data_;
}

bool GetUdfArtifactResult::getSuccess()const
{
	return success_;
}

