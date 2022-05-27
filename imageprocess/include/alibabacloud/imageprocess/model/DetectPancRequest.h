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

#ifndef ALIBABACLOUD_IMAGEPROCESS_MODEL_DETECTPANCREQUEST_H_
#define ALIBABACLOUD_IMAGEPROCESS_MODEL_DETECTPANCREQUEST_H_

#include <alibabacloud/imageprocess/ImageprocessExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imageprocess {
namespace Model {
class ALIBABACLOUD_IMAGEPROCESS_EXPORT DetectPancRequest : public RpcServiceRequest {
public:
	struct URLList {
		std::string uRL;
	};
	DetectPancRequest();
	~DetectPancRequest();
	std::string getDataSourceType() const;
	void setDataSourceType(const std::string &dataSourceType);
	std::vector<URLList> getURLList() const;
	void setURLList(const std::vector<URLList> &uRLList);
	bool getAsync() const;
	void setAsync(bool async);

private:
	std::string dataSourceType_;
	std::vector<URLList> uRLList_;
	bool async_;
};
} // namespace Model
} // namespace Imageprocess
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMAGEPROCESS_MODEL_DETECTPANCREQUEST_H_
