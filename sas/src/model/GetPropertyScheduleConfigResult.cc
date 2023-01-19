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

#include <alibabacloud/sas/model/GetPropertyScheduleConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetPropertyScheduleConfigResult::GetPropertyScheduleConfigResult() :
	ServiceResult()
{}

GetPropertyScheduleConfigResult::GetPropertyScheduleConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPropertyScheduleConfigResult::~GetPropertyScheduleConfigResult()
{}

void GetPropertyScheduleConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto propertyScheduleConfigNode = value["PropertyScheduleConfig"];
	if(!propertyScheduleConfigNode["ScheduleTime"].isNull())
		propertyScheduleConfig_.scheduleTime = propertyScheduleConfigNode["ScheduleTime"].asString();
	if(!propertyScheduleConfigNode["Type"].isNull())
		propertyScheduleConfig_.type = propertyScheduleConfigNode["Type"].asString();
	if(!propertyScheduleConfigNode["NextScheduleTime"].isNull())
		propertyScheduleConfig_.nextScheduleTime = std::stol(propertyScheduleConfigNode["NextScheduleTime"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string GetPropertyScheduleConfigResult::getMessage()const
{
	return message_;
}

GetPropertyScheduleConfigResult::PropertyScheduleConfig GetPropertyScheduleConfigResult::getPropertyScheduleConfig()const
{
	return propertyScheduleConfig_;
}

int GetPropertyScheduleConfigResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetPropertyScheduleConfigResult::getCode()const
{
	return code_;
}

bool GetPropertyScheduleConfigResult::getSuccess()const
{
	return success_;
}

