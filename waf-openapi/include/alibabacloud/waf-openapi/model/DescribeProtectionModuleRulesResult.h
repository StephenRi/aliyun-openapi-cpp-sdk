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

#ifndef ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBEPROTECTIONMODULERULESRESULT_H_
#define ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBEPROTECTIONMODULERULESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/waf-openapi/Waf_openapiExport.h>

namespace AlibabaCloud
{
	namespace Waf_openapi
	{
		namespace Model
		{
			class ALIBABACLOUD_WAF_OPENAPI_EXPORT DescribeProtectionModuleRulesResult : public ServiceResult
			{
			public:
				struct ModuleRulesItem
				{
					long version;
					std::string content;
					long time;
					long id;
				};


				DescribeProtectionModuleRulesResult();
				explicit DescribeProtectionModuleRulesResult(const std::string &payload);
				~DescribeProtectionModuleRulesResult();
				std::vector<ModuleRulesItem> getModuleRules()const;
				int getTotal()const;
				int getTaskStatus()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ModuleRulesItem> moduleRules_;
				int total_;
				int taskStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBEPROTECTIONMODULERULESRESULT_H_