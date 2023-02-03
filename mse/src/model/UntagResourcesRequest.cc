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

#include <alibabacloud/mse/model/UntagResourcesRequest.h>

using AlibabaCloud::Mse::Model::UntagResourcesRequest;

UntagResourcesRequest::UntagResourcesRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UntagResources") {
  setMethod(HttpRequest::Method::Post);
}

UntagResourcesRequest::~UntagResourcesRequest() {}

bool UntagResourcesRequest::getAll() const {
  return all_;
}

void UntagResourcesRequest::setAll(bool all) {
  all_ = all;
  setParameter(std::string("All"), all ? "true" : "false");
}

std::string UntagResourcesRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UntagResourcesRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::vector<std::string> UntagResourcesRequest::getResourceId() const {
  return resourceId_;
}

void UntagResourcesRequest::setResourceId(const std::vector<std::string> &resourceId) {
  resourceId_ = resourceId;
}

std::string UntagResourcesRequest::getResourceType() const {
  return resourceType_;
}

void UntagResourcesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string UntagResourcesRequest::getRegionId() const {
  return regionId_;
}

void UntagResourcesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UntagResourcesRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UntagResourcesRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::vector<std::string> UntagResourcesRequest::getTagKey() const {
  return tagKey_;
}

void UntagResourcesRequest::setTagKey(const std::vector<std::string> &tagKey) {
  tagKey_ = tagKey;
}

