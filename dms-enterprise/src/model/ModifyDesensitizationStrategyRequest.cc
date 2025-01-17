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

#include <alibabacloud/dms-enterprise/model/ModifyDesensitizationStrategyRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ModifyDesensitizationStrategyRequest;

ModifyDesensitizationStrategyRequest::ModifyDesensitizationStrategyRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ModifyDesensitizationStrategy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDesensitizationStrategyRequest::~ModifyDesensitizationStrategyRequest() {}

bool ModifyDesensitizationStrategyRequest::getIsReset() const {
  return isReset_;
}

void ModifyDesensitizationStrategyRequest::setIsReset(bool isReset) {
  isReset_ = isReset;
  setParameter(std::string("IsReset"), isReset ? "true" : "false");
}

long ModifyDesensitizationStrategyRequest::getTid() const {
  return tid_;
}

void ModifyDesensitizationStrategyRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string ModifyDesensitizationStrategyRequest::getTableName() const {
  return tableName_;
}

void ModifyDesensitizationStrategyRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

std::string ModifyDesensitizationStrategyRequest::getSchemaName() const {
  return schemaName_;
}

void ModifyDesensitizationStrategyRequest::setSchemaName(const std::string &schemaName) {
  schemaName_ = schemaName;
  setParameter(std::string("SchemaName"), schemaName);
}

bool ModifyDesensitizationStrategyRequest::getIsLogic() const {
  return isLogic_;
}

void ModifyDesensitizationStrategyRequest::setIsLogic(bool isLogic) {
  isLogic_ = isLogic;
  setParameter(std::string("IsLogic"), isLogic ? "true" : "false");
}

std::string ModifyDesensitizationStrategyRequest::getColumnName() const {
  return columnName_;
}

void ModifyDesensitizationStrategyRequest::setColumnName(const std::string &columnName) {
  columnName_ = columnName;
  setParameter(std::string("ColumnName"), columnName);
}

int ModifyDesensitizationStrategyRequest::getDbId() const {
  return dbId_;
}

void ModifyDesensitizationStrategyRequest::setDbId(int dbId) {
  dbId_ = dbId;
  setParameter(std::string("DbId"), std::to_string(dbId));
}

int ModifyDesensitizationStrategyRequest::getRuleId() const {
  return ruleId_;
}

void ModifyDesensitizationStrategyRequest::setRuleId(int ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), std::to_string(ruleId));
}

