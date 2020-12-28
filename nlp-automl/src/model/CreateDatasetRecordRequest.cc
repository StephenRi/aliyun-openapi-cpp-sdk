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

#include <alibabacloud/nlp-automl/model/CreateDatasetRecordRequest.h>

using AlibabaCloud::Nlp_automl::Model::CreateDatasetRecordRequest;

CreateDatasetRecordRequest::CreateDatasetRecordRequest() :
	RpcServiceRequest("nlp-automl", "2019-11-11", "CreateDatasetRecord")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDatasetRecordRequest::~CreateDatasetRecordRequest()
{}

std::string CreateDatasetRecordRequest::getDatasetRecord()const
{
	return datasetRecord_;
}

void CreateDatasetRecordRequest::setDatasetRecord(const std::string& datasetRecord)
{
	datasetRecord_ = datasetRecord;
	setBodyParameter("DatasetRecord", datasetRecord);
}

long CreateDatasetRecordRequest::getDatasetId()const
{
	return datasetId_;
}

void CreateDatasetRecordRequest::setDatasetId(long datasetId)
{
	datasetId_ = datasetId;
	setBodyParameter("DatasetId", std::to_string(datasetId));
}

long CreateDatasetRecordRequest::getProjectId()const
{
	return projectId_;
}

void CreateDatasetRecordRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", std::to_string(projectId));
}
