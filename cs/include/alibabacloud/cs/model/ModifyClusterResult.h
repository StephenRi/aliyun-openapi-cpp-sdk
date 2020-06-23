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

#ifndef ALIBABACLOUD_CS_MODEL_MODIFYCLUSTERRESULT_H_
#define ALIBABACLOUD_CS_MODEL_MODIFYCLUSTERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cs/CSExport.h>

namespace AlibabaCloud
{
	namespace CS
	{
		namespace Model
		{
			class ALIBABACLOUD_CS_EXPORT ModifyClusterResult : public ServiceResult
			{
			public:


				ModifyClusterResult();
				explicit ModifyClusterResult(const std::string &payload);
				~ModifyClusterResult();
				std::string getRequest_id()const;
				std::string getCluster_id()const;
				std::string getInstanceId()const;
				std::string getTask_id()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string request_id_;
				std::string cluster_id_;
				std::string instanceId_;
				std::string task_id_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_MODIFYCLUSTERRESULT_H_