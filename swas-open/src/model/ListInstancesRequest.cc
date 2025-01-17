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

#include <alibabacloud/swas-open/model/ListInstancesRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::ListInstancesRequest;

ListInstancesRequest::ListInstancesRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "ListInstances") {
  setMethod(HttpRequest::Method::Post);
}

ListInstancesRequest::~ListInstancesRequest() {}

int ListInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListInstancesRequest::getRegionId() const {
  return regionId_;
}

void ListInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListInstancesRequest::getInstanceIds() const {
  return instanceIds_;
}

void ListInstancesRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

int ListInstancesRequest::getPageSize() const {
  return pageSize_;
}

void ListInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListInstancesRequest::getPublicIpAddresses() const {
  return publicIpAddresses_;
}

void ListInstancesRequest::setPublicIpAddresses(const std::string &publicIpAddresses) {
  publicIpAddresses_ = publicIpAddresses;
  setParameter(std::string("PublicIpAddresses"), publicIpAddresses);
}

std::string ListInstancesRequest::getChargeType() const {
  return chargeType_;
}

void ListInstancesRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

std::string ListInstancesRequest::getStatus() const {
  return status_;
}

void ListInstancesRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

