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

#include <alibabacloud/facebody/model/DetectIPCPedestrianRequest.h>

using AlibabaCloud::Facebody::Model::DetectIPCPedestrianRequest;

DetectIPCPedestrianRequest::DetectIPCPedestrianRequest() :
	RpcServiceRequest("facebody", "2019-12-30", "DetectIPCPedestrian")
{
	setMethod(HttpRequest::Method::Post);
}

DetectIPCPedestrianRequest::~DetectIPCPedestrianRequest()
{}

bool DetectIPCPedestrianRequest::getContinueOnError()const
{
	return continueOnError_;
}

void DetectIPCPedestrianRequest::setContinueOnError(bool continueOnError)
{
	continueOnError_ = continueOnError;
	setBodyParameter("ContinueOnError", continueOnError ? "true" : "false");
}

int DetectIPCPedestrianRequest::getHeight()const
{
	return height_;
}

void DetectIPCPedestrianRequest::setHeight(int height)
{
	height_ = height;
	setBodyParameter("Height", std::to_string(height));
}

std::string DetectIPCPedestrianRequest::getImageData()const
{
	return imageData_;
}

void DetectIPCPedestrianRequest::setImageData(const std::string& imageData)
{
	imageData_ = imageData;
	setBodyParameter("ImageData", imageData);
}

std::string DetectIPCPedestrianRequest::getDataId()const
{
	return dataId_;
}

void DetectIPCPedestrianRequest::setDataId(const std::string& dataId)
{
	dataId_ = dataId;
	setBodyParameter("DataId", dataId);
}

std::string DetectIPCPedestrianRequest::getImageURL()const
{
	return imageURL_;
}

void DetectIPCPedestrianRequest::setImageURL(const std::string& imageURL)
{
	imageURL_ = imageURL;
	setBodyParameter("ImageURL", imageURL);
}

int DetectIPCPedestrianRequest::getWidth()const
{
	return width_;
}

void DetectIPCPedestrianRequest::setWidth(int width)
{
	width_ = width;
	setBodyParameter("Width", std::to_string(width));
}

