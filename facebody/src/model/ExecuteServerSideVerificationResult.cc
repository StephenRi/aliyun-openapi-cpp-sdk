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

#include <alibabacloud/facebody/model/ExecuteServerSideVerificationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Facebody;
using namespace AlibabaCloud::Facebody::Model;

ExecuteServerSideVerificationResult::ExecuteServerSideVerificationResult() :
	ServiceResult()
{}

ExecuteServerSideVerificationResult::ExecuteServerSideVerificationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ExecuteServerSideVerificationResult::~ExecuteServerSideVerificationResult()
{}

void ExecuteServerSideVerificationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Pass"].isNull())
		data_.pass = dataNode["Pass"].asString() == "true";
	if(!dataNode["VerificationToken"].isNull())
		data_.verificationToken = dataNode["VerificationToken"].asString();
	if(!dataNode["Reason"].isNull())
		data_.reason = dataNode["Reason"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ExecuteServerSideVerificationResult::getMessage()const
{
	return message_;
}

ExecuteServerSideVerificationResult::Data ExecuteServerSideVerificationResult::getData()const
{
	return data_;
}

std::string ExecuteServerSideVerificationResult::getCode()const
{
	return code_;
}

