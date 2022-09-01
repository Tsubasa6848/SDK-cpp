/**
 * @file  TestForBlockCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TestForBlockCommand.
 *
 */
class TestForBlockCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TESTFORBLOCKCOMMAND
public:
    class TestForBlockCommand& operator=(class TestForBlockCommand const &) = delete;
    TestForBlockCommand(class TestForBlockCommand const &) = delete;
    TestForBlockCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1894269117
     */
    virtual ~TestForBlockCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@TestForBlockCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   583974526
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup@TestForBlockCommand@@SAXAEAVCommandRegistry@@@Z
     * @hash   47874224
     */
    MCAPI static void setup(class CommandRegistry &);

};