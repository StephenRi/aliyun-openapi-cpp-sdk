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

#ifndef ALIBABACLOUD_MSE_MODEL_LISTNAMINGTRACKREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_LISTNAMINGTRACKREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT ListNamingTrackRequest : public RpcServiceRequest {
public:
	ListNamingTrackRequest();
	~ListNamingTrackRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	long getStartTs() const;
	void setStartTs(long startTs);
	long getPageNum() const;
	void setPageNum(long pageNum);
	std::string getNamespaceId() const;
	void setNamespaceId(const std::string &namespaceId);
	std::string getRequestPars() const;
	void setRequestPars(const std::string &requestPars);
	long getEndTs() const;
	void setEndTs(long endTs);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getServiceName() const;
	void setServiceName(const std::string &serviceName);
	std::string getGroup() const;
	void setGroup(const std::string &group);
	std::string getIp() const;
	void setIp(const std::string &ip);
	bool getReverse() const;
	void setReverse(bool reverse);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);

private:
	std::string mseSessionId_;
	long startTs_;
	long pageNum_;
	std::string namespaceId_;
	std::string requestPars_;
	long endTs_;
	long pageSize_;
	std::string serviceName_;
	std::string group_;
	std::string ip_;
	bool reverse_;
	std::string instanceId_;
	std::string acceptLanguage_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_LISTNAMINGTRACKREQUEST_H_
