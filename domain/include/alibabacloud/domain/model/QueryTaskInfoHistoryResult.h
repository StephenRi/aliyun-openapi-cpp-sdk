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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_QUERYTASKINFOHISTORYRESULT_H_
#define ALIBABACLOUD_DOMAIN_MODEL_QUERYTASKINFOHISTORYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/domain/DomainExport.h>

namespace AlibabaCloud
{
	namespace Domain
	{
		namespace Model
		{
			class ALIBABACLOUD_DOMAIN_EXPORT QueryTaskInfoHistoryResult : public ServiceResult
			{
			public:
				struct CurrentPageCursor
				{
					std::string taskNo;
					int taskStatusCode;
					int taskNum;
					std::string taskType;
					std::string createTime;
					long createTimeLong;
					std::string taskStatus;
					std::string taskTypeDescription;
					std::string clientip;
				};
				struct PrePageCursor
				{
					std::string taskNo;
					int taskStatusCode;
					int taskNum;
					std::string taskType;
					std::string createTime;
					long createTimeLong;
					std::string taskStatus;
					std::string taskTypeDescription;
					std::string clientip;
				};
				struct NextPageCursor
				{
					std::string taskNo;
					int taskStatusCode;
					int taskNum;
					std::string taskType;
					std::string createTime;
					long createTimeLong;
					std::string taskStatus;
					std::string taskTypeDescription;
					std::string clientip;
				};
				struct TaskInfoHistory
				{
					std::string taskNo;
					int taskStatusCode;
					int taskNum;
					std::string taskType;
					std::string createTime;
					long createTimeLong;
					std::string taskStatus;
					std::string taskTypeDescription;
					std::string clientip;
				};


				QueryTaskInfoHistoryResult();
				explicit QueryTaskInfoHistoryResult(const std::string &payload);
				~QueryTaskInfoHistoryResult();
				int getPageSize()const;
				CurrentPageCursor getCurrentPageCursor()const;
				std::vector<TaskInfoHistory> getObjects()const;
				PrePageCursor getPrePageCursor()const;
				NextPageCursor getNextPageCursor()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				CurrentPageCursor currentPageCursor_;
				std::vector<TaskInfoHistory> objects_;
				PrePageCursor prePageCursor_;
				NextPageCursor nextPageCursor_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_QUERYTASKINFOHISTORYRESULT_H_