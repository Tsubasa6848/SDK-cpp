/**
 * @file  LodestoneBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LodestoneBlock.
 *
 */
class LodestoneBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LODESTONEBLOCK
public:
    class LodestoneBlock& operator=(class LodestoneBlock const &) = delete;
    LodestoneBlock(class LodestoneBlock const &) = delete;
    LodestoneBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1606022090
     */
    virtual ~LodestoneBlock();
    /**
     * @vftbl  19
     * @hash   -327659668
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @hash   -299030517
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -278713055
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -276866013
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -275942492
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -275018971
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @hash   -273171929
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @hash   -272248408
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @hash   -271324887
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @hash   -270401366
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @hash   -250083904
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @hash   -249160383
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @hash   -248236862
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @hash   -246389820
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @hash   -245466299
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @hash   -244542778
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @hash   -243619257
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @hash   -242695736
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @hash   -241772215
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  59
     * @hash   -213143064
     */
    virtual void __unk_vfn_59();
    /**
     * @vftbl  60
     * @hash   -192825602
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  73
     * @hash   -161425888
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  80
     * @hash   -135567300
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  96
     * @symbol ?playerWillDestroy@LodestoneBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -610347760
     */
    virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  105
     * @hash   1332020102
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  124
     * @hash   1388354883
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl  126
     * @hash   1390201925
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  127
     * @hash   1391125446
     */
    virtual void __unk_vfn_127();
    /**
     * @vftbl  132
     * @hash   1415136992
     */
    virtual void __unk_vfn_132();
    /**
     * @vftbl  148
     * @hash   1442572581
     */
    virtual void __unk_vfn_148();
    /**
     * @vftbl  157
     * @hash   1477012899
     */
    virtual void __unk_vfn_157();
    /**
     * @vftbl  168
     * @hash   1457546883
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @hash   1458470404
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @hash   1478787866
     */
    virtual void __unk_vfn_170();
    /**
     * @vftbl  177
     * @hash   1534271201
     */
    virtual void __unk_vfn_177();
    /**
     * @vftbl  188
     * @hash   1563823873
     */
    virtual void __unk_vfn_188();
    /**
     * @symbol ??0LodestoneBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
     * @hash   -1562893709
     */
    MCAPI LodestoneBlock(std::string const &, int, class Material const &);
    /**
     * @symbol ?getBlockActor@LodestoneBlock@@SAPEAVLodestoneBlockActor@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   651873631
     */
    MCAPI static class LodestoneBlockActor * getBlockActor(class BlockSource &, class BlockPos const &);

};