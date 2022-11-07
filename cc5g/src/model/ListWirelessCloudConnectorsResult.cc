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

#include <alibabacloud/cc5g/model/ListWirelessCloudConnectorsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CC5G;
using namespace AlibabaCloud::CC5G::Model;

ListWirelessCloudConnectorsResult::ListWirelessCloudConnectorsResult() :
	ServiceResult()
{}

ListWirelessCloudConnectorsResult::ListWirelessCloudConnectorsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListWirelessCloudConnectorsResult::~ListWirelessCloudConnectorsResult()
{}

void ListWirelessCloudConnectorsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWirelessCloudConnectorsNode = value["WirelessCloudConnectors"]["WirelessCloudConnector"];
	for (auto valueWirelessCloudConnectorsWirelessCloudConnector : allWirelessCloudConnectorsNode)
	{
		WirelessCloudConnector wirelessCloudConnectorsObject;
		if(!valueWirelessCloudConnectorsWirelessCloudConnector["WirelessCloudConnectorId"].isNull())
			wirelessCloudConnectorsObject.wirelessCloudConnectorId = valueWirelessCloudConnectorsWirelessCloudConnector["WirelessCloudConnectorId"].asString();
		if(!valueWirelessCloudConnectorsWirelessCloudConnector["Status"].isNull())
			wirelessCloudConnectorsObject.status = valueWirelessCloudConnectorsWirelessCloudConnector["Status"].asString();
		if(!valueWirelessCloudConnectorsWirelessCloudConnector["Name"].isNull())
			wirelessCloudConnectorsObject.name = valueWirelessCloudConnectorsWirelessCloudConnector["Name"].asString();
		if(!valueWirelessCloudConnectorsWirelessCloudConnector["Description"].isNull())
			wirelessCloudConnectorsObject.description = valueWirelessCloudConnectorsWirelessCloudConnector["Description"].asString();
		if(!valueWirelessCloudConnectorsWirelessCloudConnector["RegionId"].isNull())
			wirelessCloudConnectorsObject.regionId = valueWirelessCloudConnectorsWirelessCloudConnector["RegionId"].asString();
		if(!valueWirelessCloudConnectorsWirelessCloudConnector["UseCase"].isNull())
			wirelessCloudConnectorsObject.useCase = valueWirelessCloudConnectorsWirelessCloudConnector["UseCase"].asString();
		if(!valueWirelessCloudConnectorsWirelessCloudConnector["DataPackageId"].isNull())
			wirelessCloudConnectorsObject.dataPackageId = valueWirelessCloudConnectorsWirelessCloudConnector["DataPackageId"].asString();
		if(!valueWirelessCloudConnectorsWirelessCloudConnector["DataPackageType"].isNull())
			wirelessCloudConnectorsObject.dataPackageType = valueWirelessCloudConnectorsWirelessCloudConnector["DataPackageType"].asString();
		if(!valueWirelessCloudConnectorsWirelessCloudConnector["CardCount"].isNull())
			wirelessCloudConnectorsObject.cardCount = valueWirelessCloudConnectorsWirelessCloudConnector["CardCount"].asString();
		if(!valueWirelessCloudConnectorsWirelessCloudConnector["CreateTime"].isNull())
			wirelessCloudConnectorsObject.createTime = valueWirelessCloudConnectorsWirelessCloudConnector["CreateTime"].asString();
		if(!valueWirelessCloudConnectorsWirelessCloudConnector["BusinessType"].isNull())
			wirelessCloudConnectorsObject.businessType = valueWirelessCloudConnectorsWirelessCloudConnector["BusinessType"].asString();
		if(!valueWirelessCloudConnectorsWirelessCloudConnector["ServiceType"].isNull())
			wirelessCloudConnectorsObject.serviceType = valueWirelessCloudConnectorsWirelessCloudConnector["ServiceType"].asString();
		if(!valueWirelessCloudConnectorsWirelessCloudConnector["WirelessCloudConnectorGroupId"].isNull())
			wirelessCloudConnectorsObject.wirelessCloudConnectorGroupId = valueWirelessCloudConnectorsWirelessCloudConnector["WirelessCloudConnectorGroupId"].asString();
		wirelessCloudConnectors_.push_back(wirelessCloudConnectorsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = value["MaxResults"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::string ListWirelessCloudConnectorsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListWirelessCloudConnectorsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListWirelessCloudConnectorsResult::WirelessCloudConnector> ListWirelessCloudConnectorsResult::getWirelessCloudConnectors()const
{
	return wirelessCloudConnectors_;
}

std::string ListWirelessCloudConnectorsResult::getMaxResults()const
{
	return maxResults_;
}

