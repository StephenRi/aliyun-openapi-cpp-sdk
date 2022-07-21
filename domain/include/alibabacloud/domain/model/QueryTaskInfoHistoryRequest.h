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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_QUERYTASKINFOHISTORYREQUEST_H_
#define ALIBABACLOUD_DOMAIN_MODEL_QUERYTASKINFOHISTORYREQUEST_H_

#include <alibabacloud/domain/DomainExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Domain {
namespace Model {
class ALIBABACLOUD_DOMAIN_EXPORT QueryTaskInfoHistoryRequest : public RpcServiceRequest {
public:
	QueryTaskInfoHistoryRequest();
	~QueryTaskInfoHistoryRequest();
	long getEndCreateTime() const;
	void setEndCreateTime(long endCreateTime);
	long getBeginCreateTime() const;
	void setBeginCreateTime(long beginCreateTime);
	std::string getTaskNoCursor() const;
	void setTaskNoCursor(const std::string &taskNoCursor);
	std::string getUserClientIp() const;
	void setUserClientIp(const std::string &userClientIp);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	long getCreateTimeCursor() const;
	void setCreateTimeCursor(long createTimeCursor);

private:
	long endCreateTime_;
	long beginCreateTime_;
	std::string taskNoCursor_;
	std::string userClientIp_;
	int pageSize_;
	std::string lang_;
	long createTimeCursor_;
};
} // namespace Model
} // namespace Domain
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DOMAIN_MODEL_QUERYTASKINFOHISTORYREQUEST_H_
