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

#include <alibabacloud/iot/model/GetParserDataSourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

GetParserDataSourceResult::GetParserDataSourceResult() :
	ServiceResult()
{}

GetParserDataSourceResult::GetParserDataSourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetParserDataSourceResult::~GetParserDataSourceResult()
{}

void GetParserDataSourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataSourceNode = value["DataSource"];
	if(!dataSourceNode["Name"].isNull())
		dataSource_.name = dataSourceNode["Name"].asString();
	if(!dataSourceNode["Description"].isNull())
		dataSource_.description = dataSourceNode["Description"].asString();
	if(!dataSourceNode["DataSourceId"].isNull())
		dataSource_.dataSourceId = std::stol(dataSourceNode["DataSourceId"].asString());
	if(!dataSourceNode["UtcCreated"].isNull())
		dataSource_.utcCreated = dataSourceNode["UtcCreated"].asString();
	if(!dataSourceNode["CreateUserId"].isNull())
		dataSource_.createUserId = std::stol(dataSourceNode["CreateUserId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::string GetParserDataSourceResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string GetParserDataSourceResult::getCode()const
{
	return code_;
}

bool GetParserDataSourceResult::getSuccess()const
{
	return success_;
}

GetParserDataSourceResult::DataSource GetParserDataSourceResult::getDataSource()const
{
	return dataSource_;
}

