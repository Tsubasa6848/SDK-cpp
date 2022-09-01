/**
 * @file  ServerLocator.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerLocator.
 *
 */
class ServerLocator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERLOCATOR
public:
    class ServerLocator& operator=(class ServerLocator const &) = delete;
    ServerLocator(class ServerLocator const &) = delete;
    ServerLocator() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERLOCATOR
    /**
     * @symbol ?_onDisable@ServerLocator@@EEAAXXZ
     * @hash   945413840
     */
    MCVAPI void _onDisable();
    /**
     * @symbol ?_onEnable@ServerLocator@@EEAAXXZ
     * @hash   1480949575
     */
    MCVAPI void _onEnable();
#endif

};