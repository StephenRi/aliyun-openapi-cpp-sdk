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

#include <alibabacloud/videoenhan/model/MergeVideoFaceRequest.h>

using AlibabaCloud::Videoenhan::Model::MergeVideoFaceRequest;

MergeVideoFaceRequest::MergeVideoFaceRequest()
    : RpcServiceRequest("videoenhan", "2020-03-20", "MergeVideoFace") {
  setMethod(HttpRequest::Method::Post);
}

MergeVideoFaceRequest::~MergeVideoFaceRequest() {}

std::string MergeVideoFaceRequest::getReferenceURL() const {
  return referenceURL_;
}

void MergeVideoFaceRequest::setReferenceURL(const std::string &referenceURL) {
  referenceURL_ = referenceURL;
  setBodyParameter(std::string("ReferenceURL"), referenceURL);
}

bool MergeVideoFaceRequest::getEnhance() const {
  return enhance_;
}

void MergeVideoFaceRequest::setEnhance(bool enhance) {
  enhance_ = enhance;
  setBodyParameter(std::string("Enhance"), enhance ? "true" : "false");
}

std::string MergeVideoFaceRequest::getPostURL() const {
  return postURL_;
}

void MergeVideoFaceRequest::setPostURL(const std::string &postURL) {
  postURL_ = postURL;
  setBodyParameter(std::string("PostURL"), postURL);
}

bool MergeVideoFaceRequest::getAsync() const {
  return async_;
}

void MergeVideoFaceRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

std::string MergeVideoFaceRequest::getVideoURL() const {
  return videoURL_;
}

void MergeVideoFaceRequest::setVideoURL(const std::string &videoURL) {
  videoURL_ = videoURL;
  setBodyParameter(std::string("VideoURL"), videoURL);
}

bool MergeVideoFaceRequest::getAddWatermark() const {
  return addWatermark_;
}

void MergeVideoFaceRequest::setAddWatermark(bool addWatermark) {
  addWatermark_ = addWatermark;
  setBodyParameter(std::string("AddWatermark"), addWatermark ? "true" : "false");
}

