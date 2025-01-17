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

#ifndef ALIBABACLOUD_SWAS_OPEN_MODEL_LISTINSTANCESRESULT_H_
#define ALIBABACLOUD_SWAS_OPEN_MODEL_LISTINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/swas-open/SWAS_OPENExport.h>

namespace AlibabaCloud
{
	namespace SWAS_OPEN
	{
		namespace Model
		{
			class ALIBABACLOUD_SWAS_OPEN_EXPORT ListInstancesResult : public ServiceResult
			{
			public:
				struct Instance
				{
					struct ResourceSpec
					{
						double memory;
						int bandwidth;
						int diskSize;
						std::string diskCategory;
						int cpu;
						double flow;
					};
					struct Image
					{
						std::string imageName;
						std::string imageVersion;
						std::string osType;
						std::string imageIconUrl;
						std::string imageContact;
						std::string imageType;
					};
					std::string status;
					std::string disableReason;
					std::string instanceId;
					std::string planId;
					ResourceSpec resourceSpec;
					std::string ddosStatus;
					Image image;
					std::string combinationInstanceId;
					std::string businessStatus;
					std::string publicIpAddress;
					std::string instanceName;
					std::string innerIpAddress;
					std::string uuid;
					std::string chargeType;
					bool combination;
					std::string expiredTime;
					std::string creationTime;
					std::string imageId;
					std::string regionId;
				};


				ListInstancesResult();
				explicit ListInstancesResult(const std::string &payload);
				~ListInstancesResult();
				std::vector<Instance> getInstances()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Instance> instances_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SWAS_OPEN_MODEL_LISTINSTANCESRESULT_H_