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
/**
 * @author Christian Linke
 */
#ifndef ORG_GENIVI_NODESTATEMANAGER_Consumer_STUB_H_
#define ORG_GENIVI_NODESTATEMANAGER_Consumer_STUB_H_




#include "Consumer.h"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <unordered_set>

#include <CommonAPI/Stub.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace NodeStateManager {

/**
 * Receives messages from remote and handles all dispatching of deserialized calls
 * to a stub for the service Consumer. Also provides means to send broadcasts
 * and attribute-changed-notifications of observable attributes as defined by this service.
 * An application developer should not need to bother with this class.
 */
class ConsumerStubAdapter: virtual public CommonAPI::StubAdapter, public Consumer {
 public:

    /**
     * Sends a broadcast event for NodeApplicationMode. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireNodeApplicationModeEvent(const int32_t& ApplicationModeId) = 0;
    /**
     * Sends a broadcast event for SessionStateChanged. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireSessionStateChangedEvent(const std::string& SessionStateName, const int32_t& SeatID, const int32_t& SessionState) = 0;
    /**
     * Sends a broadcast event for NodeState. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireNodeStateEvent(const int32_t& NodeState) = 0;
    
    
    virtual void deactivateManagedInstances() = 0;
    
protected:
    /**
     * Defines properties for storing the ClientIds of clients / proxies that have
     * subscribed to the selective broadcasts
     */
};


/**
 * Defines the necessary callbacks to handle remote set events related to the attributes
 * defined in the IDL description for Consumer.
 * For each attribute two callbacks are defined:
 * - a verification callback that allows to verify the requested value and to prevent setting
 *   e.g. an invalid value ("onRemoteSet<AttributeName>").
 * - an action callback to do local work after the attribute value has been changed
 *   ("onRemote<AttributeName>Changed").
 *
 * This class and the one below are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class ConsumerStubRemoteEvent {
 public:
    virtual ~ConsumerStubRemoteEvent() { }





};


/**
 * Defines the interface that must be implemented by any class that should provide
 * the service Consumer to remote clients.
 * This class and the one above are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class ConsumerStub : public CommonAPI::Stub<ConsumerStubAdapter , ConsumerStubRemoteEvent> {
 public:
    virtual ~ConsumerStub() { }

    /// Provides getter access to the attribute BootMode
    virtual const int32_t& getBootModeAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    /// Provides getter access to the attribute RestartReason
    virtual const int32_t& getRestartReasonAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    /// Provides getter access to the attribute ShutdownReason
    virtual const int32_t& getShutdownReasonAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    /// Provides getter access to the attribute WakeUpReason
    virtual const int32_t& getWakeUpReasonAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;

    /// This is the method that will be called on remote calls on the method GetAppHealthCount.
    virtual void GetAppHealthCount(const std::shared_ptr<CommonAPI::ClientId> clientId, uint32_t& Count) = 0;
    /// This is the method that will be called on remote calls on the method LifecycleRequestComplete.
    virtual void LifecycleRequestComplete(const std::shared_ptr<CommonAPI::ClientId> clientId, uint32_t RequestId, int32_t Status, int32_t& ErrorCode) = 0;
    /// This is the method that will be called on remote calls on the method GetInterfaceVersion.
    virtual void GetInterfaceVersion(const std::shared_ptr<CommonAPI::ClientId> clientId, uint32_t& Version) = 0;
    /// This is the method that will be called on remote calls on the method GetApplicationMode.
    virtual void GetApplicationMode(const std::shared_ptr<CommonAPI::ClientId> clientId, int32_t& ErrorCode, int32_t& ApplicationModeId) = 0;
    /// This is the method that will be called on remote calls on the method UnRegisterSession.
    virtual void UnRegisterSession(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string SessionName, std::string SessionOwner, int32_t SeatID, int32_t& ErrorCode) = 0;
    /// This is the method that will be called on remote calls on the method RegisterSession.
    virtual void RegisterSession(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string SessionName, std::string SessionOwner, int32_t SeatID, int32_t SessionState, int32_t& ErrorCode) = 0;
    /// This is the method that will be called on remote calls on the method UnRegisterShutdownClient.
    virtual void UnRegisterShutdownClient(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string BusName, std::string ObjName, uint32_t ShutdownMode, int32_t& ErrorCode) = 0;
    /// This is the method that will be called on remote calls on the method RegisterShutdownClient.
    virtual void RegisterShutdownClient(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string BusName, std::string ObjName, uint32_t ShutdownMode, uint32_t TimeoutMs, int32_t& ErrorCode) = 0;
    /// This is the method that will be called on remote calls on the method GetNodeState.
    virtual void GetNodeState(const std::shared_ptr<CommonAPI::ClientId> clientId, int32_t& ErrorCode, int32_t& NodeStateId) = 0;
    /// This is the method that will be called on remote calls on the method GetSessionState.
    virtual void GetSessionState(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string SessionName, int32_t SeatID, int32_t& SessionState, int32_t& ErrorCode) = 0;
    /// This is the method that will be called on remote calls on the method SetSessionState.
    virtual void SetSessionState(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string SessionName, std::string SessionOwner, int32_t SessionState, int32_t SeatID, int32_t& ErrorCode) = 0;
    /// Sends a broadcast event for NodeApplicationMode.
    virtual void fireNodeApplicationModeEvent(const int32_t& ApplicationModeId) = 0;
    /// Sends a broadcast event for SessionStateChanged.
    virtual void fireSessionStateChangedEvent(const std::string& SessionStateName, const int32_t& SeatID, const int32_t& SessionState) = 0;
    /// Sends a broadcast event for NodeState.
    virtual void fireNodeStateEvent(const int32_t& NodeState) = 0;
    
};

} // namespace NodeStateManager
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_NODESTATEMANAGER_Consumer_STUB_H_
