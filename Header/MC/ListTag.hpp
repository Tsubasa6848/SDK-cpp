/**
 * @file  ListTag.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "TagMemoryChunk.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class ListTag.
 *
 */
class ListTag : public Tag {

#define AFTER_EXTRA
    // Add Member There
    std::vector<Tag*> val;
    Tag::Type elementType;

public:
    LIAPI static std::unique_ptr<ListTag> create();
    LIAPI std::vector<Tag*>& value();
    LIAPI Tag const* operator[](int index) const;
    LIAPI Tag::Type getElementType() const;
    LIAPI size_t getSize() const;
    LIAPI vector<Tag*> get();

    // get value
    LIAPI unsigned char getByte(int) const;
    LIAPI short getShort(int) const;
    LIAPI int64_t getInt64(int) const;
    LIAPI TagMemoryChunk getByteArray(int) const;


    LIAPI void addEnd();
    LIAPI void addByte(unsigned char v);
    LIAPI void addShort(short v);
    LIAPI void addInt(int v);
    LIAPI void addInt64(__int64 v);
    LIAPI void addFloat(float v);
    LIAPI void addDouble(double v);
    LIAPI void addString(const std::string& v);
    LIAPI void addByteArray(TagMemoryChunk);
    LIAPI void addByteArray(char data[], size_t size);
    LIAPI void addIntArray(TagMemoryChunk);
    LIAPI void addIntArray(int data[], size_t size);

    LIAPI std::vector<Tag*>::const_iterator begin() const;
    LIAPI std::vector<Tag*>::const_iterator end() const;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LISTTAG
public:
    class ListTag& operator=(class ListTag const &) = delete;
    ListTag(class ListTag const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2102296170
     */
    virtual ~ListTag();
    /**
     * @vftbl  1
     * @symbol ?deleteChildren@ListTag@@UEAAXXZ
     * @hash   1700404869
     */
    virtual void deleteChildren();
    /**
     * @vftbl  2
     * @symbol ?write@ListTag@@UEBAXAEAVIDataOutput@@@Z
     * @hash   1729306525
     */
    virtual void write(class IDataOutput &) const;
    /**
     * @vftbl  3
     * @symbol ?load@ListTag@@UEAAXAEAVIDataInput@@@Z
     * @hash   -1026809812
     */
    virtual void load(class IDataInput &);
    /**
     * @vftbl  4
     * @symbol ?toString@ListTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1656790214
     */
    virtual std::string toString() const;
    /**
     * @vftbl  5
     * @symbol ?getId@ListTag@@UEBA?AW4Type@Tag@@XZ
     * @hash   -1006945153
     */
    virtual enum Tag::Type getId() const;
    /**
     * @vftbl  6
     * @symbol ?equals@ListTag@@UEBA_NAEBVTag@@@Z
     * @hash   1984777106
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @vftbl  8
     * @symbol ?print@ListTag@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVPrintStream@@@Z
     * @hash   -292587878
     */
    virtual void print(std::string const &, class PrintStream &) const;
    /**
     * @vftbl  9
     * @symbol ?copy@ListTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
     * @hash   68836348
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @vftbl  10
     * @symbol ?hash@ListTag@@UEBA_KXZ
     * @hash   1145652114
     */
    virtual unsigned __int64 hash() const;
    /**
     * @symbol ??0ListTag@@QEAA@XZ
     * @hash   591756136
     */
    MCAPI ListTag();
    /**
     * @symbol ?add@ListTag@@QEAAXV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@@Z
     * @hash   1966988672
     */
    MCAPI void add(std::unique_ptr<class Tag>);
    /**
     * @symbol ?copyList@ListTag@@QEBA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ
     * @hash   733753816
     */
    MCAPI std::unique_ptr<class ListTag> copyList() const;
    /**
     * @symbol ?erase@ListTag@@QEAAX_K@Z
     * @hash   1318379441
     */
    MCAPI void erase(unsigned __int64);
    /**
     * @symbol ?forEachCompoundTag@ListTag@@QEBAXV?$function@$$A6AXAEBVCompoundTag@@@Z@std@@@Z
     * @hash   -1866690537
     */
    MCAPI void forEachCompoundTag(class std::function<void (class CompoundTag const &)>) const;
    /**
     * @symbol ?get@ListTag@@QEBAPEAVTag@@H@Z
     * @hash   -1321228866
     */
    MCAPI class Tag * get(int) const;
    /**
     * @symbol ?getCompound@ListTag@@QEAAPEAVCompoundTag@@_K@Z
     * @hash   1308304965
     */
    MCAPI class CompoundTag * getCompound(unsigned __int64);
    /**
     * @symbol ?getCompound@ListTag@@QEBAPEBVCompoundTag@@_K@Z
     * @hash   516794917
     */
    MCAPI class CompoundTag const * getCompound(unsigned __int64) const;
    /**
     * @symbol ?getDouble@ListTag@@QEBANH@Z
     * @hash   -192550885
     */
    MCAPI double getDouble(int) const;
    /**
     * @symbol ?getFloat@ListTag@@QEBAMH@Z
     * @hash   1141283417
     */
    MCAPI float getFloat(int) const;
    /**
     * @symbol ?getInt@ListTag@@QEBAHH@Z
     * @hash   79585505
     */
    MCAPI int getInt(int) const;
    /**
     * @symbol ?getString@ListTag@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   1368064877
     */
    MCAPI std::string const & getString(int) const;
    /**
     * @symbol ?popBack@ListTag@@QEAAXXZ
     * @hash   20067893
     */
    MCAPI void popBack();
    /**
     * @symbol ?size@ListTag@@QEBAHXZ
     * @hash   766922200
     */
    MCAPI int size() const;

};