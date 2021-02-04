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

#ifndef ALIBABACLOUD_DG_MODEL_RETRYDATABASERESULT_H_
#define ALIBABACLOUD_DG_MODEL_RETRYDATABASERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dg/DgExport.h>

namespace AlibabaCloud
{
	namespace Dg
	{
		namespace Model
		{
			class ALIBABACLOUD_DG_EXPORT RetryDatabaseResult : public ServiceResult
			{
			public:


				RetryDatabaseResult();
				explicit RetryDatabaseResult(const std::string &payload);
				~RetryDatabaseResult();
				std::string getErrorMsg()const;
				std::string getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string errorMsg_;
				std::string data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DG_MODEL_RETRYDATABASERESULT_H_