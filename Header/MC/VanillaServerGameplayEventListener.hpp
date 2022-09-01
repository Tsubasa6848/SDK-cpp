/**
 * @file  VanillaServerGameplayEventListener.hpp
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
 * @brief MC class VanillaServerGameplayEventListener.
 *
 */
class VanillaServerGameplayEventListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLASERVERGAMEPLAYEVENTLISTENER
public:
    class VanillaServerGameplayEventListener& operator=(class VanillaServerGameplayEventListener const &) = delete;
    VanillaServerGameplayEventListener(class VanillaServerGameplayEventListener const &) = delete;
    VanillaServerGameplayEventListener() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VANILLASERVERGAMEPLAYEVENTLISTENER
    /**
     * @symbol ?onBlockInteractedWith@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   -1119064954
     */
    MCVAPI enum EventResult onBlockInteractedWith(class Player &, class BlockPos const &);
    /**
     * @symbol ?onBlockPlacedByPlayer@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlock@@AEBVBlockPos@@_N@Z
     * @hash   288679252
     */
    MCVAPI enum EventResult onBlockPlacedByPlayer(class Player &, class Block const &, class BlockPos const &, bool);
    /**
     * @symbol ?onEvent@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEBUPlayerDamageEvent@@@Z
     * @hash   581604577
     */
    MCVAPI enum EventResult onEvent(struct PlayerDamageEvent const &);
    /**
     * @symbol ?onEvent@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEBUActorHurtEvent@@@Z
     * @hash   -1795350697
     */
    MCVAPI enum EventResult onEvent(struct ActorHurtEvent const &);
    /**
     * @symbol ?onEvent@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEBUPlayerOpenContainerEvent@@@Z
     * @hash   791671289
     */
    MCVAPI enum EventResult onEvent(struct PlayerOpenContainerEvent const &);
    /**
     * @symbol ?onPlayerMovementAnomaly@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVVec3@@MM@Z
     * @hash   -1300414663
     */
    MCVAPI enum EventResult onPlayerMovementAnomaly(class Player &, class Vec3 const &, float, float);
    /**
     * @symbol ?onPlayerMovementCorrected@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVVec3@@MM@Z
     * @hash   -118649345
     */
    MCVAPI enum EventResult onPlayerMovementCorrected(class Player &, class Vec3 const &, float, float);
#endif

};