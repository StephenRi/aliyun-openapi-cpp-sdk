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

#include <alibabacloud/sae/model/TagResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

TagResourcesResult::TagResourcesResult() :
	ServiceResult()
{}

TagResourcesResult::TagResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TagResourcesResult::~TagResourcesResult()
{}

void TagResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Data"].isNull())
		data_ = value["Data"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();

}

std::string TagResourcesResult::getMessage()const
{
	return message_;
}

std::string TagResourcesResult::getTraceId()const
{
	return traceId_;
}

bool TagResourcesResult::getData()const
{
	return data_;
}

std::string TagResourcesResult::getErrorCode()const
{
	return errorCode_;
}

std::string TagResourcesResult::getCode()const
{
	return code_;
}

bool TagResourcesResult::getSuccess()const
{
	return success_;
}
