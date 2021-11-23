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

#include <alibabacloud/rtc/model/DescribeAutoLiveStreamRuleRequest.h>

using AlibabaCloud::Rtc::Model::DescribeAutoLiveStreamRuleRequest;

DescribeAutoLiveStreamRuleRequest::DescribeAutoLiveStreamRuleRequest()
    : RpcServiceRequest("rtc", "2018-01-11", "DescribeAutoLiveStreamRule") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAutoLiveStreamRuleRequest::~DescribeAutoLiveStreamRuleRequest() {}

std::string DescribeAutoLiveStreamRuleRequest::getShowLog() const {
  return showLog_;
}

void DescribeAutoLiveStreamRuleRequest::setShowLog(const std::string &showLog) {
  showLog_ = showLog;
  setParameter(std::string("ShowLog"), showLog);
}

long DescribeAutoLiveStreamRuleRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAutoLiveStreamRuleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeAutoLiveStreamRuleRequest::getAppId() const {
  return appId_;
}

void DescribeAutoLiveStreamRuleRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

