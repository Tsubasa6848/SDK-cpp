/**
 * @file  PerlinSimplexNoise.hpp
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
 * @brief MC class PerlinSimplexNoise.
 *
 */
class PerlinSimplexNoise {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERLINSIMPLEXNOISE
public:
    class PerlinSimplexNoise& operator=(class PerlinSimplexNoise const &) = delete;
    PerlinSimplexNoise() = delete;
#endif

public:
    /**
     * @symbol ??0PerlinSimplexNoise@@QEAA@IH@Z
     * @hash   -1814705998
     */
    MCAPI PerlinSimplexNoise(unsigned int, int);
    /**
     * @symbol ??0PerlinSimplexNoise@@QEAA@AEAVIRandom@@H_N@Z
     * @hash   -25512983
     */
    MCAPI PerlinSimplexNoise(class IRandom &, int, bool);
    /**
     * @symbol ??0PerlinSimplexNoise@@QEAA@AEBV0@@Z
     * @hash   2108197073
     */
    MCAPI PerlinSimplexNoise(class PerlinSimplexNoise const &);
    /**
     * @symbol ?getRegion@PerlinSimplexNoise@@QEBAPEAMPEAMAEBVVec2@@HH1MM@Z
     * @hash   -1636873302
     */
    MCAPI float * getRegion(float *, class Vec2 const &, int, int, class Vec2 const &, float, float) const;
    /**
     * @symbol ?getValue@PerlinSimplexNoise@@QEBAMAEBVVec3@@@Z
     * @hash   150895335
     */
    MCAPI float getValue(class Vec3 const &) const;
    /**
     * @symbol ?getValue@PerlinSimplexNoise@@QEBAMMM@Z
     * @hash   400964494
     */
    MCAPI float getValue(float, float) const;
    /**
     * @symbol ?getValueNormalized@PerlinSimplexNoise@@QEBAMAEBVVec3@@@Z
     * @hash   172033817
     */
    MCAPI float getValueNormalized(class Vec3 const &) const;
    /**
     * @symbol ?getValueNormalized@PerlinSimplexNoise@@QEBAMMM@Z
     * @hash   -224204850
     */
    MCAPI float getValueNormalized(float, float) const;
    /**
     * @symbol ??1PerlinSimplexNoise@@QEAA@XZ
     * @hash   1096904722
     */
    MCAPI ~PerlinSimplexNoise();

//private:
    /**
     * @symbol ?_init@PerlinSimplexNoise@@AEAAXAEAVIRandom@@_N@Z
     * @hash   8156983
     */
    MCAPI void _init(class IRandom &, bool);

private:

};