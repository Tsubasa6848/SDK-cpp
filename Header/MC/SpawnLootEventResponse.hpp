/**
 * @file  SpawnLootEventResponse.hpp
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
 * @brief MC class SpawnLootEventResponse.
 *
 */
class SpawnLootEventResponse {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNLOOTEVENTRESPONSE
public:
    class SpawnLootEventResponse& operator=(class SpawnLootEventResponse const &) = delete;
    SpawnLootEventResponse(class SpawnLootEventResponse const &) = delete;
    SpawnLootEventResponse() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   472814018
     */
    virtual ~SpawnLootEventResponse();
    /**
     * @vftbl  1
     * @symbol ?getName@SpawnLootEventResponse@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   443572449
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @symbol ?executeAction@SpawnLootEventResponse@@UEBAXAEAVRenderParams@@@Z
     * @hash   -1726113459
     */
    virtual void executeAction(class RenderParams &) const;
    /**
     * @vftbl  3
     * @symbol ?buildSchema@SpawnLootEventResponse@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VEventResponse@@$$V@@@Z
     * @hash   -1261066881
     */
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>> &, class Factory<class EventResponse> const &) const;
    /**
     * @symbol ?NameID@SpawnLootEventResponse@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   76997391
     */
    MCAPI static std::string const NameID;

};