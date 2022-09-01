/**
 * @file  LookAtActorNode.hpp
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
 * @brief MC class LookAtActorNode.
 *
 */
class LookAtActorNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKATACTORNODE
public:
    class LookAtActorNode& operator=(class LookAtActorNode const &) = delete;
    LookAtActorNode(class LookAtActorNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1976126381
     */
    virtual ~LookAtActorNode();
    /**
     * @vftbl  1
     * @symbol ?tick@LookAtActorNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     * @hash   -569323566
     */
    virtual enum BehaviorStatus tick(class Actor &);
    /**
     * @vftbl  2
     * @symbol ?initializeFromDefinition@LookAtActorNode@@EEAAXAEAVActor@@@Z
     * @hash   -990879786
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @symbol ??0LookAtActorNode@@QEAA@XZ
     * @hash   -1540962031
     */
    MCAPI LookAtActorNode();

};