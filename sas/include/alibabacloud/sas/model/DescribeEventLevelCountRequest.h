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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEEVENTLEVELCOUNTREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEEVENTLEVELCOUNTREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribeEventLevelCountRequest : public RpcServiceRequest {
public:
	DescribeEventLevelCountRequest();
	~DescribeEventLevelCountRequest();
	std::string getTargetType() const;
	void setTargetType(const std::string &targetType);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getContainerFieldName() const;
	void setContainerFieldName(const std::string &containerFieldName);
	std::string getContainerFieldValue() const;
	void setContainerFieldValue(const std::string &containerFieldValue);
	std::string getFrom() const;
	void setFrom(const std::string &from);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getContainerIds() const;
	void setContainerIds(const std::string &containerIds);

private:
	std::string targetType_;
	std::string type_;
	std::string containerFieldName_;
	std::string containerFieldValue_;
	std::string from_;
	std::string clusterId_;
	std::string containerIds_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEEVENTLEVELCOUNTREQUEST_H_
