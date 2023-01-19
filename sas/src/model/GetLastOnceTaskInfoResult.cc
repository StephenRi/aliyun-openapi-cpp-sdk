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

#include <alibabacloud/sas/model/GetLastOnceTaskInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetLastOnceTaskInfoResult::GetLastOnceTaskInfoResult() :
	ServiceResult()
{}

GetLastOnceTaskInfoResult::GetLastOnceTaskInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLastOnceTaskInfoResult::~GetLastOnceTaskInfoResult()
{}

void GetLastOnceTaskInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto taskInfoNode = value["TaskInfo"];
	if(!taskInfoNode["Status"].isNull())
		taskInfo_.status = taskInfoNode["Status"].asString();
	if(!taskInfoNode["Progress"].isNull())
		taskInfo_.progress = std::stoi(taskInfoNode["Progress"].asString());
	if(!taskInfoNode["Result"].isNull())
		taskInfo_.result = taskInfoNode["Result"].asString();
	if(!value["CollectTime"].isNull())
		collectTime_ = std::stol(value["CollectTime"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["TaskId"].isNull())
		taskId_ = std::stol(value["TaskId"].asString());
	if(!value["FinishCount"].isNull())
		finishCount_ = std::stoi(value["FinishCount"].asString());

}

GetLastOnceTaskInfoResult::TaskInfo GetLastOnceTaskInfoResult::getTaskInfo()const
{
	return taskInfo_;
}

int GetLastOnceTaskInfoResult::getTotalCount()const
{
	return totalCount_;
}

long GetLastOnceTaskInfoResult::getTaskId()const
{
	return taskId_;
}

long GetLastOnceTaskInfoResult::getCollectTime()const
{
	return collectTime_;
}

int GetLastOnceTaskInfoResult::getFinishCount()const
{
	return finishCount_;
}

