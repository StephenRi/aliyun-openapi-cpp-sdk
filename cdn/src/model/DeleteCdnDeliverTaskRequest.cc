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

#include <alibabacloud/cdn/model/DeleteCdnDeliverTaskRequest.h>

using AlibabaCloud::Cdn::Model::DeleteCdnDeliverTaskRequest;

DeleteCdnDeliverTaskRequest::DeleteCdnDeliverTaskRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DeleteCdnDeliverTask")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteCdnDeliverTaskRequest::~DeleteCdnDeliverTaskRequest()
{}

long DeleteCdnDeliverTaskRequest::getDeliverId()const
{
	return deliverId_;
}

void DeleteCdnDeliverTaskRequest::setDeliverId(long deliverId)
{
	deliverId_ = deliverId;
	setParameter("DeliverId", std::to_string(deliverId));
}

long DeleteCdnDeliverTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteCdnDeliverTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

