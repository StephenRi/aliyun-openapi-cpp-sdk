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

#include <alibabacloud/resourcecenter/model/ListTagKeysRequest.h>

using AlibabaCloud::ResourceCenter::Model::ListTagKeysRequest;

ListTagKeysRequest::ListTagKeysRequest()
    : RpcServiceRequest("resourcecenter", "2022-12-01", "ListTagKeys") {
  setMethod(HttpRequest::Method::Post);
}

ListTagKeysRequest::~ListTagKeysRequest() {}

std::string ListTagKeysRequest::getNextToken() const {
  return nextToken_;
}

void ListTagKeysRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListTagKeysRequest::getMatchType() const {
  return matchType_;
}

void ListTagKeysRequest::setMatchType(const std::string &matchType) {
  matchType_ = matchType;
  setParameter(std::string("MatchType"), matchType);
}

int ListTagKeysRequest::getMaxResults() const {
  return maxResults_;
}

void ListTagKeysRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListTagKeysRequest::getTagKey() const {
  return tagKey_;
}

void ListTagKeysRequest::setTagKey(const std::string &tagKey) {
  tagKey_ = tagKey;
  setParameter(std::string("TagKey"), tagKey);
}

