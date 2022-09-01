/**
 * @file  MoveToRandomBlockGoal.hpp
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
 * @brief MC class MoveToRandomBlockGoal.
 *
 */
class MoveToRandomBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETORANDOMBLOCKGOAL
public:
    class MoveToRandomBlockGoal& operator=(class MoveToRandomBlockGoal const &) = delete;
    MoveToRandomBlockGoal(class MoveToRandomBlockGoal const &) = delete;
    MoveToRandomBlockGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -863669697
     */
    virtual ~MoveToRandomBlockGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@MoveToRandomBlockGoal@@UEAA_NXZ
     * @hash   770990895
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@MoveToRandomBlockGoal@@UEAA_NXZ
     * @hash   1861673549
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@MoveToRandomBlockGoal@@UEAAXXZ
     * @hash   1249593016
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@MoveToRandomBlockGoal@@UEAAXXZ
     * @hash   -765365448
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@MoveToRandomBlockGoal@@UEAAXXZ
     * @hash   -850983869
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@MoveToRandomBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -875737247
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0MoveToRandomBlockGoal@@QEAA@AEAVMob@@MMM@Z
     * @hash   -1575667915
     */
    MCAPI MoveToRandomBlockGoal(class Mob &, float, float, float);

//private:
    /**
     * @symbol ?_isValidDestinationBlock@MoveToRandomBlockGoal@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -475294283
     */
    MCAPI bool _isValidDestinationBlock(class BlockSource &, class BlockPos const &);

private:

};