/**
 * @file  RemoveActorPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RemoveActorPacket.
 *
 */
class RemoveActorPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOVEACTORPACKET
public:
    class RemoveActorPacket& operator=(class RemoveActorPacket const &) = delete;
    RemoveActorPacket(class RemoveActorPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RemoveActorPacket();
    /**
     * @hash   -1060967067
     * @vftbl  1
     * @symbol  ?getId\@RemoveActorPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1797896174
     * @vftbl  2
     * @symbol  ?getName\@RemoveActorPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1636926315
     * @vftbl  3
     * @symbol  ?write\@RemoveActorPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1839426731
     * @vftbl  6
     * @symbol  ?_read\@RemoveActorPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1729230309
     * @symbol  ??0RemoveActorPacket\@\@QEAA\@XZ
     */
    MCAPI RemoveActorPacket();
    /**
     * @hash   1771606722
     * @symbol  ??0RemoveActorPacket\@\@QEAA\@UActorUniqueID\@\@\@Z
     */
    MCAPI RemoveActorPacket(struct ActorUniqueID);

};