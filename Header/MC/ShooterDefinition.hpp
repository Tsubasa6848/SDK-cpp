/**
 * @file  ShooterDefinition.hpp
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
 * @brief MC class ShooterDefinition.
 *
 */
class ShooterDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHOOTERDEFINITION
public:
    class ShooterDefinition& operator=(class ShooterDefinition const &) = delete;
    ShooterDefinition(class ShooterDefinition const &) = delete;
#endif

public:
    /**
     * @symbol ??0ShooterDefinition@@QEAA@XZ
     * @hash   963687195
     */
    MCAPI ShooterDefinition();
    /**
     * @symbol ?initialize@ShooterDefinition@@QEBAXAEAVEntityContext@@AEAVShooterComponent@@@Z
     * @hash   -1582424427
     */
    MCAPI void initialize(class EntityContext &, class ShooterComponent &) const;
    /**
     * @symbol ?setActorDefByName@ShooterDefinition@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1545615484
     */
    MCAPI void setActorDefByName(std::string const &);
    /**
     * @symbol ?buildSchema@ShooterDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VShooterDefinition@@@JsonUtil@@@std@@@Z
     * @hash   442674528
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ShooterDefinition>> &);

};