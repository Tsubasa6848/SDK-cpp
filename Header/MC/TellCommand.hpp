// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TellCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TELLCOMMAND
public:
    class TellCommand& operator=(class TellCommand const &) = delete;
    TellCommand(class TellCommand const &) = delete;
    TellCommand() = delete;
#endif


public:
    /*0*/ virtual ~TellCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TELLCOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &);

//private:
    MCAPI void _sendMessageToPlayers(class CommandSelectorResults<class Player> const &, std::string const &, std::string const &, struct CommandOriginIdentity const &, class Level &) const;


private:


};