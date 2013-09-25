/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.1.201309251246.
* Used org.franca.core 0.8.9.201308271211.
*
* Copyright (C) 2012, BMW AG
* This file is part of GENIVI Project AudioManager.
* 
* Contributions are licensed to the GENIVI Alliance under one or more
* Contribution License Agreements.
* 
* \copyright
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0. If a  copy of the MPL was not distributed with this file, You can obtain one at http://mozilla.org/MPL/2.0/.
* 
* \author Aleksandar Donchev, aleksander.donchev@partner.bmw.de BMW 2013
* \author Christian Linke christian.linke@bmw.de BMW 2013
* For further information see http://www.genivi.org/.
*/
#include "LifeCycleConsumerDBusStubAdapter.h"
#include <org/genivi/NodeStateManager/LifeCycleConsumer.h>

namespace org {
namespace genivi {
namespace NodeStateManager {

std::shared_ptr<CommonAPI::DBus::DBusStubAdapter> createLifeCycleConsumerDBusStubAdapter(
                   const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                   const std::string& commonApiAddress,
                   const std::string& interfaceName,
                   const std::string& busName,
                   const std::string& objectPath,
                   const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyConnection,
                   const std::shared_ptr<CommonAPI::StubBase>& stubBase) {
    return std::make_shared<LifeCycleConsumerDBusStubAdapter>(factory, commonApiAddress, interfaceName, busName, objectPath, dbusProxyConnection, stubBase);
}

__attribute__((constructor)) void registerLifeCycleConsumerDBusStubAdapter(void) {
    CommonAPI::DBus::DBusFactory::registerAdapterFactoryMethod(LifeCycleConsumer::getInterfaceId(),
                                                               &createLifeCycleConsumerDBusStubAdapter);
}

LifeCycleConsumerDBusStubAdapter::LifeCycleConsumerDBusStubAdapter(
        const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
        const std::string& commonApiAddress,
        const std::string& dbusInterfaceName,
        const std::string& dbusBusName,
        const std::string& dbusObjectPath,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusConnection,
        const std::shared_ptr<CommonAPI::StubBase>& stub):
        LifeCycleConsumerDBusStubAdapterHelper(factory, commonApiAddress, dbusInterfaceName, dbusBusName, dbusObjectPath, 
            dbusConnection, std::dynamic_pointer_cast<LifeCycleConsumerStub>(stub),
            NULL)
            {
}

LifeCycleConsumerDBusStubAdapter::~LifeCycleConsumerDBusStubAdapter() {
    deactivateManagedInstances();
    deinit();
    stub_.reset();
}

void LifeCycleConsumerDBusStubAdapter::deactivateManagedInstances() {
}

const char* LifeCycleConsumerDBusStubAdapter::getMethodsDBusIntrospectionXmlData() const {
    static const char* introspectionData =
        "<method name=\"LifecycleRequest\">\n"
            "<arg name=\"Request\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"RequestId\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"ErrorCode\" type=\"i\" direction=\"out\" />\n"
        "</method>\n"
    ;
    return introspectionData;
}



static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    LifeCycleConsumerStub,
    std::tuple<uint32_t, uint32_t>,
    std::tuple<int32_t>
    > lifecycleRequestStubDispatcher(&LifeCycleConsumerStub::LifecycleRequest, "i");



const LifeCycleConsumerDBusStubAdapter::StubDispatcherTable& LifeCycleConsumerDBusStubAdapter::getStubDispatcherTable() {
    static const LifeCycleConsumerDBusStubAdapter::StubDispatcherTable stubDispatcherTable = {
            { { "LifecycleRequest", "uu" }, &org::genivi::NodeStateManager::lifecycleRequestStubDispatcher }
            };
    return stubDispatcherTable;
}


} // namespace NodeStateManager
} // namespace genivi
} // namespace org
