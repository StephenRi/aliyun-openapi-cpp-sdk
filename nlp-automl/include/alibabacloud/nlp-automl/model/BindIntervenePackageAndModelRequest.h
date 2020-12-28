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

#ifndef ALIBABACLOUD_NLP_AUTOML_MODEL_BINDINTERVENEPACKAGEANDMODELREQUEST_H_
#define ALIBABACLOUD_NLP_AUTOML_MODEL_BINDINTERVENEPACKAGEANDMODELREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/nlp-automl/Nlp_automlExport.h>

namespace AlibabaCloud
{
	namespace Nlp_automl
	{
		namespace Model
		{
			class ALIBABACLOUD_NLP_AUTOML_EXPORT BindIntervenePackageAndModelRequest : public RpcServiceRequest
			{

			public:
				BindIntervenePackageAndModelRequest();
				~BindIntervenePackageAndModelRequest();

				std::string getProduct()const;
				void setProduct(const std::string& product);
				long getModelId()const;
				void setModelId(long modelId);
				long getPackageId()const;
				void setPackageId(long packageId);
				long getTenantId()const;
				void setTenantId(long tenantId);
				long getProjectId()const;
				void setProjectId(long projectId);
				std::string getModelVersion()const;
				void setModelVersion(const std::string& modelVersion);

            private:
				std::string product_;
				long modelId_;
				long packageId_;
				long tenantId_;
				long projectId_;
				std::string modelVersion_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NLP_AUTOML_MODEL_BINDINTERVENEPACKAGEANDMODELREQUEST_H_