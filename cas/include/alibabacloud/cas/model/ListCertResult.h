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

#ifndef ALIBABACLOUD_CAS_MODEL_LISTCERTRESULT_H_
#define ALIBABACLOUD_CAS_MODEL_LISTCERTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cas/CasExport.h>

namespace AlibabaCloud
{
	namespace Cas
	{
		namespace Model
		{
			class ALIBABACLOUD_CAS_EXPORT ListCertResult : public ServiceResult
			{
			public:
				struct Cert
				{
					std::string status;
					long afterDate;
					std::string identifier;
					std::string sans;
					long whId;
					std::string issuer;
					bool existPrivateKey;
					std::string sourceType;
					std::string whInstanceId;
					std::string commonName;
					long beforeDate;
				};


				ListCertResult();
				explicit ListCertResult(const std::string &payload);
				~ListCertResult();
				std::vector<Cert> getCertList()const;
				long getTotalCount()const;
				long getCurrentPage()const;
				long getShowSize()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Cert> certList_;
				long totalCount_;
				long currentPage_;
				long showSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAS_MODEL_LISTCERTRESULT_H_