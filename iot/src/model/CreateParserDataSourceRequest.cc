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

#include <alibabacloud/iot/model/CreateParserDataSourceRequest.h>

using AlibabaCloud::Iot::Model::CreateParserDataSourceRequest;

CreateParserDataSourceRequest::CreateParserDataSourceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateParserDataSource")
{
	setMethod(HttpRequest::Method::Post);
}

CreateParserDataSourceRequest::~CreateParserDataSourceRequest()
{}

std::string CreateParserDataSourceRequest::getDescription()const
{
	return description_;
}

void CreateParserDataSourceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateParserDataSourceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateParserDataSourceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string CreateParserDataSourceRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateParserDataSourceRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateParserDataSourceRequest::getName()const
{
	return name_;
}

void CreateParserDataSourceRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateParserDataSourceRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateParserDataSourceRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

