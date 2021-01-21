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

#ifndef ALIBABACLOUD_PRIVATELINK_MODEL_LISTVPCENDPOINTSERVICESBYENDUSERREQUEST_H_
#define ALIBABACLOUD_PRIVATELINK_MODEL_LISTVPCENDPOINTSERVICESBYENDUSERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/privatelink/PrivatelinkExport.h>

namespace AlibabaCloud
{
	namespace Privatelink
	{
		namespace Model
		{
			class ALIBABACLOUD_PRIVATELINK_EXPORT ListVpcEndpointServicesByEndUserRequest : public RpcServiceRequest
			{

			public:
				ListVpcEndpointServicesByEndUserRequest();
				~ListVpcEndpointServicesByEndUserRequest();

				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				std::string getServiceName()const;
				void setServiceName(const std::string& serviceName);
				int getMaxResults()const;
				void setMaxResults(int maxResults);
				std::string getServiceId()const;
				void setServiceId(const std::string& serviceId);

            private:
				std::string regionId_;
				std::string nextToken_;
				std::string serviceName_;
				int maxResults_;
				std::string serviceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PRIVATELINK_MODEL_LISTVPCENDPOINTSERVICESBYENDUSERREQUEST_H_