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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_SEARCHMANUALDAGNODEINSTANCERESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_SEARCHMANUALDAGNODEINSTANCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT SearchManualDagNodeInstanceResult : public ServiceResult
			{
			public:
				struct NodeInsInfo
				{
					int status;
					std::string modifyTime;
					long instanceId;
					int dagType;
					std::string nodeName;
					std::string createTime;
					std::string beginWaitTimeTime;
					long dagId;
					std::string bizdate;
					std::string beginRunningTime;
					std::string finishTime;
					std::string beginWaitResTime;
					std::string paraValue;
				};


				SearchManualDagNodeInstanceResult();
				explicit SearchManualDagNodeInstanceResult(const std::string &payload);
				~SearchManualDagNodeInstanceResult();
				std::string getErrMsg()const;
				std::vector<NodeInsInfo> getData()const;
				bool getSuccess()const;
				std::string getErrCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string errMsg_;
				std::vector<NodeInsInfo> data_;
				bool success_;
				std::string errCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_SEARCHMANUALDAGNODEINSTANCERESULT_H_