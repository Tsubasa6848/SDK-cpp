/**
 * @file  FurnaceFuelContainerValidation.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FurnaceFuelContainerValidation.
 *
 */
class FurnaceFuelContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FURNACEFUELCONTAINERVALIDATION
public:
    class FurnaceFuelContainerValidation& operator=(class FurnaceFuelContainerValidation const &) = delete;
    FurnaceFuelContainerValidation(class FurnaceFuelContainerValidation const &) = delete;
    FurnaceFuelContainerValidation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1491879574
     */
    virtual ~FurnaceFuelContainerValidation();
    /**
     * @vftbl  1
     * @symbol ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
     * @hash   109477216
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /**
     * @vftbl  2
     * @symbol ?isItemAllowedInSlot@FurnaceFuelContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
     * @hash   1163600134
     */
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /**
     * @vftbl  3
     * @symbol ?getAvailableSetCount@FurnaceFuelContainerValidation@@UEBAHHAEBVItemStackBase@@@Z
     * @hash   219032979
     */
    virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    /**
     * @vftbl  4
     * @symbol ?isItemAllowedToAdd@FurnaceFuelContainerValidation@@UEBA_NAEBVItemStack@@@Z
     * @hash   -1194859029
     */
    virtual bool isItemAllowedToAdd(class ItemStack const &) const;
    /**
     * @vftbl  5
     * @symbol ?isItemAllowedToRemove@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVItemStackBase@@@Z
     * @hash   768387322
     */
    virtual bool isItemAllowedToRemove(class ContainerScreenContext const &, class ItemStackBase const &) const;
    /**
     * @vftbl  6
     * @symbol ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
     * @hash   778397603
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @vftbl  7
     * @symbol ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
     * @hash   1996775687
     */
    virtual bool canDestroy(class ContainerScreenContext const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FURNACEFUELCONTAINERVALIDATION
    /**
     * @symbol ?getContainerOffset@FurnaceFuelContainerValidation@@UEBAHAEBVContainerScreenContext@@@Z
     * @hash   724072624
     */
    MCVAPI int getContainerOffset(class ContainerScreenContext const &) const;
#endif

};