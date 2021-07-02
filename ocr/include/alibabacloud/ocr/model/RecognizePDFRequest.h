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

#ifndef ALIBABACLOUD_OCR_MODEL_RECOGNIZEPDFREQUEST_H_
#define ALIBABACLOUD_OCR_MODEL_RECOGNIZEPDFREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ocr/OcrExport.h>

namespace AlibabaCloud
{
	namespace Ocr
	{
		namespace Model
		{
			class ALIBABACLOUD_OCR_EXPORT RecognizePDFRequest : public RpcServiceRequest
			{

			public:
				RecognizePDFRequest();
				~RecognizePDFRequest();

				std::string getFileURL()const;
				void setFileURL(const std::string& fileURL);

            private:
				std::string fileURL_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCR_MODEL_RECOGNIZEPDFREQUEST_H_