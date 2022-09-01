/**
 * @file  NBRoomCrossing.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NetherFortressPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NBRoomCrossing.
 *
 */
class NBRoomCrossing : public NetherFortressPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBROOMCROSSING
public:
    class NBRoomCrossing& operator=(class NBRoomCrossing const &) = delete;
    NBRoomCrossing(class NBRoomCrossing const &) = delete;
    NBRoomCrossing() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   774099867
     */
    virtual ~NBRoomCrossing();
    /**
     * @vftbl  2
     * @symbol ?getType@NBRoomCrossing@@UEBA?AW4StructurePieceType@@XZ
     * @hash   -2080632806
     */
    virtual enum StructurePieceType getType() const;
    /**
     * @vftbl  3
     * @symbol ?addChildren@NBRoomCrossing@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
     * @hash   -1339789434
     */
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /**
     * @vftbl  4
     * @symbol ?postProcess@NBRoomCrossing@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   195940526
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};