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

#ifndef ALIBABACLOUD_CCC_MODEL_GETMONORECORDINGREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_GETMONORECORDINGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT GetMonoRecordingRequest : public RpcServiceRequest
			{

			public:
				GetMonoRecordingRequest();
				~GetMonoRecordingRequest();

				std::string getContactId()const;
				void setContactId(const std::string& contactId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);

            private:
				std::string contactId_;
				std::string instanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_GETMONORECORDINGREQUEST_H_