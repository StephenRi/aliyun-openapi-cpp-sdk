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

#include <alibabacloud/r-kvstore/model/DescribeDedicatedUserClusterRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeDedicatedUserClusterRequest;

DescribeDedicatedUserClusterRequest::DescribeDedicatedUserClusterRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeDedicatedUserCluster")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDedicatedUserClusterRequest::~DescribeDedicatedUserClusterRequest()
{}

long DescribeDedicatedUserClusterRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDedicatedUserClusterRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDedicatedUserClusterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDedicatedUserClusterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDedicatedUserClusterRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDedicatedUserClusterRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDedicatedUserClusterRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDedicatedUserClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeDedicatedUserClusterRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDedicatedUserClusterRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDedicatedUserClusterRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDedicatedUserClusterRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeDedicatedUserClusterRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDedicatedUserClusterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDedicatedUserClusterRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeDedicatedUserClusterRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}
