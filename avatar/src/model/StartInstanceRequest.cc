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

#include <alibabacloud/avatar/model/StartInstanceRequest.h>

using AlibabaCloud::Avatar::Model::StartInstanceRequest;

StartInstanceRequest::StartInstanceRequest()
    : RpcServiceRequest("avatar", "2022-01-30", "StartInstance") {
  setMethod(HttpRequest::Method::Post);
}

StartInstanceRequest::~StartInstanceRequest() {}

std::string StartInstanceRequest::getApp() const {
  return app_;
}

void StartInstanceRequest::setApp(const std::string &app) {
  app_ = app;
  setParameter(std::string("App"), app);
}

long StartInstanceRequest::getTenantId() const {
  return tenantId_;
}

void StartInstanceRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("TenantId"), std::to_string(tenantId));
}

StartInstanceRequest::Channel StartInstanceRequest::getChannel() const {
  return channel_;
}

void StartInstanceRequest::setChannel(const StartInstanceRequest::Channel &channel) {
  channel_ = channel;
  setParameter(std::string("Channel") + ".Type", channel.type);
  for(auto const &iter1 : channel.reqConfig) {
    setParameter(std::string("Channel") + ".ReqConfig." + iter1.first, iter1.second);
  }
}

StartInstanceRequest::CommandRequest StartInstanceRequest::getCommandRequest() const {
  return commandRequest_;
}

void StartInstanceRequest::setCommandRequest(const StartInstanceRequest::CommandRequest &commandRequest) {
  commandRequest_ = commandRequest;
  setParameter(std::string("CommandRequest") + ".AlphaSwitch", commandRequest.alphaSwitch ? "true" : "false");
}

std::string StartInstanceRequest::getUser() const {
  return user_;
}

void StartInstanceRequest::setUser(const std::string &user) {
  user_ = user;
  setParameter(std::string("User"), user);
}

