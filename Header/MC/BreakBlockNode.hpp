/**
 * @file  BreakBlockNode.hpp
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
 * @brief MC class BreakBlockNode.
 *
 */
class BreakBlockNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKBLOCKNODE
public:
    class BreakBlockNode& operator=(class BreakBlockNode const &) = delete;
    BreakBlockNode(class BreakBlockNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -480303942
     */
    virtual ~BreakBlockNode();
    /**
     * @vftbl  1
     * @symbol ?tick@BreakBlockNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     * @hash   2067319773
     */
    virtual enum BehaviorStatus tick(class Actor &);
    /**
     * @vftbl  2
     * @symbol ?initializeFromDefinition@BreakBlockNode@@EEAAXAEAVActor@@@Z
     * @hash   841379089
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @symbol ??0BreakBlockNode@@QEAA@XZ
     * @hash   431113724
     */
    MCAPI BreakBlockNode();

};