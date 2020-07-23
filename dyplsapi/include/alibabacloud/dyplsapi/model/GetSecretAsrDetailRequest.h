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

#ifndef ALIBABACLOUD_DYPLSAPI_MODEL_GETSECRETASRDETAILREQUEST_H_
#define ALIBABACLOUD_DYPLSAPI_MODEL_GETSECRETASRDETAILREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dyplsapi/DyplsapiExport.h>

namespace AlibabaCloud
{
	namespace Dyplsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYPLSAPI_EXPORT GetSecretAsrDetailRequest : public RpcServiceRequest
			{

			public:
				GetSecretAsrDetailRequest();
				~GetSecretAsrDetailRequest();

				std::string getCallId()const;
				void setCallId(const std::string& callId);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getCallTime()const;
				void setCallTime(const std::string& callTime);
				std::string getPoolKey()const;
				void setPoolKey(const std::string& poolKey);

            private:
				std::string callId_;
				long resourceOwnerId_;
				std::string accessKeyId_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::string callTime_;
				std::string poolKey_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYPLSAPI_MODEL_GETSECRETASRDETAILREQUEST_H_