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

#include <alibabacloud/emr/model/AddScalingConfigItemV2Request.h>

using AlibabaCloud::Emr::Model::AddScalingConfigItemV2Request;

AddScalingConfigItemV2Request::AddScalingConfigItemV2Request() :
	RpcServiceRequest("emr", "2016-04-08", "AddScalingConfigItemV2")
{
	setMethod(HttpRequest::Method::Post);
}

AddScalingConfigItemV2Request::~AddScalingConfigItemV2Request()
{}

std::string AddScalingConfigItemV2Request::getConfigItemType()const
{
	return configItemType_;
}

void AddScalingConfigItemV2Request::setConfigItemType(const std::string& configItemType)
{
	configItemType_ = configItemType;
	setParameter("ConfigItemType", configItemType);
}

long AddScalingConfigItemV2Request::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddScalingConfigItemV2Request::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddScalingConfigItemV2Request::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddScalingConfigItemV2Request::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string AddScalingConfigItemV2Request::getScalingGroupBizId()const
{
	return scalingGroupBizId_;
}

void AddScalingConfigItemV2Request::setScalingGroupBizId(const std::string& scalingGroupBizId)
{
	scalingGroupBizId_ = scalingGroupBizId;
	setParameter("ScalingGroupBizId", scalingGroupBizId);
}

std::string AddScalingConfigItemV2Request::getResourceGroupId()const
{
	return resourceGroupId_;
}

void AddScalingConfigItemV2Request::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string AddScalingConfigItemV2Request::getRegionId()const
{
	return regionId_;
}

void AddScalingConfigItemV2Request::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string AddScalingConfigItemV2Request::getConfigItemInformation()const
{
	return configItemInformation_;
}

void AddScalingConfigItemV2Request::setConfigItemInformation(const std::string& configItemInformation)
{
	configItemInformation_ = configItemInformation;
	setParameter("ConfigItemInformation", configItemInformation);
}

