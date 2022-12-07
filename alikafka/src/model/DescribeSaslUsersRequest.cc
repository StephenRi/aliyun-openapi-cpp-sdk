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

#include <alibabacloud/alikafka/model/DescribeSaslUsersRequest.h>

using AlibabaCloud::Alikafka::Model::DescribeSaslUsersRequest;

DescribeSaslUsersRequest::DescribeSaslUsersRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "DescribeSaslUsers") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSaslUsersRequest::~DescribeSaslUsersRequest() {}

std::string DescribeSaslUsersRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeSaslUsersRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeSaslUsersRequest::getRegionId() const {
  return regionId_;
}

void DescribeSaslUsersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

