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

#include <alibabacloud/polardb/model/DescribeSQLExplorerRetentionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeSQLExplorerRetentionResult::DescribeSQLExplorerRetentionResult() :
	ServiceResult()
{}

DescribeSQLExplorerRetentionResult::DescribeSQLExplorerRetentionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLExplorerRetentionResult::~DescribeSQLExplorerRetentionResult()
{}

void DescribeSQLExplorerRetentionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ConfigValue"].isNull())
		configValue_ = value["ConfigValue"].asString();
	if(!value["DBInstanceID"].isNull())
		dBInstanceID_ = std::stoi(value["DBInstanceID"].asString());
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();

}

std::string DescribeSQLExplorerRetentionResult::getConfigValue()const
{
	return configValue_;
}

int DescribeSQLExplorerRetentionResult::getDBInstanceID()const
{
	return dBInstanceID_;
}

std::string DescribeSQLExplorerRetentionResult::getDBInstanceName()const
{
	return dBInstanceName_;
}
