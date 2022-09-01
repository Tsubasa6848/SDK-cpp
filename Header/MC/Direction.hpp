/**
 * @file  Direction.hpp
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
 * @brief MC class Direction.
 *
 */
class Direction {

#define AFTER_EXTRA
// Add Member There
public:
enum Type;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRECTION
public:
    class Direction& operator=(class Direction const &) = delete;
    Direction(class Direction const &) = delete;
    Direction() = delete;
#endif

public:
    /**
     * @symbol ?DIRECTION_CLOCKWISE@Direction@@2QBW4Type@1@B
     * @hash   331808975
     */
    MCAPI static enum Direction::Type const DIRECTION_CLOCKWISE[];
    /**
     * @symbol ?DIRECTION_COUNTER_CLOCKWISE@Direction@@2QBW4Type@1@B
     * @hash   -350212723
     */
    MCAPI static enum Direction::Type const DIRECTION_COUNTER_CLOCKWISE[];
    /**
     * @symbol ?DIRECTION_FACING@Direction@@2QBEB
     * @hash   2132738043
     */
    MCAPI static unsigned char const DIRECTION_FACING[];
    /**
     * @symbol ?DIRECTION_OPPOSITE@Direction@@2QBW4Type@1@B
     * @hash   -1017711237
     */
    MCAPI static enum Direction::Type const DIRECTION_OPPOSITE[];
    /**
     * @symbol ?FACING_DIRECTION@Direction@@2QBW4Type@1@B
     * @hash   1799275033
     */
    MCAPI static enum Direction::Type const FACING_DIRECTION[];
    /**
     * @symbol ?STEP_X@Direction@@2QBHB
     * @hash   -700968074
     */
    MCAPI static int const STEP_X[];
    /**
     * @symbol ?STEP_Z@Direction@@2QBHB
     * @hash   -614889078
     */
    MCAPI static int const STEP_Z[];
    /**
     * @symbol ?convertFacingDirectionToDirection@Direction@@SA?AW4Type@1@E@Z
     * @hash   -517666864
     */
    MCAPI static enum Direction::Type convertFacingDirectionToDirection(unsigned char);
    /**
     * @symbol ?getDirection@Direction@@SA?AW4Type@1@MM@Z
     * @hash   2065096292
     */
    MCAPI static enum Direction::Type getDirection(float, float);

};