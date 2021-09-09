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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_GETPERIODINFOREQUEST_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_GETPERIODINFOREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/companyreg/CompanyregExport.h>

namespace AlibabaCloud
{
	namespace Companyreg
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPANYREG_EXPORT GetPeriodInfoRequest : public RpcServiceRequest
			{

			public:
				GetPeriodInfoRequest();
				~GetPeriodInfoRequest();

				std::string getPeriod()const;
				void setPeriod(const std::string& period);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);

            private:
				std::string period_;
				std::string bizId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_GETPERIODINFOREQUEST_H_