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

#include <alibabacloud/mse/model/QueryClusterInfoRequest.h>

using AlibabaCloud::Mse::Model::QueryClusterInfoRequest;

QueryClusterInfoRequest::QueryClusterInfoRequest()
    : RpcServiceRequest("mse", "2019-05-31", "QueryClusterInfo") {
  setMethod(HttpRequest::Method::Post);
}

QueryClusterInfoRequest::~QueryClusterInfoRequest() {}

bool QueryClusterInfoRequest::getAclSwitch() const {
  return aclSwitch_;
}

void QueryClusterInfoRequest::setAclSwitch(bool aclSwitch) {
  aclSwitch_ = aclSwitch;
  setParameter(std::string("AclSwitch"), aclSwitch ? "true" : "false");
}

std::string QueryClusterInfoRequest::getMseSessionId() const {
  return mseSessionId_;
}

void QueryClusterInfoRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string QueryClusterInfoRequest::getOrderId() const {
  return orderId_;
}

void QueryClusterInfoRequest::setOrderId(const std::string &orderId) {
  orderId_ = orderId;
  setParameter(std::string("OrderId"), orderId);
}

std::string QueryClusterInfoRequest::getClusterId() const {
  return clusterId_;
}

void QueryClusterInfoRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string QueryClusterInfoRequest::getInstanceId() const {
  return instanceId_;
}

void QueryClusterInfoRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string QueryClusterInfoRequest::getRegionId() const {
  return regionId_;
}

void QueryClusterInfoRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string QueryClusterInfoRequest::getRequestPars() const {
  return requestPars_;
}

void QueryClusterInfoRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::string QueryClusterInfoRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void QueryClusterInfoRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

