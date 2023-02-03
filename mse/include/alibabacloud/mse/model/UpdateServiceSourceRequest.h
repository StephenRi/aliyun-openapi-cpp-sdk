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

#ifndef ALIBABACLOUD_MSE_MODEL_UPDATESERVICESOURCEREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_UPDATESERVICESOURCEREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT UpdateServiceSourceRequest : public RpcServiceRequest {
public:
	struct IngressOptionsRequest {
		bool enableStatus;
		bool enableIngress;
		std::string watchNamespace;
		std::string ingressClass;
	};
	UpdateServiceSourceRequest();
	~UpdateServiceSourceRequest();
	IngressOptionsRequest getIngressOptionsRequest() const;
	void setIngressOptionsRequest(const IngressOptionsRequest &ingressOptionsRequest);
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getGatewayUniqueId() const;
	void setGatewayUniqueId(const std::string &gatewayUniqueId);
	std::string getSource() const;
	void setSource(const std::string &source);
	std::string getType() const;
	void setType(const std::string &type);
	long getId() const;
	void setId(long id);
	std::vector<std::string> getPathList() const;
	void setPathList(const std::vector<std::string> &pathList);
	long getGatewayId() const;
	void setGatewayId(long gatewayId);
	std::string getAddress() const;
	void setAddress(const std::string &address);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);

private:
	IngressOptionsRequest ingressOptionsRequest_;
	std::string mseSessionId_;
	std::string gatewayUniqueId_;
	std::string source_;
	std::string type_;
	long id_;
	std::vector<std::string> pathList_;
	long gatewayId_;
	std::string address_;
	std::string name_;
	std::string acceptLanguage_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_UPDATESERVICESOURCEREQUEST_H_
