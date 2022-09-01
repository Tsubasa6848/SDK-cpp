/**
 * @file  MoveToPOIGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveToPOIGoal.
 *
 */
class MoveToPOIGoal : public BaseMoveToGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOPOIGOAL
public:
    class MoveToPOIGoal& operator=(class MoveToPOIGoal const &) = delete;
    MoveToPOIGoal(class MoveToPOIGoal const &) = delete;
    MoveToPOIGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   680043775
     */
    virtual ~MoveToPOIGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@MoveToPOIGoal@@UEAA_NXZ
     * @hash   1686054671
     */
    virtual bool canUse();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  5
     * @symbol ?stop@MoveToPOIGoal@@UEAAXXZ
     * @hash   1967383848
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@MoveToPOIGoal@@UEAAXXZ
     * @hash   1482923539
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@MoveToPOIGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   302742913
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @hash   -1402013944
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1352071735
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  11
     * @symbol ?isValidTarget@MoveToPOIGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1227551969
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @vftbl  14
     * @symbol ?_moveToBlock@MoveToPOIGoal@@MEAAXXZ
     * @hash   -1696146911
     */
    virtual void _moveToBlock();
    /**
     * @vftbl  15
     * @symbol ?_getTargetPosition@MoveToPOIGoal@@MEBA?AVVec3@@XZ
     * @hash   117945385
     */
    virtual class Vec3 _getTargetPosition() const;
    /**
     * @vftbl  17
     * @symbol ?_getOwnedPOI@MoveToPOIGoal@@MEBA?AV?$weak_ptr@VPOIInstance@@@std@@W4POIType@@@Z
     * @hash   -790883694
     */
    virtual class std::weak_ptr<class POIInstance> _getOwnedPOI(enum POIType) const;
    /**
     * @symbol ??0MoveToPOIGoal@@QEAA@AEAVMob@@MW4POIType@@M@Z
     * @hash   -504579365
     */
    MCAPI MoveToPOIGoal(class Mob &, float, enum POIType, float);
    /**
     * @symbol ?getPOI@MoveToPOIGoal@@QEAA_NW4POIType@@@Z
     * @hash   -1834681707
     */
    MCAPI bool getPOI(enum POIType);

//protected:
    /**
     * @symbol ?_canReachPOI@MoveToPOIGoal@@IEAA_NAEBVVec3@@M_N@Z
     * @hash   1599893800
     */
    MCAPI bool _canReachPOI(class Vec3 const &, float, bool);

//private:
    /**
     * @symbol ?_updatePOIBooking@MoveToPOIGoal@@AEAAXXZ
     * @hash   -1749061214
     */
    MCAPI void _updatePOIBooking();

protected:

private:

};