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

#include <alibabacloud/waf-openapi/model/ModifyWafSwitchRequest.h>

using AlibabaCloud::Waf_openapi::Model::ModifyWafSwitchRequest;

ModifyWafSwitchRequest::ModifyWafSwitchRequest() :
	RpcServiceRequest("waf-openapi", "2018-01-17", "ModifyWafSwitch")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyWafSwitchRequest::~ModifyWafSwitchRequest()
{}

std::string ModifyWafSwitchRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyWafSwitchRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyWafSwitchRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyWafSwitchRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ModifyWafSwitchRequest::getDomain()const
{
	return domain_;
}

void ModifyWafSwitchRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

int ModifyWafSwitchRequest::getServiceOn()const
{
	return serviceOn_;
}

void ModifyWafSwitchRequest::setServiceOn(int serviceOn)
{
	serviceOn_ = serviceOn;
	setParameter("ServiceOn", std::to_string(serviceOn));
}

std::string ModifyWafSwitchRequest::getLang()const
{
	return lang_;
}

void ModifyWafSwitchRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string ModifyWafSwitchRequest::getRegion()const
{
	return region_;
}

void ModifyWafSwitchRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

