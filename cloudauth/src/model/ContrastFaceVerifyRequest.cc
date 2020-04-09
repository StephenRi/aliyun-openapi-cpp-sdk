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

#include <alibabacloud/cloudauth/model/ContrastFaceVerifyRequest.h>

using AlibabaCloud::Cloudauth::Model::ContrastFaceVerifyRequest;

ContrastFaceVerifyRequest::ContrastFaceVerifyRequest() :
	RpcServiceRequest("cloudauth", "2019-03-07", "ContrastFaceVerify")
{
	setMethod(HttpRequest::Method::Post);
}

ContrastFaceVerifyRequest::~ContrastFaceVerifyRequest()
{}

std::string ContrastFaceVerifyRequest::getProductCode()const
{
	return productCode_;
}

void ContrastFaceVerifyRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setParameter("ProductCode", productCode);
}

std::string ContrastFaceVerifyRequest::getOssObjectName()const
{
	return ossObjectName_;
}

void ContrastFaceVerifyRequest::setOssObjectName(const std::string& ossObjectName)
{
	ossObjectName_ = ossObjectName;
	setParameter("OssObjectName", ossObjectName);
}

std::string ContrastFaceVerifyRequest::getFaceContrastPicture()const
{
	return faceContrastPicture_;
}

void ContrastFaceVerifyRequest::setFaceContrastPicture(const std::string& faceContrastPicture)
{
	faceContrastPicture_ = faceContrastPicture;
	setParameter("FaceContrastPicture", faceContrastPicture);
}

std::string ContrastFaceVerifyRequest::getCertName()const
{
	return certName_;
}

void ContrastFaceVerifyRequest::setCertName(const std::string& certName)
{
	certName_ = certName;
	setParameter("CertName", certName);
}

std::string ContrastFaceVerifyRequest::getIp()const
{
	return ip_;
}

void ContrastFaceVerifyRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setParameter("Ip", ip);
}

std::string ContrastFaceVerifyRequest::getMobile()const
{
	return mobile_;
}

void ContrastFaceVerifyRequest::setMobile(const std::string& mobile)
{
	mobile_ = mobile;
	setParameter("Mobile", mobile);
}

std::string ContrastFaceVerifyRequest::getDeviceToken()const
{
	return deviceToken_;
}

void ContrastFaceVerifyRequest::setDeviceToken(const std::string& deviceToken)
{
	deviceToken_ = deviceToken;
	setParameter("DeviceToken", deviceToken);
}

std::string ContrastFaceVerifyRequest::getUserId()const
{
	return userId_;
}

void ContrastFaceVerifyRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string ContrastFaceVerifyRequest::getCertifyId()const
{
	return certifyId_;
}

void ContrastFaceVerifyRequest::setCertifyId(const std::string& certifyId)
{
	certifyId_ = certifyId;
	setParameter("CertifyId", certifyId);
}

std::string ContrastFaceVerifyRequest::getCertNo()const
{
	return certNo_;
}

void ContrastFaceVerifyRequest::setCertNo(const std::string& certNo)
{
	certNo_ = certNo;
	setParameter("CertNo", certNo);
}

std::string ContrastFaceVerifyRequest::getOuterOrderNo()const
{
	return outerOrderNo_;
}

void ContrastFaceVerifyRequest::setOuterOrderNo(const std::string& outerOrderNo)
{
	outerOrderNo_ = outerOrderNo;
	setParameter("OuterOrderNo", outerOrderNo);
}

std::string ContrastFaceVerifyRequest::getCertType()const
{
	return certType_;
}

void ContrastFaceVerifyRequest::setCertType(const std::string& certType)
{
	certType_ = certType;
	setParameter("CertType", certType);
}

std::string ContrastFaceVerifyRequest::getFaceContrastPictureUrl()const
{
	return faceContrastPictureUrl_;
}

void ContrastFaceVerifyRequest::setFaceContrastPictureUrl(const std::string& faceContrastPictureUrl)
{
	faceContrastPictureUrl_ = faceContrastPictureUrl;
	setParameter("FaceContrastPictureUrl", faceContrastPictureUrl);
}

long ContrastFaceVerifyRequest::getSceneId()const
{
	return sceneId_;
}

void ContrastFaceVerifyRequest::setSceneId(long sceneId)
{
	sceneId_ = sceneId;
	setParameter("SceneId", std::to_string(sceneId));
}

std::string ContrastFaceVerifyRequest::getOssBucketName()const
{
	return ossBucketName_;
}

void ContrastFaceVerifyRequest::setOssBucketName(const std::string& ossBucketName)
{
	ossBucketName_ = ossBucketName;
	setParameter("OssBucketName", ossBucketName);
}
