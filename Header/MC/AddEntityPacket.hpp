/**
 * @file  AddEntityPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AddEntityPacket.
 *
 */
class AddEntityPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDENTITYPACKET
public:
    class AddEntityPacket& operator=(class AddEntityPacket const &) = delete;
    AddEntityPacket(class AddEntityPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   284320730
     */
    virtual ~AddEntityPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@AddEntityPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -1977847998
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@AddEntityPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1963759121
     */
    virtual std::string getName() const;
    /**
     * @symbol ??0AddEntityPacket@@QEAA@XZ
     * @hash   -778453080
     */
    MCAPI AddEntityPacket();
    /**
     * @symbol ??0AddEntityPacket@@QEAA@AEBVEntityContext@@@Z
     * @hash   -1956724779
     */
    MCAPI AddEntityPacket(class EntityContext const &);

};