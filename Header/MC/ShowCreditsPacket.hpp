/**
 * @file  ShowCreditsPacket.hpp
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
 * @brief MC class ShowCreditsPacket.
 *
 */
class ShowCreditsPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    enum CreditsState :int {
        START_CREDITS,
        END_CREDITS,
    };
    ActorRuntimeID runtimeId;
    CreditsState state;

    inline std::string toDebugString() {
        return fmt::format("{}: state: {}", __super::toDebugString(),
            state == START_CREDITS ? "START_CREDITS" : "END_CREDITS");
    }


#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHOWCREDITSPACKET
public:
    class ShowCreditsPacket& operator=(class ShowCreditsPacket const &) = delete;
    ShowCreditsPacket(class ShowCreditsPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2092146451
     */
    virtual ~ShowCreditsPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@ShowCreditsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   464555961
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@ShowCreditsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -280728986
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@ShowCreditsPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1364739969
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@ShowCreditsPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -1656235743
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ShowCreditsPacket@@QEAA@XZ
     * @hash   -1633577551
     */
    MCAPI ShowCreditsPacket();
    /**
     * @symbol ??0ShowCreditsPacket@@QEAA@VActorRuntimeID@@W4CreditsState@0@@Z
     * @hash   -1116580806
     */
    MCAPI ShowCreditsPacket(class ActorRuntimeID, enum ShowCreditsPacket::CreditsState);

};