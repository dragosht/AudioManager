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
#ifndef ORG_GENIVI_NODESTATEMANAGER_Life_Cycle_Consumer_STUB_H_
#define ORG_GENIVI_NODESTATEMANAGER_Life_Cycle_Consumer_STUB_H_




#include "LifeCycleConsumer.h"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif


#include <CommonAPI/Stub.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace NodeStateManager {

/**
 * Receives messages from remote and handles all dispatching of deserialized calls
 * to a stub for the service LifeCycleConsumer. Also provides means to send broadcasts
 * and attribute-changed-notifications of observable attributes as defined by this service.
 * An application developer should not need to bother with this class.
 */
class LifeCycleConsumerStubAdapter: virtual public CommonAPI::StubAdapter, public LifeCycleConsumer {
 public:

    
    
    virtual void deactivateManagedInstances() = 0;
    
protected:
    /**
     * Defines properties for storing the ClientIds of clients / proxies that have
     * subscribed to the selective broadcasts
     */
};


/**
 * Defines the necessary callbacks to handle remote set events related to the attributes
 * defined in the IDL description for LifeCycleConsumer.
 * For each attribute two callbacks are defined:
 * - a verification callback that allows to verify the requested value and to prevent setting
 *   e.g. an invalid value ("onRemoteSet<AttributeName>").
 * - an action callback to do local work after the attribute value has been changed
 *   ("onRemote<AttributeName>Changed").
 *
 * This class and the one below are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class LifeCycleConsumerStubRemoteEvent {
 public:
    virtual ~LifeCycleConsumerStubRemoteEvent() { }

};


/**
 * Defines the interface that must be implemented by any class that should provide
 * the service LifeCycleConsumer to remote clients.
 * This class and the one above are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class LifeCycleConsumerStub : public CommonAPI::Stub<LifeCycleConsumerStubAdapter , LifeCycleConsumerStubRemoteEvent> {
 public:
    virtual ~LifeCycleConsumerStub() { }


    /// This is the method that will be called on remote calls on the method LifecycleRequest.
    virtual void LifecycleRequest(const std::shared_ptr<CommonAPI::ClientId> clientId, uint32_t Request, uint32_t RequestId, int32_t& ErrorCode) = 0;
    
};

} // namespace NodeStateManager
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_NODESTATEMANAGER_Life_Cycle_Consumer_STUB_H_
