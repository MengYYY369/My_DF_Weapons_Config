class CfgPatches
{
	class My_DF_Weapons_LMG_config
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"My_DF_Weapons_Magazine",
			"My_DF_Weapons_LMG_M249",
			"My_DF_Weapons_LMG_M250",
			"My_DF_Weapons_LMG_PKM",
			"My_DF_Weapons_LMG_QJB201"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
    class Rifle_Base;
    class My_DF_Weapons_LMG_M249_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_LMG\M249\M249.p3d";
        itemSize[] = { 10, 3 };
        weight = 5000;
        absorbency = 0;
        ObstructionDistance = 0.612;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.3;
        barrelArmor = 3;
        initSpeedMultiplier = 0.8;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "Ammo_556x45",
            "Ammo_556x45Tracer",
            "My_DF_Weapons_Ammo_556x45_FMJ",
            "My_DF_Weapons_Ammo_556x45_M855",
            "My_DF_Weapons_Ammo_556x45_M855A1",
            "My_DF_Weapons_Ammo_556x45_M995",
            "My_DF_Weapons_Ammo_556x45_RRLP"
        };
        magazines[] = {
            "Mag_STANAG_30Rnd",
            "Mag_STANAGCoupled_30Rnd",
            "Mag_STANAG_60Rnd",
            "Mag_CMAG_10Rnd",
            "Mag_CMAG_10Rnd_Black",
            "Mag_CMAG_10Rnd_Green",
            "Mag_CMAG_20Rnd",
            "Mag_CMAG_20Rnd_Black",
            "Mag_CMAG_20Rnd_Green",
            "Mag_CMAG_30Rnd",
            "Mag_CMAG_30Rnd_Black",
            "Mag_CMAG_30Rnd_Green",
            "Mag_CMAG_40Rnd",
            "Mag_CMAG_40Rnd_Black",
            "Mag_CMAG_40Rnd_Green",
            "Mag_M249_Box200Rnd",
            "My_DF_Weapons_Rifles_M4A1_20RndMag",
            "My_DF_Weapons_Rifles_M4A1_30RndMag",
            "My_DF_Weapons_Rifles_M4A1_30RndMag2",
            "My_DF_Weapons_Rifles_M4A1_30RndPMag",
            "My_DF_Weapons_Rifles_M4A1_45RndMag",
            "My_DF_Weapons_Rifles_M4A1_60RndDrumMag",
            "My_DF_Weapons_Rifles_M4A1_60RndMag",
            "My_DF_Weapons_LMG_M249_100RndMag"
        };
        attachments[] = {
            "DF_stock",
            "DF_handguard_M249",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_barrel_M249",
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_muzzle",
            "DF_bipod",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.2;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2, 2, 0.85 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "barrel",
            "frosight",
            "handguard",
            "sight",
            "stock",
            "pisg",
            "rail_bipod",
            "rail_l",
            "rail_r",
            "rail_d",
            "mag1",
            "mag2"
        };
        hiddenSelections[] = {
            "barrel",
            "frosight",
            "handguard",
            "sight",
            "stock",
            "rec",
            "pisg"
        };
        class NoiseShoot
        {
            strength = 100;
            type = "shot";
        };
        modes[] = {
            "FullAuto",
            "SemiAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_LMG_M249_Shot_SoundSet", "AK_Tail_SoundSet", "AK_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_LMG_M249_silencer_SoundSet", "AK_silencerTail_SoundSet", "AK_silencerInteriorTail_SoundSet" }, { "AK_silencerHomeMade_SoundSet", "AK_silencerHomeMadeTail_SoundSet", "AK_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.12;
            recoil = "recoil_AKM";
            recoilProne = "recoil_AKM_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = { "My_DF_Weapons_LMG_M249_Shot_SoundSet", "AK_Tail_SoundSet", "AK_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_LMG_M249_silencer_SoundSet", "AK_silencerTail_SoundSet", "AK_silencerInteriorTail_SoundSet" }, { "AK_silencerHomeMade_SoundSet", "AK_silencerHomeMadeTail_SoundSet", "AK_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.075;
            recoil = "recoil_AKM";
            recoilProne = "recoil_AKM_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoRifle
        {
            memoryPointCamera = "eye";
            discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
            discreteDistanceInitIndex = 0;
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 1000;
        };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = { 0, 0, 0.1 };
                orientation[] = { 0, 45, 0 };
            };
            class Melee
            {
                position[] = { 0, 0, -0.1 };
                orientation[] = { 0, -45, 0 };
            };
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\AKM\w_AKM_states.anm";
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
                    overrideParticle = "weapon_shot_akm_01";
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
                maxOverheatingValue = 12;
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
                    onlyWithinOverheatLimits[] = { 0.5, 0.7 };
                    positionOffset[] = { 0.1, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrel3
                {
                    overrideParticle = "smoking_barrel_heavy";
                    onlyWithinOverheatLimits[] = { 0.7, 1 };
                    positionOffset[] = { 0.1, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0.1, 0, 0 };
                    onlyWithinRainLimits[] = { 0.2, 0.5 };
                };
                class SmokingBarrelHotSteam
                {
                    overrideParticle = "smoking_barrel_steam";
                    positionOffset[] = { 0.1, 0, 0 };
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
    class My_DF_Weapons_LMG_M249: My_DF_Weapons_LMG_M249_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_LMG_M2490";
        descriptionShort = "$STR_My_DF_Weapons_LMG_M2491";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_LMG\M249\data\barrel\M249_barrel_co.paa",
            "My_DF_Weapons_LMG\M249\data\frosight\M249_frosight_co.paa",
            "My_DF_Weapons_LMG\M249\data\handguard\M249_handguard_co.paa",
            "My_DF_Weapons_LMG\M249\data\sight\M249_sight_co.paa",
            "My_DF_Weapons_LMG\M249\data\stock\M249_stock_co.paa",
            "My_DF_Weapons_LMG\M249\data\M249_co.paa",
            "My_DF_Weapons_Attachments\pisg\SG553_pisg\data\SG553_pisg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_LMG\M249\data\barrel\M249_barrel.rvmat",
            "My_DF_Weapons_LMG\M249\data\frosight\M249_frosight.rvmat",
            "My_DF_Weapons_LMG\M249\data\handguard\M249_handguard.rvmat",
            "My_DF_Weapons_LMG\M249\data\sight\M249_sight.rvmat",
            "My_DF_Weapons_LMG\M249\data\stock\M249_stock.rvmat",
            "My_DF_Weapons_LMG\M249\data\M249.rvmat",
            "My_DF_Weapons_Attachments\pisg\SG553_pisg\data\SG553_pisg.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1000;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_LMG\M249\data\barrel\M249_barrel.rvmat",
                                "My_DF_Weapons_LMG\M249\data\frosight\M249_frosight.rvmat",
                                "My_DF_Weapons_LMG\M249\data\handguard\M249_handguard.rvmat",
                                "My_DF_Weapons_LMG\M249\data\sight\M249_sight.rvmat",
                                "My_DF_Weapons_LMG\M249\data\stock\M249_stock.rvmat",
                                "My_DF_Weapons_LMG\M249\data\M249.rvmat",
                                "My_DF_Weapons_Attachments\pisg\SG553_pisg\data\SG553_pisg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_LMG\M249\data\barrel\M249_barrel_worn.rvmat",
                                "My_DF_Weapons_LMG\M249\data\frosight\M249_frosight_worn.rvmat",
                                "My_DF_Weapons_LMG\M249\data\handguard\M249_handguard_worn.rvmat",
                                "My_DF_Weapons_LMG\M249\data\sight\M249_sight_worn.rvmat",
                                "My_DF_Weapons_LMG\M249\data\stock\M249_stock_worn.rvmat",
                                "My_DF_Weapons_LMG\M249\data\M249_worn.rvmat",
                                "My_DF_Weapons_Attachments\pisg\SG553_pisg\data\SG553_pisg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_LMG\M249\data\barrel\M249_barrel_damage.rvmat",
                                "My_DF_Weapons_LMG\M249\data\frosight\M249_frosight_damage.rvmat",
                                "My_DF_Weapons_LMG\M249\data\handguard\M249_handguard_damage.rvmat",
                                "My_DF_Weapons_LMG\M249\data\sight\M249_sight_damage.rvmat",
                                "My_DF_Weapons_LMG\M249\data\stock\M249_stock_damage.rvmat",
                                "My_DF_Weapons_LMG\M249\data\M249_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\SG553_pisg\data\SG553_pisg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_LMG\M249\data\barrel\M249_barrel_damage.rvmat",
                                "My_DF_Weapons_LMG\M249\data\frosight\M249_frosight_damage.rvmat",
                                "My_DF_Weapons_LMG\M249\data\handguard\M249_handguard_damage.rvmat",
                                "My_DF_Weapons_LMG\M249\data\sight\M249_sight_damage.rvmat",
                                "My_DF_Weapons_LMG\M249\data\stock\M249_stock_damage.rvmat",
                                "My_DF_Weapons_LMG\M249\data\M249_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\SG553_pisg\data\SG553_pisg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_LMG\M249\data\barrel\M249_barrel_destruct.rvmat",
                                "My_DF_Weapons_LMG\M249\data\frosight\M249_frosight_destruct.rvmat",
                                "My_DF_Weapons_LMG\M249\data\handguard\M249_handguard_destruct.rvmat",
                                "My_DF_Weapons_LMG\M249\data\sight\M249_sight_destruct.rvmat",
                                "My_DF_Weapons_LMG\M249\data\stock\M249_stock_destruct.rvmat",
                                "My_DF_Weapons_LMG\M249\data\M249_destruct.rvmat",
                                "My_DF_Weapons_Attachments\pisg\SG553_pisg\data\SG553_pisg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_LMG_M250_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_LMG\M250\M250.p3d";
        itemSize[] = { 10, 3 };
        weight = 5000;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.2;
        ObstructionDistance = 0.807;
        barrelArmor = 2.2;
        initSpeedMultiplier = 0.9;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "My_DF_Weapons_Ammo_68x51_FMJ",
            "My_DF_Weapons_Ammo_68x51_Hybird",
            "My_DF_Weapons_Ammo_68x51_AP"
        };
        magazines[] = {
            "My_DF_Weapons_LMG_M250_75RndMag",
            "My_DF_Weapons_LMG_M250_125RndMag"
        };
        attachments[] = {
            "DF_stock_notube",
            "DF_ar_pisg",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_barrel_M250",
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_muzzle",
            "DF_bipod_M250",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.45;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2.3, 2.3, 0.9 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "barrel",
            "frosight",
            "pisg",
            "sight",
            "stock",
            "rail_d",
            "rail_l",
            "rail_r",
            "bufferadapter",
            "frosight_up",
            "frosight_down",
            "sight_up",
            "sight_down",
            "firemode_fullauto",
            "firemode_semiauto",
            "firemode_safe"
        };
        hiddenSelections[] = {
            "barrel",
            "frosight",
            "pisg",
            "rec",
            "rec2",
            "sight",
            "stock"
        };
        class NoiseShoot
        {
            strength = 100;
            type = "shot";
        };
        modes[] = {
            "FullAuto",
            "SemiAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_LMG_M250_Shot_SoundSet", "FNFAL_Tail_SoundSet", "FNFAL_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_LMG_M250_silencer_SoundSet", "FNFAL_silencerHomeMadeTail_SoundSet", "FNFAL_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.13;
            recoil = "recoil_fal";
            recoilProne = "recoil_fal_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = { "My_DF_Weapons_LMG_M250_Shot_SoundSet", "FNFAL_Tail_SoundSet", "FNFAL_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_LMG_M250_silencer_SoundSet", "FNFAL_silencerHomeMadeTail_SoundSet", "FNFAL_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.095;
            recoil = "recoil_fal";
            recoilProne = "recoil_fal_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoRifle
        {
            memoryPointCamera = "eye";
            discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
            discreteDistanceInitIndex = 0;
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 1000;
        };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = {-0.05, 0, 0.02 };
                orientation[] = { 0, 0, 0 };
            };
            class Melee
            {
                position[] = {-0.05, 0, -0.05 };
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
                maxOverheatingValue = 8;
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
                class SmokingBarrelHotSteam
                {
                    overrideParticle = "smoking_barrel_steam";
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
        weaponStateAnim = "dz\anims\anm\player\reloads\FNFaL\w_FNFaL_states.anm";
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
    class My_DF_Weapons_LMG_M250: My_DF_Weapons_LMG_M250_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_LMG_M2500";
        descriptionShort = "$STR_My_DF_Weapons_LMG_M2501";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_LMG\M250\data\barrel\M250_barrel_co.paa",
            "My_DF_Weapons_LMG\M250\data\frosight\M250_frosight_co.paa",
            "My_DF_Weapons_LMG\M250\data\pisg\M250_pisg_co.paa",
            "My_DF_Weapons_LMG\M250\data\M250_1_co.paa",
            "My_DF_Weapons_LMG\M250\data\M250_2_co.paa",
            "My_DF_Weapons_LMG\M250\data\sight\M250_sight_co.paa",
            "My_DF_Weapons_LMG\M250\data\stock\M250_stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_LMG\M250\data\barrel\M250_barrel.rvmat",
            "My_DF_Weapons_LMG\M250\data\frosight\M250_frosight.rvmat",
            "My_DF_Weapons_LMG\M250\data\pisg\M250_pisg.rvmat",
            "My_DF_Weapons_LMG\M250\data\M250_1.rvmat",
            "My_DF_Weapons_LMG\M250\data\M250_2.rvmat",
            "My_DF_Weapons_LMG\M250\data\sight\M250_sight.rvmat",
            "My_DF_Weapons_LMG\M250\data\stock\M250_stock.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1000;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_LMG\M250\data\barrel\M250_barrel.rvmat",
                                "My_DF_Weapons_LMG\M250\data\frosight\M250_frosight.rvmat",
                                "My_DF_Weapons_LMG\M250\data\pisg\M250_pisg.rvmat",
                                "My_DF_Weapons_LMG\M250\data\M250_1.rvmat",
                                "My_DF_Weapons_LMG\M250\data\M250_2.rvmat",
                                "My_DF_Weapons_LMG\M250\data\sight\M250_sight.rvmat",
                                "My_DF_Weapons_LMG\M250\data\stock\M250_stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_LMG\M250\data\barrel\M250_barrel_worn.rvmat",
                                "My_DF_Weapons_LMG\M250\data\frosight\M250_frosight_worn.rvmat",
                                "My_DF_Weapons_LMG\M250\data\pisg\M250_pisg_worn.rvmat",
                                "My_DF_Weapons_LMG\M250\data\M250_1_worn.rvmat",
                                "My_DF_Weapons_LMG\M250\data\M250_2_worn.rvmat",
                                "My_DF_Weapons_LMG\M250\data\sight\M250_sight_worn.rvmat",
                                "My_DF_Weapons_LMG\M250\data\stock\M250_stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_LMG\M250\data\barrel\M250_barrel_damage.rvmat",
                                "My_DF_Weapons_LMG\M250\data\frosight\M250_frosight_damage.rvmat",
                                "My_DF_Weapons_LMG\M250\data\pisg\M250_pisg_damage.rvmat",
                                "My_DF_Weapons_LMG\M250\data\M250_1_damage.rvmat",
                                "My_DF_Weapons_LMG\M250\data\M250_2_damage.rvmat",
                                "My_DF_Weapons_LMG\M250\data\sight\M250_sight_damage.rvmat",
                                "My_DF_Weapons_LMG\M250\data\stock\M250_stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_LMG\M250\data\barrel\M250_barrel_damage.rvmat",
                                "My_DF_Weapons_LMG\M250\data\frosight\M250_frosight_damage.rvmat",
                                "My_DF_Weapons_LMG\M250\data\pisg\M250_pisg_damage.rvmat",
                                "My_DF_Weapons_LMG\M250\data\M250_1_damage.rvmat",
                                "My_DF_Weapons_LMG\M250\data\M250_2_damage.rvmat",
                                "My_DF_Weapons_LMG\M250\data\sight\M250_sight_damage.rvmat",
                                "My_DF_Weapons_LMG\M250\data\stock\M250_stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_LMG\M250\data\barrel\M250_barrel_destruct.rvmat",
                                "My_DF_Weapons_LMG\M250\data\frosight\M250_frosight_destruct.rvmat",
                                "My_DF_Weapons_LMG\M250\data\pisg\M250_pisg_destruct.rvmat",
                                "My_DF_Weapons_LMG\M250\data\M250_1_destruct.rvmat",
                                "My_DF_Weapons_LMG\M250\data\M250_2_destruct.rvmat",
                                "My_DF_Weapons_LMG\M250\data\sight\M250_sight_destruct.rvmat",
                                "My_DF_Weapons_LMG\M250\data\stock\M250_stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_LMG_PKM_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_LMG\PKM\PKM.p3d";
        itemSize[] = { 10, 3 };
        weight = 5000;
        absorbency = 0;
        ObstructionDistance = 0.612;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.3;
        barrelArmor = 3;
        initSpeedMultiplier = 0.8;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "Ammo_762x54",
            "Ammo_762x54Tracer",
            "My_DF_Weapons_Ammo_762x54R_BT",
            "My_DF_Weapons_Ammo_762x54R_LPS",
            "My_DF_Weapons_Ammo_762x54R_SNB",
            "My_DF_Weapons_Ammo_762x54R_T46M"
        };
        magazines[] = {
            "My_DF_Weapons_LMG_PKM_75RndMag",
            "My_DF_Weapons_LMG_PKM_125RndMag"
        };
        attachments[] = {
            "DF_stock",
            "DF_ak_pisg",
            "DF_ak_handlecap",
            "DF_handguard_PKM",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_barrel_PKM",
            "DF_Handle_PKM",
            "DF_muzzle",
            "DF_bipod_PKM",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.2;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2, 2, 0.85 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "barrel",
            "sight",
            "stock",
            "pisg"
        };
        hiddenSelections[] = {
            "barrel",
            "sight",
            "stock",
            "rec"
        };
        class NoiseShoot
        {
            strength = 80;
            type = "shot";
        };
        modes[] = {
            "FullAuto",
            "SemiAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_LMG_PKM_Shot_SoundSet", "AK_Tail_SoundSet", "AK_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_LMG_PKM_silencer_SoundSet", "AK_silencerTail_SoundSet", "AK_silencerInteriorTail_SoundSet" }, { "AK_silencerHomeMade_SoundSet", "AK_silencerHomeMadeTail_SoundSet", "AK_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.15;
            recoil = "recoil_AKM";
            recoilProne = "recoil_AKM_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = { "My_DF_Weapons_LMG_PKM_Shot_SoundSet", "AK_Tail_SoundSet", "AK_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_LMG_PKM_silencer_SoundSet", "AK_silencerTail_SoundSet", "AK_silencerInteriorTail_SoundSet" }, { "AK_silencerHomeMade_SoundSet", "AK_silencerHomeMadeTail_SoundSet", "AK_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.08;
            recoil = "recoil_AKM";
            recoilProne = "recoil_AKM_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoRifle
        {
            memoryPointCamera = "eye";
            discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
            discreteDistanceInitIndex = 0;
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 1000;
        };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = { 0, 0, 0.1 };
                orientation[] = { 0, 45, 0 };
            };
            class Melee
            {
                position[] = { 0, 0, -0.1 };
                orientation[] = { 0, -45, 0 };
            };
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\AKM\w_AKM_states.anm";
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
                    overrideParticle = "weapon_shot_akm_01";
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
                maxOverheatingValue = 12;
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
                    onlyWithinOverheatLimits[] = { 0.5, 0.7 };
                    positionOffset[] = { 0.1, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrel3
                {
                    overrideParticle = "smoking_barrel_heavy";
                    onlyWithinOverheatLimits[] = { 0.7, 1 };
                    positionOffset[] = { 0.1, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0.1, 0, 0 };
                    onlyWithinRainLimits[] = { 0.2, 0.5 };
                };
                class SmokingBarrelHotSteam
                {
                    overrideParticle = "smoking_barrel_steam";
                    positionOffset[] = { 0.1, 0, 0 };
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
        };
    };
    class My_DF_Weapons_LMG_PKM: My_DF_Weapons_LMG_PKM_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_LMG_PKM0";
        descriptionShort = "$STR_My_DF_Weapons_LMG_PKM1";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_LMG\PKM\data\barrel\PKM_barrel_co.paa",
            "My_DF_Weapons_LMG\PKM\data\sight\PKM_sight_co.paa",
            "My_DF_Weapons_LMG\PKM\data\stock\PKM_stock_co.paa",
            "My_DF_Weapons_LMG\PKM\data\PKM_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_LMG\PKM\data\barrel\PKM_barrel.rvmat",
            "My_DF_Weapons_LMG\PKM\data\sight\PKM_sight.rvmat",
            "My_DF_Weapons_LMG\PKM\data\stock\PKM_stock.rvmat",
            "My_DF_Weapons_LMG\PKM\data\PKM.rvmat"
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
                                "My_DF_Weapons_LMG\PKM\data\barrel\PKM_barrel.rvmat",
                                "My_DF_Weapons_LMG\PKM\data\sight\PKM_sight.rvmat",
                                "My_DF_Weapons_LMG\PKM\data\stock\PKM_stock.rvmat",
                                "My_DF_Weapons_LMG\PKM\data\PKM.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_LMG\PKM\data\barrel\PKM_barrel_worn.rvmat",
                                "My_DF_Weapons_LMG\PKM\data\sight\PKM_sight_worn.rvmat",
                                "My_DF_Weapons_LMG\PKM\data\stock\PKM_stock_worn.rvmat",
                                "My_DF_Weapons_LMG\PKM\data\PKM_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_LMG\PKM\data\barrel\PKM_barrel_damage.rvmat",
                                "My_DF_Weapons_LMG\PKM\data\sight\PKM_sight_damage.rvmat",
                                "My_DF_Weapons_LMG\PKM\data\stock\PKM_stock_damage.rvmat",
                                "My_DF_Weapons_LMG\PKM\data\PKM_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_LMG\PKM\data\barrel\PKM_barrel_damage.rvmat",
                                "My_DF_Weapons_LMG\PKM\data\sight\PKM_sight_damage.rvmat",
                                "My_DF_Weapons_LMG\PKM\data\stock\PKM_stock_damage.rvmat",
                                "My_DF_Weapons_LMG\PKM\data\PKM_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_LMG\PKM\data\barrel\PKM_barrel_destruct.rvmat",
                                "My_DF_Weapons_LMG\PKM\data\sight\PKM_sight_destruct.rvmat",
                                "My_DF_Weapons_LMG\PKM\data\stock\PKM_stock_destruct.rvmat",
                                "My_DF_Weapons_LMG\PKM\data\PKM_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_LMG_QJB201_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_LMG\QJB201\QJB201.p3d";
        itemSize[] = { 10, 3 };
        weight = 5000;
        absorbency = 0;
        ObstructionDistance = 0.635;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.3;
        barrelArmor = 3;
        initSpeedMultiplier = 0.8;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "My_DF_Weapons_Ammo_58X42_DBP10",
            "My_DF_Weapons_Ammo_58X42_DBP87",
            "My_DF_Weapons_Ammo_58X42_DVC12",
            "My_DF_Weapons_Ammo_58X42_DVP88"
        };
        magazines[] = {
            "My_DF_Weapons_LMG_QJB201_45RndMag",
            "My_DF_Weapons_LMG_QJB201_125RndMag",
            "My_DF_Weapons_Rifles_QBZ95_30RndMag",
            "My_DF_Weapons_Rifles_QBZ191_30RndMag",
            "My_DF_Weapons_Rifles_QBZ191_60RndMag"
        };
        attachments[] = {
            "DF_stock",
            "DF_PLA_pisg",
            "DF_handguard_QJB201",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_barrel_QJB201",
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_muzzle",
            "DF_bipod_QJB201",
            "DF_Piston_QJB201",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.2;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2, 2, 0.85 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "bullet",
            "magazine",
            "hide_barrel",
            "barrel",
            "frosight",
            "handguard",
            "Piston",
            "sight",
            "stock",
            "stock_tube",
            "pisg",
            "rail_d",
            "rail_l",
            "rail_r"
        };
        hiddenSelections[] = {
            "barrel",
            "frosight",
            "handguard",
            "Piston",
            "sight",
            "stock",
            "stock_tube",
            "rec",
            "pisg"
        };
        class NoiseShoot
        {
            strength = 100;
            type = "shot";
        };
        modes[] = {
            "FullAuto",
            "SemiAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_LMG_QJB201_Shot_SoundSet", "AK_Tail_SoundSet", "AK_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_LMG_QJB201_silencer_SoundSet", "AK_silencerTail_SoundSet", "AK_silencerInteriorTail_SoundSet" }, { "AK_silencerHomeMade_SoundSet", "AK_silencerHomeMadeTail_SoundSet", "AK_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.11;
            recoil = "recoil_AK101";
            recoilProne = "recoil_AK101_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = { "My_DF_Weapons_LMG_QJB201_Shot_SoundSet", "AK_Tail_SoundSet", "AK_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_LMG_QJB201_silencer_SoundSet", "AK_silencerTail_SoundSet", "AK_silencerInteriorTail_SoundSet" }, { "AK_silencerHomeMade_SoundSet", "AK_silencerHomeMadeTail_SoundSet", "AK_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.07;
            recoil = "recoil_AK101";
            recoilProne = "recoil_AK101_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoRifle
        {
            memoryPointCamera = "eye";
            discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
            discreteDistanceInitIndex = 0;
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 1000;
        };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = { 0, -0.015, -0.01 };
                orientation[] = { 0, -20, 0 };
            };
            class Melee
            {
                position[] = { 0, 0, 0 };
                orientation[] = { 0, 10, 0 };
            };
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\AK101\w_AK101_states.anm";
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
                    overrideParticle = "weapon_shot_ak101_01";
                    ignoreIfSuppressed = 1;
                    illuminateWorld = 1;
                    positionOffset[] = {-0.1, 0, 0 };
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
                    onlyWithinOverheatLimits[] = { 0, 0.7 };
                    positionOffset[] = { 0.1, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrel2
                {
                    overrideParticle = "smoking_barrel";
                    onlyWithinOverheatLimits[] = { 0.7, 1 };
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
            class frosight
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
    class My_DF_Weapons_LMG_QJB201: My_DF_Weapons_LMG_QJB201_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_LMG_QJB2010";
        descriptionShort = "$STR_My_DF_Weapons_LMG_QJB2011";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_LMG\QJB201\data\barrel\QJB201_barrel_co.paa",
            "My_DF_Weapons_LMG\QJB201\data\frosight\QJB201_frosight_co.paa",
            "My_DF_Weapons_LMG\QJB201\data\handguard\QJB201_handguard_co.paa",
            "My_DF_Weapons_LMG\QJB201\data\Piston\QJB201_Piston_co.paa",
            "My_DF_Weapons_LMG\QJB201\data\sight\QJB201_sight_co.paa",
            "My_DF_Weapons_LMG\QJB201\data\stock\QJB201_stock_co.paa",
            "My_DF_Weapons_LMG\QJB201\data\stock_tube\QJB201_stock_tube_co.paa",
            "My_DF_Weapons_LMG\QJB201\data\QJB201_co.paa",
            "My_DF_Weapons_Attachments\pisg\QJB201_pisg\data\QJB201_pisg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_LMG\QJB201\data\barrel\QJB201_barrel.rvmat",
            "My_DF_Weapons_LMG\QJB201\data\frosight\QJB201_frosight.rvmat",
            "My_DF_Weapons_LMG\QJB201\data\handguard\QJB201_handguard.rvmat",
            "My_DF_Weapons_LMG\QJB201\data\Piston\QJB201_Piston.rvmat",
            "My_DF_Weapons_LMG\QJB201\data\sight\QJB201_sight.rvmat",
            "My_DF_Weapons_LMG\QJB201\data\stock\QJB201_stock.rvmat",
            "My_DF_Weapons_LMG\QJB201\data\stock_tube\QJB201_stock_tube.rvmat",
            "My_DF_Weapons_LMG\QJB201\data\QJB201.rvmat",
            "My_DF_Weapons_Attachments\pisg\QJB201_pisg\data\QJB201_pisg.rvmat"
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
                                "My_DF_Weapons_LMG\QJB201\data\barrel\QJB201_barrel.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\frosight\QJB201_frosight.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\handguard\QJB201_handguard.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\Piston\QJB201_Piston.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\sight\QJB201_sight.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\stock\QJB201_stock.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\stock_tube\QJB201_stock_tube.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\QJB201.rvmat",
                                "My_DF_Weapons_Attachments\pisg\QJB201_pisg\data\QJB201_pisg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_LMG\QJB201\data\barrel\QJB201_barrel_worn.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\frosight\QJB201_frosight_worn.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\handguard\QJB201_handguard_worn.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\Piston\QJB201_Piston_worn.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\sight\QJB201_sight_worn.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\stock\QJB201_stock_worn.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\stock_tube\QJB201_stock_tube_worn.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\QJB201_worn.rvmat",
                                "My_DF_Weapons_Attachments\pisg\QJB201_pisg\data\QJB201_pisg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_LMG\QJB201\data\barrel\QJB201_barrel_damage.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\frosight\QJB201_frosight_damage.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\handguard\QJB201_handguard_damage.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\Piston\QJB201_Piston_damage.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\sight\QJB201_sight_damage.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\stock\QJB201_stock_damage.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\stock_tube\QJB201_stock_tube_damage.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\QJB201_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\QJB201_pisg\data\QJB201_pisg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_LMG\QJB201\data\barrel\QJB201_barrel_damage.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\frosight\QJB201_frosight_damage.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\handguard\QJB201_handguard_damage.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\Piston\QJB201_Piston_damage.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\sight\QJB201_sight_damage.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\stock\QJB201_stock_damage.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\stock_tube\QJB201_stock_tube_damage.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\QJB201_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\QJB201_pisg\data\QJB201_pisg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_LMG\QJB201\data\barrel\QJB201_barrel_destruct.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\frosight\QJB201_frosight_destruct.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\handguard\QJB201_handguard_destruct.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\Piston\QJB201_Piston_destruct.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\sight\QJB201_sight_destruct.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\stock\QJB201_stock_destruct.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\stock_tube\QJB201_stock_tube_destruct.rvmat",
                                "My_DF_Weapons_LMG\QJB201\data\QJB201_destruct.rvmat",
                                "My_DF_Weapons_Attachments\pisg\QJB201_pisg\data\QJB201_pisg_destruct.rvmat"
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
    class My_DF_Weapons_LMG_M249_100RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_LMG_M249_100RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_LMG_M249_100RndMag1";
        model = "\My_DF_Weapons_LMG\M249\Mag\100RndMag\M249_100RndMag.p3d";
        weight = 800;
        weightPerQuantityUnit = 5;
        itemSize[] = { 3, 3 };
        count = 100;
        ammo = "Bullet_556x45";
        ammoItems[] = { "Ammo_556x45", "Ammo_556x45Tracer", "My_DF_Weapons_Ammo_556x45_FMJ", "My_DF_Weapons_Ammo_556x45_M855", "My_DF_Weapons_Ammo_556x45_M855A1", "My_DF_Weapons_Ammo_556x45_M995", "My_DF_Weapons_Ammo_556x45_RRLP" };
        tracersEvery = 0;
        attachments[] = {};
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_LMG\M249\Mag\100RndMag\data\M249_100RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_LMG\M249\Mag\100RndMag\data\M249_100RndMag.rvmat"
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
                                "My_DF_Weapons_LMG\M249\Mag\100RndMag\data\M249_100RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_LMG\M249\Mag\100RndMag\data\M249_100RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_LMG\M249\Mag\100RndMag\data\M249_100RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_LMG\M249\Mag\100RndMag\data\M249_100RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_LMG\M249\Mag\100RndMag\data\M249_100RndMag_destruct.rvmat"
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
            class bullet_3
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_4
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_5
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_6
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_7
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_8
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_9
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_10
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_11
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_12
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_13
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_LMG_M250_125RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_LMG_M250_125RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_LMG_M250_125RndMag1";
        model = "\My_DF_Weapons_LMG\M250\Mag\125RndMag\M250_125RndMag.p3d";
        weight = 800;
        weightPerQuantityUnit = 5;
        itemSize[] = { 3, 3 };
        count = 125;
        ammo = "Bullet_DF_68x51_FMJ";
        ammoItems[] = { "My_DF_Weapons_Ammo_68x51_FMJ", "My_DF_Weapons_Ammo_68x51_Hybird", "My_DF_Weapons_Ammo_68x51_AP" };
        tracersEvery = 0;
        attachments[] = {};
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_LMG\M250\Mag\125RndMag\data\M250_125RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_LMG\M250\Mag\125RndMag\data\M250_125RndMag.rvmat"
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
                                "My_DF_Weapons_LMG\M250\Mag\125RndMag\data\M250_125RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_LMG\M250\Mag\125RndMag\data\M250_125RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_LMG\M250\Mag\125RndMag\data\M250_125RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_LMG\M250\Mag\125RndMag\data\M250_125RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_LMG\M250\Mag\125RndMag\data\M250_125RndMag_destruct.rvmat"
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
            class bullet_3
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_4
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_5
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_6
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_7
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_8
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_9
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_10
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_11
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_12
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_13
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_14
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_15
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_16
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_LMG_M250_75RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_LMG_M250_75RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_LMG_M250_75RndMag1";
        model = "\My_DF_Weapons_LMG\M250\Mag\75RndMag\M250_75RndMag.p3d";
        weight = 800;
        weightPerQuantityUnit = 5;
        itemSize[] = { 3, 3 };
        count = 75;
        ammo = "Bullet_DF_68x51_FMJ";
        ammoItems[] = { "My_DF_Weapons_Ammo_68x51_FMJ", "My_DF_Weapons_Ammo_68x51_Hybird", "My_DF_Weapons_Ammo_68x51_AP" };
        tracersEvery = 0;
        attachments[] = {};
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_LMG\M250\Mag\75RndMag\data\M250_75RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_LMG\M250\Mag\75RndMag\data\M250_75RndMag.rvmat"
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
                                "My_DF_Weapons_LMG\M250\Mag\75RndMag\data\M250_75RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_LMG\M250\Mag\75RndMag\data\M250_75RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_LMG\M250\Mag\75RndMag\data\M250_75RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_LMG\M250\Mag\75RndMag\data\M250_75RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_LMG\M250\Mag\75RndMag\data\M250_75RndMag_destruct.rvmat"
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
            class bullet_3
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_4
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_5
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_6
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_7
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_8
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_9
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_10
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_11
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_12
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_13
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_14
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_15
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_16
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_LMG_PKM_125RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_LMG_PKM_125RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_LMG_PKM_125RndMag1";
        model = "\My_DF_Weapons_LMG\PKM\Mag\125RndMag\PKM_125RndMag.p3d";
        weight = 1000;
        weightPerQuantityUnit = 5;
        itemSize[] = { 3, 3 };
        count = 125;
        ammo = "Bullet_DF_762x54R_LPS";
        ammoItems[] = { "Ammo_762x54", "Ammo_762x54Tracer", "My_DF_Weapons_Ammo_762x54R_BT", "My_DF_Weapons_Ammo_762x54R_LPS", "My_DF_Weapons_Ammo_762x54R_SNB", "My_DF_Weapons_Ammo_762x54R_T46M" };
        tracersEvery = 0;
        attachments[] = {};
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_LMG\PKM\Mag\125RndMag\data\PKM_125RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_LMG\PKM\Mag\125RndMag\data\PKM_125RndMag.rvmat"
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
                                "My_DF_Weapons_LMG\PKM\Mag\125RndMag\data\PKM_125RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_LMG\PKM\Mag\125RndMag\data\PKM_125RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_LMG\PKM\Mag\125RndMag\data\PKM_125RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_LMG\PKM\Mag\125RndMag\data\PKM_125RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_LMG\PKM\Mag\125RndMag\data\PKM_125RndMag_destruct.rvmat"
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
            class bullet_3
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_4
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_5
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_6
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_7
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_8
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_9
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_LMG_PKM_75RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_LMG_PKM_75RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_LMG_PKM_75RndMag1";
        model = "\My_DF_Weapons_LMG\PKM\Mag\75RndMag\PKM_75RndMag.p3d";
        weight = 800;
        weightPerQuantityUnit = 5;
        itemSize[] = { 3, 3 };
        count = 75;
        ammo = "Bullet_DF_762x54R_LPS";
        ammoItems[] = { "Ammo_762x54", "Ammo_762x54Tracer", "My_DF_Weapons_Ammo_762x54R_BT", "My_DF_Weapons_Ammo_762x54R_LPS", "My_DF_Weapons_Ammo_762x54R_SNB", "My_DF_Weapons_Ammo_762x54R_T46M" };
        tracersEvery = 0;
        attachments[] = {};
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_LMG\PKM\Mag\75RndMag\data\PKM_75RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_LMG\PKM\Mag\75RndMag\data\PKM_75RndMag.rvmat"
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
                                "My_DF_Weapons_LMG\PKM\Mag\75RndMag\data\PKM_75RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_LMG\PKM\Mag\75RndMag\data\PKM_75RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_LMG\PKM\Mag\75RndMag\data\PKM_75RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_LMG\PKM\Mag\75RndMag\data\PKM_75RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_LMG\PKM\Mag\75RndMag\data\PKM_75RndMag_destruct.rvmat"
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
            class bullet_3
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_4
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_5
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_6
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_7
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_8
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_9
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_LMG_QJB201_125RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_LMG_QJB201_125RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_LMG_QJB201_125RndMag1";
        model = "\My_DF_Weapons_LMG\QJB201\Mag\125RndMag\QJB201_125RndMag.p3d";
        weight = 800;
        weightPerQuantityUnit = 5;
        itemSize[] = { 3, 3 };
        count = 125;
        ammo = "Bullet_DF_58X42_DBP10";
        ammoItems[] = { "My_DF_Weapons_Ammo_58X42_DBP10", "My_DF_Weapons_Ammo_58X42_DBP87", "My_DF_Weapons_Ammo_58X42_DVC12", "My_DF_Weapons_Ammo_58X42_DVP88" };
        tracersEvery = 0;
        attachments[] = {};
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_LMG\QJB201\Mag\125RndMag\data\QJB201_125RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_LMG\QJB201\Mag\125RndMag\data\QJB201_125RndMag.rvmat"
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
                                "My_DF_Weapons_LMG\QJB201\Mag\125RndMag\data\QJB201_125RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_LMG\QJB201\Mag\125RndMag\data\QJB201_125RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_LMG\QJB201\Mag\125RndMag\data\QJB201_125RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_LMG\QJB201\Mag\125RndMag\data\QJB201_125RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_LMG\QJB201\Mag\125RndMag\data\QJB201_125RndMag_destruct.rvmat"
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
            class bullet_3
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_4
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_5
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_6
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_7
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_8
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_9
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class bullet_10
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_LMG_QJB201_45RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_LMG_QJB201_45RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_LMG_QJB201_45RndMag1";
        model = "\My_DF_Weapons_LMG\QJB201\Mag\45RndMag\QJB201_45RndMag.p3d";
        weight = 800;
        weightPerQuantityUnit = 5;
        itemSize[] = { 1, 3 };
        count = 45;
        ammo = "Bullet_DF_58X42_DBP10";
        ammoItems[] = { "My_DF_Weapons_Ammo_58X42_DBP10", "My_DF_Weapons_Ammo_58X42_DBP87", "My_DF_Weapons_Ammo_58X42_DVC12", "My_DF_Weapons_Ammo_58X42_DVP88" };
        tracersEvery = 0;
        attachments[] = {};
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_LMG\QJB201\Mag\45RndMag\data\QJB201_45RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_LMG\QJB201\Mag\45RndMag\data\QJB201_45RndMag.rvmat"
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
                                "My_DF_Weapons_LMG\QJB201\Mag\45RndMag\data\QJB201_45RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_LMG\QJB201\Mag\45RndMag\data\QJB201_45RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_LMG\QJB201\Mag\45RndMag\data\QJB201_45RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_LMG\QJB201\Mag\45RndMag\data\QJB201_45RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_LMG\QJB201\Mag\45RndMag\data\QJB201_45RndMag_destruct.rvmat"
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
            class bullet_3
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
};