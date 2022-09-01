/**
 * @file  VanillaBlockUpdater.hpp
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
 * @brief MC class VanillaBlockUpdater.
 *
 */
class VanillaBlockUpdater {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLABLOCKUPDATER
public:
    class VanillaBlockUpdater& operator=(class VanillaBlockUpdater const &) = delete;
    VanillaBlockUpdater(class VanillaBlockUpdater const &) = delete;
    VanillaBlockUpdater() = delete;
#endif

public:
    /**
     * @symbol ?destroy@VanillaBlockUpdater@@SAXXZ
     * @hash   1223276567
     */
    MCAPI static void destroy();
    /**
     * @symbol ?get@VanillaBlockUpdater@@SAAEAVCompoundTagUpdaterContext@@XZ
     * @hash   1027168136
     */
    MCAPI static class CompoundTagUpdaterContext & get();
    /**
     * @symbol ?initialize@VanillaBlockUpdater@@SAXXZ
     * @hash   2033206673
     */
    MCAPI static void initialize();

//private:
    /**
     * @symbol ?addBaseUpdater@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
     * @hash   850318635
     */
    MCAPI static void addBaseUpdater(class CompoundTagUpdaterContext &);
    /**
     * @symbol ?addRailUpdater_1_14_0@VanillaBlockUpdater@@CAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVCompoundTagUpdaterContext@@@Z
     * @hash   910210095
     */
    MCAPI static void addRailUpdater_1_14_0(std::string const &, class CompoundTagUpdaterContext &);
    /**
     * @symbol ?addUpdaters_1_10_0@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
     * @hash   -1738391248
     */
    MCAPI static void addUpdaters_1_10_0(class CompoundTagUpdaterContext &);
    /**
     * @symbol ?addUpdaters_1_12_0@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
     * @hash   107393342
     */
    MCAPI static void addUpdaters_1_12_0(class CompoundTagUpdaterContext &);
    /**
     * @symbol ?addUpdaters_1_13_0@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
     * @hash   -1123156211
     */
    MCAPI static void addUpdaters_1_13_0(class CompoundTagUpdaterContext &);
    /**
     * @symbol ?addUpdaters_1_14_0@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
     * @hash   1948964908
     */
    MCAPI static void addUpdaters_1_14_0(class CompoundTagUpdaterContext &);
    /**
     * @symbol ?addUpdaters_1_15_0@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
     * @hash   718415355
     */
    MCAPI static void addUpdaters_1_15_0(class CompoundTagUpdaterContext &);
    /**
     * @symbol ?addUpdaters_1_16_0@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
     * @hash   -512764614
     */
    MCAPI static void addUpdaters_1_16_0(class CompoundTagUpdaterContext &);
    /**
     * @symbol ?addUpdaters_1_16_210@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
     * @hash   -1329216999
     */
    MCAPI static void addUpdaters_1_16_210(class CompoundTagUpdaterContext &);
    /**
     * @symbol ?addUpdaters_1_18_10@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
     * @hash   -1565935347
     */
    MCAPI static void addUpdaters_1_18_10(class CompoundTagUpdaterContext &);

private:
    /**
     * @symbol ?mContext@VanillaBlockUpdater@@0V?$unique_ptr@VCompoundTagUpdaterContext@@U?$default_delete@VCompoundTagUpdaterContext@@@std@@@std@@A
     * @hash   -1401458660
     */
    MCAPI static std::unique_ptr<class CompoundTagUpdaterContext> mContext;

};