// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FireworksItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREWORKSITEM
public:
    class FireworksItem& operator=(class FireworksItem const &) = delete;
    FireworksItem(class FireworksItem const &) = delete;
    FireworksItem() = delete;
#endif


public:
    /*0*/ virtual ~FireworksItem();
    /*7*/ virtual void __unk_vfn_7();
    /*11*/ virtual void __unk_vfn_11();
    /*14*/ virtual void __unk_vfn_14();
    /*16*/ virtual void __unk_vfn_16();
    /*52*/ virtual void __unk_vfn_52();
    /*54*/ virtual void __unk_vfn_54();
    /*57*/ virtual bool isDestructive(int) const;
    /*61*/ virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /*67*/ virtual void __unk_vfn_67();
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual void __unk_vfn_73();
    /*76*/ virtual void __unk_vfn_76();
    /*80*/ virtual void __unk_vfn_80();
    /*81*/ virtual void __unk_vfn_81();
    /*85*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*86*/ virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /*136*/ virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FIREWORKSITEM
#endif
    MCAPI FireworksItem(std::string const &, int);
    MCAPI static std::string const TAG_EXPLOSIONS;
    MCAPI static std::string const TAG_E_FLIGHT;
    MCAPI static std::string const TAG_FIREWORKS;
    MCAPI static class ItemInstance const & initFireworksRocketItem(class ItemInstance &, std::vector<class ItemInstance> const &, int);
    MCAPI static class ItemStack const & initFireworksRocketItem(class ItemStack &, std::vector<class ItemStack> const &, int);



};