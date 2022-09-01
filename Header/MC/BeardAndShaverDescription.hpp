/**
 * @file  BeardAndShaverDescription.hpp
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
 * @brief MC class BeardAndShaverDescription.
 *
 */
class BeardAndShaverDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEARDANDSHAVERDESCRIPTION
public:
    class BeardAndShaverDescription& operator=(class BeardAndShaverDescription const &) = delete;
    BeardAndShaverDescription(class BeardAndShaverDescription const &) = delete;
    BeardAndShaverDescription() = delete;
#endif

public:
    /**
     * @symbol ??0BeardAndShaverDescription@@QEAA@VBeardingDescriptionCache@@AEBUBeardKernel@@MM@Z
     * @hash   164658734
     */
    MCAPI BeardAndShaverDescription(class BeardingDescriptionCache, struct BeardKernel const &, float, float);
    /**
     * @symbol ?calculateContribution@BeardAndShaverDescription@@QEBAMAEBVBlockPos@@@Z
     * @hash   1772517001
     */
    MCAPI float calculateContribution(class BlockPos const &) const;
    /**
     * @symbol ?getCache@BeardAndShaverDescription@@QEBAAEBVBeardingDescriptionCache@@XZ
     * @hash   566232608
     */
    MCAPI class BeardingDescriptionCache const & getCache() const;

};