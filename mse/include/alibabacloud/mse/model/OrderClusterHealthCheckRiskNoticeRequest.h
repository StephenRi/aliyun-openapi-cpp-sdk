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

#ifndef ALIBABACLOUD_MSE_MODEL_ORDERCLUSTERHEALTHCHECKRISKNOTICEREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_ORDERCLUSTERHEALTHCHECKRISKNOTICEREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT OrderClusterHealthCheckRiskNoticeRequest : public RpcServiceRequest {
public:
	OrderClusterHealthCheckRiskNoticeRequest();
	~OrderClusterHealthCheckRiskNoticeRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	bool getMute() const;
	void setMute(bool mute);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getNoticeType() const;
	void setNoticeType(const std::string &noticeType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getRiskCode() const;
	void setRiskCode(const std::string &riskCode);
	std::string getRequestPars() const;
	void setRequestPars(const std::string &requestPars);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);

private:
	std::string mseSessionId_;
	bool mute_;
	std::string instanceId_;
	std::string noticeType_;
	std::string regionId_;
	std::string riskCode_;
	std::string requestPars_;
	std::string acceptLanguage_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_ORDERCLUSTERHEALTHCHECKRISKNOTICEREQUEST_H_
