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

#ifndef ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_UPDATESERVICEREQUEST_H_
#define ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_UPDATESERVICEREQUEST_H_

#include <alibabacloud/computenestsupplier/ComputeNestSupplierExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ComputeNestSupplier {
namespace Model {
class ALIBABACLOUD_COMPUTENESTSUPPLIER_EXPORT UpdateServiceRequest : public RpcServiceRequest {
public:
	struct ServiceInfo {
		std::string shortDescription;
		std::string image;
		std::string name;
		std::string locale;
	};
	UpdateServiceRequest();
	~UpdateServiceRequest();
	std::string getAlarmMetadata() const;
	void setAlarmMetadata(const std::string &alarmMetadata);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getPolicyNames() const;
	void setPolicyNames(const std::string &policyNames);
	std::string getLicenseMetadata() const;
	void setLicenseMetadata(const std::string &licenseMetadata);
	long getDuration() const;
	void setDuration(long duration);
	int getTrialDuration() const;
	void setTrialDuration(int trialDuration);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getUpgradeMetadata() const;
	void setUpgradeMetadata(const std::string &upgradeMetadata);
	std::string getDeployMetadata() const;
	void setDeployMetadata(const std::string &deployMetadata);
	std::string getServiceType() const;
	void setServiceType(const std::string &serviceType);
	bool getIsSupportOperated() const;
	void setIsSupportOperated(bool isSupportOperated);
	std::string getTenantType() const;
	void setTenantType(const std::string &tenantType);
	std::string getServiceVersion() const;
	void setServiceVersion(const std::string &serviceVersion);
	std::vector<ServiceInfo> getServiceInfo() const;
	void setServiceInfo(const std::vector<ServiceInfo> &serviceInfo);
	std::string getServiceId() const;
	void setServiceId(const std::string &serviceId);
	std::string getVersionName() const;
	void setVersionName(const std::string &versionName);
	std::string getOperationMetadata() const;
	void setOperationMetadata(const std::string &operationMetadata);
	std::string getDeployType() const;
	void setDeployType(const std::string &deployType);

private:
	std::string alarmMetadata_;
	std::string clientToken_;
	std::string policyNames_;
	std::string licenseMetadata_;
	long duration_;
	int trialDuration_;
	std::string regionId_;
	std::string upgradeMetadata_;
	std::string deployMetadata_;
	std::string serviceType_;
	bool isSupportOperated_;
	std::string tenantType_;
	std::string serviceVersion_;
	std::vector<ServiceInfo> serviceInfo_;
	std::string serviceId_;
	std::string versionName_;
	std::string operationMetadata_;
	std::string deployType_;
};
} // namespace Model
} // namespace ComputeNestSupplier
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_UPDATESERVICEREQUEST_H_
