/**
 * @file  BinaryHeap.hpp
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
 * @brief MC class BinaryHeap.
 *
 */
class BinaryHeap {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BINARYHEAP
public:
    class BinaryHeap& operator=(class BinaryHeap const &) = delete;
    BinaryHeap(class BinaryHeap const &) = delete;
#endif

public:
    /**
     * @symbol ??0BinaryHeap@@QEAA@XZ
     * @hash   -789809943
     */
    MCAPI BinaryHeap();
    /**
     * @symbol ?changeCost@BinaryHeap@@QEAAXPEAVPathfinderNode@@M@Z
     * @hash   1900934580
     */
    MCAPI void changeCost(class PathfinderNode *, float);
    /**
     * @symbol ?clear@BinaryHeap@@QEAAXXZ
     * @hash   1807721267
     */
    MCAPI void clear();
    /**
     * @symbol ?insert@BinaryHeap@@QEAAPEAVPathfinderNode@@PEAV2@@Z
     * @hash   -154523278
     */
    MCAPI class PathfinderNode * insert(class PathfinderNode *);
    /**
     * @symbol ?isEmpty@BinaryHeap@@QEAA_NXZ
     * @hash   342334556
     */
    MCAPI bool isEmpty();
    /**
     * @symbol ?pop@BinaryHeap@@QEAAPEAVPathfinderNode@@XZ
     * @hash   931869671
     */
    MCAPI class PathfinderNode * pop();
    /**
     * @symbol ??1BinaryHeap@@QEAA@XZ
     * @hash   1172112775
     */
    MCAPI ~BinaryHeap();

//private:
    /**
     * @symbol ?downHeap@BinaryHeap@@AEAAXH@Z
     * @hash   -1083020174
     */
    MCAPI void downHeap(int);

private:

};