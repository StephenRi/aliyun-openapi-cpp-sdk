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

#include <alibabacloud/imageseg/model/SegmentAnimalRequest.h>

using AlibabaCloud::Imageseg::Model::SegmentAnimalRequest;

SegmentAnimalRequest::SegmentAnimalRequest()
    : RpcServiceRequest("imageseg", "2019-12-30", "SegmentAnimal") {
  setMethod(HttpRequest::Method::Post);
}

SegmentAnimalRequest::~SegmentAnimalRequest() {}

std::string SegmentAnimalRequest::getReturnForm() const {
  return returnForm_;
}

void SegmentAnimalRequest::setReturnForm(const std::string &returnForm) {
  returnForm_ = returnForm;
  setParameter(std::string("ReturnForm"), returnForm);
}

std::string SegmentAnimalRequest::getOssFile() const {
  return ossFile_;
}

void SegmentAnimalRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string SegmentAnimalRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void SegmentAnimalRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string SegmentAnimalRequest::getImageURL() const {
  return imageURL_;
}

void SegmentAnimalRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setParameter(std::string("ImageURL"), imageURL);
}

