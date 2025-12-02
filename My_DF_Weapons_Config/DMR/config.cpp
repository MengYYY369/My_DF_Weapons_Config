class CfgPatches
{
	class My_DF_Weapons_DMR_config
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"My_DF_Weapons_Magazine",
			"My_DF_Weapons_DMR_M14",
			"My_DF_Weapons_DMR_Marlin",
			"My_DF_Weapons_DMR_Mini14",
			"My_DF_Weapons_DMR_PSG",
			"My_DF_Weapons_DMR_SKS",
			"My_DF_Weapons_DMR_SP9",
			"My_DF_Weapons_DMR_SR25",
			"My_DF_Weapons_DMR_SVD",
			"My_DF_Weapons_DMR_VSS"
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
    class Rifle_Base;
    class My_DF_Weapons_DMR_M14_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_DMR\M14\M14.p3d";
        itemSize[] = { 8, 3 };
        weight = 3000;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.118;
        ObstructionDistance = 0.82;
        barrelArmor = 2.2;
        initSpeedMultiplier = 1.23;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "Ammo_308Win",
            "Ammo_308WinTracer",
            "My_DF_Weapons_Ammo_762x51_BPZ",
            "My_DF_Weapons_Ammo_762x51_M61",
            "My_DF_Weapons_Ammo_762x51_M62",
            "My_DF_Weapons_Ammo_762x51_M80",
            "My_DF_Weapons_Ammo_762x51_UltraNosler"
        };
        magazines[] = {
            "Mag_M14_10Rnd",
            "Mag_M14_20Rnd",
            "My_DF_Weapons_DMR_M14_10RndMag",
            "My_DF_Weapons_DMR_M14_20RndMag",
            "My_DF_Weapons_DMR_M14_30RndMag",
            "My_DF_Weapons_DMR_M14_50RndMag"
        };
        attachments[] = {
            "DF_cheekpad",
            "DF_handguard_M14",
            "DF_barrel_M14",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_mount_M14",
            "DF_muzzle",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.45;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2.4, 2.4, 0.9 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "barrel",
            "handguard_1",
            "handguard_2"
        };
        hiddenSelections[] = {
            "barrel",
            "handguard_1",
            "handguard_2",
            "rec"
        };
        class NoiseShoot
        {
            strength = 100;
            type = "shot";
        };
        modes[] = { "FullAuto", "SemiAuto" };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_DMR_M14_Shot_SoundSet", "M14_Shot_iterior_SoundSet", "M14_Tail_SoundSet", "M14_InteriorTail_SoundSet", "M14_Tail_2D_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_DMR_M14_silencer_SoundSet", "M14_silencerHomeMadeTail_SoundSet", "M14_silencerInteriorHomeMadeTail_SoundSet" } };
            envShootingDecrease = 0.8;
            envShootingDecreaseExt[] = { 0.05, 0.05 };
            reloadTime = 0.12;
            recoil = "recoil_m14";
            recoilProne = "recoil_m14";
            dispersion = 0.00045;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = { "My_DF_Weapons_DMR_M14_Shot_SoundSet", "M14_Shot_iterior_SoundSet", "M14_Tail_SoundSet", "M14_InteriorTail_SoundSet", "M14_Tail_2D_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_DMR_M14_silencer_SoundSet", "M14_silencerHomeMadeTail_SoundSet", "M14_silencerInteriorHomeMadeTail_SoundSet" } };
            envShootingDecrease = 0.8;
            envShootingDecreaseExt[] = { 0.05, 0.05 };
            reloadTime = 0.08;
            recoil = "recoil_m14";
            recoilProne = "recoil_m14";
            dispersion = 0.00045;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoRifle
        {
            memoryPointCamera = "eye";
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 100;
            discreteDistance[] = { 50, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100 };
            discreteDistanceInitIndex = 0;
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\M14\w_M14_states.anm";
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = {-0.1, 0, 0.03 };
                orientation[] = { 0, 0, 0 };
            };
            class Melee
            {
                position[] = {-0.1, 0, -0.04 };
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
                    overrideParticle = "weapon_shot_mosin9130_01";
                    ignoreIfSuppressed = 1;
                    illuminateWorld = 1;
                    positionOffset[] = { 0, 0, 0 };
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
                maxOverheatingValue = 8;
                shotsToStartOverheating = 4;
                overheatingDecayInterval = 1;
                class SmokingBarrel1
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinOverheatLimits[] = { 0, 0.6 };
                    positionOffset[] = { 0.1, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrel2
                {
                    overrideParticle = "smoking_barrel";
                    onlyWithinOverheatLimits[] = { 0.6, 1 };
                    positionOffset[] = { 0.1, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0.3, 0, 0 };
                    onlyWithinRainLimits[] = { 0.2, 0.5 };
                };
                class SmokingBarrelHotSteam
                {
                    overrideParticle = "smoking_barrel_steam";
                    positionOffset[] = { 0.3, 0, 0 };
                    onlyWithinRainLimits[] = { 0.5, 1 };
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
        class AnimationSources
        {
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0.74;
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
    class My_DF_Weapons_DMR_M14: My_DF_Weapons_DMR_M14_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_DMR_M140";
        descriptionShort = "$STR_My_DF_Weapons_DMR_M141";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\M14\data\barrel\M14_barrel_co.paa",
            "My_DF_Weapons_DMR\M14\data\handguard\M14_handguard_1_co.paa",
            "My_DF_Weapons_DMR\M14\data\handguard\M14_handguard_2_co.paa",
            "My_DF_Weapons_DMR\M14\data\M14_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\M14\data\barrel\M14_barrel.rvmat",
            "My_DF_Weapons_DMR\M14\data\handguard\M14_handguard_1.rvmat",
            "My_DF_Weapons_DMR\M14\data\handguard\M14_handguard_2.rvmat",
            "My_DF_Weapons_DMR\M14\data\M14.rvmat"
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
                                "My_DF_Weapons_DMR\M14\data\barrel\M14_barrel.rvmat",
                                "My_DF_Weapons_DMR\M14\data\handguard\M14_handguard_1.rvmat",
                                "My_DF_Weapons_DMR\M14\data\handguard\M14_handguard_2.rvmat",
                                "My_DF_Weapons_DMR\M14\data\M14.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\M14\data\barrel\M14_barrel_worn.rvmat",
                                "My_DF_Weapons_DMR\M14\data\handguard\M14_handguard_1_worn.rvmat",
                                "My_DF_Weapons_DMR\M14\data\handguard\M14_handguard_2_worn.rvmat",
                                "My_DF_Weapons_DMR\M14\data\M14_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\M14\data\barrel\M14_barrel_damage.rvmat",
                                "My_DF_Weapons_DMR\M14\data\handguard\M14_handguard_1_damage.rvmat",
                                "My_DF_Weapons_DMR\M14\data\handguard\M14_handguard_2_damage.rvmat",
                                "My_DF_Weapons_DMR\M14\data\M14_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\M14\data\barrel\M14_barrel_damage.rvmat",
                                "My_DF_Weapons_DMR\M14\data\handguard\M14_handguard_1_damage.rvmat",
                                "My_DF_Weapons_DMR\M14\data\handguard\M14_handguard_2_damage.rvmat",
                                "My_DF_Weapons_DMR\M14\data\M14_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\M14\data\barrel\M14_barrel_destruct.rvmat",
                                "My_DF_Weapons_DMR\M14\data\handguard\M14_handguard_1_destruct.rvmat",
                                "My_DF_Weapons_DMR\M14\data\handguard\M14_handguard_2_destruct.rvmat",
                                "My_DF_Weapons_DMR\M14\data\M14_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_DMR_Marlin_Base: Rifle_Base
    {
        scope = 0;
        animName = "Repeater";
        model = "\My_DF_Weapons_DMR\Marlin\Marlin.p3d";
        itemSize[] = { 8, 3 };
        weight = 2500;
        DisplayMagazine = 0;
        WeaponLength = 0.9;
        ObstructionDistance = 0.54;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        barrelArmor = 2.2;
        initSpeedMultiplier = 1.23;
        chamberSize = 10;
        chamberedRound = "";
        chamberableFrom[] = {
            "My_DF_Weapons_Ammo_45_70_FMJ",
            "My_DF_Weapons_Ammo_45_70_FTX",
            "My_DF_Weapons_Ammo_45_70_RN"
        };
        magazines[] = {};
        attachments[] = {
            "DF_stock_Marlin",
            "DF_trigger_Marlin",
            "DF_handguard_Marlin",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_muzzle",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.45;
        ejectType = 0;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2.4, 2.4, 0.9 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "bullet",
            "magazine",
            "bolt",
            "charging",
            "boltrelease",
            "barrel",
            "frosight",
            "hammer",
            "handguard",
            "rail",
            "sight",
            "stock",
            "tri"
        };
        hiddenSelections[] = {
            "barrel",
            "frosight",
            "hammer",
            "handguard",
            "rail",
            "sight",
            "stock",
            "tri",
            "rec"
        };
        class NoiseShoot
        {
            strength = 100;
            type = "shot";
        };
        modes[] = { "Single" };
        class Single: Mode_Single
        {
            soundSetShot[] = { "My_DF_Weapons_DMR_Marlin_Shot_SoundSet", "Repeater_Shot_iterior_SoundSet", "Repeater_Tail_SoundSet", "Repeater_InteriorTail_SoundSet", "Repeater_Tail_2D_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_DMR_Marlin_silencer_SoundSet", "Repeater_silencerHomeMadeTail_SoundSet", "Repeater_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 1;
            recoil = "recoil_repeater";
            recoilProne = "recoil_repeater_prone";
            dispersion = 0.001;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoRifle
        {
            memoryPointCamera = "eye";
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 100;
            discreteDistance[] = { 50, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100 };
            discreteDistanceInitIndex = 0;
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\Repeater\w_repeater_states.anm";
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = { 0, -0.03, 0 };
                orientation[] = { 0, 0, 0 };
            };
            class Melee
            {
                position[] = { 0, -0.015, -0.02 };
                orientation[] = { 0, 0, 0 };
            };
        };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_mosin9130_01";
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
        class AnimationSources
        {
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0.635;
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
    class My_DF_Weapons_DMR_Marlin: My_DF_Weapons_DMR_Marlin_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_DMR_Marlin0";
        descriptionShort = "$STR_My_DF_Weapons_DMR_Marlin1";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\Marlin\data\barrel\Marlin_barrel_co.paa",
            "My_DF_Weapons_DMR\Marlin\data\frosight\Marlin_frosight_co.paa",
            "My_DF_Weapons_DMR\Marlin\data\hammer\Marlin_hammer_co.paa",
            "My_DF_Weapons_DMR\Marlin\data\handguard\Marlin_handguard_co.paa",
            "My_DF_Weapons_DMR\Marlin\data\rail\Marlin_rail_co.paa",
            "My_DF_Weapons_DMR\Marlin\data\sight\Marlin_sight_co.paa",
            "My_DF_Weapons_DMR\Marlin\data\stock\Marlin_stock_co.paa",
            "My_DF_Weapons_DMR\Marlin\data\trigger\Marlin_trigger_co.paa",
            "My_DF_Weapons_DMR\Marlin\data\Marlin_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\Marlin\data\barrel\Marlin_barrel.rvmat",
            "My_DF_Weapons_DMR\Marlin\data\frosight\Marlin_frosight.rvmat",
            "My_DF_Weapons_DMR\Marlin\data\hammer\Marlin_hammer.rvmat",
            "My_DF_Weapons_DMR\Marlin\data\handguard\Marlin_handguard.rvmat",
            "My_DF_Weapons_DMR\Marlin\data\rail\Marlin_rail.rvmat",
            "My_DF_Weapons_DMR\Marlin\data\sight\Marlin_sight.rvmat",
            "My_DF_Weapons_DMR\Marlin\data\stock\Marlin_stock.rvmat",
            "My_DF_Weapons_DMR\Marlin\data\trigger\Marlin_trigger.rvmat",
            "My_DF_Weapons_DMR\Marlin\data\Marlin.rvmat"
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
                                "My_DF_Weapons_DMR\Marlin\data\barrel\Marlin_barrel.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\frosight\Marlin_frosight.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\hammer\Marlin_hammer.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\handguard\Marlin_handguard.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\rail\Marlin_rail.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\sight\Marlin_sight.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\stock\Marlin_stock.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\trigger\Marlin_trigger.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\Marlin.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\Marlin\data\barrel\Marlin_barrel_worn.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\frosight\Marlin_frosight_worn.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\hammer\Marlin_hammer_worn.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\handguard\Marlin_handguard_worn.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\rail\Marlin_rail_worn.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\sight\Marlin_sight_worn.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\stock\Marlin_stock_worn.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\trigger\Marlin_trigger_worn.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\Marlin_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\Marlin\data\barrel\Marlin_barrel_damage.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\frosight\Marlin_frosight_damage.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\hammer\Marlin_hammer_damage.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\handguard\Marlin_handguard_damage.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\rail\Marlin_rail_damage.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\sight\Marlin_sight_damage.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\stock\Marlin_stock_damage.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\trigger\Marlin_trigger_damage.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\Marlin_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\Marlin\data\barrel\Marlin_barrel_damage.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\frosight\Marlin_frosight_damage.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\hammer\Marlin_hammer_damage.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\handguard\Marlin_handguard_damage.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\rail\Marlin_rail_damage.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\sight\Marlin_sight_damage.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\stock\Marlin_stock_damage.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\trigger\Marlin_trigger_damage.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\Marlin_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\Marlin\data\barrel\Marlin_barrel_destruct.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\frosight\Marlin_frosight_destruct.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\hammer\Marlin_hammer_destruct.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\handguard\Marlin_handguard_destruct.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\rail\Marlin_rail_destruct.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\sight\Marlin_sight_destruct.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\stock\Marlin_stock_destruct.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\trigger\Marlin_trigger_destruct.rvmat",
                                "My_DF_Weapons_DMR\Marlin\data\Marlin_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_DMR_Mini14_Base: Rifle_Base
    {
        scope = 0;
        animName = "cz527";
        model = "\My_DF_Weapons_DMR\Mini14\Mini14.p3d";
        itemSize[] = { 9, 3 };
        weight = 2500;
        absorbency = 0;
        ObstructionDistance = 0.728;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 0.85;
        barrelArmor = 1.111;
        initSpeedMultiplier = 1.2;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = { "Ammo_556x45", "Ammo_556x45Tracer", "My_DF_Weapons_Ammo_556x45_FMJ", "My_DF_Weapons_Ammo_556x45_M855", "My_DF_Weapons_Ammo_556x45_M855A1", "My_DF_Weapons_Ammo_556x45_M995", "My_DF_Weapons_Ammo_556x45_RRLP" };
        magazines[] = {
            "My_DF_Weapons_DMR_Mini14_10RndMag",
            "My_DF_Weapons_DMR_Mini14_20RndMag",
            "My_DF_Weapons_DMR_Mini14_30RndMag"
        };
        attachments[] = {
            "DF_handguard_Mini14",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_barrel_Mini14",
            "DF_muzzle",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.4;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2, 2, 0.75 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "barrel",
            "handguard"
        };
        hiddenSelections[] = {
            "barrel",
            "handguard",
            "rec"
        };
        class NoiseShoot
        {
            strength = 100;
            type = "shot";
        };
        modes[] = {
            "SemiAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_DMR_Mini14_Shot_SoundSet", "Mini14_Shot_iterior_SoundSet", "Mini14_Tail_SoundSet", "Mini14_InteriorTail_SoundSet", "Mini14_Tail_2D_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_DMR_Mini14_silencer_SoundSet", "Mini14_silencerTail_SoundSet", "Mini14_silencerInteriorTail_SoundSet" }, { "Mini14_silencerHomeMade_SoundSet", "Mini14_silencerHomeMadeTail_SoundSet", "Mini14_silencerInteriorHomeMadeTail_SoundSet" } };
            envShootingDecrease = 0.05;
            envShootingDecreaseExt[] = { 0.05, 0.05 };
            reloadTime = 0.1;
            dispersion = 0.00075;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoRifle
        {
            memoryPointCamera = "eye";
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 100;
            discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
            discreteDistanceInitIndex = 0;
        };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = { 0, 0, -0.035 };
                orientation[] = { 0, -20, -4 };
            };
            class Melee
            {
                position[] = { 0, 0, 0 };
                orientation[] = { 0, 20, 0 };
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
                    overrideParticle = "weapon_shot_fnx_02";
                    ignoreIfSuppressed = 1;
                    illuminateWorld = 1;
                    positionOffset[] = { 0, 0, 0 };
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
                    onlyWithinOverheatLimits[] = { 0.4, 1 };
                    positionOffset[] = { 0.1, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class OpenChamberSmoke
                {
                    onlyIfBoltIsOpen = 1;
                    overrideParticle = "smoking_barrel_small";
                    overridePoint = "Nabojnicestart";
                };
            };
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\Ruger1022\w_Ruger1022_states.anm";
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
    class My_DF_Weapons_DMR_Mini14: My_DF_Weapons_DMR_Mini14_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_DMR_Mini140";
        descriptionShort = "$STR_My_DF_Weapons_DMR_Mini141";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\Mini14\data\barrel\Mini14_barrel_co.paa",
            "My_DF_Weapons_DMR\Mini14\data\handguard\Mini14_handguard_co.paa",
            "My_DF_Weapons_DMR\Mini14\data\Mini14_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\Mini14\data\barrel\Mini14_barrel.rvmat",
            "My_DF_Weapons_DMR\Mini14\data\handguard\Mini14_handguard.rvmat",
            "My_DF_Weapons_DMR\Mini14\data\Mini14.rvmat"
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
                                "My_DF_Weapons_DMR\Mini14\data\barrel\Mini14_barrel.rvmat",
                                "My_DF_Weapons_DMR\Mini14\data\handguard\Mini14_handguard.rvmat",
                                "My_DF_Weapons_DMR\Mini14\data\Mini14.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\Mini14\data\barrel\Mini14_barrel_worn.rvmat",
                                "My_DF_Weapons_DMR\Mini14\data\handguard\Mini14_handguard_worn.rvmat",
                                "My_DF_Weapons_DMR\Mini14\data\Mini14_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\Mini14\data\barrel\Mini14_barrel_damage.rvmat",
                                "My_DF_Weapons_DMR\Mini14\data\handguard\Mini14_handguard_damage.rvmat",
                                "My_DF_Weapons_DMR\Mini14\data\Mini14_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\Mini14\data\barrel\Mini14_barrel_damage.rvmat",
                                "My_DF_Weapons_DMR\Mini14\data\handguard\Mini14_handguard_damage.rvmat",
                                "My_DF_Weapons_DMR\Mini14\data\Mini14_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\Mini14\data\barrel\Mini14_barrel_destruct.rvmat",
                                "My_DF_Weapons_DMR\Mini14\data\handguard\Mini14_handguard_destruct.rvmat",
                                "My_DF_Weapons_DMR\Mini14\data\Mini14_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_DMR_PSG_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_DMR\PSG\PSG.p3d";
        itemSize[] = { 8, 3 };
        weight = 3500;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.0;
        barrelArmor = 3.5;
        initSpeedMultiplier = 1.2;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "My_DF_Weapons_Ammo_762x51_BPZ",
            "My_DF_Weapons_Ammo_762x51_M61",
            "My_DF_Weapons_Ammo_762x51_M62",
            "My_DF_Weapons_Ammo_762x51_M80",
            "My_DF_Weapons_Ammo_762x51_UltraNosler"
        };
        magazines[] = {
            "My_DF_Weapons_Rifles_G3_10RndMag",
            "My_DF_Weapons_Rifles_G3_20RndMag",
            "My_DF_Weapons_Rifles_G3_30RndMag",
            "My_DF_Weapons_Rifles_G3_50RndDrumMag"
        };
        attachments[] = {
            "DF_stock",
            "DF_pisg_G3",
            "DF_handguard_G3",
            "DF_trigger_PSG",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_mount_G3",
            "DF_frog_down",
            "DF_muzzle",
            "DF_bipod",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.5;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1.2, 1.2, 1.2 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "barrel",
            "frosight",
            "handguard",
            "pisg",
            "stock",
            "rail",
            "bipod_rail",
            "1913adapter",
            "ACRadapter",
            "stockAdapter"
        };
        hiddenSelections[] = {
            "barrel",
            "frosight",
            "handguard",
            "rec",
            "pisg",
            "stock"
        };
        class NoiseShoot
        {
            strength = 80;
            type = "shot";
        };
        modes[] = {
            "SemiAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_Rifles_G3_Shot_SoundSet", "MP5K_Tail_SoundSet", "MP5K_InteriorTail_SoundSet", "MP5K_Slapback_SoundSet", "MP5K_Tail_2D_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_G3_silencer_SoundSet", "MP5K_silencerTail_SoundSet", "MP5K_silencerInteriorTail_SoundSet" }, { "My_DF_Weapons_Rifles_G3_silencer_SoundSet", "MP5K_silencerHomeMadeTail_SoundSet", "MP5K_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.15;
            recoil = "recoil_mp5";
            recoilProne = "recoil_mp5_prone";
            dispersion = 0.003;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoRifle
        {
            memoryPointCamera = "eye";
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 100;
            discreteDistance[] = { 25 };
            discreteDistanceInitIndex = 0;
        };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = {-0.1, 0.01, 0 };
                orientation[] = { 0, -8, 0 };
            };
            class Melee
            {
                position[] = {-0.1, 0.01, -0.02 };
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
                    overrideParticle = "weapon_shot_ump45_01";
                    ignoreIfSuppressed = 1;
                    illuminateWorld = 1;
                    positionOffset[] = { 0, 0, 0 };
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
                maxOverheatingValue = 10;
                shotsToStartOverheating = 2;
                overheatingDecayInterval = 1;
                class SmokingBarrel1
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    positionOffset[] = { 0.1, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0.1, 0, 0 };
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
        weaponStateAnim = "dz\anims\anm\player\reloads\MP5\w_mp5k_states.anm";
        class AnimationSources
        {
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 1;
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
            class handguard_proxy
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class MP5_stock_proxy
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class special_stock_proxy
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_DMR_PSG: My_DF_Weapons_DMR_PSG_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_DMR_PSG0";
        descriptionShort = "$STR_My_DF_Weapons_DMR_PSG1";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\PSG\data\barrel\PSG_barrel_co.paa",
            "My_DF_Weapons_DMR\PSG\data\frosight\PSG_frosight_co.paa",
            "My_DF_Weapons_DMR\PSG\data\handguard\PSG_handguard_co.paa",
            "My_DF_Weapons_DMR\PSG\data\PSG_co.paa",
            "My_DF_Weapons_Attachments\pisg\g3psg1\data\g3psg1_co.paa",
            "My_DF_Weapons_Attachments\stock\PSG_Stock\data\PSG_Stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\PSG\data\barrel\PSG_barrel.rvmat",
            "My_DF_Weapons_DMR\PSG\data\frosight\PSG_frosight.rvmat",
            "My_DF_Weapons_DMR\PSG\data\handguard\PSG_handguard.rvmat",
            "My_DF_Weapons_DMR\PSG\data\PSG.rvmat",
            "My_DF_Weapons_Attachments\pisg\g3psg1\data\g3psg1.rvmat",
            "My_DF_Weapons_Attachments\stock\PSG_Stock\data\PSG_Stock.rvmat"
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
                                "My_DF_Weapons_DMR\PSG\data\barrel\PSG_barrel.rvmat",
                                "My_DF_Weapons_DMR\PSG\data\frosight\PSG_frosight.rvmat",
                                "My_DF_Weapons_DMR\PSG\data\handguard\PSG_handguard.rvmat",
                                "My_DF_Weapons_DMR\PSG\data\PSG.rvmat",
                                "My_DF_Weapons_Attachments\pisg\g3psg1\data\g3psg1.rvmat",
                                "My_DF_Weapons_Attachments\stock\PSG_Stock\data\PSG_Stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\PSG\data\barrel\PSG_barrel_worn.rvmat",
                                "My_DF_Weapons_DMR\PSG\data\frosight\PSG_frosight_worn.rvmat",
                                "My_DF_Weapons_DMR\PSG\data\handguard\PSG_handguard_worn.rvmat",
                                "My_DF_Weapons_DMR\PSG\data\PSG_worn.rvmat",
                                "My_DF_Weapons_Attachments\pisg\g3psg1\data\g3psg1_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\PSG_Stock\data\PSG_Stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\PSG\data\barrel\PSG_barrel_damage.rvmat",
                                "My_DF_Weapons_DMR\PSG\data\frosight\PSG_frosight_damage.rvmat",
                                "My_DF_Weapons_DMR\PSG\data\handguard\PSG_handguard_damage.rvmat",
                                "My_DF_Weapons_DMR\PSG\data\PSG_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\g3psg1\data\g3psg1_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\PSG_Stock\data\PSG_Stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\PSG\data\barrel\PSG_barrel_damage.rvmat",
                                "My_DF_Weapons_DMR\PSG\data\frosight\PSG_frosight_damage.rvmat",
                                "My_DF_Weapons_DMR\PSG\data\handguard\PSG_handguard_damage.rvmat",
                                "My_DF_Weapons_DMR\PSG\data\PSG_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\g3psg1\data\g3psg1_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\PSG_Stock\data\PSG_Stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\PSG\data\barrel\PSG_barrel_destruct.rvmat",
                                "My_DF_Weapons_DMR\PSG\data\frosight\PSG_frosight_destruct.rvmat",
                                "My_DF_Weapons_DMR\PSG\data\handguard\PSG_handguard_destruct.rvmat",
                                "My_DF_Weapons_DMR\PSG\data\PSG_destruct.rvmat",
                                "My_DF_Weapons_Attachments\pisg\g3psg1\data\g3psg1_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\PSG_Stock\data\PSG_Stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_DMR_SKS_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_DMR\SKS\SKS.p3d";
        itemSize[] = { 9, 3 };
        weight = 3900;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        DisplayMagazine = 0;
        WeaponLength = 1.06;
        ObstructionDistance = 0.876;
        barrelArmor = 1.667;
        initSpeedMultiplier = 1.1;
        chamberSize = 10;
        chamberedRound = "";
        chamberableFrom[] = { "Ammo_762x39", "Ammo_762x39Tracer", "My_DF_Weapons_Ammo_762x39_AP", "My_DF_Weapons_Ammo_762x39_BP", "My_DF_Weapons_Ammo_762x39_LP", "My_DF_Weapons_Ammo_762x39_PS", "My_DF_Weapons_Ammo_762x39_T45N" };
        magazines[] = {};
        attachments[] = {
            "DF_handguard_SKS",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_mount_SKS",
            "DF_barrel_SKS",
            "DF_muzzle",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.25;
        ejectType = 1;
        cursor = "aimBowGhost";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2.4, 2.4, 0.9 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "barrel",
            "handguard"
        };
        hiddenSelections[] = {
            "barrel",
            "handguard",
            "rec"
        };
        class NoiseShoot
        {
            strength = 100;
            type = "shot";
        };
        modes[] = {
            "SemiAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_DMR_SKS_Shot_SoundSet", "SKS_Shot_iterior_SoundSet", "SKS_Tail_SoundSet", "SKS_InteriorTail_SoundSet", "SKS_Tail_2D_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_DMR_SKS_silencer_SoundSet", "SKS_silencerHomeMadeTail_SoundSet", "SKS_silencerInteriorHomeMadeTail_SoundSet" } };
            envShootingDecrease = 0.8;
            envShootingDecreaseExt[] = { 0.05, 0.05 };
            reloadTime = 0.12;
            recoil = "recoil_sks";
            recoilProne = "recoil_sks_prone";
            dispersion = 0.0015;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoRifle
        {
            memoryPointCamera = "eye";
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 100;
            discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
            discreteDistanceInitIndex = 0;
        };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = { 0, 0, -0.05 };
                orientation[] = { 0, -40, 0 };
            };
            class Melee
            {
                position[] = { 0, 0, 0.05 };
                orientation[] = { 0, 40, 0 };
            };
        };
        class AnimationSources
        {
            class Clip_rounds
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 1;
            };
            class Clip
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 1;
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
                    overrideParticle = "weapon_shot_sks_01";
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
                maxOverheatingValue = 8;
                shotsToStartOverheating = 4;
                overheatingDecayInterval = 1;
                class SmokingBarrel1
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinOverheatLimits[] = { 0, 0.6 };
                    positionOffset[] = { 0.1, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrel2
                {
                    overrideParticle = "smoking_barrel";
                    onlyWithinOverheatLimits[] = { 0.6, 1 };
                    positionOffset[] = { 0.1, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0.3, 0, 0 };
                    onlyWithinRainLimits[] = { 0.2, 0.5 };
                };
                class SmokingBarrelHotSteam
                {
                    overrideParticle = "smoking_barrel_steam";
                    positionOffset[] = { 0.3, 0, 0 };
                    onlyWithinRainLimits[] = { 0.5, 1 };
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
        weaponStateAnim = "dz\anims\anm\player\reloads\SKS\w_SKS_states.anm";
        boneRemap[] = { "bolt", "Weapon_Bolt", "trigger", "Weapon_Trigger", "bullet", "Weapon_Bullet", "follower", "Weapon_Bone_02", "clip", "Weapon_Magazine", "cliprounds", "Weapon_Bone_01" };
        class AnimationSources
        {
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0.44;
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
    class My_DF_Weapons_DMR_SKS: My_DF_Weapons_DMR_SKS_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_DMR_SKS0";
        descriptionShort = "$STR_My_DF_Weapons_DMR_SKS1";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\SKS\data\barrel\SKS_barrel_co.paa",
            "My_DF_Weapons_DMR\SKS\data\handguard\SKS_handguard_co.paa",
            "My_DF_Weapons_DMR\SKS\data\SKS_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\SKS\data\barrel\SKS_barrel.rvmat",
            "My_DF_Weapons_DMR\SKS\data\handguard\SKS_handguard.rvmat",
            "My_DF_Weapons_DMR\SKS\data\SKS.rvmat"
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
                                "My_DF_Weapons_DMR\SKS\data\barrel\SKS_barrel.rvmat",
                                "My_DF_Weapons_DMR\SKS\data\handguard\SKS_handguard.rvmat",
                                "My_DF_Weapons_DMR\SKS\data\SKS.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\SKS\data\barrel\SKS_barrel_worn.rvmat",
                                "My_DF_Weapons_DMR\SKS\data\handguard\SKS_handguard_worn.rvmat",
                                "My_DF_Weapons_DMR\SKS\data\SKS_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\SKS\data\barrel\SKS_barrel_damage.rvmat",
                                "My_DF_Weapons_DMR\SKS\data\handguard\SKS_handguard_damage.rvmat",
                                "My_DF_Weapons_DMR\SKS\data\SKS_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\SKS\data\barrel\SKS_barrel_damage.rvmat",
                                "My_DF_Weapons_DMR\SKS\data\handguard\SKS_handguard_damage.rvmat",
                                "My_DF_Weapons_DMR\SKS\data\SKS_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\SKS\data\barrel\SKS_barrel_destruct.rvmat",
                                "My_DF_Weapons_DMR\SKS\data\handguard\SKS_handguard_destruct.rvmat",
                                "My_DF_Weapons_DMR\SKS\data\SKS_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_DMR_SKS_Morden_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_DMR\SKS\SKS_Morden.p3d";
        itemSize[] = { 9, 3 };
        weight = 3900;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.06;
        ObstructionDistance = 0.876;
        barrelArmor = 1.667;
        initSpeedMultiplier = 1.1;
        chamberSize = 10;
        chamberedRound = "";
        chamberableFrom[] = { "Ammo_762x39", "Mag_CLIP762x39_10Rnd", "Ammo_762x39Tracer" };
        magazines[] = {
            "My_DF_Weapons_Rifles_AKM_20RndMag",
            "My_DF_Weapons_Rifles_AKM_30RndMag",
            "My_DF_Weapons_Rifles_AKM_30RndMag2",
            "My_DF_Weapons_Rifles_AKM_40RndMag",
            "My_DF_Weapons_Rifles_AKM_70RndMag"
        };
        attachments[] = {
            "DF_handguard_SKS",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_mount_SKS",
            "DF_barrel_SKS",
            "DF_muzzle",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.25;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2.4, 2.4, 0.9 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "barrel"
        };
        hiddenSelections[] = {
            "barrel",
            "rec"
        };
        class NoiseShoot
        {
            strength = 100;
            type = "shot";
        };
        modes[] = {
            "SemiAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "SKS_Shot_SoundSet", "SKS_Shot_iterior_SoundSet", "SKS_Tail_SoundSet", "SKS_InteriorTail_SoundSet", "SKS_Tail_2D_SoundSet" };
            soundSetShotExt[] = { { "SKS_silencerHomeMade_SoundSet", "SKS_silencerHomeMadeTail_SoundSet", "SKS_silencerInteriorHomeMadeTail_SoundSet" } };
            envShootingDecrease = 0.8;
            envShootingDecreaseExt[] = { 0.05, 0.05 };
            reloadTime = 0.12;
            recoil = "recoil_sks";
            recoilProne = "recoil_sks_prone";
            dispersion = 0.0015;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoRifle
        {
            memoryPointCamera = "eye";
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 100;
            discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
            discreteDistanceInitIndex = 0;
        };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = { 0, -0.02, -0.02 };
                orientation[] = { 0, -30, 0 };
            };
            class Melee
            {
                position[] = { 0, -0.02, 0 };
                orientation[] = { 0, 30, 0 };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class walkErc_L
                {
                    soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
                    id = 1;
                };
                class walkErc_R
                {
                    soundSet = "Weapon_Movement_HRifle_walkErc_R_SoundSet";
                    id = 2;
                };
                class runErc_L
                {
                    soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
                    id = 3;
                };
                class runErc_R
                {
                    soundSet = "Weapon_Movement_HRifle_runErc_R_SoundSet";
                    id = 4;
                };
                class sprintErc_L
                {
                    soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
                    id = 5;
                };
                class sprintErc_R
                {
                    soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
                    id = 6;
                };
                class walkCro_L
                {
                    soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
                    id = 21;
                };
                class walkCro_R
                {
                    soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
                    id = 22;
                };
                class runCro_L
                {
                    soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
                    id = 23;
                };
                class runCro_R
                {
                    soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
                    id = 24;
                };
                class walkProne_L
                {
                    soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
                    id = 31;
                };
                class walkProne_R
                {
                    soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
                    id = 32;
                };
                class runProne_L
                {
                    soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
                    id = 33;
                };
                class runProne_R
                {
                    soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
                    id = 34;
                };
                class jumpErc_L
                {
                    soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
                    id = 35;
                };
                class jumpErc_R
                {
                    soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
                    id = 36;
                };
                class landFootErc_L
                {
                    soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
                    id = 37;
                };
                class landFootErc_R
                {
                    soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
                    id = 38;
                };
                class walkRasErc_L
                {
                    soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
                    id = 51;
                };
                class walkRasErc_R
                {
                    soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
                    id = 52;
                };
                class runRasErc_L
                {
                    soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
                    id = 53;
                };
                class runRasErc_R
                {
                    soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
                    id = 54;
                };
                class HandStep_L
                {
                    soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
                    id = 61;
                };
                class HandStep_R
                {
                    soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
                    id = 62;
                };
                class HandStep_Hard_L
                {
                    soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
                    id = 63;
                };
                class HandStep_Hard_R
                {
                    soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
                    id = 64;
                };
                class landFeetErc
                {
                    soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
                    id = 100;
                };
                class Weapon_Movement_HRifle_Walk
                {
                    soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
                    id = 101;
                };
                class Weapon_Movement_HRifle_Run
                {
                    soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
                    id = 102;
                };
                class Weapon_Movement_HRifle_Sprint
                {
                    soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
                    id = 103;
                };
                class Weapon_Movement_HRifle_Land
                {
                    soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
                    id = 104;
                };
                class Char_Gestures_Hand_Grab_Rifle
                {
                    soundSet = "Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
                    id = 892;
                };
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
                    overrideParticle = "weapon_shot_sks_01";
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
                maxOverheatingValue = 8;
                shotsToStartOverheating = 4;
                overheatingDecayInterval = 1;
                class SmokingBarrel1
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinOverheatLimits[] = { 0, 0.6 };
                    positionOffset[] = { 0.1, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrel2
                {
                    overrideParticle = "smoking_barrel";
                    onlyWithinOverheatLimits[] = { 0.6, 1 };
                    positionOffset[] = { 0.1, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0.3, 0, 0 };
                    onlyWithinRainLimits[] = { 0.2, 0.5 };
                };
                class SmokingBarrelHotSteam
                {
                    overrideParticle = "smoking_barrel_steam";
                    positionOffset[] = { 0.3, 0, 0 };
                    onlyWithinRainLimits[] = { 0.5, 1 };
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
        weaponStateAnim = "dz\anims\anm\player\reloads\SVD\w_SVD_states.anm";
        class AnimationSources
        {
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0.44;
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
    class My_DF_Weapons_DMR_SKS_Morden: My_DF_Weapons_DMR_SKS_Morden_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_DMR_SKS_Morden0";
        descriptionShort = "$STR_My_DF_Weapons_DMR_SKS_Morden1";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\SKS\data\barrel\SKS_barrel_co.paa",
            "My_DF_Weapons_DMR\SKS\data\SKS_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\SKS\data\barrel\SKS_barrel.rvmat",
            "My_DF_Weapons_DMR\SKS\data\SKS.rvmat"
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
                                "My_DF_Weapons_DMR\SKS\data\barrel\SKS_barrel.rvmat",
                                "My_DF_Weapons_DMR\SKS\data\SKS.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\SKS\data\barrel\SKS_barrel_worn.rvmat",
                                "My_DF_Weapons_DMR\SKS\data\SKS_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\SKS\data\barrel\SKS_barrel_damage.rvmat",
                                "My_DF_Weapons_DMR\SKS\data\SKS_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\SKS\data\barrel\SKS_barrel_damage.rvmat",
                                "My_DF_Weapons_DMR\SKS\data\SKS_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\SKS\data\barrel\SKS_barrel_destruct.rvmat",
                                "My_DF_Weapons_DMR\SKS\data\SKS_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_DMR_SP9_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_DMR\SP9\SP9.p3d";
        itemSize[] = { 8, 3 };
        weight = 3500;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.0;
        barrelArmor = 3.5;
        initSpeedMultiplier = 1.2;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "My_DF_Weapons_Ammo_762x51_BPZ",
            "My_DF_Weapons_Ammo_762x51_M61",
            "My_DF_Weapons_Ammo_762x51_M62",
            "My_DF_Weapons_Ammo_762x51_M80",
            "My_DF_Weapons_Ammo_762x51_UltraNosler"
        };
        magazines[] = {
            "My_DF_Weapons_Rifles_G3_10RndMag",
            "My_DF_Weapons_Rifles_G3_20RndMag",
            "My_DF_Weapons_Rifles_G3_30RndMag",
            "My_DF_Weapons_Rifles_G3_50RndDrumMag"
        };
        attachments[] = {
            "DF_handguard_G3",
            "DF_trigger_PSG",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_mount_G3",
            "DF_frog_down",
            "DF_muzzle",
            "DF_bipod",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.5;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1.2, 1.2, 1.2 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "barrel",
            "frosight",
            "handguard",
            "rail",
            "bipod_rail"
        };
        hiddenSelections[] = {
            "barrel",
            "frosight",
            "handguard",
            "rec",
            "stock"
        };
        class NoiseShoot
        {
            strength = 80;
            type = "shot";
        };
        modes[] = {
            "SemiAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_Rifles_G3_Shot_SoundSet", "MP5K_Tail_SoundSet", "MP5K_InteriorTail_SoundSet", "MP5K_Slapback_SoundSet", "MP5K_Tail_2D_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_G3_silencer_SoundSet", "MP5K_silencerTail_SoundSet", "MP5K_silencerInteriorTail_SoundSet" }, { "My_DF_Weapons_Rifles_G3_silencer_SoundSet", "MP5K_silencerHomeMadeTail_SoundSet", "MP5K_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.15;
            recoil = "recoil_mp5";
            recoilProne = "recoil_mp5_prone";
            dispersion = 0.003;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoRifle
        {
            memoryPointCamera = "eye";
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 100;
            discreteDistance[] = { 25 };
            discreteDistanceInitIndex = 0;
        };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = {-0.1, 0.01, 0 };
                orientation[] = { 0, -8, 0 };
            };
            class Melee
            {
                position[] = {-0.1, 0.01, -0.02 };
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
                    overrideParticle = "weapon_shot_ump45_01";
                    ignoreIfSuppressed = 1;
                    illuminateWorld = 1;
                    positionOffset[] = { 0, 0, 0 };
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
                maxOverheatingValue = 10;
                shotsToStartOverheating = 2;
                overheatingDecayInterval = 1;
                class SmokingBarrel1
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    positionOffset[] = { 0.1, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0.1, 0, 0 };
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
        weaponStateAnim = "dz\anims\anm\player\reloads\MP5\w_mp5k_states.anm";
        class AnimationSources
        {
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 1;
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
            class handguard_proxy
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_DMR_SP9: My_DF_Weapons_DMR_SP9_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_DMR_SP90";
        descriptionShort = "$STR_My_DF_Weapons_DMR_SP91";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\SP9\data\barrel\SP9_barrel_co.paa",
            "My_DF_Weapons_DMR\SP9\data\frosight\SP9_frosight_co.paa",
            "My_DF_Weapons_DMR\SP9\data\handguard\SP9_handguard_co.paa",
            "My_DF_Weapons_DMR\PSG\data\PSG_co.paa",
            "My_DF_Weapons_DMR\SP9\data\stock\SP9_stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\SP9\data\barrel\SP9_barrel.rvmat",
            "My_DF_Weapons_DMR\SP9\data\frosight\SP9_frosight.rvmat",
            "My_DF_Weapons_DMR\SP9\data\handguard\SP9_handguard.rvmat",
            "My_DF_Weapons_DMR\PSG\data\PSG.rvmat",
            "My_DF_Weapons_DMR\SP9\data\stock\SP9_stock.rvmat"
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
                                "My_DF_Weapons_DMR\SP9\data\barrel\SP9_barrel.rvmat",
                                "My_DF_Weapons_DMR\SP9\data\frosight\SP9_frosight.rvmat",
                                "My_DF_Weapons_DMR\SP9\data\handguard\SP9_handguard.rvmat",
                                "My_DF_Weapons_DMR\PSG\data\PSG.rvmat",
                                "My_DF_Weapons_DMR\SP9\data\stock\SP9_stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\SP9\data\barrel\SP9_barrel_worn.rvmat",
                                "My_DF_Weapons_DMR\SP9\data\frosight\SP9_frosight_worn.rvmat",
                                "My_DF_Weapons_DMR\SP9\data\handguard\SP9_handguard_worn.rvmat",
                                "My_DF_Weapons_DMR\PSG\data\PSG_worn.rvmat",
                                "My_DF_Weapons_DMR\SP9\data\stock\SP9_stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\SP9\data\barrel\SP9_barrel_damage.rvmat",
                                "My_DF_Weapons_DMR\SP9\data\frosight\SP9_frosight_damage.rvmat",
                                "My_DF_Weapons_DMR\SP9\data\handguard\SP9_handguard_damage.rvmat",
                                "My_DF_Weapons_DMR\PSG\data\PSG_damage.rvmat",
                                "My_DF_Weapons_DMR\SP9\data\stock\SP9_stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\SP9\data\barrel\SP9_barrel_damage.rvmat",
                                "My_DF_Weapons_DMR\SP9\data\frosight\SP9_frosight_damage.rvmat",
                                "My_DF_Weapons_DMR\SP9\data\handguard\SP9_handguard_damage.rvmat",
                                "My_DF_Weapons_DMR\PSG\data\PSG_damage.rvmat",
                                "My_DF_Weapons_DMR\SP9\data\stock\SP9_stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\SP9\data\barrel\SP9_barrel_destruct.rvmat",
                                "My_DF_Weapons_DMR\SP9\data\frosight\SP9_frosight_destruct.rvmat",
                                "My_DF_Weapons_DMR\SP9\data\handguard\SP9_handguard_destruct.rvmat",
                                "My_DF_Weapons_DMR\PSG\data\PSG_destruct.rvmat",
                                "My_DF_Weapons_DMR\SP9\data\stock\SP9_stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_DMR_SR25_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_DMR\SR25\SR25.p3d";
        itemSize[] = { 10, 3 };
        weight = 3500;
        absorbency = 0;
        ShoulderDistance = 0.05;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.15;
        ObstructionDistance = 0.92;
        barrelArmor = 2;
        initSpeedMultiplier = 1;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "My_DF_Weapons_Ammo_762x51_BPZ",
            "My_DF_Weapons_Ammo_762x51_M61",
            "My_DF_Weapons_Ammo_762x51_M62",
            "My_DF_Weapons_Ammo_762x51_M80",
            "My_DF_Weapons_Ammo_762x51_UltraNosler"
        };
        magazines[] = {
            "My_DF_Weapons_DMR_SR25_10RndMag",
            "My_DF_Weapons_DMR_SR25_20RndMag"
        };
        attachments[] = {
            "DF_stock",
            "DF_ar_pisg",
            "DF_handguard_SR25",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_barrel_SR25",
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_frog_up2",
            "DF_muzzle",
            "DF_bipod",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.25;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2, 2, 0.7 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "barrel",
            "frosight",
            "Gas",
            "handguard",
            "sight_up",
            "sight_down",
            "stock"
        };
        hiddenSelections[] = {
            "barrel",
            "frosight",
            "Gas",
            "handguard",
            "sight",
            "rec",
            "stock"
        };
        class NoiseShoot
        {
            strength = 100;
            type = "shot";
        };
        modes[] = {
            "SemiAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_DMR_SR25_Shot_SoundSet", "M4_Tail_SoundSet", "M4_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_DMR_SR25_silencer_SoundSet", "M4_silencerTail_SoundSet", "M4_silencerInteriorTail_SoundSet" }, { "M4_silencerHomeMade_SoundSet", "M4_silencerHomeMadeTail_SoundSet", "M4_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.18;
            recoil = "recoil_m4";
            recoilProne = "recoil_m4_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoRifle
        {
            memoryPointCamera = "eye";
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 100;
            discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
            discreteDistanceInitIndex = 0;
        };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = {-0.1, 0, 0.03 };
                orientation[] = { 0, 0, 0 };
            };
            class Melee
            {
                position[] = {-0.1, 0, -0.04 };
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
                    overrideParticle = "weapon_shot_ump45_01";
                    ignoreIfSuppressed = 1;
                    illuminateWorld = 1;
                    positionOffset[] = { 0, 0, 0 };
                };
                class MuzzleFlashStar
                {
                    overrideParticle = "weapon_shot_Flame_3D_4star";
                    ignoreIfSuppressed = 1;
                    overrideDirectionVector[] = { 0, 45, 0 };
                    positionOffset[] = { 0.01, 0, 0 };
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
                maxOverheatingValue = 12;
                shotsToStartOverheating = 4;
                overheatingDecayInterval = 0.7;
                class SmokingBarrel1
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinOverheatLimits[] = { 0, 0.5 };
                    positionOffset[] = { 0.2, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrel2
                {
                    overrideParticle = "smoking_barrel";
                    onlyWithinOverheatLimits[] = { 0.5, 0.7 };
                    positionOffset[] = { 0.2, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrel3
                {
                    overrideParticle = "smoking_barrel_heavy";
                    onlyWithinOverheatLimits[] = { 0.7, 1 };
                    positionOffset[] = { 0.2, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0.35, 0, 0 };
                    onlyWithinRainLimits[] = { 0.2, 0.5 };
                };
                class SmokingBarrelHotSteam
                {
                    overrideParticle = "smoking_barrel_steam";
                    positionOffset[] = { 0.35, 0, 0 };
                    onlyWithinRainLimits[] = { 0.5, 1 };
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
        weaponStateAnim = "dz\anims\anm\player\reloads\M4A1\w_M4A1_states.anm";
        class AnimationSources
        {
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0.43;
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
    class My_DF_Weapons_DMR_SR25: My_DF_Weapons_DMR_SR25_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_DMR_SR250";
        descriptionShort = "$STR_My_DF_Weapons_DMR_SR251";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\SR25\data\barrel\SR25_barrel_co.paa",
            "My_DF_Weapons_DMR\SR25\data\frosight\SR25_frosight_co.paa",
            "My_DF_Weapons_DMR\SR25\data\Gas\SR25_Gas_co.paa",
            "My_DF_Weapons_DMR\SR25\data\handguard\SR25_handguard_co.paa",
            "My_DF_Weapons_DMR\SR25\data\sight\SR25_sight_co.paa",
            "My_DF_Weapons_DMR\SR25\data\SR25_co.paa",
            "My_DF_Weapons_Attachments\stock\M16\data\M16_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\SR25\data\barrel\SR25_barrel.rvmat",
            "My_DF_Weapons_DMR\SR25\data\frosight\SR25_frosight.rvmat",
            "My_DF_Weapons_DMR\SR25\data\Gas\SR25_Gas.rvmat",
            "My_DF_Weapons_DMR\SR25\data\handguard\SR25_handguard.rvmat",
            "My_DF_Weapons_DMR\SR25\data\sight\SR25_sight.rvmat",
            "My_DF_Weapons_DMR\SR25\data\SR25.rvmat",
            "My_DF_Weapons_Attachments\stock\M16\data\M16.rvmat"
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
                                "My_DF_Weapons_DMR\SR25\data\barrel\SR25_barrel.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\frosight\SR25_frosight.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\Gas\SR25_Gas.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\handguard\SR25_handguard.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\sight\SR25_sight.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\SR25.rvmat",
                                "My_DF_Weapons_Attachments\stock\M16\data\M16.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\SR25\data\barrel\SR25_barrel_worn.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\frosight\SR25_frosight_worn.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\Gas\SR25_Gas_worn.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\handguard\SR25_handguard_worn.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\sight\SR25_sight_worn.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\SR25_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\M16\data\M16_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\SR25\data\barrel\SR25_barrel_damage.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\frosight\SR25_frosight_damage.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\Gas\SR25_Gas_damage.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\handguard\SR25_handguard_damage.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\sight\SR25_sight_damage.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\SR25_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\M16\data\M16_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\SR25\data\barrel\SR25_barrel_damage.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\frosight\SR25_frosight_damage.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\Gas\SR25_Gas_damage.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\handguard\SR25_handguard_damage.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\sight\SR25_sight_damage.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\SR25_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\M16\data\M16_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\SR25\data\barrel\SR25_barrel_destruct.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\frosight\SR25_frosight_destruct.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\Gas\SR25_Gas_destruct.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\handguard\SR25_handguard_destruct.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\sight\SR25_sight_destruct.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\SR25_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\M16\data\M16_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_DMR_SVD_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_DMR\SVD\SVD.p3d";
        itemSize[] = { 10, 3 };
        weight = 3700;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.15;
        ObstructionDistance = 0.92;
        barrelArmor = 1.6;
        initSpeedMultiplier = 1;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = { "Ammo_762x54", "Ammo_762x54Tracer", "My_DF_Weapons_Ammo_762x54R_BT", "My_DF_Weapons_Ammo_762x54R_LPS", "My_DF_Weapons_Ammo_762x54R_SNB", "My_DF_Weapons_Ammo_762x54R_T46M" };
        magazines[] = {
            "Mag_SVD_10Rnd",
            "My_DF_Weapons_DMR_SVD_10RndMag",
            "My_DF_Weapons_DMR_SVD_20RndMag"
        };
        attachments[] = {
            "DF_stock_SVD",
            "DF_handguard_SVD",
            "DF_ak_handlecap",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_mount_SVD",
            "DF_barrel_SVD",
            "DF_muzzle",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.25;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2, 2, 0.7 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "barrel",
            "handguard",
            "stock"
        };
        hiddenSelections[] = {
            "barrel",
            "handguard",
            "rec",
            "stock"
        };
        class NoiseShoot
        {
            strength = 100;
            type = "shot";
        };
        modes[] = {
            "SemiAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_DMR_SVD_Shot_SoundSet", "SVD_Shot_iterior_SoundSet", "SVD_Tail_SoundSet", "SVD_InteriorTail_SoundSet", "SVD_Tail_2D_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_DMR_SVD_silencer_SoundSet", "SVD_silencerTail_SoundSet", "SVD_silencerInteriorTail_SoundSet" }, { "SVD_silencerHomeMade_SoundSet", "SVD_silencerHomeMadeTail_SoundSet", "SVD_silencerInteriorHomeMadeTail_SoundSet" } };
            envShootingDecrease = 0.8;
            envShootingDecreaseExt[] = { 0.05, 0.05 };
            reloadTime = 0.16;
            recoil = "recoil_svd";
            recoilProne = "recoil_svd_prone";
            dispersion = 0.00085;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoRifle
        {
            memoryPointCamera = "eye";
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 100;
            discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
            discreteDistanceInitIndex = 0;
        };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = { 0, -0.02, -0.02 };
                orientation[] = { 0, -30, 0 };
            };
            class Melee
            {
                position[] = { 0, -0.02, 0 };
                orientation[] = { 0, 30, 0 };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class walkErc_L
                {
                    soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
                    id = 1;
                };
                class walkErc_R
                {
                    soundSet = "Weapon_Movement_HRifle_walkErc_R_SoundSet";
                    id = 2;
                };
                class runErc_L
                {
                    soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
                    id = 3;
                };
                class runErc_R
                {
                    soundSet = "Weapon_Movement_HRifle_runErc_R_SoundSet";
                    id = 4;
                };
                class sprintErc_L
                {
                    soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
                    id = 5;
                };
                class sprintErc_R
                {
                    soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
                    id = 6;
                };
                class walkCro_L
                {
                    soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
                    id = 21;
                };
                class walkCro_R
                {
                    soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
                    id = 22;
                };
                class runCro_L
                {
                    soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
                    id = 23;
                };
                class runCro_R
                {
                    soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
                    id = 24;
                };
                class walkProne_L
                {
                    soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
                    id = 31;
                };
                class walkProne_R
                {
                    soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
                    id = 32;
                };
                class runProne_L
                {
                    soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
                    id = 33;
                };
                class runProne_R
                {
                    soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
                    id = 34;
                };
                class jumpErc_L
                {
                    soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
                    id = 35;
                };
                class jumpErc_R
                {
                    soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
                    id = 36;
                };
                class landFootErc_L
                {
                    soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
                    id = 37;
                };
                class landFootErc_R
                {
                    soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
                    id = 38;
                };
                class walkRasErc_L
                {
                    soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
                    id = 51;
                };
                class walkRasErc_R
                {
                    soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
                    id = 52;
                };
                class runRasErc_L
                {
                    soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
                    id = 53;
                };
                class runRasErc_R
                {
                    soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
                    id = 54;
                };
                class HandStep_L
                {
                    soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
                    id = 61;
                };
                class HandStep_R
                {
                    soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
                    id = 62;
                };
                class HandStep_Hard_L
                {
                    soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
                    id = 63;
                };
                class HandStep_Hard_R
                {
                    soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
                    id = 64;
                };
                class landFeetErc
                {
                    soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
                    id = 100;
                };
                class Weapon_Movement_HRifle_Walk
                {
                    soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
                    id = 101;
                };
                class Weapon_Movement_HRifle_Run
                {
                    soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
                    id = 102;
                };
                class Weapon_Movement_HRifle_Sprint
                {
                    soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
                    id = 103;
                };
                class Weapon_Movement_HRifle_Land
                {
                    soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
                    id = 104;
                };
                class Char_Gestures_Hand_Grab_Rifle
                {
                    soundSet = "Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
                    id = 892;
                };
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
                    overrideParticle = "weapon_shot_mosin9130_01";
                    ignoreIfSuppressed = 1;
                    illuminateWorld = 1;
                    positionOffset[] = { 0, 0, 0 };
                };
                class MuzzleFlashStar
                {
                    overrideParticle = "weapon_shot_Flame_3D_4star";
                    overridePoint = "StarFlash";
                    ignoreIfSuppressed = 1;
                };
                class GasPistonBurstR
                {
                    overrideParticle = "weapon_shot_chamber_smoke";
                    overridePoint = "GasPiston";
                    overrideDirectionVector[] = { 0, 0, 0 };
                };
                class GasPistonBurstL
                {
                    overrideParticle = "weapon_shot_chamber_smoke";
                    overridePoint = "GasPiston";
                    overrideDirectionVector[] = { 180, 0, 0 };
                };
                class GasPistonSmokeRaiseR
                {
                    overrideParticle = "weapon_shot_chamber_smoke_raise";
                    overridePoint = "GasPiston";
                    overrideDirectionVector[] = { 0, 0, 0 };
                };
                class GasPistonSmokeRaiseL
                {
                    overrideParticle = "weapon_shot_chamber_smoke_raise";
                    overridePoint = "GasPiston";
                    overrideDirectionVector[] = { 180, 0, 0 };
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
                maxOverheatingValue = 8;
                shotsToStartOverheating = 4;
                overheatingDecayInterval = 1;
                class SmokingBarrel1
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinOverheatLimits[] = { 0, 0.4 };
                    positionOffset[] = { 0.05, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrel2
                {
                    overrideParticle = "smoking_barrel";
                    onlyWithinOverheatLimits[] = { 0.4, 0.8 };
                    positionOffset[] = { 0.05, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrel3
                {
                    overrideParticle = "smoking_barrel_heavy";
                    onlyWithinOverheatLimits[] = { 0.8, 1 };
                    positionOffset[] = { 0.05, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0.45, 0, 0 };
                    onlyWithinRainLimits[] = { 0.2, 0.5 };
                };
                class SmokingBarrelHotSteam
                {
                    overrideParticle = "smoking_barrel_steam";
                    positionOffset[] = { 0.45, 0, 0 };
                    onlyWithinRainLimits[] = { 0.5, 1 };
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
        weaponStateAnim = "dz\anims\anm\player\reloads\SVD\w_SVD_states.anm";
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
    class My_DF_Weapons_DMR_SVD: My_DF_Weapons_DMR_SVD_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_DMR_SVD0";
        descriptionShort = "$STR_My_DF_Weapons_DMR_SVD1";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\SVD\data\barrel\SVD_barrel_co.paa",
            "My_DF_Weapons_DMR\SVD\data\handguard\SVD_handguard_co.paa",
            "My_DF_Weapons_DMR\SVD\data\SVD_co.paa",
            "My_DF_Weapons_DMR\SVD\data\stock\SVD_stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\SVD\data\barrel\SVD_barrel.rvmat",
            "My_DF_Weapons_DMR\SVD\data\handguard\SVD_handguard.rvmat",
            "My_DF_Weapons_DMR\SVD\data\SVD.rvmat",
            "My_DF_Weapons_DMR\SVD\data\stock\SVD_Stock.rvmat"
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
                                "My_DF_Weapons_DMR\SVD\data\barrel\SVD_barrel.rvmat",
                                "My_DF_Weapons_DMR\SVD\data\handguard\SVD_handguard.rvmat",
                                "My_DF_Weapons_DMR\SVD\data\SVD.rvmat",
                                "My_DF_Weapons_DMR\SVD\data\stock\SVD_Stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\SVD\data\barrel\SVD_barrel_worn.rvmat",
                                "My_DF_Weapons_DMR\SVD\data\handguard\SVD_handguard_worn.rvmat",
                                "My_DF_Weapons_DMR\SVD\data\SVD_worn.rvmat",
                                "My_DF_Weapons_DMR\SVD\data\stock\SVD_Stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\SVD\data\barrel\SVD_barrel_damage.rvmat",
                                "My_DF_Weapons_DMR\SVD\data\handguard\SVD_handguard_damage.rvmat",
                                "My_DF_Weapons_DMR\SVD\data\SVD_damage.rvmat",
                                "My_DF_Weapons_DMR\SVD\data\stock\SVD_Stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\SVD\data\barrel\SVD_barrel_damage.rvmat",
                                "My_DF_Weapons_DMR\SVD\data\handguard\SVD_handguard_damage.rvmat",
                                "My_DF_Weapons_DMR\SVD\data\SVD_damage.rvmat",
                                "My_DF_Weapons_DMR\SVD\data\stock\SVD_Stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\SVD\data\barrel\SVD_barrel_destruct.rvmat",
                                "My_DF_Weapons_DMR\SVD\data\handguard\SVD_handguard_destruct.rvmat",
                                "My_DF_Weapons_DMR\SVD\data\SVD_destruct.rvmat",
                                "My_DF_Weapons_DMR\SVD\data\stock\SVD_Stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_DMR_VSS_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_DMR\VSS\VSS.p3d";
        itemSize[] = { 8, 3 };
        weight = 2600;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 0.87;
        ObstructionDistance = 0.696;
        barrelArmor = 2.4;
        initSpeedMultiplier = 1;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = { "Ammo_9x39", "Ammo_9x39AP", "My_DF_Weapons_Ammo_9x39_BP", "My_DF_Weapons_Ammo_9x39_SP5", "My_DF_Weapons_Ammo_9x39_SP6" };
        magazines[] = {
            "Mag_VSS_10Rnd",
            "Mag_VAL_20Rnd",
            "Mag_Vikhr_30Rnd",
            "My_DF_Weapons_DMR_VSS_10RndMag",
            "My_DF_Weapons_DMR_VSS_30RndMag",
            "My_DF_Weapons_DMR_VSS_45RndMag"
        };
        attachments[] = {
            "DF_stock_VSS",
            "DF_ak_handlecap",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_mount_SVD",
            "DF_barrel_VSS",
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.38;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2.2, 2.2, 0.85 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "barrel",
            "Kit",
            "stock"
        };
        hiddenSelections[] = {
            "barrel",
            "handguard",
            "Kit",
            "rec",
            "stock"
        };
        class NoiseShoot
        {
            strength = 5;
            type = "shot";
        };
        modes[] = {
            "FullAuto",
            "SemiAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_DMR_VSS_silencer_SoundSet", "VSS_Vintorez_Tail_SoundSet", "VSS_Vintorez_InteriorTail_SoundSet" };
            envShootingDecrease = 0.05;
            reloadTime = 0.06;
            recoil = "recoil_VSS";
            recoilProne = "recoil_VSS_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = { "My_DF_Weapons_DMR_VSS_silencer_SoundSet", "VSS_Vintorez_Tail_SoundSet", "VSS_Vintorez_InteriorTail_SoundSet" };
            reloadTime = 0.03;
            recoil = "recoil_VSS";
            recoilProne = "recoil_VSS_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoRifle
        {
            discreteDistance[] = { 100, 200, 300, 400 };
            discreteDistanceInitIndex = 0;
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 100;
        };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = {-0.1, 0, 0 };
                orientation[] = { 0, -17, 0 };
            };
            class Melee
            {
                position[] = {-0.1, -0.01, 0 };
                orientation[] = { 0, 20, 0 };
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
                    overrideParticle = "weapon_shot_vss_01";
                    ignoreIfSuppressed = 1;
                    illuminateWorld = 0;
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
                maxOverheatingValue = 8;
                shotsToStartOverheating = 4;
                overheatingDecayInterval = 0.7;
                class SmokingBarrel1
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinOverheatLimits[] = { 0, 0.5 };
                    positionOffset[] = { 0.1, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrel2
                {
                    overrideParticle = "smoking_barrel";
                    onlyWithinOverheatLimits[] = { 0.5, 1 };
                    positionOffset[] = { 0.1, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteam
                {
                    overrideParticle = "smoking_barrel_steam";
                    positionOffset[] = { 0.1, 0, 0 };
                    onlyWithinRainLimits[] = { 0.3, 1 };
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
        weaponStateAnim = "dz\anims\anm\player\reloads\VSS\w_VSS_states.anm";
        class AnimationSources
        {
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
    class My_DF_Weapons_DMR_VSS: My_DF_Weapons_DMR_VSS_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_DMR_VSS0";
        descriptionShort = "$STR_My_DF_Weapons_DMR_VSS1";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\VSS\data\barrel\VSS_barrel_co.paa",
            "My_DF_Weapons_DMR\VSS\data\handguard\VSS_handguard_co.paa",
            "My_DF_Weapons_DMR\VSS\data\Kit\VSS_Kit_co.paa",
            "My_DF_Weapons_DMR\VSS\data\VSS_co.paa",
            "My_DF_Weapons_DMR\VSS\data\stock\VSS_stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\VSS\data\barrel\VSS_barrel.rvmat",
            "My_DF_Weapons_DMR\VSS\data\handguard\VSS_handguard.rvmat",
            "My_DF_Weapons_DMR\VSS\data\Kit\VSS_Kit.rvmat",
            "My_DF_Weapons_DMR\VSS\data\VSS.rvmat",
            "My_DF_Weapons_DMR\VSS\data\stock\VSS_Stock.rvmat"
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
                                "My_DF_Weapons_DMR\VSS\data\barrel\VSS_barrel.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\handguard\VSS_handguard.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\Kit\VSS_Kit.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\VSS.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\stock\VSS_Stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\VSS\data\barrel\VSS_barrel_worn.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\handguard\VSS_handguard_worn.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\Kit\VSS_Kit_worn.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\VSS_worn.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\stock\VSS_Stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\VSS\data\barrel\VSS_barrel_damage.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\handguard\VSS_handguard_damage.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\Kit\VSS_Kit_damage.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\VSS_damage.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\stock\VSS_Stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\VSS\data\barrel\VSS_barrel_damage.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\handguard\VSS_handguard_damage.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\Kit\VSS_Kit_damage.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\VSS_damage.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\stock\VSS_Stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\VSS\data\barrel\VSS_barrel_destruct.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\handguard\VSS_handguard_destruct.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\Kit\VSS_Kit_destruct.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\VSS_destruct.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\stock\VSS_Stock_destruct.rvmat"
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
    class My_DF_Weapons_DMR_M14_10RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_DMR_M14_10RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_DMR_M14_10RndMag1";
        model = "\My_DF_Weapons_DMR\M14\Mag\10RndMag\M14_10RndMag.p3d";
        weight = 200;
        weightPerQuantityUnit = 5;
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
            "My_DF_Weapons_DMR\M14\Mag\10RndMag\data\M14_10RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\M14\Mag\10RndMag\data\M14_10RndMag.rvmat"
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
                                "My_DF_Weapons_DMR\M14\Mag\10RndMag\data\M14_10RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\M14\Mag\10RndMag\data\M14_10RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\M14\Mag\10RndMag\data\M14_10RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\M14\Mag\10RndMag\data\M14_10RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\M14\Mag\10RndMag\data\M14_10RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_DMR_M14_20RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_DMR_M14_20RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_DMR_M14_20RndMag1";
        model = "\My_DF_Weapons_DMR\M14\Mag\20RndMag\M14_20RndMag.p3d";
        weight = 400;
        weightPerQuantityUnit = 5;
        itemSize[] = { 1, 3 };
        count = 20;
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
            "My_DF_Weapons_DMR\M14\Mag\20RndMag\data\M14_20RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\M14\Mag\20RndMag\data\M14_20RndMag.rvmat"
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
                                "My_DF_Weapons_DMR\M14\Mag\20RndMag\data\M14_20RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\M14\Mag\20RndMag\data\M14_20RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\M14\Mag\20RndMag\data\M14_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\M14\Mag\20RndMag\data\M14_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\M14\Mag\20RndMag\data\M14_20RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_DMR_M14_10RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_DMR_M14_10RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_DMR_M14_10RndMag1";
        model = "\My_DF_Weapons_DMR\M14\Mag\10RndMag\M14_10RndMag.p3d";
        weight = 200;
        weightPerQuantityUnit = 5;
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
            "My_DF_Weapons_DMR\M14\Mag\10RndMag\data\M14_10RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\M14\Mag\10RndMag\data\M14_10RndMag.rvmat"
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
                                "My_DF_Weapons_DMR\M14\Mag\10RndMag\data\M14_10RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\M14\Mag\10RndMag\data\M14_10RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\M14\Mag\10RndMag\data\M14_10RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\M14\Mag\10RndMag\data\M14_10RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\M14\Mag\10RndMag\data\M14_10RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_DMR_M14_50RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_DMR_M14_50RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_DMR_M14_50RndMag1";
        model = "\My_DF_Weapons_DMR\M14\Mag\50RndMag\M14_50RndMag.p3d";
        weight = 600;
        weightPerQuantityUnit = 5;
        itemSize[] = { 2, 2 };
        count = 50;
        ammo = "Bullet_DF_762x51_BPZ";
        ammoItems[] = {
            "My_DF_Weapons_Ammo_762x51_BPZ",
            "My_DF_Weapons_Ammo_762x51_M61",
            "My_DF_Weapons_Ammo_762x51_M62",
            "My_DF_Weapons_Ammo_762x51_M80",
            "My_DF_Weapons_Ammo_762x51_UltraNosler"
        };
        tracersEvery = 0;
        attachments[] = {};
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\M14\Mag\50RndMag\data\M14_50RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\M14\Mag\50RndMag\data\M14_50RndMag.rvmat"
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
                                "My_DF_Weapons_DMR\M14\Mag\50RndMag\data\M14_50RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\M14\Mag\50RndMag\data\M14_50RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\M14\Mag\50RndMag\data\M14_50RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\M14\Mag\50RndMag\data\M14_50RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\M14\Mag\50RndMag\data\M14_50RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_DMR_Mini14_10RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_DMR_Mini14_10RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_DMR_Mini14_10RndMag1";
        model = "\My_DF_Weapons_DMR\Mini14\Mag\10RndMag\Mini14_10RndMag.p3d";
        weight = 200;
        weightPerQuantityUnit = 5;
        itemSize[] = { 1, 1 };
        count = 10;
        ammo = "Bullet_DF_556x45_FMJ";
        ammoItems[] = { "Ammo_556x45", "Ammo_556x45Tracer", "My_DF_Weapons_Ammo_556x45_FMJ", "My_DF_Weapons_Ammo_556x45_M855", "My_DF_Weapons_Ammo_556x45_M855A1", "My_DF_Weapons_Ammo_556x45_M995", "My_DF_Weapons_Ammo_556x45_RRLP" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\Mini14\Mag\10RndMag\data\Mini14_10RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\Mini14\Mag\10RndMag\data\Mini14_10RndMag.rvmat"
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
                                "My_DF_Weapons_DMR\Mini14\Mag\10RndMag\data\Mini14_10RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\Mini14\Mag\10RndMag\data\Mini14_10RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\Mini14\Mag\10RndMag\data\Mini14_10RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\Mini14\Mag\10RndMag\data\Mini14_10RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\Mini14\Mag\10RndMag\data\Mini14_10RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_DMR_Mini14_20RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_DMR_Mini14_20RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_DMR_Mini14_20RndMag1";
        model = "\My_DF_Weapons_DMR\Mini14\Mag\20RndMag\Mini14_20RndMag.p3d";
        weight = 300;
        weightPerQuantityUnit = 5;
        itemSize[] = { 1, 2 };
        count = 20;
        ammo = "Bullet_DF_556x45_FMJ";
        ammoItems[] = { "Ammo_556x45", "Ammo_556x45Tracer", "My_DF_Weapons_Ammo_556x45_FMJ", "My_DF_Weapons_Ammo_556x45_M855", "My_DF_Weapons_Ammo_556x45_M855A1", "My_DF_Weapons_Ammo_556x45_M995", "My_DF_Weapons_Ammo_556x45_RRLP" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\Mini14\Mag\20RndMag\data\Mini14_20RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\Mini14\Mag\20RndMag\data\Mini14_20RndMag.rvmat"
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
                                "My_DF_Weapons_DMR\Mini14\Mag\20RndMag\data\Mini14_20RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\Mini14\Mag\20RndMag\data\Mini14_20RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\Mini14\Mag\20RndMag\data\Mini14_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\Mini14\Mag\20RndMag\data\Mini14_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\Mini14\Mag\20RndMag\data\Mini14_20RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_DMR_Mini14_30RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_DMR_Mini14_30RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_DMR_Mini14_30RndMag1";
        model = "\My_DF_Weapons_DMR\Mini14\Mag\30RndMag\Mini14_30RndMag.p3d";
        weight = 400;
        weightPerQuantityUnit = 5;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_DF_556x45_FMJ";
        ammoItems[] = { "Ammo_556x45", "Ammo_556x45Tracer", "My_DF_Weapons_Ammo_556x45_FMJ", "My_DF_Weapons_Ammo_556x45_M855", "My_DF_Weapons_Ammo_556x45_M855A1", "My_DF_Weapons_Ammo_556x45_M995", "My_DF_Weapons_Ammo_556x45_RRLP" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\Mini14\Mag\30RndMag\data\Mini14_30RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\Mini14\Mag\30RndMag\data\Mini14_30RndMag.rvmat"
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
                                "My_DF_Weapons_DMR\Mini14\Mag\30RndMag\data\Mini14_30RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\Mini14\Mag\30RndMag\data\Mini14_30RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\Mini14\Mag\30RndMag\data\Mini14_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\Mini14\Mag\30RndMag\data\Mini14_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\Mini14\Mag\30RndMag\data\Mini14_30RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_DMR_SR25_10RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_DMR_SR25_10RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_DMR_SR25_10RndMag1";
        model = "\My_DF_Weapons_DMR\SR25\Mag\10RndMag\SR25_10RndMag.p3d";
        weight = 200;
        weightPerQuantityUnit = 5;
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
            "My_DF_Weapons_DMR\SR25\Mag\10RndMag\data\SR25_10RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\SR25\Mag\10RndMag\data\SR25_10RndMag.rvmat"
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
                                "My_DF_Weapons_DMR\SR25\Mag\10RndMag\data\SR25_10RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\SR25\Mag\10RndMag\data\SR25_10RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\SR25\Mag\10RndMag\data\SR25_10RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\SR25\Mag\10RndMag\data\SR25_10RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\SR25\Mag\10RndMag\data\SR25_10RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_DMR_SR25_20RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_DMR_SR25_20RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_DMR_SR25_20RndMag1";
        model = "\My_DF_Weapons_DMR\SR25\Mag\20RndMag\SR25_20RndMag.p3d";
        weight = 200;
        weightPerQuantityUnit = 5;
        itemSize[] = { 1, 3 };
        count = 20;
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
            "My_DF_Weapons_DMR\SR25\Mag\20RndMag\data\SR25_20RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\SR25\Mag\20RndMag\data\SR25_20RndMag.rvmat"
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
                                "My_DF_Weapons_DMR\SR25\Mag\20RndMag\data\SR25_20RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\SR25\Mag\20RndMag\data\SR25_20RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\SR25\Mag\20RndMag\data\SR25_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\SR25\Mag\20RndMag\data\SR25_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\SR25\Mag\20RndMag\data\SR25_20RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_DMR_SVD_10RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_DMR_SVD_10RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_DMR_SVD_10RndMag1";
        model = "\My_DF_Weapons_DMR\SVD\Mag\10RndMag\SVD_10RndMag.p3d";
        weight = 200;
        weightPerQuantityUnit = 5;
        itemSize[] = { 1, 2 };
        count = 10;
        ammo = "Bullet_762x54";
        ammoItems[] = { "Ammo_762x54", "Ammo_762x54Tracer", "My_DF_Weapons_Ammo_762x54R_BT", "My_DF_Weapons_Ammo_762x54R_LPS", "My_DF_Weapons_Ammo_762x54R_SNB", "My_DF_Weapons_Ammo_762x54R_T46M" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\SVD\Mag\10RndMag\data\SVD_10RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\SVD\Mag\10RndMag\data\SVD_10RndMag.rvmat"
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
                                "My_DF_Weapons_DMR\SVD\Mag\10RndMag\data\SVD_10RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\SVD\Mag\10RndMag\data\SVD_10RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\SVD\Mag\10RndMag\data\SVD_10RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\SVD\Mag\10RndMag\data\SVD_10RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\SVD\Mag\10RndMag\data\SVD_10RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_DMR_SVD_20RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_DMR_SVD_20RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_DMR_SVD_20RndMag1";
        model = "\My_DF_Weapons_DMR\SVD\Mag\20RndMag\SVD_20RndMag.p3d";
        weight = 200;
        weightPerQuantityUnit = 5;
        itemSize[] = { 1, 3 };
        count = 20;
        ammo = "Bullet_762x54";
        ammoItems[] = { "Ammo_762x54", "Ammo_762x54Tracer", "My_DF_Weapons_Ammo_762x54R_BT", "My_DF_Weapons_Ammo_762x54R_LPS", "My_DF_Weapons_Ammo_762x54R_SNB", "My_DF_Weapons_Ammo_762x54R_T46M" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\SVD\Mag\20RndMag\data\SVD_20RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\SVD\Mag\20RndMag\data\SVD_20RndMag.rvmat"
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
                                "My_DF_Weapons_DMR\SVD\Mag\20RndMag\data\SVD_20RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\SVD\Mag\20RndMag\data\SVD_20RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\SVD\Mag\20RndMag\data\SVD_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\SVD\Mag\20RndMag\data\SVD_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\SVD\Mag\20RndMag\data\SVD_20RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_DMR_VSS_10RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_DMR_VSS_10RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_DMR_VSS_10RndMag1";
        model = "\My_DF_Weapons_DMR\VSS\Mag\10RndMag\VSS_10RndMag.p3d";
        weight = 200;
        weightPerQuantityUnit = 3;
        itemSize[] = { 1, 2 };
        count = 10;
        ammo = "Bullet_9x39";
        ammoItems[] = { "Ammo_9x39", "Ammo_9x39AP", "My_DF_Weapons_Ammo_9x39_BP", "My_DF_Weapons_Ammo_9x39_SP5", "My_DF_Weapons_Ammo_9x39_SP6" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\VSS\Mag\10RndMag\data\VSS_10RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\VSS\Mag\10RndMag\data\VSS_10RndMag.rvmat"
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
                                "My_DF_Weapons_DMR\VSS\Mag\10RndMag\data\VSS_10RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\VSS\Mag\10RndMag\data\VSS_10RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\VSS\Mag\10RndMag\data\VSS_10RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\VSS\Mag\10RndMag\data\VSS_10RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\VSS\Mag\10RndMag\data\VSS_10RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_DMR_VSS_30RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_DMR_VSS_30RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_DMR_VSS_30RndMag1";
        model = "\My_DF_Weapons_DMR\VSS\Mag\30RndMag\VSS_30RndMag.p3d";
        weight = 300;
        weightPerQuantityUnit = 3;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_9x39";
        ammoItems[] = { "Ammo_9x39", "Ammo_9x39AP", "My_DF_Weapons_Ammo_9x39_BP", "My_DF_Weapons_Ammo_9x39_SP5", "My_DF_Weapons_Ammo_9x39_SP6" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\VSS\Mag\30RndMag\data\VSS_30RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\VSS\Mag\30RndMag\data\VSS_30RndMag.rvmat"
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
                                "My_DF_Weapons_DMR\VSS\Mag\30RndMag\data\VSS_30RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\VSS\Mag\30RndMag\data\VSS_30RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\VSS\Mag\30RndMag\data\VSS_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\VSS\Mag\30RndMag\data\VSS_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\VSS\Mag\30RndMag\data\VSS_30RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_DMR_VSS_45RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_DMR_VSS_45RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_DMR_VSS_45RndMag1";
        model = "\My_DF_Weapons_DMR\VSS\Mag\45RndMag\VSS_45RndMag.p3d";
        weight = 500;
        weightPerQuantityUnit = 3;
        itemSize[] = { 1, 4 };
        count = 45;
        ammo = "Bullet_9x39";
        ammoItems[] = { "Ammo_9x39", "Ammo_9x39AP", "My_DF_Weapons_Ammo_9x39_BP", "My_DF_Weapons_Ammo_9x39_SP5", "My_DF_Weapons_Ammo_9x39_SP6" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\VSS\Mag\45RndMag\data\VSS_45RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\VSS\Mag\45RndMag\data\VSS_45RndMag.rvmat"
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
                                "My_DF_Weapons_DMR\VSS\Mag\45RndMag\data\VSS_45RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\VSS\Mag\45RndMag\data\VSS_45RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\VSS\Mag\45RndMag\data\VSS_45RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\VSS\Mag\45RndMag\data\VSS_45RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\VSS\Mag\45RndMag\data\VSS_45RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
};