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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMINSTANCEADDRESSPOOLSRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMINSTANCEADDRESSPOOLSRESULT_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeDnsGtmInstanceAddressPoolsResult : public ServiceResult
			{
			public:
				struct AddrPool
				{
					std::string type;
					std::string lbaStrategy;
					std::string createTime;
					std::string addrPoolId;
					std::string updateTime;
					long updateTimestamp;
					std::string monitorConfigId;
					long createTimestamp;
					std::string monitorStatus;
					int addrCount;
					std::string name;
				};


				DescribeDnsGtmInstanceAddressPoolsResult();
				explicit DescribeDnsGtmInstanceAddressPoolsResult(const std::string &payload);
				~DescribeDnsGtmInstanceAddressPoolsResult();
				int getPageSize()const;
				int getPageNumber()const;
				int getTotalPages()const;
				int getTotalItems()const;
				std::vector<AddrPool> getAddrPools()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int pageNumber_;
				int totalPages_;
				int totalItems_;
				std::vector<AddrPool> addrPools_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMINSTANCEADDRESSPOOLSRESULT_H_