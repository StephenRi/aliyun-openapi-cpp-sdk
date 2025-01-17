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

#include <alibabacloud/swas-open/model/ListCustomImagesRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::ListCustomImagesRequest;

ListCustomImagesRequest::ListCustomImagesRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "ListCustomImages") {
  setMethod(HttpRequest::Method::Post);
}

ListCustomImagesRequest::~ListCustomImagesRequest() {}

std::string ListCustomImagesRequest::getSystemSnapshotId() const {
  return systemSnapshotId_;
}

void ListCustomImagesRequest::setSystemSnapshotId(const std::string &systemSnapshotId) {
  systemSnapshotId_ = systemSnapshotId;
  setParameter(std::string("SystemSnapshotId"), systemSnapshotId);
}

std::string ListCustomImagesRequest::getDataSnapshotId() const {
  return dataSnapshotId_;
}

void ListCustomImagesRequest::setDataSnapshotId(const std::string &dataSnapshotId) {
  dataSnapshotId_ = dataSnapshotId;
  setParameter(std::string("DataSnapshotId"), dataSnapshotId);
}

std::string ListCustomImagesRequest::getClientToken() const {
  return clientToken_;
}

void ListCustomImagesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ListCustomImagesRequest::getImageNames() const {
  return imageNames_;
}

void ListCustomImagesRequest::setImageNames(const std::string &imageNames) {
  imageNames_ = imageNames;
  setParameter(std::string("ImageNames"), imageNames);
}

int ListCustomImagesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListCustomImagesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListCustomImagesRequest::getRegionId() const {
  return regionId_;
}

void ListCustomImagesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListCustomImagesRequest::getPageSize() const {
  return pageSize_;
}

void ListCustomImagesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListCustomImagesRequest::getImageIds() const {
  return imageIds_;
}

void ListCustomImagesRequest::setImageIds(const std::string &imageIds) {
  imageIds_ = imageIds;
  setParameter(std::string("ImageIds"), imageIds);
}

