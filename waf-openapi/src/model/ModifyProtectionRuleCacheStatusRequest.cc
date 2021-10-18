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

#include <alibabacloud/waf-openapi/model/ModifyProtectionRuleCacheStatusRequest.h>

using AlibabaCloud::Waf_openapi::Model::ModifyProtectionRuleCacheStatusRequest;

ModifyProtectionRuleCacheStatusRequest::ModifyProtectionRuleCacheStatusRequest() :
	RpcServiceRequest("waf-openapi", "2018-01-17", "ModifyProtectionRuleCacheStatus")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyProtectionRuleCacheStatusRequest::~ModifyProtectionRuleCacheStatusRequest()
{}

std::string ModifyProtectionRuleCacheStatusRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyProtectionRuleCacheStatusRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ModifyProtectionRuleCacheStatusRequest::getDefense()const
{
	return defense_;
}

void ModifyProtectionRuleCacheStatusRequest::setDefense(const std::string& defense)
{
	defense_ = defense;
	setParameter("Defense", defense);
}

long ModifyProtectionRuleCacheStatusRequest::getId()const
{
	return id_;
}

void ModifyProtectionRuleCacheStatusRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::string ModifyProtectionRuleCacheStatusRequest::getLang()const
{
	return lang_;
}

void ModifyProtectionRuleCacheStatusRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string ModifyProtectionRuleCacheStatusRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyProtectionRuleCacheStatusRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyProtectionRuleCacheStatusRequest::getDomain()const
{
	return domain_;
}

void ModifyProtectionRuleCacheStatusRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string ModifyProtectionRuleCacheStatusRequest::getRegion()const
{
	return region_;
}

void ModifyProtectionRuleCacheStatusRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

