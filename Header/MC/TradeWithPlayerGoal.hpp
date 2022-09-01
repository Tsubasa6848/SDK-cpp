/**
 * @file  TradeWithPlayerGoal.hpp
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
 * @brief MC class TradeWithPlayerGoal.
 *
 */
class TradeWithPlayerGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADEWITHPLAYERGOAL
public:
    class TradeWithPlayerGoal& operator=(class TradeWithPlayerGoal const &) = delete;
    TradeWithPlayerGoal(class TradeWithPlayerGoal const &) = delete;
    TradeWithPlayerGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   872427980
     */
    virtual ~TradeWithPlayerGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@TradeWithPlayerGoal@@UEAA_NXZ
     * @hash   684120226
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@TradeWithPlayerGoal@@UEAA_NXZ
     * @hash   1520102448
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@TradeWithPlayerGoal@@UEAAXXZ
     * @hash   1372334539
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@TradeWithPlayerGoal@@UEAAXXZ
     * @hash   186683659
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @hash   -1403860986
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@TradeWithPlayerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1307756930
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0TradeWithPlayerGoal@@QEAA@AEAVMob@@@Z
     * @hash   -1434500881
     */
    MCAPI TradeWithPlayerGoal(class Mob &);

};