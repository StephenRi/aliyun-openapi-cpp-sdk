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

#include <alibabacloud/swas-open/model/DescribeCommandsRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::DescribeCommandsRequest;

DescribeCommandsRequest::DescribeCommandsRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "DescribeCommands") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCommandsRequest::~DescribeCommandsRequest() {}

std::string DescribeCommandsRequest::getType() const {
  return type_;
}

void DescribeCommandsRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeCommandsRequest::getCommandId() const {
  return commandId_;
}

void DescribeCommandsRequest::setCommandId(const std::string &commandId) {
  commandId_ = commandId;
  setParameter(std::string("CommandId"), commandId);
}

std::string DescribeCommandsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCommandsRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string DescribeCommandsRequest::getRegionId() const {
  return regionId_;
}

void DescribeCommandsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeCommandsRequest::getProvider() const {
  return provider_;
}

void DescribeCommandsRequest::setProvider(const std::string &provider) {
  provider_ = provider;
  setParameter(std::string("Provider"), provider);
}

std::string DescribeCommandsRequest::getName() const {
  return name_;
}

void DescribeCommandsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string DescribeCommandsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCommandsRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

