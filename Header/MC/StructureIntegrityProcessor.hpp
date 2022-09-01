/**
 * @file  StructureIntegrityProcessor.hpp
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
 * @brief MC class StructureIntegrityProcessor.
 *
 */
class StructureIntegrityProcessor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREINTEGRITYPROCESSOR
public:
    class StructureIntegrityProcessor& operator=(class StructureIntegrityProcessor const &) = delete;
    StructureIntegrityProcessor(class StructureIntegrityProcessor const &) = delete;
    StructureIntegrityProcessor() = delete;
#endif

public:
    /**
     * @symbol ??0StructureIntegrityProcessor@@QEAA@MI@Z
     * @hash   -1579643000
     */
    MCAPI StructureIntegrityProcessor(float, unsigned int);
    /**
     * @symbol ?generateFlagsForIndices@StructureIntegrityProcessor@@QEBA?AV?$vector@_NV?$allocator@_N@std@@@std@@HH@Z
     * @hash   1558033608
     */
    MCAPI std::vector<bool> generateFlagsForIndices(int, int) const;

};