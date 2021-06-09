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

#ifndef ALIBABACLOUD_IOT_MODEL_CANCELOTATASKBYJOBREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_CANCELOTATASKBYJOBREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/iot/IotExport.h>

namespace AlibabaCloud
{
	namespace Iot
	{
		namespace Model
		{
			class ALIBABACLOUD_IOT_EXPORT CancelOTATaskByJobRequest : public RpcServiceRequest
			{

			public:
				CancelOTATaskByJobRequest();
				~CancelOTATaskByJobRequest();

				bool getCancelScheduledTask()const;
				void setCancelScheduledTask(bool cancelScheduledTask);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getJobId()const;
				void setJobId(const std::string& jobId);
				bool getCancelUnconfirmedTask()const;
				void setCancelUnconfirmedTask(bool cancelUnconfirmedTask);
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				bool getCancelQueuedTask()const;
				void setCancelQueuedTask(bool cancelQueuedTask);
				bool getCancelInProgressTask()const;
				void setCancelInProgressTask(bool cancelInProgressTask);
				bool getCancelNotifiedTask()const;
				void setCancelNotifiedTask(bool cancelNotifiedTask);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);

            private:
				bool cancelScheduledTask_;
				std::string accessKeyId_;
				std::string jobId_;
				bool cancelUnconfirmedTask_;
				std::string iotInstanceId_;
				bool cancelQueuedTask_;
				bool cancelInProgressTask_;
				bool cancelNotifiedTask_;
				std::string apiProduct_;
				std::string apiRevision_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_CANCELOTATASKBYJOBREQUEST_H_