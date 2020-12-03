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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainPropertyRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainPropertyRequest;

DescribeDcdnDomainPropertyRequest::DescribeDcdnDomainPropertyRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainProperty")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDcdnDomainPropertyRequest::~DescribeDcdnDomainPropertyRequest()
{}

std::string DescribeDcdnDomainPropertyRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnDomainPropertyRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long DescribeDcdnDomainPropertyRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnDomainPropertyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

