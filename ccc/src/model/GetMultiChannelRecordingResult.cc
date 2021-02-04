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

#include <alibabacloud/ccc/model/GetMultiChannelRecordingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetMultiChannelRecordingResult::GetMultiChannelRecordingResult() :
	ServiceResult()
{}

GetMultiChannelRecordingResult::GetMultiChannelRecordingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMultiChannelRecordingResult::~GetMultiChannelRecordingResult()
{}

void GetMultiChannelRecordingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Recording"];
	for (auto valueDataRecording : allDataNode)
	{
		Recording dataObject;
		if(!valueDataRecording["FileName"].isNull())
			dataObject.fileName = valueDataRecording["FileName"].asString();
		if(!valueDataRecording["FileUrl"].isNull())
			dataObject.fileUrl = valueDataRecording["FileUrl"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetMultiChannelRecordingResult::getMessage()const
{
	return message_;
}

int GetMultiChannelRecordingResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<GetMultiChannelRecordingResult::Recording> GetMultiChannelRecordingResult::getData()const
{
	return data_;
}

std::string GetMultiChannelRecordingResult::getCode()const
{
	return code_;
}
