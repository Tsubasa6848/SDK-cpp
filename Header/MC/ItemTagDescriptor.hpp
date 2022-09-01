/**
 * @file  ItemTagDescriptor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemDescriptor.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemTagDescriptor.
 *
 */
class ItemTagDescriptor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMTAGDESCRIPTOR
public:
    class ItemTagDescriptor& operator=(class ItemTagDescriptor const &) = delete;
    ItemTagDescriptor(class ItemTagDescriptor const &) = delete;
    ItemTagDescriptor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?clone@ItemTagDescriptor@@UEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@XZ
     * @hash   -315764412
     */
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const;
    /**
     * @vftbl  1
     * @symbol ?sameItems@ItemTagDescriptor@@UEBA_NAEBUBaseDescriptor@ItemDescriptor@@_N@Z
     * @hash   1222430756
     */
    virtual bool sameItems(struct ItemDescriptor::BaseDescriptor const &, bool) const;
    /**
     * @vftbl  2
     * @symbol ?sameItem@ItemTagDescriptor@@UEBA_NAEBUItemEntry@ItemDescriptor@@_N@Z
     * @hash   -1400382848
     */
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const &, bool) const;
    /**
     * @vftbl  3
     * @symbol ?getFullName@MolangDescriptor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -192013182
     */
    virtual std::string const & getFullName() const;
    /**
     * @vftbl  4
     * @symbol ?getItem@ItemTagDescriptor@@UEBA?AUItemEntry@ItemDescriptor@@XZ
     * @hash   1093547976
     */
    virtual struct ItemDescriptor::ItemEntry getItem() const;
    /**
     * @vftbl  5
     * @symbol ?forEachItemUntil@ItemTagDescriptor@@UEBA_NV?$function@$$A6A_NAEBVItem@@F@Z@std@@@Z
     * @hash   1581646736
     */
    virtual bool forEachItemUntil(class std::function<bool (class Item const &, short)>) const;
    /**
     * @vftbl  6
     * @symbol ?toMap@ItemTagDescriptor@@UEBA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
     * @hash   1638205466
     */
    virtual class std::map<std::string, std::string, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> toMap() const;
    /**
     * @vftbl  7
     * @symbol ?save@ItemTagDescriptor@@UEBA?AV?$optional@VCompoundTag@@@std@@XZ
     * @hash   1808359678
     */
    virtual class std::optional<class CompoundTag> save() const;
    /**
     * @vftbl  8
     * @symbol ?serialize@ItemTagDescriptor@@UEBAXAEAVValue@Json@@@Z
     * @hash   -1618516183
     */
    virtual void serialize(class Json::Value &) const;
    /**
     * @vftbl  9
     * @symbol ?getType@ItemTagDescriptor@@UEBA?AW4InternalType@ItemDescriptor@@XZ
     * @hash   1719664697
     */
    virtual enum ItemDescriptor::InternalType getType() const;
    /**
     * @vftbl  10
     * @symbol ?shouldResolve@DeferredDescriptor@@UEBA_NXZ
     * @hash   857979195
     */
    virtual bool shouldResolve() const;
    /**
     * @vftbl  11
     * @hash   -335047836
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol ?resolve@DeferredDescriptor@@UEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@XZ
     * @hash   -875764605
     */
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> resolve() const;

};