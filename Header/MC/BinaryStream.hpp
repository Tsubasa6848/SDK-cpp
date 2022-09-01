/**
 * @file  BinaryStream.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ReadOnlyBinaryStream.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BinaryStream.
 *
 */
class BinaryStream : public ReadOnlyBinaryStream {

#define AFTER_EXTRA
// Add Member There
public:
    std::string writeBuf, *pwBuf;

    LIAPI void reserve(size_t size);
    LIAPI std::string& getRaw();
    template <typename T>
    inline void writeType(T const&) = delete;
    template <>
    MCAPI void writeType(struct CommandOriginData const&);
    template <>
    MCAPI void writeType(std::vector<std::unique_ptr<class DataItem>> const&);
    template <>
    MCAPI void writeType(class NetworkItemStackDescriptor const&);
    template <>
    MCAPI void writeType(class MoveActorAbsoluteData const&);
    template <>
    inline void writeType(class mce::UUID const& uuid)
    {
        for (const unsigned char b : dAccess<unsigned char[16]>(&uuid, 0))
        {
            writeByte(b);
        }
    }
    template <>
    MCAPI void writeType(class NetworkItemInstanceDescriptor const&);
    template <>
    MCAPI void writeType(struct ItemStackRequestSlotInfo const&);
    template <>
    MCAPI void writeType(class RecipeIngredient const&);
    template <>
    inline void writeType(class Vec3 const& vec3)
    {
        writeFloat(vec3.x);
        writeFloat(vec3.y);
        writeFloat(vec3.z);
    }
    LIAPI void writeCompoundTag(class CompoundTag const& tag);


#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BINARYSTREAM
public:
    class BinaryStream& operator=(class BinaryStream const &) = delete;
    BinaryStream(class BinaryStream const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1171904341
     */
    virtual ~BinaryStream();
    /**
     * @symbol ??0BinaryStream@@QEAA@XZ
     * @hash   241851181
     */
    MCAPI BinaryStream();
    /**
     * @symbol ??0BinaryStream@@QEAA@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   -1463122541
     */
    MCAPI BinaryStream(std::string &, bool);
    /**
     * @symbol ?getAndReleaseData@BinaryStream@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1475237684
     */
    MCAPI std::string getAndReleaseData();
    /**
     * @symbol ?reset@BinaryStream@@QEAAXXZ
     * @hash   1015605107
     */
    MCAPI void reset();
    /**
     * @symbol ?writeBool@BinaryStream@@QEAAX_N@Z
     * @hash   -1405431892
     */
    MCAPI void writeBool(bool);
    /**
     * @symbol ?writeByte@BinaryStream@@QEAAXE@Z
     * @hash   -1954845207
     */
    MCAPI void writeByte(unsigned char);
    /**
     * @symbol ?writeDouble@BinaryStream@@QEAAXN@Z
     * @hash   710213632
     */
    MCAPI void writeDouble(double);
    /**
     * @symbol ?writeFloat@BinaryStream@@QEAAXM@Z
     * @hash   -970002748
     */
    MCAPI void writeFloat(float);
    /**
     * @symbol ?writeSignedBigEndianInt@BinaryStream@@QEAAXH@Z
     * @hash   1762806376
     */
    MCAPI void writeSignedBigEndianInt(int);
    /**
     * @symbol ?writeSignedInt@BinaryStream@@QEAAXH@Z
     * @hash   -496815370
     */
    MCAPI void writeSignedInt(int);
    /**
     * @symbol ?writeSignedInt64@BinaryStream@@QEAAX_J@Z
     * @hash   -1690849923
     */
    MCAPI void writeSignedInt64(__int64);
    /**
     * @symbol ?writeSignedShort@BinaryStream@@QEAAXF@Z
     * @hash   -659114053
     */
    MCAPI void writeSignedShort(short);
    /**
     * @symbol ?writeString@BinaryStream@@QEAAXV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   -1034685018
     */
    MCAPI void writeString(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol ?writeUnsignedChar@BinaryStream@@QEAAXE@Z
     * @hash   -464881207
     */
    MCAPI void writeUnsignedChar(unsigned char);
    /**
     * @symbol ?writeUnsignedInt@BinaryStream@@QEAAXI@Z
     * @hash   1493757888
     */
    MCAPI void writeUnsignedInt(unsigned int);
    /**
     * @symbol ?writeUnsignedInt64@BinaryStream@@QEAAX_K@Z
     * @hash   -1693800423
     */
    MCAPI void writeUnsignedInt64(unsigned __int64);
    /**
     * @symbol ?writeUnsignedShort@BinaryStream@@QEAAXG@Z
     * @hash   992740805
     */
    MCAPI void writeUnsignedShort(unsigned short);
    /**
     * @symbol ?writeUnsignedVarInt@BinaryStream@@QEAAXI@Z
     * @hash   -1017688942
     */
    MCAPI void writeUnsignedVarInt(unsigned int);
    /**
     * @symbol ?writeUnsignedVarInt64@BinaryStream@@QEAAX_K@Z
     * @hash   -1135332379
     */
    MCAPI void writeUnsignedVarInt64(unsigned __int64);
    /**
     * @symbol ?writeVarInt@BinaryStream@@QEAAXH@Z
     * @hash   -1961151560
     */
    MCAPI void writeVarInt(int);
    /**
     * @symbol ?writeVarInt64@BinaryStream@@QEAAX_J@Z
     * @hash   505253893
     */
    MCAPI void writeVarInt64(__int64);

//private:
    /**
     * @symbol ?write@BinaryStream@@AEAAXPEBX_K@Z
     * @hash   -560868227
     */
    MCAPI void write(void const *, unsigned __int64);

private:

};