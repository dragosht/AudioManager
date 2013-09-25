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
/**
 * This class implements everything from Audiomanager -&gt; RoutingAdapter
 * @author Christian Mueller
 */
#include "RoutingControlDBusProxy.h"

namespace org {
namespace genivi {
namespace am {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createRoutingControlDBusProxy(
                    const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyConnection) {
    return std::make_shared<RoutingControlDBusProxy>(factory, commonApiAddress, interfaceName, busName, objectPath, dbusProxyConnection);
}

__attribute__((constructor)) void registerRoutingControlDBusProxy(void) {
    CommonAPI::DBus::DBusFactory::registerProxyFactoryMethod(RoutingControl::getInterfaceId(),
       &createRoutingControlDBusProxy);
}

RoutingControlDBusProxy::RoutingControlDBusProxy(
                    const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyconnection):
        CommonAPI::DBus::DBusProxy(factory, commonApiAddress, interfaceName, busName, objectPath, dbusProxyconnection)
    {
    }



/**
 * aborts an asynchronous action.
(at)return E_OK on success, E_UNKNOWN on error,
 *  E_NON_EXISTENT if handle was not found
 */
void RoutingControlDBusProxy::asyncAbort(const am_Handle_s& handle, CommonAPI::CallStatus& callStatus) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodWithReply(
        *this,
        "asyncAbort",
        "(iq)",
        handle, 
        callStatus
        );
}
std::future<CommonAPI::CallStatus> RoutingControlDBusProxy::asyncAbortAsync(const am_Handle_s& handle, AsyncAbortAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodAsync(
        *this,
        "asyncAbort",
        "(iq)",
        handle, 
        std::move(callback));
}
/**
 * connects a source to a sink
(at)return E_OK on success, E_UNKNOWN on error,
 *  E_WRONG_FORMAT in case am_ConnectionFormat_e does not match
 */
void RoutingControlDBusProxy::asyncConnect(const am_Handle_s& handle, const am_connectionID_t& connectionID, const am_sourceID_t& sourceID, const am_sinkID_t& sinkID, const am_ConnectionFormat_pe& connectionFormat, CommonAPI::CallStatus& callStatus) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_connectionID_t, am_sourceID_t, am_sinkID_t, am_ConnectionFormat_pe>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodWithReply(
        *this,
        "asyncConnect",
        "(iq)qqqq",
        handle, connectionID, sourceID, sinkID, connectionFormat, 
        callStatus
        );
}
std::future<CommonAPI::CallStatus> RoutingControlDBusProxy::asyncConnectAsync(const am_Handle_s& handle, const am_connectionID_t& connectionID, const am_sourceID_t& sourceID, const am_sinkID_t& sinkID, const am_ConnectionFormat_pe& connectionFormat, AsyncConnectAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_connectionID_t, am_sourceID_t, am_sinkID_t, am_ConnectionFormat_pe>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodAsync(
        *this,
        "asyncConnect",
        "(iq)qqqq",
        handle, connectionID, sourceID, sinkID, connectionFormat, 
        std::move(callback));
}
/**
 * disconnect a connection with given connectionID
(at)return E_OK on success,
 *  E_UNKNOWN on error, E_NON_EXISTENT if connection was not found
 */
void RoutingControlDBusProxy::asyncDisconnect(const am_Handle_s& handle, const am_connectionID_t& connectionID, CommonAPI::CallStatus& callStatus) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_connectionID_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodWithReply(
        *this,
        "asyncDisconnect",
        "(iq)q",
        handle, connectionID, 
        callStatus
        );
}
std::future<CommonAPI::CallStatus> RoutingControlDBusProxy::asyncDisconnectAsync(const am_Handle_s& handle, const am_connectionID_t& connectionID, AsyncDisconnectAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_connectionID_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodAsync(
        *this,
        "asyncDisconnect",
        "(iq)q",
        handle, connectionID, 
        std::move(callback));
}
/**
 * this method is used to set the volume of a sink. This function is used to drive
 *  ramps, to mute or unmute or directly set the value. The difference is made
 *  through the ramptype.
(at)return E_OK on success, E_UNKNOWN on error,
 *  E_OUT_OF_RANGE if new volume is out of range
 */
void RoutingControlDBusProxy::asyncSetSinkVolume(const am_Handle_s& handle, const am_sinkID_t& sinkID, const am_volume_t& volume, const am_RampType_pe& ramp, const am_time_t& time, CommonAPI::CallStatus& callStatus) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_sinkID_t, am_volume_t, am_RampType_pe, am_time_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodWithReply(
        *this,
        "asyncSetSinkVolume",
        "(iq)qnqn",
        handle, sinkID, volume, ramp, time, 
        callStatus
        );
}
std::future<CommonAPI::CallStatus> RoutingControlDBusProxy::asyncSetSinkVolumeAsync(const am_Handle_s& handle, const am_sinkID_t& sinkID, const am_volume_t& volume, const am_RampType_pe& ramp, const am_time_t& time, AsyncSetSinkVolumeAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_sinkID_t, am_volume_t, am_RampType_pe, am_time_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodAsync(
        *this,
        "asyncSetSinkVolume",
        "(iq)qnqn",
        handle, sinkID, volume, ramp, time, 
        std::move(callback));
}
/**
 * sets the volume of a source. This method is used to set the volume of a sink.
 *  This function is used to drive ramps, to mute or unmute or directly set the
 *  value. The difference is made through the ramptype.
(at)return E_OK on
 *  success, E_UNKNOWN on error, E_OUT_OF_RANGE if volume is out of
 *  range.
triggers the acknowledge ackSourceVolumeChange
 */
void RoutingControlDBusProxy::asyncSetSourceVolume(const am_Handle_s& handle, const am_sourceID_t& sourceID, const am_volume_t& volume, const am_RampType_pe& ramp, const am_time_t& time, CommonAPI::CallStatus& callStatus) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_sourceID_t, am_volume_t, am_RampType_pe, am_time_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodWithReply(
        *this,
        "asyncSetSourceVolume",
        "(iq)qnqn",
        handle, sourceID, volume, ramp, time, 
        callStatus
        );
}
std::future<CommonAPI::CallStatus> RoutingControlDBusProxy::asyncSetSourceVolumeAsync(const am_Handle_s& handle, const am_sourceID_t& sourceID, const am_volume_t& volume, const am_RampType_pe& ramp, const am_time_t& time, AsyncSetSourceVolumeAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_sourceID_t, am_volume_t, am_RampType_pe, am_time_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodAsync(
        *this,
        "asyncSetSourceVolume",
        "(iq)qnqn",
        handle, sourceID, volume, ramp, time, 
        std::move(callback));
}
/**
 * This function is used to set the source state of a particular
 *  source.
(at)return E_OK on success, E_UNKNOWN on error
 */
void RoutingControlDBusProxy::asyncSetSourceState(const am_Handle_s& handle, const am_sourceID_t& sourceID, const am_SourceState_e& state, CommonAPI::CallStatus& callStatus) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_sourceID_t, am_SourceState_e>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodWithReply(
        *this,
        "asyncSetSourceState",
        "(iq)qi",
        handle, sourceID, state, 
        callStatus
        );
}
std::future<CommonAPI::CallStatus> RoutingControlDBusProxy::asyncSetSourceStateAsync(const am_Handle_s& handle, const am_sourceID_t& sourceID, const am_SourceState_e& state, AsyncSetSourceStateAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_sourceID_t, am_SourceState_e>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodAsync(
        *this,
        "asyncSetSourceState",
        "(iq)qi",
        handle, sourceID, state, 
        std::move(callback));
}
/**
 * this function sets the sinksoundproperty.
(at)return E_OK on success,
 *  E_UNKNOWN on error, E_OUT_OF_RANGE in case the propery value is out of range
 */
void RoutingControlDBusProxy::asyncSetSinkSoundProperties(const am_Handle_s& handle, const am_sinkID_t& sinkID, const am_SoundProperty_L& listSoundProperties, CommonAPI::CallStatus& callStatus) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_sinkID_t, am_SoundProperty_L>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodWithReply(
        *this,
        "asyncSetSinkSoundProperties",
        "(iq)qa(qn)",
        handle, sinkID, listSoundProperties, 
        callStatus
        );
}
std::future<CommonAPI::CallStatus> RoutingControlDBusProxy::asyncSetSinkSoundPropertiesAsync(const am_Handle_s& handle, const am_sinkID_t& sinkID, const am_SoundProperty_L& listSoundProperties, AsyncSetSinkSoundPropertiesAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_sinkID_t, am_SoundProperty_L>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodAsync(
        *this,
        "asyncSetSinkSoundProperties",
        "(iq)qa(qn)",
        handle, sinkID, listSoundProperties, 
        std::move(callback));
}
/**
 * this function sets the sinksoundproperty.
(at)return E_OK on success,
 *  E_UNKNOWN on error, E_OUT_OF_RANGE in case the propery value is out of range
 */
void RoutingControlDBusProxy::asyncSetSinkSoundProperty(const am_Handle_s& handle, const am_sinkID_t& sinkID, const am_SoundProperty_s& soundProperty, CommonAPI::CallStatus& callStatus) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_sinkID_t, am_SoundProperty_s>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodWithReply(
        *this,
        "asyncSetSinkSoundProperty",
        "(iq)q(qn)",
        handle, sinkID, soundProperty, 
        callStatus
        );
}
std::future<CommonAPI::CallStatus> RoutingControlDBusProxy::asyncSetSinkSoundPropertyAsync(const am_Handle_s& handle, const am_sinkID_t& sinkID, const am_SoundProperty_s& soundProperty, AsyncSetSinkSoundPropertyAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_sinkID_t, am_SoundProperty_s>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodAsync(
        *this,
        "asyncSetSinkSoundProperty",
        "(iq)q(qn)",
        handle, sinkID, soundProperty, 
        std::move(callback));
}
/**
 * this function sets the sourcesoundproperty.
(at)return E_OK on success,
 *  E_UNKNOWN on error, E_OUT_OF_RANGE in case the propery value is out of range
 */
void RoutingControlDBusProxy::asyncSetSourceSoundProperties(const am_Handle_s& handle, const am_sourceID_t& sourceID, const am_SoundProperty_L& listSoundProperties, CommonAPI::CallStatus& callStatus) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_sourceID_t, am_SoundProperty_L>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodWithReply(
        *this,
        "asyncSetSourceSoundProperties",
        "(iq)qa(qn)",
        handle, sourceID, listSoundProperties, 
        callStatus
        );
}
std::future<CommonAPI::CallStatus> RoutingControlDBusProxy::asyncSetSourceSoundPropertiesAsync(const am_Handle_s& handle, const am_sourceID_t& sourceID, const am_SoundProperty_L& listSoundProperties, AsyncSetSourceSoundPropertiesAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_sourceID_t, am_SoundProperty_L>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodAsync(
        *this,
        "asyncSetSourceSoundProperties",
        "(iq)qa(qn)",
        handle, sourceID, listSoundProperties, 
        std::move(callback));
}
/**
 * this function sets the sourcesoundproperty.
(at)return E_OK on success,
 *  E_UNKNOWN on error, E_OUT_OF_RANGE in case the propery value is out of range
 */
void RoutingControlDBusProxy::asyncSetSourceSoundProperty(const am_Handle_s& handle, const am_sourceID_t& sourceID, const am_SoundProperty_s& soundProperty, CommonAPI::CallStatus& callStatus) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_sourceID_t, am_SoundProperty_s>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodWithReply(
        *this,
        "asyncSetSourceSoundProperty",
        "(iq)q(qn)",
        handle, sourceID, soundProperty, 
        callStatus
        );
}
std::future<CommonAPI::CallStatus> RoutingControlDBusProxy::asyncSetSourceSoundPropertyAsync(const am_Handle_s& handle, const am_sourceID_t& sourceID, const am_SoundProperty_s& soundProperty, AsyncSetSourceSoundPropertyAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_sourceID_t, am_SoundProperty_s>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodAsync(
        *this,
        "asyncSetSourceSoundProperty",
        "(iq)q(qn)",
        handle, sourceID, soundProperty, 
        std::move(callback));
}
/**
 * this function triggers crossfading.
(at)return E_OK on success, E_UNKNOWN on
 *  error
 */
void RoutingControlDBusProxy::asyncCrossFade(const am_Handle_s& handle, const am_crossfaderID_t& crossfaderID, const am_HotSink_e& hotSink, const am_RampType_pe& rampType, const am_time_t& time, CommonAPI::CallStatus& callStatus) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_crossfaderID_t, am_HotSink_e, am_RampType_pe, am_time_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodWithReply(
        *this,
        "asyncCrossFade",
        "(iq)qiqn",
        handle, crossfaderID, hotSink, rampType, time, 
        callStatus
        );
}
std::future<CommonAPI::CallStatus> RoutingControlDBusProxy::asyncCrossFadeAsync(const am_Handle_s& handle, const am_crossfaderID_t& crossfaderID, const am_HotSink_e& hotSink, const am_RampType_pe& rampType, const am_time_t& time, AsyncCrossFadeAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_crossfaderID_t, am_HotSink_e, am_RampType_pe, am_time_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodAsync(
        *this,
        "asyncCrossFade",
        "(iq)qiqn",
        handle, crossfaderID, hotSink, rampType, time, 
        std::move(callback));
}
/**
 * this function is used for early and late audio functions to set the domain
 *  state
(at)return E_OK on success, E_UNKNOWN on error
 */
void RoutingControlDBusProxy::setDomainState(const am_domainID_t& domainID, const am_DomainState_e& domainState, CommonAPI::CallStatus& callStatus, am_Error_e& error) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_domainID_t, am_DomainState_e>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_Error_e> >::callMethodWithReply(
        *this,
        "setDomainState",
        "qi",
        domainID, domainState, 
        callStatus
        , error);
}
std::future<CommonAPI::CallStatus> RoutingControlDBusProxy::setDomainStateAsync(const am_domainID_t& domainID, const am_DomainState_e& domainState, SetDomainStateAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_domainID_t, am_DomainState_e>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_Error_e> >::callMethodAsync(
        *this,
        "setDomainState",
        "qi",
        domainID, domainState, 
        std::move(callback));
}
void RoutingControlDBusProxy::asyncSetVolumes(const am_Handle_s& handle, const am_Volumes_L& volumes, CommonAPI::CallStatus& callStatus) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_Volumes_L>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodWithReply(
        *this,
        "asyncSetVolumes",
        "(iq)a(i(yv)nqn)",
        handle, volumes, 
        callStatus
        );
}
std::future<CommonAPI::CallStatus> RoutingControlDBusProxy::asyncSetVolumesAsync(const am_Handle_s& handle, const am_Volumes_L& volumes, AsyncSetVolumesAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_Volumes_L>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodAsync(
        *this,
        "asyncSetVolumes",
        "(iq)a(i(yv)nqn)",
        handle, volumes, 
        std::move(callback));
}
void RoutingControlDBusProxy::asyncSetSinkNotificationConfiguration(const am_Handle_s& handle, const am_sinkID_t& sinkID, const am_NotificationConfiguration_s& notificationConfiguration, CommonAPI::CallStatus& callStatus) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_sinkID_t, am_NotificationConfiguration_s>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodWithReply(
        *this,
        "asyncSetSinkNotificationConfiguration",
        "(iq)q(qin)",
        handle, sinkID, notificationConfiguration, 
        callStatus
        );
}
std::future<CommonAPI::CallStatus> RoutingControlDBusProxy::asyncSetSinkNotificationConfigurationAsync(const am_Handle_s& handle, const am_sinkID_t& sinkID, const am_NotificationConfiguration_s& notificationConfiguration, AsyncSetSinkNotificationConfigurationAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_sinkID_t, am_NotificationConfiguration_s>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodAsync(
        *this,
        "asyncSetSinkNotificationConfiguration",
        "(iq)q(qin)",
        handle, sinkID, notificationConfiguration, 
        std::move(callback));
}
void RoutingControlDBusProxy::asyncSetSourceNotificationConfiguration(const am_Handle_s& handle, const am_sourceID_t& sourceID, const am_NotificationConfiguration_s& notificationConfiguration, CommonAPI::CallStatus& callStatus) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_sourceID_t, am_NotificationConfiguration_s>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodWithReply(
        *this,
        "asyncSetSourceNotificationConfiguration",
        "(iq)q(qin)",
        handle, sourceID, notificationConfiguration, 
        callStatus
        );
}
std::future<CommonAPI::CallStatus> RoutingControlDBusProxy::asyncSetSourceNotificationConfigurationAsync(const am_Handle_s& handle, const am_sourceID_t& sourceID, const am_NotificationConfiguration_s& notificationConfiguration, AsyncSetSourceNotificationConfigurationAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_Handle_s, am_sourceID_t, am_NotificationConfiguration_s>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodAsync(
        *this,
        "asyncSetSourceNotificationConfiguration",
        "(iq)q(qin)",
        handle, sourceID, notificationConfiguration, 
        std::move(callback));
}



void RoutingControlDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
    ownVersionMajor = 0;
    ownVersionMinor = 1;
}

} // namespace am
} // namespace genivi
} // namespace org
