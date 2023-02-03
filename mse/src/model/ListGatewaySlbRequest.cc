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

#include <alibabacloud/mse/model/ListGatewaySlbRequest.h>

using AlibabaCloud::Mse::Model::ListGatewaySlbRequest;

ListGatewaySlbRequest::ListGatewaySlbRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListGatewaySlb") {
  setMethod(HttpRequest::Method::Post);
}

ListGatewaySlbRequest::~ListGatewaySlbRequest() {}

std::string ListGatewaySlbRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListGatewaySlbRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ListGatewaySlbRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void ListGatewaySlbRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string ListGatewaySlbRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListGatewaySlbRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

