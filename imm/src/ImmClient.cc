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

#include <alibabacloud/imm/ImmClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

namespace
{
	const std::string SERVICE_NAME = "imm";
}

ImmClient::ImmClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "imm");
}

ImmClient::ImmClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "imm");
}

ImmClient::ImmClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "imm");
}

ImmClient::~ImmClient()
{}

ImmClient::CompareFaceOutcome ImmClient::compareFace(const CompareFaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CompareFaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CompareFaceOutcome(CompareFaceResult(outcome.result()));
	else
		return CompareFaceOutcome(outcome.error());
}

void ImmClient::compareFaceAsync(const CompareFaceRequest& request, const CompareFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, compareFace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CompareFaceOutcomeCallable ImmClient::compareFaceCallable(const CompareFaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CompareFaceOutcome()>>(
			[this, request]()
			{
			return this->compareFace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CompareImageFacesOutcome ImmClient::compareImageFaces(const CompareImageFacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CompareImageFacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CompareImageFacesOutcome(CompareImageFacesResult(outcome.result()));
	else
		return CompareImageFacesOutcome(outcome.error());
}

void ImmClient::compareImageFacesAsync(const CompareImageFacesRequest& request, const CompareImageFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, compareImageFaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CompareImageFacesOutcomeCallable ImmClient::compareImageFacesCallable(const CompareImageFacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CompareImageFacesOutcome()>>(
			[this, request]()
			{
			return this->compareImageFaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ConvertOfficeFormatOutcome ImmClient::convertOfficeFormat(const ConvertOfficeFormatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConvertOfficeFormatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConvertOfficeFormatOutcome(ConvertOfficeFormatResult(outcome.result()));
	else
		return ConvertOfficeFormatOutcome(outcome.error());
}

void ImmClient::convertOfficeFormatAsync(const ConvertOfficeFormatRequest& request, const ConvertOfficeFormatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, convertOfficeFormat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ConvertOfficeFormatOutcomeCallable ImmClient::convertOfficeFormatCallable(const ConvertOfficeFormatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConvertOfficeFormatOutcome()>>(
			[this, request]()
			{
			return this->convertOfficeFormat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateCADConversionTaskOutcome ImmClient::createCADConversionTask(const CreateCADConversionTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCADConversionTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCADConversionTaskOutcome(CreateCADConversionTaskResult(outcome.result()));
	else
		return CreateCADConversionTaskOutcome(outcome.error());
}

void ImmClient::createCADConversionTaskAsync(const CreateCADConversionTaskRequest& request, const CreateCADConversionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCADConversionTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateCADConversionTaskOutcomeCallable ImmClient::createCADConversionTaskCallable(const CreateCADConversionTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCADConversionTaskOutcome()>>(
			[this, request]()
			{
			return this->createCADConversionTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateDocIndexTaskOutcome ImmClient::createDocIndexTask(const CreateDocIndexTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDocIndexTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDocIndexTaskOutcome(CreateDocIndexTaskResult(outcome.result()));
	else
		return CreateDocIndexTaskOutcome(outcome.error());
}

void ImmClient::createDocIndexTaskAsync(const CreateDocIndexTaskRequest& request, const CreateDocIndexTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDocIndexTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateDocIndexTaskOutcomeCallable ImmClient::createDocIndexTaskCallable(const CreateDocIndexTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDocIndexTaskOutcome()>>(
			[this, request]()
			{
			return this->createDocIndexTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateGrabFrameTaskOutcome ImmClient::createGrabFrameTask(const CreateGrabFrameTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGrabFrameTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGrabFrameTaskOutcome(CreateGrabFrameTaskResult(outcome.result()));
	else
		return CreateGrabFrameTaskOutcome(outcome.error());
}

void ImmClient::createGrabFrameTaskAsync(const CreateGrabFrameTaskRequest& request, const CreateGrabFrameTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGrabFrameTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateGrabFrameTaskOutcomeCallable ImmClient::createGrabFrameTaskCallable(const CreateGrabFrameTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGrabFrameTaskOutcome()>>(
			[this, request]()
			{
			return this->createGrabFrameTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateGroupFacesJobOutcome ImmClient::createGroupFacesJob(const CreateGroupFacesJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGroupFacesJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGroupFacesJobOutcome(CreateGroupFacesJobResult(outcome.result()));
	else
		return CreateGroupFacesJobOutcome(outcome.error());
}

void ImmClient::createGroupFacesJobAsync(const CreateGroupFacesJobRequest& request, const CreateGroupFacesJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGroupFacesJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateGroupFacesJobOutcomeCallable ImmClient::createGroupFacesJobCallable(const CreateGroupFacesJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGroupFacesJobOutcome()>>(
			[this, request]()
			{
			return this->createGroupFacesJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateImageProcessTaskOutcome ImmClient::createImageProcessTask(const CreateImageProcessTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateImageProcessTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateImageProcessTaskOutcome(CreateImageProcessTaskResult(outcome.result()));
	else
		return CreateImageProcessTaskOutcome(outcome.error());
}

void ImmClient::createImageProcessTaskAsync(const CreateImageProcessTaskRequest& request, const CreateImageProcessTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createImageProcessTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateImageProcessTaskOutcomeCallable ImmClient::createImageProcessTaskCallable(const CreateImageProcessTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateImageProcessTaskOutcome()>>(
			[this, request]()
			{
			return this->createImageProcessTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateMediaComplexTaskOutcome ImmClient::createMediaComplexTask(const CreateMediaComplexTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMediaComplexTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMediaComplexTaskOutcome(CreateMediaComplexTaskResult(outcome.result()));
	else
		return CreateMediaComplexTaskOutcome(outcome.error());
}

void ImmClient::createMediaComplexTaskAsync(const CreateMediaComplexTaskRequest& request, const CreateMediaComplexTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMediaComplexTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateMediaComplexTaskOutcomeCallable ImmClient::createMediaComplexTaskCallable(const CreateMediaComplexTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMediaComplexTaskOutcome()>>(
			[this, request]()
			{
			return this->createMediaComplexTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateMergeFaceGroupsJobOutcome ImmClient::createMergeFaceGroupsJob(const CreateMergeFaceGroupsJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMergeFaceGroupsJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMergeFaceGroupsJobOutcome(CreateMergeFaceGroupsJobResult(outcome.result()));
	else
		return CreateMergeFaceGroupsJobOutcome(outcome.error());
}

void ImmClient::createMergeFaceGroupsJobAsync(const CreateMergeFaceGroupsJobRequest& request, const CreateMergeFaceGroupsJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMergeFaceGroupsJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateMergeFaceGroupsJobOutcomeCallable ImmClient::createMergeFaceGroupsJobCallable(const CreateMergeFaceGroupsJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMergeFaceGroupsJobOutcome()>>(
			[this, request]()
			{
			return this->createMergeFaceGroupsJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateOfficeConversionTaskOutcome ImmClient::createOfficeConversionTask(const CreateOfficeConversionTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOfficeConversionTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOfficeConversionTaskOutcome(CreateOfficeConversionTaskResult(outcome.result()));
	else
		return CreateOfficeConversionTaskOutcome(outcome.error());
}

void ImmClient::createOfficeConversionTaskAsync(const CreateOfficeConversionTaskRequest& request, const CreateOfficeConversionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOfficeConversionTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateOfficeConversionTaskOutcomeCallable ImmClient::createOfficeConversionTaskCallable(const CreateOfficeConversionTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOfficeConversionTaskOutcome()>>(
			[this, request]()
			{
			return this->createOfficeConversionTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateSetOutcome ImmClient::createSet(const CreateSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSetOutcome(CreateSetResult(outcome.result()));
	else
		return CreateSetOutcome(outcome.error());
}

void ImmClient::createSetAsync(const CreateSetRequest& request, const CreateSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateSetOutcomeCallable ImmClient::createSetCallable(const CreateSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSetOutcome()>>(
			[this, request]()
			{
			return this->createSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateStreamAnalyseTaskOutcome ImmClient::createStreamAnalyseTask(const CreateStreamAnalyseTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateStreamAnalyseTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateStreamAnalyseTaskOutcome(CreateStreamAnalyseTaskResult(outcome.result()));
	else
		return CreateStreamAnalyseTaskOutcome(outcome.error());
}

void ImmClient::createStreamAnalyseTaskAsync(const CreateStreamAnalyseTaskRequest& request, const CreateStreamAnalyseTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createStreamAnalyseTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateStreamAnalyseTaskOutcomeCallable ImmClient::createStreamAnalyseTaskCallable(const CreateStreamAnalyseTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateStreamAnalyseTaskOutcome()>>(
			[this, request]()
			{
			return this->createStreamAnalyseTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateVideoAbstractTaskOutcome ImmClient::createVideoAbstractTask(const CreateVideoAbstractTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVideoAbstractTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVideoAbstractTaskOutcome(CreateVideoAbstractTaskResult(outcome.result()));
	else
		return CreateVideoAbstractTaskOutcome(outcome.error());
}

void ImmClient::createVideoAbstractTaskAsync(const CreateVideoAbstractTaskRequest& request, const CreateVideoAbstractTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVideoAbstractTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateVideoAbstractTaskOutcomeCallable ImmClient::createVideoAbstractTaskCallable(const CreateVideoAbstractTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVideoAbstractTaskOutcome()>>(
			[this, request]()
			{
			return this->createVideoAbstractTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateVideoAnalyseTaskOutcome ImmClient::createVideoAnalyseTask(const CreateVideoAnalyseTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVideoAnalyseTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVideoAnalyseTaskOutcome(CreateVideoAnalyseTaskResult(outcome.result()));
	else
		return CreateVideoAnalyseTaskOutcome(outcome.error());
}

void ImmClient::createVideoAnalyseTaskAsync(const CreateVideoAnalyseTaskRequest& request, const CreateVideoAnalyseTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVideoAnalyseTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateVideoAnalyseTaskOutcomeCallable ImmClient::createVideoAnalyseTaskCallable(const CreateVideoAnalyseTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVideoAnalyseTaskOutcome()>>(
			[this, request]()
			{
			return this->createVideoAnalyseTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateVideoCompressTaskOutcome ImmClient::createVideoCompressTask(const CreateVideoCompressTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVideoCompressTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVideoCompressTaskOutcome(CreateVideoCompressTaskResult(outcome.result()));
	else
		return CreateVideoCompressTaskOutcome(outcome.error());
}

void ImmClient::createVideoCompressTaskAsync(const CreateVideoCompressTaskRequest& request, const CreateVideoCompressTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVideoCompressTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateVideoCompressTaskOutcomeCallable ImmClient::createVideoCompressTaskCallable(const CreateVideoCompressTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVideoCompressTaskOutcome()>>(
			[this, request]()
			{
			return this->createVideoCompressTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DecodeBlindWatermarkOutcome ImmClient::decodeBlindWatermark(const DecodeBlindWatermarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DecodeBlindWatermarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DecodeBlindWatermarkOutcome(DecodeBlindWatermarkResult(outcome.result()));
	else
		return DecodeBlindWatermarkOutcome(outcome.error());
}

void ImmClient::decodeBlindWatermarkAsync(const DecodeBlindWatermarkRequest& request, const DecodeBlindWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, decodeBlindWatermark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DecodeBlindWatermarkOutcomeCallable ImmClient::decodeBlindWatermarkCallable(const DecodeBlindWatermarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DecodeBlindWatermarkOutcome()>>(
			[this, request]()
			{
			return this->decodeBlindWatermark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DeleteDocIndexOutcome ImmClient::deleteDocIndex(const DeleteDocIndexRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDocIndexOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDocIndexOutcome(DeleteDocIndexResult(outcome.result()));
	else
		return DeleteDocIndexOutcome(outcome.error());
}

void ImmClient::deleteDocIndexAsync(const DeleteDocIndexRequest& request, const DeleteDocIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDocIndex(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DeleteDocIndexOutcomeCallable ImmClient::deleteDocIndexCallable(const DeleteDocIndexRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDocIndexOutcome()>>(
			[this, request]()
			{
			return this->deleteDocIndex(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DeleteImageOutcome ImmClient::deleteImage(const DeleteImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteImageOutcome(DeleteImageResult(outcome.result()));
	else
		return DeleteImageOutcome(outcome.error());
}

void ImmClient::deleteImageAsync(const DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DeleteImageOutcomeCallable ImmClient::deleteImageCallable(const DeleteImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteImageOutcome()>>(
			[this, request]()
			{
			return this->deleteImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DeleteImageJobOutcome ImmClient::deleteImageJob(const DeleteImageJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteImageJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteImageJobOutcome(DeleteImageJobResult(outcome.result()));
	else
		return DeleteImageJobOutcome(outcome.error());
}

void ImmClient::deleteImageJobAsync(const DeleteImageJobRequest& request, const DeleteImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteImageJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DeleteImageJobOutcomeCallable ImmClient::deleteImageJobCallable(const DeleteImageJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteImageJobOutcome()>>(
			[this, request]()
			{
			return this->deleteImageJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DeleteOfficeConversionTaskOutcome ImmClient::deleteOfficeConversionTask(const DeleteOfficeConversionTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteOfficeConversionTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteOfficeConversionTaskOutcome(DeleteOfficeConversionTaskResult(outcome.result()));
	else
		return DeleteOfficeConversionTaskOutcome(outcome.error());
}

void ImmClient::deleteOfficeConversionTaskAsync(const DeleteOfficeConversionTaskRequest& request, const DeleteOfficeConversionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteOfficeConversionTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DeleteOfficeConversionTaskOutcomeCallable ImmClient::deleteOfficeConversionTaskCallable(const DeleteOfficeConversionTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteOfficeConversionTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteOfficeConversionTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DeleteProjectOutcome ImmClient::deleteProject(const DeleteProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProjectOutcome(DeleteProjectResult(outcome.result()));
	else
		return DeleteProjectOutcome(outcome.error());
}

void ImmClient::deleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DeleteProjectOutcomeCallable ImmClient::deleteProjectCallable(const DeleteProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProjectOutcome()>>(
			[this, request]()
			{
			return this->deleteProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DeleteSetOutcome ImmClient::deleteSet(const DeleteSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSetOutcome(DeleteSetResult(outcome.result()));
	else
		return DeleteSetOutcome(outcome.error());
}

void ImmClient::deleteSetAsync(const DeleteSetRequest& request, const DeleteSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DeleteSetOutcomeCallable ImmClient::deleteSetCallable(const DeleteSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSetOutcome()>>(
			[this, request]()
			{
			return this->deleteSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DeleteVideoOutcome ImmClient::deleteVideo(const DeleteVideoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVideoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVideoOutcome(DeleteVideoResult(outcome.result()));
	else
		return DeleteVideoOutcome(outcome.error());
}

void ImmClient::deleteVideoAsync(const DeleteVideoRequest& request, const DeleteVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVideo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DeleteVideoOutcomeCallable ImmClient::deleteVideoCallable(const DeleteVideoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVideoOutcome()>>(
			[this, request]()
			{
			return this->deleteVideo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DeleteVideoTaskOutcome ImmClient::deleteVideoTask(const DeleteVideoTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVideoTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVideoTaskOutcome(DeleteVideoTaskResult(outcome.result()));
	else
		return DeleteVideoTaskOutcome(outcome.error());
}

void ImmClient::deleteVideoTaskAsync(const DeleteVideoTaskRequest& request, const DeleteVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVideoTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DeleteVideoTaskOutcomeCallable ImmClient::deleteVideoTaskCallable(const DeleteVideoTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVideoTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteVideoTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DescribeRegionsOutcome ImmClient::describeRegions(const DescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionsOutcome(DescribeRegionsResult(outcome.result()));
	else
		return DescribeRegionsOutcome(outcome.error());
}

void ImmClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DescribeRegionsOutcomeCallable ImmClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DetectClothesOutcome ImmClient::detectClothes(const DetectClothesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectClothesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectClothesOutcome(DetectClothesResult(outcome.result()));
	else
		return DetectClothesOutcome(outcome.error());
}

void ImmClient::detectClothesAsync(const DetectClothesRequest& request, const DetectClothesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectClothes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DetectClothesOutcomeCallable ImmClient::detectClothesCallable(const DetectClothesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectClothesOutcome()>>(
			[this, request]()
			{
			return this->detectClothes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DetectImageBodiesOutcome ImmClient::detectImageBodies(const DetectImageBodiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectImageBodiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectImageBodiesOutcome(DetectImageBodiesResult(outcome.result()));
	else
		return DetectImageBodiesOutcome(outcome.error());
}

void ImmClient::detectImageBodiesAsync(const DetectImageBodiesRequest& request, const DetectImageBodiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectImageBodies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DetectImageBodiesOutcomeCallable ImmClient::detectImageBodiesCallable(const DetectImageBodiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectImageBodiesOutcome()>>(
			[this, request]()
			{
			return this->detectImageBodies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DetectImageCelebrityOutcome ImmClient::detectImageCelebrity(const DetectImageCelebrityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectImageCelebrityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectImageCelebrityOutcome(DetectImageCelebrityResult(outcome.result()));
	else
		return DetectImageCelebrityOutcome(outcome.error());
}

void ImmClient::detectImageCelebrityAsync(const DetectImageCelebrityRequest& request, const DetectImageCelebrityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectImageCelebrity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DetectImageCelebrityOutcomeCallable ImmClient::detectImageCelebrityCallable(const DetectImageCelebrityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectImageCelebrityOutcome()>>(
			[this, request]()
			{
			return this->detectImageCelebrity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DetectImageFacesOutcome ImmClient::detectImageFaces(const DetectImageFacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectImageFacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectImageFacesOutcome(DetectImageFacesResult(outcome.result()));
	else
		return DetectImageFacesOutcome(outcome.error());
}

void ImmClient::detectImageFacesAsync(const DetectImageFacesRequest& request, const DetectImageFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectImageFaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DetectImageFacesOutcomeCallable ImmClient::detectImageFacesCallable(const DetectImageFacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectImageFacesOutcome()>>(
			[this, request]()
			{
			return this->detectImageFaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DetectImageLogosOutcome ImmClient::detectImageLogos(const DetectImageLogosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectImageLogosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectImageLogosOutcome(DetectImageLogosResult(outcome.result()));
	else
		return DetectImageLogosOutcome(outcome.error());
}

void ImmClient::detectImageLogosAsync(const DetectImageLogosRequest& request, const DetectImageLogosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectImageLogos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DetectImageLogosOutcomeCallable ImmClient::detectImageLogosCallable(const DetectImageLogosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectImageLogosOutcome()>>(
			[this, request]()
			{
			return this->detectImageLogos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DetectImageQRCodesOutcome ImmClient::detectImageQRCodes(const DetectImageQRCodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectImageQRCodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectImageQRCodesOutcome(DetectImageQRCodesResult(outcome.result()));
	else
		return DetectImageQRCodesOutcome(outcome.error());
}

void ImmClient::detectImageQRCodesAsync(const DetectImageQRCodesRequest& request, const DetectImageQRCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectImageQRCodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DetectImageQRCodesOutcomeCallable ImmClient::detectImageQRCodesCallable(const DetectImageQRCodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectImageQRCodesOutcome()>>(
			[this, request]()
			{
			return this->detectImageQRCodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DetectImageTagsOutcome ImmClient::detectImageTags(const DetectImageTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectImageTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectImageTagsOutcome(DetectImageTagsResult(outcome.result()));
	else
		return DetectImageTagsOutcome(outcome.error());
}

void ImmClient::detectImageTagsAsync(const DetectImageTagsRequest& request, const DetectImageTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectImageTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DetectImageTagsOutcomeCallable ImmClient::detectImageTagsCallable(const DetectImageTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectImageTagsOutcome()>>(
			[this, request]()
			{
			return this->detectImageTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DetectImageTextsOutcome ImmClient::detectImageTexts(const DetectImageTextsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectImageTextsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectImageTextsOutcome(DetectImageTextsResult(outcome.result()));
	else
		return DetectImageTextsOutcome(outcome.error());
}

void ImmClient::detectImageTextsAsync(const DetectImageTextsRequest& request, const DetectImageTextsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectImageTexts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DetectImageTextsOutcomeCallable ImmClient::detectImageTextsCallable(const DetectImageTextsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectImageTextsOutcome()>>(
			[this, request]()
			{
			return this->detectImageTexts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DetectQRCodesOutcome ImmClient::detectQRCodes(const DetectQRCodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectQRCodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectQRCodesOutcome(DetectQRCodesResult(outcome.result()));
	else
		return DetectQRCodesOutcome(outcome.error());
}

void ImmClient::detectQRCodesAsync(const DetectQRCodesRequest& request, const DetectQRCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectQRCodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DetectQRCodesOutcomeCallable ImmClient::detectQRCodesCallable(const DetectQRCodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectQRCodesOutcome()>>(
			[this, request]()
			{
			return this->detectQRCodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::EncodeBlindWatermarkOutcome ImmClient::encodeBlindWatermark(const EncodeBlindWatermarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EncodeBlindWatermarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EncodeBlindWatermarkOutcome(EncodeBlindWatermarkResult(outcome.result()));
	else
		return EncodeBlindWatermarkOutcome(outcome.error());
}

void ImmClient::encodeBlindWatermarkAsync(const EncodeBlindWatermarkRequest& request, const EncodeBlindWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, encodeBlindWatermark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::EncodeBlindWatermarkOutcomeCallable ImmClient::encodeBlindWatermarkCallable(const EncodeBlindWatermarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EncodeBlindWatermarkOutcome()>>(
			[this, request]()
			{
			return this->encodeBlindWatermark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::FindImagesOutcome ImmClient::findImages(const FindImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindImagesOutcome(FindImagesResult(outcome.result()));
	else
		return FindImagesOutcome(outcome.error());
}

void ImmClient::findImagesAsync(const FindImagesRequest& request, const FindImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::FindImagesOutcomeCallable ImmClient::findImagesCallable(const FindImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindImagesOutcome()>>(
			[this, request]()
			{
			return this->findImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::FindImagesByTagNamesOutcome ImmClient::findImagesByTagNames(const FindImagesByTagNamesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindImagesByTagNamesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindImagesByTagNamesOutcome(FindImagesByTagNamesResult(outcome.result()));
	else
		return FindImagesByTagNamesOutcome(outcome.error());
}

void ImmClient::findImagesByTagNamesAsync(const FindImagesByTagNamesRequest& request, const FindImagesByTagNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findImagesByTagNames(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::FindImagesByTagNamesOutcomeCallable ImmClient::findImagesByTagNamesCallable(const FindImagesByTagNamesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindImagesByTagNamesOutcome()>>(
			[this, request]()
			{
			return this->findImagesByTagNames(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::FindSimilarFacesOutcome ImmClient::findSimilarFaces(const FindSimilarFacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindSimilarFacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindSimilarFacesOutcome(FindSimilarFacesResult(outcome.result()));
	else
		return FindSimilarFacesOutcome(outcome.error());
}

void ImmClient::findSimilarFacesAsync(const FindSimilarFacesRequest& request, const FindSimilarFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findSimilarFaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::FindSimilarFacesOutcomeCallable ImmClient::findSimilarFacesCallable(const FindSimilarFacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindSimilarFacesOutcome()>>(
			[this, request]()
			{
			return this->findSimilarFaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetDocIndexOutcome ImmClient::getDocIndex(const GetDocIndexRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDocIndexOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDocIndexOutcome(GetDocIndexResult(outcome.result()));
	else
		return GetDocIndexOutcome(outcome.error());
}

void ImmClient::getDocIndexAsync(const GetDocIndexRequest& request, const GetDocIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDocIndex(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetDocIndexOutcomeCallable ImmClient::getDocIndexCallable(const GetDocIndexRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDocIndexOutcome()>>(
			[this, request]()
			{
			return this->getDocIndex(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetDocIndexTaskOutcome ImmClient::getDocIndexTask(const GetDocIndexTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDocIndexTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDocIndexTaskOutcome(GetDocIndexTaskResult(outcome.result()));
	else
		return GetDocIndexTaskOutcome(outcome.error());
}

void ImmClient::getDocIndexTaskAsync(const GetDocIndexTaskRequest& request, const GetDocIndexTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDocIndexTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetDocIndexTaskOutcomeCallable ImmClient::getDocIndexTaskCallable(const GetDocIndexTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDocIndexTaskOutcome()>>(
			[this, request]()
			{
			return this->getDocIndexTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetImageOutcome ImmClient::getImage(const GetImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetImageOutcome(GetImageResult(outcome.result()));
	else
		return GetImageOutcome(outcome.error());
}

void ImmClient::getImageAsync(const GetImageRequest& request, const GetImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetImageOutcomeCallable ImmClient::getImageCallable(const GetImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetImageOutcome()>>(
			[this, request]()
			{
			return this->getImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetImageJobOutcome ImmClient::getImageJob(const GetImageJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetImageJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetImageJobOutcome(GetImageJobResult(outcome.result()));
	else
		return GetImageJobOutcome(outcome.error());
}

void ImmClient::getImageJobAsync(const GetImageJobRequest& request, const GetImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getImageJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetImageJobOutcomeCallable ImmClient::getImageJobCallable(const GetImageJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetImageJobOutcome()>>(
			[this, request]()
			{
			return this->getImageJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetMediaMetaOutcome ImmClient::getMediaMeta(const GetMediaMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMediaMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMediaMetaOutcome(GetMediaMetaResult(outcome.result()));
	else
		return GetMediaMetaOutcome(outcome.error());
}

void ImmClient::getMediaMetaAsync(const GetMediaMetaRequest& request, const GetMediaMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMediaMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetMediaMetaOutcomeCallable ImmClient::getMediaMetaCallable(const GetMediaMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMediaMetaOutcome()>>(
			[this, request]()
			{
			return this->getMediaMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetOfficeConversionTaskOutcome ImmClient::getOfficeConversionTask(const GetOfficeConversionTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOfficeConversionTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOfficeConversionTaskOutcome(GetOfficeConversionTaskResult(outcome.result()));
	else
		return GetOfficeConversionTaskOutcome(outcome.error());
}

void ImmClient::getOfficeConversionTaskAsync(const GetOfficeConversionTaskRequest& request, const GetOfficeConversionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOfficeConversionTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetOfficeConversionTaskOutcomeCallable ImmClient::getOfficeConversionTaskCallable(const GetOfficeConversionTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOfficeConversionTaskOutcome()>>(
			[this, request]()
			{
			return this->getOfficeConversionTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetOfficePreviewURLOutcome ImmClient::getOfficePreviewURL(const GetOfficePreviewURLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOfficePreviewURLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOfficePreviewURLOutcome(GetOfficePreviewURLResult(outcome.result()));
	else
		return GetOfficePreviewURLOutcome(outcome.error());
}

void ImmClient::getOfficePreviewURLAsync(const GetOfficePreviewURLRequest& request, const GetOfficePreviewURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOfficePreviewURL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetOfficePreviewURLOutcomeCallable ImmClient::getOfficePreviewURLCallable(const GetOfficePreviewURLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOfficePreviewURLOutcome()>>(
			[this, request]()
			{
			return this->getOfficePreviewURL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetProjectOutcome ImmClient::getProject(const GetProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProjectOutcome(GetProjectResult(outcome.result()));
	else
		return GetProjectOutcome(outcome.error());
}

void ImmClient::getProjectAsync(const GetProjectRequest& request, const GetProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetProjectOutcomeCallable ImmClient::getProjectCallable(const GetProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProjectOutcome()>>(
			[this, request]()
			{
			return this->getProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetSetOutcome ImmClient::getSet(const GetSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSetOutcome(GetSetResult(outcome.result()));
	else
		return GetSetOutcome(outcome.error());
}

void ImmClient::getSetAsync(const GetSetRequest& request, const GetSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetSetOutcomeCallable ImmClient::getSetCallable(const GetSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSetOutcome()>>(
			[this, request]()
			{
			return this->getSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetVideoOutcome ImmClient::getVideo(const GetVideoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVideoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVideoOutcome(GetVideoResult(outcome.result()));
	else
		return GetVideoOutcome(outcome.error());
}

void ImmClient::getVideoAsync(const GetVideoRequest& request, const GetVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVideo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetVideoOutcomeCallable ImmClient::getVideoCallable(const GetVideoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVideoOutcome()>>(
			[this, request]()
			{
			return this->getVideo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetVideoTaskOutcome ImmClient::getVideoTask(const GetVideoTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVideoTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVideoTaskOutcome(GetVideoTaskResult(outcome.result()));
	else
		return GetVideoTaskOutcome(outcome.error());
}

void ImmClient::getVideoTaskAsync(const GetVideoTaskRequest& request, const GetVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVideoTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetVideoTaskOutcomeCallable ImmClient::getVideoTaskCallable(const GetVideoTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVideoTaskOutcome()>>(
			[this, request]()
			{
			return this->getVideoTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::IndexImageOutcome ImmClient::indexImage(const IndexImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return IndexImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return IndexImageOutcome(IndexImageResult(outcome.result()));
	else
		return IndexImageOutcome(outcome.error());
}

void ImmClient::indexImageAsync(const IndexImageRequest& request, const IndexImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, indexImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::IndexImageOutcomeCallable ImmClient::indexImageCallable(const IndexImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<IndexImageOutcome()>>(
			[this, request]()
			{
			return this->indexImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::IndexVideoOutcome ImmClient::indexVideo(const IndexVideoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return IndexVideoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return IndexVideoOutcome(IndexVideoResult(outcome.result()));
	else
		return IndexVideoOutcome(outcome.error());
}

void ImmClient::indexVideoAsync(const IndexVideoRequest& request, const IndexVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, indexVideo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::IndexVideoOutcomeCallable ImmClient::indexVideoCallable(const IndexVideoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<IndexVideoOutcome()>>(
			[this, request]()
			{
			return this->indexVideo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListFaceGroupsOutcome ImmClient::listFaceGroups(const ListFaceGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFaceGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFaceGroupsOutcome(ListFaceGroupsResult(outcome.result()));
	else
		return ListFaceGroupsOutcome(outcome.error());
}

void ImmClient::listFaceGroupsAsync(const ListFaceGroupsRequest& request, const ListFaceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFaceGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListFaceGroupsOutcomeCallable ImmClient::listFaceGroupsCallable(const ListFaceGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFaceGroupsOutcome()>>(
			[this, request]()
			{
			return this->listFaceGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListImageJobsOutcome ImmClient::listImageJobs(const ListImageJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListImageJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListImageJobsOutcome(ListImageJobsResult(outcome.result()));
	else
		return ListImageJobsOutcome(outcome.error());
}

void ImmClient::listImageJobsAsync(const ListImageJobsRequest& request, const ListImageJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listImageJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListImageJobsOutcomeCallable ImmClient::listImageJobsCallable(const ListImageJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListImageJobsOutcome()>>(
			[this, request]()
			{
			return this->listImageJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListImagesOutcome ImmClient::listImages(const ListImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListImagesOutcome(ListImagesResult(outcome.result()));
	else
		return ListImagesOutcome(outcome.error());
}

void ImmClient::listImagesAsync(const ListImagesRequest& request, const ListImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListImagesOutcomeCallable ImmClient::listImagesCallable(const ListImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListImagesOutcome()>>(
			[this, request]()
			{
			return this->listImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListOfficeConversionTaskOutcome ImmClient::listOfficeConversionTask(const ListOfficeConversionTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOfficeConversionTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOfficeConversionTaskOutcome(ListOfficeConversionTaskResult(outcome.result()));
	else
		return ListOfficeConversionTaskOutcome(outcome.error());
}

void ImmClient::listOfficeConversionTaskAsync(const ListOfficeConversionTaskRequest& request, const ListOfficeConversionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOfficeConversionTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListOfficeConversionTaskOutcomeCallable ImmClient::listOfficeConversionTaskCallable(const ListOfficeConversionTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOfficeConversionTaskOutcome()>>(
			[this, request]()
			{
			return this->listOfficeConversionTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListProjectAPIsOutcome ImmClient::listProjectAPIs(const ListProjectAPIsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectAPIsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectAPIsOutcome(ListProjectAPIsResult(outcome.result()));
	else
		return ListProjectAPIsOutcome(outcome.error());
}

void ImmClient::listProjectAPIsAsync(const ListProjectAPIsRequest& request, const ListProjectAPIsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjectAPIs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListProjectAPIsOutcomeCallable ImmClient::listProjectAPIsCallable(const ListProjectAPIsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectAPIsOutcome()>>(
			[this, request]()
			{
			return this->listProjectAPIs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListProjectsOutcome ImmClient::listProjects(const ListProjectsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectsOutcome(ListProjectsResult(outcome.result()));
	else
		return ListProjectsOutcome(outcome.error());
}

void ImmClient::listProjectsAsync(const ListProjectsRequest& request, const ListProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListProjectsOutcomeCallable ImmClient::listProjectsCallable(const ListProjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectsOutcome()>>(
			[this, request]()
			{
			return this->listProjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListSetTagsOutcome ImmClient::listSetTags(const ListSetTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSetTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSetTagsOutcome(ListSetTagsResult(outcome.result()));
	else
		return ListSetTagsOutcome(outcome.error());
}

void ImmClient::listSetTagsAsync(const ListSetTagsRequest& request, const ListSetTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSetTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListSetTagsOutcomeCallable ImmClient::listSetTagsCallable(const ListSetTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSetTagsOutcome()>>(
			[this, request]()
			{
			return this->listSetTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListSetsOutcome ImmClient::listSets(const ListSetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSetsOutcome(ListSetsResult(outcome.result()));
	else
		return ListSetsOutcome(outcome.error());
}

void ImmClient::listSetsAsync(const ListSetsRequest& request, const ListSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListSetsOutcomeCallable ImmClient::listSetsCallable(const ListSetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSetsOutcome()>>(
			[this, request]()
			{
			return this->listSets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListTagNamesOutcome ImmClient::listTagNames(const ListTagNamesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagNamesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagNamesOutcome(ListTagNamesResult(outcome.result()));
	else
		return ListTagNamesOutcome(outcome.error());
}

void ImmClient::listTagNamesAsync(const ListTagNamesRequest& request, const ListTagNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagNames(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListTagNamesOutcomeCallable ImmClient::listTagNamesCallable(const ListTagNamesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagNamesOutcome()>>(
			[this, request]()
			{
			return this->listTagNames(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListVideoAudiosOutcome ImmClient::listVideoAudios(const ListVideoAudiosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVideoAudiosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVideoAudiosOutcome(ListVideoAudiosResult(outcome.result()));
	else
		return ListVideoAudiosOutcome(outcome.error());
}

void ImmClient::listVideoAudiosAsync(const ListVideoAudiosRequest& request, const ListVideoAudiosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVideoAudios(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListVideoAudiosOutcomeCallable ImmClient::listVideoAudiosCallable(const ListVideoAudiosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVideoAudiosOutcome()>>(
			[this, request]()
			{
			return this->listVideoAudios(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListVideoFramesOutcome ImmClient::listVideoFrames(const ListVideoFramesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVideoFramesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVideoFramesOutcome(ListVideoFramesResult(outcome.result()));
	else
		return ListVideoFramesOutcome(outcome.error());
}

void ImmClient::listVideoFramesAsync(const ListVideoFramesRequest& request, const ListVideoFramesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVideoFrames(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListVideoFramesOutcomeCallable ImmClient::listVideoFramesCallable(const ListVideoFramesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVideoFramesOutcome()>>(
			[this, request]()
			{
			return this->listVideoFrames(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListVideoTasksOutcome ImmClient::listVideoTasks(const ListVideoTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVideoTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVideoTasksOutcome(ListVideoTasksResult(outcome.result()));
	else
		return ListVideoTasksOutcome(outcome.error());
}

void ImmClient::listVideoTasksAsync(const ListVideoTasksRequest& request, const ListVideoTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVideoTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListVideoTasksOutcomeCallable ImmClient::listVideoTasksCallable(const ListVideoTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVideoTasksOutcome()>>(
			[this, request]()
			{
			return this->listVideoTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListVideosOutcome ImmClient::listVideos(const ListVideosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVideosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVideosOutcome(ListVideosResult(outcome.result()));
	else
		return ListVideosOutcome(outcome.error());
}

void ImmClient::listVideosAsync(const ListVideosRequest& request, const ListVideosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVideos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListVideosOutcomeCallable ImmClient::listVideosCallable(const ListVideosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVideosOutcome()>>(
			[this, request]()
			{
			return this->listVideos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::PutProjectOutcome ImmClient::putProject(const PutProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutProjectOutcome(PutProjectResult(outcome.result()));
	else
		return PutProjectOutcome(outcome.error());
}

void ImmClient::putProjectAsync(const PutProjectRequest& request, const PutProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::PutProjectOutcomeCallable ImmClient::putProjectCallable(const PutProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutProjectOutcome()>>(
			[this, request]()
			{
			return this->putProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::SearchDocIndexOutcome ImmClient::searchDocIndex(const SearchDocIndexRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchDocIndexOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchDocIndexOutcome(SearchDocIndexResult(outcome.result()));
	else
		return SearchDocIndexOutcome(outcome.error());
}

void ImmClient::searchDocIndexAsync(const SearchDocIndexRequest& request, const SearchDocIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchDocIndex(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::SearchDocIndexOutcomeCallable ImmClient::searchDocIndexCallable(const SearchDocIndexRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchDocIndexOutcome()>>(
			[this, request]()
			{
			return this->searchDocIndex(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::UpdateDocIndexMetaOutcome ImmClient::updateDocIndexMeta(const UpdateDocIndexMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDocIndexMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDocIndexMetaOutcome(UpdateDocIndexMetaResult(outcome.result()));
	else
		return UpdateDocIndexMetaOutcome(outcome.error());
}

void ImmClient::updateDocIndexMetaAsync(const UpdateDocIndexMetaRequest& request, const UpdateDocIndexMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDocIndexMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::UpdateDocIndexMetaOutcomeCallable ImmClient::updateDocIndexMetaCallable(const UpdateDocIndexMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDocIndexMetaOutcome()>>(
			[this, request]()
			{
			return this->updateDocIndexMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::UpdateFaceGroupOutcome ImmClient::updateFaceGroup(const UpdateFaceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFaceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFaceGroupOutcome(UpdateFaceGroupResult(outcome.result()));
	else
		return UpdateFaceGroupOutcome(outcome.error());
}

void ImmClient::updateFaceGroupAsync(const UpdateFaceGroupRequest& request, const UpdateFaceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFaceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::UpdateFaceGroupOutcomeCallable ImmClient::updateFaceGroupCallable(const UpdateFaceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFaceGroupOutcome()>>(
			[this, request]()
			{
			return this->updateFaceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::UpdateImageOutcome ImmClient::updateImage(const UpdateImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateImageOutcome(UpdateImageResult(outcome.result()));
	else
		return UpdateImageOutcome(outcome.error());
}

void ImmClient::updateImageAsync(const UpdateImageRequest& request, const UpdateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::UpdateImageOutcomeCallable ImmClient::updateImageCallable(const UpdateImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateImageOutcome()>>(
			[this, request]()
			{
			return this->updateImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::UpdateProjectOutcome ImmClient::updateProject(const UpdateProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProjectOutcome(UpdateProjectResult(outcome.result()));
	else
		return UpdateProjectOutcome(outcome.error());
}

void ImmClient::updateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::UpdateProjectOutcomeCallable ImmClient::updateProjectCallable(const UpdateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProjectOutcome()>>(
			[this, request]()
			{
			return this->updateProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::UpdateSetOutcome ImmClient::updateSet(const UpdateSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSetOutcome(UpdateSetResult(outcome.result()));
	else
		return UpdateSetOutcome(outcome.error());
}

void ImmClient::updateSetAsync(const UpdateSetRequest& request, const UpdateSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::UpdateSetOutcomeCallable ImmClient::updateSetCallable(const UpdateSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSetOutcome()>>(
			[this, request]()
			{
			return this->updateSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

