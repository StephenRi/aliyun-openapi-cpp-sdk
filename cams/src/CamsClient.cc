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

#include <alibabacloud/cams/CamsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Cams;
using namespace AlibabaCloud::Cams::Model;

namespace
{
	const std::string SERVICE_NAME = "cams";
}

CamsClient::CamsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CamsClient::CamsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CamsClient::CamsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CamsClient::~CamsClient()
{}

CamsClient::AddChatappPhoneNumberOutcome CamsClient::addChatappPhoneNumber(const AddChatappPhoneNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddChatappPhoneNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddChatappPhoneNumberOutcome(AddChatappPhoneNumberResult(outcome.result()));
	else
		return AddChatappPhoneNumberOutcome(outcome.error());
}

void CamsClient::addChatappPhoneNumberAsync(const AddChatappPhoneNumberRequest& request, const AddChatappPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addChatappPhoneNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::AddChatappPhoneNumberOutcomeCallable CamsClient::addChatappPhoneNumberCallable(const AddChatappPhoneNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddChatappPhoneNumberOutcome()>>(
			[this, request]()
			{
			return this->addChatappPhoneNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::BeeBotAssociateOutcome CamsClient::beeBotAssociate(const BeeBotAssociateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BeeBotAssociateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BeeBotAssociateOutcome(BeeBotAssociateResult(outcome.result()));
	else
		return BeeBotAssociateOutcome(outcome.error());
}

void CamsClient::beeBotAssociateAsync(const BeeBotAssociateRequest& request, const BeeBotAssociateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, beeBotAssociate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::BeeBotAssociateOutcomeCallable CamsClient::beeBotAssociateCallable(const BeeBotAssociateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BeeBotAssociateOutcome()>>(
			[this, request]()
			{
			return this->beeBotAssociate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::BeeBotChatOutcome CamsClient::beeBotChat(const BeeBotChatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BeeBotChatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BeeBotChatOutcome(BeeBotChatResult(outcome.result()));
	else
		return BeeBotChatOutcome(outcome.error());
}

void CamsClient::beeBotChatAsync(const BeeBotChatRequest& request, const BeeBotChatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, beeBotChat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::BeeBotChatOutcomeCallable CamsClient::beeBotChatCallable(const BeeBotChatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BeeBotChatOutcome()>>(
			[this, request]()
			{
			return this->beeBotChat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::ChatappBindWabaOutcome CamsClient::chatappBindWaba(const ChatappBindWabaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChatappBindWabaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChatappBindWabaOutcome(ChatappBindWabaResult(outcome.result()));
	else
		return ChatappBindWabaOutcome(outcome.error());
}

void CamsClient::chatappBindWabaAsync(const ChatappBindWabaRequest& request, const ChatappBindWabaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, chatappBindWaba(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::ChatappBindWabaOutcomeCallable CamsClient::chatappBindWabaCallable(const ChatappBindWabaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChatappBindWabaOutcome()>>(
			[this, request]()
			{
			return this->chatappBindWaba(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::ChatappEmbedSignUpOutcome CamsClient::chatappEmbedSignUp(const ChatappEmbedSignUpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChatappEmbedSignUpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChatappEmbedSignUpOutcome(ChatappEmbedSignUpResult(outcome.result()));
	else
		return ChatappEmbedSignUpOutcome(outcome.error());
}

void CamsClient::chatappEmbedSignUpAsync(const ChatappEmbedSignUpRequest& request, const ChatappEmbedSignUpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, chatappEmbedSignUp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::ChatappEmbedSignUpOutcomeCallable CamsClient::chatappEmbedSignUpCallable(const ChatappEmbedSignUpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChatappEmbedSignUpOutcome()>>(
			[this, request]()
			{
			return this->chatappEmbedSignUp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::ChatappMigrationRegisterOutcome CamsClient::chatappMigrationRegister(const ChatappMigrationRegisterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChatappMigrationRegisterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChatappMigrationRegisterOutcome(ChatappMigrationRegisterResult(outcome.result()));
	else
		return ChatappMigrationRegisterOutcome(outcome.error());
}

void CamsClient::chatappMigrationRegisterAsync(const ChatappMigrationRegisterRequest& request, const ChatappMigrationRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, chatappMigrationRegister(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::ChatappMigrationRegisterOutcomeCallable CamsClient::chatappMigrationRegisterCallable(const ChatappMigrationRegisterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChatappMigrationRegisterOutcome()>>(
			[this, request]()
			{
			return this->chatappMigrationRegister(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::ChatappMigrationVerifiedOutcome CamsClient::chatappMigrationVerified(const ChatappMigrationVerifiedRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChatappMigrationVerifiedOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChatappMigrationVerifiedOutcome(ChatappMigrationVerifiedResult(outcome.result()));
	else
		return ChatappMigrationVerifiedOutcome(outcome.error());
}

void CamsClient::chatappMigrationVerifiedAsync(const ChatappMigrationVerifiedRequest& request, const ChatappMigrationVerifiedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, chatappMigrationVerified(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::ChatappMigrationVerifiedOutcomeCallable CamsClient::chatappMigrationVerifiedCallable(const ChatappMigrationVerifiedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChatappMigrationVerifiedOutcome()>>(
			[this, request]()
			{
			return this->chatappMigrationVerified(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::ChatappPhoneNumberDeregisterOutcome CamsClient::chatappPhoneNumberDeregister(const ChatappPhoneNumberDeregisterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChatappPhoneNumberDeregisterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChatappPhoneNumberDeregisterOutcome(ChatappPhoneNumberDeregisterResult(outcome.result()));
	else
		return ChatappPhoneNumberDeregisterOutcome(outcome.error());
}

void CamsClient::chatappPhoneNumberDeregisterAsync(const ChatappPhoneNumberDeregisterRequest& request, const ChatappPhoneNumberDeregisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, chatappPhoneNumberDeregister(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::ChatappPhoneNumberDeregisterOutcomeCallable CamsClient::chatappPhoneNumberDeregisterCallable(const ChatappPhoneNumberDeregisterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChatappPhoneNumberDeregisterOutcome()>>(
			[this, request]()
			{
			return this->chatappPhoneNumberDeregister(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::ChatappPhoneNumberRegisterOutcome CamsClient::chatappPhoneNumberRegister(const ChatappPhoneNumberRegisterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChatappPhoneNumberRegisterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChatappPhoneNumberRegisterOutcome(ChatappPhoneNumberRegisterResult(outcome.result()));
	else
		return ChatappPhoneNumberRegisterOutcome(outcome.error());
}

void CamsClient::chatappPhoneNumberRegisterAsync(const ChatappPhoneNumberRegisterRequest& request, const ChatappPhoneNumberRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, chatappPhoneNumberRegister(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::ChatappPhoneNumberRegisterOutcomeCallable CamsClient::chatappPhoneNumberRegisterCallable(const ChatappPhoneNumberRegisterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChatappPhoneNumberRegisterOutcome()>>(
			[this, request]()
			{
			return this->chatappPhoneNumberRegister(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::ChatappSyncPhoneNumberOutcome CamsClient::chatappSyncPhoneNumber(const ChatappSyncPhoneNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChatappSyncPhoneNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChatappSyncPhoneNumberOutcome(ChatappSyncPhoneNumberResult(outcome.result()));
	else
		return ChatappSyncPhoneNumberOutcome(outcome.error());
}

void CamsClient::chatappSyncPhoneNumberAsync(const ChatappSyncPhoneNumberRequest& request, const ChatappSyncPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, chatappSyncPhoneNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::ChatappSyncPhoneNumberOutcomeCallable CamsClient::chatappSyncPhoneNumberCallable(const ChatappSyncPhoneNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChatappSyncPhoneNumberOutcome()>>(
			[this, request]()
			{
			return this->chatappSyncPhoneNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::ChatappVerifyAndRegisterOutcome CamsClient::chatappVerifyAndRegister(const ChatappVerifyAndRegisterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChatappVerifyAndRegisterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChatappVerifyAndRegisterOutcome(ChatappVerifyAndRegisterResult(outcome.result()));
	else
		return ChatappVerifyAndRegisterOutcome(outcome.error());
}

void CamsClient::chatappVerifyAndRegisterAsync(const ChatappVerifyAndRegisterRequest& request, const ChatappVerifyAndRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, chatappVerifyAndRegister(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::ChatappVerifyAndRegisterOutcomeCallable CamsClient::chatappVerifyAndRegisterCallable(const ChatappVerifyAndRegisterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChatappVerifyAndRegisterOutcome()>>(
			[this, request]()
			{
			return this->chatappVerifyAndRegister(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::CreateChatappMigrationInitiateOutcome CamsClient::createChatappMigrationInitiate(const CreateChatappMigrationInitiateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateChatappMigrationInitiateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateChatappMigrationInitiateOutcome(CreateChatappMigrationInitiateResult(outcome.result()));
	else
		return CreateChatappMigrationInitiateOutcome(outcome.error());
}

void CamsClient::createChatappMigrationInitiateAsync(const CreateChatappMigrationInitiateRequest& request, const CreateChatappMigrationInitiateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createChatappMigrationInitiate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::CreateChatappMigrationInitiateOutcomeCallable CamsClient::createChatappMigrationInitiateCallable(const CreateChatappMigrationInitiateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateChatappMigrationInitiateOutcome()>>(
			[this, request]()
			{
			return this->createChatappMigrationInitiate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::CreateChatappTemplateOutcome CamsClient::createChatappTemplate(const CreateChatappTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateChatappTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateChatappTemplateOutcome(CreateChatappTemplateResult(outcome.result()));
	else
		return CreateChatappTemplateOutcome(outcome.error());
}

void CamsClient::createChatappTemplateAsync(const CreateChatappTemplateRequest& request, const CreateChatappTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createChatappTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::CreateChatappTemplateOutcomeCallable CamsClient::createChatappTemplateCallable(const CreateChatappTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateChatappTemplateOutcome()>>(
			[this, request]()
			{
			return this->createChatappTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::DeleteChatappTemplateOutcome CamsClient::deleteChatappTemplate(const DeleteChatappTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteChatappTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteChatappTemplateOutcome(DeleteChatappTemplateResult(outcome.result()));
	else
		return DeleteChatappTemplateOutcome(outcome.error());
}

void CamsClient::deleteChatappTemplateAsync(const DeleteChatappTemplateRequest& request, const DeleteChatappTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteChatappTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::DeleteChatappTemplateOutcomeCallable CamsClient::deleteChatappTemplateCallable(const DeleteChatappTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteChatappTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteChatappTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::EnableWhatsappROIMetricOutcome CamsClient::enableWhatsappROIMetric(const EnableWhatsappROIMetricRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableWhatsappROIMetricOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableWhatsappROIMetricOutcome(EnableWhatsappROIMetricResult(outcome.result()));
	else
		return EnableWhatsappROIMetricOutcome(outcome.error());
}

void CamsClient::enableWhatsappROIMetricAsync(const EnableWhatsappROIMetricRequest& request, const EnableWhatsappROIMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableWhatsappROIMetric(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::EnableWhatsappROIMetricOutcomeCallable CamsClient::enableWhatsappROIMetricCallable(const EnableWhatsappROIMetricRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableWhatsappROIMetricOutcome()>>(
			[this, request]()
			{
			return this->enableWhatsappROIMetric(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::GetChatappPhoneNumberMetricOutcome CamsClient::getChatappPhoneNumberMetric(const GetChatappPhoneNumberMetricRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetChatappPhoneNumberMetricOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetChatappPhoneNumberMetricOutcome(GetChatappPhoneNumberMetricResult(outcome.result()));
	else
		return GetChatappPhoneNumberMetricOutcome(outcome.error());
}

void CamsClient::getChatappPhoneNumberMetricAsync(const GetChatappPhoneNumberMetricRequest& request, const GetChatappPhoneNumberMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getChatappPhoneNumberMetric(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::GetChatappPhoneNumberMetricOutcomeCallable CamsClient::getChatappPhoneNumberMetricCallable(const GetChatappPhoneNumberMetricRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetChatappPhoneNumberMetricOutcome()>>(
			[this, request]()
			{
			return this->getChatappPhoneNumberMetric(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::GetChatappTemplateDetailOutcome CamsClient::getChatappTemplateDetail(const GetChatappTemplateDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetChatappTemplateDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetChatappTemplateDetailOutcome(GetChatappTemplateDetailResult(outcome.result()));
	else
		return GetChatappTemplateDetailOutcome(outcome.error());
}

void CamsClient::getChatappTemplateDetailAsync(const GetChatappTemplateDetailRequest& request, const GetChatappTemplateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getChatappTemplateDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::GetChatappTemplateDetailOutcomeCallable CamsClient::getChatappTemplateDetailCallable(const GetChatappTemplateDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetChatappTemplateDetailOutcome()>>(
			[this, request]()
			{
			return this->getChatappTemplateDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::GetChatappTemplateMetricOutcome CamsClient::getChatappTemplateMetric(const GetChatappTemplateMetricRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetChatappTemplateMetricOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetChatappTemplateMetricOutcome(GetChatappTemplateMetricResult(outcome.result()));
	else
		return GetChatappTemplateMetricOutcome(outcome.error());
}

void CamsClient::getChatappTemplateMetricAsync(const GetChatappTemplateMetricRequest& request, const GetChatappTemplateMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getChatappTemplateMetric(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::GetChatappTemplateMetricOutcomeCallable CamsClient::getChatappTemplateMetricCallable(const GetChatappTemplateMetricRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetChatappTemplateMetricOutcome()>>(
			[this, request]()
			{
			return this->getChatappTemplateMetric(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::GetChatappUploadAuthorizationOutcome CamsClient::getChatappUploadAuthorization(const GetChatappUploadAuthorizationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetChatappUploadAuthorizationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetChatappUploadAuthorizationOutcome(GetChatappUploadAuthorizationResult(outcome.result()));
	else
		return GetChatappUploadAuthorizationOutcome(outcome.error());
}

void CamsClient::getChatappUploadAuthorizationAsync(const GetChatappUploadAuthorizationRequest& request, const GetChatappUploadAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getChatappUploadAuthorization(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::GetChatappUploadAuthorizationOutcomeCallable CamsClient::getChatappUploadAuthorizationCallable(const GetChatappUploadAuthorizationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetChatappUploadAuthorizationOutcome()>>(
			[this, request]()
			{
			return this->getChatappUploadAuthorization(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::GetChatappVerifyCodeOutcome CamsClient::getChatappVerifyCode(const GetChatappVerifyCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetChatappVerifyCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetChatappVerifyCodeOutcome(GetChatappVerifyCodeResult(outcome.result()));
	else
		return GetChatappVerifyCodeOutcome(outcome.error());
}

void CamsClient::getChatappVerifyCodeAsync(const GetChatappVerifyCodeRequest& request, const GetChatappVerifyCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getChatappVerifyCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::GetChatappVerifyCodeOutcomeCallable CamsClient::getChatappVerifyCodeCallable(const GetChatappVerifyCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetChatappVerifyCodeOutcome()>>(
			[this, request]()
			{
			return this->getChatappVerifyCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::GetMigrationVerifyCodeOutcome CamsClient::getMigrationVerifyCode(const GetMigrationVerifyCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMigrationVerifyCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMigrationVerifyCodeOutcome(GetMigrationVerifyCodeResult(outcome.result()));
	else
		return GetMigrationVerifyCodeOutcome(outcome.error());
}

void CamsClient::getMigrationVerifyCodeAsync(const GetMigrationVerifyCodeRequest& request, const GetMigrationVerifyCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMigrationVerifyCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::GetMigrationVerifyCodeOutcomeCallable CamsClient::getMigrationVerifyCodeCallable(const GetMigrationVerifyCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMigrationVerifyCodeOutcome()>>(
			[this, request]()
			{
			return this->getMigrationVerifyCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::GetPhoneNumberVerificationStatusOutcome CamsClient::getPhoneNumberVerificationStatus(const GetPhoneNumberVerificationStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPhoneNumberVerificationStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPhoneNumberVerificationStatusOutcome(GetPhoneNumberVerificationStatusResult(outcome.result()));
	else
		return GetPhoneNumberVerificationStatusOutcome(outcome.error());
}

void CamsClient::getPhoneNumberVerificationStatusAsync(const GetPhoneNumberVerificationStatusRequest& request, const GetPhoneNumberVerificationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPhoneNumberVerificationStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::GetPhoneNumberVerificationStatusOutcomeCallable CamsClient::getPhoneNumberVerificationStatusCallable(const GetPhoneNumberVerificationStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPhoneNumberVerificationStatusOutcome()>>(
			[this, request]()
			{
			return this->getPhoneNumberVerificationStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::GetPreValidatePhoneIdOutcome CamsClient::getPreValidatePhoneId(const GetPreValidatePhoneIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPreValidatePhoneIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPreValidatePhoneIdOutcome(GetPreValidatePhoneIdResult(outcome.result()));
	else
		return GetPreValidatePhoneIdOutcome(outcome.error());
}

void CamsClient::getPreValidatePhoneIdAsync(const GetPreValidatePhoneIdRequest& request, const GetPreValidatePhoneIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPreValidatePhoneId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::GetPreValidatePhoneIdOutcomeCallable CamsClient::getPreValidatePhoneIdCallable(const GetPreValidatePhoneIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPreValidatePhoneIdOutcome()>>(
			[this, request]()
			{
			return this->getPreValidatePhoneId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::GetWhatsappConnectionCatalogOutcome CamsClient::getWhatsappConnectionCatalog(const GetWhatsappConnectionCatalogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWhatsappConnectionCatalogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWhatsappConnectionCatalogOutcome(GetWhatsappConnectionCatalogResult(outcome.result()));
	else
		return GetWhatsappConnectionCatalogOutcome(outcome.error());
}

void CamsClient::getWhatsappConnectionCatalogAsync(const GetWhatsappConnectionCatalogRequest& request, const GetWhatsappConnectionCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWhatsappConnectionCatalog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::GetWhatsappConnectionCatalogOutcomeCallable CamsClient::getWhatsappConnectionCatalogCallable(const GetWhatsappConnectionCatalogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWhatsappConnectionCatalogOutcome()>>(
			[this, request]()
			{
			return this->getWhatsappConnectionCatalog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::IsvGetAppIdOutcome CamsClient::isvGetAppId(const IsvGetAppIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return IsvGetAppIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return IsvGetAppIdOutcome(IsvGetAppIdResult(outcome.result()));
	else
		return IsvGetAppIdOutcome(outcome.error());
}

void CamsClient::isvGetAppIdAsync(const IsvGetAppIdRequest& request, const IsvGetAppIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, isvGetAppId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::IsvGetAppIdOutcomeCallable CamsClient::isvGetAppIdCallable(const IsvGetAppIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<IsvGetAppIdOutcome()>>(
			[this, request]()
			{
			return this->isvGetAppId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::ListChatappTemplateOutcome CamsClient::listChatappTemplate(const ListChatappTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListChatappTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListChatappTemplateOutcome(ListChatappTemplateResult(outcome.result()));
	else
		return ListChatappTemplateOutcome(outcome.error());
}

void CamsClient::listChatappTemplateAsync(const ListChatappTemplateRequest& request, const ListChatappTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listChatappTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::ListChatappTemplateOutcomeCallable CamsClient::listChatappTemplateCallable(const ListChatappTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListChatappTemplateOutcome()>>(
			[this, request]()
			{
			return this->listChatappTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::ListProductOutcome CamsClient::listProduct(const ListProductRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProductOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProductOutcome(ListProductResult(outcome.result()));
	else
		return ListProductOutcome(outcome.error());
}

void CamsClient::listProductAsync(const ListProductRequest& request, const ListProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::ListProductOutcomeCallable CamsClient::listProductCallable(const ListProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProductOutcome()>>(
			[this, request]()
			{
			return this->listProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::ListProductCatalogOutcome CamsClient::listProductCatalog(const ListProductCatalogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProductCatalogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProductCatalogOutcome(ListProductCatalogResult(outcome.result()));
	else
		return ListProductCatalogOutcome(outcome.error());
}

void CamsClient::listProductCatalogAsync(const ListProductCatalogRequest& request, const ListProductCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProductCatalog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::ListProductCatalogOutcomeCallable CamsClient::listProductCatalogCallable(const ListProductCatalogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProductCatalogOutcome()>>(
			[this, request]()
			{
			return this->listProductCatalog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::ModifyChatappTemplateOutcome CamsClient::modifyChatappTemplate(const ModifyChatappTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyChatappTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyChatappTemplateOutcome(ModifyChatappTemplateResult(outcome.result()));
	else
		return ModifyChatappTemplateOutcome(outcome.error());
}

void CamsClient::modifyChatappTemplateAsync(const ModifyChatappTemplateRequest& request, const ModifyChatappTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyChatappTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::ModifyChatappTemplateOutcomeCallable CamsClient::modifyChatappTemplateCallable(const ModifyChatappTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyChatappTemplateOutcome()>>(
			[this, request]()
			{
			return this->modifyChatappTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::ModifyPhoneBusinessProfileOutcome CamsClient::modifyPhoneBusinessProfile(const ModifyPhoneBusinessProfileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPhoneBusinessProfileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPhoneBusinessProfileOutcome(ModifyPhoneBusinessProfileResult(outcome.result()));
	else
		return ModifyPhoneBusinessProfileOutcome(outcome.error());
}

void CamsClient::modifyPhoneBusinessProfileAsync(const ModifyPhoneBusinessProfileRequest& request, const ModifyPhoneBusinessProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPhoneBusinessProfile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::ModifyPhoneBusinessProfileOutcomeCallable CamsClient::modifyPhoneBusinessProfileCallable(const ModifyPhoneBusinessProfileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPhoneBusinessProfileOutcome()>>(
			[this, request]()
			{
			return this->modifyPhoneBusinessProfile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::QueryChatappBindWabaOutcome CamsClient::queryChatappBindWaba(const QueryChatappBindWabaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryChatappBindWabaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryChatappBindWabaOutcome(QueryChatappBindWabaResult(outcome.result()));
	else
		return QueryChatappBindWabaOutcome(outcome.error());
}

void CamsClient::queryChatappBindWabaAsync(const QueryChatappBindWabaRequest& request, const QueryChatappBindWabaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryChatappBindWaba(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::QueryChatappBindWabaOutcomeCallable CamsClient::queryChatappBindWabaCallable(const QueryChatappBindWabaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryChatappBindWabaOutcome()>>(
			[this, request]()
			{
			return this->queryChatappBindWaba(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::QueryChatappPhoneNumbersOutcome CamsClient::queryChatappPhoneNumbers(const QueryChatappPhoneNumbersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryChatappPhoneNumbersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryChatappPhoneNumbersOutcome(QueryChatappPhoneNumbersResult(outcome.result()));
	else
		return QueryChatappPhoneNumbersOutcome(outcome.error());
}

void CamsClient::queryChatappPhoneNumbersAsync(const QueryChatappPhoneNumbersRequest& request, const QueryChatappPhoneNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryChatappPhoneNumbers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::QueryChatappPhoneNumbersOutcomeCallable CamsClient::queryChatappPhoneNumbersCallable(const QueryChatappPhoneNumbersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryChatappPhoneNumbersOutcome()>>(
			[this, request]()
			{
			return this->queryChatappPhoneNumbers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::QueryPhoneBusinessProfileOutcome CamsClient::queryPhoneBusinessProfile(const QueryPhoneBusinessProfileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPhoneBusinessProfileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPhoneBusinessProfileOutcome(QueryPhoneBusinessProfileResult(outcome.result()));
	else
		return QueryPhoneBusinessProfileOutcome(outcome.error());
}

void CamsClient::queryPhoneBusinessProfileAsync(const QueryPhoneBusinessProfileRequest& request, const QueryPhoneBusinessProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPhoneBusinessProfile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::QueryPhoneBusinessProfileOutcomeCallable CamsClient::queryPhoneBusinessProfileCallable(const QueryPhoneBusinessProfileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPhoneBusinessProfileOutcome()>>(
			[this, request]()
			{
			return this->queryPhoneBusinessProfile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::QueryWabaBusinessInfoOutcome CamsClient::queryWabaBusinessInfo(const QueryWabaBusinessInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryWabaBusinessInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryWabaBusinessInfoOutcome(QueryWabaBusinessInfoResult(outcome.result()));
	else
		return QueryWabaBusinessInfoOutcome(outcome.error());
}

void CamsClient::queryWabaBusinessInfoAsync(const QueryWabaBusinessInfoRequest& request, const QueryWabaBusinessInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryWabaBusinessInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::QueryWabaBusinessInfoOutcomeCallable CamsClient::queryWabaBusinessInfoCallable(const QueryWabaBusinessInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryWabaBusinessInfoOutcome()>>(
			[this, request]()
			{
			return this->queryWabaBusinessInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::SendChatappMassMessageOutcome CamsClient::sendChatappMassMessage(const SendChatappMassMessageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendChatappMassMessageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendChatappMassMessageOutcome(SendChatappMassMessageResult(outcome.result()));
	else
		return SendChatappMassMessageOutcome(outcome.error());
}

void CamsClient::sendChatappMassMessageAsync(const SendChatappMassMessageRequest& request, const SendChatappMassMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendChatappMassMessage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::SendChatappMassMessageOutcomeCallable CamsClient::sendChatappMassMessageCallable(const SendChatappMassMessageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendChatappMassMessageOutcome()>>(
			[this, request]()
			{
			return this->sendChatappMassMessage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::SendChatappMessageOutcome CamsClient::sendChatappMessage(const SendChatappMessageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendChatappMessageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendChatappMessageOutcome(SendChatappMessageResult(outcome.result()));
	else
		return SendChatappMessageOutcome(outcome.error());
}

void CamsClient::sendChatappMessageAsync(const SendChatappMessageRequest& request, const SendChatappMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendChatappMessage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::SendChatappMessageOutcomeCallable CamsClient::sendChatappMessageCallable(const SendChatappMessageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendChatappMessageOutcome()>>(
			[this, request]()
			{
			return this->sendChatappMessage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::SubmitIsvCustomerTermsOutcome CamsClient::submitIsvCustomerTerms(const SubmitIsvCustomerTermsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitIsvCustomerTermsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitIsvCustomerTermsOutcome(SubmitIsvCustomerTermsResult(outcome.result()));
	else
		return SubmitIsvCustomerTermsOutcome(outcome.error());
}

void CamsClient::submitIsvCustomerTermsAsync(const SubmitIsvCustomerTermsRequest& request, const SubmitIsvCustomerTermsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitIsvCustomerTerms(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::SubmitIsvCustomerTermsOutcomeCallable CamsClient::submitIsvCustomerTermsCallable(const SubmitIsvCustomerTermsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitIsvCustomerTermsOutcome()>>(
			[this, request]()
			{
			return this->submitIsvCustomerTerms(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::UpdateAccountWebhookOutcome CamsClient::updateAccountWebhook(const UpdateAccountWebhookRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAccountWebhookOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAccountWebhookOutcome(UpdateAccountWebhookResult(outcome.result()));
	else
		return UpdateAccountWebhookOutcome(outcome.error());
}

void CamsClient::updateAccountWebhookAsync(const UpdateAccountWebhookRequest& request, const UpdateAccountWebhookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAccountWebhook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::UpdateAccountWebhookOutcomeCallable CamsClient::updateAccountWebhookCallable(const UpdateAccountWebhookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAccountWebhookOutcome()>>(
			[this, request]()
			{
			return this->updateAccountWebhook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CamsClient::UpdatePhoneWebhookOutcome CamsClient::updatePhoneWebhook(const UpdatePhoneWebhookRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePhoneWebhookOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePhoneWebhookOutcome(UpdatePhoneWebhookResult(outcome.result()));
	else
		return UpdatePhoneWebhookOutcome(outcome.error());
}

void CamsClient::updatePhoneWebhookAsync(const UpdatePhoneWebhookRequest& request, const UpdatePhoneWebhookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePhoneWebhook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CamsClient::UpdatePhoneWebhookOutcomeCallable CamsClient::updatePhoneWebhookCallable(const UpdatePhoneWebhookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePhoneWebhookOutcome()>>(
			[this, request]()
			{
			return this->updatePhoneWebhook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

