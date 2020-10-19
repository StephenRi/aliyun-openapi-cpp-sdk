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

#include <alibabacloud/dataworks-public/model/SearchManualDagNodeInstanceRequest.h>

using AlibabaCloud::Dataworks_public::Model::SearchManualDagNodeInstanceRequest;

SearchManualDagNodeInstanceRequest::SearchManualDagNodeInstanceRequest() :
	RpcServiceRequest("dataworks-public", "2018-06-01", "SearchManualDagNodeInstance")
{
	setMethod(HttpRequest::Method::Post);
}

SearchManualDagNodeInstanceRequest::~SearchManualDagNodeInstanceRequest()
{}

std::string SearchManualDagNodeInstanceRequest::getProjectName()const
{
	return projectName_;
}

void SearchManualDagNodeInstanceRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setParameter("ProjectName", projectName);
}

long SearchManualDagNodeInstanceRequest::getDagId()const
{
	return dagId_;
}

void SearchManualDagNodeInstanceRequest::setDagId(long dagId)
{
	dagId_ = dagId;
	setParameter("DagId", std::to_string(dagId));
}
