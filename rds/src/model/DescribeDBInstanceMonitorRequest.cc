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

#include <alibabacloud/rds/model/DescribeDBInstanceMonitorRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstanceMonitorRequest;

DescribeDBInstanceMonitorRequest::DescribeDBInstanceMonitorRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstanceMonitor")
{}

DescribeDBInstanceMonitorRequest::~DescribeDBInstanceMonitorRequest()
{}

long DescribeDBInstanceMonitorRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBInstanceMonitorRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBInstanceMonitorRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBInstanceMonitorRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBInstanceMonitorRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeDBInstanceMonitorRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string DescribeDBInstanceMonitorRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBInstanceMonitorRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeDBInstanceMonitorRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBInstanceMonitorRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDBInstanceMonitorRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBInstanceMonitorRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDBInstanceMonitorRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDBInstanceMonitorRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

