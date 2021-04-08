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

#include <alibabacloud/dts/model/SuspendDtsJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

SuspendDtsJobResult::SuspendDtsJobResult() :
	ServiceResult()
{}

SuspendDtsJobResult::SuspendDtsJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SuspendDtsJobResult::~SuspendDtsJobResult()
{}

void SuspendDtsJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int SuspendDtsJobResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string SuspendDtsJobResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string SuspendDtsJobResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string SuspendDtsJobResult::getErrMessage()const
{
	return errMessage_;
}

bool SuspendDtsJobResult::getSuccess()const
{
	return success_;
}

std::string SuspendDtsJobResult::getErrCode()const
{
	return errCode_;
}

