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

#ifndef ALIBABACLOUD_SGW_MODEL_CREATEELASTICGATEWAYPRIVATEZONEREQUEST_H_
#define ALIBABACLOUD_SGW_MODEL_CREATEELASTICGATEWAYPRIVATEZONEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sgw/SgwExport.h>

namespace AlibabaCloud
{
	namespace Sgw
	{
		namespace Model
		{
			class ALIBABACLOUD_SGW_EXPORT CreateElasticGatewayPrivateZoneRequest : public RpcServiceRequest
			{

			public:
				CreateElasticGatewayPrivateZoneRequest();
				~CreateElasticGatewayPrivateZoneRequest();

				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getGatewayId()const;
				void setGatewayId(const std::string& gatewayId);

            private:
				std::string accessKeyId_;
				std::string securityToken_;
				std::string gatewayId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SGW_MODEL_CREATEELASTICGATEWAYPRIVATEZONEREQUEST_H_