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

#include <alibabacloud/sae/model/ListChangeOrdersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

ListChangeOrdersResult::ListChangeOrdersResult() :
	ServiceResult()
{}

ListChangeOrdersResult::ListChangeOrdersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListChangeOrdersResult::~ListChangeOrdersResult()
{}

void ListChangeOrdersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stoi(dataNode["TotalSize"].asString());
	auto allChangeOrderListNode = dataNode["ChangeOrderList"]["ChangeOrder"];
	for (auto dataNodeChangeOrderListChangeOrder : allChangeOrderListNode)
	{
		Data::ChangeOrder changeOrderObject;
		if(!dataNodeChangeOrderListChangeOrder["AppId"].isNull())
			changeOrderObject.appId = dataNodeChangeOrderListChangeOrder["AppId"].asString();
		if(!dataNodeChangeOrderListChangeOrder["BatchCount"].isNull())
			changeOrderObject.batchCount = std::stoi(dataNodeChangeOrderListChangeOrder["BatchCount"].asString());
		if(!dataNodeChangeOrderListChangeOrder["BatchType"].isNull())
			changeOrderObject.batchType = dataNodeChangeOrderListChangeOrder["BatchType"].asString();
		if(!dataNodeChangeOrderListChangeOrder["ChangeOrderId"].isNull())
			changeOrderObject.changeOrderId = dataNodeChangeOrderListChangeOrder["ChangeOrderId"].asString();
		if(!dataNodeChangeOrderListChangeOrder["CoType"].isNull())
			changeOrderObject.coType = dataNodeChangeOrderListChangeOrder["CoType"].asString();
		if(!dataNodeChangeOrderListChangeOrder["CoTypeCode"].isNull())
			changeOrderObject.coTypeCode = dataNodeChangeOrderListChangeOrder["CoTypeCode"].asString();
		if(!dataNodeChangeOrderListChangeOrder["CreateTime"].isNull())
			changeOrderObject.createTime = dataNodeChangeOrderListChangeOrder["CreateTime"].asString();
		if(!dataNodeChangeOrderListChangeOrder["Description"].isNull())
			changeOrderObject.description = dataNodeChangeOrderListChangeOrder["Description"].asString();
		if(!dataNodeChangeOrderListChangeOrder["FinishTime"].isNull())
			changeOrderObject.finishTime = dataNodeChangeOrderListChangeOrder["FinishTime"].asString();
		if(!dataNodeChangeOrderListChangeOrder["GroupId"].isNull())
			changeOrderObject.groupId = dataNodeChangeOrderListChangeOrder["GroupId"].asString();
		if(!dataNodeChangeOrderListChangeOrder["Pipelines"].isNull())
			changeOrderObject.pipelines = dataNodeChangeOrderListChangeOrder["Pipelines"].asString();
		if(!dataNodeChangeOrderListChangeOrder["Source"].isNull())
			changeOrderObject.source = dataNodeChangeOrderListChangeOrder["Source"].asString();
		if(!dataNodeChangeOrderListChangeOrder["Status"].isNull())
			changeOrderObject.status = std::stoi(dataNodeChangeOrderListChangeOrder["Status"].asString());
		if(!dataNodeChangeOrderListChangeOrder["UserId"].isNull())
			changeOrderObject.userId = dataNodeChangeOrderListChangeOrder["UserId"].asString();
		if(!dataNodeChangeOrderListChangeOrder["CreateUserId"].isNull())
			changeOrderObject.createUserId = dataNodeChangeOrderListChangeOrder["CreateUserId"].asString();
		data_.changeOrderList.push_back(changeOrderObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();

}

std::string ListChangeOrdersResult::getMessage()const
{
	return message_;
}

std::string ListChangeOrdersResult::getTraceId()const
{
	return traceId_;
}

ListChangeOrdersResult::Data ListChangeOrdersResult::getData()const
{
	return data_;
}

std::string ListChangeOrdersResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListChangeOrdersResult::getCode()const
{
	return code_;
}

bool ListChangeOrdersResult::getSuccess()const
{
	return success_;
}
