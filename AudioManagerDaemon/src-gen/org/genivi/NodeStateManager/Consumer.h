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
#ifndef ORG_GENIVI_NODESTATEMANAGER_Consumer_H_
#define ORG_GENIVI_NODESTATEMANAGER_Consumer_H_



#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/types.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace NodeStateManager {

class Consumer {
 public:
    virtual ~Consumer() { }

    static inline const char* getInterfaceId();
    static inline CommonAPI::Version getInterfaceVersion();
};

const char* Consumer::getInterfaceId() {
    static const char* interfaceId = "org.genivi.NodeStateManager.Consumer";
    return interfaceId;
}

CommonAPI::Version Consumer::getInterfaceVersion() {
    return CommonAPI::Version(1, 0);
}


} // namespace NodeStateManager
} // namespace genivi
} // namespace org

namespace CommonAPI {

}


namespace std {
    //hashes for types
    
    //hashes for error types
}

#endif // ORG_GENIVI_NODESTATEMANAGER_Consumer_H_
