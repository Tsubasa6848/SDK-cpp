/**
 * @file  FeatureTypeFactory.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FeatureTypeFactory.
 *
 */
class FeatureTypeFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATURETYPEFACTORY
public:
    class FeatureTypeFactory& operator=(class FeatureTypeFactory const &) = delete;
    FeatureTypeFactory(class FeatureTypeFactory const &) = delete;
#endif

public:
    /**
     * @symbol ??0FeatureTypeFactory@@QEAA@XZ
     * @hash   -233301482
     */
    MCAPI FeatureTypeFactory();
    /**
     * @symbol ?processFeature@FeatureTypeFactory@@QEBAXAEAVIWorldRegistriesProvider@@AEBVResourcePackManager@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVValue@Json@@AEBVSemVersion@@@Z
     * @hash   -459759118
     */
    MCAPI void processFeature(class IWorldRegistriesProvider &, class ResourcePackManager const &, std::string const &, class Json::Value &, class SemVersion const &) const;

};