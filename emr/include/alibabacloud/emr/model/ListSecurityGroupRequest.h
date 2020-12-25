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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTSECURITYGROUPREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_LISTSECURITYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListSecurityGroupRequest : public RpcServiceRequest
			{

			public:
				ListSecurityGroupRequest();
				~ListSecurityGroupRequest();

				std::string getDepositType()const;
				void setDepositType(const std::string& depositType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getProductType()const;
				void setProductType(const std::string& productType);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getNetType()const;
				void setNetType(const std::string& netType);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);

            private:
				std::string depositType_;
				std::string accessKeyId_;
				std::string productType_;
				std::string regionId_;
				std::string netType_;
				std::string vpcId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTSECURITYGROUPREQUEST_H_