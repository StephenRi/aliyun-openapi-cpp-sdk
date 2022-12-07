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

#include <alibabacloud/alikafka/model/UpgradeInstanceVersionRequest.h>

using AlibabaCloud::Alikafka::Model::UpgradeInstanceVersionRequest;

UpgradeInstanceVersionRequest::UpgradeInstanceVersionRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "UpgradeInstanceVersion") {
  setMethod(HttpRequest::Method::Post);
}

UpgradeInstanceVersionRequest::~UpgradeInstanceVersionRequest() {}

std::string UpgradeInstanceVersionRequest::getTargetVersion() const {
  return targetVersion_;
}

void UpgradeInstanceVersionRequest::setTargetVersion(const std::string &targetVersion) {
  targetVersion_ = targetVersion;
  setParameter(std::string("TargetVersion"), targetVersion);
}

std::string UpgradeInstanceVersionRequest::getInstanceId() const {
  return instanceId_;
}

void UpgradeInstanceVersionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpgradeInstanceVersionRequest::getRegionId() const {
  return regionId_;
}

void UpgradeInstanceVersionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

