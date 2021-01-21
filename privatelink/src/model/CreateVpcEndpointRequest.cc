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

#include <alibabacloud/privatelink/model/CreateVpcEndpointRequest.h>

using AlibabaCloud::Privatelink::Model::CreateVpcEndpointRequest;

CreateVpcEndpointRequest::CreateVpcEndpointRequest() :
	RpcServiceRequest("privatelink", "2020-04-15", "CreateVpcEndpoint")
{
	setMethod(HttpRequest::Method::Post);
}

CreateVpcEndpointRequest::~CreateVpcEndpointRequest()
{}

std::string CreateVpcEndpointRequest::getClientToken()const
{
	return clientToken_;
}

void CreateVpcEndpointRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::vector<std::string> CreateVpcEndpointRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateVpcEndpointRequest::setSecurityGroupId(const std::vector<std::string>& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	for(int dep1 = 0; dep1!= securityGroupId.size(); dep1++) {
		setParameter("SecurityGroupId."+ std::to_string(dep1), securityGroupId.at(dep1));
	}
}

std::string CreateVpcEndpointRequest::getRegionId()const
{
	return regionId_;
}

void CreateVpcEndpointRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::vector<CreateVpcEndpointRequest::Zone> CreateVpcEndpointRequest::getZone()const
{
	return zone_;
}

void CreateVpcEndpointRequest::setZone(const std::vector<Zone>& zone)
{
	zone_ = zone;
	for(int dep1 = 0; dep1!= zone.size(); dep1++) {
		auto zoneObj = zone.at(dep1);
		std::string zoneObjStr = "Zone." + std::to_string(dep1 + 1);
		setParameter(zoneObjStr + ".VSwitchId", zoneObj.vSwitchId);
		setParameter(zoneObjStr + ".ZoneId", zoneObj.zoneId);
	}
}

std::string CreateVpcEndpointRequest::getServiceName()const
{
	return serviceName_;
}

void CreateVpcEndpointRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

bool CreateVpcEndpointRequest::getDryRun()const
{
	return dryRun_;
}

void CreateVpcEndpointRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

std::string CreateVpcEndpointRequest::getEndpointDescription()const
{
	return endpointDescription_;
}

void CreateVpcEndpointRequest::setEndpointDescription(const std::string& endpointDescription)
{
	endpointDescription_ = endpointDescription;
	setParameter("EndpointDescription", endpointDescription);
}

std::string CreateVpcEndpointRequest::getEndpointName()const
{
	return endpointName_;
}

void CreateVpcEndpointRequest::setEndpointName(const std::string& endpointName)
{
	endpointName_ = endpointName;
	setParameter("EndpointName", endpointName);
}

std::string CreateVpcEndpointRequest::getVpcId()const
{
	return vpcId_;
}

void CreateVpcEndpointRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string CreateVpcEndpointRequest::getServiceId()const
{
	return serviceId_;
}

void CreateVpcEndpointRequest::setServiceId(const std::string& serviceId)
{
	serviceId_ = serviceId;
	setParameter("ServiceId", serviceId);
}

