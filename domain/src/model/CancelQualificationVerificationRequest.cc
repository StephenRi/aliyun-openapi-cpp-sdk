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

#include <alibabacloud/domain/model/CancelQualificationVerificationRequest.h>

using AlibabaCloud::Domain::Model::CancelQualificationVerificationRequest;

CancelQualificationVerificationRequest::CancelQualificationVerificationRequest()
    : RpcServiceRequest("domain", "2018-01-29", "CancelQualificationVerification") {
  setMethod(HttpRequest::Method::Post);
}

CancelQualificationVerificationRequest::~CancelQualificationVerificationRequest() {}

std::string CancelQualificationVerificationRequest::getQualificationType() const {
  return qualificationType_;
}

void CancelQualificationVerificationRequest::setQualificationType(const std::string &qualificationType) {
  qualificationType_ = qualificationType;
  setParameter(std::string("QualificationType"), qualificationType);
}

std::string CancelQualificationVerificationRequest::getInstanceId() const {
  return instanceId_;
}

void CancelQualificationVerificationRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CancelQualificationVerificationRequest::getUserClientIp() const {
  return userClientIp_;
}

void CancelQualificationVerificationRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string CancelQualificationVerificationRequest::getLang() const {
  return lang_;
}

void CancelQualificationVerificationRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

