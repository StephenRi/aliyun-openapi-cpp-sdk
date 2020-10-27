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

#include <alibabacloud/dataworks-public/model/GetDataServiceApiResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetDataServiceApiResult::GetDataServiceApiResult() :
	ServiceResult()
{}

GetDataServiceApiResult::GetDataServiceApiResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDataServiceApiResult::~GetDataServiceApiResult()
{}

void GetDataServiceApiResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ApiId"].isNull())
		data_.apiId = std::stol(dataNode["ApiId"].asString());
	if(!dataNode["ApiMode"].isNull())
		data_.apiMode = std::stoi(dataNode["ApiMode"].asString());
	if(!dataNode["ApiName"].isNull())
		data_.apiName = dataNode["ApiName"].asString();
	if(!dataNode["ApiPath"].isNull())
		data_.apiPath = dataNode["ApiPath"].asString();
	if(!dataNode["CreatedTime"].isNull())
		data_.createdTime = dataNode["CreatedTime"].asString();
	if(!dataNode["CreatorId"].isNull())
		data_.creatorId = dataNode["CreatorId"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["GroupId"].isNull())
		data_.groupId = dataNode["GroupId"].asString();
	if(!dataNode["ModifiedTime"].isNull())
		data_.modifiedTime = dataNode["ModifiedTime"].asString();
	if(!dataNode["OperatorId"].isNull())
		data_.operatorId = dataNode["OperatorId"].asString();
	if(!dataNode["ProjectId"].isNull())
		data_.projectId = std::stol(dataNode["ProjectId"].asString());
	if(!dataNode["RequestMethod"].isNull())
		data_.requestMethod = std::stoi(dataNode["RequestMethod"].asString());
	if(!dataNode["ResponseContentType"].isNull())
		data_.responseContentType = std::stoi(dataNode["ResponseContentType"].asString());
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	if(!dataNode["TenantId"].isNull())
		data_.tenantId = std::stol(dataNode["TenantId"].asString());
	if(!dataNode["Timeout"].isNull())
		data_.timeout = std::stoi(dataNode["Timeout"].asString());
	if(!dataNode["VisibleRange"].isNull())
		data_.visibleRange = std::stoi(dataNode["VisibleRange"].asString());
	if(!dataNode["FolderId"].isNull())
		data_.folderId = std::stol(dataNode["FolderId"].asString());
	auto registrationDetailsNode = dataNode["RegistrationDetails"];
	if(!registrationDetailsNode["FailedResultSample"].isNull())
		data_.registrationDetails.failedResultSample = registrationDetailsNode["FailedResultSample"].asString();
	if(!registrationDetailsNode["ServiceContentType"].isNull())
		data_.registrationDetails.serviceContentType = std::stoi(registrationDetailsNode["ServiceContentType"].asString());
	if(!registrationDetailsNode["ServiceHost"].isNull())
		data_.registrationDetails.serviceHost = registrationDetailsNode["ServiceHost"].asString();
	if(!registrationDetailsNode["ServicePath"].isNull())
		data_.registrationDetails.servicePath = registrationDetailsNode["ServicePath"].asString();
	if(!registrationDetailsNode["ServiceRequestBodyDescription"].isNull())
		data_.registrationDetails.serviceRequestBodyDescription = registrationDetailsNode["ServiceRequestBodyDescription"].asString();
	if(!registrationDetailsNode["SuccessfulResultSample"].isNull())
		data_.registrationDetails.successfulResultSample = registrationDetailsNode["SuccessfulResultSample"].asString();
	auto allRegistrationErrorCodesNode = registrationDetailsNode["RegistrationErrorCodes"]["RegistrationErrorCode"];
	for (auto registrationDetailsNodeRegistrationErrorCodesRegistrationErrorCode : allRegistrationErrorCodesNode)
	{
		Data::RegistrationDetails::RegistrationErrorCode registrationErrorCodeObject;
		if(!registrationDetailsNodeRegistrationErrorCodesRegistrationErrorCode["ErrorCode"].isNull())
			registrationErrorCodeObject.errorCode = registrationDetailsNodeRegistrationErrorCodesRegistrationErrorCode["ErrorCode"].asString();
		if(!registrationDetailsNodeRegistrationErrorCodesRegistrationErrorCode["ErrorMessage"].isNull())
			registrationErrorCodeObject.errorMessage = registrationDetailsNodeRegistrationErrorCodesRegistrationErrorCode["ErrorMessage"].asString();
		if(!registrationDetailsNodeRegistrationErrorCodesRegistrationErrorCode["ErrorSolution"].isNull())
			registrationErrorCodeObject.errorSolution = registrationDetailsNodeRegistrationErrorCodesRegistrationErrorCode["ErrorSolution"].asString();
		data_.registrationDetails.registrationErrorCodes.push_back(registrationErrorCodeObject);
	}
	auto allRegistrationRequestParametersNode = registrationDetailsNode["RegistrationRequestParameters"]["RegistrationRequestParameter"];
	for (auto registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter : allRegistrationRequestParametersNode)
	{
		Data::RegistrationDetails::RegistrationRequestParameter registrationRequestParameterObject;
		if(!registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ColumnName"].isNull())
			registrationRequestParameterObject.columnName = registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ColumnName"].asString();
		if(!registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["DefaultValue"].isNull())
			registrationRequestParameterObject.defaultValue = registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["DefaultValue"].asString();
		if(!registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ExampleValue"].isNull())
			registrationRequestParameterObject.exampleValue = registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ExampleValue"].asString();
		if(!registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["IsRequiredParameter"].isNull())
			registrationRequestParameterObject.isRequiredParameter = registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["IsRequiredParameter"].asString() == "true";
		if(!registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ParameterDataType"].isNull())
			registrationRequestParameterObject.parameterDataType = std::stoi(registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ParameterDataType"].asString());
		if(!registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ParameterDescription"].isNull())
			registrationRequestParameterObject.parameterDescription = registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ParameterDescription"].asString();
		if(!registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ParameterName"].isNull())
			registrationRequestParameterObject.parameterName = registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ParameterName"].asString();
		if(!registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ParameterOperator"].isNull())
			registrationRequestParameterObject.parameterOperator = std::stoi(registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ParameterOperator"].asString());
		if(!registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ParameterPosition"].isNull())
			registrationRequestParameterObject.parameterPosition = std::stoi(registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ParameterPosition"].asString());
		data_.registrationDetails.registrationRequestParameters.push_back(registrationRequestParameterObject);
	}
	auto scriptDetailsNode = dataNode["ScriptDetails"];
	if(!scriptDetailsNode["IsPagedResponse"].isNull())
		data_.scriptDetails.isPagedResponse = scriptDetailsNode["IsPagedResponse"].asString() == "true";
	if(!scriptDetailsNode["Script"].isNull())
		data_.scriptDetails.script = scriptDetailsNode["Script"].asString();
	auto allScriptRequestParametersNode = scriptDetailsNode["ScriptRequestParameters"]["ScriptRequestParameter"];
	for (auto scriptDetailsNodeScriptRequestParametersScriptRequestParameter : allScriptRequestParametersNode)
	{
		Data::ScriptDetails::ScriptRequestParameter scriptRequestParameterObject;
		if(!scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ColumnName"].isNull())
			scriptRequestParameterObject.columnName = scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ColumnName"].asString();
		if(!scriptDetailsNodeScriptRequestParametersScriptRequestParameter["DefaultValue"].isNull())
			scriptRequestParameterObject.defaultValue = scriptDetailsNodeScriptRequestParametersScriptRequestParameter["DefaultValue"].asString();
		if(!scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ExampleValue"].isNull())
			scriptRequestParameterObject.exampleValue = scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ExampleValue"].asString();
		if(!scriptDetailsNodeScriptRequestParametersScriptRequestParameter["IsRequiredParameter"].isNull())
			scriptRequestParameterObject.isRequiredParameter = scriptDetailsNodeScriptRequestParametersScriptRequestParameter["IsRequiredParameter"].asString() == "true";
		if(!scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ParameterDataType"].isNull())
			scriptRequestParameterObject.parameterDataType = std::stoi(scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ParameterDataType"].asString());
		if(!scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ParameterDescription"].isNull())
			scriptRequestParameterObject.parameterDescription = scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ParameterDescription"].asString();
		if(!scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ParameterName"].isNull())
			scriptRequestParameterObject.parameterName = scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ParameterName"].asString();
		if(!scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ParameterOperator"].isNull())
			scriptRequestParameterObject.parameterOperator = std::stoi(scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ParameterOperator"].asString());
		if(!scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ParameterPosition"].isNull())
			scriptRequestParameterObject.parameterPosition = std::stoi(scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ParameterPosition"].asString());
		data_.scriptDetails.scriptRequestParameters.push_back(scriptRequestParameterObject);
	}
	auto allScriptResponseParametersNode = scriptDetailsNode["ScriptResponseParameters"]["ScriptResponseParameter"];
	for (auto scriptDetailsNodeScriptResponseParametersScriptResponseParameter : allScriptResponseParametersNode)
	{
		Data::ScriptDetails::ScriptResponseParameter scriptResponseParameterObject;
		if(!scriptDetailsNodeScriptResponseParametersScriptResponseParameter["ColumnName"].isNull())
			scriptResponseParameterObject.columnName = scriptDetailsNodeScriptResponseParametersScriptResponseParameter["ColumnName"].asString();
		if(!scriptDetailsNodeScriptResponseParametersScriptResponseParameter["ExampleValue"].isNull())
			scriptResponseParameterObject.exampleValue = scriptDetailsNodeScriptResponseParametersScriptResponseParameter["ExampleValue"].asString();
		if(!scriptDetailsNodeScriptResponseParametersScriptResponseParameter["ParameterDataType"].isNull())
			scriptResponseParameterObject.parameterDataType = std::stoi(scriptDetailsNodeScriptResponseParametersScriptResponseParameter["ParameterDataType"].asString());
		if(!scriptDetailsNodeScriptResponseParametersScriptResponseParameter["ParameterDescription"].isNull())
			scriptResponseParameterObject.parameterDescription = scriptDetailsNodeScriptResponseParametersScriptResponseParameter["ParameterDescription"].asString();
		if(!scriptDetailsNodeScriptResponseParametersScriptResponseParameter["ParameterName"].isNull())
			scriptResponseParameterObject.parameterName = scriptDetailsNodeScriptResponseParametersScriptResponseParameter["ParameterName"].asString();
		data_.scriptDetails.scriptResponseParameters.push_back(scriptResponseParameterObject);
	}
	auto scriptConnectionNode = scriptDetailsNode["ScriptConnection"];
	if(!scriptConnectionNode["ConnectionId"].isNull())
		data_.scriptDetails.scriptConnection.connectionId = std::stol(scriptConnectionNode["ConnectionId"].asString());
	if(!scriptConnectionNode["TableName"].isNull())
		data_.scriptDetails.scriptConnection.tableName = scriptConnectionNode["TableName"].asString();
	auto wizardDetailsNode = dataNode["WizardDetails"];
	if(!wizardDetailsNode["IsPagedResponse"].isNull())
		data_.wizardDetails.isPagedResponse = wizardDetailsNode["IsPagedResponse"].asString() == "true";
	auto allWizardRequestParametersNode = wizardDetailsNode["WizardRequestParameters"]["WizardRequestParameter"];
	for (auto wizardDetailsNodeWizardRequestParametersWizardRequestParameter : allWizardRequestParametersNode)
	{
		Data::WizardDetails::WizardRequestParameter wizardRequestParameterObject;
		if(!wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ColumnName"].isNull())
			wizardRequestParameterObject.columnName = wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ColumnName"].asString();
		if(!wizardDetailsNodeWizardRequestParametersWizardRequestParameter["DefaultValue"].isNull())
			wizardRequestParameterObject.defaultValue = wizardDetailsNodeWizardRequestParametersWizardRequestParameter["DefaultValue"].asString();
		if(!wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ExampleValue"].isNull())
			wizardRequestParameterObject.exampleValue = wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ExampleValue"].asString();
		if(!wizardDetailsNodeWizardRequestParametersWizardRequestParameter["IsRequiredParameter"].isNull())
			wizardRequestParameterObject.isRequiredParameter = wizardDetailsNodeWizardRequestParametersWizardRequestParameter["IsRequiredParameter"].asString() == "true";
		if(!wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ParameterDataType"].isNull())
			wizardRequestParameterObject.parameterDataType = std::stoi(wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ParameterDataType"].asString());
		if(!wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ParameterDescription"].isNull())
			wizardRequestParameterObject.parameterDescription = wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ParameterDescription"].asString();
		if(!wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ParameterName"].isNull())
			wizardRequestParameterObject.parameterName = wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ParameterName"].asString();
		if(!wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ParameterOperator"].isNull())
			wizardRequestParameterObject.parameterOperator = std::stoi(wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ParameterOperator"].asString());
		if(!wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ParameterPosition"].isNull())
			wizardRequestParameterObject.parameterPosition = std::stoi(wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ParameterPosition"].asString());
		data_.wizardDetails.wizardRequestParameters.push_back(wizardRequestParameterObject);
	}
	auto allWizardResponseParametersNode = wizardDetailsNode["WizardResponseParameters"]["WizardResponseParameter"];
	for (auto wizardDetailsNodeWizardResponseParametersWizardResponseParameter : allWizardResponseParametersNode)
	{
		Data::WizardDetails::WizardResponseParameter wizardResponseParameterObject;
		if(!wizardDetailsNodeWizardResponseParametersWizardResponseParameter["ColumnName"].isNull())
			wizardResponseParameterObject.columnName = wizardDetailsNodeWizardResponseParametersWizardResponseParameter["ColumnName"].asString();
		if(!wizardDetailsNodeWizardResponseParametersWizardResponseParameter["ExampleValue"].isNull())
			wizardResponseParameterObject.exampleValue = wizardDetailsNodeWizardResponseParametersWizardResponseParameter["ExampleValue"].asString();
		if(!wizardDetailsNodeWizardResponseParametersWizardResponseParameter["ParameterDataType"].isNull())
			wizardResponseParameterObject.parameterDataType = std::stoi(wizardDetailsNodeWizardResponseParametersWizardResponseParameter["ParameterDataType"].asString());
		if(!wizardDetailsNodeWizardResponseParametersWizardResponseParameter["ParameterDescription"].isNull())
			wizardResponseParameterObject.parameterDescription = wizardDetailsNodeWizardResponseParametersWizardResponseParameter["ParameterDescription"].asString();
		if(!wizardDetailsNodeWizardResponseParametersWizardResponseParameter["ParameterName"].isNull())
			wizardResponseParameterObject.parameterName = wizardDetailsNodeWizardResponseParametersWizardResponseParameter["ParameterName"].asString();
		data_.wizardDetails.wizardResponseParameters.push_back(wizardResponseParameterObject);
	}
	auto wizardConnectionNode = wizardDetailsNode["WizardConnection"];
	if(!wizardConnectionNode["ConnectionId"].isNull())
		data_.wizardDetails.wizardConnection.connectionId = std::stol(wizardConnectionNode["ConnectionId"].asString());
	if(!wizardConnectionNode["TableName"].isNull())
		data_.wizardDetails.wizardConnection.tableName = wizardConnectionNode["TableName"].asString();
		auto allProtocols = dataNode["Protocols"]["Protocol"];
		for (auto value : allProtocols)
			data_.protocols.push_back(value.asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int GetDataServiceApiResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetDataServiceApiResult::Data GetDataServiceApiResult::getData()const
{
	return data_;
}

std::string GetDataServiceApiResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetDataServiceApiResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetDataServiceApiResult::getSuccess()const
{
	return success_;
}

