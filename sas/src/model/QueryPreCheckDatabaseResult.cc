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

#include <alibabacloud/sas/model/QueryPreCheckDatabaseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

QueryPreCheckDatabaseResult::QueryPreCheckDatabaseResult() :
	ServiceResult()
{}

QueryPreCheckDatabaseResult::QueryPreCheckDatabaseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryPreCheckDatabaseResult::~QueryPreCheckDatabaseResult()
{}

void QueryPreCheckDatabaseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Progress"].isNull())
		progress_ = std::stoi(value["Progress"].asString());
	if(!value["Result"].isNull())
		result_ = value["Result"].asString();
	if(!value["CompletedTime"].isNull())
		completedTime_ = std::stol(value["CompletedTime"].asString());
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["UpdatedTime"].isNull())
		updatedTime_ = std::stol(value["UpdatedTime"].asString());
	if(!value["CreatedTime"].isNull())
		createdTime_ = std::stol(value["CreatedTime"].asString());

}

int QueryPreCheckDatabaseResult::getProgress()const
{
	return progress_;
}

std::string QueryPreCheckDatabaseResult::getDescription()const
{
	return description_;
}

long QueryPreCheckDatabaseResult::getCreatedTime()const
{
	return createdTime_;
}

long QueryPreCheckDatabaseResult::getCompletedTime()const
{
	return completedTime_;
}

long QueryPreCheckDatabaseResult::getUpdatedTime()const
{
	return updatedTime_;
}

std::string QueryPreCheckDatabaseResult::getResult()const
{
	return result_;
}

