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

#ifndef ALIBABACLOUD_SAS_MODEL_LISTCHECKITEMWARNINGMACHINEREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_LISTCHECKITEMWARNINGMACHINEREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT ListCheckItemWarningMachineRequest : public RpcServiceRequest {
public:
	ListCheckItemWarningMachineRequest();
	~ListCheckItemWarningMachineRequest();
	std::string getRiskType() const;
	void setRiskType(const std::string &riskType);
	std::string getRemark() const;
	void setRemark(const std::string &remark);
	std::string getContainerFieldName() const;
	void setContainerFieldName(const std::string &containerFieldName);
	std::string getContainerFieldValue() const;
	void setContainerFieldValue(const std::string &containerFieldValue);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	long getCheckId() const;
	void setCheckId(long checkId);
	long getGroupId() const;
	void setGroupId(long groupId);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	int getStatus() const;
	void setStatus(int status);

private:
	std::string riskType_;
	std::string remark_;
	std::string containerFieldName_;
	std::string containerFieldValue_;
	int pageSize_;
	std::string lang_;
	long checkId_;
	long groupId_;
	int currentPage_;
	int status_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_LISTCHECKITEMWARNINGMACHINEREQUEST_H_
