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

#ifndef ALIBABACLOUD_CC5G_MODEL_LISTBATCHOPERATECARDSTASKSREQUEST_H_
#define ALIBABACLOUD_CC5G_MODEL_LISTBATCHOPERATECARDSTASKSREQUEST_H_

#include <alibabacloud/cc5g/CC5GExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CC5G {
namespace Model {
class ALIBABACLOUD_CC5G_EXPORT ListBatchOperateCardsTasksRequest : public RpcServiceRequest {
public:
	ListBatchOperateCardsTasksRequest();
	~ListBatchOperateCardsTasksRequest();
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::vector<std::string> getBatchOperateCardsTaskIds() const;
	void setBatchOperateCardsTaskIds(const std::vector<std::string> &batchOperateCardsTaskIds);
	std::vector<std::string> getNames() const;
	void setNames(const std::vector<std::string> &names);
	long getMaxResults() const;
	void setMaxResults(long maxResults);
	std::vector<std::string> getStatuses() const;
	void setStatuses(const std::vector<std::string> &statuses);

private:
	std::string regionId_;
	std::string nextToken_;
	std::vector<std::string> batchOperateCardsTaskIds_;
	std::vector<std::string> names_;
	long maxResults_;
	std::vector<std::string> statuses_;
};
} // namespace Model
} // namespace CC5G
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CC5G_MODEL_LISTBATCHOPERATECARDSTASKSREQUEST_H_
