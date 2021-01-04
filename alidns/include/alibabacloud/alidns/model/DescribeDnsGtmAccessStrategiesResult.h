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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMACCESSSTRATEGIESRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMACCESSSTRATEGIESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/alidns/AlidnsExport.h>

namespace AlibabaCloud
{
	namespace Alidns
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeDnsGtmAccessStrategiesResult : public ServiceResult
			{
			public:
				struct Strategy
				{
					struct Line
					{
						std::string groupName;
						std::string groupCode;
						std::string lineCode;
						std::string lineName;
					};
					struct EffectiveAddrPool
					{
						int lbaWeight;
						std::string id;
						std::string name;
						int addrCount;
					};
					std::vector<Strategy::EffectiveAddrPool> effectiveAddrPools;
					std::string strategyName;
					std::string effectiveAddrPoolType;
					std::string createTime;
					std::string effectiveAddrPoolGroupType;
					std::string strategyId;
					long createTimestamp;
					std::vector<Strategy::Line> lines;
					std::string effectiveLbaStrategy;
				};


				DescribeDnsGtmAccessStrategiesResult();
				explicit DescribeDnsGtmAccessStrategiesResult(const std::string &payload);
				~DescribeDnsGtmAccessStrategiesResult();
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Strategy> getStrategies()const;
				int getTotalPages()const;
				int getTotalItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int pageNumber_;
				std::vector<Strategy> strategies_;
				int totalPages_;
				int totalItems_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMACCESSSTRATEGIESRESULT_H_