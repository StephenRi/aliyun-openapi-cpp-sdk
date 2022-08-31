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

#include <alibabacloud/rds/model/DescribeDBInstanceMetricsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBInstanceMetricsResult::DescribeDBInstanceMetricsResult() :
	ServiceResult()
{}

DescribeDBInstanceMetricsResult::DescribeDBInstanceMetricsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceMetricsResult::~DescribeDBInstanceMetricsResult()
{}

void DescribeDBInstanceMetricsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Metrics"];
	for (auto valueItemsMetrics : allItemsNode)
	{
		Metrics itemsObject;
		if(!valueItemsMetrics["GroupKey"].isNull())
			itemsObject.groupKey = valueItemsMetrics["GroupKey"].asString();
		if(!valueItemsMetrics["SortRule"].isNull())
			itemsObject.sortRule = std::stoi(valueItemsMetrics["SortRule"].asString());
		if(!valueItemsMetrics["Description"].isNull())
			itemsObject.description = valueItemsMetrics["Description"].asString();
		if(!valueItemsMetrics["Unit"].isNull())
			itemsObject.unit = valueItemsMetrics["Unit"].asString();
		if(!valueItemsMetrics["DbType"].isNull())
			itemsObject.dbType = valueItemsMetrics["DbType"].asString();
		if(!valueItemsMetrics["MetricsKey"].isNull())
			itemsObject.metricsKey = valueItemsMetrics["MetricsKey"].asString();
		if(!valueItemsMetrics["GroupKeyType"].isNull())
			itemsObject.groupKeyType = valueItemsMetrics["GroupKeyType"].asString();
		if(!valueItemsMetrics["Method"].isNull())
			itemsObject.method = valueItemsMetrics["Method"].asString();
		if(!valueItemsMetrics["Dimension"].isNull())
			itemsObject.dimension = valueItemsMetrics["Dimension"].asString();
		if(!valueItemsMetrics["MetricsKeyAlias"].isNull())
			itemsObject.metricsKeyAlias = valueItemsMetrics["MetricsKeyAlias"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();

}

int DescribeDBInstanceMetricsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::vector<DescribeDBInstanceMetricsResult::Metrics> DescribeDBInstanceMetricsResult::getItems()const
{
	return items_;
}

std::string DescribeDBInstanceMetricsResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

