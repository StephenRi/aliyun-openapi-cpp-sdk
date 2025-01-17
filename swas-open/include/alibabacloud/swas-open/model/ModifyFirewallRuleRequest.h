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

#ifndef ALIBABACLOUD_SWAS_OPEN_MODEL_MODIFYFIREWALLRULEREQUEST_H_
#define ALIBABACLOUD_SWAS_OPEN_MODEL_MODIFYFIREWALLRULEREQUEST_H_

#include <alibabacloud/swas-open/SWAS_OPENExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace SWAS_OPEN {
namespace Model {
class ALIBABACLOUD_SWAS_OPEN_EXPORT ModifyFirewallRuleRequest : public RpcServiceRequest {
public:
	ModifyFirewallRuleRequest();
	~ModifyFirewallRuleRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getSourceCidrIp() const;
	void setSourceCidrIp(const std::string &sourceCidrIp);
	std::string getRemark() const;
	void setRemark(const std::string &remark);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getRuleProtocol() const;
	void setRuleProtocol(const std::string &ruleProtocol);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getPort() const;
	void setPort(const std::string &port);
	std::string getRuleId() const;
	void setRuleId(const std::string &ruleId);

private:
	std::string clientToken_;
	std::string sourceCidrIp_;
	std::string remark_;
	std::string instanceId_;
	std::string ruleProtocol_;
	std::string regionId_;
	std::string port_;
	std::string ruleId_;
};
} // namespace Model
} // namespace SWAS_OPEN
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SWAS_OPEN_MODEL_MODIFYFIREWALLRULEREQUEST_H_
