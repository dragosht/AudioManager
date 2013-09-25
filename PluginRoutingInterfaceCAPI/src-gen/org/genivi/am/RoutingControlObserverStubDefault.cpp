/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.1.201309251246.
* Used org.franca.core 0.8.9.201308271211.
*
* Copyright (c) 2012 BMW
* 
* \author Aleksandar Donchev, aleksander.donchev@partner.bmw.de BMW 2013
* 
* \copyright
* Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction,
* including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so,
* subject to the following conditions:
* The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR
* THE USE OR OTHER DEALINGS IN THE SOFTWARE.
* 
* For further information see http://www.genivi.org/.
*/
#include <org/genivi/am/RoutingControlObserverStubDefault.h>

namespace org {
namespace genivi {
namespace am {

RoutingControlObserverStubDefault::RoutingControlObserverStubDefault():
        remoteEventHandler_(this) {
}

RoutingControlObserverStubRemoteEvent* RoutingControlObserverStubDefault::initStubAdapter(const std::shared_ptr<RoutingControlObserverStubAdapter>& stubAdapter) {
    stubAdapter_ = stubAdapter;
    return &remoteEventHandler_;
}

const am_RoutingReady_e& RoutingControlObserverStubDefault::getRoutingReadyAttribute() {
    return routingReadyAttributeValue_;
}

const am_RoutingReady_e& RoutingControlObserverStubDefault::getRoutingReadyAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getRoutingReadyAttribute();
}

void RoutingControlObserverStubDefault::setRoutingReadyAttribute(am_RoutingReady_e value) {
    const bool valueChanged = trySetRoutingReadyAttribute(std::move(value));
    if (valueChanged) {
        stubAdapter_->fireRoutingReadyAttributeChanged(routingReadyAttributeValue_);
    }
}

bool RoutingControlObserverStubDefault::trySetRoutingReadyAttribute(am_RoutingReady_e value) {
    if (!validateRoutingReadyAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (routingReadyAttributeValue_ != value);
    routingReadyAttributeValue_ = std::move(value);
    return valueChanged;
}

bool RoutingControlObserverStubDefault::validateRoutingReadyAttributeRequestedValue(const am_RoutingReady_e& value) {
    return true;
}



/**
 * acknowledges a asyncConnect
 */
void RoutingControlObserverStubDefault::ackConnect(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_connectionID_t connectionID, am_Error_e error) {
    // Call old style methods in default 
    ackConnect(handle, connectionID, error);
}
void RoutingControlObserverStubDefault::ackConnect(am_Handle_s handle, am_connectionID_t connectionID, am_Error_e error) {
    // No operation in default
}

/**
 * acknowledges a asyncDisconnect
 */
void RoutingControlObserverStubDefault::ackDisconnect(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_connectionID_t connectionID, am_Error_e error) {
    // Call old style methods in default 
    ackDisconnect(handle, connectionID, error);
}
void RoutingControlObserverStubDefault::ackDisconnect(am_Handle_s handle, am_connectionID_t connectionID, am_Error_e error) {
    // No operation in default
}

/**
 * acknowledges a asyncsetSinkVolume
 */
void RoutingControlObserverStubDefault::ackSetSinkVolumeChange(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_volume_t volume, am_Error_e error) {
    // Call old style methods in default 
    ackSetSinkVolumeChange(handle, volume, error);
}
void RoutingControlObserverStubDefault::ackSetSinkVolumeChange(am_Handle_s handle, am_volume_t volume, am_Error_e error) {
    // No operation in default
}

/**
 * acknowledges a asyncsetSourceVolume
 */
void RoutingControlObserverStubDefault::ackSetSourceVolumeChange(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_volume_t volume, am_Error_e error) {
    // Call old style methods in default 
    ackSetSourceVolumeChange(handle, volume, error);
}
void RoutingControlObserverStubDefault::ackSetSourceVolumeChange(am_Handle_s handle, am_volume_t volume, am_Error_e error) {
    // No operation in default
}

/**
 * acknowlegde for asyncSetSourceState
 */
void RoutingControlObserverStubDefault::ackSetSourceState(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_Error_e error) {
    // Call old style methods in default 
    ackSetSourceState(handle, error);
}
void RoutingControlObserverStubDefault::ackSetSourceState(am_Handle_s handle, am_Error_e error) {
    // No operation in default
}

/**
 * acknowledges asyncSetSinkSoundProperties
 */
void RoutingControlObserverStubDefault::ackSetSinkSoundProperties(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_Error_e error) {
    // Call old style methods in default 
    ackSetSinkSoundProperties(handle, error);
}
void RoutingControlObserverStubDefault::ackSetSinkSoundProperties(am_Handle_s handle, am_Error_e error) {
    // No operation in default
}

/**
 * acknowledges asyncSetSinkSoundProperty
 */
void RoutingControlObserverStubDefault::ackSetSinkSoundProperty(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_Error_e error) {
    // Call old style methods in default 
    ackSetSinkSoundProperty(handle, error);
}
void RoutingControlObserverStubDefault::ackSetSinkSoundProperty(am_Handle_s handle, am_Error_e error) {
    // No operation in default
}

/**
 * acknowledges asyncSetSourceSoundProperties
 */
void RoutingControlObserverStubDefault::ackSetSourceSoundProperties(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_Error_e error) {
    // Call old style methods in default 
    ackSetSourceSoundProperties(handle, error);
}
void RoutingControlObserverStubDefault::ackSetSourceSoundProperties(am_Handle_s handle, am_Error_e error) {
    // No operation in default
}

/**
 * acknowledges asyncSetSourceSoundProperty
 */
void RoutingControlObserverStubDefault::ackSetSourceSoundProperty(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_Error_e error) {
    // Call old style methods in default 
    ackSetSourceSoundProperty(handle, error);
}
void RoutingControlObserverStubDefault::ackSetSourceSoundProperty(am_Handle_s handle, am_Error_e error) {
    // No operation in default
}

/**
 * acknowledges asyncCrossFade
 */
void RoutingControlObserverStubDefault::ackCrossFading(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_HotSink_e hotSink, am_Error_e error) {
    // Call old style methods in default 
    ackCrossFading(handle, hotSink, error);
}
void RoutingControlObserverStubDefault::ackCrossFading(am_Handle_s handle, am_HotSink_e hotSink, am_Error_e error) {
    // No operation in default
}

/**
 * acknowledges a volume tick. This can be used to display volumechanges during
 *  ramps
 */
void RoutingControlObserverStubDefault::ackSourceVolumeTick(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_sourceID_t sourceID, am_volume_t volume) {
    // Call old style methods in default 
    ackSourceVolumeTick(handle, sourceID, volume);
}
void RoutingControlObserverStubDefault::ackSourceVolumeTick(am_Handle_s handle, am_sourceID_t sourceID, am_volume_t volume) {
    // No operation in default
}

/**
 * acknowledges a volume tick. This can be used to display volumechanges during
 *  ramps
 */
void RoutingControlObserverStubDefault::ackSinkVolumeTick(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_sinkID_t sinkID, am_volume_t volume) {
    // Call old style methods in default 
    ackSinkVolumeTick(handle, sinkID, volume);
}
void RoutingControlObserverStubDefault::ackSinkVolumeTick(am_Handle_s handle, am_sinkID_t sinkID, am_volume_t volume) {
    // No operation in default
}

/**
 * This function returns the ID to the given domainName. If already a domain is
 *  registered with this name, it will return the corresponding ID, if not it will
 *  reserve an ID but not register the domain. The other parameters of the domain
 *  will be overwritten when the domain is registered.
(at)return E_OK on
 *  success, E_UNKNOWN on error
 */
void RoutingControlObserverStubDefault::peekDomain(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string name, am_domainID_t& domainID, am_Error_e& error) {
    // Call old style methods in default 
    peekDomain(name, domainID, error);
}
void RoutingControlObserverStubDefault::peekDomain(std::string name, am_domainID_t& domainID, am_Error_e& error) {
    // No operation in default
}

/**
 * registers a domain
(at)return E_OK on succes, E_ALREADY_EXISTENT if already
 *  registered E_UNKOWN on error
 */
void RoutingControlObserverStubDefault::registerDomain(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Domain_s domainData, std::string returnBusname, std::string returnInterface, am_domainID_t& domainID, am_Error_e& error) {
    // Call old style methods in default 
    registerDomain(domainData, returnBusname, returnInterface, domainID, error);
}
void RoutingControlObserverStubDefault::registerDomain(am_Domain_s domainData, std::string returnBusname, std::string returnInterface, am_domainID_t& domainID, am_Error_e& error) {
    // No operation in default
}

/**
 * deregisters a domain. All sources, sinks, gateways and crossfaders from that
 *  domain will be removed as well.
(at)return E_OK on succes, E_NON_EXISTENT if
 *  not found E_UNKOWN on error
 */
void RoutingControlObserverStubDefault::deregisterDomain(const std::shared_ptr<CommonAPI::ClientId> clientId, am_domainID_t domainID, am_Error_e& error) {
    // Call old style methods in default 
    deregisterDomain(domainID, error);
}
void RoutingControlObserverStubDefault::deregisterDomain(am_domainID_t domainID, am_Error_e& error) {
    // No operation in default
}

/**
 * registers a gateway. (at)return E_OK on succes, E_ALREADY_EXISTENT if already
 *  registered E_UNKOWN on error
 */
void RoutingControlObserverStubDefault::registerGateway(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Gateway_s gatewayData, am_gatewayID_t& gatewayID, am_Error_e& error) {
    // Call old style methods in default 
    registerGateway(gatewayData, gatewayID, error);
}
void RoutingControlObserverStubDefault::registerGateway(am_Gateway_s gatewayData, am_gatewayID_t& gatewayID, am_Error_e& error) {
    // No operation in default
}

/**
 * deregisters a gateway. Also removes all sinks and sources of the controlling
 *  domain.
(at)return E_OK on succes, E_NON_EXISTENT if not found E_UNKOWN on
 *  error
 */
void RoutingControlObserverStubDefault::deregisterGateway(const std::shared_ptr<CommonAPI::ClientId> clientId, am_gatewayID_t gatewayID, am_Error_e& error) {
    // Call old style methods in default 
    deregisterGateway(gatewayID, error);
}
void RoutingControlObserverStubDefault::deregisterGateway(am_gatewayID_t gatewayID, am_Error_e& error) {
    // No operation in default
}

/**
 * This function returns the ID to the given sinkName. If already a sink is
 *  registered with this name, it will return the corresponding ID, if not it will
 *  reserve an ID but not register the sink. The other parameters of the sink will
 *  be overwritten when the sink is registered.
(at)return E_OK on success,
 *  E_UNKNOWN on error
 */
void RoutingControlObserverStubDefault::peekSink(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string name, am_sinkID_t& sinkID, am_Error_e& error) {
    // Call old style methods in default 
    peekSink(name, sinkID, error);
}
void RoutingControlObserverStubDefault::peekSink(std::string name, am_sinkID_t& sinkID, am_Error_e& error) {
    // No operation in default
}

/**
 * Registers a sink. If the sink is part of a gateway, the listconnectionFormats
 *  is copied to the gatewayInformation
(at)return E_OK on succes,
 *  E_ALREADY_EXISTENT if already registered E_UNKOWN on error
 */
void RoutingControlObserverStubDefault::registerSink(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Sink_s sinkData, am_sinkID_t& sinkID, am_Error_e& error) {
    // Call old style methods in default 
    registerSink(sinkData, sinkID, error);
}
void RoutingControlObserverStubDefault::registerSink(am_Sink_s sinkData, am_sinkID_t& sinkID, am_Error_e& error) {
    // No operation in default
}

/**
 * deregisters a sink.
(at)return E_OK on succes, E_NON_EXISTENT if not found
 *  E_UNKOWN on error
 */
void RoutingControlObserverStubDefault::deregisterSink(const std::shared_ptr<CommonAPI::ClientId> clientId, am_sinkID_t sinkID, am_Error_e& error) {
    // Call old style methods in default 
    deregisterSink(sinkID, error);
}
void RoutingControlObserverStubDefault::deregisterSink(am_sinkID_t sinkID, am_Error_e& error) {
    // No operation in default
}

/**
 * This function returns the ID to the given sourceName. If already a source is
 *  registered with this name, it will return the corresponding ID, if not it will
 *  reserve an ID but not register the source. The other parameters of the source
 *  will be overwritten when the source is registered.
(at)return E_OK on
 *  success, E_UNKNOWN on error
 */
void RoutingControlObserverStubDefault::peekSource(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string name, am_sourceID_t& sourceID, am_Error_e& error) {
    // Call old style methods in default 
    peekSource(name, sourceID, error);
}
void RoutingControlObserverStubDefault::peekSource(std::string name, am_sourceID_t& sourceID, am_Error_e& error) {
    // No operation in default
}

/**
 * registers a source.  If the source is part of a gateway, the
 *  listconnectionFormats is copied to the gatewayInformation
(at)return E_OK on
 *  success, E_UNKNOWN on error, E_ALREADY_EXIST if either name or sourceID
 *  already exists
 */
void RoutingControlObserverStubDefault::registerSource(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Source_s sourceData, am_sourceID_t& sourceID, am_Error_e& error) {
    // Call old style methods in default 
    registerSource(sourceData, sourceID, error);
}
void RoutingControlObserverStubDefault::registerSource(am_Source_s sourceData, am_sourceID_t& sourceID, am_Error_e& error) {
    // No operation in default
}

/**
 * deregisters a source
(at)return E_OK on succes, E_NON_EXISTENT if not found
 *  E_UNKOWN on error
 */
void RoutingControlObserverStubDefault::deregisterSource(const std::shared_ptr<CommonAPI::ClientId> clientId, am_sourceID_t sourceID, am_Error_e& error) {
    // Call old style methods in default 
    deregisterSource(sourceID, error);
}
void RoutingControlObserverStubDefault::deregisterSource(am_sourceID_t sourceID, am_Error_e& error) {
    // No operation in default
}

/**
 * this function registers a crossfader.
(at)return E_OK on succes,
 *  E_ALREADY_EXISTENT if already registered E_UNKOWN on error
 */
void RoutingControlObserverStubDefault::registerCrossfader(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Crossfader_s crossfaderData, am_crossfaderID_t& crossfaderID, am_Error_e& error) {
    // Call old style methods in default 
    registerCrossfader(crossfaderData, crossfaderID, error);
}
void RoutingControlObserverStubDefault::registerCrossfader(am_Crossfader_s crossfaderData, am_crossfaderID_t& crossfaderID, am_Error_e& error) {
    // No operation in default
}

/**
 * this function deregisters a crossfader. removes all sources and sinks assiated
 *  as well.
(at)return E_OK on succes, E_NON_EXISTENT if not found E_UNKOWN on
 *  error
 */
void RoutingControlObserverStubDefault::deregisterCrossfader(const std::shared_ptr<CommonAPI::ClientId> clientId, am_crossfaderID_t crossfaderID, am_Error_e& error) {
    // Call old style methods in default 
    deregisterCrossfader(crossfaderID, error);
}
void RoutingControlObserverStubDefault::deregisterCrossfader(am_crossfaderID_t crossfaderID, am_Error_e& error) {
    // No operation in default
}

/**
 * this function peeks a sourceclassID. It is used by the RoutingPlugins to
 *  determine the SinkClassIDs of a sinkClass.
(at)return E_OK on succes,
 *  E_DATABASE_ERROR on error
 */
void RoutingControlObserverStubDefault::peekSourceClassID(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string name, am_sourceClass_t& sourceClassID, am_Error_e& error) {
    // Call old style methods in default 
    peekSourceClassID(name, sourceClassID, error);
}
void RoutingControlObserverStubDefault::peekSourceClassID(std::string name, am_sourceClass_t& sourceClassID, am_Error_e& error) {
    // No operation in default
}

/**
 * this function peeks a sourceclassID. It is used by the RoutingPlugins to
 *  determine the SinkClassIDs of a sinkClass.
(at)return E_OK on succes,
 *  E_DATABASE_ERROR on error
 */
void RoutingControlObserverStubDefault::peekSinkClassID(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string name, am_sinkClass_t& sinkClassID, am_Error_e& error) {
    // Call old style methods in default 
    peekSinkClassID(name, sinkClassID, error);
}
void RoutingControlObserverStubDefault::peekSinkClassID(std::string name, am_sinkClass_t& sinkClassID, am_Error_e& error) {
    // No operation in default
}

/**
 * is called when a low level interrupt changes it status.
 */
void RoutingControlObserverStubDefault::hookInterruptStatusChange(const std::shared_ptr<CommonAPI::ClientId> clientId, am_sourceID_t sourceID, am_InterruptState_e interruptState) {
    // Call old style methods in default 
    hookInterruptStatusChange(sourceID, interruptState);
}
void RoutingControlObserverStubDefault::hookInterruptStatusChange(am_sourceID_t sourceID, am_InterruptState_e interruptState) {
    // No operation in default
}

/**
 * This hook is called when all elements from a domain are registered.
Is used by
 *  the Controller to know when all expected domains are finally registered
 */
void RoutingControlObserverStubDefault::hookDomainRegistrationComplete(const std::shared_ptr<CommonAPI::ClientId> clientId, am_domainID_t domainID) {
    // Call old style methods in default 
    hookDomainRegistrationComplete(domainID);
}
void RoutingControlObserverStubDefault::hookDomainRegistrationComplete(am_domainID_t domainID) {
    // No operation in default
}

/**
 * is called when a sink changes its availability
 */
void RoutingControlObserverStubDefault::hookSinkAvailablityStatusChange(const std::shared_ptr<CommonAPI::ClientId> clientId, am_sinkID_t sinkID, am_Availability_s availability) {
    // Call old style methods in default 
    hookSinkAvailablityStatusChange(sinkID, availability);
}
void RoutingControlObserverStubDefault::hookSinkAvailablityStatusChange(am_sinkID_t sinkID, am_Availability_s availability) {
    // No operation in default
}

/**
 * is called when a source changes its availability
 */
void RoutingControlObserverStubDefault::hookSourceAvailablityStatusChange(const std::shared_ptr<CommonAPI::ClientId> clientId, am_sourceID_t sourceID, am_Availability_s availability) {
    // Call old style methods in default 
    hookSourceAvailablityStatusChange(sourceID, availability);
}
void RoutingControlObserverStubDefault::hookSourceAvailablityStatusChange(am_sourceID_t sourceID, am_Availability_s availability) {
    // No operation in default
}

/**
 * is called when a domain changes its status. This used for early domains only
 */
void RoutingControlObserverStubDefault::hookDomainStateChange(const std::shared_ptr<CommonAPI::ClientId> clientId, am_domainID_t domainID, am_DomainState_e domainState) {
    // Call old style methods in default 
    hookDomainStateChange(domainID, domainState);
}
void RoutingControlObserverStubDefault::hookDomainStateChange(am_domainID_t domainID, am_DomainState_e domainState) {
    // No operation in default
}

/**
 * is called when the timinginformation (delay) changed for a connection.
 */
void RoutingControlObserverStubDefault::hookTimingInformationChanged(const std::shared_ptr<CommonAPI::ClientId> clientId, am_connectionID_t connectionID, am_timeSync_t delay) {
    // Call old style methods in default 
    hookTimingInformationChanged(connectionID, delay);
}
void RoutingControlObserverStubDefault::hookTimingInformationChanged(am_connectionID_t connectionID, am_timeSync_t delay) {
    // No operation in default
}

/**
 * this function is used to send out all data that has been changed in an early
 *  state.
(at)return E_OK on success, E_UNKNOWN on error
 */
void RoutingControlObserverStubDefault::sendChangedData(const std::shared_ptr<CommonAPI::ClientId> clientId, am_EarlyData_L earlyData) {
    // Call old style methods in default 
    sendChangedData(earlyData);
}
void RoutingControlObserverStubDefault::sendChangedData(am_EarlyData_L earlyData) {
    // No operation in default
}

/**
 * updates data of an gateway. (at)return E_OK on success, E_NON_EXISTENT if the
 *  gatewayID is not valid.
 */
void RoutingControlObserverStubDefault::updateGateway(const std::shared_ptr<CommonAPI::ClientId> clientId, am_gatewayID_t gatewayID, am_ConnectionFormat_L listSourceFormats, am_ConnectionFormat_L listSinkFormats, am_Convertion_L convertionMatrix, am_Error_e& error) {
    // Call old style methods in default 
    updateGateway(gatewayID, listSourceFormats, listSinkFormats, convertionMatrix, error);
}
void RoutingControlObserverStubDefault::updateGateway(am_gatewayID_t gatewayID, am_ConnectionFormat_L listSourceFormats, am_ConnectionFormat_L listSinkFormats, am_Convertion_L convertionMatrix, am_Error_e& error) {
    // No operation in default
}

/**
 * updates data of an gateway. (at)return E_OK on success, E_NON_EXISTENT if the
 *  sinkID is not valid.
 */
void RoutingControlObserverStubDefault::updateSink(const std::shared_ptr<CommonAPI::ClientId> clientId, am_sinkID_t sinkID, am_sinkClass_t sinkClassID, am_SoundProperty_L listSoundProperties, am_ConnectionFormat_L listConnectionFormats, am_MainSoundProperty_L listMainSoundProperties, am_Error_e& error) {
    // Call old style methods in default 
    updateSink(sinkID, sinkClassID, listSoundProperties, listConnectionFormats, listMainSoundProperties, error);
}
void RoutingControlObserverStubDefault::updateSink(am_sinkID_t sinkID, am_sinkClass_t sinkClassID, am_SoundProperty_L listSoundProperties, am_ConnectionFormat_L listConnectionFormats, am_MainSoundProperty_L listMainSoundProperties, am_Error_e& error) {
    // No operation in default
}

/**
 * updates data of an source. (at)return E_OK on success, E_NON_EXISTENT if the
 *  sourceID in the struct is not valid. 
Please note that only the following
 *  data out of am_Source_s have effect when they are
 *  changed:
sourceClassID,
listSoundProperties,
listConnectionFormats,
 * 
listMainSoundProperties
 */
void RoutingControlObserverStubDefault::updateSource(const std::shared_ptr<CommonAPI::ClientId> clientId, am_sourceID_t sourceID, am_sourceClass_t sourceClassID, am_SoundProperty_L listSoundProperties, am_ConnectionFormat_L listConnectionFormats, am_MainSoundProperty_L listMainSoundProperties, am_Error_e& error) {
    // Call old style methods in default 
    updateSource(sourceID, sourceClassID, listSoundProperties, listConnectionFormats, listMainSoundProperties, error);
}
void RoutingControlObserverStubDefault::updateSource(am_sourceID_t sourceID, am_sourceClass_t sourceClassID, am_SoundProperty_L listSoundProperties, am_ConnectionFormat_L listConnectionFormats, am_MainSoundProperty_L listMainSoundProperties, am_Error_e& error) {
    // No operation in default
}

/**
 * acknowledges a asyncSetSinkVolumes
 */
void RoutingControlObserverStubDefault::ackSetVolumes(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_Volumes_L listvolumes, am_Error_e error) {
    // Call old style methods in default 
    ackSetVolumes(handle, listvolumes, error);
}
void RoutingControlObserverStubDefault::ackSetVolumes(am_Handle_s handle, am_Volumes_L listvolumes, am_Error_e error) {
    // No operation in default
}

/**
 * The acknowledge of the SinkNotificationConfiguration
 */
void RoutingControlObserverStubDefault::ackSinkNotificationConfiguration(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_Error_e error) {
    // Call old style methods in default 
    ackSinkNotificationConfiguration(handle, error);
}
void RoutingControlObserverStubDefault::ackSinkNotificationConfiguration(am_Handle_s handle, am_Error_e error) {
    // No operation in default
}

/**
 * The acknowledge of the SourceNotificationConfiguration
 */
void RoutingControlObserverStubDefault::ackSourceNotificationConfiguration(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_Error_e error) {
    // Call old style methods in default 
    ackSourceNotificationConfiguration(handle, error);
}
void RoutingControlObserverStubDefault::ackSourceNotificationConfiguration(am_Handle_s handle, am_Error_e error) {
    // No operation in default
}

/**
 * is called whenever a notified value needs to be send
 */
void RoutingControlObserverStubDefault::hookSinkNotificationDataChange(const std::shared_ptr<CommonAPI::ClientId> clientId, am_sinkID_t sinkID, am_NotificationPayload_s payload) {
    // Call old style methods in default 
    hookSinkNotificationDataChange(sinkID, payload);
}
void RoutingControlObserverStubDefault::hookSinkNotificationDataChange(am_sinkID_t sinkID, am_NotificationPayload_s payload) {
    // No operation in default
}

/**
 * is called whenever a notified value needs to be send
 */
void RoutingControlObserverStubDefault::hookSourceNotificationDataChange(const std::shared_ptr<CommonAPI::ClientId> clientId, am_sourceID_t sourceID, am_NotificationPayload_s payload) {
    // Call old style methods in default 
    hookSourceNotificationDataChange(sourceID, payload);
}
void RoutingControlObserverStubDefault::hookSourceNotificationDataChange(am_sourceID_t sourceID, am_NotificationPayload_s payload) {
    // No operation in default
}

void RoutingControlObserverStubDefault::confirmRoutingRundown(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string domainName) {
    // Call old style methods in default 
    confirmRoutingRundown(domainName);
}
void RoutingControlObserverStubDefault::confirmRoutingRundown(std::string domainName) {
    // No operation in default
}




RoutingControlObserverStubDefault::RemoteEventHandler::RemoteEventHandler(RoutingControlObserverStubDefault* defaultStub):
        defaultStub_(defaultStub) {
}

} // namespace am
} // namespace genivi
} // namespace org
