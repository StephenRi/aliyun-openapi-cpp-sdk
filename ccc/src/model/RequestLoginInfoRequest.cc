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

#include <alibabacloud/ccc/model/RequestLoginInfoRequest.h>

using AlibabaCloud::CCC::Model::RequestLoginInfoRequest;

RequestLoginInfoRequest::RequestLoginInfoRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "RequestLoginInfo")
{
	setMethod(HttpRequest::Method::Post);
}

RequestLoginInfoRequest::~RequestLoginInfoRequest()
{}

std::string RequestLoginInfoRequest::getInstanceId()const
{
	return instanceId_;
}

void RequestLoginInfoRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string RequestLoginInfoRequest::getUserId()const
{
	return userId_;
}

void RequestLoginInfoRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string RequestLoginInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RequestLoginInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

