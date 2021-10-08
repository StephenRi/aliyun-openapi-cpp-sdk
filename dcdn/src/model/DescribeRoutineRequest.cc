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

#include <alibabacloud/dcdn/model/DescribeRoutineRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeRoutineRequest;

DescribeRoutineRequest::DescribeRoutineRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeRoutine")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRoutineRequest::~DescribeRoutineRequest()
{}

long DescribeRoutineRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRoutineRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRoutineRequest::getName()const
{
	return name_;
}

void DescribeRoutineRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

