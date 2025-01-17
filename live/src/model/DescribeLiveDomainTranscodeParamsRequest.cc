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

#include <alibabacloud/live/model/DescribeLiveDomainTranscodeParamsRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDomainTranscodeParamsRequest;

DescribeLiveDomainTranscodeParamsRequest::DescribeLiveDomainTranscodeParamsRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveDomainTranscodeParams") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveDomainTranscodeParamsRequest::~DescribeLiveDomainTranscodeParamsRequest() {}

std::string DescribeLiveDomainTranscodeParamsRequest::getPushdomain() const {
  return pushdomain_;
}

void DescribeLiveDomainTranscodeParamsRequest::setPushdomain(const std::string &pushdomain) {
  pushdomain_ = pushdomain;
  setParameter(std::string("pushdomain"), pushdomain);
}

std::string DescribeLiveDomainTranscodeParamsRequest::getApp() const {
  return app_;
}

void DescribeLiveDomainTranscodeParamsRequest::setApp(const std::string &app) {
  app_ = app;
  setParameter(std::string("app"), app);
}

std::string DescribeLiveDomainTranscodeParamsRequest::getTemplate_name() const {
  return template_name_;
}

void DescribeLiveDomainTranscodeParamsRequest::setTemplate_name(const std::string &template_name) {
  template_name_ = template_name;
  setParameter(std::string("template_name"), template_name);
}

