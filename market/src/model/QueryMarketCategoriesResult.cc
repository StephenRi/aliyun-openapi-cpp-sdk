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

#include <alibabacloud/market/model/QueryMarketCategoriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Market;
using namespace AlibabaCloud::Market::Model;

QueryMarketCategoriesResult::QueryMarketCategoriesResult() :
	ServiceResult()
{}

QueryMarketCategoriesResult::QueryMarketCategoriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMarketCategoriesResult::~QueryMarketCategoriesResult()
{}

void QueryMarketCategoriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCategories = value["Categories"]["Category"];
	for (auto value : allCategories)
	{
		Category categoriesObject;
		if(!value["Id"].isNull())
			categoriesObject.id = std::stol(value["Id"].asString());
		if(!value["CategoryCode"].isNull())
			categoriesObject.categoryCode = value["CategoryCode"].asString();
		if(!value["CategoryName"].isNull())
			categoriesObject.categoryName = value["CategoryName"].asString();
		auto allChildCategories = value["ChildCategories"]["ChildCategory"];
		for (auto value : allChildCategories)
		{
			Category::ChildCategory childCategoriesObject;
			if(!value["Id"].isNull())
				childCategoriesObject.id = std::stol(value["Id"].asString());
			if(!value["CategoryCode"].isNull())
				childCategoriesObject.categoryCode = value["CategoryCode"].asString();
			if(!value["CategoryName"].isNull())
				childCategoriesObject.categoryName = value["CategoryName"].asString();
			categoriesObject.childCategories.push_back(childCategoriesObject);
		}
		categories_.push_back(categoriesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int QueryMarketCategoriesResult::getTotalCount()const
{
	return totalCount_;
}

int QueryMarketCategoriesResult::getPageSize()const
{
	return pageSize_;
}

std::vector<QueryMarketCategoriesResult::Category> QueryMarketCategoriesResult::getCategories()const
{
	return categories_;
}

int QueryMarketCategoriesResult::getPageNumber()const
{
	return pageNumber_;
}

