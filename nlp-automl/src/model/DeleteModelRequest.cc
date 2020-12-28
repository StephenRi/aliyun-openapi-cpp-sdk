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

#include <alibabacloud/nlp-automl/model/DeleteModelRequest.h>

using AlibabaCloud::Nlp_automl::Model::DeleteModelRequest;

DeleteModelRequest::DeleteModelRequest() :
	RpcServiceRequest("nlp-automl", "2019-11-11", "DeleteModel")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteModelRequest::~DeleteModelRequest()
{}

std::string DeleteModelRequest::getProduct()const
{
	return product_;
}

void DeleteModelRequest::setProduct(const std::string& product)
{
	product_ = product;
	setBodyParameter("Product", product);
}

long DeleteModelRequest::getModelId()const
{
	return modelId_;
}

void DeleteModelRequest::setModelId(long modelId)
{
	modelId_ = modelId;
	setBodyParameter("ModelId", std::to_string(modelId));
}

long DeleteModelRequest::getProjectId()const
{
	return projectId_;
}

void DeleteModelRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", std::to_string(projectId));
}
