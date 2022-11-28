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

#ifndef ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERCIDRRESULT_H_
#define ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERCIDRRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cbn/CbnExport.h>

namespace AlibabaCloud
{
	namespace Cbn
	{
		namespace Model
		{
			class ALIBABACLOUD_CBN_EXPORT ListTransitRouterCidrResult : public ServiceResult
			{
			public:
				struct CidrListsItem
				{
					std::string description;
					std::string cidr;
					std::string transitRouterCidrId;
					std::string family;
					bool publishCidrRoute;
					std::string name;
					std::string transitRouterId;
				};


				ListTransitRouterCidrResult();
				explicit ListTransitRouterCidrResult(const std::string &payload);
				~ListTransitRouterCidrResult();
				std::vector<CidrListsItem> getCidrLists()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<CidrListsItem> cidrLists_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERCIDRRESULT_H_