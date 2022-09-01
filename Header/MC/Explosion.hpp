/**
 * @file  Explosion.hpp
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
 * @brief MC class Explosion.
 *
 */
class Explosion {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPLOSION
public:
    class Explosion& operator=(class Explosion const &) = delete;
    Explosion(class Explosion const &) = delete;
    Explosion() = delete;
#endif

public:
    /**
     * @symbol ??0Explosion@@QEAA@AEAVBlockSource@@PEAVActor@@AEBVVec3@@M@Z
     * @hash   2107119172
     */
    MCAPI Explosion(class BlockSource &, class Actor *, class Vec3 const &, float);
    /**
     * @symbol ?explode@Explosion@@QEAAXXZ
     * @hash   -952590937
     */
    MCAPI void explode();
    /**
     * @symbol ?overrideInWater@Explosion@@QEAAX_N@Z
     * @hash   52133080
     */
    MCAPI void overrideInWater(bool);
    /**
     * @symbol ?setAllowUnderwater@Explosion@@QEAAX_N@Z
     * @hash   738941718
     */
    MCAPI void setAllowUnderwater(bool);
    /**
     * @symbol ?setBreaking@Explosion@@QEAAX_N@Z
     * @hash   717948840
     */
    MCAPI void setBreaking(bool);
    /**
     * @symbol ?setFire@Explosion@@QEAAX_N@Z
     * @hash   1811760920
     */
    MCAPI void setFire(bool);
    /**
     * @symbol ?setMaxResistance@Explosion@@QEAAXM@Z
     * @hash   794959600
     */
    MCAPI void setMaxResistance(float);
    /**
     * @symbol ??1Explosion@@QEAA@XZ
     * @hash   1781451873
     */
    MCAPI ~Explosion();

};