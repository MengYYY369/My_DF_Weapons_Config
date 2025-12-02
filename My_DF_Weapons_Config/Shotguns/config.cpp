class CfgPatches
{
    class My_DF_Weapons_Shotguns_config
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Sounds_Weapons",
			"DZ_Weapons_Firearms",
			"My_DF_Weapons_Shotguns_Citori725",
			"My_DF_Weapons_Shotguns_M1014",
			"My_DF_Weapons_Shotguns_M870",
			"My_DF_Weapons_Shotguns_Saiga12K",
			"My_DF_Weapons_Magazine"
		};
    };
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Mode_Single;
class Mode_Double;
class Muzzle_Base;
class OpticsInfoRifle;
class OpticsInfoShotgun;
class cfgWeapons
{
    class Rifle_Base;
    class My_DF_Weapons_Shotguns_Citori725_Base: Rifle_Base
    {
        scope = 0;
        weight = 3000;
        itemSize[] = { 8, 3 };
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "My_DF_Weapons_Ammo_12Gauge_Dragon",
            "My_DF_Weapons_Ammo_12Gauge_7mmBuckshot",
            "My_DF_Weapons_Ammo_12Gauge_8mmBuckshot",
            "My_DF_Weapons_Ammo_12Gauge_AP20",
            "My_DF_Weapons_Ammo_12Gauge_Arrow",
            "My_DF_Weapons_Ammo_12Gauge_RIP",
            "My_DF_Weapons_Ammo_12Gauge_FTX",
            "My_DF_Weapons_Ammo_12Gauge_GT",
            "Ammo_12gaPellets",
            "Ammo_12gaSlug",
            "Ammo_12gaRubberSlug",
            "Ammo_12gaBeanbag"
        };
        attachments[] = {
            "DF_stock_Citori725",
            "DF_trigger_Citori725",
            "DF_handguard_Citori725",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_muzzle_Citori725",
            "DF_Pendant"
        };
        magazines[] = {};
        DisplayMagazine = 0;
        winchesterTypeOpticsMount = 1;
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.1;
        ObstructionDistance = 0.79;
        barrelArmor = 1.333;
        initSpeedMultiplier = 1.25;
        muzzles[] = { "this", "SecondMuzzle" };
        ejectType = 3;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2.2, 2.2, 0.85 };
        hiddenSelections[] = {
            "rec",
            "barrel2",
            "handguard",
            "stock"
        };
        simpleHiddenSelections[] = {
            "bullet",
            "bullet2",
            "hide_barrel",
            "barrel2",
            "handguard",
            "stock",
            "trigger",
            "sight",
            "mount",
            "frontsight",
            "frontsight2",
            "sup",
            "sup2",
            "sup3",
            "ghillie_1",
            "ghillie_2",
            "ghillie_3"
        };
        class NoiseShoot
        {
            strength = 100;
            type = "shot";
        };
        modes[] = { "Single", "Double" };
        class Single: Mode_Single
        {
            soundSetShot[] = { "My_DF_Weapons_Shotguns_Citori725_Shot_SoundSet", "IZH43sawed_Tail_SoundSet", "IZH43_InteriorTail_SoundSet", "IZH43_Slapback_SoundSet", "IZH43sawed_Tail_2D_SoundSet", "IZH43sawed_Shot_Interior_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Shotguns_Citori725_silencer_SoundSet", "IZH43sawed_Tail_SoundSet", "IZH43_InteriorTail_SoundSet", "IZH43_Slapback_SoundSet", "IZH43sawed_Tail_2D_SoundSet", "IZH43sawed_Shot_Interior_SoundSet" } };
            reloadTime = 0.1;
            dispersion = 0.00075;
            firespreadangle = 1.5;
            magazineSlot = "magazine";
        };
        class Double: Mode_Double
        {
            soundSetShot[] = { "My_DF_Weapons_Shotguns_Citori725_Shot_SoundSet", "IZH43sawedDouble_Tail_SoundSet", "IZH43Double_InteriorTail_SoundSet", "IZH43Double_Slapback_SoundSet", "IZH43sawed3Double_Tail_2D_SoundSet", "IZH43sawedDouble_Shot_Interior_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Shotguns_Citori725_silencer_SoundSet", "IZH43sawedDouble_Tail_SoundSet", "IZH43Double_InteriorTail_SoundSet", "IZH43Double_Slapback_SoundSet", "IZH43sawed3Double_Tail_2D_SoundSet", "IZH43sawedDouble_Shot_Interior_SoundSet" } };
            reloadTime = 0.1;
            dispersion = 0.0015;
            firespreadangle = 1.5;
            magazineSlot = "magazine";
        };
        class SecondMuzzle: Muzzle_Base
        {
            chamberSize = 1;
            muzzlePos = "usti hlavne_2";
            muzzleEnd = "konec hlavne_2";
            cartridgePos = "nabojnicestart_2";
            cartridgeVel = "nabojniceend_2";
            magazines[] = {};
            chamberableFrom[] = {
                "My_DF_Weapons_Ammo_12Gauge_Dragon",
                "My_DF_Weapons_Ammo_12Gauge_7mmBuckshot",
                "My_DF_Weapons_Ammo_12Gauge_8mmBuckshot",
                "My_DF_Weapons_Ammo_12Gauge_AP20",
                "My_DF_Weapons_Ammo_12Gauge_Arrow",
                "My_DF_Weapons_Ammo_12Gauge_RIP",
                "My_DF_Weapons_Ammo_12Gauge_FTX",
                "My_DF_Weapons_Ammo_12Gauge_GT",
                "Ammo_12gaPellets",
                "Ammo_12gaSlug",
                "Ammo_12gaRubberSlug",
                "Ammo_12gaBeanbag"
            };
            barrelArmor = 1.333;
            initSpeedMultiplier = 1.25;
            irDistance = 0;
            irLaserPos = "laser pos";
            irLaserEnd = "laser dir";
            modes[] = { "Single", "Double" };
            class Single: Mode_Single
            {
                soundSetShot[] = { "My_DF_Weapons_Shotguns_Citori725_Shot_SoundSet", "IZH43sawed_Tail_SoundSet", "IZH43_InteriorTail_SoundSet", "IZH43_Slapback_SoundSet", "IZH43sawed_Tail_2D_SoundSet", "IZH43sawed_Shot_Interior_SoundSet" };
                soundSetShotExt[] = { { "My_DF_Weapons_Shotguns_Citori725_silencer_SoundSet", "IZH43sawed_Tail_SoundSet", "IZH43_InteriorTail_SoundSet", "IZH43_Slapback_SoundSet", "IZH43sawed_Tail_2D_SoundSet", "IZH43sawed_Shot_Interior_SoundSet" } };
                reloadTime = 0.1;
                dispersion = 0.00075;
                firespreadangle = 1.5;
                magazineSlot = "magazine";
            };
            class Double: Mode_Double
            {
                soundSetShot[] = { "My_DF_Weapons_Shotguns_Citori725_Shot_SoundSet", "IZH43dDouble_Tail_SoundSet", "IZH43Double_InteriorTail_SoundSet", "IZH43Double_Slapback_SoundSet", "IZH43Double_Tail_2D_SoundSet", "IZH43double_Shot_Interior_SoundSet" };
                soundSetShotExt[] = { { "My_DF_Weapons_Shotguns_Citori725_silencer_SoundSet", "IZH43sawedDouble_Tail_SoundSet", "IZH43dDouble_Tail_SoundSet", "IZH43Double_InteriorTail_SoundSet", "IZH43Double_Slapback_SoundSet", "IZH43Double_Tail_2D_SoundSet", "IZH43double_Shot_Interior_SoundSet" } };
                reloadTime = 0.1;
                dispersion = 0.0015;
                firespreadangle = 1.5;
                magazineSlot = "magazine";
            };
            class OpticsInfo: OpticsInfoShotgun
            {};
        };
        class OpticsInfo: OpticsInfoShotgun
        {};
        class Particles
        {
            class OnFire
            {
                class SmokeCloud
                {
                    overrideParticle = "weapon_shot_winded_smoke";
                };
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_winch70_01";
                    ignoreIfSuppressed = 1;
                    illuminateWorld = 1;
                    positionOffset[] = { 0, 0, 0 };
                };
                class MuzzleFlash2
                {
                    overrideParticle = "weapon_shot_winch70_01";
                    overridePoint = "Usti hlavne_2";
                    ignoreIfSuppressed = 1;
                    illuminateWorld = 1;
                    positionOffset[] = { 0, 0, 0 };
                    muzzleIndex = 1;
                };
            };
            class OnBulletCasingEject
            {
                class ChamberSmokeRaise
                {
                    overrideParticle = "weapon_shot_chamber_smoke";
                    overridePoint = "Nabojnicestart";
                };
            };
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\B95\w_B95_states.anm";
        boneRemap[] = { "release", "Weapon_Bone_02", "barrel", "Weapon_Bone_01", "trigger", "Weapon_Trigger", "ejector", "Weapon_Bone_03", "bullet", "Weapon_Bullet", "bullet2", "Weapon_Bone_04", "snaploader", "Weapon_Bone_05" };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = { 0, 0.01, -0.03 };
                orientation[] = { 0, -30, 0 };
            };
            class Melee
            {
                position[] = { 0, 0, 0 };
                orientation[] = { 0, 30, 0 };
            };
        };
        class AnimationSources
        {
            class canted_optic
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class riser_optic
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class hydra_optic
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class hydra_optic2
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class optic
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_Shotguns_Citori725: My_DF_Weapons_Shotguns_Citori725_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Shotguns_Citori7250";
        descriptionShort = "$STR_My_DF_Weapons_Shotguns_Citori7251";
        model = "\My_DF_Weapons_Shotguns\Citori725\Citori725.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\Citori725\data\Citori725_co.paa",
            "My_DF_Weapons_Shotguns\Citori725\data\barrel\Citori725_barrel_co.paa",
            "My_DF_Weapons_Shotguns\Citori725\data\handguard\Citori725_handguard_co.paa",
            "My_DF_Weapons_Shotguns\Citori725\data\stock\Citori725_stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\Citori725\data\Citori725.rvmat",
            "My_DF_Weapons_Attachments\muzzle\Citori725\data\barrel\Citori725_barrel.rvmat",
            "My_DF_Weapons_Attachments\muzzle\Citori725\data\handguard\Citori725_handguard.rvmat",
            "My_DF_Weapons_Attachments\muzzle\Citori725\data\\stock\Citori725_stock.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 500;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\Citori725.rvmat",
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\barrel\Citori725_barrel.rvmat",
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\handguard\Citori725_handguard.rvmat",
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\\stock\Citori725_stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\Citori725_worn.rvmat",
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\barrel\Citori725_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\handguard\Citori725_handguard_worn.rvmat",
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\\stock\Citori725_stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\Citori725_damage.rvmat",
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\barrel\Citori725_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\handguard\Citori725_handguard_damage.rvmat",
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\\stock\Citori725_stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\Citori725_damage.rvmat",
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\barrel\Citori725_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\handguard\Citori725_handguard_damage.rvmat",
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\\stock\Citori725_stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\Citori725_destruct.rvmat",
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\barrel\Citori725_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\handguard\Citori725_handguard_destruct.rvmat",
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\\stock\Citori725_stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class Shotgun_Base;
    class My_DF_Weapons_Shotguns_M1014_Base: Shotgun_Base
    {
        scope = 0;
        itemSize[] = { 9, 3 };
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        chamberSize = 7;
        chamberedRound = "";
        chamberableFrom[] = {
            "My_DF_Weapons_Ammo_12Gauge_Dragon",
            "My_DF_Weapons_Ammo_12Gauge_7mmBuckshot",
            "My_DF_Weapons_Ammo_12Gauge_8mmBuckshot",
            "My_DF_Weapons_Ammo_12Gauge_AP20",
            "My_DF_Weapons_Ammo_12Gauge_Arrow",
            "My_DF_Weapons_Ammo_12Gauge_RIP",
            "My_DF_Weapons_Ammo_12Gauge_FTX",
            "My_DF_Weapons_Ammo_12Gauge_GT",
            "Ammo_12gaPellets",
            "Ammo_12gaSlug",
            "Ammo_12gaRubberSlug",
            "Ammo_12gaBeanbag"
        };
        attachments[] = {
            "DF_stock",
            "DF_handguard_M1014",
            "DF_barrel_M1014",
            "DF_StickLoaderLifter",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_muzzleShotgun",
            "DF_Pendant"
        };
        magazines[] = {};
        DisplayMagazine = 0;
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.03525;
        ObstructionDistance = 0.807;
        barrelArmor = 2;
        initSpeedMultiplier = 1.25;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2.3, 2.3, 0.85 };
        hiddenSelections[] = {
            "rec",
            "barrel2",
            "handguard",
            "pisg",
            "stock"
        };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "barrel2",
            "handguard",
            "stock",
            "sight",
            "pisg"
        };
        class NoiseShoot
        {
            strength = 100;
            type = "shot";
        };
        modes[] = { "SemiAuto" };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_Shotguns_M1014_Shot_SoundSet", "R12_Tail_SoundSet", "R12_InteriorTail_SoundSet", "R12_Slapback_SoundSet", "R12_Tail_2D_SoundSet", "R12_Shot_Interior_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Shotguns_M1014_silencer_SoundSet", "R12_Tail_SoundSet", "R12_InteriorTail_SoundSet", "R12_Slapback_SoundSet", "R12_Tail_2D_SoundSet", "R12_Shot_Interior_SoundSet" } };
            reloadTime = 0.18;
            recoil = "recoil_R12";
            recoilProne = "recoil_R12_prone";
            dispersion = 0.006;
            firespreadangle = 1.5;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoShotgun
        {
            memoryPointCamera = "eye";
            discreteDistance[] = { 25 };
            discreteDistanceInitIndex = 0;
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 100;
        };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = {-0.03, -0.01, 0.01 };
                orientation[] = { 0, 0, 0 };
            };
            class Melee
            {
                position[] = {-0.03, 0, -0.03 };
                orientation[] = { 0, 0, 0 };
            };
        };
        class Particles
        {
            class OnFire
            {
                class SmokeCloud
                {
                    overrideParticle = "weapon_shot_winded_smoke";
                };
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_mp133_01";
                    ignoreIfSuppressed = 1;
                    illuminateWorld = 1;
                    positionOffset[] = { 0, 0, 0 };
                };
                class BadlyDamagedChamberSmoke
                {
                    overrideParticle = "weapon_shot_chamber_smoke";
                    overridePoint = "Nabojnicestart";
                    overrideDirectionPoint = "Nabojniceend";
                    onlyWithinHealthLabel[] = { 3, 4 };
                };
                class BadlyDamagedChamberSmokeRaise
                {
                    overrideParticle = "weapon_shot_chamber_smoke_raise";
                    overridePoint = "Nabojnicestart";
                    onlyWithinHealthLabel[] = { 3, 4 };
                };
            };
            class OnBulletCasingEject
            {
                class ChamberSmokeRaise
                {
                    overrideParticle = "weapon_shot_chamber_smoke";
                    overridePoint = "Nabojnicestart";
                };
            };
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\R12\w_R12_states.anm";
        boneRemap[] = { "bolt", "Weapon_Bolt", "bolt_link", "Weapon_Bone_01", "loading", "Weapon_Bone_02", "trigger", "Weapon_Trigger", "bullet", "Weapon_Bullet" };
        class AnimationSources
        {
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class canted_optic
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class riser_optic
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class hydra_optic
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class hydra_optic2
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class optic
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_Shotguns_M1014: My_DF_Weapons_Shotguns_M1014_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Shotguns_M10140";
        descriptionShort = "$STR_My_DF_Weapons_Shotguns_M10141";
        model = "\My_DF_Weapons_Shotguns\M1014\M1014.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Shotguns\M1014\data\M1014_co.paa",
            "My_DF_Weapons_Shotguns\M1014\data\barrel\M1014_barrel_co.paa",
            "My_DF_Weapons_Shotguns\M1014\data\handguard\M1014_handguard_co.paa",
            "My_DF_Weapons_Shotguns\M1014\data\pisg\M1014_pisg_co.paa",
            "My_DF_Weapons_Shotguns\M1014\data\stock\M1014_stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Shotguns\M1014\data\M1014.rvmat",
            "My_DF_Weapons_Shotguns\M1014\data\barrel\M1014_barrel.rvmat",
            "My_DF_Weapons_Shotguns\M1014\data\handguard\M1014_handguard.rvmat",
            "My_DF_Weapons_Shotguns\M1014\data\pisg\M1014_pisg.rvmat",
            "My_DF_Weapons_Shotguns\M1014\data\stock\M1014_stock.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 500;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Shotguns\M1014\data\M1014.rvmat",
                                "My_DF_Weapons_Shotguns\M1014\data\barrel\M1014_barrel.rvmat",
                                "My_DF_Weapons_Shotguns\M1014\data\handguard\M1014_handguard.rvmat",
                                "My_DF_Weapons_Shotguns\M1014\data\pisg\M1014_pisg.rvmat",
                                "My_DF_Weapons_Shotguns\M1014\data\stock\M1014_stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Shotguns\M1014\data\M1014_worn.rvmat",
                                "My_DF_Weapons_Shotguns\M1014\data\barrel\M1014_barrel_worn.rvmat",
                                "My_DF_Weapons_Shotguns\M1014\data\handguard\M1014_handguard_worn.rvmat",
                                "My_DF_Weapons_Shotguns\M1014\data\pisg\M1014_pisg_worn.rvmat",
                                "My_DF_Weapons_Shotguns\M1014\data\stock\M1014_stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Shotguns\M1014\data\M1014_damage.rvmat",
                                "My_DF_Weapons_Shotguns\M1014\data\barrel\M1014_barrel_damage.rvmat",
                                "My_DF_Weapons_Shotguns\M1014\data\handguard\M1014_handguard_damage.rvmat",
                                "My_DF_Weapons_Shotguns\M1014\data\pisg\M1014_pisg_damage.rvmat",
                                "My_DF_Weapons_Shotguns\M1014\data\stock\M1014_stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Shotguns\M1014\data\M1014_damage.rvmat",
                                "My_DF_Weapons_Shotguns\M1014\data\barrel\M1014_barrel_damage.rvmat",
                                "My_DF_Weapons_Shotguns\M1014\data\handguard\M1014_handguard_damage.rvmat",
                                "My_DF_Weapons_Shotguns\M1014\data\pisg\M1014_pisg_damage.rvmat",
                                "My_DF_Weapons_Shotguns\M1014\data\stock\M1014_stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Shotguns\M1014\data\M1014_destruct.rvmat",
                                "My_DF_Weapons_Shotguns\M1014\data\barrel\M1014_barrel_destruct.rvmat",
                                "My_DF_Weapons_Shotguns\M1014\data\handguard\M1014_handguard_destruct.rvmat",
                                "My_DF_Weapons_Shotguns\M1014\data\pisg\M1014_pisg_destruct.rvmat",
                                "My_DF_Weapons_Shotguns\M1014\data\stock\M1014_stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Shotguns_M870_Base: Shotgun_Base
    {
        scope = 0;
        weight = 3000;
        animName = "ShotgunMp133";
        itemSize[] = { 9, 3 };
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        chamberSize = 6;
        chamberedRound = "";
        chamberableFrom[] = {
            "My_DF_Weapons_Ammo_12Gauge_Dragon",
            "My_DF_Weapons_Ammo_12Gauge_7mmBuckshot",
            "My_DF_Weapons_Ammo_12Gauge_8mmBuckshot",
            "My_DF_Weapons_Ammo_12Gauge_AP20",
            "My_DF_Weapons_Ammo_12Gauge_Arrow",
            "My_DF_Weapons_Ammo_12Gauge_RIP",
            "My_DF_Weapons_Ammo_12Gauge_FTX",
            "My_DF_Weapons_Ammo_12Gauge_GT",
            "Ammo_12gaPellets",
            "Ammo_12gaSlug",
            "Ammo_12gaRubberSlug",
            "Ammo_12gaBeanbag"
        };
        attachments[] = {
            "DF_stock_notube",
            "DF_handguard_M870",
            "DF_barrel_M870",
            "DF_StickLoaderLifter",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_muzzleShotgun",
            "DF_Pendant"
        };
        magazines[] = {};
        DisplayMagazine = 0;
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.03525;
        ObstructionDistance = 0.807;
        barrelArmor = 2.25;
        initSpeedMultiplier = 1.25;
        ejectType = 0;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2.3, 2.3, 0.85 };
        cartridgeCreateTime[] = { 0.55, 0.82 };
        hiddenSelections[] = {
            "camo",
            "barrel",
            "handguard",
            "pisg",
            "stock"
        };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "barrel",
            "handguard",
            "stock",
            "pisg"
        };
        class NoiseShoot
        {
            strength = 100;
            type = "shot";
        };
        modes[] = { "Single" };
        class Single: Mode_Single
        {
            soundSetShot[] = { "My_DF_Weapons_Shotguns_M870_Shot_SoundSet", "Mp133_Tail_SoundSet", "Mp133_InteriorTail_SoundSet", "Mp133_Slapback_SoundSet", "Mp133_Tail_2D_SoundSet", "Mp133_Shot_Interior_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Shotguns_M870_silencer_SoundSet", "Mp133_Tail_SoundSet", "Mp133_InteriorTail_SoundSet", "Mp133_Slapback_SoundSet", "Mp133_Tail_2D_SoundSet", "Mp133_Shot_Interior_SoundSet" } };
            reloadTime = 1;
            recoil = "recoil_Mp133";
            recoilProne = "recoil_Mp133_prone";
            dispersion = 0.01;
            firespreadangle = 1.5;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoShotgun
        {
            memoryPointCamera = "eye";
            discreteDistance[] = { 25 };
            discreteDistanceInitIndex = 0;
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 100;
        };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = {-0.03, -0.01, 0.01 };
                orientation[] = { 0, 0, 0 };
            };
            class Melee
            {
                position[] = {-0.03, 0, -0.03 };
                orientation[] = { 0, 0, 0 };
            };
        };
        class Particles
        {
            class OnFire
            {
                class SmokeCloud
                {
                    overrideParticle = "weapon_shot_winded_smoke";
                };
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_mp133_01";
                    ignoreIfSuppressed = 1;
                    illuminateWorld = 1;
                    positionOffset[] = { 0, 0, 0 };
                };
                class BadlyDamagedChamberSmoke
                {
                    overrideParticle = "weapon_shot_chamber_smoke";
                    overridePoint = "Nabojnicestart";
                    overrideDirectionPoint = "Nabojniceend";
                    onlyWithinHealthLabel[] = { 3, 4 };
                };
                class BadlyDamagedChamberSmokeRaise
                {
                    overrideParticle = "weapon_shot_chamber_smoke_raise";
                    overridePoint = "Nabojnicestart";
                    onlyWithinHealthLabel[] = { 3, 4 };
                };
            };
            class OnBulletCasingEject
            {
                class ChamberSmokeRaise
                {
                    overrideParticle = "weapon_shot_chamber_smoke";
                    overridePoint = "Nabojnicestart";
                };
            };
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\mp133\w_mp133_states.anm";
        boneRemap[] = { "bolt", "Weapon_Bolt", "pump", "Weapon_Bone_01", "feedRamp", "Weapon_Bone_02", "trigger", "Weapon_Trigger", "bullet", "Weapon_Bullet", "boltrelease", "Weapon_Bone_03" };
        class AnimationSources
        {
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 1;
            };
            class canted_optic
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class riser_optic
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class hydra_optic
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class hydra_optic2
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class optic
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_Shotguns_M870: My_DF_Weapons_Shotguns_M870_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Shotguns_M8700";
        descriptionShort = "$STR_My_DF_Weapons_Shotguns_M8701";
        model = "\My_DF_Weapons_Shotguns\M870\M870.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Shotguns\M870\data\M870_co.paa",
            "My_DF_Weapons_Shotguns\M870\data\barrel\M870_barrel_co.paa",
            "My_DF_Weapons_Shotguns\M870\data\handguard\M870_handguard_co.paa",
            "My_DF_Weapons_Shotguns\M870\data\pisg\M870_pisg_co.paa",
            "My_DF_Weapons_Shotguns\M870\data\stock\M870_stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Shotguns\M870\data\M870.rvmat",
            "My_DF_Weapons_Shotguns\M870\data\barrel\M870_barrel.rvmat",
            "My_DF_Weapons_Shotguns\M870\data\handguard\M870_handguard.rvmat",
            "My_DF_Weapons_Shotguns\M870\data\pisg\M870_pisg.rvmat",
            "My_DF_Weapons_Shotguns\M870\data\stock\M870_stock.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 500;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Shotguns\M870\data\M870.rvmat",
                                "My_DF_Weapons_Shotguns\M870\data\barrel\M870_barrel.rvmat",
                                "My_DF_Weapons_Shotguns\M870\data\handguard\M870_handguard.rvmat",
                                "My_DF_Weapons_Shotguns\M870\data\pisg\M870_pisg.rvmat",
                                "My_DF_Weapons_Shotguns\M870\data\stock\M870_stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Shotguns\M870\data\M870_worn.rvmat",
                                "My_DF_Weapons_Shotguns\M870\data\barrel\M870_barrel_worn.rvmat",
                                "My_DF_Weapons_Shotguns\M870\data\handguard\M870_handguard_worn.rvmat",
                                "My_DF_Weapons_Shotguns\M870\data\pisg\M870_pisg_worn.rvmat",
                                "My_DF_Weapons_Shotguns\M870\data\stock\M870_stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Shotguns\M870\data\M870_damage.rvmat",
                                "My_DF_Weapons_Shotguns\M870\data\barrel\M870_barrel_damage.rvmat",
                                "My_DF_Weapons_Shotguns\M870\data\handguard\M870_handguard_damage.rvmat",
                                "My_DF_Weapons_Shotguns\M870\data\pisg\M870_pisg_damage.rvmat",
                                "My_DF_Weapons_Shotguns\M870\data\stock\M870_stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Shotguns\M870\data\M870_damage.rvmat",
                                "My_DF_Weapons_Shotguns\M870\data\barrel\M870_barrel_damage.rvmat",
                                "My_DF_Weapons_Shotguns\M870\data\handguard\M870_handguard_damage.rvmat",
                                "My_DF_Weapons_Shotguns\M870\data\pisg\M870_pisg_damage.rvmat",
                                "My_DF_Weapons_Shotguns\M870\data\stock\M870_stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Shotguns\M870\data\M870_destruct.rvmat",
                                "My_DF_Weapons_Shotguns\M870\data\barrel\M870_barrel_destruct.rvmat",
                                "My_DF_Weapons_Shotguns\M870\data\handguard\M870_handguard_destruct.rvmat",
                                "My_DF_Weapons_Shotguns\M870\data\pisg\M870_pisg_destruct.rvmat",
                                "My_DF_Weapons_Shotguns\M870\data\stock\M870_stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Shotguns_Saiga12K_Base: Rifle_Base
    {
        scope = 0;
        weight = 3600;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        magazineSwitchTime = 0.2;
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 0.93;
        ObstructionDistance = 0.651;
        barrelArmor = 1.68;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2.5, 2.5, 0.9 };
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "Ammo_12gaPellets",
            "Ammo_12gaSlug",
            "Ammo_12gaRubberSlug",
            "Ammo_12gaBeanbag",
            "My_DF_Weapons_Ammo_12Gauge_Dragon",
            "My_DF_Weapons_Ammo_12Gauge_7mmBuckshot",
            "My_DF_Weapons_Ammo_12Gauge_8mmBuckshot",
            "My_DF_Weapons_Ammo_12Gauge_AP20",
            "My_DF_Weapons_Ammo_12Gauge_Arrow",
            "My_DF_Weapons_Ammo_12Gauge_RIP",
            "My_DF_Weapons_Ammo_12Gauge_FTX",
            "My_DF_Weapons_Ammo_12Gauge_GT"
        };
        magazines[] = {
            "Mag_Saiga_5Rnd",
            "Mag_Saiga_8Rnd",
            "Mag_Saiga_Drum20Rnd",
            "My_DF_Weapons_Shotguns_Saiga12K_5RndMag",
            "My_DF_Weapons_Shotguns_Saiga12K_10RndMag",
            "My_DF_Weapons_Shotguns_Saiga12K_24RndDrumMag"
        };
        itemSize[] = { 7, 3 };
        attachments[] = {
            "DF_stock_pad",
            "DF_stock",
            "DF_ak_pisg",
            "DF_handguard_S12K",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_mount_S12K",
            "DF_muzzleShotgun",
            "DF_Pendant"
        };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "magazine",
            "barrel",
            "handguard",
            "pisg",
            "stock"
        };
        hiddenSelections[] = {
            "rec",
            "barrel",
            "handguard",
            "pisg",
            "stock"
        };
        class NoiseShoot
        {
            strength = 100;
            type = "shot";
        };
        modes[] = {
            "SemiAuto",
            "FullAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_Shotguns_S12K_Shot_SoundSet", "Saiga12_Tail_SoundSet", "Saiga12_InteriorTail_SoundSet", "Saiga_Slapback_SoundSet", "Saiga_Tail_2D_SoundSet", "Saiga12_Shot_Interior_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Shotguns_S12K_silencer_SoundSet", "Saiga12_Tail_SoundSet", "Saiga12_InteriorTail_SoundSet", "Saiga_Slapback_SoundSet", "Saiga_Tail_2D_SoundSet", "Saiga12_Shot_Interior_SoundSet" } };
            reloadTime = 0.35;
            recoil = "recoil_Saiga12";
            recoilProne = "recoil_Saiga12_prone";
            dispersion = 0.01;
            firespreadangle = 1.5;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot1st[] = { "Saiga12_Shot_1st_SoundSet", "Saiga12_Shot_Interior_1st_SoundSet" };
            soundSetShot[] = { "My_DF_Weapons_Shotguns_S12K_Shot_SoundSet", "Saiga12_Tail_SoundSet", "Saiga12_InteriorTail_SoundSet", "Saiga_Slapback_SoundSet", "Saiga_Tail_2D_SoundSet", "Saiga12_Shot_Interior_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Shotguns_S12K_silencer_SoundSet", "Saiga12_Tail_SoundSet", "Saiga12_InteriorTail_SoundSet", "Saiga_Slapback_SoundSet", "Saiga_Tail_2D_SoundSet", "Saiga12_Shot_Interior_SoundSet" } };
            reloadTime = 0.18;
            dispersion = 0.0015;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoRifle
        {};
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = {-0.02, 0.03, 0.1 };
                orientation[] = { 0, 60, 0 };
            };
            class Melee
            {
                position[] = {-0.02, 0.02, -0.12 };
                orientation[] = { 0, -60, 0 };
            };
        };
        class Particles
        {
            class OnFire
            {
                class SmokeCloud
                {
                    overrideParticle = "weapon_shot_winded_smoke";
                };
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_mp133_01";
                    ignoreIfSuppressed = 1;
                    illuminateWorld = 1;
                    positionOffset[] = { 0, 0, 0 };
                };
                class BadlyDamagedChamberSmoke
                {
                    overrideParticle = "weapon_shot_chamber_smoke";
                    overridePoint = "Nabojnicestart";
                    overrideDirectionPoint = "Nabojniceend";
                    onlyWithinHealthLabel[] = { 3, 4 };
                };
                class BadlyDamagedChamberSmokeRaise
                {
                    overrideParticle = "weapon_shot_chamber_smoke_raise";
                    overridePoint = "Nabojnicestart";
                    onlyWithinHealthLabel[] = { 3, 4 };
                };
            };
            class OnOverheating
            {
                maxOverheatingValue = 8;
                shotsToStartOverheating = 8;
                overheatingDecayInterval = 1;
                class SmokingBarrel1
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinOverheatLimits[] = { 0, 0.2 };
                    positionOffset[] = { 0, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrel2
                {
                    overrideParticle = "smoking_barrel";
                    onlyWithinOverheatLimits[] = { 0.2, 1 };
                    positionOffset[] = { 0, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteam
                {
                    overrideParticle = "smoking_barrel_steam";
                    positionOffset[] = { 0, 0, 0 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
                class OpenChamberSmoke
                {
                    onlyIfBoltIsOpen = 1;
                    overrideParticle = "smoking_barrel_small";
                    overridePoint = "Nabojnicestart";
                };
            };
            class OnBulletCasingEject
            {
                class ChamberSmokeRaise
                {
                    overrideParticle = "weapon_shot_chamber_smoke";
                    overridePoint = "Nabojnicestart";
                };
            };
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\Saiga\w_Saiga_states.anm";
        class AnimationSources
        {
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0.46;
            };
            class optic
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class PSOoptic
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class canted_optic
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class riser_optic
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class hydra_optic
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class hydra_optic2
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_Shotguns_Saiga12K: My_DF_Weapons_Shotguns_Saiga12K_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Shotguns_Saiga12K0";
        descriptionShort = "$STR_My_DF_Weapons_Shotguns_Saiga12K1";
        model = "\My_DF_Weapons_Shotguns\Saiga12K\Saiga12K.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Shotguns\Saiga12K\data\Saiga12K_co.paa",
            "My_DF_Weapons_Shotguns\Saiga12K\data\barrel\Saiga12K_barrel_co.paa",
            "My_DF_Weapons_Shotguns\Saiga12K\data\handguard\Saiga12K_handguard_co.paa",
            "My_DF_Weapons_Shotguns\Saiga12K\data\pisg\Saiga12K_pisg_co.paa",
            "My_DF_Weapons_Shotguns\Saiga12K\data\stock\Saiga12K_stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Shotguns\Saiga12K\data\Saiga12K.rvmat",
            "My_DF_Weapons_Shotguns\Saiga12K\data\barrel\Saiga12K_barrel.rvmat",
            "My_DF_Weapons_Shotguns\Saiga12K\data\handguard\Saiga12K_handguard_std.rvmat",
            "My_DF_Weapons_Shotguns\Saiga12K\data\pisg\Saiga12K_pisg.rvmat",
            "My_DF_Weapons_Shotguns\Saiga12K\data\stock\Saiga12K_stock.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 500;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Shotguns\Saiga12K\data\Saiga12K.rvmat",
                                "My_DF_Weapons_Shotguns\Saiga12K\data\barrel\Saiga12K_barrel.rvmat",
                                "My_DF_Weapons_Shotguns\Saiga12K\data\handguard\Saiga12K_handguard_std.rvmat",
                                "My_DF_Weapons_Shotguns\Saiga12K\data\pisg\Saiga12K_pisg.rvmat",
                                "My_DF_Weapons_Shotguns\Saiga12K\data\stock\Saiga12K_stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Shotguns\Saiga12K\data\Saiga12K_worn.rvmat",
                                "My_DF_Weapons_Shotguns\Saiga12K\data\barrel\Saiga12K_barrel_worn.rvmat",
                                "My_DF_Weapons_Shotguns\Saiga12K\data\handguard\Saiga12K_handguard_std_worn.rvmat",
                                "My_DF_Weapons_Shotguns\Saiga12K\data\pisg\Saiga12K_pisg_worn.rvmat",
                                "My_DF_Weapons_Shotguns\Saiga12K\data\stock\Saiga12K_stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Shotguns\Saiga12K\data\Saiga12K_damage.rvmat",
                                "My_DF_Weapons_Shotguns\Saiga12K\data\barrel\Saiga12K_barrel_damage.rvmat",
                                "My_DF_Weapons_Shotguns\Saiga12K\data\handguard\Saiga12K_handguard_std_damage.rvmat",
                                "My_DF_Weapons_Shotguns\Saiga12K\data\pisg\Saiga12K_pisg_damage.rvmat",
                                "My_DF_Weapons_Shotguns\Saiga12K\data\stock\Saiga12K_stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Shotguns\Saiga12K\data\Saiga12K_damage.rvmat",
                                "My_DF_Weapons_Shotguns\Saiga12K\data\barrel\Saiga12K_barrel_damage.rvmat",
                                "My_DF_Weapons_Shotguns\Saiga12K\data\handguard\Saiga12K_handguard_std_damage.rvmat",
                                "My_DF_Weapons_Shotguns\Saiga12K\data\pisg\Saiga12K_pisg_damage.rvmat",
                                "My_DF_Weapons_Shotguns\Saiga12K\data\stock\Saiga12K_stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Shotguns\Saiga12K\data\Saiga12K_destruct.rvmat",
                                "My_DF_Weapons_Shotguns\Saiga12K\data\barrel\Saiga12K_barrel_destruct.rvmat",
                                "My_DF_Weapons_Shotguns\Saiga12K\data\handguard\Saiga12K_handguard_std_destruct.rvmat",
                                "My_DF_Weapons_Shotguns\Saiga12K\data\pisg\Saiga12K_pisg_destruct.rvmat",
                                "My_DF_Weapons_Shotguns\Saiga12K\data\stock\Saiga12K_stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
};
class CfgMagazines
{
    class My_DF_Weapons_Magazine_Base;
    class My_DF_Weapons_Shotguns_Saiga12K_10RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Shotguns_Saiga12K_10RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Shotguns_Saiga12K_10RndMag1";
        model = "\My_DF_Weapons_Shotguns\Saiga12K\Mag\10RndMag\Saiga12K_10RndMag.p3d";
        weight = 300;
        weightPerQuantityUnit = 20;
        itemSize[] = { 1, 3 };
        count = 10;
        ammo = "Bullet_12GaugePellets";
        ammoItems[] = {
            "My_DF_Weapons_Ammo_12Gauge_Dragon",
            "My_DF_Weapons_Ammo_12Gauge_7mmBuckshot",
            "My_DF_Weapons_Ammo_12Gauge_8mmBuckshot",
            "My_DF_Weapons_Ammo_12Gauge_AP20",
            "My_DF_Weapons_Ammo_12Gauge_Arrow",
            "My_DF_Weapons_Ammo_12Gauge_RIP",
            "My_DF_Weapons_Ammo_12Gauge_FTX",
            "My_DF_Weapons_Ammo_12Gauge_GT",
            "Ammo_12gaPellets",
            "Ammo_12gaSlug",
            "Ammo_12gaRubberSlug",
            "Ammo_12gaBeanbag"
        };
        tracersEvery = 0;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Shotguns\Saiga12K\Mag\10RndMag\data\Saiga12K_10RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Shotguns\Saiga12K\Mag\10RndMag\data\Saiga12K_10RndMag.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Shotguns\Saiga12K\Mag\10RndMag\data\Saiga12K_10RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Shotguns\Saiga12K\Mag\10RndMag\data\Saiga12K_10RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Shotguns\Saiga12K\Mag\10RndMag\data\Saiga12K_10RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Shotguns\Saiga12K\Mag\10RndMag\data\Saiga12K_10RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Shotguns\Saiga12K\Mag\10RndMag\data\Saiga12K_10RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class AnimationSources
        {
            class bullet_1
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_Shotguns_Saiga12K_24RndDrumMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Shotguns_Saiga12K_24RndDrumMag0";
        descriptionShort = "$STR_My_DF_Weapons_Shotguns_Saiga12K_24RndDrumMag1";
        model = "\My_DF_Weapons_Shotguns\Saiga12K\Mag\24RndDrumMag\Saiga12K_24RndDrumMag.p3d";
        weight = 600;
        weightPerQuantityUnit = 20;
        itemSize[] = { 2, 2 };
        count = 24;
        ammo = "Bullet_12GaugePellets";
        ammoItems[] = {
            "My_DF_Weapons_Ammo_12Gauge_Dragon",
            "My_DF_Weapons_Ammo_12Gauge_7mmBuckshot",
            "My_DF_Weapons_Ammo_12Gauge_8mmBuckshot",
            "My_DF_Weapons_Ammo_12Gauge_AP20",
            "My_DF_Weapons_Ammo_12Gauge_Arrow",
            "My_DF_Weapons_Ammo_12Gauge_RIP",
            "My_DF_Weapons_Ammo_12Gauge_FTX",
            "My_DF_Weapons_Ammo_12Gauge_GT",
            "Ammo_12gaPellets",
            "Ammo_12gaSlug",
            "Ammo_12gaRubberSlug",
            "Ammo_12gaBeanbag"
        };
        tracersEvery = 0;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Shotguns\Saiga12K\Mag\24RndDrumMag\data\Saiga12K_24RndDrumMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Shotguns\Saiga12K\Mag\24RndDrumMag\data\Saiga12K_24RndDrumMag.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Shotguns\Saiga12K\Mag\24RndDrumMag\data\Saiga12K_24RndDrumMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Shotguns\Saiga12K\Mag\24RndDrumMag\data\Saiga12K_24RndDrumMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Shotguns\Saiga12K\Mag\24RndDrumMag\data\Saiga12K_24RndDrumMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Shotguns\Saiga12K\Mag\24RndDrumMag\data\Saiga12K_24RndDrumMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Shotguns\Saiga12K\Mag\24RndDrumMag\data\Saiga12K_24RndDrumMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class AnimationSources
        {
            class bullet_1
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_2
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_Shotguns_Saiga12K_5RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Shotguns_Saiga12K_5RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Shotguns_Saiga12K_5RndMag1";
        model = "\My_DF_Weapons_Shotguns\Saiga12K\Mag\5RndMag\Saiga12K_5RndMag.p3d";
        weight = 200;
        weightPerQuantityUnit = 20;
        itemSize[] = { 1, 2 };
        count = 5;
        ammo = "Bullet_12GaugePellets";
        ammoItems[] = {
            "My_DF_Weapons_Ammo_12Gauge_Dragon",
            "My_DF_Weapons_Ammo_12Gauge_7mmBuckshot",
            "My_DF_Weapons_Ammo_12Gauge_8mmBuckshot",
            "My_DF_Weapons_Ammo_12Gauge_AP20",
            "My_DF_Weapons_Ammo_12Gauge_Arrow",
            "My_DF_Weapons_Ammo_12Gauge_RIP",
            "My_DF_Weapons_Ammo_12Gauge_FTX",
            "My_DF_Weapons_Ammo_12Gauge_GT",
            "Ammo_12gaPellets",
            "Ammo_12gaSlug",
            "Ammo_12gaRubberSlug",
            "Ammo_12gaBeanbag"
        };
        tracersEvery = 0;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Shotguns\Saiga12K\Mag\5RndMag\data\Saiga12K_5RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Shotguns\Saiga12K\Mag\5RndMag\data\Saiga12K_5RndMag.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Shotguns\Saiga12K\Mag\5RndMag\data\Saiga12K_5RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Shotguns\Saiga12K\Mag\5RndMag\data\Saiga12K_5RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Shotguns\Saiga12K\Mag\5RndMag\data\Saiga12K_5RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Shotguns\Saiga12K\Mag\5RndMag\data\Saiga12K_5RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Shotguns\Saiga12K\Mag\5RndMag\data\Saiga12K_5RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class AnimationSources
        {
            class bullet_1
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_2
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
};