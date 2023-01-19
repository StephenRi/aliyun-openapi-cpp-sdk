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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEBACKUPMACHINESTATUSRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEBACKUPMACHINESTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeBackupMachineStatusResult : public ServiceResult
			{
			public:
				struct BackupMachineStatus
				{
					struct BackupErrorMsg
					{
						std::string path;
						long errorTime;
						std::string errorFile;
						std::string requestId;
						std::string errorType;
						std::string errorStatus;
						std::string errorMsg;
						std::string errorFileUrl;
						std::string errorCode;
						std::string key;
					};
					std::string status;
					std::string clientStatus;
					std::string uuid;
					std::vector<BackupErrorMsg> errorList;
					std::string instanceId;
					std::string clientId;
					std::string errorCode;
					std::string regionId;
					std::string vaultId;
					int savedBackupCount;
					std::string clientVersion;
				};


				DescribeBackupMachineStatusResult();
				explicit DescribeBackupMachineStatusResult(const std::string &payload);
				~DescribeBackupMachineStatusResult();
				BackupMachineStatus getBackupMachineStatus()const;

			protected:
				void parse(const std::string &payload);
			private:
				BackupMachineStatus backupMachineStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEBACKUPMACHINESTATUSRESULT_H_