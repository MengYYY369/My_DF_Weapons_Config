class CfgPatches
{
	class My_DF_Weapons_Rifles_config
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Firearms",
			"My_DF_Weapons_Magazine",
			"My_DF_Weapons_Rifles",
			"My_DF_Weapons_Rifles_AK12",
			"My_DF_Weapons_Rifles_AKM",
			"My_DF_Weapons_Rifles_AKS74U",
			"My_DF_Weapons_Rifles_Ash12",
			"My_DF_Weapons_Rifles_ASVAL",
			"My_DF_Weapons_Rifles_AUG",
			"My_DF_Weapons_Rifles_CAR15",
			"My_DF_Weapons_Rifles_G3",
			"My_DF_Weapons_Rifles_K416",
			"My_DF_Weapons_Rifles_K437",
			"My_DF_Weapons_Rifles_KC17",
			"My_DF_Weapons_Rifles_M16A4",
			"My_DF_Weapons_Rifles_M4A1",
			"My_DF_Weapons_Rifles_M7",
			"My_DF_Weapons_Rifles_MK47",
			"My_DF_Weapons_Rifles_PTR32",
			"My_DF_Weapons_Rifles_QBZ191",
			"My_DF_Weapons_Rifles_QBZ95",
			"My_DF_Weapons_Rifles_SCARH",
			"My_DF_Weapons_Rifles_SG553"
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
    class My_DF_Weapons_Rifles_AK12_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_Rifles\AK12\AK12.p3d";
        itemSize[] = { 8, 3 };
        weight = 3070;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 0.85000002;
        barrelArmor = 2.743;
        initSpeedMultiplier = 0.69999999;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "Ammo_545x39",
            "Ammo_545x39Tracer",
            "My_DF_Weapons_Ammo_545x39_BS",
            "My_DF_Weapons_Ammo_545x39_BT",
            "My_DF_Weapons_Ammo_545x39_PRS",
            "My_DF_Weapons_Ammo_545x39_PS",
            "My_DF_Weapons_Ammo_545x39_T"
        };
        magazines[] = {
            "Mag_AK74_30Rnd",
            "Mag_AK74_30Rnd_Black",
            "Mag_AK74_30Rnd_Green",
            "Mag_AK74_45Rnd",
            "My_DF_Weapons_Rifles_AK12_30RndMag",
            "My_DF_Weapons_Rifles_AK74_20RndMag",
            "My_DF_Weapons_Rifles_AK74_30RndMag",
            "My_DF_Weapons_Rifles_AKS74U_30RndMag",
            "My_DF_Weapons_Rifles_AKS74U_45RndExtMag",
            "My_DF_Weapons_Rifles_AKS74U_75RndDrumMag"
        };
        attachments[] = {
            "DF_stock",
            "DF_ak_pisg",
            "DF_ak_handlecap",
            "DF_handguard_AK12",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_frog_down",
            "DF_frog_up",
            "DF_frog_left",
            "DF_frog_right",
            "DF_muzzle",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.2;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2.2, 2.2, 1.2 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "magazine",
            "rec",
            "barrel",
            "handguard",
            "pisg",
            "sights",
            "tube",
            "stock"
        };
        hiddenSelections[] = {
            "rec",
            "barrel",
            "handguard",
            "pisg",
            "sights",
            "stock"
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
            soundSetShot[] = {
                "My_DF_Weapons_Rifles_AK12_Shot_SoundSet",
                "AK_Tail_SoundSet",
                "AK_InteriorTail_SoundSet"
            };
            soundSetShotExt[] = {
                {
                    "My_DF_Weapons_Rifles_AK12_silencer_SoundSet",
                    "AK_silencerTail_SoundSet",
                    "AK_silencerInteriorTail_SoundSet"
                }
            };
            reloadTime = 0.12;
            recoil = "recoil_AK74";
            recoilProne = "recoil_AK74_prone";
            dispersion = 0.0020000001;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = {
                "My_DF_Weapons_Rifles_AK12_Shot_SoundSet",
                "AK_Tail_SoundSet",
                "AK_InteriorTail_SoundSet"
            };
            soundSetShotExt[] = {
                {
                    "My_DF_Weapons_Rifles_AK12_silencer_SoundSet",
                    "AK_silencerTail_SoundSet",
                    "AK_silencerInteriorTail_SoundSet"
                }
            };
            reloadTime = 0.09;
            recoil = "recoil_AK74";
            recoilProne = "recoil_AK74_prone";
            dispersion = 0.0020000001;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoRifle
        {};
        weaponStateAnim = "dz/anims/anm/player/reloads/AK101/w_AK101_states.anm";
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
                    overrideParticle = "weapon_shot_ak74_01";
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
                overheatingDecayInterval = 0.69999999;
                class SmokingBarrel1
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinOverheatLimits[] = { 0, 0.69999999 };
                    positionOffset[] = { 0.1, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrel2
                {
                    overrideParticle = "smoking_barrel";
                    onlyWithinOverheatLimits[] = { 0.69999999, 1 };
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
    class My_DF_Weapons_Rifles_AK12: My_DF_Weapons_Rifles_AK12_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_AK120";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_AK121";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\AK12\data\AK12_co.paa",
            "My_DF_Weapons_Attachments\handguard\AK12\data\barrel\AK12_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\AK12\data\AK12_handguard_std_co.paa",
            "My_DF_Weapons_Rifles\AK12\data\pisg\AK12_pisg_co.paa",
            "My_DF_Weapons_Rifles\AK12\data\sights\AK12_sights_co.paa",
            "My_DF_Weapons_Rifles\AK12\data\stock\AK12_stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\AK12\data\AK12.rvmat",
            "My_DF_Weapons_Attachments\handguard\AK12\data\barrel\AK12_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\AK12\data\AK12_handguard_std.rvmat",
            "My_DF_Weapons_Rifles\AK12\data\pisg\AK12_pisg.rvmat",
            "My_DF_Weapons_Rifles\AK12\data\sights\AK12_sights.rvmat",
            "My_DF_Weapons_Rifles\AK12\data\stock\AK12_stock.rvmat"
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
                                "My_DF_Weapons_Rifles\AK12\data\AK12.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK12\data\barrel\AK12_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK12\data\AK12_handguard_std.rvmat",
                                "My_DF_Weapons_Rifles\AK12\data\pisg\AK12_pisg.rvmat",
                                "My_DF_Weapons_Rifles\AK12\data\sights\AK12_sights.rvmat",
                                "My_DF_Weapons_Rifles\AK12\data\stock\AK12_stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\AK12\data\AK12_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK12\data\barrel\AK12_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK12\data\AK12_handguard_std_worn.rvmat",
                                "My_DF_Weapons_Rifles\AK12\data\pisg\AK12_pisg_worn.rvmat",
                                "My_DF_Weapons_Rifles\AK12\data\sights\AK12_sights_worn.rvmat",
                                "My_DF_Weapons_Rifles\AK12\data\stock\AK12_stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\AK12\data\AK12_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK12\data\barrel\AK12_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK12\data\AK12_handguard_std_damage.rvmat",
                                "My_DF_Weapons_Rifles\AK12\data\pisg\AK12_pisg_damage.rvmat",
                                "My_DF_Weapons_Rifles\AK12\data\sights\AK12_sights_damage.rvmat",
                                "My_DF_Weapons_Rifles\AK12\data\stock\AK12_stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\AK12\data\AK12_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK12\data\barrel\AK12_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK12\data\AK12_handguard_std_damage.rvmat",
                                "My_DF_Weapons_Rifles\AK12\data\pisg\AK12_pisg_damage.rvmat",
                                "My_DF_Weapons_Rifles\AK12\data\sights\AK12_sights_damage.rvmat",
                                "My_DF_Weapons_Rifles\AK12\data\stock\AK12_stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\AK12\data\AK12_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK12\data\barrel\AK12_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK12\data\AK12_handguard_std_destruct.rvmat",
                                "My_DF_Weapons_Rifles\AK12\data\pisg\AK12_pisg_destruct.rvmat",
                                "My_DF_Weapons_Rifles\AK12\data\sights\AK12_sights_destruct.rvmat",
                                "My_DF_Weapons_Rifles\AK12\data\stock\AK12_stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_AKM_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_Rifles\AKM\AKM.p3d";
        itemSize[] = { 8, 3 };
        weight = 2700;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.0;
        barrelArmor = 3;
        initSpeedMultiplier = 1;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "Ammo_762x39",
            "Ammo_762x39Tracer",
            "My_DF_Weapons_Ammo_762x39_AP",
            "My_DF_Weapons_Ammo_762x39_BP",
            "My_DF_Weapons_Ammo_762x39_LP",
            "My_DF_Weapons_Ammo_762x39_PS",
            "My_DF_Weapons_Ammo_762x39_T45N"
        };
        magazines[] = {
            "Mag_AKM_30Rnd",
            "Mag_AKM_Palm30Rnd",
            "Mag_AKM_Palm30Rnd_Black",
            "Mag_AKM_Palm30Rnd_Green",
            "Mag_AKM_Drum75Rnd",
            "Mag_AKM_Drum75Rnd_Green",
            "Mag_AKM_Drum75Rnd_Black",
            "My_DF_Weapons_Rifles_AKM_20RndMag",
            "My_DF_Weapons_Rifles_AKM_30RndMag",
            "My_DF_Weapons_Rifles_AKM_30RndMag2",
            "My_DF_Weapons_Rifles_AKM_30RndMag3",
            "My_DF_Weapons_Rifles_AKM_40RndMag",
            "My_DF_Weapons_Rifles_AKM_70RndMag"
        };
        attachments[] = {
            "DF_stock_pad",
            "DF_stock",
            "DF_ak_pisg",
            "DF_ak_handlecap",
            "DF_handguard_AKM",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_mount_SVD",
            "DF_barrel_AKM",
            "DF_muzzle",
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
            "handguard",
            "sight",
            "stock",
            "pisg"
        };
        hiddenSelections[] = {
            "barrel",
            "handguard",
            "sight",
            "stock",
            "pisg",
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
            soundSetShot[] = {
                "My_DF_Weapons_Rifles_AKM_Shot_SoundSet",
                "AK_Tail_SoundSet",
                "AK_InteriorTail_SoundSet"
            };
            soundSetShotExt[] = {
                {
                    "My_DF_Weapons_Rifles_AKM_silencer_SoundSet",
                    "AK_silencerTail_SoundSet",
                    "AK_silencerInteriorTail_SoundSet"
                }
            };
            reloadTime = 0.12;
            recoil = "recoil_AKM";
            recoilProne = "recoil_AKM_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = {
                "My_DF_Weapons_Rifles_AKM_Shot_SoundSet",
                "AK_Tail_SoundSet",
                "AK_InteriorTail_SoundSet"
            };
            soundSetShotExt[] = {
                {
                    "My_DF_Weapons_Rifles_AKM_silencer_SoundSet",
                    "AK_silencerTail_SoundSet",
                    "AK_silencerInteriorTail_SoundSet"
                }
            };
            reloadTime = 0.1;
            recoil = "recoil_AKM";
            recoilProne = "recoil_AKM_prone";
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
    class My_DF_Weapons_Rifles_AKM: My_DF_Weapons_Rifles_AKM_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_AKM0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_AKM1";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\AKM\data\barrel\AKM_barrel_co.paa",
            "My_DF_Weapons_Rifles\AKM\data\handguard\AKM_handguard_co.paa",
            "My_DF_Weapons_Rifles\AKM\data\sight\AKM_sight_co.paa",
            "My_DF_Weapons_Attachments\stock\AK74_Std\data\AK74_Std_co.paa",
            "My_DF_Weapons_Attachments\pisg\AK74\data\AK74_co.paa",
            "My_DF_Weapons_Rifles\AKM\data\AKM_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\AKM\data\barrel\AKM_barrel.rvmat",
            "My_DF_Weapons_Rifles\AKM\data\handguard\AKM_handguard.rvmat",
            "My_DF_Weapons_Rifles\AKM\data\sight\AKM_sight.rvmat",
            "My_DF_Weapons_Attachments\stock\AK74_Std\data\AK74_Std.rvmat",
            "My_DF_Weapons_Attachments\pisg\AK74\data\AK74.rvmat",
            "My_DF_Weapons_Rifles\AKM\data\AKM.rvmat"
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
                                "My_DF_Weapons_Rifles\AKM\data\barrel\AKM_barrel.rvmat",
                                "My_DF_Weapons_Rifles\AKM\data\handguard\AKM_handguard.rvmat",
                                "My_DF_Weapons_Rifles\AKM\data\sight\AKM_sight.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK74_Std\data\AK74_Std.rvmat",
                                "My_DF_Weapons_Attachments\pisg\AK74\data\AK74.rvmat",
                                "My_DF_Weapons_Rifles\AKM\data\AKM.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\AKM\data\barrel\AKM_barrel_worn.rvmat",
                                "My_DF_Weapons_Rifles\AKM\data\handguard\AKM_handguard_worn.rvmat",
                                "My_DF_Weapons_Rifles\AKM\data\sight\AKM_sight_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK74_Std\data\AK74_Std_worn.rvmat",
                                "My_DF_Weapons_Attachments\pisg\AK74\data\AK74_worn.rvmat",
                                "My_DF_Weapons_Rifles\AKM\data\AKM_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\AKM\data\barrel\AKM_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\AKM\data\handguard\AKM_handguard_damage.rvmat",
                                "My_DF_Weapons_Rifles\AKM\data\sight\AKM_sight_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK74_Std\data\AK74_Std_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\AK74\data\AK74_damage.rvmat",
                                "My_DF_Weapons_Rifles\AKM\data\AKM_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\AKM\data\barrel\AKM_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\AKM\data\handguard\AKM_handguard_damage.rvmat",
                                "My_DF_Weapons_Rifles\AKM\data\sight\AKM_sight_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK74_Std\data\AK74_Std_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\AK74\data\AK74_damage.rvmat",
                                "My_DF_Weapons_Rifles\AKM\data\AKM_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\AKM\data\barrel\AKM_barrel_destruct.rvmat",
                                "My_DF_Weapons_Rifles\AKM\data\handguard\AKM_handguard_destruct.rvmat",
                                "My_DF_Weapons_Rifles\AKM\data\sight\AKM_sight_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK74_Std\data\AK74_Std_destruct.rvmat",
                                "My_DF_Weapons_Attachments\pisg\AK74\data\AK74_destruct.rvmat",
                                "My_DF_Weapons_Rifles\AKM\data\AKM_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_AKS74U_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_Rifles\AKS74U\AKS74U.p3d";
        itemSize[] = { 6, 3 };
        weight = 2500;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 0.8;
        barrelArmor = 2.5;
        initSpeedMultiplier = 0.65;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "Ammo_545x39",
            "Ammo_545x39Tracer",
            "My_DF_Weapons_Ammo_545x39_BS",
            "My_DF_Weapons_Ammo_545x39_BT",
            "My_DF_Weapons_Ammo_545x39_PRS",
            "My_DF_Weapons_Ammo_545x39_PS",
            "My_DF_Weapons_Ammo_545x39_T"
        };
        magazines[] = {
            "Mag_AK74_30Rnd",
            "Mag_AK74_30Rnd_Black",
            "Mag_AK74_30Rnd_Green",
            "Mag_AK74_45Rnd",
            "My_DF_Weapons_Rifles_AK12_30RndMag",
            "My_DF_Weapons_Rifles_AK74_20RndMag",
            "My_DF_Weapons_Rifles_AK74_30RndMag",
            "My_DF_Weapons_Rifles_AKS74U_30RndMag",
            "My_DF_Weapons_Rifles_AKS74U_45RndExtMag",
            "My_DF_Weapons_Rifles_AKS74U_75RndDrumMag"
        };
        attachments[] = {
            "DF_stock_pad",
            "DF_stock",
            "DF_ak_pisg",
            "DF_ak_handlecap",
            "DF_handguard_up_AKS74U",
            "DF_handguard_AKS74U",
            "weaponWrap",
            "weaponOptics",
            "DF_mount_SVD",
            "DF_mount",
            "DF_muzzle",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.2;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1.8, 1.8, 0.7 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "magazine",
            "bullet",
            "barrel",
            "handguard",
            "sight",
            "stock",
            "pisg",
            "handguard_down",
            "handguard_up"
        };
        hiddenSelections[] = {
            "barrel",
            "handguard",
            "sight",
            "stock",
            "pisg",
            "rec"
        };
        class NoiseShoot
        {
            strength = 80;
            type = "shot";
        };
        modes[] = {
            "SemiAuto",
            "FullAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = {
                "My_DF_Weapons_Rifles_AKS74U_Shot_SoundSet",
                "AK_Tail_SoundSet",
                "AK_InteriorTail_SoundSet"
            };
            soundSetShotExt[] = {
                {
                    "My_DF_Weapons_Rifles_AKS74U_silencer_SoundSet",
                    "AK_silencerTail_SoundSet",
                    "AK_silencerInteriorTail_SoundSet"
                }
            };
            reloadTime = 0.12;
            recoil = "recoil_AK74";
            recoilProne = "recoil_AK74_prone";
            dispersion = 0.003;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = {
                "My_DF_Weapons_Rifles_AKS74U_Shot_SoundSet",
                "AK_Tail_SoundSet",
                "AK_InteriorTail_SoundSet"
            };
            soundSetShotExt[] = {
                {
                    "My_DF_Weapons_Rifles_AKS74U_silencer_SoundSet",
                    "AK_silencerTail_SoundSet",
                    "AK_silencerInteriorTail_SoundSet"
                }
            };
            reloadTime = 0.1;
            recoil = "recoil_AK74";
            recoilProne = "recoil_AK74_prone";
            dispersion = 0.003;
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
        weaponStateAnim = "dz\anims\anm\player\reloads\AK74U\w_AKS74U_states.anm";
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
                    overrideParticle = "weapon_shot_ak74_01";
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
                    positionOffset[] = { 0.01, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrel2
                {
                    overrideParticle = "smoking_barrel";
                    onlyWithinOverheatLimits[] = { 0.7, 1 };
                    positionOffset[] = { 0.01, 0, 0 };
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
    class My_DF_Weapons_Rifles_AKS74U: My_DF_Weapons_Rifles_AKS74U_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_AKS74U0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_AKS74U1";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\AKS74U\data\barrel\AKS74U_barrel_co.paa",
            "My_DF_Weapons_Rifles\AKS74U\data\handguard\AKS74U_handguard_co.paa",
            "My_DF_Weapons_Rifles\AKS74U\data\sight\AKS74U_sight_co.paa",
            "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std_co.paa",
            "My_DF_Weapons_Attachments\pisg\AK100\data\AKS_co.paa",
            "My_DF_Weapons_Rifles\AKS74U\data\AKS74U_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\AKS74U\data\barrel\AKS74U_barrel.rvmat",
            "My_DF_Weapons_Rifles\AKS74U\data\handguard\AKS74U_handguard.rvmat",
            "My_DF_Weapons_Rifles\AKS74U\data\sight\AKS74U_sight.rvmat",
            "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std.rvmat",
            "My_DF_Weapons_Attachments\pisg\AK100\data\AKS.rvmat",
            "My_DF_Weapons_Rifles\AKS74U\data\AKS74U.rvmat"
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
                                "My_DF_Weapons_Rifles\AKS74U\data\barrel\AKS74U_barrel.rvmat",
                                "My_DF_Weapons_Rifles\AKS74U\data\handguard\AKS74U_handguard.rvmat",
                                "My_DF_Weapons_Rifles\AKS74U\data\sight\AKS74U_sight.rvmat",
                                "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std.rvmat",
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AKS.rvmat",
                                "My_DF_Weapons_Rifles\AKS74U\data\AKS74U.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\AKS74U\data\barrel\AKS74U_barrel_worn.rvmat",
                                "My_DF_Weapons_Rifles\AKS74U\data\handguard\AKS74U_handguard_worn.rvmat",
                                "My_DF_Weapons_Rifles\AKS74U\data\sight\AKS74U_sight_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std_worn.rvmat",
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AKS_worn.rvmat",
                                "My_DF_Weapons_Rifles\AKS74U\data\AKS74U_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\AKS74U\data\barrel\AKS74U_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\AKS74U\data\handguard\AKS74U_handguard_damage.rvmat",
                                "My_DF_Weapons_Rifles\AKS74U\data\sight\AKS74U_sight_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AKS_damage.rvmat",
                                "My_DF_Weapons_Rifles\AKS74U\data\AKS74U_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\AKS74U\data\barrel\AKS74U_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\AKS74U\data\handguard\AKS74U_handguard_damage.rvmat",
                                "My_DF_Weapons_Rifles\AKS74U\data\sight\AKS74U_sight_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AKS_damage.rvmat",
                                "My_DF_Weapons_Rifles\AKS74U\data\AKS74U_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\AKS74U\data\barrel\AKS74U_barrel_destruct.rvmat",
                                "My_DF_Weapons_Rifles\AKS74U\data\handguard\AKS74U_handguard_destruct.rvmat",
                                "My_DF_Weapons_Rifles\AKS74U\data\sight\AKS74U_sight_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std_destruct.rvmat",
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AKS_destruct.rvmat",
                                "My_DF_Weapons_Rifles\AKS74U\data\AKS74U_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_Ash12_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_Rifles\Ash12\Ash12.p3d";
        itemSize[] = { 10, 3 };
        weight = 5000;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.2;
        barrelArmor = 5;
        initSpeedMultiplier = 1;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "My_DF_Weapons_Ammo_127x55_BP",
            "My_DF_Weapons_Ammo_127x55_PD12",
            "My_DF_Weapons_Ammo_127x55_PS12",
            "My_DF_Weapons_Ammo_127x55_PS12A",
            "My_DF_Weapons_Ammo_127x55_PS12B"
        };
        magazines[] = {
            "My_DF_Weapons_Rifles_Ash12_20RndMag",
            "My_DF_Weapons_Rifles_Ash12_30RndMag"
        };
        attachments[] = {
            "DF_stock_Ash12",
            "weaponWrap",
            "weaponOptics",
            "DF_barrel_Ash12",
            "DF_mount",
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_muzzle_Ash12",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.3;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1.1, 1.1, 0.7 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "bullet",
            "magazine",
            "hide_barrel",
            "barrel",
            "handguard",
            "mount",
            "stock"
        };
        hiddenSelections[] = {
            "barrel",
            "handguard",
            "mount",
            "stock",
            "rec"
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
            soundSetShot[] = { "My_DF_Weapons_Rifles_Ash12_Shot_SoundSet", "Famas_Tail_SoundSet", "Famas_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_Ash12_silencer_SoundSet", "Famas_silencerTail_SoundSet", "Famas_silencerInteriorTail_SoundSet" }, { "Famas_silencerHomeMade_SoundSet", "Famas_silencerHomeMadeTail_SoundSet", "Famas_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.25;
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = { "My_DF_Weapons_Rifles_Ash12_Shot_SoundSet", "Famas_Tail_SoundSet", "Famas_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_Ash12_silencer_SoundSet", "Famas_silencerTail_SoundSet", "Famas_silencerInteriorTail_SoundSet" }, { "Famas_silencerHomeMade_SoundSet", "Famas_silencerHomeMadeTail_SoundSet", "Famas_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.15;
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
                position[] = {-0.25, 0.035, 0 };
                orientation[] = { 0, 0, 0 };
            };
            class Melee
            {
                position[] = {-0.25, 0.035, -0.03 };
                orientation[] = { 0, 0, 0 };
            };
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\Famas\w_famas_states.anm";
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
    class My_DF_Weapons_Rifles_Ash12: My_DF_Weapons_Rifles_Ash12_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_Ash120";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_Ash121";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\Ash12\data\barrel\Ash12_barrel_co.paa",
            "My_DF_Weapons_Rifles\Ash12\data\handguard\Ash12_handguard_co.paa",
            "My_DF_Weapons_Rifles\Ash12\data\mount\Ash12_mount_co.paa",
            "My_DF_Weapons_Rifles\Ash12\data\stock\Ash12_stock_co.paa",
            "My_DF_Weapons_Rifles\Ash12\data\Ash12_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\Ash12\data\barrel\Ash12_barrel.rvmat",
            "My_DF_Weapons_Rifles\Ash12\data\handguard\Ash12_handguard.rvmat",
            "My_DF_Weapons_Rifles\Ash12\data\mount\Ash12_mount.rvmat",
            "My_DF_Weapons_Rifles\Ash12\data\stock\Ash12_stock.rvmat",
            "My_DF_Weapons_Rifles\Ash12\data\Ash12.rvmat"
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
                                "My_DF_Weapons_Rifles\Ash12\data\barrel\Ash12_barrel.rvmat",
                                "My_DF_Weapons_Rifles\Ash12\data\handguard\Ash12_handguard.rvmat",
                                "My_DF_Weapons_Rifles\Ash12\data\mount\Ash12_mount.rvmat",
                                "My_DF_Weapons_Rifles\Ash12\data\stock\Ash12_stock.rvmat",
                                "My_DF_Weapons_Rifles\Ash12\data\Ash12.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\Ash12\data\barrel\Ash12_barrel_worn.rvmat",
                                "My_DF_Weapons_Rifles\Ash12\data\handguard\Ash12_handguard_worn.rvmat",
                                "My_DF_Weapons_Rifles\Ash12\data\mount\Ash12_mount_worn.rvmat",
                                "My_DF_Weapons_Rifles\Ash12\data\stock\Ash12_stock_worn.rvmat",
                                "My_DF_Weapons_Rifles\Ash12\data\Ash12_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\Ash12\data\barrel\Ash12_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\Ash12\data\handguard\Ash12_handguard_damage.rvmat",
                                "My_DF_Weapons_Rifles\Ash12\data\mount\Ash12_mount_damage.rvmat",
                                "My_DF_Weapons_Rifles\Ash12\data\stock\Ash12_stock_damage.rvmat",
                                "My_DF_Weapons_Rifles\Ash12\data\Ash12_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\Ash12\data\barrel\Ash12_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\Ash12\data\handguard\Ash12_handguard_damage.rvmat",
                                "My_DF_Weapons_Rifles\Ash12\data\mount\Ash12_mount_damage.rvmat",
                                "My_DF_Weapons_Rifles\Ash12\data\stock\Ash12_stock_damage.rvmat",
                                "My_DF_Weapons_Rifles\Ash12\data\Ash12_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\Ash12\data\barrel\Ash12_barrel_destruct.rvmat",
                                "My_DF_Weapons_Rifles\Ash12\data\handguard\Ash12_handguard_destruct.rvmat",
                                "My_DF_Weapons_Rifles\Ash12\data\mount\Ash12_mount_destruct.rvmat",
                                "My_DF_Weapons_Rifles\Ash12\data\stock\Ash12_stock_destruct.rvmat",
                                "My_DF_Weapons_Rifles\Ash12\data\Ash12_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_ASVAL_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_Rifles\ASVAL\ASVAL.p3d";
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
        chamberableFrom[] = {
            "Ammo_9x39",
            "Ammo_9x39AP",
            "My_DF_Weapons_Ammo_9x39_BP",
            "My_DF_Weapons_Ammo_9x39_SP5",
            "My_DF_Weapons_Ammo_9x39_SP6"
        };
        magazines[] = {
            "Mag_VSS_10Rnd",
            "Mag_VAL_20Rnd",
            "Mag_Vikhr_30Rnd",
            "My_DF_Weapons_DMR_VSS_10RndMag",
            "My_DF_Weapons_DMR_VSS_30RndMag",
            "My_DF_Weapons_DMR_VSS_45RndMag"
        };
        attachments[] = {
            "DF_stock",
            "DF_ak_pisg",
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
            "stock",
            "pisg"
        };
        hiddenSelections[] = {
            "barrel",
            "handguard",
            "Kit",
            "rec",
            "stock",
            "pisg"
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
            soundSetShot[] = { "My_DF_Weapons_Rifles_ASVAL_silencer_SoundSet", "ASVAL_Vintorez_Tail_SoundSet", "ASVAL_Vintorez_InteriorTail_SoundSet" };
            envShootingDecrease = 0.05;
            reloadTime = 0.12;
            recoil = "recoil_ASVAL";
            recoilProne = "recoil_ASVAL_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = { "My_DF_Weapons_Rifles_ASVAL_silencer_SoundSet", "ASVAL_Vintorez_Tail_SoundSet", "ASVAL_Vintorez_InteriorTail_SoundSet" };
            reloadTime = 0.05;
            recoil = "recoil_ASVAL";
            recoilProne = "recoil_ASVAL_prone";
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
        weaponStateAnim = "dz\anims\anm\player\reloads\ASVAL\w_ASVAL_states.anm";
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
    class My_DF_Weapons_Rifles_ASVAL: My_DF_Weapons_Rifles_ASVAL_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_ASVAL0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_ASVAL1";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\VSS\data\barrel\VSS_barrel_co.paa",
            "My_DF_Weapons_DMR\VSS\data\handguard\VSS_handguard_co.paa",
            "My_DF_Weapons_DMR\VSS\data\Kit\VSS_Kit_co.paa",
            "My_DF_Weapons_DMR\VSS\data\VSS_co.paa",
            "My_DF_Weapons_SMG\SR3M\data\stock\SR3M_stock_co.paa",
            "My_DF_Weapons_Attachments\pisg\ASVAL\data\ASVAL_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\VSS\data\barrel\VSS_barrel.rvmat",
            "My_DF_Weapons_DMR\VSS\data\handguard\VSS_handguard.rvmat",
            "My_DF_Weapons_DMR\VSS\data\Kit\VSS_Kit.rvmat",
            "My_DF_Weapons_DMR\VSS\data\VSS.rvmat",
            "My_DF_Weapons_SMG\SR3M\data\stock\SR3M_stock.rvmat",
            "My_DF_Weapons_Attachments\pisg\ASVAL\data\ASVAL.rvmat"
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
                                "My_DF_Weapons_SMG\SR3M\data\stock\SR3M_stock.rvmat",
                                "My_DF_Weapons_Attachments\pisg\ASVAL\data\ASVAL.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\VSS\data\barrel\VSS_barrel_worn.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\handguard\VSS_handguard_worn.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\Kit\VSS_Kit_worn.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\VSS_worn.rvmat",
                                "My_DF_Weapons_SMG\SR3M\data\stock\SR3M_stock_worn.rvmat",
                                "My_DF_Weapons_Attachments\pisg\ASVAL\data\ASVAL_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\VSS\data\barrel\VSS_barrel_damage.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\handguard\VSS_handguard_damage.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\Kit\VSS_Kit_damage.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\VSS_damage.rvmat",
                                "My_DF_Weapons_SMG\SR3M\data\stock\SR3M_stock_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\ASVAL\data\ASVAL_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\VSS\data\barrel\VSS_barrel_damage.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\handguard\VSS_handguard_damage.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\Kit\VSS_Kit_damage.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\VSS_damage.rvmat",
                                "My_DF_Weapons_SMG\SR3M\data\stock\SR3M_stock_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\ASVAL\data\ASVAL_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\VSS\data\barrel\VSS_barrel_destruct.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\handguard\VSS_handguard_destruct.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\Kit\VSS_Kit_destruct.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\VSS_destruct.rvmat",
                                "My_DF_Weapons_SMG\SR3M\data\stock\SR3M_stock_destruct.rvmat",
                                "My_DF_Weapons_Attachments\pisg\ASVAL\data\ASVAL_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_AUG_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_Rifles\AUG\AUG.p3d";
        itemSize[] = { 8, 3 };
        weight = 2500;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.1;
        barrelArmor = 2;
        ObstructionDistance = 0.526;
        ShoulderDistance = 0.05;
        initSpeedMultiplier = 1;
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
            "Mag_Aug_30Rnd",
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
            "My_DF_Weapons_Rifles_M4A1_20RndMag",
            "My_DF_Weapons_Rifles_M4A1_30RndMag",
            "My_DF_Weapons_Rifles_M4A1_30RndMag2",
            "My_DF_Weapons_Rifles_M4A1_30RndPMag",
            "My_DF_Weapons_Rifles_M4A1_45RndMag",
            "My_DF_Weapons_Rifles_M4A1_60RndDrumMag",
            "My_DF_Weapons_Rifles_M4A1_60RndMag",
            "My_DF_Weapons_Rifles_AUG_30RndMag",
            "My_DF_Weapons_Rifles_AUG_30RndPMag",
            "My_DF_Weapons_Rifles_AUG_60RndMag"
        };
        attachments[] = {
            "DF_stock_pad_AUG",
            "DF_handguard_AUG",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_frog_down",
            "DF_frog_right",
            "DF_muzzle",
            "DF_Pendant",
            "DF_muzzle_Hide"
        };
        magazineSwitchTime = 0.38;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1.1, 1.1, 0.7 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "charging",
            "bullet",
            "hide_barrel",
            "barrel",
            "frosight",
            "handguard",
            "sight",
            "stock",
            "rail"
        };
        hiddenSelections[] = {
            "barrel",
            "frosight",
            "handguard",
            "sight",
            "stock",
            "rail",
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
            soundSetShot[] = { "My_DF_Weapons_Rifles_AUG_Shot_SoundSet", "AUG_Tail_SoundSet", "AUG_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_AUG_silencer_SoundSet", "AUG_silencerTail_SoundSet", "AUG_silencerInteriorTail_SoundSet" }, { "AUG_silencerHomeMade_SoundSet", "AUG_silencerHomeMadeTail_SoundSet", "AUG_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.085;
            dispersion = 0.0015;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = { "My_DF_Weapons_Rifles_AUG_Shot_SoundSet", "AUG_Tail_SoundSet", "AUG_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_AUG_silencer_SoundSet", "AUG_silencerTail_SoundSet", "AUG_silencerInteriorTail_SoundSet" }, { "AUG_silencerHomeMade_SoundSet", "AUG_silencerHomeMadeTail_SoundSet", "AUG_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.08;
            dispersion = 0.0015;
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
                position[] = {-0.2, 0, 0 };
                orientation[] = { 0, 0, 0 };
            };
            class Melee
            {
                position[] = {-0.15, 0, -0.02 };
                orientation[] = { 0, 0, 0 };
            };
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\AUG\w_aug_states.anm";
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
                    positionOffset[] = { 0.32, 0, 0 };
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
                    positionOffset[] = { 0.43, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrel2
                {
                    overrideParticle = "smoking_barrel";
                    onlyWithinOverheatLimits[] = { 0.5, 0.7 };
                    positionOffset[] = { 0.43, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrel3
                {
                    overrideParticle = "smoking_barrel_heavy";
                    onlyWithinOverheatLimits[] = { 0.7, 1 };
                    positionOffset[] = { 0.43, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0.43, 0, 0 };
                    onlyWithinRainLimits[] = { 0.2, 0.6 };
                };
                class SmokingBarrelHotSteam
                {
                    overrideParticle = "smoking_barrel_steam";
                    positionOffset[] = { 0.43, 0, 0 };
                    onlyWithinRainLimits[] = { 0.6, 1 };
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
    class My_DF_Weapons_Rifles_AUG: My_DF_Weapons_Rifles_AUG_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_AUG0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_AUG1";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\AUG\data\barrel\AUG_barrel_co.paa",
            "My_DF_Weapons_Rifles\AUG\data\frosight\AUG_frosight_co.paa",
            "My_DF_Weapons_Rifles\AUG\data\handguard\AUG_handguard_co.paa",
            "My_DF_Weapons_Rifles\AUG\data\sight\AUG_sight_co.paa",
            "My_DF_Weapons_Rifles\AUG\data\stock\AUG_stock_co.paa",
            "My_DF_Weapons_Rifles\AUG\data\rail\AUG_rail_co.paa",
            "My_DF_Weapons_Rifles\AUG\data\AUG_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\AUG\data\barrel\AUG_barrel.rvmat",
            "My_DF_Weapons_Rifles\AUG\data\frosight\AUG_frosight.rvmat",
            "My_DF_Weapons_Rifles\AUG\data\handguard\AUG_handguard.rvmat",
            "My_DF_Weapons_Rifles\AUG\data\sight\AUG_sight.rvmat",
            "My_DF_Weapons_Rifles\AUG\data\stock\AUG_stock.rvmat",
            "My_DF_Weapons_Rifles\AUG\data\rail\AUG_rail.rvmat",
            "My_DF_Weapons_Rifles\AUG\data\AUG.rvmat"
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
                                "My_DF_Weapons_Rifles\AUG\data\barrel\AUG_barrel.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\frosight\AUG_frosight.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\handguard\AUG_handguard.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\sight\AUG_sight.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\stock\AUG_stock.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\rail\AUG_rail.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\AUG.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\AUG\data\barrel\AUG_barrel_worn.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\frosight\AUG_frosight_worn.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\handguard\AUG_handguard_worn.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\sight\AUG_sight_worn.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\stock\AUG_stock_worn.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\rail\AUG_rail_worn.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\AUG_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\AUG\data\barrel\AUG_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\frosight\AUG_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\handguard\AUG_handguard_damage.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\sight\AUG_sight_damage.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\stock\AUG_stock_damage.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\rail\AUG_rail_damage.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\AUG_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\AUG\data\barrel\AUG_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\frosight\AUG_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\handguard\AUG_handguard_damage.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\sight\AUG_sight_damage.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\stock\AUG_stock_damage.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\rail\AUG_rail_damage.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\AUG_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\AUG\data\barrel\AUG_barrel_destruct.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\frosight\AUG_frosight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\handguard\AUG_handguard_destruct.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\sight\AUG_sight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\stock\AUG_stock_destruct.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\rail\AUG_rail_destruct.rvmat",
                                "My_DF_Weapons_Rifles\AUG\data\AUG_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_CAR15_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_Rifles\CAR15\CAR15.p3d";
        itemSize[] = { 8, 3 };
        weight = 2500;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.1;
        barrelArmor = 2;
        ObstructionDistance = 0.526;
        ShoulderDistance = 0.05;
        initSpeedMultiplier = 1;
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
            "My_DF_Weapons_Rifles_M4A1_20RndMag",
            "My_DF_Weapons_Rifles_M4A1_30RndMag",
            "My_DF_Weapons_Rifles_M4A1_30RndMag2",
            "My_DF_Weapons_Rifles_M4A1_30RndPMag",
            "My_DF_Weapons_Rifles_M4A1_45RndMag",
            "My_DF_Weapons_Rifles_M4A1_60RndDrumMag",
            "My_DF_Weapons_Rifles_M4A1_60RndMag"
        };
        attachments[] = {
            "DF_stock_notube",
            "DF_ar_pisg",
            "DF_handguard_AR",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_muzzle",
            "DF_Pendant",
            "DF_muzzle_Hide"
        };
        magazineSwitchTime = 0.5;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2, 2, 0.75 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "magazine",
            "bullet",
            "hide_barrel",
            "barrel",
            "frosight",
            "handguard",
            "pisg",
            "mount",
            "stock",
            "tube",
            "frosight_1",
            "frosight_2",
            "frosight_3"
        };
        hiddenSelections[] = {
            "barrel",
            "frosight",
            "handguard",
            "pisg",
            "mount",
            "stock",
            "tube",
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
            soundSetShot[] = { "My_DF_Weapons_Rifles_CAR15_Shot_SoundSet", "M4_Tail_SoundSet", "M4_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_CAR15_silencer_SoundSet", "M4_silencerTail_SoundSet", "M4_silencerInteriorTail_SoundSet" }, { "M4_silencerHomeMade_SoundSet", "M4_silencerHomeMadeTail_SoundSet", "M4_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.12;
            recoil = "recoil_m4";
            recoilProne = "recoil_m4_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = { "My_DF_Weapons_Rifles_CAR15_Shot_SoundSet", "M4_Tail_SoundSet", "M4_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_CAR15_silencer_SoundSet", "M4_silencerTail_SoundSet", "M4_silencerInteriorTail_SoundSet" }, { "M4_silencerHomeMade_SoundSet", "M4_silencerHomeMadeTail_SoundSet", "M4_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.065;
            recoil = "recoil_m4";
            recoilProne = "recoil_m4_prone";
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
                position[] = {-0.1, 0, 0.03 };
                orientation[] = { 0, 0, 0 };
            };
            class Melee
            {
                position[] = {-0.1, 0, -0.04 };
                orientation[] = { 0, 0, 0 };
            };
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\M4A1\w_M4A1_states.anm";
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
        class AnimationSources
        {
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0.495;
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
    class My_DF_Weapons_Rifles_CAR15: My_DF_Weapons_Rifles_CAR15_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_CAR150";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_CAR151";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\frosight\AR_KAC_RIS_frosight_co.paa",
            "My_DF_Weapons_Rifles\CAR15\data\handguard\CAR15_handguard_co.paa",
            "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std_co.paa",
            "My_DF_Weapons_Rifles\CAR15\data\mount\CAR15_mount_co.paa",
            "My_DF_Weapons_Rifles\CAR15\data\stock\CAR15_stock_co.paa",
            "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_co.paa",
            "My_DF_Weapons_Rifles\CAR15\data\CAR15_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\frosight\AR_KAC_RIS_frosight.rvmat",
            "My_DF_Weapons_Rifles\CAR15\data\handguard\CAR15_handguard.rvmat",
            "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std.rvmat",
            "My_DF_Weapons_Rifles\CAR15\data\mount\CAR15_mount.rvmat",
            "My_DF_Weapons_Rifles\CAR15\data\stock\CAR15_stock.rvmat",
            "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter.rvmat",
            "My_DF_Weapons_Rifles\CAR15\data\CAR15.rvmat"
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
                                "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\frosight\AR_KAC_RIS_frosight.rvmat",
                                "My_DF_Weapons_Rifles\CAR15\data\handguard\CAR15_handguard.rvmat",
                                "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std.rvmat",
                                "My_DF_Weapons_Rifles\CAR15\data\mount\CAR15_mount.rvmat",
                                "My_DF_Weapons_Rifles\CAR15\data\stock\CAR15_stock.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter.rvmat",
                                "My_DF_Weapons_Rifles\CAR15\data\CAR15.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\frosight\AR_KAC_RIS_frosight_worn.rvmat",
                                "My_DF_Weapons_Rifles\CAR15\data\handguard\CAR15_handguard_worn.rvmat",
                                "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std_worn.rvmat",
                                "My_DF_Weapons_Rifles\CAR15\data\mount\CAR15_mount_worn.rvmat",
                                "My_DF_Weapons_Rifles\CAR15\data\stock\CAR15_stock_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_worn.rvmat",
                                "My_DF_Weapons_Rifles\CAR15\data\CAR15_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\frosight\AR_KAC_RIS_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\CAR15\data\handguard\CAR15_handguard_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std_damage.rvmat",
                                "My_DF_Weapons_Rifles\CAR15\data\mount\CAR15_mount_damage.rvmat",
                                "My_DF_Weapons_Rifles\CAR15\data\stock\CAR15_stock_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_damage.rvmat",
                                "My_DF_Weapons_Rifles\CAR15\data\CAR15_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\frosight\AR_KAC_RIS_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\CAR15\data\handguard\CAR15_handguard_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std_damage.rvmat",
                                "My_DF_Weapons_Rifles\CAR15\data\mount\CAR15_mount_damage.rvmat",
                                "My_DF_Weapons_Rifles\CAR15\data\stock\CAR15_stock_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_damage.rvmat",
                                "My_DF_Weapons_Rifles\CAR15\data\CAR15_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\frosight\AR_KAC_RIS_frosight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\CAR15\data\handguard\CAR15_handguard_destruct.rvmat",
                                "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std_destruct.rvmat",
                                "My_DF_Weapons_Rifles\CAR15\data\mount\CAR15_mount_destruct.rvmat",
                                "My_DF_Weapons_Rifles\CAR15\data\stock\CAR15_stock_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_destruct.rvmat",
                                "My_DF_Weapons_Rifles\CAR15\data\CAR15_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_G3_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_Rifles\G3\G3.p3d";
        itemSize[] = { 8, 3 };
        weight = 3070;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 0.9;
        barrelArmor = 3;
        initSpeedMultiplier = 1.05;
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
        swayModifier[] = { 1.2, 1.2, 0.7 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "1913adapter",
            "308magwell",
            "ACRadapter",
            "barrel",
            "frosight",
            "handguard",
            "pisg",
            "sight",
            "stock",
            "stockAdapter",
            "rail",
            "bipod_rail"
        };
        hiddenSelections[] = {
            "1913adapter",
            "308magwell",
            "ACRadapter",
            "barrel",
            "frosight",
            "handguard",
            "pisg",
            "rec",
            "sight",
            "stock",
            "stockAdapter"
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
            soundSetShot[] = { "My_DF_Weapons_Rifles_G3_Shot_SoundSet", "MP5K_Tail_SoundSet", "MP5K_InteriorTail_SoundSet", "MP5K_Slapback_SoundSet", "MP5K_Tail_2D_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_G3_silencer_SoundSet", "MP5K_silencerTail_SoundSet", "MP5K_silencerInteriorTail_SoundSet" }, { "My_DF_Weapons_Rifles_G3_silencer_SoundSet", "MP5K_silencerHomeMadeTail_SoundSet", "MP5K_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.12;
            recoil = "recoil_mp5";
            recoilProne = "recoil_mp5_prone";
            dispersion = 0.003;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot1st[] = { "My_DF_Weapons_Rifles_G3_Shot_SoundSet" };
            soundSetShot[] = { "My_DF_Weapons_Rifles_G3_Shot_SoundSet", "MP5K_Tail_SoundSet", "MP5K_InteriorTail_SoundSet", "MP5K_Slapback_SoundSet", "MP5K_Tail_2D_SoundSet" };
            soundSetShotExt1st[] = { { "My_DF_Weapons_Rifles_G3_silencer_SoundSet" }, { "My_DF_Weapons_Rifles_G3_silencer_SoundSet" } };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_G3_silencer_SoundSet", "MP5K_silencerTail_SoundSet", "MP5K_silencerInteriorTail_SoundSet" }, { "My_DF_Weapons_Rifles_G3_silencer_SoundSet", "MP5K_silencerHomeMadeTail_SoundSet", "MP5K_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.09;
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
            class fire_mode
            {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
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
            class PSG_stock_proxy
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_Rifles_G3: My_DF_Weapons_Rifles_G3_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_G30";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_G31";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\G3\data\1913adapter\G3_1913adapter_co.paa",
            "My_DF_Weapons_Rifles\G3\data\308magwell\G3_308magwell_co.paa",
            "My_DF_Weapons_Rifles\G3\data\ACRadapter\G3_ACRadapter_co.paa",
            "My_DF_Weapons_Rifles\G3\data\barrel\G3_barrel_co.paa",
            "My_DF_Weapons_Rifles\G3\data\frosight\G3_frosight_co.paa",
            "My_DF_Weapons_Rifles\G3\data\handguard\G3_handguard_co.paa",
            "My_DF_Weapons_Attachments\pisg\g3\data\g3_co.paa",
            "My_DF_Weapons_Rifles\G3\data\G3_co.paa",
            "My_DF_Weapons_SMG\MP5\data\sight\MP5_sight_co.paa",
            "My_DF_Weapons_Rifles\G3\data\stock\G3_stock_co.paa",
            "My_DF_Weapons_Rifles\G3\data\stockAdapter\G3_stockAdapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\G3\data\1913adapter\G3_1913adapter.rvmat",
            "My_DF_Weapons_Rifles\G3\data\308magwell\G3_308magwell.rvmat",
            "My_DF_Weapons_Rifles\G3\data\ACRadapter\G3_ACRadapter.rvmat",
            "My_DF_Weapons_Rifles\G3\data\barrel\G3_barrel.rvmat",
            "My_DF_Weapons_Rifles\G3\data\frosight\G3_frosight.rvmat",
            "My_DF_Weapons_Rifles\G3\data\handguard\G3_handguard.rvmat",
            "My_DF_Weapons_Attachments\pisg\g3\data\g3.rvmat",
            "My_DF_Weapons_Rifles\G3\data\G3.rvmat",
            "My_DF_Weapons_SMG\MP5\data\sight\MP5_sight.rvmat",
            "My_DF_Weapons_Rifles\G3\data\stock\G3_stock.rvmat",
            "My_DF_Weapons_Rifles\G3\data\stockAdapter\G3_stockAdapter.rvmat"
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
                                "My_DF_Weapons_Rifles\G3\data\1913adapter\G3_1913adapter.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\308magwell\G3_308magwell.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\ACRadapter\G3_ACRadapter.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\barrel\G3_barrel.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\frosight\G3_frosight.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\handguard\G3_handguard.rvmat",
                                "My_DF_Weapons_Attachments\pisg\g3\data\g3.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\G3.rvmat",
                                "My_DF_Weapons_SMG\MP5\data\sight\MP5_sight.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\stock\G3_stock.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\stockAdapter\G3_stockAdapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\G3\data\1913adapter\G3_1913adapter_worn.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\308magwell\G3_308magwell_worn.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\ACRadapter\G3_ACRadapter_worn.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\barrel\G3_barrel_worn.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\frosight\G3_frosight_worn.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\handguard\G3_handguard_worn.rvmat",
                                "My_DF_Weapons_Attachments\pisg\g3\data\g3_worn.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\G3_worn.rvmat",
                                "My_DF_Weapons_SMG\MP5\data\sight\MP5_sight_worn.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\stock\G3_stock_worn.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\stockAdapter\G3_stockAdapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\G3\data\1913adapter\G3_1913adapter_damage.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\308magwell\G3_308magwell_damage.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\ACRadapter\G3_ACRadapter_damage.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\barrel\G3_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\frosight\G3_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\handguard\G3_handguard_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\g3\data\g3_damage.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\G3_damage.rvmat",
                                "My_DF_Weapons_SMG\MP5\data\sight\MP5_sight_damage.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\stock\G3_stock_damage.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\stockAdapter\G3_stockAdapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\G3\data\1913adapter\G3_1913adapter_damage.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\308magwell\G3_308magwell_damage.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\ACRadapter\G3_ACRadapter_damage.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\barrel\G3_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\frosight\G3_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\handguard\G3_handguard_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\g3\data\g3_damage.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\G3_damage.rvmat",
                                "My_DF_Weapons_SMG\MP5\data\sight\MP5_sight_damage.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\stock\G3_stock_damage.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\stockAdapter\G3_stockAdapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\G3\data\1913adapter\G3_1913adapter_destruct.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\308magwell\G3_308magwell_destruct.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\ACRadapter\G3_ACRadapter_destruct.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\barrel\G3_barrel_destruct.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\frosight\G3_frosight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\handguard\G3_handguard_destruct.rvmat",
                                "My_DF_Weapons_Attachments\pisg\g3\data\g3_destruct.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\G3_destruct.rvmat",
                                "My_DF_Weapons_SMG\MP5\data\sight\MP5_sight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\stock\G3_stock_destruct.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\stockAdapter\G3_stockAdapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_K416_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_Rifles\K416\K416.p3d";
        itemSize[] = { 8, 3 };
        weight = 2500;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.0;
        barrelArmor = 2;
        ObstructionDistance = 0.526;
        ShoulderDistance = 0.05;
        initSpeedMultiplier = 1;
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
            "My_DF_Weapons_Rifles_M4A1_20RndMag",
            "My_DF_Weapons_Rifles_M4A1_30RndMag",
            "My_DF_Weapons_Rifles_M4A1_30RndMag2",
            "My_DF_Weapons_Rifles_M4A1_30RndPMag",
            "My_DF_Weapons_Rifles_M4A1_45RndMag",
            "My_DF_Weapons_Rifles_M4A1_60RndDrumMag",
            "My_DF_Weapons_Rifles_M4A1_60RndMag"
        };
        attachments[] = {
            "DF_stock",
            "DF_ar_pisg",
            "DF_handguard_K416",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_muzzle",
            "DF_bipod",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.5;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2, 2, 0.75 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "magazine",
            "bullet",
            "hide_barrel",
            "barrel",
            "frosight",
            "handguard",
            "pisg",
            "sight",
            "stock"
        };
        hiddenSelections[] = {
            "barrel",
            "frosight",
            "handguard",
            "pisg",
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
            "SemiAuto",
            "FullAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_Rifles_K416_Shot_SoundSet", "M4_Tail_SoundSet", "M4_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_K416_silencer_SoundSet", "M4_silencerTail_SoundSet", "M4_silencerInteriorTail_SoundSet" }, { "M4_silencerHomeMade_SoundSet", "M4_silencerHomeMadeTail_SoundSet", "M4_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.12;
            recoil = "recoil_m4";
            recoilProne = "recoil_m4_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = { "My_DF_Weapons_Rifles_K416_Shot_SoundSet", "M4_Tail_SoundSet", "M4_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_K416_silencer_SoundSet", "M4_silencerTail_SoundSet", "M4_silencerInteriorTail_SoundSet" }, { "M4_silencerHomeMade_SoundSet", "M4_silencerHomeMadeTail_SoundSet", "M4_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.06;
            recoil = "recoil_m4";
            recoilProne = "recoil_m4_prone";
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
                position[] = {-0.1, 0, 0.03 };
                orientation[] = { 0, 0, 0 };
            };
            class Melee
            {
                position[] = {-0.1, 0, -0.04 };
                orientation[] = { 0, 0, 0 };
            };
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\M4A1\w_M4A1_states.anm";
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
        class AnimationSources
        {
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0.41;
            };
            class SMGmuzzle
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class stockKit
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
    class My_DF_Weapons_Rifles_K416: My_DF_Weapons_Rifles_K416_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_K4160";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_K4161";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\K416\data\barrel\K416_barrel_co.paa",
            "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_co.paa",
            "My_DF_Weapons_Rifles\K416\data\handguard\K416_handguard_co.paa",
            "My_DF_Weapons_Rifles\K416\data\pisg\K416_pisg_co.paa",
            "My_DF_Weapons_Rifles\K416\data\sight\K416_sight_co.paa",
            "My_DF_Weapons_Rifles\K416\data\stock\K416_stock_co.paa",
            "My_DF_Weapons_Rifles\K416\data\K416_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\K416\data\barrel\K416_barrel.rvmat",
            "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight.rvmat",
            "My_DF_Weapons_Rifles\K416\data\handguard\K416_handguard.rvmat",
            "My_DF_Weapons_Rifles\K416\data\pisg\K416_pisg.rvmat",
            "My_DF_Weapons_Rifles\K416\data\sight\K416_sight.rvmat",
            "My_DF_Weapons_Rifles\K416\data\stock\K416_stock.rvmat",
            "My_DF_Weapons_Rifles\K416\data\K416.rvmat"
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
                                "My_DF_Weapons_Rifles\K416\data\barrel\K416_barrel.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\handguard\K416_handguard.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\pisg\K416_pisg.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\sight\K416_sight.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\stock\K416_stock.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\K416.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\K416\data\barrel\K416_barrel_worn.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_worn.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\handguard\K416_handguard_worn.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\pisg\K416_pisg_worn.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\sight\K416_sight_worn.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\stock\K416_stock_worn.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\K416_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\K416\data\barrel\K416_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\handguard\K416_handguard_damage.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\pisg\K416_pisg_damage.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\sight\K416_sight_damage.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\stock\K416_stock_damage.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\K416_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\K416\data\barrel\K416_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\handguard\K416_handguard_damage.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\pisg\K416_pisg_damage.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\sight\K416_sight_damage.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\stock\K416_stock_damage.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\K416_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\K416\data\barrel\K416_barrel_destruct.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\handguard\K416_handguard_destruct.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\pisg\K416_pisg_destruct.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\sight\K416_sight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\stock\K416_stock_destruct.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\K416_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_K437_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_Rifles\K437\K437.p3d";
        itemSize[] = { 8, 3 };
        weight = 3500;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.1;
        barrelArmor = 3;
        initSpeedMultiplier = 1;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "My_DF_Weapons_Ammo_300_Bpz",
            "My_DF_Weapons_Ammo_300_Cbj",
            "My_DF_Weapons_Ammo_300_Vmax"
        };
        magazines[] = {
            "My_DF_Weapons_Rifles_K437_30RndMag",
            "My_DF_Weapons_Rifles_K437_45RndMag",
            "My_DF_Weapons_Rifles_K437_60RndMag"
        };
        attachments[] = {
            "DF_stock",
            "DF_ar_pisg",
            "DF_handguard_K437",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_muzzle",
            "DF_Pendant",
            "DF_muzzle_Hide"
        };
        magazineSwitchTime = 0.45;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2.3, 2.3, 0.9 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "magazine",
            "bullet",
            "hide_barrel",
            "zasleh",
            "barrel",
            "frosight",
            "handguard",
            "pisg",
            "sight",
            "stock",
            "frosight_up",
            "sight_up",
            "frosight_down",
            "sight_down",
            "frosight_base",
            "sight_base"
        };
        hiddenSelections[] = {
            "barrel",
            "frosight",
            "handguard",
            "pisg",
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
            soundSetShot[] = { "My_DF_Weapons_Rifles_K437_Shot_SoundSet", "FNFAL_Tail_SoundSet", "FNFAL_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_K437_silencer_SoundSet", "FNFAL_silencerHomeMadeTail_SoundSet", "FNFAL_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.12;
            recoil = "recoil_fal";
            recoilProne = "recoil_fal_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = { "My_DF_Weapons_Rifles_K437_Shot_SoundSet", "FNFAL_Tail_SoundSet", "FNFAL_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_K437_silencer_SoundSet", "FNFAL_silencerHomeMadeTail_SoundSet", "FNFAL_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.08;
            recoil = "recoil_fal";
            recoilProne = "recoil_fal_prone";
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
                position[] = {-0.05, 0, 0.02 };
                orientation[] = { 0, 0, 0 };
            };
            class Melee
            {
                position[] = {-0.05, 0, -0.05 };
                orientation[] = { 0, 0, 0 };
            };
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\FNFaL\w_FNFaL_states.anm";
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
        class AnimationSources
        {
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0.17;
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
    class My_DF_Weapons_Rifles_K437: My_DF_Weapons_Rifles_K437_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_K4370";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_K4371";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\K437\data\barrel\K437_barrel_co.paa",
            "My_DF_Weapons_Rifles\K437\data\frosight\K437_frosight_co.paa",
            "My_DF_Weapons_Rifles\K437\data\handguard\K437_handguard_co.paa",
            "My_DF_Weapons_Rifles\K437\data\pisg\K437_pisg_co.paa",
            "My_DF_Weapons_Rifles\K437\data\sight\K437_sight_co.paa",
            "My_DF_Weapons_Rifles\K437\data\stock\K437_stock_co.paa",
            "My_DF_Weapons_Rifles\K437\data\K437_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\K437\data\barrel\K437_barrel.rvmat",
            "My_DF_Weapons_Rifles\K437\data\frosight\K437_frosight.rvmat",
            "My_DF_Weapons_Rifles\K437\data\handguard\K437_handguard.rvmat",
            "My_DF_Weapons_Rifles\K437\data\pisg\K437_pisg.rvmat",
            "My_DF_Weapons_Rifles\K437\data\sight\K437_sight.rvmat",
            "My_DF_Weapons_Rifles\K437\data\stock\K437_stock.rvmat",
            "My_DF_Weapons_Rifles\K437\data\K437.rvmat"
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
                                "My_DF_Weapons_Rifles\K437\data\barrel\K437_barrel.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\frosight\K437_frosight.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\handguard\K437_handguard.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\pisg\K437_pisg.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\sight\K437_sight.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\stock\K437_stock.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\K437.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\K437\data\barrel\K437_barrel_worn.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\frosight\K437_frosight_worn.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\handguard\K437_handguard_worn.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\pisg\K437_pisg_worn.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\sight\K437_sight_worn.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\stock\K437_stock_worn.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\K437_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\K437\data\barrel\K437_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\frosight\K437_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\handguard\K437_handguard_damage.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\pisg\K437_pisg_damage.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\sight\K437_sight_damage.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\stock\K437_stock_damage.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\K437_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\K437\data\barrel\K437_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\frosight\K437_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\handguard\K437_handguard_damage.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\pisg\K437_pisg_damage.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\sight\K437_sight_damage.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\stock\K437_stock_damage.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\K437_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\K437\data\barrel\K437_barrel_destruct.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\frosight\K437_frosight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\handguard\K437_handguard_destruct.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\pisg\K437_pisg_destruct.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\sight\K437_sight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\stock\K437_stock_destruct.rvmat",
                                "My_DF_Weapons_Rifles\K437\data\K437_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_KC17_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_Rifles\KC17\KC17.p3d";
        itemSize[] = { 8, 3 };
        weight = 3700;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.1;
        barrelArmor = 3;
        initSpeedMultiplier = 1;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "Ammo_545x39",
            "Ammo_545x39Tracer",
            "My_DF_Weapons_Ammo_545x39_BS",
            "My_DF_Weapons_Ammo_545x39_BT",
            "My_DF_Weapons_Ammo_545x39_PRS",
            "My_DF_Weapons_Ammo_545x39_PS",
            "My_DF_Weapons_Ammo_545x39_T"
        };
        magazines[] = {
            "My_DF_Weapons_Rifles_KC17_30RndMag",
            "My_DF_Weapons_Rifles_KC17_45RndMag",
            "My_DF_Weapons_Rifles_KC17_75RndMag"
        };
        attachments[] = {
            "DF_stock",
            "DF_ar_pisg",
            "DF_handguard_KC17",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_muzzle",
            "DF_Pendant",
            "DF_muzzle_Hide"
        };
        magazineSwitchTime = 0.45;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2.3, 2.3, 0.9 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "magazine",
            "bullet",
            "hide_barrel",
            "zasleh",
            "barrel",
            "frosight",
            "handguard",
            "pisg",
            "sight",
            "stock",
            "frosight_1_up",
            "frosight_2_up",
            "frosight_3_up",
            "frosight_4_up",
            "sight_up",
            "frosight_1_down",
            "frosight_2_down",
            "frosight_3_down",
            "frosight_4_down",
            "sight_down",
            "frosight_1_base",
            "frosight_2_base",
            "frosight_3_base",
            "frosight_4_base",
            "sight_base"
        };
        hiddenSelections[] = {
            "barrel",
            "frosight",
            "handguard",
            "pisg",
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
            soundSetShot[] = { "My_DF_Weapons_Rifles_KC17_Shot_SoundSet", "FNFAL_Tail_SoundSet", "FNFAL_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_KC17_silencer_SoundSet", "FNFAL_silencerHomeMadeTail_SoundSet", "FNFAL_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.12;
            recoil = "recoil_fal";
            recoilProne = "recoil_fal_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = { "My_DF_Weapons_Rifles_KC17_Shot_SoundSet", "FNFAL_Tail_SoundSet", "FNFAL_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_KC17_silencer_SoundSet", "FNFAL_silencerHomeMadeTail_SoundSet", "FNFAL_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.08;
            recoil = "recoil_fal";
            recoilProne = "recoil_fal_prone";
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
                position[] = {-0.05, 0, 0.02 };
                orientation[] = { 0, 0, 0 };
            };
            class Melee
            {
                position[] = {-0.05, 0, -0.05 };
                orientation[] = { 0, 0, 0 };
            };
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\FNFaL\w_FNFaL_states.anm";
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
        class AnimationSources
        {
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0.2;
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
    class My_DF_Weapons_Rifles_KC17: My_DF_Weapons_Rifles_KC17_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_KC170";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_KC171";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\KC17\data\barrel\KC17_barrel_co.paa",
            "My_DF_Weapons_Rifles\KC17\data\frosight\KC17_frosight_co.paa",
            "My_DF_Weapons_Rifles\KC17\data\handguard\KC17_handguard_co.paa",
            "My_DF_Weapons_Rifles\KC17\data\pisg\KC17_pisg_co.paa",
            "My_DF_Weapons_Rifles\KC17\data\sight\KC17_sight_co.paa",
            "My_DF_Weapons_Rifles\KC17\data\stock\KC17_stock_co.paa",
            "My_DF_Weapons_Rifles\KC17\data\KC17_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\KC17\data\barrel\KC17_barrel.rvmat",
            "My_DF_Weapons_Rifles\KC17\data\frosight\KC17_frosight.rvmat",
            "My_DF_Weapons_Rifles\KC17\data\handguard\KC17_handguard.rvmat",
            "My_DF_Weapons_Rifles\KC17\data\pisg\KC17_pisg.rvmat",
            "My_DF_Weapons_Rifles\KC17\data\sight\KC17_sight.rvmat",
            "My_DF_Weapons_Rifles\KC17\data\stock\KC17_stock.rvmat",
            "My_DF_Weapons_Rifles\KC17\data\KC17.rvmat"
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
                                "My_DF_Weapons_Rifles\KC17\data\barrel\KC17_barrel.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\frosight\KC17_frosight.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\handguard\KC17_handguard.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\pisg\KC17_pisg.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\sight\KC17_sight.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\stock\KC17_stock.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\KC17.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\KC17\data\barrel\KC17_barrel_worn.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\frosight\KC17_frosight_worn.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\handguard\KC17_handguard_worn.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\pisg\KC17_pisg_worn.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\sight\KC17_sight_worn.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\stock\KC17_stock_worn.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\KC17_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\KC17\data\barrel\KC17_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\frosight\KC17_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\handguard\KC17_handguard_damage.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\pisg\KC17_pisg_damage.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\sight\KC17_sight_damage.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\stock\KC17_stock_damage.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\KC17_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\KC17\data\barrel\KC17_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\frosight\KC17_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\handguard\KC17_handguard_damage.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\pisg\KC17_pisg_damage.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\sight\KC17_sight_damage.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\stock\KC17_stock_damage.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\KC17_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\KC17\data\barrel\KC17_barrel_destruct.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\frosight\KC17_frosight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\handguard\KC17_handguard_destruct.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\pisg\KC17_pisg_destruct.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\sight\KC17_sight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\stock\KC17_stock_destruct.rvmat",
                                "My_DF_Weapons_Rifles\KC17\data\KC17_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_M16A4_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_Rifles\M16A4\M16A4.p3d";
        itemSize[] = { 9, 3 };
        weight = 2900;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.2;
        barrelArmor = 2;
        ObstructionDistance = 0.526;
        ShoulderDistance = 0.05;
        initSpeedMultiplier = 1;
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
            "My_DF_Weapons_Rifles_M4A1_20RndMag",
            "My_DF_Weapons_Rifles_M4A1_30RndMag",
            "My_DF_Weapons_Rifles_M4A1_30RndMag2",
            "My_DF_Weapons_Rifles_M4A1_30RndPMag",
            "My_DF_Weapons_Rifles_M4A1_45RndMag",
            "My_DF_Weapons_Rifles_M4A1_60RndDrumMag",
            "My_DF_Weapons_Rifles_M4A1_60RndMag"
        };
        attachments[] = {
            "DF_stock_notube",
            "DF_ar_pisg",
            "DF_handguard_AR",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_muzzle",
            "DF_Pendant",
            "DF_muzzle_Hide"
        };
        magazineSwitchTime = 0.5;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2, 2, 0.75 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "magazine",
            "bullet",
            "hide_barrel",
            "barrel",
            "frosight",
            "handguard",
            "pisg",
            "sight",
            "stock",
            "tube",
            "sight_SR25",
            "frosight_1_up",
            "frosight_2_up",
            "frosight_3_up",
            "frosight_1_down",
            "frosight_2_down",
            "frosight_3_down",
            "frosight_1_base",
            "frosight_2_base",
            "frosight_3_base"
        };
        hiddenSelections[] = {
            "barrel",
            "frosight",
            "handguard",
            "pisg",
            "sight",
            "stock",
            "tube",
            "rec"
        };
        class NoiseShoot
        {
            strength = 80;
            type = "shot";
        };
        modes[] = {
            "SemiAuto",
            "Burst"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_Rifles_M16A4_Shot_SoundSet", "M16_Tail_SoundSet", "M16_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_M16A4_silencer_SoundSet", "M16_silencerTail_SoundSet", "M16_silencerInteriorTail_SoundSet" }, { "M16_silencerHomeMade_SoundSet", "M16_silencerHomeMadeTail_SoundSet", "M16_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.12;
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class Burst: Mode_Burst
        {
            soundSetShot[] = { "My_DF_Weapons_Rifles_M16A4_Shot_SoundSet", "M16_Tail_SoundSet", "M16_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_M16A4_silencer_SoundSet", "M16_silencerTail_SoundSet", "M16_silencerInteriorTail_SoundSet" }, { "M16_silencerHomeMade_SoundSet", "M16_silencerHomeMadeTail_SoundSet", "M16_silencerInteriorHomeMadeTail_SoundSet" } };
            burst = 3;
            reloadTime = 0.065;
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
                position[] = {-0.1, 0, 0.02 };
                orientation[] = { 0, 0, 0 };
            };
            class Melee
            {
                position[] = {-0.1, 0, -0.05 };
                orientation[] = { 0, 0, 0 };
            };
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\m16a2\w_m16a2_states.anm";
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
                maxOverheatingValue = 8;
                shotsToStartOverheating = 4;
                overheatingDecayInterval = 1;
                class SmokingBarrel1
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinOverheatLimits[] = { 0, 0.6 };
                    positionOffset[] = { 0.2, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrel2
                {
                    overrideParticle = "smoking_barrel";
                    onlyWithinOverheatLimits[] = { 0.6, 1 };
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
            class frosight_1
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class frosight_2
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class frosight_3
            {
                source = "user";
                animPeriod = 1;
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
    class My_DF_Weapons_Rifles_M16A4: My_DF_Weapons_Rifles_M16A4_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_M16A40";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_M16A41";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\frosight\AR_KAC_RIS_frosight_co.paa",
            "My_DF_Weapons_Rifles\M16A4\data\handguard\M16A4_handguard_co.paa",
            "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std_co.paa",
            "My_DF_Weapons_Rifles\M16A4\data\sight\M16A4_sight_co.paa",
            "My_DF_Weapons_Attachments\stock\M16\data\M16_co.paa",
            "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_co.paa",
            "My_DF_Weapons_Rifles\M16A4\data\M16A4_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\frosight\AR_KAC_RIS_frosight.rvmat",
            "My_DF_Weapons_Rifles\M16A4\data\handguard\M16A4_handguard.rvmat",
            "My_DF_Weapons_Attachments\pisg\M16A4_std\data\M16A4_std.rvmat",
            "My_DF_Weapons_Rifles\M16A4\data\sight\M16A4_sight.rvmat",
            "My_DF_Weapons_Attachments\stock\M16\data\M16.rvmat",
            "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter.rvmat",
            "My_DF_Weapons_Rifles\M16A4\data\M16A4.rvmat"
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
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\frosight\AR_KAC_RIS_frosight.rvmat",
                                "My_DF_Weapons_Rifles\M16A4\data\handguard\M16A4_handguard.rvmat",
                                "My_DF_Weapons_Attachments\pisg\M16A4_std\data\M16A4_std.rvmat",
                                "My_DF_Weapons_Rifles\M16A4\data\sight\M16A4_sight.rvmat",
                                "My_DF_Weapons_Attachments\stock\M16\data\M16.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter.rvmat",
                                "My_DF_Weapons_Rifles\M16A4\data\M16A4.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\frosight\AR_KAC_RIS_frosight_worn.rvmat",
                                "My_DF_Weapons_Rifles\M16A4\data\handguard\M16A4_handguard_worn.rvmat",
                                "My_DF_Weapons_Attachments\pisg\M16A4_std\data\M16A4_std_worn.rvmat",
                                "My_DF_Weapons_Rifles\M16A4\data\sight\M16A4_sight_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\M16\data\M16_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_worn.rvmat",
                                "My_DF_Weapons_Rifles\M16A4\data\M16A4_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\frosight\AR_KAC_RIS_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\M16A4\data\handguard\M16A4_handguard_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\M16A4_std\data\M16A4_std_damage.rvmat",
                                "My_DF_Weapons_Rifles\M16A4\data\sight\M16A4_sight_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\M16\data\M16_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_damage.rvmat",
                                "My_DF_Weapons_Rifles\M16A4\data\M16A4_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\frosight\AR_KAC_RIS_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\M16A4\data\handguard\M16A4_handguard_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\M16A4_std\data\M16A4_std_damage.rvmat",
                                "My_DF_Weapons_Rifles\M16A4\data\sight\M16A4_sight_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\M16\data\M16_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_damage.rvmat",
                                "My_DF_Weapons_Rifles\M16A4\data\M16A4_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\frosight\AR_KAC_RIS_frosight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\M16A4\data\handguard\M16A4_handguard_destruct.rvmat",
                                "My_DF_Weapons_Attachments\pisg\M16A4_std\data\M16A4_std_destruct.rvmat",
                                "My_DF_Weapons_Rifles\M16A4\data\sight\M16A4_sight_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\M16\data\M16_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_destruct.rvmat",
                                "My_DF_Weapons_Rifles\M16A4\data\M16A4_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_M4A1_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_Rifles\M4A1\M4A1.p3d";
        itemSize[] = { 8, 3 };
        weight = 2500;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.1;
        barrelArmor = 2;
        ObstructionDistance = 0.526;
        ShoulderDistance = 0.05;
        initSpeedMultiplier = 1;
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
            "My_DF_Weapons_Rifles_M4A1_20RndMag",
            "My_DF_Weapons_Rifles_M4A1_30RndMag",
            "My_DF_Weapons_Rifles_M4A1_30RndMag2",
            "My_DF_Weapons_Rifles_M4A1_30RndPMag",
            "My_DF_Weapons_Rifles_M4A1_45RndMag",
            "My_DF_Weapons_Rifles_M4A1_60RndDrumMag",
            "My_DF_Weapons_Rifles_M4A1_60RndMag"
        };
        attachments[] = {
            "DF_stock_notube",
            "DF_ar_pisg",
            "DF_handguard_AR",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_right2",
            "DF_frog_left2",
            "DF_frog_up2",
            "DF_muzzle",
            "DF_bipod",
            "DF_Pendant",
            "DF_muzzle_Hide"
        };
        magazineSwitchTime = 0.5;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2, 2, 0.75 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "magazine",
            "bullet",
            "hide_barrel",
            "barrel",
            "frosight",
            "handguard",
            "pisg",
            "sight",
            "stock",
            "tube",
            "frosight_1_up",
            "frosight_2_up",
            "frosight_3_up",
            "frosight_1_down",
            "frosight_2_down",
            "frosight_3_down",
            "frosight_1_base",
            "frosight_2_base",
            "frosight_3_base",
            "sight_up",
            "sight_down"
        };
        hiddenSelections[] = {
            "barrel",
            "frosight",
            "handguard",
            "pisg",
            "sight",
            "stock",
            "tube",
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
            soundSetShot[] = { "My_DF_Weapons_Rifles_M4A1_Shot_SoundSet", "M4_Tail_SoundSet", "M4_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_M4A1_silencer_SoundSet", "M4_silencerTail_SoundSet", "M4_silencerInteriorTail_SoundSet" }, { "M4_silencerHomeMade_SoundSet", "M4_silencerHomeMadeTail_SoundSet", "M4_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.12;
            recoil = "recoil_m4";
            recoilProne = "recoil_m4_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = { "My_DF_Weapons_Rifles_M4A1_Shot_SoundSet", "M4_Tail_SoundSet", "M4_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_M4A1_silencer_SoundSet", "M4_silencerTail_SoundSet", "M4_silencerInteriorTail_SoundSet" }, { "M4_silencerHomeMade_SoundSet", "M4_silencerHomeMadeTail_SoundSet", "M4_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.065;
            recoil = "recoil_m4";
            recoilProne = "recoil_m4_prone";
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
                position[] = {-0.1, 0, 0.03 };
                orientation[] = { 0, 0, 0 };
            };
            class Melee
            {
                position[] = {-0.1, 0, -0.04 };
                orientation[] = { 0, 0, 0 };
            };
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\M4A1\w_M4A1_states.anm";
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
        class AnimationSources
        {
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0.495;
            };
            class SMGmuzzle
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class frosight_1
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class frosight_2
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class frosight_3
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class sight
            {
                source = "user";
                animPeriod = 1;
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
    class My_DF_Weapons_Rifles_M4A1: My_DF_Weapons_Rifles_M4A1_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_M4A10";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_M4A11";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel_co.paa",
            "My_DF_Weapons_Rifles\M4A1\data\frosight\M4A1_frosight_co.paa",
            "My_DF_Weapons_Attachments\handguard\AR_mk18\data\AR_mk18_co.paa",
            "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std_co.paa",
            "My_DF_Weapons_DMR\SR25\data\sight\SR25_sight_co.paa",
            "My_DF_Weapons_Attachments\stock\M4A1_Std\data\M4A1_Std_co.paa",
            "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_co.paa",
            "My_DF_Weapons_Rifles\M4A1\data\M4A1_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel.rvmat",
            "My_DF_Weapons_Rifles\M4A1\data\frosight\M4A1_frosight.rvmat",
            "My_DF_Weapons_Attachments\handguard\AR_mk18\data\AR_mk18.rvmat",
            "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std.rvmat",
            "My_DF_Weapons_DMR\SR25\data\sight\SR25_sight.rvmat",
            "My_DF_Weapons_Attachments\stock\M4A1_Std\data\M4A1_Std.rvmat",
            "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter.rvmat",
            "My_DF_Weapons_Rifles\M4A1\data\M4A1.rvmat"
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
                                "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel.rvmat",
                                "My_DF_Weapons_Rifles\M4A1\data\frosight\M4A1_frosight.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_mk18\data\AR_mk18.rvmat",
                                "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\sight\SR25_sight.rvmat",
                                "My_DF_Weapons_Attachments\stock\M4A1_Std\data\M4A1_Std.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter.rvmat",
                                "My_DF_Weapons_Rifles\M4A1\data\M4A1.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel_worn.rvmat",
                                "My_DF_Weapons_Rifles\M4A1\data\frosight\M4A1_frosight_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_mk18\data\AR_mk18_worn.rvmat",
                                "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std_worn.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\sight\SR25_sight_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\M4A1_Std\data\M4A1_Std_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_worn.rvmat",
                                "My_DF_Weapons_Rifles\M4A1\data\M4A1_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\M4A1\data\frosight\M4A1_frosight_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_mk18\data\AR_mk18_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std_damage.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\sight\SR25_sight_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\M4A1_Std\data\M4A1_Std_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_damage.rvmat",
                                "My_DF_Weapons_Rifles\M4A1\data\M4A1_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\M4A1\data\frosight\M4A1_frosight_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_mk18\data\AR_mk18_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std_damage.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\sight\SR25_sight_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\M4A1_Std\data\M4A1_Std_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_damage.rvmat",
                                "My_DF_Weapons_Rifles\M4A1\data\M4A1_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel_destruct.rvmat",
                                "My_DF_Weapons_Rifles\M4A1\data\frosight\M4A1_frosight_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_mk18\data\AR_mk18_destruct.rvmat",
                                "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std_destruct.rvmat",
                                "My_DF_Weapons_DMR\SR25\data\sight\SR25_sight_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\M4A1_Std\data\M4A1_Std_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_destruct.rvmat",
                                "My_DF_Weapons_Rifles\M4A1\data\M4A1_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_M7_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_Rifles\M7\M7.p3d";
        itemSize[] = { 8, 3 };
        weight = 2500;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.1;
        barrelArmor = 2;
        ObstructionDistance = 0.526;
        ShoulderDistance = 0.05;
        initSpeedMultiplier = 1;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "My_DF_Weapons_Ammo_68x51_AP",
            "My_DF_Weapons_Ammo_68x51_FMJ",
            "My_DF_Weapons_Ammo_68x51_Hybird"
        };
        magazines[] = {
            "My_DF_Weapons_Rifles_M7_20RndMag",
            "My_DF_Weapons_Rifles_M7_30RndMag",
            "My_DF_Weapons_Rifles_M7_45RndMag"
        };
        attachments[] = {
            "DF_stock",
            "DF_ar_pisg",
            "DF_handguard_M7",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_muzzle",
            "DF_bipod",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.5;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2, 2, 0.75 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "magazine",
            "bullet",
            "hide_barrel",
            "barrel",
            "frosight",
            "handguard",
            "pisg",
            "sight",
            "bufferadapter",
            "stock",
            "mlok_rail",
            "frosight_1_up",
            "frosight_2_up",
            "frosight_3_up",
            "frosight_1_down",
            "frosight_2_down",
            "frosight_3_down",
            "frosight_1_base",
            "frosight_2_base",
            "frosight_3_base",
            "sight_up",
            "sight_down"
        };
        hiddenSelections[] = {
            "barrel",
            "frosight",
            "handguard",
            "pisg",
            "sight",
            "rec",
            "bufferadapter",
            "stock"
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
            soundSetShot[] = { "My_DF_Weapons_Rifles_M7_Shot_SoundSet", "M4_Tail_SoundSet", "M4_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_M7_silencer_SoundSet", "M4_silencerTail_SoundSet", "M4_silencerInteriorTail_SoundSet" }, { "M4_silencerHomeMade_SoundSet", "M4_silencerHomeMadeTail_SoundSet", "M4_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.12;
            recoil = "recoil_m4";
            recoilProne = "recoil_m4_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = { "My_DF_Weapons_Rifles_M7_Shot_SoundSet", "M4_Tail_SoundSet", "M4_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_M7_silencer_SoundSet", "M4_silencerTail_SoundSet", "M4_silencerInteriorTail_SoundSet" }, { "M4_silencerHomeMade_SoundSet", "M4_silencerHomeMadeTail_SoundSet", "M4_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.075;
            recoil = "recoil_m4";
            recoilProne = "recoil_m4_prone";
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
                position[] = {-0.1, 0, 0.03 };
                orientation[] = { 0, 0, 0 };
            };
            class Melee
            {
                position[] = {-0.1, 0, -0.04 };
                orientation[] = { 0, 0, 0 };
            };
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\M4A1\w_M4A1_states.anm";
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
        class AnimationSources
        {
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0.305;
            };
            class SMGmuzzle
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class frosight_1
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class frosight_2
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class frosight_3
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class sight
            {
                source = "user";
                animPeriod = 1;
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
    class My_DF_Weapons_Rifles_M7: My_DF_Weapons_Rifles_M7_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_M70";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_M71";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel_co.paa",
            "My_DF_Weapons_Rifles\M7\data\frosight\M7_frosight_co.paa",
            "My_DF_Weapons_Rifles\M7\data\handguard\M7_handguard_co.paa",
            "My_DF_Weapons_Rifles\M7\data\pisg\M7_pisg_co.paa",
            "My_DF_Weapons_Rifles\M7\data\sight\M7_sight_co.paa",
            "My_DF_Weapons_Rifles\M7\data\M7_co.paa",
            "My_DF_Weapons_Attachments\stock\M7_bufferadapter\data\M7_bufferadapter_co.paa",
            "My_DF_Weapons_Attachments\stock\M7_stock\data\M7_stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel.rvmat",
            "My_DF_Weapons_Rifles\M7\data\frosight\M7_frosight.rvmat",
            "My_DF_Weapons_Rifles\M7\data\handguard\M7_handguard.rvmat",
            "My_DF_Weapons_Rifles\M7\data\pisg\M7_pisg.rvmat",
            "My_DF_Weapons_Rifles\M7\data\sight\M7_sight.rvmat",
            "My_DF_Weapons_Rifles\M7\data\M7.rvmat",
            "My_DF_Weapons_Attachments\stock\M7_bufferadapter\data\M7_bufferadapter.rvmat",
            "My_DF_Weapons_Attachments\stock\M7_stock\data\M7_stock.rvmat"
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
                                "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\frosight\M7_frosight.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\handguard\M7_handguard.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\pisg\M7_pisg.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\sight\M7_sight.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\M7.rvmat",
                                "My_DF_Weapons_Attachments\stock\M7_bufferadapter\data\M7_bufferadapter.rvmat",
                                "My_DF_Weapons_Attachments\stock\M7_stock\data\M7_stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel_worn.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\frosight\M7_frosight_worn.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\handguard\M7_handguard_worn.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\pisg\M7_pisg_worn.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\sight\M7_sight_worn.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\M7_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\M7_bufferadapter\data\M7_bufferadapter_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\M7_stock\data\M7_stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\frosight\M7_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\handguard\M7_handguard_damage.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\pisg\M7_pisg_damage.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\sight\M7_sight_damage.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\M7_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\M7_bufferadapter\data\M7_bufferadapter_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\M7_stock\data\M7_stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\frosight\M7_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\handguard\M7_handguard_damage.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\pisg\M7_pisg_damage.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\sight\M7_sight_damage.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\M7_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\M7_bufferadapter\data\M7_bufferadapter_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\M7_stock\data\M7_stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel_destruct.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\frosight\M7_frosight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\handguard\M7_handguard_destruct.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\pisg\M7_pisg_destruct.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\sight\M7_sight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\M7_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\M7_bufferadapter\data\M7_bufferadapter_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\M7_stock\data\M7_stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_MK47_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_Rifles\MK47\MK47.p3d";
        itemSize[] = { 8, 3 };
        weight = 3700;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.1;
        barrelArmor = 3;
        initSpeedMultiplier = 1;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "Ammo_762x39",
            "Ammo_762x39Tracer",
            "My_DF_Weapons_Ammo_762x39_AP",
            "My_DF_Weapons_Ammo_762x39_BP",
            "My_DF_Weapons_Ammo_762x39_LP",
            "My_DF_Weapons_Ammo_762x39_PS",
            "My_DF_Weapons_Ammo_762x39_T45N"
        };
        magazines[] = {
            "Mag_AKM_30Rnd",
            "Mag_AKM_Palm30Rnd",
            "Mag_AKM_Palm30Rnd_Black",
            "Mag_AKM_Palm30Rnd_Green",
            "Mag_AKM_Drum75Rnd",
            "Mag_AKM_Drum75Rnd_Green",
            "Mag_AKM_Drum75Rnd_Black",
            "My_DF_Weapons_Rifles_AKM_20RndMag",
            "My_DF_Weapons_Rifles_AKM_30RndMag",
            "My_DF_Weapons_Rifles_AKM_30RndMag2",
            "My_DF_Weapons_Rifles_AKM_30RndMag3",
            "My_DF_Weapons_Rifles_AKM_40RndMag",
            "My_DF_Weapons_Rifles_AKM_70RndMag"
        };
        attachments[] = {
            "DF_stock",
            "DF_ar_pisg",
            "DF_handguard_MK47",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_muzzle",
            "DF_bipod",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.45;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2.3, 2.3, 0.9 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "magazine",
            "bullet",
            "hide_barrel",
            "zasleh",
            "barrel",
            "frosight",
            "handguard",
            "pisg",
            "sight",
            "stock",
            "cheekpad",
            "frosight_1_up",
            "frosight_2_up",
            "frosight_1_down",
            "frosight_2_down",
            "frosight_1_base",
            "frosight_2_base",
            "sight_up",
            "sight_down",
            "mlok_rail"
        };
        hiddenSelections[] = {
            "barrel",
            "frosight",
            "handguard",
            "pisg",
            "sight",
            "stock",
            "cheekpad",
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
            soundSetShot[] = { "My_DF_Weapons_Rifles_MK47_Shot_SoundSet", "FNFAL_Tail_SoundSet", "FNFAL_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_MK47_silencer_SoundSet", "FNFAL_silencerHomeMadeTail_SoundSet", "FNFAL_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.12;
            recoil = "recoil_fal";
            recoilProne = "recoil_fal_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = { "My_DF_Weapons_Rifles_MK47_Shot_SoundSet", "FNFAL_Tail_SoundSet", "FNFAL_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_MK47_silencer_SoundSet", "FNFAL_silencerHomeMadeTail_SoundSet", "FNFAL_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.085;
            recoil = "recoil_fal";
            recoilProne = "recoil_fal_prone";
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
                position[] = {-0.05, 0, 0.02 };
                orientation[] = { 0, 0, 0 };
            };
            class Melee
            {
                position[] = {-0.05, 0, -0.05 };
                orientation[] = { 0, 0, 0 };
            };
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\FNFaL\w_FNFaL_states.anm";
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
        class AnimationSources
        {
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0.9;
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
    class My_DF_Weapons_Rifles_MK47: My_DF_Weapons_Rifles_MK47_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_MK470";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_MK471";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\MK47\data\barrel\MK47_barrel_co.paa",
            "My_DF_Weapons_Rifles\M7\data\frosight\M7_frosight_co.paa",
            "My_DF_Weapons_Rifles\MK47\data\handguard\MK47_handguard_co.paa",
            "My_DF_Weapons_Rifles\MK47\data\pisg\MK47_pisg_co.paa",
            "My_DF_Weapons_Rifles\M7\data\sight\M7_sight_co.paa",
            "My_DF_Weapons_Rifles\MK47\data\stock\MK47_stock_co.paa",
            "My_DF_Weapons_Rifles\MK47\data\cheekpad\MK47_cheekpad_co.paa",
            "My_DF_Weapons_Rifles\MK47\data\MK47_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\MK47\data\barrel\MK47_barrel.rvmat",
            "My_DF_Weapons_Rifles\M7\data\frosight\M7_frosight.rvmat",
            "My_DF_Weapons_Rifles\MK47\data\handguard\MK47_handguard.rvmat",
            "My_DF_Weapons_Rifles\MK47\data\pisg\MK47_pisg.rvmat",
            "My_DF_Weapons_Rifles\M7\data\sight\M7_sight.rvmat",
            "My_DF_Weapons_Rifles\MK47\data\stock\MK47_stock.rvmat",
            "My_DF_Weapons_Rifles\MK47\data\cheekpad\MK47_cheekpad.rvmat",
            "My_DF_Weapons_Rifles\MK47\data\MK47.rvmat"
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
                                "My_DF_Weapons_Rifles\MK47\data\barrel\MK47_barrel.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\frosight\M7_frosight.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\handguard\MK47_handguard.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\pisg\MK47_pisg.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\sight\M7_sight.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\stock\MK47_stock.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\cheekpad\MK47_cheekpad.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\MK47.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\MK47\data\barrel\MK47_barrel_worn.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\frosight\M7_frosight_worn.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\handguard\MK47_handguard_worn.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\pisg\MK47_pisg_worn.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\sight\M7_sight_worn.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\stock\MK47_stock_worn.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\cheekpad\MK47_cheekpad_worn.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\MK47_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\MK47\data\barrel\MK47_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\frosight\M7_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\handguard\MK47_handguard_damage.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\pisg\MK47_pisg_damage.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\sight\M7_sight_damage.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\stock\MK47_stock_damage.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\cheekpad\MK47_cheekpad_damage.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\MK47_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\MK47\data\barrel\MK47_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\frosight\M7_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\handguard\MK47_handguard_damage.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\pisg\MK47_pisg_damage.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\sight\M7_sight_damage.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\stock\MK47_stock_damage.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\cheekpad\MK47_cheekpad_damage.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\MK47_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\MK47\data\barrel\MK47_barrel_destruct.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\frosight\M7_frosight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\handguard\MK47_handguard_destruct.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\pisg\MK47_pisg_destruct.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\sight\M7_sight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\stock\MK47_stock_destruct.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\cheekpad\MK47_cheekpad_destruct.rvmat",
                                "My_DF_Weapons_Rifles\MK47\data\MK47_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_PTR32_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_Rifles\PTR32\PTR32.p3d";
        itemSize[] = { 8, 3 };
        weight = 3070;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 0.9;
        barrelArmor = 3;
        initSpeedMultiplier = 1.05;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "Ammo_762x39",
            "Ammo_762x39Tracer",
            "My_DF_Weapons_Ammo_762x39_AP",
            "My_DF_Weapons_Ammo_762x39_BP",
            "My_DF_Weapons_Ammo_762x39_LP",
            "My_DF_Weapons_Ammo_762x39_PS",
            "My_DF_Weapons_Ammo_762x39_T45N"
        };
        magazines[] = {
            "Mag_AKM_30Rnd",
            "Mag_AKM_Palm30Rnd",
            "Mag_AKM_Palm30Rnd_Black",
            "Mag_AKM_Palm30Rnd_Green",
            "My_DF_Weapons_Rifles_PTR32_30RndMag",
            "My_DF_Weapons_Rifles_AKM_20RndMag",
            "My_DF_Weapons_Rifles_AKM_30RndMag",
            "My_DF_Weapons_Rifles_AKM_30RndMag2",
            "My_DF_Weapons_Rifles_AKM_30RndMag3",
            "My_DF_Weapons_Rifles_AKM_40RndMag"
        };
        attachments[] = {
            "DF_stock",
            "DF_pisg_G3",
            "DF_handguard_G3",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_mount_G3",
            "DF_frog_down",
            "DF_muzzle",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.5;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1.2, 1.2, 0.7 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "1913adapter",
            "ACRadapter",
            "barrel",
            "frosight",
            "handguard",
            "pisg",
            "sight",
            "stock",
            "stockAdapter",
            "rail",
            "sup1",
            "sup2",
            "sup3"
        };
        hiddenSelections[] = {
            "barrel",
            "frosight",
            "handguard",
            "hk32magwell",
            "pisg",
            "rec",
            "stock"
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
            soundSetShot[] = { "My_DF_Weapons_Rifles_G3_Shot_SoundSet", "MP5K_Tail_SoundSet", "MP5K_InteriorTail_SoundSet", "MP5K_Slapback_SoundSet", "MP5K_Tail_2D_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_G3_silencer_SoundSet", "MP5K_silencerTail_SoundSet", "MP5K_silencerInteriorTail_SoundSet" }, { "My_DF_Weapons_Rifles_G3_silencer_SoundSet", "MP5K_silencerHomeMadeTail_SoundSet", "MP5K_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.12;
            recoil = "recoil_mp5";
            recoilProne = "recoil_mp5_prone";
            dispersion = 0.003;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot1st[] = { "My_DF_Weapons_Rifles_G3_Shot_SoundSet" };
            soundSetShot[] = { "My_DF_Weapons_Rifles_G3_Shot_SoundSet", "MP5K_Tail_SoundSet", "MP5K_InteriorTail_SoundSet", "MP5K_Slapback_SoundSet", "MP5K_Tail_2D_SoundSet" };
            soundSetShotExt1st[] = { { "My_DF_Weapons_Rifles_G3_silencer_SoundSet" }, { "My_DF_Weapons_Rifles_G3_silencer_SoundSet" } };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_G3_silencer_SoundSet", "MP5K_silencerTail_SoundSet", "MP5K_silencerInteriorTail_SoundSet" }, { "My_DF_Weapons_Rifles_G3_silencer_SoundSet", "MP5K_silencerHomeMadeTail_SoundSet", "MP5K_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.08;
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
                initPhase = 0.62;
            };
            class SMGmuzzle
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
            class PSG_stock_proxy
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_Rifles_PTR32: My_DF_Weapons_Rifles_PTR32_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_PTR320";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_PTR321";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\PTR32\data\barrel\PTR32_barrel_co.paa",
            "My_DF_Weapons_Rifles\PTR32\data\frosight\PTR32_frosight_co.paa",
            "My_DF_Weapons_Rifles\PTR32\data\handguard\PTR32_handguard_co.paa",
            "My_DF_Weapons_Rifles\PTR32\data\hk32magwell\PTR32_hk32magwell_co.paa",
            "My_DF_Weapons_Attachments\pisg\g3\data\g3_co.paa",
            "My_DF_Weapons_Rifles\G3\data\G3_co.paa",
            "My_DF_Weapons_Rifles\G3\data\stock\G3_stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\PTR32\data\barrel\PTR32_barrel.rvmat",
            "My_DF_Weapons_Rifles\PTR32\data\frosight\PTR32_frosight.rvmat",
            "My_DF_Weapons_Rifles\PTR32\data\handguard\PTR32_handguard.rvmat",
            "My_DF_Weapons_Rifles\PTR32\data\hk32magwell\PTR32_hk32magwell.rvmat",
            "My_DF_Weapons_Attachments\pisg\g3\data\g3.rvmat",
            "My_DF_Weapons_Rifles\G3\data\G3.rvmat",
            "My_DF_Weapons_Rifles\G3\data\stock\G3_stock.rvmat"
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
                                "My_DF_Weapons_Rifles\PTR32\data\barrel\PTR32_barrel.rvmat",
                                "My_DF_Weapons_Rifles\PTR32\data\frosight\PTR32_frosight.rvmat",
                                "My_DF_Weapons_Rifles\PTR32\data\handguard\PTR32_handguard.rvmat",
                                "My_DF_Weapons_Rifles\PTR32\data\hk32magwell\PTR32_hk32magwell.rvmat",
                                "My_DF_Weapons_Attachments\pisg\g3\data\g3.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\G3.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\stock\G3_stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\PTR32\data\barrel\PTR32_barrel_worn.rvmat",
                                "My_DF_Weapons_Rifles\PTR32\data\frosight\PTR32_frosight_worn.rvmat",
                                "My_DF_Weapons_Rifles\PTR32\data\handguard\PTR32_handguard_worn.rvmat",
                                "My_DF_Weapons_Rifles\PTR32\data\hk32magwell\PTR32_hk32magwell_worn.rvmat",
                                "My_DF_Weapons_Attachments\pisg\g3\data\g3_worn.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\G3_worn.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\stock\G3_stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\PTR32\data\barrel\PTR32_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\PTR32\data\frosight\PTR32_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\PTR32\data\handguard\PTR32_handguard_damage.rvmat",
                                "My_DF_Weapons_Rifles\PTR32\data\hk32magwell\PTR32_hk32magwell_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\g3\data\g3_damage.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\G3_damage.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\stock\G3_stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\PTR32\data\barrel\PTR32_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\PTR32\data\frosight\PTR32_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\PTR32\data\handguard\PTR32_handguard_damage.rvmat",
                                "My_DF_Weapons_Rifles\PTR32\data\hk32magwell\PTR32_hk32magwell_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\g3\data\g3_damage.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\G3_damage.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\stock\G3_stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\PTR32\data\barrel\PTR32_barrel_destruct.rvmat",
                                "My_DF_Weapons_Rifles\PTR32\data\frosight\PTR32_frosight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\PTR32\data\handguard\PTR32_handguard_destruct.rvmat",
                                "My_DF_Weapons_Rifles\PTR32\data\hk32magwell\PTR32_hk32magwell_destruct.rvmat",
                                "My_DF_Weapons_Attachments\pisg\g3\data\g3_destruct.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\G3_destruct.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\stock\G3_stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_QBZ191_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_Rifles\QBZ191\QBZ191.p3d";
        itemSize[] = { 8, 3 };
        weight = 2700;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.0;
        barrelArmor = 3;
        initSpeedMultiplier = 1;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "My_DF_Weapons_Ammo_58X42_DBP10",
            "My_DF_Weapons_Ammo_58X42_DBP87",
            "My_DF_Weapons_Ammo_58X42_DVC12",
            "My_DF_Weapons_Ammo_58X42_DVP88"
        };
        magazines[] = {
            "My_DF_Weapons_Rifles_QBZ95_30RndMag",
            "My_DF_Weapons_LMG_QJB201_45RndMag",
            "My_DF_Weapons_Rifles_QBZ191_30RndMag",
            "My_DF_Weapons_Rifles_QBZ191_60RndMag"
        };
        attachments[] = {
            "DF_stock",
            "DF_PLA_pisg",
            "DF_handguard_QBZ191",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_barrel_QBZ191",
            "DF_Piston_QBZ191",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_muzzle",
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
            "buffer",
            "frosight",
            "handguard",
            "sight",
            "stock",
            "Piston",
            "pisg",
            "frosight_1_up",
            "frosight_2_up",
            "frosight_1_down",
            "frosight_2_down",
            "frosight_1_base",
            "frosight_2_base",
            "sight_up",
            "sight_down"
        };
        hiddenSelections[] = {
            "barrel",
            "buffer",
            "frosight",
            "handguard",
            "sight",
            "stock",
            "Piston",
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
            soundSetShot[] = {
                "My_DF_Weapons_Rifles_QBZ191_Shot_SoundSet",
                "AK_Tail_SoundSet",
                "AK_InteriorTail_SoundSet"
            };
            soundSetShotExt[] = {
                {
                    "My_DF_Weapons_Rifles_QBZ191_silencer_SoundSet",
                    "AK_silencerTail_SoundSet",
                    "AK_silencerInteriorTail_SoundSet"
                }
            };
            reloadTime = 0.12;
            recoil = "recoil_QBZ191";
            recoilProne = "recoil_QBZ191_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = {
                "My_DF_Weapons_Rifles_QBZ191_Shot_SoundSet",
                "AK_Tail_SoundSet",
                "AK_InteriorTail_SoundSet"
            };
            soundSetShotExt[] = {
                {
                    "My_DF_Weapons_Rifles_QBZ191_silencer_SoundSet",
                    "AK_silencerTail_SoundSet",
                    "AK_silencerInteriorTail_SoundSet"
                }
            };
            reloadTime = 0.07;
            recoil = "recoil_QBZ191";
            recoilProne = "recoil_QBZ191_prone";
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
                initPhase = 0.4;
            };
            class SMGmuzzle
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class Piston
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
    class My_DF_Weapons_Rifles_QBZ191: My_DF_Weapons_Rifles_QBZ191_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_QBZ1910";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_QBZ1911";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel_co.paa",
            "My_DF_Weapons_Rifles\QBZ191\data\buffer\QBZ191_buffer_co.paa",
            "My_DF_Weapons_Rifles\QBZ191\data\frosight\QBZ191_frosight_co.paa",
            "My_DF_Weapons_Rifles\QBZ191\data\handguard\QBZ191_handguard_co.paa",
            "My_DF_Weapons_Rifles\QBZ191\data\sight\QBZ191_sight_co.paa",
            "My_DF_Weapons_Rifles\QBZ191\data\stock\QBZ191_stock_co.paa",
            "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel_co.paa",
            "My_DF_Weapons_Rifles\QBZ191\data\QBZ191_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel.rvmat",
            "My_DF_Weapons_Rifles\QBZ191\data\buffer\QBZ191_buffer.rvmat",
            "My_DF_Weapons_Rifles\QBZ191\data\frosight\QBZ191_frosight.rvmat",
            "My_DF_Weapons_Rifles\QBZ191\data\handguard\QBZ191_handguard.rvmat",
            "My_DF_Weapons_Rifles\QBZ191\data\sight\QBZ191_sight.rvmat",
            "My_DF_Weapons_Rifles\QBZ191\data\stock\QBZ191_stock.rvmat",
            "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel.rvmat",
            "My_DF_Weapons_Rifles\QBZ191\data\QBZ191.rvmat"
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
                                "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\buffer\QBZ191_buffer.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\frosight\QBZ191_frosight.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\handguard\QBZ191_handguard.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\sight\QBZ191_sight.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\stock\QBZ191_stock.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\QBZ191.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel_worn.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\buffer\QBZ191_buffer_worn.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\frosight\QBZ191_frosight_worn.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\handguard\QBZ191_handguard_worn.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\sight\QBZ191_sight_worn.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\stock\QBZ191_stock_worn.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel_worn.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\QBZ191_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\buffer\QBZ191_buffer_damage.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\frosight\QBZ191_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\handguard\QBZ191_handguard_damage.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\sight\QBZ191_sight_damage.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\stock\QBZ191_stock_damage.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\QBZ191_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\buffer\QBZ191_buffer_damage.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\frosight\QBZ191_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\handguard\QBZ191_handguard_damage.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\sight\QBZ191_sight_damage.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\stock\QBZ191_stock_damage.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\QBZ191_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel_destruct.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\buffer\QBZ191_buffer_destruct.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\frosight\QBZ191_frosight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\handguard\QBZ191_handguard_destruct.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\sight\QBZ191_sight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\stock\QBZ191_stock_destruct.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel_destruct.rvmat",
                                "My_DF_Weapons_Rifles\QBZ191\data\QBZ191_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_QBZ95_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_Rifles\QBZ95\QBZ95.p3d";
        itemSize[] = { 8, 3 };
        weight = 3500;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.1;
        barrelArmor = 3;
        initSpeedMultiplier = 1;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "My_DF_Weapons_Ammo_58X42_DBP10",
            "My_DF_Weapons_Ammo_58X42_DBP87",
            "My_DF_Weapons_Ammo_58X42_DVC12",
            "My_DF_Weapons_Ammo_58X42_DVP88"
        };
        magazines[] = {
            "My_DF_Weapons_Rifles_QBZ95_30RndMag",
            "My_DF_Weapons_LMG_QJB201_45RndMag",
            "My_DF_Weapons_Rifles_QBZ191_30RndMag",
            "My_DF_Weapons_Rifles_QBZ191_60RndMag"
        };
        attachments[] = {
            "DF_cheekpad_QBZ95",
            "DF_ar_pisg",
            "DF_handguard_QBZ95",
            "weaponWrap",
            "weaponOptics",
            "DF_Handle_QBZ95",
            "DF_mount",
            "DF_barrel_QBZ95",
            "DF_frog_down",
            "DF_muzzle",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.3;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1.1, 1.1, 0.7 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "bullet",
            "magazine",
            "barrel",
            "pisg",
            "sight",
            "rail"
        };
        hiddenSelections[] = {
            "barrel",
            "pisg",
            "sight",
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
            soundSetShot[] = { "My_DF_Weapons_Rifles_QBZ95_Shot_SoundSet", "Famas_Tail_SoundSet", "Famas_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_QBZ95_silencer_SoundSet", "Famas_silencerTail_SoundSet", "Famas_silencerInteriorTail_SoundSet" }, { "Famas_silencerHomeMade_SoundSet", "Famas_silencerHomeMadeTail_SoundSet", "Famas_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.12;
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = { "My_DF_Weapons_Rifles_QBZ95_Shot_SoundSet", "Famas_Tail_SoundSet", "Famas_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_QBZ95_silencer_SoundSet", "Famas_silencerTail_SoundSet", "Famas_silencerInteriorTail_SoundSet" }, { "Famas_silencerHomeMade_SoundSet", "Famas_silencerHomeMadeTail_SoundSet", "Famas_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.075;
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
                position[] = {-0.25, 0.035, 0 };
                orientation[] = { 0, 0, 0 };
            };
            class Melee
            {
                position[] = {-0.25, 0.035, -0.03 };
                orientation[] = { 0, 0, 0 };
            };
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\Famas\w_famas_states.anm";
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
        class AnimationSources
        {
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0.5;
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
    class My_DF_Weapons_Rifles_QBZ95: My_DF_Weapons_Rifles_QBZ95_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_QBZ950";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_QBZ951";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\QBZ95\data\barrel\QBZ95_barrel_co.paa",
            "My_DF_Weapons_Rifles\QBZ95\data\pisg\QBZ95_pisg_co.paa",
            "My_DF_Weapons_Rifles\QBZ95\data\sight\QBZ95_sight_co.paa",
            "My_DF_Weapons_Rifles\QBZ95\data\QBZ95_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\QBZ95\data\barrel\QBZ95_barrel.rvmat",
            "My_DF_Weapons_Rifles\QBZ95\data\pisg\QBZ95_pisg.rvmat",
            "My_DF_Weapons_Rifles\QBZ95\data\sight\QBZ95_sight.rvmat",
            "My_DF_Weapons_Rifles\QBZ95\data\QBZ95.rvmat"
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
                                "My_DF_Weapons_Rifles\QBZ95\data\barrel\QBZ95_barrel.rvmat",
                                "My_DF_Weapons_Rifles\QBZ95\data\pisg\QBZ95_pisg.rvmat",
                                "My_DF_Weapons_Rifles\QBZ95\data\sight\QBZ95_sight.rvmat",
                                "My_DF_Weapons_Rifles\QBZ95\data\QBZ95.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\QBZ95\data\barrel\QBZ95_barrel_worn.rvmat",
                                "My_DF_Weapons_Rifles\QBZ95\data\pisg\QBZ95_pisg_worn.rvmat",
                                "My_DF_Weapons_Rifles\QBZ95\data\sight\QBZ95_sight_worn.rvmat",
                                "My_DF_Weapons_Rifles\QBZ95\data\QBZ95_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\QBZ95\data\barrel\QBZ95_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\QBZ95\data\pisg\QBZ95_pisg_damage.rvmat",
                                "My_DF_Weapons_Rifles\QBZ95\data\sight\QBZ95_sight_damage.rvmat",
                                "My_DF_Weapons_Rifles\QBZ95\data\QBZ95_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\QBZ95\data\barrel\QBZ95_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\QBZ95\data\pisg\QBZ95_pisg_damage.rvmat",
                                "My_DF_Weapons_Rifles\QBZ95\data\sight\QBZ95_sight_damage.rvmat",
                                "My_DF_Weapons_Rifles\QBZ95\data\QBZ95_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\QBZ95\data\barrel\QBZ95_barrel_destruct.rvmat",
                                "My_DF_Weapons_Rifles\QBZ95\data\pisg\QBZ95_pisg_destruct.rvmat",
                                "My_DF_Weapons_Rifles\QBZ95\data\sight\QBZ95_sight_destructe.rvmat",
                                "My_DF_Weapons_Rifles\QBZ95\data\QBZ95_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_SCARH_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_Rifles\SCARH\SCARH.p3d";
        itemSize[] = { 8, 3 };
        weight = 3700;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.1;
        barrelArmor = 3;
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
            "My_DF_Weapons_Rifles_SCARH_20RndMag",
            "My_DF_Weapons_Rifles_SCARH_30RndMag",
            "My_DF_Weapons_Rifles_SCARH_50RndMag"
        };
        attachments[] = {
            "DF_stock",
            "DF_ar_pisg",
            "DF_handguard_SCARH",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_muzzle",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.45;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2.3, 2.3, 0.9 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "magazine",
            "bullet",
            "hide_barrel",
            "zasleh",
            "barrel",
            "frosight",
            "handguard",
            "pisg",
            "sight",
            "stock",
            "cheekpad",
            "frosight_1_up",
            "frosight_2_up",
            "frosight_1_down",
            "frosight_2_down",
            "frosight_1_base",
            "frosight_2_base",
            "sight_up",
            "sight_down"
        };
        hiddenSelections[] = {
            "barrel",
            "frosight",
            "handguard",
            "pisg",
            "sight",
            "stock",
            "cheekpad",
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
            soundSetShot[] = { "My_DF_Weapons_Rifles_SCARH_Shot_SoundSet", "FNFAL_Tail_SoundSet", "FNFAL_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_SCARH_silencer_SoundSet", "FNFAL_silencerHomeMadeTail_SoundSet", "FNFAL_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.12;
            recoil = "recoil_fal";
            recoilProne = "recoil_fal_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = { "My_DF_Weapons_Rifles_SCARH_Shot_SoundSet", "FNFAL_Tail_SoundSet", "FNFAL_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_SCARH_silencer_SoundSet", "FNFAL_silencerHomeMadeTail_SoundSet", "FNFAL_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.09;
            recoil = "recoil_fal";
            recoilProne = "recoil_fal_prone";
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
                position[] = {-0.05, 0, 0.02 };
                orientation[] = { 0, 0, 0 };
            };
            class Melee
            {
                position[] = {-0.05, 0, -0.05 };
                orientation[] = { 0, 0, 0 };
            };
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\FNFaL\w_FNFaL_states.anm";
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
        class AnimationSources
        {
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0.65;
            };
            class SMGmuzzle
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class frosight_1
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class frosight_2
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class sight
            {
                source = "user";
                animPeriod = 1;
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
    class My_DF_Weapons_Rifles_SCARH: My_DF_Weapons_Rifles_SCARH_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_SCARH0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_SCARH1";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\SCARH\data\barrel\SCARH_barrel_co.paa",
            "My_DF_Weapons_Rifles\SCARH\data\frosight\SCARH_frosight_co.paa",
            "My_DF_Weapons_Rifles\SCARH\data\handguard\SCARH_handguard_co.paa",
            "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std_co.paa",
            "My_DF_Weapons_Rifles\SCARH\data\sight\SCARH_sight_co.paa",
            "My_DF_Weapons_Rifles\SCARH\data\stock\SCARH_stock_co.paa",
            "My_DF_Weapons_Rifles\SCARH\data\cheekpad\SCARH_cheekpad_co.paa",
            "My_DF_Weapons_Rifles\SCARH\data\SCARH_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\SCARH\data\barrel\SCARH_barrel.rvmat",
            "My_DF_Weapons_Rifles\SCARH\data\frosight\SCARH_frosight.rvmat",
            "My_DF_Weapons_Rifles\SCARH\data\handguard\SCARH_handguard.rvmat",
            "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std.rvmat",
            "My_DF_Weapons_Rifles\SCARH\data\sight\SCARH_sight.rvmat",
            "My_DF_Weapons_Rifles\SCARH\data\stock\SCARH_stock.rvmat",
            "My_DF_Weapons_Rifles\SCARH\data\cheekpad\SCARH_cheekpad.rvmat",
            "My_DF_Weapons_Rifles\SCARH\data\SCARH.rvmat"
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
                                "My_DF_Weapons_Rifles\SCARH\data\barrel\SCARH_barrel.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\frosight\SCARH_frosight.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\handguard\SCARH_handguard.rvmat",
                                "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\sight\SCARH_sight.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\stock\SCARH_stock.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\cheekpad\SCARH_cheekpad.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\SCARH.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\SCARH\data\barrel\SCARH_barrel_worn.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\frosight\SCARH_frosight_worn.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\handguard\SCARH_handguard_worn.rvmat",
                                "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std_worn.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\sight\SCARH_sight_worn.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\stock\SCARH_stock_worn.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\cheekpad\SCARH_cheekpad_worn.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\SCARH_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\SCARH\data\barrel\SCARH_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\frosight\SCARH_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\handguard\SCARH_handguard_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std_damage.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\sight\SCARH_sight_damage.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\stock\SCARH_stock_damage.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\cheekpad\SCARH_cheekpad_damage.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\SCARH_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\SCARH\data\barrel\SCARH_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\frosight\SCARH_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\handguard\SCARH_handguard_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std_damage.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\sight\SCARH_sight_damage.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\stock\SCARH_stock_damage.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\cheekpad\SCARH_cheekpad_damage.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\SCARH_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\SCARH\data\barrel\SCARH_barrel_destruct.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\frosight\SCARH_frosight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\handguard\SCARH_handguard_destruct.rvmat",
                                "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std_destruct.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\sight\SCARH_sight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\stock\SCARH_stock_destruct.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\cheekpad\SCARH_cheekpad_destruct.rvmat",
                                "My_DF_Weapons_Rifles\SCARH\data\SCARH_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_SG553_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_Rifles\SG553\SG553.p3d";
        itemSize[] = { 8, 3 };
        weight = 2500;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 1.0;
        barrelArmor = 2;
        initSpeedMultiplier = 1;
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
            "My_DF_Weapons_Rifles_SG553_20RndMag",
            "My_DF_Weapons_Rifles_SG553_30RndMag",
            "My_DF_Weapons_Rifles_SG553_45RndMag"
        };
        attachments[] = {
            "DF_stock",
            "DF_ar_pisg",
            "DF_handguard_SG553",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_barrel_SG553",
            "DF_muzzle",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.2;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "bullet",
            "magazine",
            "hide_barrel",
            "barrel",
            "frosight",
            "handguard",
            "pisg",
            "sight",
            "stock",
            "frosight_1",
            "frosight_2"
        };
        hiddenSelections[] = {
            "barrel",
            "frosight",
            "handguard",
            "pisg",
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
            soundSetShot[] = { "My_DF_Weapons_Rifles_SG553_Shot_SoundSet", "M4_Tail_SoundSet", "M4_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_SG553_silencer_SoundSet", "M4_silencerTail_SoundSet", "M4_silencerInteriorTail_SoundSet" }, { "M4_silencerHomeMade_SoundSet", "M4_silencerHomeMadeTail_SoundSet", "M4_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.12;
            recoil = "recoil_m4";
            recoilProne = "recoil_m4_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = { "My_DF_Weapons_Rifles_SG553_Shot_SoundSet", "M4_Tail_SoundSet", "M4_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Rifles_SG553_silencer_SoundSet", "M4_silencerTail_SoundSet", "M4_silencerInteriorTail_SoundSet" }, { "M4_silencerHomeMade_SoundSet", "M4_silencerHomeMadeTail_SoundSet", "M4_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.065;
            recoil = "recoil_m4";
            recoilProne = "recoil_m4_prone";
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
    class My_DF_Weapons_Rifles_SG553: My_DF_Weapons_Rifles_SG553_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_SG5530";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_SG5531";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_co.paa",
            "My_DF_Weapons_Rifles\SG553\data\frosight\SG553_frosight_co.paa",
            "My_DF_Weapons_Rifles\SG553\data\handguard\SG553_handguard_co.paa",
            "My_DF_Weapons_Rifles\SG553\data\pisg\SG553_pisg_co.paa",
            "My_DF_Weapons_Rifles\SG553\data\sight\SG553_sight_co.paa",
            "My_DF_Weapons_Rifles\SG553\data\stock\SG553_stock_co.paa",
            "My_DF_Weapons_Rifles\SG553\data\SG553_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel.rvmat",
            "My_DF_Weapons_Rifles\SG553\data\frosight\SG553_frosight.rvmat",
            "My_DF_Weapons_Rifles\SG553\data\handguard\SG553_handguard.rvmat",
            "My_DF_Weapons_Rifles\SG553\data\pisg\SG553_pisg.rvmat",
            "My_DF_Weapons_Rifles\SG553\data\sight\SG553_sight.rvmat",
            "My_DF_Weapons_Rifles\SG553\data\stock\SG553_stock.rvmat",
            "My_DF_Weapons_Rifles\SG553\data\SG553.rvmat"
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
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\frosight\SG553_frosight.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\handguard\SG553_handguard.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\pisg\SG553_pisg.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\sight\SG553_sight.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\stock\SG553_stock.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\SG553.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_worn.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\frosight\SG553_frosight_worn.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\handguard\SG553_handguard_worn.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\pisg\SG553_pisg_worn.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\sight\SG553_sight_worn.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\stock\SG553_stock_worn.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\SG553_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\frosight\SG553_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\handguard\SG553_handguard_damage.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\pisg\SG553_pisg_damage.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\sight\SG553_sight_damage.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\stock\SG553_stock_damage.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\SG553_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\frosight\SG553_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\handguard\SG553_handguard_damage.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\pisg\SG553_pisg_damage.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\sight\SG553_sight_damage.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\stock\SG553_stock_damage.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\SG553_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_destruct.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\frosight\SG553_frosight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\handguard\SG553_handguard_destruct.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\pisg\SG553_pisg_destruct.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\sight\SG553_sight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\stock\SG553_stock_destructe.rvmat",
                                "My_DF_Weapons_Rifles\SG553\data\SG553_destruct.rvmat"
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
    class My_DF_Weapons_Rifles_AK12_30RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_AK12_30RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_AK12_30RndMag1";
        model = "\My_DF_Weapons_Rifles\AK12\mag\30RndMag\AK12_30RndMag.p3d";
        weight = 400;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_545x39";
        ammoItems[] = {
            "Ammo_545x39",
            "Ammo_545x39Tracer",
            "My_DF_Weapons_Ammo_545x39_BS",
            "My_DF_Weapons_Ammo_545x39_BT",
            "My_DF_Weapons_Ammo_545x39_PRS",
            "My_DF_Weapons_Ammo_545x39_PS",
            "My_DF_Weapons_Ammo_545x39_T"
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
            "My_DF_Weapons_Rifles\AK12\mag\30RndMag\data\AK12_30RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\AK12\mag\30RndMag\data\AK12_30RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\AK12\mag\30RndMag\data\AK12_30RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\AK12\mag\30RndMag\data\AK12_30RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\AK12\mag\30RndMag\data\AK12_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\AK12\mag\30RndMag\data\AK12_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\AK12\mag\30RndMag\data\AK12_30RndMag_destruct.rvmat"
                            }
                        }
                    };
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
    class My_DF_Weapons_Rifles_AK74_20RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_AK74_20RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_AK74_20RndMag1";
        model = "\My_DF_Weapons_Rifles\AK74\mag\20RndMag\AK74_20RndMag.p3d";
        weight = 200;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 2 };
        count = 20;
        ammo = "Bullet_545x39";
        ammoItems[] = {
            "Ammo_545x39",
            "Ammo_545x39Tracer",
            "My_DF_Weapons_Ammo_545x39_BS",
            "My_DF_Weapons_Ammo_545x39_BT",
            "My_DF_Weapons_Ammo_545x39_PRS",
            "My_DF_Weapons_Ammo_545x39_PS",
            "My_DF_Weapons_Ammo_545x39_T"
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
            "My_DF_Weapons_Rifles\AK74\mag\20RndMag\data\AK74_20RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\AK74\mag\20RndMag\data\AK74_20RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\AK74\mag\20RndMag\data\AK74_20RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\AK74\mag\20RndMag\data\AK74_20RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\AK74\mag\20RndMag\data\AK74_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\AK74\mag\20RndMag\data\AK74_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\AK74\mag\20RndMag\data\AK74_20RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_AK74_30RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_AK74_30RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_AK74_30RndMag1";
        model = "\My_DF_Weapons_Rifles\AK74\mag\30RndMag\AK74_30RndMag.p3d";
        weight = 400;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_545x39";
        ammoItems[] = {
            "Ammo_545x39",
            "Ammo_545x39Tracer",
            "My_DF_Weapons_Ammo_545x39_BS",
            "My_DF_Weapons_Ammo_545x39_BT",
            "My_DF_Weapons_Ammo_545x39_PRS",
            "My_DF_Weapons_Ammo_545x39_PS",
            "My_DF_Weapons_Ammo_545x39_T"
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
            "My_DF_Weapons_Rifles\AK74\mag\30RndMag\data\AK74_30RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\AK74\mag\30RndMag\data\AK74_30RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\AK74\mag\30RndMag\data\AK74_30RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\AK74\mag\30RndMag\data\AK74_30RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\AK74\mag\30RndMag\data\AK74_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\AK74\mag\30RndMag\data\AK74_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\AK74\mag\30RndMag\data\AK74_30RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_AKM_20RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_AKM_20RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_AKM_20RndMag1";
        model = "\My_DF_Weapons_Rifles\AKM\Mag\20RndMag\AKM_20RndMag.p3d";
        weight = 400;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 2 };
        count = 20;
        ammo = "Bullet_762x39";
        ammoItems[] = { "Ammo_762x39", "Ammo_762x39Tracer", "My_DF_Weapons_Ammo_762x39_AP", "My_DF_Weapons_Ammo_762x39_BP", "My_DF_Weapons_Ammo_762x39_LP", "My_DF_Weapons_Ammo_762x39_PS", "My_DF_Weapons_Ammo_762x39_T45N" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\AKM\mag\20RndMag\data\AKM_20RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\AKM\mag\20RndMag\data\AKM_20RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\AKM\mag\20RndMag\data\AKM_20RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\AKM\mag\20RndMag\data\AKM_20RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\AKM\mag\20RndMag\data\AKM_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\AKM\mag\20RndMag\data\AKM_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\AKM\mag\20RndMag\data\AKM_20RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_AKM_30RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_AKM_30RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_AKM_30RndMag1";
        model = "\My_DF_Weapons_Rifles\AKM\Mag\30RndMag\AKM_30RndMag.p3d";
        weight = 400;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_762x39";
        ammoItems[] = { "Ammo_762x39", "Ammo_762x39Tracer", "My_DF_Weapons_Ammo_762x39_AP", "My_DF_Weapons_Ammo_762x39_BP", "My_DF_Weapons_Ammo_762x39_LP", "My_DF_Weapons_Ammo_762x39_PS", "My_DF_Weapons_Ammo_762x39_T45N" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\AKM\mag\30RndMag\data\AKM_30RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\AKM\mag\30RndMag\data\AKM_30RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\AKM\mag\30RndMag\data\AKM_30RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\AKM\mag\30RndMag\data\AKM_30RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\AKM\mag\30RndMag\data\AKM_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\AKM\mag\30RndMag\data\AKM_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\AKM\mag\30RndMag\data\AKM_30RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_AKM_30RndMag2: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_AKM_30RndMag20";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_AKM_30RndMag21";
        model = "\My_DF_Weapons_Rifles\AKM\Mag\30RndMag2\AKM_30RndMag2.p3d";
        weight = 400;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_762x39";
        ammoItems[] = { "Ammo_762x39", "Ammo_762x39Tracer", "My_DF_Weapons_Ammo_762x39_AP", "My_DF_Weapons_Ammo_762x39_BP", "My_DF_Weapons_Ammo_762x39_LP", "My_DF_Weapons_Ammo_762x39_PS", "My_DF_Weapons_Ammo_762x39_T45N" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\AKM\mag\30RndMag2\data\AKM_30RndMag2_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\AKM\mag\30RndMag2\data\AKM_30RndMag2.rvmat"
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
                                "My_DF_Weapons_Rifles\AKM\mag\30RndMag2\data\AKM_30RndMag2.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\AKM\mag\30RndMag2\data\AKM_30RndMag2_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\AKM\mag\30RndMag2\data\AKM_30RndMag2_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\AKM\mag\30RndMag2\data\AKM_30RndMag2_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\AKM\mag\30RndMag2\data\AKM_30RndMag2_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_AKM_30RndMag3: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_AKM_30RndMag30";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_AKM_30RndMag31";
        model = "\My_DF_Weapons_Rifles\AKM\Mag\30RndMag3\AKM_30RndMag3.p3d";
        weight = 400;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_762x39";
        ammoItems[] = { "Ammo_762x39", "Ammo_762x39Tracer", "My_DF_Weapons_Ammo_762x39_AP", "My_DF_Weapons_Ammo_762x39_BP", "My_DF_Weapons_Ammo_762x39_LP", "My_DF_Weapons_Ammo_762x39_PS", "My_DF_Weapons_Ammo_762x39_T45N" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\AKM\mag\30RndMag3\data\AKM_30RndMag3_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\AKM\mag\30RndMag3\data\AKM_30RndMag3.rvmat"
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
                                "My_DF_Weapons_Rifles\AKM\mag\30RndMag3\data\AKM_30RndMag3.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\AKM\mag\30RndMag3\data\AKM_30RndMag3_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\AKM\mag\30RndMag3\data\AKM_30RndMag3_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\AKM\mag\30RndMag3\data\AKM_30RndMag3_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\AKM\mag\30RndMag3\data\AKM_30RndMag3_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_AKM_40RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_AKM_40RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_AKM_40RndMag1";
        model = "\My_DF_Weapons_Rifles\AKM\Mag\40RndMag\AKM_40RndMag.p3d";
        weight = 400;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 4 };
        count = 40;
        ammo = "Bullet_762x39";
        ammoItems[] = { "Ammo_762x39", "Ammo_762x39Tracer", "My_DF_Weapons_Ammo_762x39_AP", "My_DF_Weapons_Ammo_762x39_BP", "My_DF_Weapons_Ammo_762x39_LP", "My_DF_Weapons_Ammo_762x39_PS", "My_DF_Weapons_Ammo_762x39_T45N" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\AKM\mag\40RndMag\data\AKM_40RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\AKM\mag\40RndMag\data\AKM_40RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\AKM\mag\40RndMag\data\AKM_40RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\AKM\mag\40RndMag\data\AKM_40RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\AKM\mag\40RndMag\data\AKM_40RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\AKM\mag\40RndMag\data\AKM_40RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\AKM\mag\40RndMag\data\AKM_40RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_AKM_70RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_AKM_70RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_AKM_70RndMag1";
        model = "\My_DF_Weapons_Rifles\AKM\Mag\70RndMag\AKM_70RndMag.p3d";
        weight = 700;
        weightPerQuantityUnit = 4;
        itemSize[] = { 2, 3 };
        count = 70;
        ammo = "Bullet_762x39";
        ammoItems[] = { "Ammo_762x39", "Ammo_762x39Tracer", "My_DF_Weapons_Ammo_762x39_AP", "My_DF_Weapons_Ammo_762x39_BP", "My_DF_Weapons_Ammo_762x39_LP", "My_DF_Weapons_Ammo_762x39_PS", "My_DF_Weapons_Ammo_762x39_T45N" };
        tracersEvery = 0;
        attachments[] = {};
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\AKM\mag\70RndMag\data\AKM_70RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\AKM\mag\70RndMag\data\AKM_70RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\AKM\mag\70RndMag\data\AKM_70RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\AKM\mag\70RndMag\data\AKM_70RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\AKM\mag\70RndMag\data\AKM_70RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\AKM\mag\70RndMag\data\AKM_70RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\AKM\mag\70RndMag\data\AKM_70RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_AKS74U_30RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_AKS74U_30RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_AKS74U_30RndMag1";
        model = "\My_DF_Weapons_Rifles\AKS74U\mag\30RndMag\AKS74U_30RndMag.p3d";
        weight = 400;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_545x39";
        ammoItems[] = {
            "Ammo_545x39",
            "Ammo_545x39Tracer",
            "My_DF_Weapons_Ammo_545x39_BS",
            "My_DF_Weapons_Ammo_545x39_BT",
            "My_DF_Weapons_Ammo_545x39_PRS",
            "My_DF_Weapons_Ammo_545x39_PS",
            "My_DF_Weapons_Ammo_545x39_T"
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
            "My_DF_Weapons_Rifles\AKS74U\mag\30RndMag\data\AKS74U_30RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\AKS74U\mag\30RndMag\data\AKS74U_30RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\AKS74U\mag\30RndMag\data\AKS74U_30RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\AKS74U\mag\30RndMag\data\AKS74U_30RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\AKS74U\mag\30RndMag\data\AKS74U_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\AKS74U\mag\30RndMag\data\AKS74U_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\AKS74U\mag\30RndMag\data\AKS74U_30RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_AKS74U_45RndExtMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_AKS74U_45RndExtMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_AKS74U_45RndExtMag1";
        model = "\My_DF_Weapons_Rifles\AKS74U\mag\45RndExtMag\AKS74U_45RndExtMag.p3d";
        weight = 500;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 4 };
        count = 45;
        ammo = "Bullet_545x39";
        ammoItems[] = {
            "Ammo_545x39",
            "Ammo_545x39Tracer",
            "My_DF_Weapons_Ammo_545x39_BS",
            "My_DF_Weapons_Ammo_545x39_BT",
            "My_DF_Weapons_Ammo_545x39_PRS",
            "My_DF_Weapons_Ammo_545x39_PS",
            "My_DF_Weapons_Ammo_545x39_T"
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
            "My_DF_Weapons_Rifles\AKS74U\mag\45RndExtMag\data\AKS74U_45RndExtMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\AKS74U\mag\45RndExtMag\data\AKS74U_45RndExtMag.rvmat"
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
                                "My_DF_Weapons_Rifles\AKS74U\mag\45RndExtMag\data\AKS74U_45RndExtMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\AKS74U\mag\45RndExtMag\data\AKS74U_45RndExtMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\AKS74U\mag\45RndExtMag\data\AKS74U_45RndExtMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\AKS74U\mag\45RndExtMag\data\AKS74U_45RndExtMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\AKS74U\mag\45RndExtMag\data\AKS74U_45RndExtMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_AKS74U_75RndDrumMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_AKS74U_75RndDrumMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_AKS74U_75RndDrumMag1";
        model = "\My_DF_Weapons_Rifles\AKS74U\mag\75RndDrumMag\AKS74U_75RndDrumMag.p3d";
        weight = 1000;
        weightPerQuantityUnit = 4;
        itemSize[] = { 3, 3 };
        count = 75;
        ammo = "Bullet_545x39";
        ammoItems[] = {
            "Ammo_545x39",
            "Ammo_545x39Tracer",
            "My_DF_Weapons_Ammo_545x39_BS",
            "My_DF_Weapons_Ammo_545x39_BT",
            "My_DF_Weapons_Ammo_545x39_PRS",
            "My_DF_Weapons_Ammo_545x39_PS",
            "My_DF_Weapons_Ammo_545x39_T"
        };
        tracersEvery = 0;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\AKS74U\mag\75RndDrumMag\data\AKS74U_75RndDrumMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\AKS74U\mag\75RndDrumMag\data\AKS74U_75RndDrumMag.rvmat"
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
                                "My_DF_Weapons_Rifles\AKS74U\mag\75RndDrumMag\data\AKS74U_75RndDrumMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\AKS74U\mag\75RndDrumMag\data\AKS74U_75RndDrumMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\AKS74U\mag\75RndDrumMag\data\AKS74U_75RndDrumMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\AKS74U\mag\75RndDrumMag\data\AKS74U_75RndDrumMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\AKS74U\mag\75RndDrumMag\data\AKS74U_75RndDrumMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_Ash12_20RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_Ash12_20RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_Ash12_20RndMag1";
        model = "\My_DF_Weapons_Rifles\Ash12\Mag\20RndMag\Ash12_20RndMag.p3d";
        weight = 500;
        weightPerQuantityUnit = 10;
        itemSize[] = { 1, 2 };
        count = 20;
        ammo = "Bullet_DF_127x55_PD12";
        ammoItems[] = { "My_DF_Weapons_Ammo_127x55_BP", "My_DF_Weapons_Ammo_127x55_PD12", "My_DF_Weapons_Ammo_127x55_PS12", "My_DF_Weapons_Ammo_127x55_PS12A", "My_DF_Weapons_Ammo_127x55_PS12B" };
        tracersEvery = 0;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\Ash12\mag\20RndMag\data\Ash12_20RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\Ash12\mag\20RndMag\data\Ash12_20RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\Ash12\mag\20RndMag\data\Ash12_20RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\Ash12\mag\20RndMag\data\Ash12_20RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\Ash12\mag\20RndMag\data\Ash12_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\Ash12\mag\20RndMag\data\Ash12_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\Ash12\mag\20RndMag\data\Ash12_20RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_Ash12_30RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_Ash12_30RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_Ash12_30RndMag1";
        model = "\My_DF_Weapons_Rifles\Ash12\Mag\30RndMag\Ash12_30RndMag.p3d";
        weight = 700;
        weightPerQuantityUnit = 10;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_DF_127x55_PD12";
        ammoItems[] = { "My_DF_Weapons_Ammo_127x55_BP", "My_DF_Weapons_Ammo_127x55_PD12", "My_DF_Weapons_Ammo_127x55_PS12", "My_DF_Weapons_Ammo_127x55_PS12A", "My_DF_Weapons_Ammo_127x55_PS12B" };
        tracersEvery = 0;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\Ash12\mag\30RndMag\data\Ash12_30RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\Ash12\mag\30RndMag\data\Ash12_30RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\Ash12\mag\30RndMag\data\Ash12_30RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\Ash12\mag\30RndMag\data\Ash12_30RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\Ash12\mag\30RndMag\data\Ash12_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\Ash12\mag\30RndMag\data\Ash12_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\Ash12\mag\30RndMag\data\Ash12_30RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_AUG_30RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_AUG_30RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_AUG_30RndMag1";
        model = "\My_DF_Weapons_Rifles\AUG\mag\30RndMag\AUG_30RndMag.p3d";
        weight = 200;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_556x45";
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
            "My_DF_Weapons_Rifles\AUG\mag\30RndMag\data\AUG_30RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\AUG\mag\30RndMag\data\AUG_30RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\AUG\mag\30RndMag\data\AUG_30RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\AUG\mag\30RndMag\data\AUG_30RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\AUG\mag\30RndMag\data\AUG_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\AUG\mag\30RndMag\data\AUG_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\AUG\mag\30RndMag\data\AUG_30RndMag_destruct.rvmat"
                            }
                        }
                    };
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
    class My_DF_Weapons_Rifles_AUG_30RndPMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_AUG_30RndPMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_AUG_30RndPMag1";
        model = "\My_DF_Weapons_Rifles\AUG\mag\30RndPMag\AUG_30RndPMag.p3d";
        weight = 200;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_556x45";
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
            "My_DF_Weapons_Rifles\AUG\mag\30RndPMag\data\AUG_30RndPMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\AUG\mag\30RndPMag\data\AUG_30RndPMag.rvmat"
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
                                "My_DF_Weapons_Rifles\AUG\mag\30RndPMag\data\AUG_30RndPMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\AUG\mag\30RndPMag\data\AUG_30RndPMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\AUG\mag\30RndPMag\data\AUG_30RndPMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\AUG\mag\30RndPMag\data\AUG_30RndPMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\AUG\mag\30RndPMag\data\AUG_30RndPMag_destruct.rvmat"
                            }
                        }
                    };
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
    class My_DF_Weapons_Rifles_AUG_60RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_AUG_60RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_AUG_60RndMag1";
        model = "\My_DF_Weapons_Rifles\AUG\mag\60RndMag\AUG_60RndMag.p3d";
        weight = 400;
        weightPerQuantityUnit = 4;
        itemSize[] = { 2, 2 };
        count = 60;
        ammo = "Bullet_556x45";
        ammoItems[] = { "Ammo_556x45", "Ammo_556x45Tracer", "My_DF_Weapons_Ammo_556x45_FMJ", "My_DF_Weapons_Ammo_556x45_M855", "My_DF_Weapons_Ammo_556x45_M855A1", "My_DF_Weapons_Ammo_556x45_M995", "My_DF_Weapons_Ammo_556x45_RRLP" };
        tracersEvery = 0;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\AUG\mag\60RndMag\data\AUG_60RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\AUG\mag\60RndMag\data\AUG_60RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\AUG\mag\60RndMag\data\AUG_60RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\AUG\mag\60RndMag\data\AUG_60RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\AUG\mag\60RndMag\data\AUG_60RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\AUG\mag\60RndMag\data\AUG_60RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\AUG\mag\60RndMag\data\AUG_60RndMag_destruct.rvmat"
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
    class My_DF_Weapons_Rifles_G3_10RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_G3_10RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_G3_10RndMag1";
        model = "\My_DF_Weapons_Rifles\G3\Mag\10RndMag\G3_10RndMag.p3d";
        weight = 200;
        weightPerQuantityUnit = 5;
        itemSize[] = { 1, 1 };
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
            "My_DF_Weapons_Rifles\G3\Mag\10RndMag\data\G3_10RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\G3\Mag\10RndMag\data\G3_10RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\G3\Mag\10RndMag\data\G3_10RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\G3\Mag\10RndMag\data\G3_10RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\G3\Mag\10RndMag\data\G3_10RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\G3\Mag\10RndMag\data\G3_10RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\G3\Mag\10RndMag\data\G3_10RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_G3_20RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_G3_20RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_G3_20RndMag1";
        model = "\My_DF_Weapons_Rifles\G3\Mag\20RndMag\G3_20RndMag.p3d";
        weight = 300;
        weightPerQuantityUnit = 5;
        itemSize[] = { 1, 2 };
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
            "My_DF_Weapons_Rifles\G3\Mag\20RndMag\data\G3_20RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\G3\Mag\20RndMag\data\G3_20RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\G3\Mag\20RndMag\data\G3_20RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\G3\Mag\20RndMag\data\G3_20RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\G3\Mag\20RndMag\data\G3_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\G3\Mag\20RndMag\data\G3_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\G3\Mag\20RndMag\data\G3_20RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_G3_30RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_G3_30RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_G3_30RndMag1";
        model = "\My_DF_Weapons_Rifles\G3\Mag\30RndMag\G3_30RndMag.p3d";
        weight = 300;
        weightPerQuantityUnit = 5;
        itemSize[] = { 1, 3 };
        count = 30;
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
            "My_DF_Weapons_Rifles\G3\Mag\30RndMag\data\G3_30RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\G3\Mag\30RndMag\data\G3_30RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\G3\Mag\30RndMag\data\G3_30RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\G3\Mag\30RndMag\data\G3_30RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\G3\Mag\30RndMag\data\G3_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\G3\Mag\30RndMag\data\G3_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\G3\Mag\30RndMag\data\G3_30RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_G3_50RndDrumMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_G3_50RndDrumMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_G3_50RndDrumMag1";
        model = "\My_DF_Weapons_Rifles\G3\Mag\50RndDrumMag\G3_50RndDrumMag.p3d";
        weight = 500;
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
            "My_DF_Weapons_Rifles\G3\Mag\50RndDrumMag\data\G3_50RndDrumMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\G3\Mag\50RndDrumMag\data\G3_50RndDrumMag.rvmat"
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
                                "My_DF_Weapons_Rifles\G3\Mag\50RndDrumMag\data\G3_50RndDrumMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\G3\Mag\50RndDrumMag\data\G3_50RndDrumMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\G3\Mag\50RndDrumMag\data\G3_50RndDrumMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\G3\Mag\50RndDrumMag\data\G3_50RndDrumMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\G3\Mag\50RndDrumMag\data\G3_50RndDrumMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_K437_30RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_K437_30RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_K437_30RndMag1";
        model = "\My_DF_Weapons_Rifles\K437\mag\30RndMag\K437_30RndMag.p3d";
        weight = 300;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_DF_300_Bpz";
        ammoItems[] = {
            "My_DF_Weapons_Ammo_300_Bpz",
            "My_DF_Weapons_Ammo_300_Cbj",
            "My_DF_Weapons_Ammo_300_Vmax"
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
            "My_DF_Weapons_Rifles\K437\mag\30RndMag\data\K437_30RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\K437\mag\30RndMag\data\K437_30RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\K437\mag\30RndMag\data\K437_30RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\K437\mag\30RndMag\data\K437_30RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\K437\mag\30RndMag\data\K437_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\K437\mag\30RndMag\data\K437_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\K437\mag\30RndMag\data\K437_30RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_K437_45RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_K437_45RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_K437_45RndMag1";
        model = "\My_DF_Weapons_Rifles\K437\mag\45RndMag\K437_45RndMag.p3d";
        weight = 400;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 4 };
        count = 45;
        ammo = "Bullet_DF_300_Bpz";
        ammoItems[] = {
            "My_DF_Weapons_Ammo_300_Bpz",
            "My_DF_Weapons_Ammo_300_Cbj",
            "My_DF_Weapons_Ammo_300_Vmax"
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
            "My_DF_Weapons_Rifles\K437\mag\45RndMag\data\K437_45RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\K437\mag\45RndMag\data\K437_45RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\K437\mag\45RndMag\data\K437_45RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\K437\mag\45RndMag\data\K437_45RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\K437\mag\45RndMag\data\K437_45RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\K437\mag\45RndMag\data\K437_45RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\K437\mag\45RndMag\data\K437_45RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_K437_60RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_K437_60RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_K437_60RndMag1";
        model = "\My_DF_Weapons_Rifles\K437\mag\60RndMag\K437_60RndMag.p3d";
        weight = 500;
        weightPerQuantityUnit = 4;
        itemSize[] = { 2, 2 };
        count = 60;
        ammo = "Bullet_DF_300_Bpz";
        ammoItems[] = {
            "My_DF_Weapons_Ammo_300_Bpz",
            "My_DF_Weapons_Ammo_300_Cbj",
            "My_DF_Weapons_Ammo_300_Vmax"
        };
        tracersEvery = 0;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\K437\mag\60RndMag\data\K437_60RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\K437\mag\60RndMag\data\K437_60RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\K437\mag\60RndMag\data\K437_60RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\K437\mag\60RndMag\data\K437_60RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\K437\mag\60RndMag\data\K437_60RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\K437\mag\60RndMag\data\K437_60RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\K437\mag\60RndMag\data\K437_60RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_KC17_30RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_KC17_30RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_KC17_30RndMag1";
        model = "\My_DF_Weapons_Rifles\KC17\mag\30RndMag\KC17_30RndMag.p3d";
        weight = 400;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_545x39";
        ammoItems[] = {
            "Ammo_545x39",
            "Ammo_545x39Tracer",
            "My_DF_Weapons_Ammo_545x39_BS",
            "My_DF_Weapons_Ammo_545x39_BT",
            "My_DF_Weapons_Ammo_545x39_PRS",
            "My_DF_Weapons_Ammo_545x39_PS",
            "My_DF_Weapons_Ammo_545x39_T"
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
            "My_DF_Weapons_Rifles\KC17\mag\30RndMag\data\KC17_30RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\KC17\mag\30RndMag\data\KC17_30RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\KC17\mag\30RndMag\data\KC17_30RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\KC17\mag\30RndMag\data\KC17_30RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\KC17\mag\30RndMag\data\KC17_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\KC17\mag\30RndMag\data\KC17_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\KC17\mag\30RndMag\data\KC17_30RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_KC17_45RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_KC17_45RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_KC17_45RndMag1";
        model = "\My_DF_Weapons_Rifles\KC17\mag\45RndMag\KC17_45RndMag.p3d";
        weight = 500;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 4 };
        count = 40;
        ammo = "Bullet_545x39";
        ammoItems[] = {
            "Ammo_545x39",
            "Ammo_545x39Tracer",
            "My_DF_Weapons_Ammo_545x39_BS",
            "My_DF_Weapons_Ammo_545x39_BT",
            "My_DF_Weapons_Ammo_545x39_PRS",
            "My_DF_Weapons_Ammo_545x39_PS",
            "My_DF_Weapons_Ammo_545x39_T"
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
            "My_DF_Weapons_Rifles\KC17\mag\45RndMag\data\KC17_45RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\KC17\mag\45RndMag\data\KC17_45RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\KC17\mag\45RndMag\data\KC17_45RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\KC17\mag\45RndMag\data\KC17_45RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\KC17\mag\45RndMag\data\KC17_45RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\KC17\mag\45RndMag\data\KC17_45RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\KC17\mag\45RndMag\data\KC17_45RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_KC17_75RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_KC17_75RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_KC17_75RndMag1";
        model = "\My_DF_Weapons_Rifles\KC17\mag\75RndMag\KC17_75RndMag.p3d";
        weight = 600;
        weightPerQuantityUnit = 4;
        itemSize[] = { 2, 2 };
        count = 75;
        ammo = "Bullet_545x39";
        ammoItems[] = {
            "Ammo_545x39",
            "Ammo_545x39Tracer",
            "My_DF_Weapons_Ammo_545x39_BS",
            "My_DF_Weapons_Ammo_545x39_BT",
            "My_DF_Weapons_Ammo_545x39_PRS",
            "My_DF_Weapons_Ammo_545x39_PS",
            "My_DF_Weapons_Ammo_545x39_T"
        };
        tracersEvery = 0;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\KC17\mag\75RndMag\data\KC17_75RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\KC17\mag\75RndMag\data\KC17_75RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\KC17\mag\75RndMag\data\KC17_75RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\KC17\mag\75RndMag\data\KC17_75RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\KC17\mag\75RndMag\data\KC17_75RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\KC17\mag\75RndMag\data\KC17_75RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\KC17\mag\75RndMag\data\KC17_75RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_M4A1_20RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_M4A1_20RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_M4A1_20RndMag1";
        model = "\My_DF_Weapons_Rifles\M4A1\mag\20RndMag\M4A1_20RndMag.p3d";
        weight = 100;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 2 };
        count = 20;
        ammo = "Bullet_556x45";
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
            "My_DF_Weapons_Rifles\M4A1\mag\20RndMag\data\M4A1_20RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\M4A1\mag\20RndMag\data\M4A1_20RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\M4A1\mag\20RndMag\data\M4A1_20RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\20RndMag\data\M4A1_20RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\20RndMag\data\M4A1_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\20RndMag\data\M4A1_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\20RndMag\data\M4A1_20RndMag_destruct.rvmat"
                            }
                        }
                    };
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
    class My_DF_Weapons_Rifles_M4A1_30RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_M4A1_30RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_M4A1_30RndMag1";
        model = "\My_DF_Weapons_Rifles\M4A1\mag\30RndMag\M4A1_30RndMag.p3d";
        weight = 200;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_556x45";
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
            "My_DF_Weapons_Rifles\M4A1\mag\30RndMag\data\M4A1_30RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\M4A1\mag\30RndMag\data\M4A1_30RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\M4A1\mag\30RndMag\data\M4A1_30RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\30RndMag\data\M4A1_30RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\30RndMag\data\M4A1_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\30RndMag\data\M4A1_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\30RndMag\data\M4A1_30RndMag_destruct.rvmat"
                            }
                        }
                    };
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
    class My_DF_Weapons_Rifles_M4A1_30RndMag2: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_M4A1_30RndMag20";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_M4A1_30RndMag21";
        model = "\My_DF_Weapons_Rifles\M4A1\mag\30RndMag2\M4A1_30RndMag2.p3d";
        weight = 200;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_556x45";
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
            "My_DF_Weapons_Rifles\M4A1\mag\30RndMag2\data\M4A1_30RndMag2_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\M4A1\mag\30RndMag2\data\M4A1_30RndMag2.rvmat"
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
                                "My_DF_Weapons_Rifles\M4A1\mag\30RndMag2\data\M4A1_30RndMag2.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\30RndMag2\data\M4A1_30RndMag2_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\30RndMag2\data\M4A1_30RndMag2_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\30RndMag2\data\M4A1_30RndMag2_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\30RndMag2\data\M4A1_30RndMag2_destruct.rvmat"
                            }
                        }
                    };
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
    class My_DF_Weapons_Rifles_M4A1_30RndPMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_M4A1_30RndPMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_M4A1_30RndPMag1";
        model = "\My_DF_Weapons_Rifles\M4A1\mag\30RndPMag\M4A1_30RndPMag.p3d";
        weight = 200;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_556x45";
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
            "My_DF_Weapons_Rifles\M4A1\mag\30RndPMag\data\M4A1_30RndPMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\M4A1\mag\30RndPMag\data\M4A1_30RndPMag.rvmat"
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
                                "My_DF_Weapons_Rifles\M4A1\mag\30RndPMag\data\M4A1_30RndPMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\30RndPMag\data\M4A1_30RndPMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\30RndPMag\data\M4A1_30RndPMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\30RndPMag\data\M4A1_30RndPMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\30RndPMag\data\M4A1_30RndPMag_destruct.rvmat"
                            }
                        }
                    };
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
    class My_DF_Weapons_Rifles_M4A1_45RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_M4A1_45RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_M4A1_45RndMag1";
        model = "\My_DF_Weapons_Rifles\M4A1\mag\45RndMag\M4A1_45RndMag.p3d";
        weight = 200;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 3 };
        count = 45;
        ammo = "Bullet_556x45";
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
            "My_DF_Weapons_Rifles\M4A1\mag\45RndMag\data\M4A1_45RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\M4A1\mag\45RndMag\data\M4A1_45RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\M4A1\mag\45RndMag\data\M4A1_45RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\45RndMag\data\M4A1_45RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\45RndMag\data\M4A1_45RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\45RndMag\data\M4A1_45RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\45RndMag\data\M4A1_45RndMag_destruct.rvmat"
                            }
                        }
                    };
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
    class My_DF_Weapons_Rifles_M4A1_60RndDrumMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_M4A1_60RndDrumMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_M4A1_60RndDrumMag1";
        model = "\My_DF_Weapons_Rifles\M4A1\mag\60RndDrumMag\M4A1_60RndDrumMag.p3d";
        weight = 500;
        weightPerQuantityUnit = 4;
        itemSize[] = { 2, 2 };
        count = 60;
        ammo = "Bullet_556x45";
        ammoItems[] = { "Ammo_556x45", "Ammo_556x45Tracer", "My_DF_Weapons_Ammo_556x45_FMJ", "My_DF_Weapons_Ammo_556x45_M855", "My_DF_Weapons_Ammo_556x45_M855A1", "My_DF_Weapons_Ammo_556x45_M995", "My_DF_Weapons_Ammo_556x45_RRLP" };
        tracersEvery = 0;
        attachments[] = {};
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\M4A1\mag\60RndDrumMag\data\M4A1_60RndDrumMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\M4A1\mag\60RndDrumMag\data\M4A1_60RndDrumMag.rvmat"
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
                                "My_DF_Weapons_Rifles\M4A1\mag\60RndDrumMag\data\M4A1_60RndDrumMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\60RndDrumMag\data\M4A1_60RndDrumMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\60RndDrumMag\data\M4A1_60RndDrumMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\60RndDrumMag\data\M4A1_60RndDrumMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\60RndDrumMag\data\M4A1_60RndDrumMag_destruct.rvmat"
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
    class My_DF_Weapons_Rifles_M4A1_60RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_M4A1_60RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_M4A1_60RndMag1";
        model = "\My_DF_Weapons_Rifles\M4A1\mag\60RndMag\M4A1_60RndMag.p3d";
        weight = 200;
        weightPerQuantityUnit = 4;
        itemSize[] = { 2, 3 };
        count = 60;
        ammo = "Bullet_556x45";
        ammoItems[] = { "Ammo_556x45", "Ammo_556x45Tracer", "My_DF_Weapons_Ammo_556x45_FMJ", "My_DF_Weapons_Ammo_556x45_M855", "My_DF_Weapons_Ammo_556x45_M855A1", "My_DF_Weapons_Ammo_556x45_M995", "My_DF_Weapons_Ammo_556x45_RRLP" };
        tracersEvery = 0;
        attachments[] = {};
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\M4A1\mag\60RndMag\data\M4A1_60RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\M4A1\mag\60RndMag\data\M4A1_60RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\M4A1\mag\60RndMag\data\M4A1_60RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\60RndMag\data\M4A1_60RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\60RndMag\data\M4A1_60RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\60RndMag\data\M4A1_60RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\M4A1\mag\60RndMag\data\M4A1_60RndMag_destruct.rvmat"
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
    class My_DF_Weapons_Rifles_M7_20RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_M7_20RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_M7_20RndMag1";
        model = "\My_DF_Weapons_Rifles\M7\mag\20RndMag\M7_20RndMag.p3d";
        weight = 100;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 2 };
        count = 20;
        ammo = "Bullet_DF_68x51_FMJ";
        ammoItems[] = { "My_DF_Weapons_Ammo_68x51_AP", "My_DF_Weapons_Ammo_68x51_FMJ", "My_DF_Weapons_Ammo_68x51_Hybird" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\M7\mag\20RndMag\data\M7_20RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\M7\mag\20RndMag\data\M7_20RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\M7\mag\20RndMag\data\M7_20RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\M7\mag\20RndMag\data\M7_20RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\M7\mag\20RndMag\data\M7_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\M7\mag\20RndMag\data\M7_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\M7\mag\20RndMag\data\M7_20RndMag_destruct.rvmat"
                            }
                        }
                    };
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
    class My_DF_Weapons_Rifles_M7_30RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_M7_30RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_M7_30RndMag1";
        model = "\My_DF_Weapons_Rifles\M7\mag\30RndMag\M7_30RndMag.p3d";
        weight = 200;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_DF_68x51_FMJ";
        ammoItems[] = { "My_DF_Weapons_Ammo_68x51_AP", "My_DF_Weapons_Ammo_68x51_FMJ", "My_DF_Weapons_Ammo_68x51_Hybird" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\M7\mag\30RndMag\data\M7_30RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\M7\mag\30RndMag\data\M7_30RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\M7\mag\30RndMag\data\M7_30RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\M7\mag\30RndMag\data\M7_30RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\M7\mag\30RndMag\data\M7_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\M7\mag\30RndMag\data\M7_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\M7\mag\30RndMag\data\M7_30RndMag_destruct.rvmat"
                            }
                        }
                    };
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
    class My_DF_Weapons_Rifles_M7_45RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_M7_45RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_M7_45RndMag1";
        model = "\My_DF_Weapons_Rifles\M7\mag\45RndMag\M7_45RndMag.p3d";
        weight = 300;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 4 };
        count = 45;
        ammo = "Bullet_DF_68x51_FMJ";
        ammoItems[] = { "My_DF_Weapons_Ammo_68x51_AP", "My_DF_Weapons_Ammo_68x51_FMJ", "My_DF_Weapons_Ammo_68x51_Hybird" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\M7\mag\45RndMag\data\M7_45RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\M7\mag\45RndMag\data\M7_45RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\M7\mag\45RndMag\data\M7_45RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\M7\mag\45RndMag\data\M7_45RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\M7\mag\45RndMag\data\M7_45RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\M7\mag\45RndMag\data\M7_45RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\M7\mag\45RndMag\data\M7_45RndMag_destruct.rvmat"
                            }
                        }
                    };
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
    class My_DF_Weapons_Rifles_PTR32_30RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_PTR32_30RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_PTR32_30RndMag1";
        model = "\My_DF_Weapons_Rifles\PTR32\Mag\30RndMag\PTR32_30RndMag.p3d";
        weight = 400;
        weightPerQuantityUnit = 4;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_762x39";
        ammoItems[] = { "Ammo_762x39", "Ammo_762x39Tracer", "My_DF_Weapons_Ammo_762x39_AP", "My_DF_Weapons_Ammo_762x39_BP", "My_DF_Weapons_Ammo_762x39_LP", "My_DF_Weapons_Ammo_762x39_PS", "My_DF_Weapons_Ammo_762x39_T45N" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\PTR32\mag\30RndMag\data\PTR32_30RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\PTR32\mag\30RndMag\data\PTR32_30RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\PTR32\mag\30RndMag\data\PTR32_30RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\PTR32\mag\30RndMag\data\PTR32_30RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\PTR32\mag\30RndMag\data\PTR32_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\PTR32\mag\30RndMag\data\PTR32_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\PTR32\mag\30RndMag\data\PTR32_30RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_QBZ191_30RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_QBZ191_30RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_QBZ191_30RndMag1";
        model = "\My_DF_Weapons_Rifles\QBZ191\Mag\30RndMag\QBZ191_30RndMag.p3d";
        weight = 300;
        weightPerQuantityUnit = 3;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_DF_58X42_DBP10";
        ammoItems[] = { "My_DF_Weapons_Ammo_58X42_DBP10", "My_DF_Weapons_Ammo_58X42_DBP87", "My_DF_Weapons_Ammo_58X42_DVC12", "My_DF_Weapons_Ammo_58X42_DVP88" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\QBZ191\Mag\30RndMag\data\QBZ191_30RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\QBZ191\Mag\30RndMag\data\QBZ191_30RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\QBZ191\Mag\30RndMag\data\QBZ191_30RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\QBZ191\Mag\30RndMag\data\QBZ191_30RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\QBZ191\Mag\30RndMag\data\QBZ191_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\QBZ191\Mag\30RndMag\data\QBZ191_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\QBZ191\Mag\30RndMag\data\QBZ191_30RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class AnimationSources
        {
            class quickdraw
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
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
    class My_DF_Weapons_Rifles_QBZ191_60RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_QBZ191_60RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_QBZ191_60RndMag1";
        model = "\My_DF_Weapons_Rifles\QBZ191\Mag\60RndMag\QBZ191_60RndMag.p3d";
        weight = 300;
        weightPerQuantityUnit = 3;
        itemSize[] = { 2, 2 };
        count = 60;
        ammo = "Bullet_DF_58X42_DBP10";
        ammoItems[] = { "My_DF_Weapons_Ammo_58X42_DBP10", "My_DF_Weapons_Ammo_58X42_DBP87", "My_DF_Weapons_Ammo_58X42_DVC12", "My_DF_Weapons_Ammo_58X42_DVP88" };
        tracersEvery = 0;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\QBZ191\Mag\60RndMag\data\QBZ191_60RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\QBZ191\Mag\60RndMag\data\QBZ191_60RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\QBZ191\Mag\60RndMag\data\QBZ191_60RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\QBZ191\Mag\60RndMag\data\QBZ191_60RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\QBZ191\Mag\60RndMag\data\QBZ191_60RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\QBZ191\Mag\60RndMag\data\QBZ191_60RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\QBZ191\Mag\60RndMag\data\QBZ191_60RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class AnimationSources
        {
            class quickdraw
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
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
    class My_DF_Weapons_Rifles_QBZ95_30RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_QBZ95_30RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_QBZ95_30RndMag1";
        model = "\My_DF_Weapons_Rifles\QBZ95\Mag\30RndMag\QBZ95_30RndMag.p3d";
        weight = 300;
        weightPerQuantityUnit = 3;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_DF_58X42_DBP10";
        ammoItems[] = { "My_DF_Weapons_Ammo_58X42_DBP10", "My_DF_Weapons_Ammo_58X42_DBP87", "My_DF_Weapons_Ammo_58X42_DVC12", "My_DF_Weapons_Ammo_58X42_DVP88" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\QBZ95\Mag\30RndMag\data\QBZ95_30RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\QBZ95\Mag\30RndMag\data\QBZ95_30RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\QBZ95\Mag\30RndMag\data\QBZ95_30RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\QBZ95\Mag\30RndMag\data\QBZ95_30RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\QBZ95\Mag\30RndMag\data\QBZ95_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\QBZ95\Mag\30RndMag\data\QBZ95_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\QBZ95\Mag\30RndMag\data\QBZ95_30RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class AnimationSources
        {
            class quickdraw
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
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
    class My_DF_Weapons_Rifles_SCARH_20RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_SCARH_20RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_SCARH_20RndMag1";
        model = "\My_DF_Weapons_Rifles\SCARH\Mag\20RndMag\SCARH_20RndMag.p3d";
        weight = 300;
        weightPerQuantityUnit = 5;
        itemSize[] = { 1, 2 };
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
            "My_DF_Weapons_Rifles\SCARH\Mag\20RndMag\data\SCARH_20RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\SCARH\Mag\20RndMag\data\SCARH_20RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\SCARH\Mag\20RndMag\data\SCARH_20RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\SCARH\Mag\20RndMag\data\SCARH_20RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\SCARH\Mag\20RndMag\data\SCARH_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\SCARH\Mag\20RndMag\data\SCARH_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\SCARH\Mag\20RndMag\data\SCARH_20RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_SCARH_30RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_SCARH_30RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_SCARH_30RndMag1";
        model = "\My_DF_Weapons_Rifles\SCARH\Mag\30RndMag\SCARH_30RndMag.p3d";
        weight = 400;
        weightPerQuantityUnit = 5;
        itemSize[] = { 1, 3 };
        count = 30;
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
            "My_DF_Weapons_Rifles\SCARH\Mag\30RndMag\data\SCARH_30RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\SCARH\Mag\30RndMag\data\SCARH_30RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\SCARH\Mag\30RndMag\data\SCARH_30RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\SCARH\Mag\30RndMag\data\SCARH_30RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\SCARH\Mag\30RndMag\data\SCARH_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\SCARH\Mag\30RndMag\data\SCARH_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\SCARH\Mag\30RndMag\data\SCARH_30RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_SCARH_50RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_SCARH_50RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_SCARH_50RndMag1";
        model = "\My_DF_Weapons_Rifles\SCARH\Mag\50RndMag\SCARH_50RndMag.p3d";
        weight = 400;
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
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\SCARH\Mag\50RndMag\data\SCARH_50RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\SCARH\Mag\50RndMag\data\SCARH_50RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\SCARH\Mag\50RndMag\data\SCARH_50RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\SCARH\Mag\50RndMag\data\SCARH_50RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\SCARH\Mag\50RndMag\data\SCARH_50RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\SCARH\Mag\50RndMag\data\SCARH_50RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\SCARH\Mag\50RndMag\data\SCARH_50RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_SG553_20RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_SG553_20RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_SG553_20RndMag1";
        model = "\My_DF_Weapons_Rifles\SG553\Mag\20RndMag\SG553_20RndMag.p3d";
        weight = 300;
        weightPerQuantityUnit = 3;
        itemSize[] = { 1, 2 };
        count = 20;
        ammo = "Bullet_556x45";
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
            "My_DF_Weapons_Rifles\SG553\Mag\20RndMag\data\SG553_20RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\SG553\Mag\20RndMag\data\SG553_20RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\SG553\Mag\20RndMag\data\SG553_20RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\SG553\Mag\20RndMag\data\SG553_20RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\SG553\Mag\20RndMag\data\SG553_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\SG553\Mag\20RndMag\data\SG553_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\SG553\Mag\20RndMag\data\SG553_20RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_SG553_30RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_SG553_30RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_SG553_30RndMag1";
        model = "\My_DF_Weapons_Rifles\SG553\Mag\30RndMag\SG553_30RndMag.p3d";
        weight = 400;
        weightPerQuantityUnit = 3;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_556x45";
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
            "My_DF_Weapons_Rifles\SG553\Mag\30RndMag\data\SG553_30RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\SG553\Mag\30RndMag\data\SG553_30RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\SG553\Mag\30RndMag\data\SG553_30RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\SG553\Mag\30RndMag\data\SG553_30RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\SG553\Mag\30RndMag\data\SG553_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\SG553\Mag\30RndMag\data\SG553_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\SG553\Mag\30RndMag\data\SG553_30RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Rifles_SG553_45RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Rifles_SG553_45RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Rifles_SG553_45RndMag1";
        model = "\My_DF_Weapons_Rifles\SG553\Mag\45RndMag\SG553_45RndMag.p3d";
        weight = 500;
        weightPerQuantityUnit = 3;
        itemSize[] = { 1, 4 };
        count = 45;
        ammo = "Bullet_556x45";
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
            "My_DF_Weapons_Rifles\SG553\Mag\45RndMag\data\SG553_45RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\SG553\Mag\45RndMag\data\SG553_45RndMag.rvmat"
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
                                "My_DF_Weapons_Rifles\SG553\Mag\45RndMag\data\SG553_45RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\SG553\Mag\45RndMag\data\SG553_45RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\SG553\Mag\45RndMag\data\SG553_45RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\SG553\Mag\45RndMag\data\SG553_45RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\SG553\Mag\45RndMag\data\SG553_45RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
};