/**
 * @file  LiquidPhysicsSystemImpl.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LiquidPhysicsSystemImpl.
 *
 */
class LiquidPhysicsSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIQUIDPHYSICSSYSTEMIMPL
public:
    class LiquidPhysicsSystemImpl& operator=(class LiquidPhysicsSystemImpl const &) = delete;
    LiquidPhysicsSystemImpl(class LiquidPhysicsSystemImpl const &) = delete;
    LiquidPhysicsSystemImpl() = delete;
#endif

public:
    /**
     * @symbol ?_getLiquidBlocksInAABB@LiquidPhysicsSystemImpl@@SAXAEAV?$vector@ULiquidBlockEntry@LiquidPhysicsSystemImpl@@V?$allocator@ULiquidBlockEntry@LiquidPhysicsSystemImpl@@@std@@@std@@AEBVIConstBlockSource@@AEBVAABB@@W4MaterialType@@@Z
     * @hash   1662223689
     */
    MCAPI static void _getLiquidBlocksInAABB(std::vector<struct LiquidPhysicsSystemImpl::LiquidBlockEntry> &, class IConstBlockSource const &, class AABB const &, enum MaterialType);

};