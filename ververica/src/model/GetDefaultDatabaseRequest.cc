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

#include <alibabacloud/ververica/model/GetDefaultDatabaseRequest.h>

using AlibabaCloud::Ververica::Model::GetDefaultDatabaseRequest;

GetDefaultDatabaseRequest::GetDefaultDatabaseRequest()
    : RoaServiceRequest("ververica", "2020-05-01") {
  setResourcePath("/pop/workspaces/[workspace]/catalog/v1beta2/namespaces/[namespace]/catalogs/[cat]:getDefaultDatabase"};
  setMethod(HttpRequest::Method::Get);
}

GetDefaultDatabaseRequest::~GetDefaultDatabaseRequest() {}

std::string GetDefaultDatabaseRequest::getWorkspace() const {
  return workspace_;
}

void GetDefaultDatabaseRequest::setWorkspace(const std::string &workspace) {
  workspace_ = workspace;
  setParameter(std::string("workspace"), workspace);
}

std::string GetDefaultDatabaseRequest::getCat() const {
  return cat_;
}

void GetDefaultDatabaseRequest::setCat(const std::string &cat) {
  cat_ = cat;
  setParameter(std::string("cat"), cat);
}

std::string GetDefaultDatabaseRequest::get_Namespace() const {
  return _namespace_;
}

void GetDefaultDatabaseRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("namespace"), _namespace);
}

