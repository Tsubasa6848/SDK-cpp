/**
 * @file  WorkComposterDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class WorkComposterDefinition.
 *
 */
class WorkComposterDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORKCOMPOSTERDEFINITION
public:
    class WorkComposterDefinition& operator=(class WorkComposterDefinition const &) = delete;
    WorkComposterDefinition(class WorkComposterDefinition const &) = delete;
#endif

public:
    /**
     * @symbol ??0WorkComposterDefinition@@QEAA@XZ
     * @hash   1694753484
     */
    MCAPI WorkComposterDefinition();
    /**
     * @symbol ?initialize@WorkComposterDefinition@@QEAAXAEAVEntityContext@@AEAVWorkComposterGoal@@@Z
     * @hash   528858387
     */
    MCAPI void initialize(class EntityContext &, class WorkComposterGoal &);
    /**
     * @symbol ?buildSchema@WorkComposterDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VWorkComposterDefinition@@@JsonUtil@@@3@@Z
     * @hash   -1352144547
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class WorkComposterDefinition>> &);

};