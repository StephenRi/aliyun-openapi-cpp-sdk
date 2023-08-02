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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCEDATABLOATRESULT_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCEDATABLOATRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/gpdb/GpdbExport.h>

namespace AlibabaCloud
{
	namespace Gpdb
	{
		namespace Model
		{
			class ALIBABACLOUD_GPDB_EXPORT DescribeDBInstanceDataBloatResult : public ServiceResult
			{
			public:
				struct ItemsItem
				{
					std::string expectTableSize;
					std::string tableName;
					std::string storageType;
					std::string databaseName;
					int sequence;
					std::string bloatCeoff;
					std::string realTableSize;
					std::string timeLastUpdated;
					std::string schemaName;
					std::string bloatSize;
					std::string timeLastVacuumed;
					std::string suggestedAction;
				};


				DescribeDBInstanceDataBloatResult();
				explicit DescribeDBInstanceDataBloatResult(const std::string &payload);
				~DescribeDBInstanceDataBloatResult();
				int getTotalCount()const;
				int getPageNumber()const;
				std::vector<ItemsItem> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageNumber_;
				std::vector<ItemsItem> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCEDATABLOATRESULT_H_