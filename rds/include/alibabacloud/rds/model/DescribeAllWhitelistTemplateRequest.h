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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEALLWHITELISTTEMPLATEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEALLWHITELISTTEMPLATEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DescribeAllWhitelistTemplateRequest : public RpcServiceRequest {
public:
	DescribeAllWhitelistTemplateRequest();
	~DescribeAllWhitelistTemplateRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getPageNumbers() const;
	void setPageNumbers(int pageNumbers);
	std::string getTemplateName() const;
	void setTemplateName(const std::string &templateName);
	bool getFuzzySearch() const;
	void setFuzzySearch(bool fuzzySearch);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	int getMaxRecordsPerPage() const;
	void setMaxRecordsPerPage(int maxRecordsPerPage);

private:
	long resourceOwnerId_;
	int pageNumbers_;
	std::string templateName_;
	bool fuzzySearch_;
	std::string resourceOwnerAccount_;
	int maxRecordsPerPage_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEALLWHITELISTTEMPLATEREQUEST_H_
