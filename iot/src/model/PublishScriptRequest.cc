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

#include <alibabacloud/iot/model/PublishScriptRequest.h>

using AlibabaCloud::Iot::Model::PublishScriptRequest;

PublishScriptRequest::PublishScriptRequest() :
	RpcServiceRequest("iot", "2018-01-20", "PublishScript")
{
	setMethod(HttpRequest::Method::Post);
}

PublishScriptRequest::~PublishScriptRequest()
{}

std::string PublishScriptRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void PublishScriptRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

long PublishScriptRequest::getParserId()const
{
	return parserId_;
}

void PublishScriptRequest::setParserId(long parserId)
{
	parserId_ = parserId;
	setParameter("ParserId", std::to_string(parserId));
}

std::string PublishScriptRequest::getApiProduct()const
{
	return apiProduct_;
}

void PublishScriptRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string PublishScriptRequest::getApiRevision()const
{
	return apiRevision_;
}

void PublishScriptRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

