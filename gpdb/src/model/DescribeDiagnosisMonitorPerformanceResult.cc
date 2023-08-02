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

#include <alibabacloud/gpdb/model/DescribeDiagnosisMonitorPerformanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeDiagnosisMonitorPerformanceResult::DescribeDiagnosisMonitorPerformanceResult() :
	ServiceResult()
{}

DescribeDiagnosisMonitorPerformanceResult::DescribeDiagnosisMonitorPerformanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDiagnosisMonitorPerformanceResult::~DescribeDiagnosisMonitorPerformanceResult()
{}

void DescribeDiagnosisMonitorPerformanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPerformancesNode = value["Performances"]["Item"];
	for (auto valuePerformancesItem : allPerformancesNode)
	{
		Item performancesObject;
		if(!valuePerformancesItem["QueryID"].isNull())
			performancesObject.queryID = valuePerformancesItem["QueryID"].asString();
		if(!valuePerformancesItem["StartTime"].isNull())
			performancesObject.startTime = std::stol(valuePerformancesItem["StartTime"].asString());
		if(!valuePerformancesItem["Cost"].isNull())
			performancesObject.cost = std::stoi(valuePerformancesItem["Cost"].asString());
		if(!valuePerformancesItem["Status"].isNull())
			performancesObject.status = valuePerformancesItem["Status"].asString();
		if(!valuePerformancesItem["User"].isNull())
			performancesObject.user = valuePerformancesItem["User"].asString();
		if(!valuePerformancesItem["Database"].isNull())
			performancesObject.database = valuePerformancesItem["Database"].asString();
		performances_.push_back(performancesObject);
	}
	if(!value["PerformancesThreshold"].isNull())
		performancesThreshold_ = std::stoi(value["PerformancesThreshold"].asString());
	if(!value["PerformancesTruncated"].isNull())
		performancesTruncated_ = value["PerformancesTruncated"].asString() == "true";

}

bool DescribeDiagnosisMonitorPerformanceResult::getPerformancesTruncated()const
{
	return performancesTruncated_;
}

std::vector<DescribeDiagnosisMonitorPerformanceResult::Item> DescribeDiagnosisMonitorPerformanceResult::getPerformances()const
{
	return performances_;
}

int DescribeDiagnosisMonitorPerformanceResult::getPerformancesThreshold()const
{
	return performancesThreshold_;
}

