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

#include <alibabacloud/sas/model/DescribeTaskErrorLogRequest.h>

using AlibabaCloud::Sas::Model::DescribeTaskErrorLogRequest;

DescribeTaskErrorLogRequest::DescribeTaskErrorLogRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeTaskErrorLog") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTaskErrorLogRequest::~DescribeTaskErrorLogRequest() {}

std::string DescribeTaskErrorLogRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeTaskErrorLogRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeTaskErrorLogRequest::getBuildTaskId() const {
  return buildTaskId_;
}

void DescribeTaskErrorLogRequest::setBuildTaskId(const std::string &buildTaskId) {
  buildTaskId_ = buildTaskId;
  setParameter(std::string("BuildTaskId"), buildTaskId);
}

