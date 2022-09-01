/**
 * @file  Fireball.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "PredictableProjectile.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Fireball.
 *
 */
class Fireball : public PredictableProjectile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREBALL
public:
    class Fireball& operator=(class Fireball const &) = delete;
    Fireball(class Fireball const &) = delete;
    Fireball() = delete;
#endif

public:
    /**
     * @vftbl  14
     * @hash   9849855
     */
    virtual ~Fireball();
    /**
     * @vftbl  41
     * @hash   -249160383
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  49
     * @symbol ?normalTick@Fireball@@UEAAXXZ
     * @hash   -1648313434
     */
    virtual void normalTick();
    /**
     * @vftbl  61
     * @hash   -198636769
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  68
     * @hash   -185437434
     */
    virtual void __unk_vfn_68();
    /**
     * @vftbl  79
     * @symbol ?getShadowHeightOffs@Fireball@@UEAAMXZ
     * @hash   1072427227
     */
    virtual float getShadowHeightOffs();
    /**
     * @vftbl  82
     * @hash   -133720258
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  85
     * @hash   -137684383
     */
    virtual void __unk_vfn_85();
    /**
     * @vftbl  87
     * @symbol ?getBrightness@Fireball@@UEBAMM@Z
     * @hash   1745861648
     */
    virtual float getBrightness(float) const;
    /**
     * @vftbl  88
     * @hash   -128179132
     */
    virtual void __unk_vfn_88();
    /**
     * @vftbl  95
     * @symbol ?isPickable@Fireball@@UEAA_NXZ
     * @hash   -2020747671
     */
    virtual bool isPickable();
    /**
     * @vftbl  96
     * @hash   -108131711
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl  99
     * @hash   -98626460
     */
    virtual void __unk_vfn_99();
    /**
     * @vftbl  106
     * @hash   1332943623
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl  108
     * @hash   1334790665
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  109
     * @hash   1328979498
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  111
     * @hash   1356955169
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl  143
     * @symbol ?getPickRadius@Fireball@@UEAAMXZ
     * @hash   262687827
     */
    virtual float getPickRadius();
    /**
     * @vftbl  172
     * @symbol ?getSourceUniqueID@Fireball@@UEBA?AUActorUniqueID@@XZ
     * @hash   -120483823
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
    /**
     * @vftbl  182
     * @hash   1509264059
     */
    virtual void __unk_vfn_182();
    /**
     * @vftbl  196
     * @hash   1590605982
     */
    virtual void __unk_vfn_196();
    /**
     * @vftbl  222
     * @hash   -2034256014
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  223
     * @hash   -2020032253
     */
    virtual void __unk_vfn_223();
    /**
     * @vftbl  248
     * @hash   -2007175034
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  251
     * @hash   -786620466
     */
    virtual void __unk_vfn_251();
    /**
     * @vftbl  269
     * @hash   -1899974523
     */
    virtual void __unk_vfn_269();
    /**
     * @vftbl  273
     * @symbol ?readAdditionalSaveData@Fireball@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   422441547
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  274
     * @symbol ?addAdditionalSaveData@Fireball@@MEBAXAEAVCompoundTag@@@Z
     * @hash   1367296226
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  277
     * @hash   -1873192414
     */
    virtual void __unk_vfn_277();
    /**
     * @vftbl  285
     * @hash   -1895428993
     */
    virtual void __unk_vfn_285();
    /**
     * @vftbl  286
     * @symbol ?getInertia@Fireball@@MEAAMXZ
     * @hash   -911042601
     */
    virtual float getInertia();
    /**
     * @vftbl  287
     * @hash   -1893581951
     */
    virtual void __unk_vfn_287();
    /**
     * @vftbl  288
     * @symbol ?getTrailParticle@Fireball@@MEAA?AW4ParticleType@@XZ
     * @hash   2125915611
     */
    virtual enum ParticleType getTrailParticle();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FIREBALL
    /**
     * @symbol ?canMakeStepSound@Fireball@@MEBA_NXZ
     * @hash   -1866595807
     */
    MCVAPI bool canMakeStepSound() const;
    /**
     * @symbol ?onHit@Fireball@@MEAAXAEBVHitResult@@@Z
     * @hash   -1889064470
     */
    MCVAPI void onHit(class HitResult const &);
    /**
     * @symbol ?shouldBurn@Fireball@@MEAA_NXZ
     * @hash   -2114716385
     */
    MCVAPI bool shouldBurn();
#endif
    /**
     * @symbol ??0Fireball@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   -1424862367
     */
    MCAPI Fireball(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

//private:
    /**
     * @symbol ?_setPower@Fireball@@AEAAXAEBVVec3@@@Z
     * @hash   332205457
     */
    MCAPI void _setPower(class Vec3 const &);

private:

};