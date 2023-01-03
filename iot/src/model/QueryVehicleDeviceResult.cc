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

#include <alibabacloud/iot/model/QueryVehicleDeviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryVehicleDeviceResult::QueryVehicleDeviceResult() :
	ServiceResult()
{}

QueryVehicleDeviceResult::QueryVehicleDeviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryVehicleDeviceResult::~QueryVehicleDeviceResult()
{}

void QueryVehicleDeviceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["IotId"].isNull())
		data_.iotId = dataNode["IotId"].asString();
	if(!dataNode["ProductKey"].isNull())
		data_.productKey = dataNode["ProductKey"].asString();
	if(!dataNode["DeviceName"].isNull())
		data_.deviceName = dataNode["DeviceName"].asString();
	if(!dataNode["Manufacturer"].isNull())
		data_.manufacturer = dataNode["Manufacturer"].asString();
	if(!dataNode["DeviceModel"].isNull())
		data_.deviceModel = dataNode["DeviceModel"].asString();
	if(!dataNode["DeviceId"].isNull())
		data_.deviceId = dataNode["DeviceId"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["AuthCode"].isNull())
		data_.authCode = dataNode["AuthCode"].asString();
	if(!dataNode["Province"].isNull())
		data_.province = dataNode["Province"].asString();
	if(!dataNode["City"].isNull())
		data_.city = dataNode["City"].asString();
	if(!dataNode["VehicleColour"].isNull())
		data_.vehicleColour = dataNode["VehicleColour"].asString();
	if(!dataNode["VehicleNumber"].isNull())
		data_.vehicleNumber = dataNode["VehicleNumber"].asString();
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = std::stol(dataNode["CreateTime"].asString());
	if(!dataNode["ModifiedTime"].isNull())
		data_.modifiedTime = std::stol(dataNode["ModifiedTime"].asString());
	if(!dataNode["RegisterTime"].isNull())
		data_.registerTime = std::stol(dataNode["RegisterTime"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QueryVehicleDeviceResult::Data QueryVehicleDeviceResult::getData()const
{
	return data_;
}

std::string QueryVehicleDeviceResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryVehicleDeviceResult::getCode()const
{
	return code_;
}

bool QueryVehicleDeviceResult::getSuccess()const
{
	return success_;
}

