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

#ifndef ALIBABACLOUD_EMR_MODEL_CREATELIBRARYREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_CREATELIBRARYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT CreateLibraryRequest : public RpcServiceRequest
			{

			public:
				CreateLibraryRequest();
				~CreateLibraryRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getLibraryVersion()const;
				void setLibraryVersion(const std::string& libraryVersion);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getScope()const;
				void setScope(const std::string& scope);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getSourceType()const;
				void setSourceType(const std::string& sourceType);
				std::string getProperties()const;
				void setProperties(const std::string& properties);
				std::string getSourceLocation()const;
				void setSourceLocation(const std::string& sourceLocation);

            private:
				long resourceOwnerId_;
				std::string libraryVersion_;
				std::string type_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string scope_;
				std::string name_;
				std::string sourceType_;
				std::string properties_;
				std::string sourceLocation_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_CREATELIBRARYREQUEST_H_