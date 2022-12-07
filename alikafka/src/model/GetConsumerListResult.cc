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

#include <alibabacloud/alikafka/model/GetConsumerListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alikafka;
using namespace AlibabaCloud::Alikafka::Model;

GetConsumerListResult::GetConsumerListResult() :
	ServiceResult()
{}

GetConsumerListResult::GetConsumerListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetConsumerListResult::~GetConsumerListResult()
{}

void GetConsumerListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConsumerListNode = value["ConsumerList"]["ConsumerVO"];
	for (auto valueConsumerListConsumerVO : allConsumerListNode)
	{
		ConsumerVO consumerListObject;
		if(!valueConsumerListConsumerVO["ConsumerId"].isNull())
			consumerListObject.consumerId = valueConsumerListConsumerVO["ConsumerId"].asString();
		if(!valueConsumerListConsumerVO["InstanceId"].isNull())
			consumerListObject.instanceId = valueConsumerListConsumerVO["InstanceId"].asString();
		if(!valueConsumerListConsumerVO["Remark"].isNull())
			consumerListObject.remark = valueConsumerListConsumerVO["Remark"].asString();
		if(!valueConsumerListConsumerVO["RegionId"].isNull())
			consumerListObject.regionId = valueConsumerListConsumerVO["RegionId"].asString();
		auto allTagsNode = valueConsumerListConsumerVO["Tags"]["TagVO"];
		for (auto valueConsumerListConsumerVOTagsTagVO : allTagsNode)
		{
			ConsumerVO::TagVO tagsObject;
			if(!valueConsumerListConsumerVOTagsTagVO["Key"].isNull())
				tagsObject.key = valueConsumerListConsumerVOTagsTagVO["Key"].asString();
			if(!valueConsumerListConsumerVOTagsTagVO["Value"].isNull())
				tagsObject.value = valueConsumerListConsumerVOTagsTagVO["Value"].asString();
			consumerListObject.tags.push_back(tagsObject);
		}
		consumerList_.push_back(consumerListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetConsumerListResult::getMessage()const
{
	return message_;
}

std::vector<GetConsumerListResult::ConsumerVO> GetConsumerListResult::getConsumerList()const
{
	return consumerList_;
}

int GetConsumerListResult::getCode()const
{
	return code_;
}

bool GetConsumerListResult::getSuccess()const
{
	return success_;
}

