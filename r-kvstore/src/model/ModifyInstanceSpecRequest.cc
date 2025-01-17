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

#include <alibabacloud/r-kvstore/model/ModifyInstanceSpecRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyInstanceSpecRequest;

ModifyInstanceSpecRequest::ModifyInstanceSpecRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyInstanceSpec") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceSpecRequest::~ModifyInstanceSpecRequest() {}

long ModifyInstanceSpecRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstanceSpecRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyInstanceSpecRequest::getClientToken() const {
  return clientToken_;
}

void ModifyInstanceSpecRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyInstanceSpecRequest::getCouponNo() const {
  return couponNo_;
}

void ModifyInstanceSpecRequest::setCouponNo(const std::string &couponNo) {
  couponNo_ = couponNo;
  setParameter(std::string("CouponNo"), couponNo);
}

std::string ModifyInstanceSpecRequest::getInstanceClass() const {
  return instanceClass_;
}

void ModifyInstanceSpecRequest::setInstanceClass(const std::string &instanceClass) {
  instanceClass_ = instanceClass;
  setParameter(std::string("InstanceClass"), instanceClass);
}

std::string ModifyInstanceSpecRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyInstanceSpecRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyInstanceSpecRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyInstanceSpecRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyInstanceSpecRequest::getRegionId() const {
  return regionId_;
}

void ModifyInstanceSpecRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyInstanceSpecRequest::getEffectiveTime() const {
  return effectiveTime_;
}

void ModifyInstanceSpecRequest::setEffectiveTime(const std::string &effectiveTime) {
  effectiveTime_ = effectiveTime;
  setParameter(std::string("EffectiveTime"), effectiveTime);
}

std::string ModifyInstanceSpecRequest::getSourceBiz() const {
  return sourceBiz_;
}

void ModifyInstanceSpecRequest::setSourceBiz(const std::string &sourceBiz) {
  sourceBiz_ = sourceBiz;
  setParameter(std::string("SourceBiz"), sourceBiz);
}

std::string ModifyInstanceSpecRequest::getBusinessInfo() const {
  return businessInfo_;
}

void ModifyInstanceSpecRequest::setBusinessInfo(const std::string &businessInfo) {
  businessInfo_ = businessInfo;
  setParameter(std::string("BusinessInfo"), businessInfo);
}

bool ModifyInstanceSpecRequest::getAutoPay() const {
  return autoPay_;
}

void ModifyInstanceSpecRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string ModifyInstanceSpecRequest::getFromApp() const {
  return fromApp_;
}

void ModifyInstanceSpecRequest::setFromApp(const std::string &fromApp) {
  fromApp_ = fromApp;
  setParameter(std::string("FromApp"), fromApp);
}

std::string ModifyInstanceSpecRequest::getMajorVersion() const {
  return majorVersion_;
}

void ModifyInstanceSpecRequest::setMajorVersion(const std::string &majorVersion) {
  majorVersion_ = majorVersion;
  setParameter(std::string("MajorVersion"), majorVersion);
}

std::string ModifyInstanceSpecRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInstanceSpecRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyInstanceSpecRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyInstanceSpecRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyInstanceSpecRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceSpecRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyInstanceSpecRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceSpecRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

bool ModifyInstanceSpecRequest::getForceUpgrade() const {
  return forceUpgrade_;
}

void ModifyInstanceSpecRequest::setForceUpgrade(bool forceUpgrade) {
  forceUpgrade_ = forceUpgrade;
  setParameter(std::string("ForceUpgrade"), forceUpgrade ? "true" : "false");
}

std::string ModifyInstanceSpecRequest::getOrderType() const {
  return orderType_;
}

void ModifyInstanceSpecRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

