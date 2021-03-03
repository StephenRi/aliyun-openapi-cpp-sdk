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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEREALTIMEPROCESSREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEREALTIMEPROCESSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT CreateRealTimeProcessRequest : public RpcServiceRequest
			{

			public:
				CreateRealTimeProcessRequest();
				~CreateRealTimeProcessRequest();

				std::string getJobConfig()const;
				void setJobConfig(const std::string& jobConfig);
				bool getCreateResGroup()const;
				void setCreateResGroup(bool createResGroup);
				std::string getDataworksVersion()const;
				void setDataworksVersion(const std::string& dataworksVersion);
				std::string getResourceSpec()const;
				void setResourceSpec(const std::string& resourceSpec);
				std::string getTableRule()const;
				void setTableRule(const std::string& tableRule);
				std::string getTables()const;
				void setTables(const std::string& tables);
				std::string getDataSource()const;
				void setDataSource(const std::string& dataSource);

            private:
				std::string jobConfig_;
				bool createResGroup_;
				std::string dataworksVersion_;
				std::string resourceSpec_;
				std::string tableRule_;
				std::string tables_;
				std::string dataSource_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEREALTIMEPROCESSREQUEST_H_