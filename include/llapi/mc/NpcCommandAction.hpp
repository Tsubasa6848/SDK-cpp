/**
 * @file  NpcCommandAction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NpcCommandAction.
 *
 */
class NpcCommandAction {

#define AFTER_EXTRA
// Add Member There
public:
struct SavedCommand {
    SavedCommand() = delete;
    SavedCommand(SavedCommand const&) = delete;
    SavedCommand(SavedCommand const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCCOMMANDACTION
public:
    class NpcCommandAction& operator=(class NpcCommandAction const &) = delete;
    NpcCommandAction(class NpcCommandAction const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~NpcCommandAction();
    /**
     * @hash   -2064780694
     * @vftbl  1
     * @symbol  ?toJson\@NpcCommandAction\@\@UEAA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value toJson();
    /**
     * @hash   -603318227
     * @vftbl  2
     * @symbol  ?fromJson\@NpcCommandAction\@\@UEAA_NAEBVValue\@Json\@\@\@Z
     */
    virtual bool fromJson(class Json::Value const &);
    /**
     * @hash   -982489428
     * @symbol  ??0NpcCommandAction\@\@QEAA\@XZ
     */
    MCAPI NpcCommandAction();
    /**
     * @hash   2020908252
     * @symbol  ?getCommands\@NpcCommandAction\@\@QEAAAEAV?$vector\@USavedCommand\@NpcCommandAction\@\@V?$allocator\@USavedCommand\@NpcCommandAction\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct NpcCommandAction::SavedCommand> & getCommands();
    /**
     * @hash   -2108554306
     * @symbol  ?setCommands\@NpcCommandAction\@\@QEAAX$$QEAV?$vector\@USavedCommand\@NpcCommandAction\@\@V?$allocator\@USavedCommand\@NpcCommandAction\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setCommands(std::vector<struct NpcCommandAction::SavedCommand> &&);
    /**
     * @hash   -184038028
     * @symbol  ?COMMAND_DELIMITER\@NpcCommandAction\@\@2DB
     */
    MCAPI static char const COMMAND_DELIMITER;

//private:

private:
    /**
     * @hash   1106522059
     * @symbol  ?COMMAND_LINE_KEY\@NpcCommandAction\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const COMMAND_LINE_KEY;
    /**
     * @hash   -2139663545
     * @symbol  ?COMMAND_VERSION_KEY\@NpcCommandAction\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const COMMAND_VERSION_KEY;

};