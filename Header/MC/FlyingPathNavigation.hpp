/**
 * @file  FlyingPathNavigation.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PathNavigation.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FlyingPathNavigation.
 *
 */
class FlyingPathNavigation : public PathNavigation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLYINGPATHNAVIGATION
public:
    class FlyingPathNavigation& operator=(class FlyingPathNavigation const &) = delete;
    FlyingPathNavigation(class FlyingPathNavigation const &) = delete;
    FlyingPathNavigation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1778488530
     */
    virtual ~FlyingPathNavigation();
    /**
     * @vftbl  1
     * @symbol ?initializeInternal@FlyingPathNavigation@@UEAAXAEAVMob@@PEAUNavigationDescription@@@Z
     * @hash   -108716365
     */
    virtual void initializeInternal(class Mob &, struct NavigationDescription *);
    /**
     * @vftbl  2
     * @symbol ?tick@FlyingPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
     * @hash   -163069314
     */
    virtual void tick(class NavigationComponent &, class Mob &);
    /**
     * @vftbl  3
     * @symbol ?getTempMobPos@FlyingPathNavigation@@MEBA?AVVec3@@AEBVMob@@@Z
     * @hash   1946647880
     */
    virtual class Vec3 getTempMobPos(class Mob const &) const;
    /**
     * @vftbl  4
     * @symbol ?createPath@FlyingPathNavigation@@MEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVNavigationComponent@@AEAVMob@@AEBVVec3@@@Z
     * @hash   -1232770307
     */
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent &, class Mob &, class Vec3 const &);
    /**
     * @vftbl  5
     * @symbol ?createPath@FlyingPathNavigation@@MEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVNavigationComponent@@AEAVMob@@AEAVActor@@@Z
     * @hash   1027439698
     */
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent &, class Mob &, class Actor &);
    /**
     * @vftbl  9
     * @symbol ?stop@FlyingPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
     * @hash   -1019398781
     */
    virtual void stop(class NavigationComponent &, class Mob &);
    /**
     * @vftbl  11
     * @symbol ?canUpdatePath@FlyingPathNavigation@@MEBA_NAEBVMob@@@Z
     * @hash   58223552
     */
    virtual bool canUpdatePath(class Mob const &) const;
    /**
     * @vftbl  12
     * @symbol ?updatePath@FlyingPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
     * @hash   -1315674609
     */
    virtual void updatePath(class NavigationComponent &, class Mob &);

//private:
    /**
     * @symbol ?_restorePreviousGravityFlag@FlyingPathNavigation@@AEAAXAEAVMob@@@Z
     * @hash   250479972
     */
    MCAPI void _restorePreviousGravityFlag(class Mob &);
    /**
     * @symbol ?_storePreviousGravityFlag@FlyingPathNavigation@@AEAAXAEAVMob@@@Z
     * @hash   1003784695
     */
    MCAPI void _storePreviousGravityFlag(class Mob &);

private:

};