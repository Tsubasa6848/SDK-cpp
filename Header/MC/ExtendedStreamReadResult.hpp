/**
 * @file  ExtendedStreamReadResult.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ExtendedStreamReadResult.
 *
 */
struct ExtendedStreamReadResult {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXTENDEDSTREAMREADRESULT
public:
    struct ExtendedStreamReadResult& operator=(struct ExtendedStreamReadResult const &) = delete;
    ExtendedStreamReadResult(struct ExtendedStreamReadResult const &) = delete;
    ExtendedStreamReadResult() = delete;
#endif

public:
    /**
     * @symbol ??0ExtendedStreamReadResult@@QEAA@W4StreamReadResult@@@Z
     * @hash   -1127577355
     */
    MCAPI ExtendedStreamReadResult(enum StreamReadResult);
    /**
     * @symbol ??1ExtendedStreamReadResult@@QEAA@XZ
     * @hash   1046596342
     */
    MCAPI ~ExtendedStreamReadResult();

};