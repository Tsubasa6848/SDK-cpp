/**
 * @file  HashedString.hpp
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
 * @brief MC class HashedString.
 *
 */
class HashedString {

#define AFTER_EXTRA
// Add Member There
    uint64_t hash;
    std::string str;
    int64_t unk;

public:
    //HashedString(HashedString const& hstr)
    //    : str(hstr.getString())
    //    , unk(0)
    //    , hash(computeHash(str)) {
    //}

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HASHEDSTRING
public:
    HashedString() = delete;
#endif

public:
    /**
     * @symbol ??0HashedString@@QEAA@_KPEBD@Z
     * @hash   55561770
     */
    MCAPI HashedString(unsigned __int64, char const *);
    /**
     * @symbol ??0HashedString@@QEAA@PEBD@Z
     * @hash   -1964889122
     */
    MCAPI HashedString(char const *);
    /**
     * @symbol ??0HashedString@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -102728153
     */
    MCAPI HashedString(std::string const &);
    /**
     * @symbol ??0HashedString@@QEAA@AEBV0@@Z
     * @hash   348103297
     */
    MCAPI HashedString(class HashedString const &);
    /**
     * @symbol ??0HashedString@@QEAA@$$T@Z
     * @hash   -1994190357
     */
    MCAPI HashedString(std::nullptr_t);
    /**
     * @symbol ??0HashedString@@QEAA@$$QEAV0@@Z
     * @hash   -1998223643
     */
    MCAPI HashedString(class HashedString &&);
    /**
     * @symbol ?c_str@HashedString@@QEBAPEBDXZ
     * @hash   53383257
     */
    MCAPI char const * c_str() const;
    /**
     * @symbol ?clear@HashedString@@QEAAXXZ
     * @hash   -38280285
     */
    MCAPI void clear();
    /**
     * @symbol ?empty@HashedString@@QEBA_NXZ
     * @hash   1476444830
     */
    MCAPI bool empty() const;
    /**
     * @symbol ?getHash@HashedString@@QEBA_KXZ
     * @hash   -344989273
     */
    MCAPI unsigned __int64 getHash() const;
    /**
     * @symbol ?getString@HashedString@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -678280868
     */
    MCAPI std::string const & getString() const;
    /**
     * @symbol ?isEmpty@HashedString@@QEBA_NXZ
     * @hash   -1364317366
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol ??BHashedString@@QEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   1196471760
     */
    MCAPI operator class gsl::basic_string_span<char const, -1>() const;
    /**
     * @symbol ??9HashedString@@QEBA_NAEBV0@@Z
     * @hash   -215601684
     */
    MCAPI bool operator!=(class HashedString const &) const;
    /**
     * @symbol ??MHashedString@@QEBA_NAEBV0@@Z
     * @hash   785567088
     */
    MCAPI bool operator<(class HashedString const &) const;
    /**
     * @symbol ??4HashedString@@QEAAAEAV0@AEBV0@@Z
     * @hash   217759460
     */
    MCAPI class HashedString & operator=(class HashedString const &);
    /**
     * @symbol ??4HashedString@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   544650184
     */
    MCAPI class HashedString & operator=(class HashedString &&);
    /**
     * @symbol ??8HashedString@@QEBA_NAEBV0@@Z
     * @hash   -1146741527
     */
    MCAPI bool operator==(class HashedString const &) const;
    /**
     * @symbol ??1HashedString@@QEAA@XZ
     * @hash   1664994696
     */
    MCAPI ~HashedString();
    /**
     * @symbol ?bindType@HashedString@@SAXXZ
     * @hash   -1529342973
     */
    MCAPI static void bindType();
    /**
     * @symbol ?computeHash@HashedString@@SA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   484590578
     */
    MCAPI static unsigned __int64 computeHash(std::string const &);
    /**
     * @symbol ?computeHash@HashedString@@SA_KPEBD@Z
     * @hash   -20262879
     */
    MCAPI static unsigned __int64 computeHash(char const *);
    /**
     * @symbol ?defaultErrorValue@HashedString@@2V1@A
     * @hash   -702862186
     */
    MCAPI static class HashedString defaultErrorValue;
    /**
     * @symbol ?getEmptyString@HashedString@@SAAEBV1@XZ
     * @hash   -2083064485
     */
    MCAPI static class HashedString const & getEmptyString();

};