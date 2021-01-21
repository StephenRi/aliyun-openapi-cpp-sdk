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

#include <alibabacloud/privatelink/model/AttachSecurityGroupToVpcEndpointRequest.h>

using AlibabaCloud::Privatelink::Model::AttachSecurityGroupToVpcEndpointRequest;

AttachSecurityGroupToVpcEndpointRequest::AttachSecurityGroupToVpcEndpointRequest() :
	RpcServiceRequest("privatelink", "2020-04-15", "AttachSecurityGroupToVpcEndpoint")
{
	setMethod(HttpRequest::Method::Post);
}

AttachSecurityGroupToVpcEndpointRequest::~AttachSecurityGroupToVpcEndpointRequest()
{}

std::string AttachSecurityGroupToVpcEndpointRequest::getClientToken()const
{
	return clientToken_;
}

void AttachSecurityGroupToVpcEndpointRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string AttachSecurityGroupToVpcEndpointRequest::getEndpointId()const
{
	return endpointId_;
}

void AttachSecurityGroupToVpcEndpointRequest::setEndpointId(const std::string& endpointId)
{
	endpointId_ = endpointId;
	setParameter("EndpointId", endpointId);
}

std::string AttachSecurityGroupToVpcEndpointRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void AttachSecurityGroupToVpcEndpointRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

std::string AttachSecurityGroupToVpcEndpointRequest::getRegionId()const
{
	return regionId_;
}

void AttachSecurityGroupToVpcEndpointRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool AttachSecurityGroupToVpcEndpointRequest::getDryRun()const
{
	return dryRun_;
}

void AttachSecurityGroupToVpcEndpointRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

