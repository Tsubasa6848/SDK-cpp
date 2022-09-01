/**
 * @file  CreatePhotoPacket.hpp
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
 * @brief MC class CreatePhotoPacket.
 *
 */
class CreatePhotoPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREATEPHOTOPACKET
public:
    class CreatePhotoPacket& operator=(class CreatePhotoPacket const &) = delete;
    CreatePhotoPacket(class CreatePhotoPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   978807692
     */
    virtual ~CreatePhotoPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@CreatePhotoPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -1913007472
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@CreatePhotoPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   591924541
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@CreatePhotoPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -478402646
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@CreatePhotoPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -2022165782
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0CreatePhotoPacket@@QEAA@XZ
     * @hash   2119940602
     */
    MCAPI CreatePhotoPacket();

};