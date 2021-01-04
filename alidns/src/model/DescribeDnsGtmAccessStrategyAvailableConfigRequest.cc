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

#include <alibabacloud/alidns/model/DescribeDnsGtmAccessStrategyAvailableConfigRequest.h>

using AlibabaCloud::Alidns::Model::DescribeDnsGtmAccessStrategyAvailableConfigRequest;

DescribeDnsGtmAccessStrategyAvailableConfigRequest::DescribeDnsGtmAccessStrategyAvailableConfigRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "DescribeDnsGtmAccessStrategyAvailableConfig")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDnsGtmAccessStrategyAvailableConfigRequest::~DescribeDnsGtmAccessStrategyAvailableConfigRequest()
{}

std::string DescribeDnsGtmAccessStrategyAvailableConfigRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeDnsGtmAccessStrategyAvailableConfigRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeDnsGtmAccessStrategyAvailableConfigRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DescribeDnsGtmAccessStrategyAvailableConfigRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string DescribeDnsGtmAccessStrategyAvailableConfigRequest::getStrategyMode()const
{
	return strategyMode_;
}

void DescribeDnsGtmAccessStrategyAvailableConfigRequest::setStrategyMode(const std::string& strategyMode)
{
	strategyMode_ = strategyMode;
	setParameter("StrategyMode", strategyMode);
}

std::string DescribeDnsGtmAccessStrategyAvailableConfigRequest::getLang()const
{
	return lang_;
}

void DescribeDnsGtmAccessStrategyAvailableConfigRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

