/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.5.201312121915.
* Used org.franca.core 0.8.11.201401091023.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include "ConsumerDBusStubAdapter.h"
#include <org/genivi/NodeStateManager/Consumer.h>

namespace org {
namespace genivi {
namespace NodeStateManager {

std::shared_ptr<CommonAPI::DBus::DBusStubAdapter> createConsumerDBusStubAdapter(
                   const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                   const std::string& commonApiAddress,
                   const std::string& interfaceName,
                   const std::string& busName,
                   const std::string& objectPath,
                   const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyConnection,
                   const std::shared_ptr<CommonAPI::StubBase>& stubBase) {
    return std::make_shared<ConsumerDBusStubAdapter>(factory, commonApiAddress, interfaceName, busName, objectPath, dbusProxyConnection, stubBase);
}

__attribute__((constructor)) void registerConsumerDBusStubAdapter(void) {
    CommonAPI::DBus::DBusFactory::registerAdapterFactoryMethod(Consumer::getInterfaceId(),
                                                               &createConsumerDBusStubAdapter);
}



ConsumerDBusStubAdapterInternal::~ConsumerDBusStubAdapterInternal() {
    deactivateManagedInstances();
    ConsumerDBusStubAdapterHelper::deinit();
}

void ConsumerDBusStubAdapterInternal::deactivateManagedInstances() {
}

const char* ConsumerDBusStubAdapterInternal::getMethodsDBusIntrospectionXmlData() const {
    static const std::string introspectionData =
        "<method name=\"getInterfaceVersion\">\n"
            "<arg name=\"value\" type=\"uu\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"getBootModeAttribute\">\n"
            "<arg name=\"value\" type=\"i\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"getRestartReasonAttribute\">\n"
            "<arg name=\"value\" type=\"i\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"getShutdownReasonAttribute\">\n"
            "<arg name=\"value\" type=\"i\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"getWakeUpReasonAttribute\">\n"
            "<arg name=\"value\" type=\"i\" direction=\"out\" />"
        "</method>\n"
        "<signal name=\"NodeApplicationMode\">\n"
            "<arg name=\"ApplicationModeId\" type=\"i\" />\n"
        "</signal>\n"
        "<signal name=\"SessionStateChanged\">\n"
            "<arg name=\"SessionStateName\" type=\"s\" />\n"
            "<arg name=\"SeatID\" type=\"i\" />\n"
            "<arg name=\"SessionState\" type=\"i\" />\n"
        "</signal>\n"
        "<signal name=\"NodeState\">\n"
            "<arg name=\"NodeState\" type=\"i\" />\n"
        "</signal>\n"
        "<method name=\"GetAppHealthCount\">\n"
            "<arg name=\"Count\" type=\"u\" direction=\"out\" />\n"
        "</method>\n"
        "<method name=\"LifecycleRequestComplete\">\n"
            "<arg name=\"RequestId\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"Status\" type=\"i\" direction=\"in\" />\n"
            "<arg name=\"ErrorCode\" type=\"i\" direction=\"out\" />\n"
        "</method>\n"
        "<method name=\"GetInterfaceVersion\">\n"
            "<arg name=\"Version\" type=\"u\" direction=\"out\" />\n"
        "</method>\n"
        "<method name=\"GetApplicationMode\">\n"
            "<arg name=\"ErrorCode\" type=\"i\" direction=\"out\" />\n"
            "<arg name=\"ApplicationModeId\" type=\"i\" direction=\"out\" />\n"
        "</method>\n"
        "<method name=\"UnRegisterSession\">\n"
            "<arg name=\"SessionName\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"SessionOwner\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"SeatID\" type=\"i\" direction=\"in\" />\n"
            "<arg name=\"ErrorCode\" type=\"i\" direction=\"out\" />\n"
        "</method>\n"
        "<method name=\"RegisterSession\">\n"
            "<arg name=\"SessionName\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"SessionOwner\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"SeatID\" type=\"i\" direction=\"in\" />\n"
            "<arg name=\"SessionState\" type=\"i\" direction=\"in\" />\n"
            "<arg name=\"ErrorCode\" type=\"i\" direction=\"out\" />\n"
        "</method>\n"
        "<method name=\"UnRegisterShutdownClient\">\n"
            "<arg name=\"BusName\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"ObjName\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"ShutdownMode\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"ErrorCode\" type=\"i\" direction=\"out\" />\n"
        "</method>\n"
        "<method name=\"RegisterShutdownClient\">\n"
            "<arg name=\"BusName\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"ObjName\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"ShutdownMode\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"TimeoutMs\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"ErrorCode\" type=\"i\" direction=\"out\" />\n"
        "</method>\n"
        "<method name=\"GetNodeState\">\n"
            "<arg name=\"ErrorCode\" type=\"i\" direction=\"out\" />\n"
            "<arg name=\"NodeStateId\" type=\"i\" direction=\"out\" />\n"
        "</method>\n"
        "<method name=\"GetSessionState\">\n"
            "<arg name=\"SessionName\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"SeatID\" type=\"i\" direction=\"in\" />\n"
            "<arg name=\"SessionState\" type=\"i\" direction=\"out\" />\n"
            "<arg name=\"ErrorCode\" type=\"i\" direction=\"out\" />\n"
        "</method>\n"
        "<method name=\"SetSessionState\">\n"
            "<arg name=\"SessionName\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"SessionOwner\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"SessionState\" type=\"i\" direction=\"in\" />\n"
            "<arg name=\"SeatID\" type=\"i\" direction=\"in\" />\n"
            "<arg name=\"ErrorCode\" type=\"i\" direction=\"out\" />\n"
        "</method>\n"

    ;
    return introspectionData.c_str();
}

static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ConsumerStub,
        CommonAPI::Version
        > getConsumerInterfaceVersionStubDispatcher(&ConsumerStub::getInterfaceVersion, "uu");

static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ConsumerStub,
        int32_t
        > getBootModeAttributeStubDispatcher(&ConsumerStub::getBootModeAttribute, "i");

static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ConsumerStub,
        int32_t
        > getRestartReasonAttributeStubDispatcher(&ConsumerStub::getRestartReasonAttribute, "i");

static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ConsumerStub,
        int32_t
        > getShutdownReasonAttributeStubDispatcher(&ConsumerStub::getShutdownReasonAttribute, "i");

static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ConsumerStub,
        int32_t
        > getWakeUpReasonAttributeStubDispatcher(&ConsumerStub::getWakeUpReasonAttribute, "i");


static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ConsumerStub,
    std::tuple<>,
    std::tuple<uint32_t>
    > getAppHealthCountStubDispatcher(&ConsumerStub::GetAppHealthCount, "u");
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ConsumerStub,
    std::tuple<uint32_t, int32_t>,
    std::tuple<int32_t>
    > lifecycleRequestCompleteStubDispatcher(&ConsumerStub::LifecycleRequestComplete, "i");
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ConsumerStub,
    std::tuple<>,
    std::tuple<uint32_t>
    > getInterfaceVersionStubDispatcher(&ConsumerStub::GetInterfaceVersion, "u");
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ConsumerStub,
    std::tuple<>,
    std::tuple<int32_t, int32_t>
    > getApplicationModeStubDispatcher(&ConsumerStub::GetApplicationMode, "ii");
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ConsumerStub,
    std::tuple<std::string, std::string, int32_t>,
    std::tuple<int32_t>
    > unRegisterSessionStubDispatcher(&ConsumerStub::UnRegisterSession, "i");
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ConsumerStub,
    std::tuple<std::string, std::string, int32_t, int32_t>,
    std::tuple<int32_t>
    > registerSessionStubDispatcher(&ConsumerStub::RegisterSession, "i");
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ConsumerStub,
    std::tuple<std::string, std::string, uint32_t>,
    std::tuple<int32_t>
    > unRegisterShutdownClientStubDispatcher(&ConsumerStub::UnRegisterShutdownClient, "i");
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ConsumerStub,
    std::tuple<std::string, std::string, uint32_t, uint32_t>,
    std::tuple<int32_t>
    > registerShutdownClientStubDispatcher(&ConsumerStub::RegisterShutdownClient, "i");
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ConsumerStub,
    std::tuple<>,
    std::tuple<int32_t, int32_t>
    > getNodeStateStubDispatcher(&ConsumerStub::GetNodeState, "ii");
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ConsumerStub,
    std::tuple<std::string, int32_t>,
    std::tuple<int32_t, int32_t>
    > getSessionStateStubDispatcher(&ConsumerStub::GetSessionState, "ii");
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ConsumerStub,
    std::tuple<std::string, std::string, int32_t, int32_t>,
    std::tuple<int32_t>
    > setSessionStateStubDispatcher(&ConsumerStub::SetSessionState, "i");


void ConsumerDBusStubAdapterInternal::fireNodeApplicationModeEvent(const int32_t& ApplicationModeId) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<int32_t>>
            ::sendSignal(
                *this,
                "NodeApplicationMode",
                "i",
                ApplicationModeId
        );
}
void ConsumerDBusStubAdapterInternal::fireSessionStateChangedEvent(const std::string& SessionStateName, const int32_t& SeatID, const int32_t& SessionState) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, int32_t, int32_t>>
            ::sendSignal(
                *this,
                "SessionStateChanged",
                "sii",
                SessionStateName, SeatID, SessionState
        );
}
void ConsumerDBusStubAdapterInternal::fireNodeStateEvent(const int32_t& NodeState) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<int32_t>>
            ::sendSignal(
                *this,
                "NodeState",
                "i",
                NodeState
        );
}

const ConsumerDBusStubAdapterHelper::StubDispatcherTable& ConsumerDBusStubAdapterInternal::getStubDispatcherTable() {
    return stubDispatcherTable_;
}


ConsumerDBusStubAdapterInternal::ConsumerDBusStubAdapterInternal(
        const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
        const std::string& commonApiAddress,
        const std::string& dbusInterfaceName,
        const std::string& dbusBusName,
        const std::string& dbusObjectPath,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusConnection,
        const std::shared_ptr<CommonAPI::StubBase>& stub):
        CommonAPI::DBus::DBusStubAdapter(
                factory,
                commonApiAddress,
                dbusInterfaceName,
                dbusBusName,
                dbusObjectPath,
                dbusConnection,
                false),
        ConsumerDBusStubAdapterHelper(
            factory,
            commonApiAddress,
            dbusInterfaceName,
            dbusBusName,
            dbusObjectPath,
            dbusConnection,
            std::dynamic_pointer_cast<ConsumerStub>(stub),
            false),
        stubDispatcherTable_({
            { { "getBootModeAttribute", "" }, &org::genivi::NodeStateManager::getBootModeAttributeStubDispatcher },
            { { "getRestartReasonAttribute", "" }, &org::genivi::NodeStateManager::getRestartReasonAttributeStubDispatcher },
            { { "getShutdownReasonAttribute", "" }, &org::genivi::NodeStateManager::getShutdownReasonAttributeStubDispatcher },
            { { "getWakeUpReasonAttribute", "" }, &org::genivi::NodeStateManager::getWakeUpReasonAttributeStubDispatcher }
            ,
            { { "GetAppHealthCount", "" }, &org::genivi::NodeStateManager::getAppHealthCountStubDispatcher },
            { { "LifecycleRequestComplete", "ui" }, &org::genivi::NodeStateManager::lifecycleRequestCompleteStubDispatcher },
            { { "GetInterfaceVersion", "" }, &org::genivi::NodeStateManager::getInterfaceVersionStubDispatcher },
            { { "GetApplicationMode", "" }, &org::genivi::NodeStateManager::getApplicationModeStubDispatcher },
            { { "UnRegisterSession", "ssi" }, &org::genivi::NodeStateManager::unRegisterSessionStubDispatcher },
            { { "RegisterSession", "ssii" }, &org::genivi::NodeStateManager::registerSessionStubDispatcher },
            { { "UnRegisterShutdownClient", "ssu" }, &org::genivi::NodeStateManager::unRegisterShutdownClientStubDispatcher },
            { { "RegisterShutdownClient", "ssuu" }, &org::genivi::NodeStateManager::registerShutdownClientStubDispatcher },
            { { "GetNodeState", "" }, &org::genivi::NodeStateManager::getNodeStateStubDispatcher },
            { { "GetSessionState", "si" }, &org::genivi::NodeStateManager::getSessionStateStubDispatcher },
            { { "SetSessionState", "ssii" }, &org::genivi::NodeStateManager::setSessionStateStubDispatcher }
            }) {

    stubDispatcherTable_.insert({ { "getInterfaceVersion", "" }, &org::genivi::NodeStateManager::getConsumerInterfaceVersionStubDispatcher });
}

} // namespace NodeStateManager
} // namespace genivi
} // namespace org