/**
 * @file  WantsJockeyDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure WantsJockeyDefinition.
 *
 */
struct WantsJockeyDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WANTSJOCKEYDEFINITION
public:
    struct WantsJockeyDefinition& operator=(struct WantsJockeyDefinition const &) = delete;
    WantsJockeyDefinition(struct WantsJockeyDefinition const &) = delete;
    WantsJockeyDefinition() = delete;
#endif

public:
    /**
     * @symbol ?buildSchema@WantsJockeyDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UWantsJockeyDefinition@@@JsonUtil@@@std@@@Z
     * @hash   1090532732
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct WantsJockeyDefinition>> &);

};