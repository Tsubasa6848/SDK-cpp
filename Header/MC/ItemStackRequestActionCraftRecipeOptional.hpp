/**
 * @file  ItemStackRequestActionCraftRecipeOptional.hpp
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
 * @brief MC class ItemStackRequestActionCraftRecipeOptional.
 *
 */
class ItemStackRequestActionCraftRecipeOptional {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCRAFTRECIPEOPTIONAL
public:
    class ItemStackRequestActionCraftRecipeOptional& operator=(class ItemStackRequestActionCraftRecipeOptional const &) = delete;
    ItemStackRequestActionCraftRecipeOptional(class ItemStackRequestActionCraftRecipeOptional const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2144931444
     */
    virtual ~ItemStackRequestActionCraftRecipeOptional();
    /**
     * @vftbl  1
     * @hash   -1372744767
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?getFilteredStringIndex@ItemStackRequestActionCraftRecipeOptional@@UEBAHXZ
     * @hash   -60695807
     */
    virtual int getFilteredStringIndex() const;
    /**
     * @vftbl  3
     * @hash   -1406631549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?_write@ItemStackRequestActionCraftRecipeOptional@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -735762183
     */
    virtual void _write(class BinaryStream &) const;
    /**
     * @vftbl  5
     * @symbol ?_read@ItemStackRequestActionCraftRecipeOptional@@UEAA_NAEAVReadOnlyBinaryStream@@@Z
     * @hash   879970033
     */
    virtual bool _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ItemStackRequestActionCraftRecipeOptional@@QEAA@XZ
     * @hash   633009338
     */
    MCAPI ItemStackRequestActionCraftRecipeOptional();
    /**
     * @symbol ?getRecipeNetId@ItemStackRequestActionCraftRecipeOptional@@QEBAAEBV?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@XZ
     * @hash   446671077
     */
    MCAPI class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const & getRecipeNetId() const;

};