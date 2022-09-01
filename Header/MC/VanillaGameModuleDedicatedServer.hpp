/**
 * @file  VanillaGameModuleDedicatedServer.hpp
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
 * @brief MC class VanillaGameModuleDedicatedServer.
 *
 */
class VanillaGameModuleDedicatedServer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAGAMEMODULEDEDICATEDSERVER
public:
    class VanillaGameModuleDedicatedServer& operator=(class VanillaGameModuleDedicatedServer const &) = delete;
    VanillaGameModuleDedicatedServer(class VanillaGameModuleDedicatedServer const &) = delete;
    VanillaGameModuleDedicatedServer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1751017277
     */
    virtual ~VanillaGameModuleDedicatedServer();
    /**
     * @vftbl  1
     * @symbol ?createGameModuleServer@VanillaGameModuleDedicatedServer@@UEAA?AV?$unique_ptr@VGameModuleServer@@U?$default_delete@VGameModuleServer@@@std@@@std@@XZ
     * @hash   687466622
     */
    virtual std::unique_ptr<class GameModuleServer> createGameModuleServer();
    /**
     * @vftbl  2
     * @symbol ?createInPackagePacks@VanillaGameModuleDedicatedServer@@UEAA?AV?$shared_ptr@VIInPackagePacks@@@std@@XZ
     * @hash   2072300667
     */
    virtual class std::shared_ptr<class IInPackagePacks> createInPackagePacks();
    /**
     * @vftbl  3
     * @symbol ?registerMolangQueries@VanillaGameModuleDedicatedServer@@UEAAXXZ
     * @hash   308546897
     */
    virtual void registerMolangQueries();
    /**
     * @vftbl  4
     * @symbol ?registerServerInstanceHandler@VanillaGameModuleDedicatedServer@@UEAAXAEAVServerInstanceEventCoordinator@@@Z
     * @hash   846214089
     */
    virtual void registerServerInstanceHandler(class ServerInstanceEventCoordinator &);

};