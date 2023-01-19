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

#include <alibabacloud/sas/model/DescribeUniBackupPolicyDetailRequest.h>

using AlibabaCloud::Sas::Model::DescribeUniBackupPolicyDetailRequest;

DescribeUniBackupPolicyDetailRequest::DescribeUniBackupPolicyDetailRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeUniBackupPolicyDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribeUniBackupPolicyDetailRequest::~DescribeUniBackupPolicyDetailRequest() {}

long DescribeUniBackupPolicyDetailRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeUniBackupPolicyDetailRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeUniBackupPolicyDetailRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeUniBackupPolicyDetailRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeUniBackupPolicyDetailRequest::getPolicyId() const {
  return policyId_;
}

void DescribeUniBackupPolicyDetailRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}

