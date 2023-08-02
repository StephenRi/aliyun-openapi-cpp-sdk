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

#include <alibabacloud/avatar/model/SubmitTextTo3DAvatarVideoTaskRequest.h>

using AlibabaCloud::Avatar::Model::SubmitTextTo3DAvatarVideoTaskRequest;

SubmitTextTo3DAvatarVideoTaskRequest::SubmitTextTo3DAvatarVideoTaskRequest()
    : RpcServiceRequest("avatar", "2022-01-30", "SubmitTextTo3DAvatarVideoTask") {
  setMethod(HttpRequest::Method::Post);
}

SubmitTextTo3DAvatarVideoTaskRequest::~SubmitTextTo3DAvatarVideoTaskRequest() {}

SubmitTextTo3DAvatarVideoTaskRequest::App SubmitTextTo3DAvatarVideoTaskRequest::getApp() const {
  return app_;
}

void SubmitTextTo3DAvatarVideoTaskRequest::setApp(const SubmitTextTo3DAvatarVideoTaskRequest::App &app) {
  app_ = app;
  setParameter(std::string("App") + ".AppId", app.appId);
}

SubmitTextTo3DAvatarVideoTaskRequest::AudioInfo SubmitTextTo3DAvatarVideoTaskRequest::getAudioInfo() const {
  return audioInfo_;
}

void SubmitTextTo3DAvatarVideoTaskRequest::setAudioInfo(const SubmitTextTo3DAvatarVideoTaskRequest::AudioInfo &audioInfo) {
  audioInfo_ = audioInfo;
  setParameter(std::string("AudioInfo") + ".Voice", audioInfo.voice);
  setParameter(std::string("AudioInfo") + ".Volume", std::to_string(audioInfo.volume));
  setParameter(std::string("AudioInfo") + ".SpeechRate", std::to_string(audioInfo.speechRate));
  setParameter(std::string("AudioInfo") + ".PitchRate", std::to_string(audioInfo.pitchRate));
}

SubmitTextTo3DAvatarVideoTaskRequest::AvatarInfo SubmitTextTo3DAvatarVideoTaskRequest::getAvatarInfo() const {
  return avatarInfo_;
}

void SubmitTextTo3DAvatarVideoTaskRequest::setAvatarInfo(const SubmitTextTo3DAvatarVideoTaskRequest::AvatarInfo &avatarInfo) {
  avatarInfo_ = avatarInfo;
  setParameter(std::string("AvatarInfo") + ".Code", avatarInfo.code);
  setParameter(std::string("AvatarInfo") + ".Locate", std::to_string(avatarInfo.locate));
  setParameter(std::string("AvatarInfo") + ".Angle", std::to_string(avatarInfo.angle));
  setParameter(std::string("AvatarInfo") + ".IndustryCode", avatarInfo.industryCode);
}

std::string SubmitTextTo3DAvatarVideoTaskRequest::getTitle() const {
  return title_;
}

void SubmitTextTo3DAvatarVideoTaskRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string SubmitTextTo3DAvatarVideoTaskRequest::getExtParams() const {
  return extParams_;
}

void SubmitTextTo3DAvatarVideoTaskRequest::setExtParams(const std::string &extParams) {
  extParams_ = extParams;
  setParameter(std::string("ExtParams"), extParams);
}

SubmitTextTo3DAvatarVideoTaskRequest::VideoInfo SubmitTextTo3DAvatarVideoTaskRequest::getVideoInfo() const {
  return videoInfo_;
}

void SubmitTextTo3DAvatarVideoTaskRequest::setVideoInfo(const SubmitTextTo3DAvatarVideoTaskRequest::VideoInfo &videoInfo) {
  videoInfo_ = videoInfo;
  setParameter(std::string("VideoInfo") + ".IsAlpha", videoInfo.isAlpha ? "true" : "false");
  setParameter(std::string("VideoInfo") + ".BackgroundImageUrl", videoInfo.backgroundImageUrl);
  setParameter(std::string("VideoInfo") + ".IsSubtitles", videoInfo.isSubtitles ? "true" : "false");
  setParameter(std::string("VideoInfo") + ".SubtitleEmbedded", videoInfo.subtitleEmbedded ? "true" : "false");
  setParameter(std::string("VideoInfo") + ".Resolution", std::to_string(videoInfo.resolution));
  setParameter(std::string("VideoInfo") + ".AlphaFormat", std::to_string(videoInfo.alphaFormat));
}

std::string SubmitTextTo3DAvatarVideoTaskRequest::getCallbackParams() const {
  return callbackParams_;
}

void SubmitTextTo3DAvatarVideoTaskRequest::setCallbackParams(const std::string &callbackParams) {
  callbackParams_ = callbackParams;
  setParameter(std::string("CallbackParams"), callbackParams);
}

long SubmitTextTo3DAvatarVideoTaskRequest::getTenantId() const {
  return tenantId_;
}

void SubmitTextTo3DAvatarVideoTaskRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("TenantId"), std::to_string(tenantId));
}

bool SubmitTextTo3DAvatarVideoTaskRequest::getCallback() const {
  return callback_;
}

void SubmitTextTo3DAvatarVideoTaskRequest::setCallback(bool callback) {
  callback_ = callback;
  setParameter(std::string("Callback"), callback ? "true" : "false");
}

std::string SubmitTextTo3DAvatarVideoTaskRequest::getExtParams_CLS() const {
  return extParams_CLS_;
}

void SubmitTextTo3DAvatarVideoTaskRequest::setExtParams_CLS(const std::string &extParams_CLS) {
  extParams_CLS_ = extParams_CLS;
  setParameter(std::string("ExtParams_CLS"), extParams_CLS);
}

std::string SubmitTextTo3DAvatarVideoTaskRequest::getText() const {
  return text_;
}

void SubmitTextTo3DAvatarVideoTaskRequest::setText(const std::string &text) {
  text_ = text;
  setParameter(std::string("Text"), text);
}

std::string SubmitTextTo3DAvatarVideoTaskRequest::getCallbackParams_CLS() const {
  return callbackParams_CLS_;
}

void SubmitTextTo3DAvatarVideoTaskRequest::setCallbackParams_CLS(const std::string &callbackParams_CLS) {
  callbackParams_CLS_ = callbackParams_CLS;
  setParameter(std::string("CallbackParams_CLS"), callbackParams_CLS);
}

