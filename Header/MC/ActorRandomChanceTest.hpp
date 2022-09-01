/**
 * @file  ActorRandomChanceTest.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorRandomChanceTest.
 *
 */
class ActorRandomChanceTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORRANDOMCHANCETEST
public:
    class ActorRandomChanceTest& operator=(class ActorRandomChanceTest const &) = delete;
    ActorRandomChanceTest(class ActorRandomChanceTest const &) = delete;
    ActorRandomChanceTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -579641620
     */
    virtual ~ActorRandomChanceTest();
    /**
     * @vftbl  2
     * @symbol ?evaluate@ActorRandomChanceTest@@UEBA_NAEBUFilterContext@@@Z
     * @hash   1190616272
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol ?getName@ActorRandomChanceTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   911205618
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};