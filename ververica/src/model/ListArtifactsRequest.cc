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

#include <alibabacloud/ververica/model/ListArtifactsRequest.h>

using AlibabaCloud::Ververica::Model::ListArtifactsRequest;

ListArtifactsRequest::ListArtifactsRequest()
    : RoaServiceRequest("ververica", "2020-05-01") {
  setResourcePath("/pop/workspaces/[workspace]/artifacts/v1/namespaces/[namespace]/artifacts:list"};
  setMethod(HttpRequest::Method::Get);
}

ListArtifactsRequest::~ListArtifactsRequest() {}

std::string ListArtifactsRequest::getWorkspace() const {
  return workspace_;
}

void ListArtifactsRequest::setWorkspace(const std::string &workspace) {
  workspace_ = workspace;
  setParameter(std::string("workspace"), workspace);
}

std::string ListArtifactsRequest::get_Namespace() const {
  return _namespace_;
}

void ListArtifactsRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("namespace"), _namespace);
}

