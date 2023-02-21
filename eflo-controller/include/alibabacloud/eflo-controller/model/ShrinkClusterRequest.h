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

#ifndef ALIBABACLOUD_EFLO_CONTROLLER_MODEL_SHRINKCLUSTERREQUEST_H_
#define ALIBABACLOUD_EFLO_CONTROLLER_MODEL_SHRINKCLUSTERREQUEST_H_

#include <alibabacloud/eflo-controller/Eflo_controllerExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eflo_controller {
namespace Model {
class ALIBABACLOUD_EFLO_CONTROLLER_EXPORT ShrinkClusterRequest : public RpcServiceRequest {
public:
	struct NodeGroups {
		struct NodesItem {
			std::string nodeId;
		};
		NodesItem nodesItem;
		std::vector<NodesItem> nodes;
		std::string nodeGroupId;
	};
	ShrinkClusterRequest();
	~ShrinkClusterRequest();
	bool getIgnoreFailedNodeTasks() const;
	void setIgnoreFailedNodeTasks(bool ignoreFailedNodeTasks);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::vector<NodeGroups> getNodeGroups() const;
	void setNodeGroups(const std::vector<NodeGroups> &nodeGroups);

private:
	bool ignoreFailedNodeTasks_;
	std::string clusterId_;
	std::vector<NodeGroups> nodeGroups_;
};
} // namespace Model
} // namespace Eflo_controller
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EFLO_CONTROLLER_MODEL_SHRINKCLUSTERREQUEST_H_
