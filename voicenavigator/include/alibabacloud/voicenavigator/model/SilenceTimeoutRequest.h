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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_SILENCETIMEOUTREQUEST_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_SILENCETIMEOUTREQUEST_H_

#include <alibabacloud/voicenavigator/VoiceNavigatorExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace VoiceNavigator {
namespace Model {
class ALIBABACLOUD_VOICENAVIGATOR_EXPORT SilenceTimeoutRequest : public RpcServiceRequest {
public:
	SilenceTimeoutRequest();
	~SilenceTimeoutRequest();
	std::string getConversationId() const;
	void setConversationId(const std::string &conversationId);
	std::string getInitialContext() const;
	void setInitialContext(const std::string &initialContext);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	long getInstanceOwnerId() const;
	void setInstanceOwnerId(long instanceOwnerId);

private:
	std::string conversationId_;
	std::string initialContext_;
	std::string instanceId_;
	long instanceOwnerId_;
};
} // namespace Model
} // namespace VoiceNavigator
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_SILENCETIMEOUTREQUEST_H_
