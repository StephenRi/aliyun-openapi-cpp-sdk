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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_MODIFYAUDITLOGCONFIGREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_MODIFYAUDITLOGCONFIGREQUEST_H_

#include <alibabacloud/r-kvstore/R_kvstoreExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace R_kvstore {
namespace Model {
class ALIBABACLOUD_R_KVSTORE_EXPORT ModifyAuditLogConfigRequest : public RpcServiceRequest {
public:
	ModifyAuditLogConfigRequest();
	~ModifyAuditLogConfigRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getAuditCommand() const;
	void setAuditCommand(const std::string &auditCommand);
	std::string getAuditLogSwitchSource() const;
	void setAuditLogSwitchSource(const std::string &auditLogSwitchSource);
	std::string getProxyAudit() const;
	void setProxyAudit(const std::string &proxyAudit);
	int getRetention() const;
	void setRetention(int retention);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	bool getDbAudit() const;
	void setDbAudit(bool dbAudit);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getServiceType() const;
	void setServiceType(const std::string &serviceType);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);

private:
	long resourceOwnerId_;
	std::string accessKeyId_;
	std::string securityToken_;
	std::string auditCommand_;
	std::string auditLogSwitchSource_;
	std::string proxyAudit_;
	int retention_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	bool dbAudit_;
	long ownerId_;
	std::string serviceType_;
	std::string instanceId_;
};
} // namespace Model
} // namespace R_kvstore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_MODIFYAUDITLOGCONFIGREQUEST_H_
