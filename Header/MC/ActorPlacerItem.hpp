// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorPlacerItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORPLACERITEM
public:
    class ActorPlacerItem& operator=(class ActorPlacerItem const &) = delete;
    ActorPlacerItem(class ActorPlacerItem const &) = delete;
    ActorPlacerItem() = delete;
#endif


public:
    /*0*/ virtual ~ActorPlacerItem();
    /*2*/ virtual void tearDown();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*13*/ virtual void __unk_vfn_13();
    /*15*/ virtual void __unk_vfn_15();
    /*51*/ virtual void __unk_vfn_51();
    /*53*/ virtual void __unk_vfn_53();
    /*57*/ virtual bool isLiquidClipItem(int) const;
    /*58*/ virtual bool shouldInteractionWithBlockBypassLiquid(class Block const &) const;
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual bool isValidAuxValue(int) const;
    /*70*/ virtual void __unk_vfn_70();
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*75*/ virtual void __unk_vfn_75();
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*81*/ virtual struct ActorDefinitionIdentifier getActorIdentifier(class ItemStack const &) const;
    /*85*/ virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /*95*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*121*/ virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /*134*/ virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORPLACERITEM
    MCVAPI class mce::Color getBaseColor(class ItemStack const &) const;
    MCVAPI class mce::Color getSecondaryColor(class ItemStack const &) const;
    MCVAPI bool isActorPlacerItem() const;
    MCVAPI bool isMultiColorTinted(class ItemStack const &) const;
#endif
    MCAPI ActorPlacerItem(std::string const &, int, struct ActorDefinitionIdentifier const &);
    MCAPI static void forEachCustomEgg(class ItemRegistryRef, class std::function<void (class Item const &)> const &);
    MCAPI static std::string getCustomSpawnEggName(int);
    MCAPI static void registerCustomEggs(class ItemRegistryRef, class ActorInfoRegistry const &);
    MCAPI static class Actor * spawnOrMoveAgent(class Vec3 const &, class Actor &);

//private:
    MCAPI struct ActorDefinitionIdentifier _getActorID(class BlockSource &) const;
    MCAPI class Actor * _spawnActorAt(class BlockSource &, class Vec3 const &, class Vec3 const &, class ItemStack const &, class Actor *) const;
    MCAPI static void _setAgentOwner(class Player &, class Agent &);


private:
    MCAPI static class std::unordered_map<unsigned int, std::string, struct std::hash<unsigned int>, struct std::equal_to<unsigned int>, class std::allocator<struct std::pair<unsigned int const, std::string>>> mCustomSpawnEggs;
    MCAPI static class std::unordered_map<class HashedString, struct TextureUVCoordinateSet, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, struct TextureUVCoordinateSet>>> mUVTextureMap;
    MCAPI static struct TextureUVCoordinateSet m_uvEggMask;


};