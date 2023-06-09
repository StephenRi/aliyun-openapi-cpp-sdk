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

#include <alibabacloud/avatar/model/SubmitAudioTo3DAvatarVideoTaskRequest.h>

using AlibabaCloud::Avatar::Model::SubmitAudioTo3DAvatarVideoTaskRequest;

SubmitAudioTo3DAvatarVideoTaskRequest::SubmitAudioTo3DAvatarVideoTaskRequest()
    : RpcServiceRequest("avatar", "2022-01-30", "SubmitAudioTo3DAvatarVideoTask") {
  setMethod(HttpRequest::Method::Post);
}

SubmitAudioTo3DAvatarVideoTaskRequest::~SubmitAudioTo3DAvatarVideoTaskRequest() {}

SubmitAudioTo3DAvatarVideoTaskRequest::App SubmitAudioTo3DAvatarVideoTaskRequest::getApp() const {
  return app_;
}

void SubmitAudioTo3DAvatarVideoTaskRequest::setApp(const SubmitAudioTo3DAvatarVideoTaskRequest::App &app) {
  app_ = app;
  setParameter(std::string("App") + ".AppId", app.appId);
}

SubmitAudioTo3DAvatarVideoTaskRequest::VideoInfo SubmitAudioTo3DAvatarVideoTaskRequest::getVideoInfo() const {
  return videoInfo_;
}

void SubmitAudioTo3DAvatarVideoTaskRequest::setVideoInfo(const SubmitAudioTo3DAvatarVideoTaskRequest::VideoInfo &videoInfo) {
  videoInfo_ = videoInfo;
  setParameter(std::string("VideoInfo") + ".IsAlpha", videoInfo.isAlpha ? "true" : "false");
  setParameter(std::string("VideoInfo") + ".BackgroundImageUrl", videoInfo.backgroundImageUrl);
  setParameter(std::string("VideoInfo") + ".Resolution", std::to_string(videoInfo.resolution));
  setParameter(std::string("VideoInfo") + ".AlphaFormat", std::to_string(videoInfo.alphaFormat));
}

SubmitAudioTo3DAvatarVideoTaskRequest::AvatarInfo SubmitAudioTo3DAvatarVideoTaskRequest::getAvatarInfo() const {
  return avatarInfo_;
}

void SubmitAudioTo3DAvatarVideoTaskRequest::setAvatarInfo(const SubmitAudioTo3DAvatarVideoTaskRequest::AvatarInfo &avatarInfo) {
  avatarInfo_ = avatarInfo;
  setParameter(std::string("AvatarInfo") + ".Code", avatarInfo.code);
  setParameter(std::string("AvatarInfo") + ".Locate", std::to_string(avatarInfo.locate));
  setParameter(std::string("AvatarInfo") + ".Angle", std::to_string(avatarInfo.angle));
}

long SubmitAudioTo3DAvatarVideoTaskRequest::getTenantId() const {
  return tenantId_;
}

void SubmitAudioTo3DAvatarVideoTaskRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("TenantId"), std::to_string(tenantId));
}

std::string SubmitAudioTo3DAvatarVideoTaskRequest::getTitle() const {
  return title_;
}

void SubmitAudioTo3DAvatarVideoTaskRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string SubmitAudioTo3DAvatarVideoTaskRequest::getUrl() const {
  return url_;
}

void SubmitAudioTo3DAvatarVideoTaskRequest::setUrl(const std::string &url) {
  url_ = url;
  setParameter(std::string("Url"), url);
}

