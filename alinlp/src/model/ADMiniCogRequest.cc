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

#include <alibabacloud/alinlp/model/ADMiniCogRequest.h>

using AlibabaCloud::Alinlp::Model::ADMiniCogRequest;

ADMiniCogRequest::ADMiniCogRequest() :
	RpcServiceRequest("alinlp", "2020-06-29", "ADMiniCog")
{
	setMethod(HttpRequest::Method::Post);
}

ADMiniCogRequest::~ADMiniCogRequest()
{}

std::string ADMiniCogRequest::getParams()const
{
	return params_;
}

void ADMiniCogRequest::setParams(const std::string& params)
{
	params_ = params;
	setBodyParameter("Params", params);
}

std::string ADMiniCogRequest::getServiceCode()const
{
	return serviceCode_;
}

void ADMiniCogRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setBodyParameter("ServiceCode", serviceCode);
}

