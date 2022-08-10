// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptPlugin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPLUGIN
public:
    class ScriptPlugin& operator=(class ScriptPlugin const &) = delete;
    ScriptPlugin(class ScriptPlugin const &) = delete;
    ScriptPlugin() = delete;
#endif


public:
    /*0*/ virtual ~ScriptPlugin();
    /*1*/ virtual class std::optional<std::string> onLoadScript(std::string const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTPLUGIN
#endif
    MCAPI ScriptPlugin(class ScriptPlugin &&);
    MCAPI ScriptPlugin(struct Scripting::ModuleDescriptor &&, std::vector<struct Scripting::ModuleDescriptor> &&, std::string const &, std::string const &, std::string const &, class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> &&);
    MCAPI std::string const & getEngineVersion() const;
    MCAPI std::vector<struct Scripting::ModuleDescriptor> const & getModuleDependencies() const;
    MCAPI struct Scripting::ModuleDescriptor const & getModuleDescriptor() const;
    MCAPI std::string const & getRuntimeName() const;
    MCAPI class Scripting::ScriptContext const & getScriptContext() const;
    MCAPI std::string const & getScriptMainName() const;
    MCAPI bool hasErrors() const;
    MCAPI class std::optional<std::string> loadScriptMain();
    MCAPI std::vector<std::string> reportErrors() const;
    MCAPI void setScriptContext(class Scripting::ScriptContext &&);

//private:
    MCAPI class std::optional<std::string> _loadScript(std::string const &);


private:


};