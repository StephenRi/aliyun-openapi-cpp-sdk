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

#ifndef ALIBABACLOUD_VS_MODEL_STOPMOVEREQUEST_H_
#define ALIBABACLOUD_VS_MODEL_STOPMOVEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT StopMoveRequest : public RpcServiceRequest
			{

			public:
				StopMoveRequest();
				~StopMoveRequest();

				bool getTilt()const;
				void setTilt(bool tilt);
				std::string getId()const;
				void setId(const std::string& id);
				bool getPan()const;
				void setPan(bool pan);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				bool getZoom()const;
				void setZoom(bool zoom);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				bool tilt_;
				std::string id_;
				bool pan_;
				std::string showLog_;
				bool zoom_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_STOPMOVEREQUEST_H_