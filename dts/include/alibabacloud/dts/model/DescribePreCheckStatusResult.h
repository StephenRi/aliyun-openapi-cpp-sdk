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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBEPRECHECKSTATUSRESULT_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBEPRECHECKSTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT DescribePreCheckStatusResult : public ServiceResult
			{
			public:
				struct ProgressInfo
				{
					struct JobLog
					{
						std::string errData;
						std::string errMsg;
						std::string errType;
						std::string logLevel;
					};
					std::string sourceSchema;
					std::string sub;
					std::string destSchema;
					std::string errMsg;
					std::string targetNames;
					long bootTime;
					std::vector<ProgressInfo::JobLog> logs;
					std::string names;
					std::string item;
					bool canSkip;
					std::string repairMethod;
					int delaySeconds;
					long finishTime;
					int orderNum;
					long diffRow;
					std::string parentObj;
					std::string ignoreFlag;
					std::string state;
					int total;
					bool skip;
					std::string errDetail;
					std::string jobId;
					std::string ddlSql;
				};


				DescribePreCheckStatusResult();
				explicit DescribePreCheckStatusResult(const std::string &payload);
				~DescribePreCheckStatusResult();
				std::string getState()const;
				int getTotal()const;
				int getHttpStatusCode()const;
				std::string getJobName()const;
				int getErrorItem()const;
				std::string getCode()const;
				bool getSuccess()const;
				std::vector<ProgressInfo> getJobProgress()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string state_;
				int total_;
				int httpStatusCode_;
				std::string jobName_;
				int errorItem_;
				std::string code_;
				bool success_;
				std::vector<ProgressInfo> jobProgress_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBEPRECHECKSTATUSRESULT_H_