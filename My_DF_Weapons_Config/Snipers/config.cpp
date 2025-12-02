class CfgPatches
{
	class My_DF_Weapons_Snipers_config
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"My_DF_Weapons_Snipers_AWM",
			"My_DF_Weapons_Snipers_M700",
			"My_DF_Weapons_Snipers_R93",
			"My_DF_Weapons_Snipers_SV98",
			"My_DF_Weapons_Magazine"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Mode_Single;
class OpticsInfoRifle;
class cfgWeapons
{
    class BoltActionRifle_ExternalMagazine_Base;
    class My_DF_Weapons_Snipers_AWM_Base: BoltActionRifle_ExternalMagazine_Base
    {
        scope = 0;
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.25;
        ObstructionDistance = 1.2;
        barrelArmor = 2;
        initSpeedMultiplier = 1.15;
        ejectType = 0;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2.2, 2.2, 0.85 };
        spawnDamageRange[] = { 0, 0.6 };
        itemSize[] = { 9, 3 };
        weight = 5800;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = { "My_DF_Weapons_Ammo_338_LapMag" };
        magazines[] = { "My_DF_Weapons_Snipers_AWM_5RndMag" };
        magazineSwitchTime = 0.45;
        attachments[] = {
            "DF_handguard_AWM",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_barrel_AWM",
            "DF_muzzle_AWM",
            "DF_Pendant"
        };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "handguard",
            "barrel"
        };
        hiddenSelections[] = {
            "rec",
            "handguard",
            "barrel"
        };
        class NoiseShoot
        {
            strength = 100;
            type = "shot";
        };
        modes[] = { "Single" };
        class Single: Mode_Single
        {
            soundSetShot[] = { "My_DF_Weapons_Snipers_AWM_Shot_SoundSet", "SV98_Shot_interior_SoundSet", "SV98_Tail_SoundSet", "SV98_InteriorTail_SoundSet", "SV98_Tail_2D_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Snipers_AWM_silencer_SoundSet", "SV98_silencerHomeMadeTail_SoundSet", "SV98_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 1;
            recoil = "SV98Recoil";
            dispersion = 0.0005;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoRifle
        {
            memoryPointCamera = "eye";
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 600;
            discreteDistance[] = { 100, 200, 300, 400, 500, 600 };
            discreteDistanceInitIndex = 0;
        };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = { 0.02, -0.02, -0.02 };
                orientation[] = { 0, -30, 0 };
            };
            class Melee
            {
                position[] = { 0.02, 0, 0.01 };
                orientation[] = { 0, 30, 0 };
            };
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\SSG82\w_SSG82_states.anm";
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_cz527_01";
                    ignoreIfSuppressed = 1;
                    illuminateWorld = 1;
                    positionOffset[] = {-0.05, 0, 0 };
                };
            };
            class OnOverheating
            {
                maxOverheatingValue = 1;
                shotsToStartOverheating = 1;
                overheatingDecayInterval = 0.5;
                class SmokingBarrel1
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinOverheatLimits[] = { 0.1, 1 };
                    positionOffset[] = { 0, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
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
        class AnimationSources
        {
            class sup
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
            class canted_optic
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
    class My_DF_Weapons_Snipers_AWM: My_DF_Weapons_Snipers_AWM_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Snipers_AWM0";
        descriptionShort = "$STR_My_DF_Weapons_Snipers_AWM1";
        model = "\My_DF_Weapons_Snipers\AWM\AWM.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Snipers\AWM\data\AWM_co.paa",
            "My_DF_Weapons_Snipers\AWM\data\handguard\AWM_handguard_co.paa",
            "My_DF_Weapons_Snipers\AWM\data\barrel\AWM_barrel_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Snipers\AWM\data\AWM.rvmat",
            "My_DF_Weapons_Snipers\AWM\data\handguard\AWM_handguard.rvmat",
            "My_DF_Weapons_Snipers\AWM\data\barrel\AWM_barrel.rvmat"
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
                                "My_DF_Weapons_Snipers\AWM\data\AWM.rvmat",
                                "My_DF_Weapons_Snipers\AWM\data\handguard\AWM_handguard.rvmat",
                                "My_DF_Weapons_Snipers\AWM\data\barrel\AWM_barrel.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Snipers\AWM\data\AWM_worn.rvmat",
                                "My_DF_Weapons_Snipers\AWM\data\handguard\AWM_handguard_worn.rvmat",
                                "My_DF_Weapons_Snipers\AWM\data\barrel\AWM_barrel_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Snipers\AWM\data\AWM_damage.rvmat",
                                "My_DF_Weapons_Snipers\AWM\data\handguard\AWM_handguard_damage.rvmat",
                                "My_DF_Weapons_Snipers\AWM\data\barrel\AWM_barrel_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Snipers\AWM\data\AWM_damage.rvmat",
                                "My_DF_Weapons_Snipers\AWM\data\handguard\AWM_handguard_damage.rvmat",
                                "My_DF_Weapons_Snipers\AWM\data\barrel\AWM_barrel_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Snipers\AWM\data\AWM_destruct.rvmat",
                                "My_DF_Weapons_Snipers\AWM\data\handguard\AWM_handguard_destructe.rvmat",
                                "My_DF_Weapons_Snipers\AWM\data\barrel\AWM_barrel_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Snipers_M700_Base: BoltActionRifle_ExternalMagazine_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_Snipers\M700\M700.p3d";
        attachments[] = {
            "DF_handguard_M700",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_barrel_M700", //AWMLong&R93Short
            "DF_muzzle",
            "DF_Pendant"
        };
        animName = "cz527";
        weight = 3300;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        itemSize[] = { 8, 3 };
        opticsFlare = 0;
        winchesterTypeOpticsMount = 1;
        ironsightsExcludingOptics[] = { "HuntingOptic" };
        WeaponLength = 1.1;
        ObstructionDistance = 0.925;
        barrelArmor = 1.6;
        initSpeedMultiplier = 1.15;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = { "My_DF_Weapons_Ammo_762x51_BPZ", "My_DF_Weapons_Ammo_762x51_M61", "My_DF_Weapons_Ammo_762x51_M62", "My_DF_Weapons_Ammo_762x51_M80", "My_DF_Weapons_Ammo_762x51_UltraNosler" };
        magazines[] = { "My_DF_Weapons_Snipers_M700_5RndMag", "My_DF_Weapons_Snipers_M700_10RndMag" };
        magazineSwitchTime = 0.38;
        ejectType = 0;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2.2, 2.2, 0.85 };
        simpleHiddenSelections[] = {
            "bullet",
            "hide_barrel",
            "handguard",
            "barrel",
            "sight",
            "frosight",
            "frosight2"
        };
        hiddenSelections[] = {
            "rec",
            "barrel",
            "frosight",
            "frosight2",
            "handguard",
            "sight"
        };
        class NoiseShoot
        {
            strength = 100;
            type = "shot";
        };
        modes[] = { "Single" };
        class Single: Mode_Single
        {
            soundSetShot[] = { "My_DF_Weapons_Snipers_M700_Shot_SoundSet", "CZ550_Shot_iterior_SoundSet", "CZ550_Tail_SoundSet", "CZ550_InteriorTail_SoundSet", "CZ550_Tail_2D_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Snipers_M700_silencer_SoundSet", "CZ550_silencerHomeMadeTail_SoundSet", "CZ550_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 1;
            dispersion = 0.00075;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoRifle
        {
            memoryPointCamera = "eye";
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 600;
            discreteDistance[] = { 100, 200, 300, 400, 500, 600 };
            discreteDistanceInitIndex = 0;
        };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = { 0, -0.02, -0.03 };
                orientation[] = { 0, -30, 0 };
            };
            class Melee
            {
                position[] = { 0, -0.03, 0.02 };
                orientation[] = { 0, 30, 0 };
            };
        };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_cz527_01";
                    ignoreIfSuppressed = 1;
                    illuminateWorld = 1;
                    positionOffset[] = {-0.05, 0, 0 };
                };
                class ChamberSmoke
                {
                    overrideParticle = "weapon_shot_chamber_smoke";
                    overridePoint = "Nabojnicestart";
                    overrideDirectionPoint = "Nabojniceend";
                };
            };
            class OnOverheating
            {
                maxOverheatingValue = 1;
                shotsToStartOverheating = 1;
                overheatingDecayInterval = 0.5;
                class SmokingBarrel1
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinOverheatLimits[] = { 0.1, 1 };
                    positionOffset[] = { 0, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
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
        weaponStateAnim = "dz\anims\anm\player\reloads\cz550\w_cz550_states.anm";
        class AnimationSources
        {
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class SMGmuzzle
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
            class canted_optic
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
    class My_DF_Weapons_Snipers_M700: My_DF_Weapons_Snipers_M700_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Snipers_M7000";
        descriptionShort = "$STR_My_DF_Weapons_Snipers_M7001";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Snipers\M700\data\M700_co.paa",
            "My_DF_Weapons_Snipers\M700\data\barrel\M700_barrel_co.paa",
            "My_DF_Weapons_Snipers\M700\data\frosight\M700_frosight_co.paa",
            "My_DF_Weapons_Snipers\M700\data\frosight\M700_frosight_co.paa",
            "My_DF_Weapons_Snipers\M700\data\handguard\M700_handguard_co.paa",
            "My_DF_Weapons_Snipers\M700\data\sight\M700_sight_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Snipers\M700\data\M700.rvmat",
            "My_DF_Weapons_Snipers\M700\data\barrel\M700_barrel.rvmat",
            "My_DF_Weapons_Snipers\M700\data\frosight\M700_frosight.rvmat",
            "My_DF_Weapons_Snipers\M700\data\frosight\M700_frosight.rvmat",
            "My_DF_Weapons_Snipers\M700\data\handguard\M700_handguard.rvmat",
            "My_DF_Weapons_Snipers\M700\data\sight\M700_sight.rvmat"
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
                                "My_DF_Weapons_Snipers\M700\data\M700.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\barrel\M700_barrel.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\frosight\M700_frosight.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\frosight\M700_frosight.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\handguard\M700_handguard.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\sight\M700_sight.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Snipers\M700\data\M700_worn.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\barrel\M700_barrel_worn.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\frosight\M700_frosight_worn.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\frosight\M700_frosight_worn.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\handguard\M700_handguard_worn.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\sight\M700_sight_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Snipers\M700\data\M700_damage.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\barrel\M700_barrel_damage.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\frosight\M700_frosight_damage.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\frosight\M700_frosight_damage.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\handguard\M700_handguard_damage.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\sight\M700_sight_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Snipers\M700\data\M700_damage.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\barrel\M700_barrel_damage.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\frosight\M700_frosight_damage.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\frosight\M700_frosight_damage.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\handguard\M700_handguard_damage.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\sight\M700_sight_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Snipers\M700\data\M700_destruct.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\barrel\M700_barrel_destruct.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\frosight\M700_frosight_destruct.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\frosight\M700_frosight_destruct.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\handguard\M700_handguard_destruct.rvmat",
                                "My_DF_Weapons_Snipers\M700\data\sight\M700_sight_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Snipers_R93_Base: BoltActionRifle_ExternalMagazine_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_Snipers\R93\R93.p3d";
        attachments[] = {
            "DF_handguard_R93",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_barrel_R93",
            "DF_R93HeatShield",
            "DF_muzzle",
            "DF_bipod",
            "DF_Pendant"
        };
        spawnDamageRange[] = { 0, 0.6 };
        itemSize[] = { 7, 3 };
        weight = 5000;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "My_DF_Weapons_Ammo_762x51_BPZ",
            "My_DF_Weapons_Ammo_762x51_M61",
            "My_DF_Weapons_Ammo_762x51_M62",
            "My_DF_Weapons_Ammo_762x51_M80",
            "My_DF_Weapons_Ammo_762x51_UltraNosler"
        };
        magazines[] = { "My_DF_Weapons_Snipers_R93_10RndMag", "My_DF_Weapons_Snipers_R93_15RndExtMag" };
        magazineSwitchTime = 0.45;
        simpleHiddenSelections[] = { "hide_barrel", "barrel" };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.25;
        ObstructionDistance = 1.2;
        barrelArmor = 2;
        initSpeedMultiplier = 1.15;
        ejectType = 0;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2.2, 2.2, 0.85 };
        hiddenSelections[] = { "rec", "barrel", "stock" };
        class NoiseShoot
        {
            strength = 100;
            type = "shot";
        };
        modes[] = { "Single" };
        class Single: Mode_Single
        {
            soundSetShot[] = { "My_DF_Weapons_Snipers_R93_Shot_SoundSet", "SV98_Shot_interior_SoundSet", "SV98_Tail_SoundSet", "SV98_InteriorTail_SoundSet", "SV98_Tail_2D_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Snipers_R93_silencer_SoundSet", "SV98_silencerHomeMadeTail_SoundSet", "SV98_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 1;
            recoil = "SV98Recoil";
            dispersion = 0.0005;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoRifle
        {
            memoryPointCamera = "eye";
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 600;
            discreteDistance[] = { 100, 200, 300, 400, 500, 600 };
            discreteDistanceInitIndex = 0;
        };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = { 0.02, -0.02, -0.02 };
                orientation[] = { 0, -30, 0 };
            };
            class Melee
            {
                position[] = { 0.02, 0, 0.01 };
                orientation[] = { 0, 30, 0 };
            };
        };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_cz527_01";
                    ignoreIfSuppressed = 1;
                    illuminateWorld = 1;
                    positionOffset[] = {-0.05, 0, 0 };
                };
            };
            class OnOverheating
            {
                maxOverheatingValue = 1;
                shotsToStartOverheating = 1;
                overheatingDecayInterval = 0.5;
                class SmokingBarrel1
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinOverheatLimits[] = { 0.1, 1 };
                    positionOffset[] = { 0, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
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
        weaponStateAnim = "dz\anims\anm\player\reloads\SSG82\w_SSG82_states.anm";
        class AnimationSources
        {
            class HeatShield
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0.53;
            };
            class HeatShield2
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 1;
            };
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0.53;
            };
            class SMGmuzzle
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
            class canted_optic
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
    class My_DF_Weapons_Snipers_R93: My_DF_Weapons_Snipers_R93_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Snipers_R930";
        descriptionShort = "$STR_My_DF_Weapons_Snipers_R931";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Snipers\R93\data\R93_co.paa",
            "My_DF_Weapons_Snipers\R93\data\barrel\R93_barrel_co.paa",
            "My_DF_Weapons_Snipers\R93\data\stock\R93_stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Snipers\R93\data\R93.rvmat",
            "My_DF_Weapons_Snipers\R93\data\barrel\R93_barrel.rvmat",
            "My_DF_Weapons_Snipers\R93\data\stock\R93_stock.rvmat"
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
                                "My_DF_Weapons_Snipers\R93\data\R93.rvmat",
                                "My_DF_Weapons_Snipers\R93\data\barrel\R93_barrel.rvmat",
                                "My_DF_Weapons_Snipers\R93\data\stock\R93_stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Snipers\R93\data\R93_worn.rvmat",
                                "My_DF_Weapons_Snipers\R93\data\barrel\R93_barrel_worn.rvmat",
                                "My_DF_Weapons_Snipers\R93\data\stock\R93_stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Snipers\R93\data\R93_damage.rvmat",
                                "My_DF_Weapons_Snipers\R93\data\barrel\R93_barrel_damage.rvmat",
                                "My_DF_Weapons_Snipers\R93\data\stock\R93_stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Snipers\R93\data\R93_damage.rvmat",
                                "My_DF_Weapons_Snipers\R93\data\barrel\R93_barrel_damage.rvmat",
                                "My_DF_Weapons_Snipers\R93\data\stock\R93_stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Snipers\R93\data\R93_destruct.rvmat",
                                "My_DF_Weapons_Snipers\R93\data\barrel\R93_barrel_destruct.rvmat",
                                "My_DF_Weapons_Snipers\R93\data\stock\R93_stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Snipers_SV98_Base: BoltActionRifle_ExternalMagazine_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_Snipers\SV98\SV98.p3d";
        attachments[] = {
            "DF_barrel_SV98",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_frog_up",
            "DF_frog_left",
            "DF_frog_right",
            "DF_muzzle",
            "DF_bipod_SV98",
            "DF_Pendant"
        };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.25;
        ObstructionDistance = 1.2;
        barrelArmor = 2;
        initSpeedMultiplier = 1.15;
        ejectType = 0;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2.2, 2.2, 0.85 };
        spawnDamageRange[] = { 0, 0.6 };
        itemSize[] = { 9, 3 };
        weight = 5800;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = { "Ammo_762x54", "Ammo_762x54Tracer", "My_DF_Weapons_Ammo_762x54R_BT", "My_DF_Weapons_Ammo_762x54R_LPS", "My_DF_Weapons_Ammo_762x54R_SNB", "My_DF_Weapons_Ammo_762x54R_T46M" };
        magazines[] = { "Mag_SV98_10rnd", "My_DF_Weapons_Snipers_SV98_7RndMag" };
        magazineSwitchTime = 0.45;
        simpleHiddenSelections[] = {
            "hide_barrel",
            "handguard",
            "barrel",
            "rail_l",
            "rail_r"
        };
        hiddenSelections[] = {
            "rec",
            "barrel",
            "pisg",
            "stock"
        };
        class NoiseShoot
        {
            strength = 100;
            type = "shot";
        };
        modes[] = { "Single" };
        class Single: Mode_Single
        {
            soundSetShot[] = { "My_DF_Weapons_Snipers_SV98_Shot_SoundSet", "SV98_Shot_interior_SoundSet", "SV98_Tail_SoundSet", "SV98_InteriorTail_SoundSet", "SV98_Tail_2D_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Snipers_SV98_silencer_SoundSet", "SV98_silencerHomeMadeTail_SoundSet", "SV98_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 1;
            recoil = "SV98Recoil";
            dispersion = 0.0005;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoRifle
        {
            memoryPointCamera = "eye";
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 600;
            discreteDistance[] = { 100, 200, 300, 400, 500, 600 };
            discreteDistanceInitIndex = 0;
        };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = { 0.02, -0.02, -0.02 };
                orientation[] = { 0, -30, 0 };
            };
            class Melee
            {
                position[] = { 0.02, 0, 0.01 };
                orientation[] = { 0, 30, 0 };
            };
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\SSG82\w_SSG82_states.anm";
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_cz527_01";
                    ignoreIfSuppressed = 1;
                    illuminateWorld = 1;
                    positionOffset[] = {-0.05, 0, 0 };
                };
            };
            class OnOverheating
            {
                maxOverheatingValue = 1;
                shotsToStartOverheating = 1;
                overheatingDecayInterval = 0.5;
                class SmokingBarrel1
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinOverheatLimits[] = { 0.1, 1 };
                    positionOffset[] = { 0, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
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
        class AnimationSources
        {
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0.58;
            };
            class SMGmuzzle
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
            class canted_optic
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
    class My_DF_Weapons_Snipers_SV98: My_DF_Weapons_Snipers_SV98_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Snipers_SV980";
        descriptionShort = "$STR_My_DF_Weapons_Snipers_SV981";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Snipers\SV98\data\SV98_co.paa",
            "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel_co.paa",
            "My_DF_Weapons_Snipers\SV98\data\pisg\SV98_pisg_co.paa",
            "My_DF_Weapons_Snipers\SV98\data\stock\SV98_stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Snipers\SV98\data\SV98.rvmat",
            "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel.rvmat",
            "My_DF_Weapons_Snipers\SV98\data\pisg\SV98_pisg.rvmat",
            "My_DF_Weapons_Snipers\SV98\data\stock\SV98_stock.rvmat"
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
                                "My_DF_Weapons_Snipers\SV98\data\SV98.rvmat",
                                "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel.rvmat",
                                "My_DF_Weapons_Snipers\SV98\data\pisg\SV98_pisg.rvmat",
                                "My_DF_Weapons_Snipers\SV98\data\stock\SV98_stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Snipers\SV98\data\SV98_worn.rvmat",
                                "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel_worn.rvmat",
                                "My_DF_Weapons_Snipers\SV98\data\pisg\SV98_pisg_worn.rvmat",
                                "My_DF_Weapons_Snipers\SV98\data\stock\SV98_stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Snipers\SV98\data\SV98_damage.rvmat",
                                "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel_damage.rvmat",
                                "My_DF_Weapons_Snipers\SV98\data\pisg\SV98_pisg_damage.rvmat",
                                "My_DF_Weapons_Snipers\SV98\data\stock\SV98_stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Snipers\SV98\data\SV98_damage.rvmat",
                                "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel_damage.rvmat",
                                "My_DF_Weapons_Snipers\SV98\data\pisg\SV98_pisg_damage.rvmat",
                                "My_DF_Weapons_Snipers\SV98\data\stock\SV98_stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Snipers\SV98\data\SV98_destruct.rvmat",
                                "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel_destruct.rvmat",
                                "My_DF_Weapons_Snipers\SV98\data\pisg\SV98_pisg_destruct.rvmat",
                                "My_DF_Weapons_Snipers\SV98\data\stock\SV98_stock_destruct.rvmat"
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
    class My_DF_Weapons_Snipers_AWM_5RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Snipers_AWM_5RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Snipers_AWM_5RndMag1";
        model = "\My_DF_Weapons_Snipers\AWM\Mag\5RndMag\AWM_5RndMag.p3d";
        weight = 500;
        weightPerQuantityUnit = 20;
        itemSize[] = { 2, 2 };
        count = 5;
        ammo = "Bullet_DF_338_LapMag";
        ammoItems[] = { "My_DF_Weapons_Ammo_338_LapMag" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Snipers\AWM\Mag\5RndMag\data\AWM_5RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Snipers\AWM\Mag\5RndMag\data\AWM_5RndMag.rvmat"
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
                                "My_DF_Weapons_Snipers\AWM\Mag\5RndMag\data\AWM_5RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Snipers\AWM\Mag\5RndMag\data\AWM_5RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Snipers\AWM\Mag\5RndMag\data\AWM_5RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Snipers\AWM\Mag\5RndMag\data\AWM_5RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Snipers\AWM\Mag\5RndMag\data\AWM_5RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class MagRifle_fill_in
                {
                    soundSet = "MagRifle_fill_in_SoundSet";
                    id = 1;
                };
                class MagRifle_fill_loop
                {
                    soundSet = "MagRifle_fill_loop_SoundSet";
                    id = 2;
                };
                class MagRifle_fill_out
                {
                    soundSet = "MagRifle_fill_out_SoundSet";
                    id = 3;
                };
                class MagRifle_empty_in
                {
                    soundSet = "MagRifle_empty_in_SoundSet";
                    id = 4;
                };
                class MagRifle_empty_loop
                {
                    soundSet = "MagRifle_empty_loop_SoundSet";
                    id = 5;
                };
                class MagRifle_empty_out
                {
                    soundSet = "MagRifle_empty_out_SoundSet";
                    id = 6;
                };
                class MagPistol_fill_in
                {
                    soundSet = "MagPistol_fill_in_SoundSet";
                    id = 7;
                };
                class MagPistol_fill_loop
                {
                    soundSet = "MagPistol_fill_loop_SoundSet";
                    id = 8;
                };
                class MagPistol_fill_out
                {
                    soundSet = "MagPistol_fill_out_SoundSet";
                    id = 9;
                };
                class MagPistol_empty_in
                {
                    soundSet = "MagPistol_empty_in_SoundSet";
                    id = 10;
                };
                class MagPistol_empty_loop
                {
                    soundSet = "MagPistol_empty_loop_SoundSet";
                    id = 11;
                };
                class MagPistol_empty_out
                {
                    soundSet = "MagPistol_empty_out_SoundSet";
                    id = 12;
                };
            };
        };
        class AnimationSources
        {
            class quickdraw
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 1;
            };
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
    class My_DF_Weapons_Snipers_M700_10RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Snipers_M700_10RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Snipers_M700_10RndMag1";
        model = "\My_DF_Weapons_Snipers\M700\Mag\10RndMag\M700_10RndMag.p3d";
        weight = 400;
        weightPerQuantityUnit = 10;
        itemSize[] = { 1, 2 };
        count = 10;
        ammo = "Bullet_DF_762x51_BPZ";
        ammoItems[] = {
            "My_DF_Weapons_Ammo_762x51_BPZ",
            "My_DF_Weapons_Ammo_762x51_M61",
            "My_DF_Weapons_Ammo_762x51_M62",
            "My_DF_Weapons_Ammo_762x51_M80",
            "My_DF_Weapons_Ammo_762x51_UltraNosler"
        };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Snipers\M700\Mag\10RndMag\data\M700_10RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Snipers\M700\Mag\10RndMag\data\M700_10RndMag.rvmat"
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
                                "My_DF_Weapons_Snipers\M700\Mag\10RndMag\data\M700_10RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Snipers\M700\Mag\10RndMag\data\M700_10RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Snipers\M700\Mag\10RndMag\data\M700_10RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Snipers\M700\Mag\10RndMag\data\M700_10RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Snipers\M700\Mag\10RndMag\data\M700_10RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class MagRifle_fill_in
                {
                    soundSet = "MagRifle_fill_in_SoundSet";
                    id = 1;
                };
                class MagRifle_fill_loop
                {
                    soundSet = "MagRifle_fill_loop_SoundSet";
                    id = 2;
                };
                class MagRifle_fill_out
                {
                    soundSet = "MagRifle_fill_out_SoundSet";
                    id = 3;
                };
                class MagRifle_empty_in
                {
                    soundSet = "MagRifle_empty_in_SoundSet";
                    id = 4;
                };
                class MagRifle_empty_loop
                {
                    soundSet = "MagRifle_empty_loop_SoundSet";
                    id = 5;
                };
                class MagRifle_empty_out
                {
                    soundSet = "MagRifle_empty_out_SoundSet";
                    id = 6;
                };
                class MagPistol_fill_in
                {
                    soundSet = "MagPistol_fill_in_SoundSet";
                    id = 7;
                };
                class MagPistol_fill_loop
                {
                    soundSet = "MagPistol_fill_loop_SoundSet";
                    id = 8;
                };
                class MagPistol_fill_out
                {
                    soundSet = "MagPistol_fill_out_SoundSet";
                    id = 9;
                };
                class MagPistol_empty_in
                {
                    soundSet = "MagPistol_empty_in_SoundSet";
                    id = 10;
                };
                class MagPistol_empty_loop
                {
                    soundSet = "MagPistol_empty_loop_SoundSet";
                    id = 11;
                };
                class MagPistol_empty_out
                {
                    soundSet = "MagPistol_empty_out_SoundSet";
                    id = 12;
                };
            };
        };
        class AnimationSources
        {
            class quickdraw
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 1;
            };
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
            class bullet_3
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_Snipers_M700_5RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Snipers_M700_5RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Snipers_M700_5RndMag1";
        model = "\My_DF_Weapons_Snipers\M700\Mag\5RndMag\M700_5RndMag.p3d";
        weight = 300;
        weightPerQuantityUnit = 10;
        itemSize[] = { 1, 1 };
        count = 5;
        ammo = "Bullet_DF_762x51_BPZ";
        ammoItems[] = {
            "My_DF_Weapons_Ammo_762x51_BPZ",
            "My_DF_Weapons_Ammo_762x51_M61",
            "My_DF_Weapons_Ammo_762x51_M62",
            "My_DF_Weapons_Ammo_762x51_M80",
            "My_DF_Weapons_Ammo_762x51_UltraNosler"
        };
        tracersEvery = 0;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Snipers\M700\Mag\5RndMag\data\M700_5RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Snipers\M700\Mag\5RndMag\data\M700_5RndMag.rvmat"
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
                                "My_DF_Weapons_Snipers\M700\Mag\5RndMag\data\M700_5RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Snipers\M700\Mag\5RndMag\data\M700_5RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Snipers\M700\Mag\5RndMag\data\M700_5RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Snipers\M700\Mag\5RndMag\data\M700_5RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Snipers\M700\Mag\5RndMag\data\M700_5RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class MagRifle_fill_in
                {
                    soundSet = "MagRifle_fill_in_SoundSet";
                    id = 1;
                };
                class MagRifle_fill_loop
                {
                    soundSet = "MagRifle_fill_loop_SoundSet";
                    id = 2;
                };
                class MagRifle_fill_out
                {
                    soundSet = "MagRifle_fill_out_SoundSet";
                    id = 3;
                };
                class MagRifle_empty_in
                {
                    soundSet = "MagRifle_empty_in_SoundSet";
                    id = 4;
                };
                class MagRifle_empty_loop
                {
                    soundSet = "MagRifle_empty_loop_SoundSet";
                    id = 5;
                };
                class MagRifle_empty_out
                {
                    soundSet = "MagRifle_empty_out_SoundSet";
                    id = 6;
                };
                class MagPistol_fill_in
                {
                    soundSet = "MagPistol_fill_in_SoundSet";
                    id = 7;
                };
                class MagPistol_fill_loop
                {
                    soundSet = "MagPistol_fill_loop_SoundSet";
                    id = 8;
                };
                class MagPistol_fill_out
                {
                    soundSet = "MagPistol_fill_out_SoundSet";
                    id = 9;
                };
                class MagPistol_empty_in
                {
                    soundSet = "MagPistol_empty_in_SoundSet";
                    id = 10;
                };
                class MagPistol_empty_loop
                {
                    soundSet = "MagPistol_empty_loop_SoundSet";
                    id = 11;
                };
                class MagPistol_empty_out
                {
                    soundSet = "MagPistol_empty_out_SoundSet";
                    id = 12;
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
            class bullet_3
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_Snipers_R93_10RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Snipers_R93_10RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Snipers_R93_10RndMag1";
        model = "\My_DF_Weapons_Snipers\R93\Mag\10RndMag\R93_10RndMag.p3d";
        weight = 400;
        weightPerQuantityUnit = 15;
        itemSize[] = { 1, 2 };
        count = 10;
        ammo = "Bullet_DF_762x51_BPZ";
        ammoItems[] = {
            "My_DF_Weapons_Ammo_762x51_BPZ",
            "My_DF_Weapons_Ammo_762x51_M61",
            "My_DF_Weapons_Ammo_762x51_M62",
            "My_DF_Weapons_Ammo_762x51_M80",
            "My_DF_Weapons_Ammo_762x51_UltraNosler"
        };
        tracersEvery = 0;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Snipers\R93\Mag\10RndMag\data\R93_10RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Snipers\R93\Mag\10RndMag\data\R93_10RndMag.rvmat"
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
                                "My_DF_Weapons_Snipers\R93\Mag\10RndMag\data\R93_10RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Snipers\R93\Mag\10RndMag\data\R93_10RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Snipers\R93\Mag\10RndMag\data\R93_10RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Snipers\R93\Mag\10RndMag\data\R93_10RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Snipers\R93\Mag\10RndMag\data\R93_10RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class MagRifle_fill_in
                {
                    soundSet = "MagRifle_fill_in_SoundSet";
                    id = 1;
                };
                class MagRifle_fill_loop
                {
                    soundSet = "MagRifle_fill_loop_SoundSet";
                    id = 2;
                };
                class MagRifle_fill_out
                {
                    soundSet = "MagRifle_fill_out_SoundSet";
                    id = 3;
                };
                class MagRifle_empty_in
                {
                    soundSet = "MagRifle_empty_in_SoundSet";
                    id = 4;
                };
                class MagRifle_empty_loop
                {
                    soundSet = "MagRifle_empty_loop_SoundSet";
                    id = 5;
                };
                class MagRifle_empty_out
                {
                    soundSet = "MagRifle_empty_out_SoundSet";
                    id = 6;
                };
                class MagPistol_fill_in
                {
                    soundSet = "MagPistol_fill_in_SoundSet";
                    id = 7;
                };
                class MagPistol_fill_loop
                {
                    soundSet = "MagPistol_fill_loop_SoundSet";
                    id = 8;
                };
                class MagPistol_fill_out
                {
                    soundSet = "MagPistol_fill_out_SoundSet";
                    id = 9;
                };
                class MagPistol_empty_in
                {
                    soundSet = "MagPistol_empty_in_SoundSet";
                    id = 10;
                };
                class MagPistol_empty_loop
                {
                    soundSet = "MagPistol_empty_loop_SoundSet";
                    id = 11;
                };
                class MagPistol_empty_out
                {
                    soundSet = "MagPistol_empty_out_SoundSet";
                    id = 12;
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
    class My_DF_Weapons_Snipers_R93_15RndExtMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Snipers_R93_15RndExtMag0";
        descriptionShort = "$STR_My_DF_Weapons_Snipers_R93_15RndExtMag1";
        model = "\My_DF_Weapons_Snipers\R93\Mag\15RndExtMag\R93_15RndExtMag.p3d";
        weight = 500;
        weightPerQuantityUnit = 15;
        itemSize[] = { 1, 2 };
        count = 15;
        ammo = "Bullet_DF_762x51_BPZ";
        ammoItems[] = {
            "My_DF_Weapons_Ammo_762x51_BPZ",
            "My_DF_Weapons_Ammo_762x51_M61",
            "My_DF_Weapons_Ammo_762x51_M62",
            "My_DF_Weapons_Ammo_762x51_M80",
            "My_DF_Weapons_Ammo_762x51_UltraNosler"
        };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Snipers\R93\Mag\15RndExtMag\data\R93_15RndExtMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Snipers\R93\Mag\15RndExtMag\data\R93_15RndExtMag.rvmat"
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
                                "My_DF_Weapons_Snipers\R93\Mag\15RndExtMag\data\R93_15RndExtMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Snipers\R93\Mag\15RndExtMag\data\R93_15RndExtMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Snipers\R93\Mag\15RndExtMag\data\R93_15RndExtMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Snipers\R93\Mag\15RndExtMag\data\R93_15RndExtMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Snipers\R93\Mag\15RndExtMag\data\R93_15RndExtMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class MagRifle_fill_in
                {
                    soundSet = "MagRifle_fill_in_SoundSet";
                    id = 1;
                };
                class MagRifle_fill_loop
                {
                    soundSet = "MagRifle_fill_loop_SoundSet";
                    id = 2;
                };
                class MagRifle_fill_out
                {
                    soundSet = "MagRifle_fill_out_SoundSet";
                    id = 3;
                };
                class MagRifle_empty_in
                {
                    soundSet = "MagRifle_empty_in_SoundSet";
                    id = 4;
                };
                class MagRifle_empty_loop
                {
                    soundSet = "MagRifle_empty_loop_SoundSet";
                    id = 5;
                };
                class MagRifle_empty_out
                {
                    soundSet = "MagRifle_empty_out_SoundSet";
                    id = 6;
                };
                class MagPistol_fill_in
                {
                    soundSet = "MagPistol_fill_in_SoundSet";
                    id = 7;
                };
                class MagPistol_fill_loop
                {
                    soundSet = "MagPistol_fill_loop_SoundSet";
                    id = 8;
                };
                class MagPistol_fill_out
                {
                    soundSet = "MagPistol_fill_out_SoundSet";
                    id = 9;
                };
                class MagPistol_empty_in
                {
                    soundSet = "MagPistol_empty_in_SoundSet";
                    id = 10;
                };
                class MagPistol_empty_loop
                {
                    soundSet = "MagPistol_empty_loop_SoundSet";
                    id = 11;
                };
                class MagPistol_empty_out
                {
                    soundSet = "MagPistol_empty_out_SoundSet";
                    id = 12;
                };
            };
        };
        class AnimationSources
        {
            class quickdraw
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 1;
            };
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
    class My_DF_Weapons_Snipers_SV98_7RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Snipers_SV98_7RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Snipers_SV98_7RndMag1";
        model = "\My_DF_Weapons_Snipers\SV98\Mag\7RndMag\SV98_7RndMag.p3d";
        weight = 400;
        weightPerQuantityUnit = 10;
        itemSize[] = { 2, 2 };
        count = 7;
        ammo = "Bullet_DF_762x54R_LPS";
        ammoItems[] = { "Ammo_762x54", "Ammo_762x54Tracer", "My_DF_Weapons_Ammo_762x54R_BT", "My_DF_Weapons_Ammo_762x54R_LPS", "My_DF_Weapons_Ammo_762x54R_SNB", "My_DF_Weapons_Ammo_762x54R_T46M" };
        tracersEvery = 0;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Snipers\SV98\Mag\7RndMag\data\SV98_7RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Snipers\SV98\Mag\7RndMag\data\SV98_7RndMag.rvmat"
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
                                "My_DF_Weapons_Snipers\SV98\Mag\7RndMag\data\SV98_7RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Snipers\SV98\Mag\7RndMag\data\SV98_7RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Snipers\SV98\Mag\7RndMag\data\SV98_7RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Snipers\SV98\Mag\7RndMag\data\SV98_7RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Snipers\SV98\Mag\7RndMag\data\SV98_7RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class MagRifle_fill_in
                {
                    soundSet = "MagRifle_fill_in_SoundSet";
                    id = 1;
                };
                class MagRifle_fill_loop
                {
                    soundSet = "MagRifle_fill_loop_SoundSet";
                    id = 2;
                };
                class MagRifle_fill_out
                {
                    soundSet = "MagRifle_fill_out_SoundSet";
                    id = 3;
                };
                class MagRifle_empty_in
                {
                    soundSet = "MagRifle_empty_in_SoundSet";
                    id = 4;
                };
                class MagRifle_empty_loop
                {
                    soundSet = "MagRifle_empty_loop_SoundSet";
                    id = 5;
                };
                class MagRifle_empty_out
                {
                    soundSet = "MagRifle_empty_out_SoundSet";
                    id = 6;
                };
                class MagPistol_fill_in
                {
                    soundSet = "MagPistol_fill_in_SoundSet";
                    id = 7;
                };
                class MagPistol_fill_loop
                {
                    soundSet = "MagPistol_fill_loop_SoundSet";
                    id = 8;
                };
                class MagPistol_fill_out
                {
                    soundSet = "MagPistol_fill_out_SoundSet";
                    id = 9;
                };
                class MagPistol_empty_in
                {
                    soundSet = "MagPistol_empty_in_SoundSet";
                    id = 10;
                };
                class MagPistol_empty_loop
                {
                    soundSet = "MagPistol_empty_loop_SoundSet";
                    id = 11;
                };
                class MagPistol_empty_out
                {
                    soundSet = "MagPistol_empty_out_SoundSet";
                    id = 12;
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
            class bullet_3
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
};