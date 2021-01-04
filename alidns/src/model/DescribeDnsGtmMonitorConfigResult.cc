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

#include <alibabacloud/alidns/model/DescribeDnsGtmMonitorConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDnsGtmMonitorConfigResult::DescribeDnsGtmMonitorConfigResult() :
	ServiceResult()
{}

DescribeDnsGtmMonitorConfigResult::DescribeDnsGtmMonitorConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDnsGtmMonitorConfigResult::~DescribeDnsGtmMonitorConfigResult()
{}

void DescribeDnsGtmMonitorConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIspCityNodesNode = value["IspCityNodes"]["IspCityNode"];
	for (auto valueIspCityNodesIspCityNode : allIspCityNodesNode)
	{
		IspCityNode ispCityNodesObject;
		if(!valueIspCityNodesIspCityNode["CountryName"].isNull())
			ispCityNodesObject.countryName = valueIspCityNodesIspCityNode["CountryName"].asString();
		if(!valueIspCityNodesIspCityNode["CountryCode"].isNull())
			ispCityNodesObject.countryCode = valueIspCityNodesIspCityNode["CountryCode"].asString();
		if(!valueIspCityNodesIspCityNode["CityName"].isNull())
			ispCityNodesObject.cityName = valueIspCityNodesIspCityNode["CityName"].asString();
		if(!valueIspCityNodesIspCityNode["CityCode"].isNull())
			ispCityNodesObject.cityCode = valueIspCityNodesIspCityNode["CityCode"].asString();
		if(!valueIspCityNodesIspCityNode["IspCode"].isNull())
			ispCityNodesObject.ispCode = valueIspCityNodesIspCityNode["IspCode"].asString();
		if(!valueIspCityNodesIspCityNode["IspName"].isNull())
			ispCityNodesObject.ispName = valueIspCityNodesIspCityNode["IspName"].asString();
		ispCityNodes_.push_back(ispCityNodesObject);
	}
	if(!value["MonitorConfigId"].isNull())
		monitorConfigId_ = value["MonitorConfigId"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["CreateTimestamp"].isNull())
		createTimestamp_ = std::stol(value["CreateTimestamp"].asString());
	if(!value["UpdateTime"].isNull())
		updateTime_ = value["UpdateTime"].asString();
	if(!value["UpdateTimestamp"].isNull())
		updateTimestamp_ = std::stol(value["UpdateTimestamp"].asString());
	if(!value["ProtocolType"].isNull())
		protocolType_ = value["ProtocolType"].asString();
	if(!value["Interval"].isNull())
		interval_ = std::stoi(value["Interval"].asString());
	if(!value["EvaluationCount"].isNull())
		evaluationCount_ = std::stoi(value["EvaluationCount"].asString());
	if(!value["Timeout"].isNull())
		timeout_ = std::stoi(value["Timeout"].asString());
	if(!value["MonitorExtendInfo"].isNull())
		monitorExtendInfo_ = value["MonitorExtendInfo"].asString();

}

std::vector<DescribeDnsGtmMonitorConfigResult::IspCityNode> DescribeDnsGtmMonitorConfigResult::getIspCityNodes()const
{
	return ispCityNodes_;
}

std::string DescribeDnsGtmMonitorConfigResult::getProtocolType()const
{
	return protocolType_;
}

int DescribeDnsGtmMonitorConfigResult::getTimeout()const
{
	return timeout_;
}

std::string DescribeDnsGtmMonitorConfigResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeDnsGtmMonitorConfigResult::getUpdateTime()const
{
	return updateTime_;
}

int DescribeDnsGtmMonitorConfigResult::getEvaluationCount()const
{
	return evaluationCount_;
}

long DescribeDnsGtmMonitorConfigResult::getUpdateTimestamp()const
{
	return updateTimestamp_;
}

std::string DescribeDnsGtmMonitorConfigResult::getMonitorExtendInfo()const
{
	return monitorExtendInfo_;
}

std::string DescribeDnsGtmMonitorConfigResult::getMonitorConfigId()const
{
	return monitorConfigId_;
}

long DescribeDnsGtmMonitorConfigResult::getCreateTimestamp()const
{
	return createTimestamp_;
}

int DescribeDnsGtmMonitorConfigResult::getInterval()const
{
	return interval_;
}

