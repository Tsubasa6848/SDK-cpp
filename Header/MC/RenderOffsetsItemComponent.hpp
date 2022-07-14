// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RenderOffsetsItemComponent {

#define AFTER_EXTRA
// Add Member There
public:
struct TRS {
    TRS() = delete;
    TRS(TRS const&) = delete;
    TRS(TRS const&&) = delete;
};
struct ItemTransforms {
    ItemTransforms() = delete;
    ItemTransforms(ItemTransforms const&) = delete;
    ItemTransforms(ItemTransforms const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RENDEROFFSETSITEMCOMPONENT
public:
    class RenderOffsetsItemComponent& operator=(class RenderOffsetsItemComponent const &) = delete;
    RenderOffsetsItemComponent(class RenderOffsetsItemComponent const &) = delete;
    RenderOffsetsItemComponent() = delete;
#endif


public:
    /*0*/ virtual ~RenderOffsetsItemComponent();
    /*1*/ virtual bool isNetworkComponent() const;
    /*2*/ MCAPI static void _fromString(class RenderOffsetsItemComponent &, std::string const &);
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual bool initializeFromNetwork(class CompoundTag const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RENDEROFFSETSITEMCOMPONENT
#endif
    MCAPI static void bindType();
    MCAPI static class HashedString const & getIdentifier();

//private:
    MCAPI static void _fromString(class RenderOffsetsItemComponent &, std::string const &);


private:
    MCAPI static struct RenderOffsetsItemComponent::ItemTransforms Main_Hand_Defaults;
    MCAPI static struct RenderOffsetsItemComponent::ItemTransforms Off_Hand_Defaults;


};