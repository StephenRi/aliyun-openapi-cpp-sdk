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

#include <alibabacloud/waf-openapi/model/ModifyAclRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Waf_openapi;
using namespace AlibabaCloud::Waf_openapi::Model;

ModifyAclRuleResult::ModifyAclRuleResult() :
	ServiceResult()
{}

ModifyAclRuleResult::ModifyAclRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyAclRuleResult::~ModifyAclRuleResult()
{}

void ModifyAclRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["WafTaskId"].isNull())
		result_.wafTaskId = resultNode["WafTaskId"].asString();
	if(!resultNode["Status"].isNull())
		result_.status = std::stoi(resultNode["Status"].asString());

}

ModifyAclRuleResult::Result ModifyAclRuleResult::getResult()const
{
	return result_;
}

