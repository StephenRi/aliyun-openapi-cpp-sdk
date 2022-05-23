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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEACCOUNTATTRIBUTESREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEACCOUNTATTRIBUTESREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeAccountAttributesRequest : public RpcServiceRequest {
public:
	DescribeAccountAttributesRequest();
	~DescribeAccountAttributesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::vector<std::string> getAttributeName() const;
	void setAttributeName(const std::vector<std::string> &attributeName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getBizAliUid() const;
	void setBizAliUid(const std::string &bizAliUid);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);

private:
	long resourceOwnerId_;
	std::vector<std::string> attributeName_;
	std::string regionId_;
	std::string resourceOwnerAccount_;
	std::string bizAliUid_;
	long ownerId_;
	std::string zoneId_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEACCOUNTATTRIBUTESREQUEST_H_
