class CfgPatches
{
	class My_DF_Weapons_SMG_config
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"My_DF_Weapons_SMG_Bison",
			"My_DF_Weapons_SMG_MP5",
			"My_DF_Weapons_SMG_MP7",
			"My_DF_Weapons_SMG_P90",
			"My_DF_Weapons_SMG_PP19",
			"My_DF_Weapons_SMG_QCQ171",
			"My_DF_Weapons_SMG_SMG45",
			"My_DF_Weapons_SMG_SR3M",
			"My_DF_Weapons_SMG_Uzi",
			"My_DF_Weapons_SMG_Vector",
			"My_DF_Weapons_SMG_MK4",
			"My_DF_Weapons_Magazine"
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
    class My_DF_Weapons_SMG_Bison_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_SMG\Bison\Bison.p3d";
        itemSize[] = { 6, 3 };
        weight = 3000;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 0.64;
        ObstructionDistance = 0.431;
        barrelArmor = 1.35;
        initSpeedMultiplier = 1.25;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "Ammo_380",
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
        };
        magazines[] = {
            "Mag_PP19_64Rnd",
            "My_DF_Weapons_SMG_Bison_32RndMag",
            "My_DF_Weapons_SMG_Bison_64RndMag"
        };
        attachments[] = {
            "DF_stock_pad",
            "DF_stock",
            "DF_handguard_Bison",
            "DF_ak_pisg",
            "DF_ak_handlecap",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_barrel_Bison",
            "DF_frog_left",
            "DF_frog_right",
            "DF_muzzle",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.3;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 0.8 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "bullet",
            "magazine",
            "barrel",
            "handguard",
            "pisg",
            "stock",
            "mount",
            "rail_l",
            "rail_r"
        };
        hiddenSelections[] = {
            "barrel",
            "handguard",
            "pisg",
            "rec",
            "stock"
        };
        class NoiseShoot
        {
            strength = 60;
            type = "shot";
        };
        modes[] = {
            "FullAuto",
            "SemiAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_SMG_Bison_Shot_SoundSet", "PP19_Shot_1st_iterior_SoundSet", "PP19_Tail_SoundSet", "PP19_InteriorTail_SoundSet", "PP19_Slapback_SoundSet", "PP19_Tail_2D_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_SMG_Bison_silencer_SoundSet", "PP19_silencerTail_SoundSet", "PP19_silencerInteriorTail_SoundSet" }, { "PP19_1st_silencerHomeMade_SoundSet", "PP19_silencerHomeMadeTail_SoundSet", "PP19_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.12;
            recoil = "recoil_cz61";
            recoilProne = "recoil_cz61_prone";
            dispersion = 0.003;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot1st[] = { "My_DF_Weapons_SMG_Bison_Shot_SoundSet", "PP19_Shot_1st_iterior_SoundSet" };
            soundSetShot[] = { "My_DF_Weapons_SMG_Bison_Shot_SoundSet", "PP19_Shot_iterior_SoundSet", "PP19_Tail_SoundSet", "PP19_InteriorTail_SoundSet", "PP19_Slapback_SoundSet", "PP19_Tail_2D_SoundSet" };
            soundSetShotExt1st[] = { { "My_DF_Weapons_SMG_Bison_silencer_SoundSet" }, { "PP19_1st_silencerHomeMade_SoundSet" } };
            soundSetShotExt[] = { { "My_DF_Weapons_SMG_Bison_silencer_SoundSet", "PP19_silencerTail_SoundSet", "PP19_silencerInteriorTail_SoundSet" }, { "PP19_silencerHomeMade_SoundSet", "PP19_silencerHomeMadeTail_SoundSet", "PP19_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.085;
            recoil = "recoil_cz61";
            recoilProne = "recoil_cz61_prone";
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
                position[] = {-0.06, -0.02, 0.03 };
                orientation[] = { 0, 15, 0 };
            };
            class Melee
            {
                position[] = {-0.06, -0.02, -0.05 };
                orientation[] = { 0, -15, 0 };
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
                    overrideParticle = "weapon_shot_fnx_01";
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
                maxOverheatingValue = 12;
                shotsToStartOverheating = 4;
                overheatingDecayInterval = 0.7;
                class SmokingBarrel1
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinOverheatLimits[] = { 0.1, 1 };
                    positionOffset[] = { 0, 0, 0 };
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
        weaponStateAnim = "dz\anims\anm\player\reloads\Bizon\w_bizon_states.anm";
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
    class My_DF_Weapons_SMG_Bison: My_DF_Weapons_SMG_Bison_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_Bison0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_Bison1";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_co.paa",
            "My_DF_Weapons_SMG\Bison\data\handguard\Bison_handguard_co.paa",
            "My_DF_Weapons_Attachments\pisg\AK100\data\AK100_co.paa",
            "My_DF_Weapons_SMG\Bison\data\Bison_co.paa",
            "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel.rvmat",
            "My_DF_Weapons_SMG\Bison\data\handguard\Bison_handguard.rvmat",
            "My_DF_Weapons_Attachments\pisg\AK100\data\AK100.rvmat",
            "My_DF_Weapons_SMG\Bison\data\Bison.rvmat",
            "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std.rvmat"
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
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel.rvmat",
                                "My_DF_Weapons_SMG\Bison\data\handguard\Bison_handguard.rvmat",
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AK100.rvmat",
                                "My_DF_Weapons_SMG\Bison\data\Bison.rvmat",
                                "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_worn.rvmat",
                                "My_DF_Weapons_SMG\Bison\data\handguard\Bison_handguard_worn.rvmat",
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AK100_worn.rvmat",
                                "My_DF_Weapons_SMG\Bison\data\Bison_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_damage.rvmat",
                                "My_DF_Weapons_SMG\Bison\data\handguard\Bison_handguard_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AK100_damage.rvmat",
                                "My_DF_Weapons_SMG\Bison\data\Bison_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_damage.rvmat",
                                "My_DF_Weapons_SMG\Bison\data\handguard\Bison_handguard_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AK100_damage.rvmat",
                                "My_DF_Weapons_SMG\Bison\data\Bison_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_destruct.rvmat",
                                "My_DF_Weapons_SMG\Bison\data\handguard\Bison_handguard_destruct.rvmat",
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AK100_destruct.rvmat",
                                "My_DF_Weapons_SMG\Bison\data\Bison_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_MP5_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_SMG\MP5\MP5.p3d";
        itemSize[] = { 5, 3 };
        weight = 1500;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 0.4;
        barrelArmor = 1.5;
        initSpeedMultiplier = 1;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
        };
        magazines[] = {
            "My_DF_Weapons_SMG_MP5_20RndMag",
            "My_DF_Weapons_SMG_MP5_30RndMag",
            "My_DF_Weapons_SMG_MP5_50RndMag"
        };
        attachments[] = {
            "DF_stock",
            "DF_handguard_MP5",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
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
            "barrel",
            "handguard",
            "stock",
            "1913adapter",
            "stockAdapter",
            "ACRadapter"
        };
        hiddenSelections[] = {
            "camo",
            "handguard",
            "sight",
            "stock"
        };
        class NoiseShoot
        {
            strength = 60;
            type = "shot";
        };
        modes[] = {
            "FullAuto",
            "Burst",
            "SemiAuto"
        };
        class Burst: Mode_Burst
        {
            soundSetShot[] = { "My_DF_Weapons_SMG_MP5_Shot_SoundSet", "MP5K_Tail_SoundSet", "MP5K_InteriorTail_SoundSet", "MP5K_Slapback_SoundSet", "MP5K_Tail_2D_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_SMG_MP5_silencer_SoundSet", "MP5K_silencerTail_SoundSet", "MP5K_silencerInteriorTail_SoundSet" }, { "My_DF_Weapons_SMG_MP5_silencer_SoundSet", "MP5K_silencerHomeMadeTail_SoundSet", "MP5K_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.12;
            recoil = "recoil_mp5";
            recoilProne = "recoil_mp5_prone";
            dispersion = 0.003;
            magazineSlot = "magazine";
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_SMG_MP5_Shot_SoundSet", "MP5K_Tail_SoundSet", "MP5K_InteriorTail_SoundSet", "MP5K_Slapback_SoundSet", "MP5K_Tail_2D_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_SMG_MP5_silencer_SoundSet", "MP5K_silencerTail_SoundSet", "MP5K_silencerInteriorTail_SoundSet" }, { "My_DF_Weapons_SMG_MP5_silencer_SoundSet", "MP5K_silencerHomeMadeTail_SoundSet", "MP5K_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.12;
            recoil = "recoil_mp5";
            recoilProne = "recoil_mp5_prone";
            dispersion = 0.003;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot1st[] = { "My_DF_Weapons_SMG_MP5_Shot_SoundSet" };
            soundSetShot[] = { "My_DF_Weapons_SMG_MP5_Shot_SoundSet", "MP5K_Tail_SoundSet", "MP5K_InteriorTail_SoundSet", "MP5K_Slapback_SoundSet", "MP5K_Tail_2D_SoundSet" };
            soundSetShotExt1st[] = { { "My_DF_Weapons_SMG_MP5_silencer_SoundSet" }, { "My_DF_Weapons_SMG_MP5_silencer_SoundSet" } };
            soundSetShotExt[] = { { "My_DF_Weapons_SMG_MP5_silencer_SoundSet", "MP5K_silencerTail_SoundSet", "MP5K_silencerInteriorTail_SoundSet" }, { "My_DF_Weapons_SMG_MP5_silencer_SoundSet", "MP5K_silencerHomeMadeTail_SoundSet", "MP5K_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.07;
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
                initPhase = 0;
            };
            class MP5_Muzzle
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
            class special_stock_proxy
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
        };
    };
    class My_DF_Weapons_SMG_MP5: My_DF_Weapons_SMG_MP5_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_MP50";
        descriptionShort = "$STR_My_DF_Weapons_SMG_MP51";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\MP5\data\MP5_co.paa",
            "My_DF_Weapons_SMG\MP5\data\handguard\MP5_handguard_co.paa",
            "My_DF_Weapons_SMG\MP5\data\sight\MP5_sight_co.paa",
            "My_DF_Weapons_SMG\MP5\data\stock\MP5_stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\MP5\data\MP5.rvmat",
            "My_DF_Weapons_SMG\MP5\data\handguard\MP5_handguard.rvmat",
            "My_DF_Weapons_SMG\MP5\data\sight\MP5_sight.rvmat",
            "My_DF_Weapons_SMG\MP5\data\stock\MP5_stock.rvmat"
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
                                "My_DF_Weapons_SMG\MP5\data\MP5.rvmat",
                                "My_DF_Weapons_SMG\MP5\data\handguard\MP5_handguard.rvmat",
                                "My_DF_Weapons_SMG\MP5\data\sight\MP5_sight.rvmat",
                                "My_DF_Weapons_SMG\MP5\data\stock\MP5_stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\MP5\data\MP5_worn.rvmat",
                                "My_DF_Weapons_SMG\MP5\data\handguard\MP5_handguard_worn.rvmat",
                                "My_DF_Weapons_SMG\MP5\data\sight\MP5_sight_worn.rvmat",
                                "My_DF_Weapons_SMG\MP5\data\stock\MP5_stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\MP5\data\MP5_damage.rvmat",
                                "My_DF_Weapons_SMG\MP5\data\handguard\MP5_handguard_damage.rvmat",
                                "My_DF_Weapons_SMG\MP5\data\sight\MP5_sight_damage.rvmat",
                                "My_DF_Weapons_SMG\MP5\data\stock\MP5_stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\MP5\data\MP5_damage.rvmat",
                                "My_DF_Weapons_SMG\MP5\data\handguard\MP5_handguard_damage.rvmat",
                                "My_DF_Weapons_SMG\MP5\data\sight\MP5_sight_damage.rvmat",
                                "My_DF_Weapons_SMG\MP5\data\stock\MP5_stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\MP5\data\MP5_destruct.rvmat",
                                "My_DF_Weapons_SMG\MP5\data\handguard\MP5_handguard_destruct.rvmat",
                                "My_DF_Weapons_SMG\MP5\data\sight\MP5_sight_destruct.rvmat",
                                "My_DF_Weapons_SMG\MP5\data\stock\MP5_stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_MP7_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_SMG\MP7\MP7.p3d";
        itemSize[] = { 5, 3 };
        weight = 2000;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 0.65;
        ObstructionDistance = 0.275;
        barrelArmor = 1.9;
        initSpeedMultiplier = 1.15;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = { "My_DF_Weapons_Ammo_46x30_AP_SX", "My_DF_Weapons_Ammo_46x30_FMJ_SX", "My_DF_Weapons_Ammo_46x30_Subsonic_SX" };
        magazines[] = {
            "My_DF_Weapons_SMG_MP7_20RndMag",
            "My_DF_Weapons_SMG_MP7_30RndMag",
            "My_DF_Weapons_SMG_MP7_40RndMag",
            "My_DF_Weapons_SMG_MP7_60RndMag"
        };
        attachments[] = {
            "DF_stock",
            "DF_pisg_MP7",
            "DF_handguard_MP7",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_barrel_MP7",
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_muzzle",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.45;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1.2, 1.2, 0.7 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "magazine",
            "bullet",
            "barrel",
            "pisg",
            "stock",
            "tail",
            "head",
            "rail_l",
            "rail_r",
            "rail_d",
            "frosight_up",
            "frosight_down",
            "sight_up",
            "sight_down"
        };
        hiddenSelections[] = {
            "barrel",
            "pisg",
            "sights",
            "stock",
            "rec"
        };
        class NoiseShoot
        {
            strength = 60;
            type = "shot";
        };
        modes[] = {
            "FullAuto",
            "SemiAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_SMG_MP7_Shot_SoundSet", "CZ61_Shot_1st_iterior_SoundSet", "CZ61_Tail_SoundSet", "CZ61_InteriorTail_SoundSet", "CZ61_Slapback_SoundSet", "CZ61_Tail_2D_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_SMG_MP7_silencer_SoundSet", "CZ61_silencerTail_SoundSet", "CZ61_silencerInteriorTail_SoundSet" }, { "CZ61_1st_silencerHomeMade_SoundSet", "CZ61_silencerHomeMadeTail_SoundSet", "CZ61_silencerHomeMadeInteriorTail_SoundSet" } };
            reloadTime = 0.12;
            recoil = "recoil_cz61";
            recoilProne = "recoil_cz61_prone";
            dispersion = 0.0045;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot1st[] = { "My_DF_Weapons_SMG_MP7_Shot_SoundSet", "CZ61_Shot_1st_iterior_SoundSet" };
            soundSetShot[] = { "My_DF_Weapons_SMG_MP7_Shot_SoundSet", "CZ61_Shot_iterior_SoundSet", "CZ61_Tail_SoundSet", "CZ61_InteriorTail_SoundSet", "CZ61_Slapback_SoundSet", "CZ61_Tail_2D_SoundSet" };
            soundSetShotExt1st[] = { { "My_DF_Weapons_SMG_MP7_silencer_SoundSet" }, { "CZ61_1st_silencerHomeMade_SoundSet" } };
            soundSetShotExt[] = { { "My_DF_Weapons_SMG_MP7_silencer_SoundSet", "CZ61_silencerTail_SoundSet", "CZ61_silencerInteriorTail_SoundSet" }, { "CZ61_silencerHomeMade_SoundSet", "CZ61_silencerHomeMadeTail_SoundSet", "CZ61_silencerHomeMadeInteriorTail_SoundSet" } };
            reloadTime = 0.06;
            recoil = "recoil_cz61";
            recoilProne = "recoil_cz61_prone";
            dispersion = 0.0045;
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
                position[] = {-0.15, -0.02, 0 };
                orientation[] = { 0, 0, -13 };
            };
            class Melee
            {
                position[] = {-0.15, 0, -0.02 };
                orientation[] = { 0, 0, -13 };
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
                    overrideParticle = "weapon_shot_fnx_01";
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
                    positionOffset[] = { 0, 0, 0 };
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
        weaponStateAnim = "dz\anims\anm\player\reloads\CZ61\w_CZ61_states.anm";
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
    class My_DF_Weapons_SMG_MP7: My_DF_Weapons_SMG_MP7_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_MP70";
        descriptionShort = "$STR_My_DF_Weapons_SMG_MP71";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\MP7_barrel\data\MP7_barrel_co.paa",
            "My_DF_Weapons_SMG\MP7\data\pisg\MP7_pisg_co.paa",
            "My_DF_Weapons_SMG\MP7\data\sight\MP7_sight_co.paa",
            "My_DF_Weapons_SMG\MP7\data\stock\MP7_stock_co.paa",
            "My_DF_Weapons_SMG\MP7\data\MP7_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\MP7_barrel\data\MP7_barrel.rvmat",
            "My_DF_Weapons_SMG\MP7\data\pisg\MP7_pisg.rvmat",
            "My_DF_Weapons_SMG\MP7\data\sight\MP7_sight.rvmat",
            "My_DF_Weapons_SMG\MP7\data\stock\MP7_stock.rvmat",
            "My_DF_Weapons_SMG\MP7\data\MP7.rvmat"
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
                                "My_DF_Weapons_Attachments\barrel\MP7_barrel\data\MP7_barrel.rvmat",
                                "My_DF_Weapons_SMG\MP7\data\pisg\MP7_pisg.rvmat",
                                "My_DF_Weapons_SMG\MP7\data\sight\MP7_sight.rvmat",
                                "My_DF_Weapons_SMG\MP7\data\stock\MP7_stock.rvmat",
                                "My_DF_Weapons_SMG\MP7\data\MP7.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\MP7_barrel\data\MP7_barrel_worn.rvmat",
                                "My_DF_Weapons_SMG\MP7\data\pisg\MP7_pisg_worn.rvmat",
                                "My_DF_Weapons_SMG\MP7\data\sight\MP7_sight_worn.rvmat",
                                "My_DF_Weapons_SMG\MP7\data\stock\MP7_stock_worn.rvmat",
                                "My_DF_Weapons_SMG\MP7\data\MP7_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\MP7_barrel\data\MP7_barrel_damage.rvmat",
                                "My_DF_Weapons_SMG\MP7\data\pisg\MP7_pisg_damage.rvmat",
                                "My_DF_Weapons_SMG\MP7\data\sight\MP7_sight_damage.rvmat",
                                "My_DF_Weapons_SMG\MP7\data\stock\MP7_stock_damage.rvmat",
                                "My_DF_Weapons_SMG\MP7\data\MP7_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\MP7_barrel\data\MP7_barrel_damage.rvmat",
                                "My_DF_Weapons_SMG\MP7\data\pisg\MP7_pisg_damage.rvmat",
                                "My_DF_Weapons_SMG\MP7\data\sight\MP7_sight_damage.rvmat",
                                "My_DF_Weapons_SMG\MP7\data\stock\MP7_stock_damage.rvmat",
                                "My_DF_Weapons_SMG\MP7\data\MP7_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\MP7_barrel\data\MP7_barrel_destruct.rvmat",
                                "My_DF_Weapons_SMG\MP7\data\pisg\MP7_pisg_destruct.rvmat",
                                "My_DF_Weapons_SMG\MP7\data\sight\MP7_sight_destruct.rvmat",
                                "My_DF_Weapons_SMG\MP7\data\stock\MP7_stock_destruct.rvmat",
                                "My_DF_Weapons_SMG\MP7\data\MP7_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_P90_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_SMG\P90\P90.p3d";
        itemSize[] = { 5, 3 };
        weight = 1500;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 0.55;
        ObstructionDistance = 0.275;
        barrelArmor = 1.9;
        initSpeedMultiplier = 1.15;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = { "My_DF_Weapons_Ammo_57x28_L191", "My_DF_Weapons_Ammo_57x28_R37F", "My_DF_Weapons_Ammo_57x28_SS190", "My_DF_Weapons_Ammo_57x28_SS193", "My_DF_Weapons_Ammo_57x28_SS197SR", "My_DF_Weapons_Ammo_57x28_SS198LF" };
        magazines[] = {
            "My_DF_Weapons_SMG_P90_50RndMag"
        };
        attachments[] = {
            "DF_stock_pad_P90",
            "DF_cheekpad",
            "DF_handguard_P90",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_barrel_P90",
            "DF_frog_down",
            "DF_muzzle",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.3;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1.2, 1.2, 0.7 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "barrel",
            "frosight",
            "handguard",
            "sight",
            "stock",
            "Universal_Cheekpad"
        };
        hiddenSelections[] = {
            "barrel",
            "frosight",
            "handguard",
            "sight",
            "stock",
            "rec"
        };
        class NoiseShoot
        {
            strength = 60;
            type = "shot";
        };
        modes[] = {
            "FullAuto",
            "SemiAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_SMG_P90_Shot_SoundSet", "CZ61_Shot_1st_iterior_SoundSet", "CZ61_Tail_SoundSet", "CZ61_InteriorTail_SoundSet", "CZ61_Slapback_SoundSet", "CZ61_Tail_2D_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_SMG_P90_silencer_SoundSet", "CZ61_silencerTail_SoundSet", "CZ61_silencerInteriorTail_SoundSet" }, { "CZ61_1st_silencerHomeMade_SoundSet", "CZ61_silencerHomeMadeTail_SoundSet", "CZ61_silencerHomeMadeInteriorTail_SoundSet" } };
            reloadTime = 0.12;
            recoil = "recoil_cz61";
            recoilProne = "recoil_cz61_prone";
            dispersion = 0.0045;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot1st[] = { "My_DF_Weapons_SMG_P90_Shot_SoundSet", "CZ61_Shot_1st_iterior_SoundSet" };
            soundSetShot[] = { "My_DF_Weapons_SMG_P90_Shot_SoundSet", "CZ61_Shot_iterior_SoundSet", "CZ61_Tail_SoundSet", "CZ61_InteriorTail_SoundSet", "CZ61_Slapback_SoundSet", "CZ61_Tail_2D_SoundSet" };
            soundSetShotExt1st[] = { { "My_DF_Weapons_SMG_P90_silencer_SoundSet" }, { "CZ61_1st_silencerHomeMade_SoundSet" } };
            soundSetShotExt[] = { { "My_DF_Weapons_SMG_P90_silencer_SoundSet", "CZ61_silencerTail_SoundSet", "CZ61_silencerInteriorTail_SoundSet" }, { "CZ61_silencerHomeMade_SoundSet", "CZ61_silencerHomeMadeTail_SoundSet", "CZ61_silencerHomeMadeInteriorTail_SoundSet" } };
            reloadTime = 0.06;
            recoil = "recoil_cz61";
            recoilProne = "recoil_cz61_prone";
            dispersion = 0.0045;
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
                position[] = {-0.15, -0.02, 0 };
                orientation[] = { 0, 0, -13 };
            };
            class Melee
            {
                position[] = {-0.15, 0, -0.02 };
                orientation[] = { 0, 0, -13 };
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
                    overrideParticle = "weapon_shot_fnx_01";
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
                    positionOffset[] = { 0, 0, 0 };
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
        weaponStateAnim = "dz\anims\anm\player\reloads\CZ61\w_CZ61_states.anm";
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
    class My_DF_Weapons_SMG_P90: My_DF_Weapons_SMG_P90_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_P900";
        descriptionShort = "$STR_My_DF_Weapons_SMG_P901";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\P90\data\barrel\P90_barrel_co.paa",
            "My_DF_Weapons_SMG\P90\data\frosight\P90_frosight_co.paa",
            "My_DF_Weapons_SMG\P90\data\handguard\P90_handguard_co.paa",
            "My_DF_Weapons_SMG\P90\data\sight\P90_sight_co.paa",
            "My_DF_Weapons_SMG\P90\data\stock\P90_stock_co.paa",
            "My_DF_Weapons_SMG\P90\data\P90_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\P90\data\barrel\P90_barrel.rvmat",
            "My_DF_Weapons_SMG\P90\data\frosight\P90_frosight.rvmat",
            "My_DF_Weapons_SMG\P90\data\handguard\P90_handguard.rvmat",
            "My_DF_Weapons_SMG\P90\data\sight\P90_sight.rvmat",
            "My_DF_Weapons_SMG\P90\data\stock\P90_stock.rvmat",
            "My_DF_Weapons_SMG\P90\data\P90.rvmat"
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
                                "My_DF_Weapons_SMG\P90\data\barrel\P90_barrel.rvmat",
                                "My_DF_Weapons_SMG\P90\data\frosight\P90_frosight.rvmat",
                                "My_DF_Weapons_SMG\P90\data\handguard\P90_handguard.rvmat",
                                "My_DF_Weapons_SMG\P90\data\sight\P90_sight.rvmat",
                                "My_DF_Weapons_SMG\P90\data\stock\P90_stock.rvmat",
                                "My_DF_Weapons_SMG\P90\data\P90.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\P90\data\barrel\P90_barrel_worn.rvmat",
                                "My_DF_Weapons_SMG\P90\data\frosight\P90_frosight_worn.rvmat",
                                "My_DF_Weapons_SMG\P90\data\handguard\P90_handguard_worn.rvmat",
                                "My_DF_Weapons_SMG\P90\data\sight\P90_sight_worn.rvmat",
                                "My_DF_Weapons_SMG\P90\data\stock\P90_stock_worn.rvmat",
                                "My_DF_Weapons_SMG\P90\data\P90_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\P90\data\barrel\P90_barrel_damage.rvmat",
                                "My_DF_Weapons_SMG\P90\data\frosight\P90_frosight_damage.rvmat",
                                "My_DF_Weapons_SMG\P90\data\handguard\P90_handguard_damage.rvmat",
                                "My_DF_Weapons_SMG\P90\data\sight\P90_sight_damage.rvmat",
                                "My_DF_Weapons_SMG\P90\data\stock\P90_stock_damage.rvmat",
                                "My_DF_Weapons_SMG\P90\data\P90_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\P90\data\barrel\P90_barrel_damage.rvmat",
                                "My_DF_Weapons_SMG\P90\data\frosight\P90_frosight_damage.rvmat",
                                "My_DF_Weapons_SMG\P90\data\handguard\P90_handguard_damage.rvmat",
                                "My_DF_Weapons_SMG\P90\data\sight\P90_sight_damage.rvmat",
                                "My_DF_Weapons_SMG\P90\data\stock\P90_stock_damage.rvmat",
                                "My_DF_Weapons_SMG\P90\data\P90_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\P90\data\barrel\P90_barrel_destruct.rvmat",
                                "My_DF_Weapons_SMG\P90\data\frosight\P90_frosight_destruct.rvmat",
                                "My_DF_Weapons_SMG\P90\data\handguard\P90_handguard_destruct.rvmat",
                                "My_DF_Weapons_SMG\P90\data\sight\P90_sight_destruct.rvmat",
                                "My_DF_Weapons_SMG\P90\data\stock\P90_stock_destruct.rvmat",
                                "My_DF_Weapons_SMG\P90\data\P90_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_PP19_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_SMG\PP19\DF_PP19.p3d";
        itemSize[] = { 6, 3 };
        weight = 3000;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 0.64;
        ObstructionDistance = 0.431;
        barrelArmor = 1.35;
        initSpeedMultiplier = 1.25;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
        };
        magazines[] = {
            "My_DF_Weapons_SMG_PP19_30RndMag",
            "My_DF_Weapons_SMG_PP19_45RndMag"
        };
        attachments[] = {
            "DF_stock_pad",
            "DF_stock",
            "DF_ak_pisg",
            "DF_ak_handlecap",
            "DF_handguard_PP19",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_barrel_PP19",
            "DF_frog_down",
            "DF_frog_right",
            "DF_muzzle",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.3;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 0.8 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "bullet",
            "magazine",
            "barrel",
            "handguard",
            "pisg",
            "stock"
        };
        hiddenSelections[] = {
            "barrel",
            "handguard",
            "pisg",
            "rec",
            "stock"
        };
        class NoiseShoot
        {
            strength = 60;
            type = "shot";
        };
        modes[] = {
            "FullAuto",
            "SemiAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_SMG_Bison_Shot_SoundSet", "PP19_Shot_1st_iterior_SoundSet", "PP19_Tail_SoundSet", "PP19_InteriorTail_SoundSet", "PP19_Slapback_SoundSet", "PP19_Tail_2D_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_SMG_Bison_silencer_SoundSet", "PP19_silencerTail_SoundSet", "PP19_silencerInteriorTail_SoundSet" }, { "PP19_1st_silencerHomeMade_SoundSet", "PP19_silencerHomeMadeTail_SoundSet", "PP19_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.12;
            recoil = "recoil_cz61";
            recoilProne = "recoil_cz61_prone";
            dispersion = 0.003;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot1st[] = { "My_DF_Weapons_SMG_Bison_Shot_SoundSet", "PP19_Shot_1st_iterior_SoundSet" };
            soundSetShot[] = { "My_DF_Weapons_SMG_Bison_Shot_SoundSet", "PP19_Shot_iterior_SoundSet", "PP19_Tail_SoundSet", "PP19_InteriorTail_SoundSet", "PP19_Slapback_SoundSet", "PP19_Tail_2D_SoundSet" };
            soundSetShotExt1st[] = { { "My_DF_Weapons_SMG_Bison_silencer_SoundSet" }, { "PP19_1st_silencerHomeMade_SoundSet" } };
            soundSetShotExt[] = { { "My_DF_Weapons_SMG_Bison_silencer_SoundSet", "PP19_silencerTail_SoundSet", "PP19_silencerInteriorTail_SoundSet" }, { "PP19_silencerHomeMade_SoundSet", "PP19_silencerHomeMadeTail_SoundSet", "PP19_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.075;
            recoil = "recoil_cz61";
            recoilProne = "recoil_cz61_prone";
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
                position[] = {-0.06, -0.02, 0.03 };
                orientation[] = { 0, 15, 0 };
            };
            class Melee
            {
                position[] = {-0.06, -0.02, -0.05 };
                orientation[] = { 0, -15, 0 };
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
                    overrideParticle = "weapon_shot_fnx_01";
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
                maxOverheatingValue = 12;
                shotsToStartOverheating = 4;
                overheatingDecayInterval = 0.7;
                class SmokingBarrel1
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinOverheatLimits[] = { 0.1, 1 };
                    positionOffset[] = { 0, 0, 0 };
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
        weaponStateAnim = "dz\anims\anm\player\reloads\Bizon\w_bizon_states.anm";
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
            class barrel
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
    class My_DF_Weapons_SMG_PP19: My_DF_Weapons_SMG_PP19_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_PP190";
        descriptionShort = "$STR_My_DF_Weapons_SMG_PP191";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\AK100polymer\data\AK100polymer_co.paa",
            "My_DF_Weapons_Attachments\pisg\AK100\data\AK100_co.paa",
            "My_DF_Weapons_SMG\Bison\data\Bison_co.paa",
            "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\AK100polymer\data\AK100polymer.rvmat",
            "My_DF_Weapons_Attachments\pisg\AK100\data\AK100.rvmat",
            "My_DF_Weapons_SMG\Bison\data\Bison.rvmat",
            "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std.rvmat"
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
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK100polymer\data\AK100polymer.rvmat",
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AK100.rvmat",
                                "My_DF_Weapons_SMG\Bison\data\Bison.rvmat",
                                "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK100polymer\data\AK100polymer_worn.rvmat",
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AK100_worn.rvmat",
                                "My_DF_Weapons_SMG\Bison\data\Bison_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK100polymer\data\AK100polymer_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AK100_damage.rvmat",
                                "My_DF_Weapons_SMG\Bison\data\Bison_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK100polymer\data\AK100polymer_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AK100_damage.rvmat",
                                "My_DF_Weapons_SMG\Bison\data\Bison_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK100polymer\data\AK100polymer_destruct.rvmat",
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AK100_destruct.rvmat",
                                "My_DF_Weapons_SMG\Bison\data\Bison_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_QCQ171_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_SMG\QCQ171\QCQ171.p3d";
        itemSize[] = { 6, 3 };
        weight = 2200;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 0.55;
        ObstructionDistance = 0.464;
        barrelArmor = 1.0;
        initSpeedMultiplier = 1.0;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
        };
        magazines[] = {
            "My_DF_Weapons_SMG_QCQ171_30RndMag",
            "My_DF_Weapons_SMG_QCQ171_45RndMag",
            "My_DF_Weapons_SMG_QCQ171_100RndMag"
        };
        attachments[] = {
            "DF_stock",
            "DF_PLA_pisg",
            "DF_Bolt_QCQ171",
            "DF_handguard_QCQ171",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_muzzle",
            "DF_Pendant",
            "DF_muzzle_Hide"
        };
        magazineSwitchTime = 0.45;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1.2, 1.2, 0.7 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "bullet",
            "magazine",
            "hide_barrel",
            "barrel",
            "bolt",
            "frosight",
            "handguard",
            "pisg",
            "sight",
            "stock"
        };
        hiddenSelections[] = {
            "barrel",
            "bolt",
            "frosight",
            "handguard",
            "pisg",
            "sight",
            "stock",
            "rec"
        };
        class NoiseShoot
        {
            strength = 60;
            type = "shot";
        };
        modes[] = {
            "FullAuto",
            "SemiAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_SMG_QCQ171_Shot_SoundSet", "UMP45_Shot_1st_iterior_SoundSet", "UMP45_Tail_SoundSet", "UMP45_InteriorTail_SoundSet", "UMP45_Slapback_SoundSet", "UMP45_Tail_2D_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_SMG_QCQ171_silencer_SoundSet", "UMP45_silencerTail_SoundSet", "UMP45_silencerInteriorTail_SoundSet" }, { "UMP45_1st_silencerHomeMade_SoundSet", "UMP45_silencerHomeMadeTail_SoundSet", "UMP45_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.12;
            recoil = "recoil_auto_primary_7outof10";
            recoilProne = "recoil_auto_primary_prone_7outof10";
            dispersion = 0.003;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot1st[] = { "My_DF_Weapons_SMG_QCQ171_Shot_SoundSet", "UMP45_Shot_1st_iterior_SoundSet" };
            soundSetShot[] = { "My_DF_Weapons_SMG_QCQ171_Shot_SoundSet", "UMP45_Shot_iterior_SoundSet", "UMP45_Tail_SoundSet", "UMP45_InteriorTail_SoundSet", "UMP45_Slapback_SoundSet", "UMP45_Tail_2D_SoundSet" };
            soundSetShotExt1st[] = { { "My_DF_Weapons_SMG_QCQ171_silencer_SoundSet" }, { "UMP45_1st_silencerHomeMade_SoundSet" } };
            soundSetShotExt[] = { { "My_DF_Weapons_SMG_QCQ171_silencer_SoundSet", "UMP45_silencerTail_SoundSet", "UMP45_silencerInteriorTail_SoundSet" }, { "UMP45_silencerHomeMade_SoundSet", "UMP45_silencerHomeMadeTail_SoundSet", "UMP45_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.08;
            recoil = "recoil_auto_primary_7outof10";
            recoilProne = "recoil_auto_primary_prone_7outof10";
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
                position[] = {-0.1, 0.01, -0.05 };
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
                    onlyWithinOverheatLimits[] = { 0.1, 0.6 };
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
        weaponStateAnim = "dz\anims\anm\player\reloads\UMP45\w_UMP45_states.anm";
        class AnimationSources
        {
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0.115;
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
    class My_DF_Weapons_SMG_QCQ171: My_DF_Weapons_SMG_QCQ171_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_QCQ1710";
        descriptionShort = "$STR_My_DF_Weapons_SMG_QCQ1711";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\QCQ171\data\barrel\QCQ171_barrel_co.paa",
            "My_DF_Weapons_SMG\QCQ171\data\bolt\QCQ171_bolt_co.paa",
            "My_DF_Weapons_SMG\QCQ171\data\frosight\QCQ171_frosight_co.paa",
            "My_DF_Weapons_SMG\QCQ171\data\handguard\QCQ171_handguard_co.paa",
            "My_DF_Weapons_SMG\QCQ171\data\pisg\QCQ171_pisg_co.paa",
            "My_DF_Weapons_SMG\QCQ171\data\sight\QCQ171_sight_co.paa",
            "My_DF_Weapons_SMG\QCQ171\data\stock\QCQ171_stock_co.paa",
            "My_DF_Weapons_SMG\QCQ171\data\QCQ171_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\QCQ171\data\barrel\QCQ171_barrel.rvmat",
            "My_DF_Weapons_SMG\QCQ171\data\bolt\QCQ171_bolt.rvmat",
            "My_DF_Weapons_SMG\QCQ171\data\frosight\QCQ171_frosight.rvmat",
            "My_DF_Weapons_SMG\QCQ171\data\handguard\QCQ171_handguard.rvmat",
            "My_DF_Weapons_SMG\QCQ171\data\pisg\QCQ171_pisg.rvmat",
            "My_DF_Weapons_SMG\QCQ171\data\sight\QCQ171_sight.rvmat",
            "My_DF_Weapons_SMG\QCQ171\data\stock\QCQ171_stock.rvmat",
            "My_DF_Weapons_SMG\QCQ171\data\QCQ171.rvmat"
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
                                "My_DF_Weapons_SMG\QCQ171\data\barrel\QCQ171_barrel.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\bolt\QCQ171_bolt.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\frosight\QCQ171_frosight.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\handguard\QCQ171_handguard.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\pisg\QCQ171_pisg.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\sight\QCQ171_sight.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\stock\QCQ171_stock.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\QCQ171.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\QCQ171\data\barrel\QCQ171_barrel_worn.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\bolt\QCQ171_bolt_worn.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\frosight\QCQ171_frosight_worn.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\handguard\QCQ171_handguard_worn.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\pisg\QCQ171_pisg_worn.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\sight\QCQ171_sight_worn.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\stock\QCQ171_stock_worn.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\QCQ171_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\QCQ171\data\barrel\QCQ171_barrel_damage.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\bolt\QCQ171_bolt_damage.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\frosight\QCQ171_frosight_damage.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\handguard\QCQ171_handguard_damage.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\pisg\QCQ171_pisg_damage.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\sight\QCQ171_sight_damage.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\stock\QCQ171_stock_damage.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\QCQ171_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\QCQ171\data\barrel\QCQ171_barrel_damage.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\bolt\QCQ171_bolt_damage.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\frosight\QCQ171_frosight_damage.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\handguard\QCQ171_handguard_damage.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\pisg\QCQ171_pisg_damage.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\sight\QCQ171_sight_damage.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\stock\QCQ171_stock_damage.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\QCQ171_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\QCQ171\data\barrel\QCQ171_barrel_destruct.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\bolt\QCQ171_bolt_destruct.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\frosight\QCQ171_frosight_destruct.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\handguard\QCQ171_handguard_destruct.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\pisg\QCQ171_pisg_destruct.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\sight\QCQ171_sight_destruct.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\stock\QCQ171_stock_destruct.rvmat",
                                "My_DF_Weapons_SMG\QCQ171\data\QCQ171_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_SMG45_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_SMG\SMG45\SMG45.p3d";
        itemSize[] = { 6, 3 };
        weight = 2700;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 0.65;
        ObstructionDistance = 0.464;
        barrelArmor = 0.9;
        initSpeedMultiplier = 1.05;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = { "Ammo_45ACP", "My_DF_Weapons_Ammo_45ACP_AP", "My_DF_Weapons_Ammo_45ACP_FMJ", "My_DF_Weapons_Ammo_45ACP_HS", "My_DF_Weapons_Ammo_45ACP_JHP", "My_DF_Weapons_Ammo_45ACP_RIP" };
        magazines[] = {
            "My_DF_Weapons_SMG_SMG45_25RndMag",
            "My_DF_Weapons_SMG_SMG45_40RndMag"
        };
        attachments[] = {
            "DF_stock",
            "DF_ar_pisg",
            "DF_handguard_SMG45",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_barrel_SMG45",
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_muzzle",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.45;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1.2, 1.2, 0.7 };
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
            "rail_l",
            "rail_r",
            "rail_d",
            "frosight_up",
            "frosight_down",
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
            "rec"
        };
        class NoiseShoot
        {
            strength = 60;
            type = "shot";
        };
        modes[] = {
            "FullAuto",
            "SemiAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_SMG_SMG45_Shot_SoundSet", "UMP45_Shot_1st_iterior_SoundSet", "UMP45_Tail_SoundSet", "UMP45_InteriorTail_SoundSet", "UMP45_Slapback_SoundSet", "UMP45_Tail_2D_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_SMG_SMG45_silencer_SoundSet", "UMP45_silencerTail_SoundSet", "UMP45_silencerInteriorTail_SoundSet" }, { "UMP45_1st_silencerHomeMade_SoundSet", "UMP45_silencerHomeMadeTail_SoundSet", "UMP45_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.12;
            recoil = "recoil_auto_primary_7outof10";
            recoilProne = "recoil_auto_primary_prone_7outof10";
            dispersion = 0.003;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot1st[] = { "My_DF_Weapons_SMG_SMG45_Shot_SoundSet", "UMP45_Shot_1st_iterior_SoundSet" };
            soundSetShot[] = { "My_DF_Weapons_SMG_SMG45_Shot_SoundSet", "UMP45_Shot_iterior_SoundSet", "UMP45_Tail_SoundSet", "UMP45_InteriorTail_SoundSet", "UMP45_Slapback_SoundSet", "UMP45_Tail_2D_SoundSet" };
            soundSetShotExt1st[] = { { "My_DF_Weapons_SMG_SMG45_silencer_SoundSet" }, { "UMP45_1st_silencerHomeMade_SoundSet" } };
            soundSetShotExt[] = { { "My_DF_Weapons_SMG_SMG45_silencer_SoundSet", "UMP45_silencerTail_SoundSet", "UMP45_silencerInteriorTail_SoundSet" }, { "UMP45_silencerHomeMade_SoundSet", "UMP45_silencerHomeMadeTail_SoundSet", "UMP45_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.098;
            recoil = "recoil_auto_primary_7outof10";
            recoilProne = "recoil_auto_primary_prone_7outof10";
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
                position[] = {-0.1, 0.01, -0.05 };
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
                    onlyWithinOverheatLimits[] = { 0.1, 0.6 };
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
        weaponStateAnim = "dz\anims\anm\player\reloads\UMP45\w_UMP45_states.anm";
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
    class My_DF_Weapons_SMG_SMG45: My_DF_Weapons_SMG_SMG45_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_SMG450";
        descriptionShort = "$STR_My_DF_Weapons_SMG_SMG451";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_co.paa",
            "My_DF_Weapons_SMG\SMG45\data\frosight\SMG45_frosight_co.paa",
            "My_DF_Weapons_SMG\SMG45\data\handguard\SMG45_handguard_co.paa",
            "My_DF_Weapons_SMG\SMG45\data\pisg\SMG45_pisg_co.paa",
            "My_DF_Weapons_SMG\SMG45\data\sight\SMG45_sight_co.paa",
            "My_DF_Weapons_SMG\SMG45\data\stock\SMG45_stock_co.paa",
            "My_DF_Weapons_SMG\SMG45\data\SMG45_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel.rvmat",
            "My_DF_Weapons_SMG\SMG45\data\frosight\SMG45_frosight.rvmat",
            "My_DF_Weapons_SMG\SMG45\data\handguard\SMG45_handguard.rvmat",
            "My_DF_Weapons_SMG\SMG45\data\pisg\SMG45_pisg.rvmat",
            "My_DF_Weapons_SMG\SMG45\data\sight\SMG45_sight.rvmat",
            "My_DF_Weapons_SMG\SMG45\data\stock\SMG45_stock.rvmat",
            "My_DF_Weapons_SMG\SMG45\data\SMG45.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 250;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\frosight\SMG45_frosight.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\handguard\SMG45_handguard.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\pisg\SMG45_pisg.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\sight\SMG45_sight.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\stock\SMG45_stock.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\SMG45.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_worn.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\frosight\SMG45_frosight_worn.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\handguard\SMG45_handguard_worn.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\pisg\SMG45_pisg_worn.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\sight\SMG45_sight_worn.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\stock\SMG45_stock_worn.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\SMG45_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_damage.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\frosight\SMG45_frosight_damage.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\handguard\SMG45_handguard_damage.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\pisg\SMG45_pisg_damage.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\sight\SMG45_sight_damage.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\stock\SMG45_stock_damage.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\SMG45_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_damage.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\frosight\SMG45_frosight_damage.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\handguard\SMG45_handguard_damage.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\pisg\SMG45_pisg_damage.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\sight\SMG45_sight_damage.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\stock\SMG45_stock_damage.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\SMG45_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_destruct.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\frosight\SMG45_frosight_destruct.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\handguard\SMG45_handguard_destruct.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\pisg\SMG45_pisg_destruct.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\sight\SMG45_sight_destruct.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\stock\SMG45_stock_destruct.rvmat",
                                "My_DF_Weapons_SMG\SMG45\data\SMG45_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_SR3M_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_SMG\SR3M\SR3M.p3d";
        itemSize[] = { 6, 3 };
        weight = 2200;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 0.87;
        ObstructionDistance = 0.42;
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
            "DF_stock",
            "DF_ak_pisg",
            "DF_ak_handlecap",
            "DF_handguard_SR3M",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_mount_SR3M",
            "DF_frog_left",
            "DF_frog_right",
            "DF_muzzle",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.38;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2.2, 2.2, 0.85 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "bullet",
            "magazine",
            "hide_barrel",
            "handguard",
            "pisg",
            "stock"
        };
        hiddenSelections[] = {
            "handguard",
            "pisg",
            "stock",
            "rec"
        };
        class NoiseShoot
        {
            strength = 60;
            type = "shot";
        };
        modes[] = {
            "FullAuto",
            "SemiAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "Vikhr_Shot_SoundSet", "Vikhr_Tail_SoundSet", "Vikhr_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "Vikhr_silencer_SoundSet", "Vikhr_silencerTail_SoundSet", "Vikhr_silencerInteriorTail_SoundSet" }, { "Vikhr_silencerHomeMade_SoundSet", "Vikhr_silencerHomeMadeTail_SoundSet", "Vikhr_silencerInteriorHomeMadeTail_SoundSet" } };
            envShootingDecrease = 0.05;
            reloadTime = 0.12;
            recoil = "recoil_VSS";
            recoilProne = "recoil_VSS_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = { "Vikhr_Shot_SoundSet", "Vikhr_Tail_SoundSet", "Vikhr_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "Vikhr_silencer_SoundSet", "Vikhr_silencerTail_SoundSet", "Vikhr_silencerInteriorTail_SoundSet" }, { "Vikhr_silencerHomeMade_SoundSet", "Vikhr_silencerHomeMadeTail_SoundSet", "Vikhr_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.06;
            recoil = "recoil_VSS";
            recoilProne = "recoil_VSS_prone";
            dispersion = 0.0022;
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
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    ignoreIfSuppressed = 1;
                    illuminateWorld = 1;
                    positionOffset[] = {-0.05, 0, 0 };
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
                    positionOffset[] = { 0, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrel2
                {
                    overrideParticle = "smoking_barrel";
                    onlyWithinOverheatLimits[] = { 0.5, 1 };
                    positionOffset[] = { 0, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0, 0 };
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
    class My_DF_Weapons_SMG_SR3M: My_DF_Weapons_SMG_SR3M_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_SR3M0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_SR3M1";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\SR3M\data\handguard\SR3M_handguard_co.paa",
            "My_DF_Weapons_Attachments\pisg\ASVAL\data\ASVAL_co.paa",
            "My_DF_Weapons_SMG\SR3M\data\stock\SR3M_stock_co.paa",
            "My_DF_Weapons_DMR\VSS\data\VSS_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\SR3M\data\handguard\SR3M_handguard.rvmat",
            "My_DF_Weapons_Attachments\pisg\ASVAL\data\ASVAL.rvmat",
            "My_DF_Weapons_SMG\SR3M\data\stock\SR3M_stock.rvmat",
            "My_DF_Weapons_DMR\VSS\data\VSS.rvmat"
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
                                "My_DF_Weapons_SMG\SR3M\data\handguard\SR3M_handguard.rvmat",
                                "My_DF_Weapons_Attachments\pisg\ASVAL\data\ASVAL.rvmat",
                                "My_DF_Weapons_SMG\SR3M\data\stock\SR3M_stock.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\VSS.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\SR3M\data\handguard\SR3M_handguard_worn.rvmat",
                                "My_DF_Weapons_Attachments\pisg\ASVAL\data\ASVAL_worn.rvmat",
                                "My_DF_Weapons_SMG\SR3M\data\stock\SR3M_stock_worn.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\VSS_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\SR3M\data\handguard\SR3M_handguard_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\ASVAL\data\ASVAL_damage.rvmat",
                                "My_DF_Weapons_SMG\SR3M\data\stock\SR3M_stock_damage.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\VSS_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\SR3M\data\handguard\SR3M_handguard_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\ASVAL\data\ASVAL_damage.rvmat",
                                "My_DF_Weapons_SMG\SR3M\data\stock\SR3M_stock_damage.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\VSS_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\SR3M\data\handguard\SR3M_handguard_destruct.rvmat",
                                "My_DF_Weapons_Attachments\pisg\ASVAL\data\ASVAL_destruct.rvmat",
                                "My_DF_Weapons_SMG\SR3M\data\stock\SR3M_stock_destruct.rvmat",
                                "My_DF_Weapons_DMR\VSS\data\VSS_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_Uzi_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_SMG\Uzi\Uzi.p3d";
        itemSize[] = { 4, 3 };
        weight = 1500;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 0.55;
        ObstructionDistance = 0.275;
        barrelArmor = 1.9;
        initSpeedMultiplier = 1.15;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
        };
        magazines[] = {
            "My_DF_Weapons_SMG_Uzi_25RndMag",
            "My_DF_Weapons_SMG_Uzi_35RndMag",
            "My_DF_Weapons_SMG_Uzi_45RndMag"
        };
        attachments[] = {
            "DF_stock",
            "DF_handguard_Uzi",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_barrel_Uzi",
            "DF_muzzle",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.3;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1.2, 1.2, 0.7 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "barrel",
            "handguard",
            "stock",
            "rail"
        };
        hiddenSelections[] = {
            "barrel",
            "handguard",
            "pisg",
            "stock",
            "rec"
        };
        class NoiseShoot
        {
            strength = 60;
            type = "shot";
        };
        modes[] = {
            "FullAuto",
            "SemiAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_SMG_Uzi_Shot_SoundSet", "CZ61_Shot_1st_iterior_SoundSet", "CZ61_Tail_SoundSet", "CZ61_InteriorTail_SoundSet", "CZ61_Slapback_SoundSet", "CZ61_Tail_2D_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_SMG_Uzi_silencer_SoundSet", "CZ61_silencerTail_SoundSet", "CZ61_silencerInteriorTail_SoundSet" }, { "CZ61_1st_silencerHomeMade_SoundSet", "CZ61_silencerHomeMadeTail_SoundSet", "CZ61_silencerHomeMadeInteriorTail_SoundSet" } };
            reloadTime = 0.12;
            recoil = "recoil_cz61";
            recoilProne = "recoil_cz61_prone";
            dispersion = 0.0045;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot1st[] = { "My_DF_Weapons_SMG_Uzi_Shot_SoundSet", "CZ61_Shot_1st_iterior_SoundSet" };
            soundSetShot[] = { "My_DF_Weapons_SMG_Uzi_Shot_SoundSet", "CZ61_Shot_iterior_SoundSet", "CZ61_Tail_SoundSet", "CZ61_InteriorTail_SoundSet", "CZ61_Slapback_SoundSet", "CZ61_Tail_2D_SoundSet" };
            soundSetShotExt1st[] = { { "My_DF_Weapons_SMG_Uzi_silencer_SoundSet" }, { "CZ61_1st_silencerHomeMade_SoundSet" } };
            soundSetShotExt[] = { { "My_DF_Weapons_SMG_Uzi_silencer_SoundSet", "CZ61_silencerTail_SoundSet", "CZ61_silencerInteriorTail_SoundSet" }, { "CZ61_silencerHomeMade_SoundSet", "CZ61_silencerHomeMadeTail_SoundSet", "CZ61_silencerHomeMadeInteriorTail_SoundSet" } };
            reloadTime = 0.08;
            recoil = "recoil_cz61";
            recoilProne = "recoil_cz61_prone";
            dispersion = 0.0045;
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
                position[] = {-0.15, -0.02, 0 };
                orientation[] = { 0, 0, -13 };
            };
            class Melee
            {
                position[] = {-0.15, 0, -0.02 };
                orientation[] = { 0, 0, -13 };
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
                    overrideParticle = "weapon_shot_fnx_01";
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
                    positionOffset[] = { 0, 0, 0 };
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
        weaponStateAnim = "dz\anims\anm\player\reloads\CZ61\w_CZ61_states.anm";
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
    class My_DF_Weapons_SMG_Uzi: My_DF_Weapons_SMG_Uzi_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_Uzi0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_Uzi1";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_co.paa",
            "My_DF_Weapons_SMG\Uzi\data\handguard\Uzi_handguard_co.paa",
            "My_DF_Weapons_SMG\Uzi\data\pisg\Uzi_pisg_co.paa",
            "My_DF_Weapons_SMG\Uzi\data\stock\Uzi_stock_co.paa",
            "My_DF_Weapons_SMG\Uzi\data\Uzi_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel.rvmat",
            "My_DF_Weapons_SMG\Uzi\data\handguard\Uzi_handguard.rvmat",
            "My_DF_Weapons_SMG\Uzi\data\pisg\Uzi_pisg.rvmat",
            "My_DF_Weapons_SMG\Uzi\data\stock\Uzi_stock.rvmat",
            "My_DF_Weapons_SMG\Uzi\data\Uzi.rvmat"
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
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel.rvmat",
                                "My_DF_Weapons_SMG\Uzi\data\handguard\Uzi_handguard.rvmat",
                                "My_DF_Weapons_SMG\Uzi\data\pisg\Uzi_pisg.rvmat",
                                "My_DF_Weapons_SMG\Uzi\data\stock\Uzi_stock.rvmat",
                                "My_DF_Weapons_SMG\Uzi\data\Uzi.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_worn.rvmat",
                                "My_DF_Weapons_SMG\Uzi\data\handguard\Uzi_handguard_worn.rvmat",
                                "My_DF_Weapons_SMG\Uzi\data\pisg\Uzi_pisg_worn.rvmat",
                                "My_DF_Weapons_SMG\Uzi\data\stock\Uzi_stock_worn.rvmat",
                                "My_DF_Weapons_SMG\Uzi\data\Uzi_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_damage.rvmat",
                                "My_DF_Weapons_SMG\Uzi\data\handguard\Uzi_handguard_damage.rvmat",
                                "My_DF_Weapons_SMG\Uzi\data\pisg\Uzi_pisg_damage.rvmat",
                                "My_DF_Weapons_SMG\Uzi\data\stock\Uzi_stock_damage.rvmat",
                                "My_DF_Weapons_SMG\Uzi\data\Uzi_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_damage.rvmat",
                                "My_DF_Weapons_SMG\Uzi\data\handguard\Uzi_handguard_damage.rvmat",
                                "My_DF_Weapons_SMG\Uzi\data\pisg\Uzi_pisg_damage.rvmat",
                                "My_DF_Weapons_SMG\Uzi\data\stock\Uzi_stock_damage.rvmat",
                                "My_DF_Weapons_SMG\Uzi\data\Uzi_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_destruct.rvmat",
                                "My_DF_Weapons_SMG\Uzi\data\handguard\Uzi_handguard_destruct.rvmat",
                                "My_DF_Weapons_SMG\Uzi\data\pisg\Uzi_pisg_destruct.rvmat",
                                "My_DF_Weapons_SMG\Uzi\data\stock\Uzi_stock_destruct.rvmat",
                                "My_DF_Weapons_SMG\Uzi\data\Uzi_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_Vector_Base: Rifle_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_SMG\Vector\Vector.p3d";
        itemSize[] = { 5, 3 };
        weight = 2200;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        WeaponLength = 0.55;
        ObstructionDistance = 0.464;
        barrelArmor = 1.0;
        initSpeedMultiplier = 1;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = { "Ammo_45ACP", "My_DF_Weapons_Ammo_45ACP_AP", "My_DF_Weapons_Ammo_45ACP_FMJ", "My_DF_Weapons_Ammo_45ACP_HS", "My_DF_Weapons_Ammo_45ACP_JHP", "My_DF_Weapons_Ammo_45ACP_RIP" };
        magazines[] = {
            "My_DF_Weapons_SMG_Vector_20RndMag",
            "My_DF_Weapons_SMG_Vector_30RndMag",
            "My_DF_Weapons_SMG_Vector_40RndMag",
            "My_DF_Weapons_SMG_Vector_70RndMag"
        };
        attachments[] = {
            "DF_stock",
            "DF_handguard_Vector",
            "weaponWrap",
            "weaponOptics",
            "DF_mount",
            "DF_frog_down",
            "DF_muzzle",
            "DF_Pendant"
        };
        magazineSwitchTime = 0.38;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 2.2, 2.2, 0.85 };
        sightMisalignmentModifier[] = { 1, 1, 1 };
        simpleHiddenSelections[] = {
            "magazine",
            "bullet",
            "hide_barrel",
            "barrel",
            "frosight",
            "sight",
            "stock",
            "frosight_up",
            "frosight_down",
            "sight_up",
            "sight_down"
        };
        hiddenSelections[] = {
            "barrel",
            "frosight",
            "sight",
            "stock",
            "rec"
        };
        class NoiseShoot
        {
            strength = 60;
            type = "shot";
        };
        modes[] = {
            "FullAuto",
            "SemiAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_SMG_Vector_Shot_SoundSet", "Vikhr_Tail_SoundSet", "Vikhr_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_SMG_Vector_silencer_SoundSet", "Vikhr_silencerTail_SoundSet", "Vikhr_silencerInteriorTail_SoundSet" }, { "Vikhr_silencerHomeMade_SoundSet", "Vikhr_silencerHomeMadeTail_SoundSet", "Vikhr_silencerInteriorHomeMadeTail_SoundSet" } };
            envShootingDecrease = 0.05;
            reloadTime = 0.12;
            recoil = "recoil_VSS";
            recoilProne = "recoil_VSS_prone";
            dispersion = 0.002;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = { "My_DF_Weapons_SMG_Vector_Shot_SoundSet", "Vikhr_Tail_SoundSet", "Vikhr_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_SMG_Vector_silencer_SoundSet", "Vikhr_silencerTail_SoundSet", "Vikhr_silencerInteriorTail_SoundSet" }, { "Vikhr_silencerHomeMade_SoundSet", "Vikhr_silencerHomeMadeTail_SoundSet", "Vikhr_silencerInteriorHomeMadeTail_SoundSet" } };
            reloadTime = 0.05;
            recoil = "recoil_VSS";
            recoilProne = "recoil_VSS_prone";
            dispersion = 0.0022;
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
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    ignoreIfSuppressed = 1;
                    illuminateWorld = 1;
                    positionOffset[] = {-0.05, 0, 0 };
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
                    positionOffset[] = { 0, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrel2
                {
                    overrideParticle = "smoking_barrel";
                    onlyWithinOverheatLimits[] = { 0.5, 1 };
                    positionOffset[] = { 0, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0, 0 };
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
    class My_DF_Weapons_SMG_Vector: My_DF_Weapons_SMG_Vector_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_Vector0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_Vector1";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_co.paa",
            "My_DF_Weapons_SMG\Vector\data\frosight\Vector_frosight_co.paa",
            "My_DF_Weapons_SMG\Vector\data\sight\Vector_sight_co.paa",
            "My_DF_Weapons_SMG\Vector\data\stock\Vector_stock_co.paa",
            "My_DF_Weapons_SMG\Vector\data\Vector_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel.rvmat",
            "My_DF_Weapons_SMG\Vector\data\frosight\Vector_frosight.rvmat",
            "My_DF_Weapons_SMG\Vector\data\sight\Vector_sight.rvmat",
            "My_DF_Weapons_SMG\Vector\data\stock\Vector_stock.rvmat",
            "My_DF_Weapons_SMG\Vector\data\Vector.rvmat"
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
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel.rvmat",
                                "My_DF_Weapons_SMG\Vector\data\frosight\Vector_frosight.rvmat",
                                "My_DF_Weapons_SMG\Vector\data\sight\Vector_sight.rvmat",
                                "My_DF_Weapons_SMG\Vector\data\stock\Vector_stock.rvmat",
                                "My_DF_Weapons_SMG\Vector\data\Vector.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_worn.rvmat",
                                "My_DF_Weapons_SMG\Vector\data\frosight\Vector_frosight_worn.rvmat",
                                "My_DF_Weapons_SMG\Vector\data\sight\Vector_sight_worn.rvmat",
                                "My_DF_Weapons_SMG\Vector\data\stock\Vector_stock_worn.rvmat",
                                "My_DF_Weapons_SMG\Vector\data\Vector_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_damage.rvmat",
                                "My_DF_Weapons_SMG\Vector\data\frosight\Vector_frosight_damage.rvmat",
                                "My_DF_Weapons_SMG\Vector\data\sight\Vector_sight_damage.rvmat",
                                "My_DF_Weapons_SMG\Vector\data\stock\Vector_stock_damage.rvmat",
                                "My_DF_Weapons_SMG\Vector\data\Vector_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_damage.rvmat",
                                "My_DF_Weapons_SMG\Vector\data\frosight\Vector_frosight_damage.rvmat",
                                "My_DF_Weapons_SMG\Vector\data\sight\Vector_sight_damage.rvmat",
                                "My_DF_Weapons_SMG\Vector\data\stock\Vector_stock_damage.rvmat",
                                "My_DF_Weapons_SMG\Vector\data\Vector_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_destruct.rvmat",
                                "My_DF_Weapons_SMG\Vector\data\frosight\Vector_frosight_destruct.rvmat",
                                "My_DF_Weapons_SMG\Vector\data\sight\Vector_sight_destruct.rvmat",
                                "My_DF_Weapons_SMG\Vector\data\stock\Vector_stock_destruct.rvmat",
                                "My_DF_Weapons_SMG\Vector\data\Vector_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
	class My_DF_Weapons_SMG_MK4_Base: Rifle_Base
	{
		scope=0;
		model="\My_DF_Weapons_SMG\MK4\MK4.p3d";
		itemSize[]={7,3};
		weight=2700;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={0, 0.0, 0.0, 0.0, 0.0, 1.0};
        WeaponLength=0.65;
        ObstructionDistance=0.464;
        barrelArmor=0.9;
        initSpeedMultiplier=1.05;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]={"My_DF_Weapons_Ammo_46x30_AP_SX", "My_DF_Weapons_Ammo_46x30_FMJ_SX", "My_DF_Weapons_Ammo_46x30_Subsonic_SX"};
		magazines[]=
		{
			"My_DF_Weapons_SMG_MK4_24RndMag",
			"My_DF_Weapons_SMG_MK4_48RndMag"
		};
		attachments[]=
		{
			"DF_stock_notube",
			"DF_ar_pisg",
			"DF_handguard_MK4",
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
		magazineSwitchTime=0.45;
        ejectType=1;
        recoilModifier[]={1, 1, 1};
        swayModifier[]={1.2, 1.2, 0.7};
		sightMisalignmentModifier[]={1,1,1};
		simpleHiddenSelections[]=
		{
			"magazine",
			"camo",
			"bullet",
			"hide_barrel",
			"barrel",
			"frosight",
			"handguard",
			"pisg",
			"sight",
			"tube",
			"stock",
			"mlok_rail",
			"frosight_1_up",
			"frosight_2_up",
			"frosight_1_down",
			"frosight_2_down",
			"frosight_1_base",
			"frosight_2_base",
			"sight_up",
			"sight_down"
		};
		hiddenSelections[]=
		{
			"barrel",
			"frosight",
			"handguard",
			"pisg",
			"sight",
			"rec",
			"tube",
			"stock"
		};
		class NoiseShoot
		{
			strength=60;
			type="shot";
		};
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class SemiAuto : Mode_SemiAuto
        {
            soundSetShot[]={"My_DF_Weapons_SMG_MK4_Shot_SoundSet", "M4_Tail_SoundSet", "M4_InteriorTail_SoundSet"};
            soundSetShotExt[]={{"My_DF_Weapons_SMG_MK4_silencer_SoundSet", "M4_silencerTail_SoundSet", "M4_silencerInteriorTail_SoundSet"}, {"M4_silencerHomeMade_SoundSet", "M4_silencerHomeMadeTail_SoundSet", "M4_silencerInteriorHomeMadeTail_SoundSet"}};
            reloadTime=0.12;
            recoil="recoil_m4";
            recoilProne="recoil_m4_prone";
            dispersion=0.002;
            magazineSlot="magazine";
        };
        class FullAuto : Mode_FullAuto
        {
            soundSetShot[]={"My_DF_Weapons_SMG_MK4_Shot_SoundSet", "M4_Tail_SoundSet", "M4_InteriorTail_SoundSet"};
            soundSetShotExt[]={{"My_DF_Weapons_SMG_MK4_silencer_SoundSet", "M4_silencerTail_SoundSet", "M4_silencerInteriorTail_SoundSet"}, {"M4_silencerHomeMade_SoundSet", "M4_silencerHomeMadeTail_SoundSet", "M4_silencerInteriorHomeMadeTail_SoundSet"}};
            reloadTime=0.06;
            recoil="recoil_m4";
            recoilProne="recoil_m4_prone";
            dispersion=0.002;
            magazineSlot="magazine";
        };
        class OpticsInfo : OpticsInfoRifle
        {
            memoryPointCamera="eye";
            modelOptics="-";
            distanceZoomMin=100;
            distanceZoomMax=100;
            discreteDistance[]={25};
            discreteDistanceInitIndex=0;
        };
		class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[]={-0.1, 0, 0.03};
                orientation[]={0, 0, 0};
            };
            class Melee
            {
                position[]={-0.1, 0, -0.04};
                orientation[]={0, 0, 0};
            };
        };
        weaponStateAnim="dz\anims\anm\player\reloads\M4A1\w_M4A1_states.anm";
		class Particles
        {
            class OnFire
            {
                class SmokeCloud
                {
                    overrideParticle="weapon_shot_winded_smoke";
                };
                class MuzzleFlash
                {
                    overrideParticle="weapon_shot_ump45_01";
                    ignoreIfSuppressed=1;
                    illuminateWorld=1;
                    positionOffset[]={0, 0, 0};
                };
                class MuzzleFlashStar
                {
                    overrideParticle="weapon_shot_Flame_3D_4star";
                    ignoreIfSuppressed=1;
                    overrideDirectionVector[]={0, 45, 0};
                    positionOffset[]={0.01, 0, 0};
                };
                class ChamberSmoke
                {
                    overrideParticle="weapon_shot_chamber_smoke";
                    overridePoint="Nabojnicestart";
                    overrideDirectionPoint="Nabojniceend";
                };
            };
            class OnOverheating
            {
                maxOverheatingValue=12;
                shotsToStartOverheating=4;
                overheatingDecayInterval=0.7;
                class SmokingBarrel1
                {
                    overrideParticle="smoking_barrel_small";
                    onlyWithinOverheatLimits[]={0, 0.5};
                    positionOffset[]={0.2, 0, 0};
                    onlyWithinRainLimits[]={0, 0.2};
                };
                class SmokingBarrel2
                {
                    overrideParticle="smoking_barrel";
                    onlyWithinOverheatLimits[]={0.5, 0.7};
                    positionOffset[]={0.2, 0, 0};
                    onlyWithinRainLimits[]={0, 0.2};
                };
                class SmokingBarrel3
                {
                    overrideParticle="smoking_barrel_heavy";
                    onlyWithinOverheatLimits[]={0.7, 1};
                    positionOffset[]={0.2, 0, 0};
                    onlyWithinRainLimits[]={0, 0.2};
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle="smoking_barrel_steam_small";
                    positionOffset[]={0.35, 0, 0};
                    onlyWithinRainLimits[]={0.2, 0.5};
                };
                class SmokingBarrelHotSteam
                {
                    overrideParticle="smoking_barrel_steam";
                    positionOffset[]={0.35, 0, 0};
                    onlyWithinRainLimits[]={0.5, 1};
                };
                class OpenChamberSmoke
                {
                    onlyIfBoltIsOpen=1;
                    overrideParticle="smoking_barrel_small";
                    overridePoint="Nabojnicestart";
                };
            };
            class OnBulletCasingEject
            {
                class ChamberSmokeRaise
                {
                    overrideParticle="weapon_shot_chamber_smoke";
                    overridePoint="Nabojnicestart";
                };
            };
        };
		class AnimationSources
		{
			class sup
			{
				source="user";
				animPeriod=0.01;
				initPhase=0.23;
			};
			class SMGmuzzle
			{
				source="user";
				animPeriod=0.01;
				initPhase=0;
			};
			class riser_optic
			{
				source="user";
				animPeriod=0.01;
				initPhase=0;
			};
			class hydra_optic
			{
				source="user";
				animPeriod=0.01;
				initPhase=0;
			};
			class hydra_optic2
			{
				source="user";
				animPeriod=0.01;
				initPhase=0;
			};
			class canted_optic
			{
				source="user";
				animPeriod=0.01;
				initPhase=0;
			};
			class optic
			{
				source="user";
				animPeriod=0.01;
				initPhase=0;
			};
		};
	};
	class My_DF_Weapons_SMG_MK4: My_DF_Weapons_SMG_MK4_Base
	{
		scope=2;
		displayName="$STR_My_DF_Weapons_SMG_MK40";
		descriptionShort="$STR_My_DF_Weapons_SMG_MK41";
		hiddenSelectionsTextures[]=
		{
			"My_DF_Weapons_SMG\MK4\data\barrel\MK4_barrel_co.paa",
			"My_DF_Weapons_Rifles\M7\data\frosight\M7_frosight_co.paa",
			"My_DF_Weapons_SMG\MK4\data\handguard\MK4_handguard_co.paa",
			"My_DF_Weapons_Attachments\pisg\MK4_pisg\data\MK4_pisg_co.paa",
			"My_DF_Weapons_Rifles\M7\data\sight\M7_sight_co.paa",
			"My_DF_Weapons_SMG\MK4\data\MK4_co.paa",
			"My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_co.paa",
			"My_DF_Weapons_Attachments\stock\vltor\data\vltor_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"My_DF_Weapons_SMG\MK4\data\barrel\MK4_barrel.rvmat",
			"My_DF_Weapons_Rifles\M7\data\frosight\M7_frosight.rvmat",
			"My_DF_Weapons_SMG\MK4\data\handguard\MK4_handguard.rvmat",
			"My_DF_Weapons_Attachments\pisg\MK4_pisg\data\MK4_pisg.rvmat",
			"My_DF_Weapons_Rifles\M7\data\sight\M7_sight.rvmat",
			"My_DF_Weapons_SMG\MK4\data\MK4.rvmat",
			"My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter.rvmat",
			"My_DF_Weapons_Attachments\stock\vltor\data\vltor.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"My_DF_Weapons_SMG\MK4\data\barrel\MK4_barrel.rvmat",
								"My_DF_Weapons_Rifles\M7\data\frosight\M7_frosight.rvmat",
								"My_DF_Weapons_SMG\MK4\data\handguard\MK4_handguard.rvmat",
								"My_DF_Weapons_Attachments\pisg\MK4_pisg\data\MK4_pisg.rvmat",
								"My_DF_Weapons_Rifles\M7\data\sight\M7_sight.rvmat",
								"My_DF_Weapons_SMG\MK4\data\MK4.rvmat",
								"My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter.rvmat",
								"My_DF_Weapons_Attachments\stock\vltor\data\vltor.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"My_DF_Weapons_SMG\MK4\data\barrel\MK4_barrel_worn.rvmat",
								"My_DF_Weapons_Rifles\M7\data\frosight\M7_frosight_worn.rvmat",
								"My_DF_Weapons_SMG\MK4\data\handguard\MK4_handguard_worn.rvmat",
								"My_DF_Weapons_Attachments\pisg\MK4_pisg\data\MK4_pisg_worn.rvmat",
								"My_DF_Weapons_Rifles\M7\data\sight\M7_sight_worn.rvmat",
								"My_DF_Weapons_SMG\MK4\data\MK4_worn.rvmat",
								"My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_worn.rvmat",
								"My_DF_Weapons_Attachments\stock\vltor\data\vltor_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"My_DF_Weapons_SMG\MK4\data\barrel\MK4_barrel_damage.rvmat",
								"My_DF_Weapons_Rifles\M7\data\frosight\M7_frosight_damage.rvmat",
								"My_DF_Weapons_SMG\MK4\data\handguard\MK4_handguard_damage.rvmat",
								"My_DF_Weapons_Attachments\pisg\MK4_pisg\data\MK4_pisg_damage.rvmat",
								"My_DF_Weapons_Rifles\M7\data\sight\M7_sight_damage.rvmat",
								"My_DF_Weapons_SMG\MK4\data\MK4_damage.rvmat",
								"My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_damage.rvmat",
								"My_DF_Weapons_Attachments\stock\vltor\data\vltor_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"My_DF_Weapons_SMG\MK4\data\barrel\MK4_barrel_damage.rvmat",
								"My_DF_Weapons_Rifles\M7\data\frosight\M7_frosight_damage.rvmat",
								"My_DF_Weapons_SMG\MK4\data\handguard\MK4_handguard_damage.rvmat",
								"My_DF_Weapons_Attachments\pisg\MK4_pisg\data\MK4_pisg_damage.rvmat",
								"My_DF_Weapons_Rifles\M7\data\sight\M7_sight_damage.rvmat",
								"My_DF_Weapons_SMG\MK4\data\MK4_damage.rvmat",
								"My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_damage.rvmat",
								"My_DF_Weapons_Attachments\stock\vltor\data\vltor_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"My_DF_Weapons_SMG\MK4\data\barrel\MK4_barrel_destruct.rvmat",
								"My_DF_Weapons_Rifles\M7\data\frosight\M7_frosight_destruct.rvmat",
								"My_DF_Weapons_SMG\MK4\data\handguard\MK4_handguard_destruct.rvmat",
								"My_DF_Weapons_Attachments\pisg\MK4_pisg\data\MK4_pisg_destruct.rvmat",
								"My_DF_Weapons_Rifles\M7\data\sight\M7_sight_destruct.rvmat",
								"My_DF_Weapons_SMG\MK4\data\MK4_destruct.rvmat",
								"My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_destruct.rvmat",
								"My_DF_Weapons_Attachments\stock\vltor\data\vltor_destruct.rvmat"
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
    class My_DF_Weapons_SMG_Bison_32RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_Bison_32RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_Bison_32RndMag1";
        model = "\My_DF_Weapons_SMG\Bison\Mag\32RndMag\Bison_32RndMag.p3d";
        weight = 200;
        weightPerQuantityUnit = 2;
        itemSize[] = { 1, 2 };
        count = 32;
        ammo = "Bullet_9x19";
        ammoItems[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
        };
        tracersEvery = 0;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\Bison\Mag\32RndMag\data\Bison_32RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\Bison\Mag\32RndMag\data\Bison_32RndMag.rvmat"
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
                                "My_DF_Weapons_SMG\Bison\Mag\32RndMag\data\Bison_32RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\Bison\Mag\32RndMag\data\Bison_32RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\Bison\Mag\32RndMag\data\Bison_32RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\Bison\Mag\32RndMag\data\Bison_32RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\Bison\Mag\32RndMag\data\Bison_32RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_Bison_64RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_Bison_64RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_Bison_64RndMag1";
        model = "\My_DF_Weapons_SMG\Bison\Mag\64RndMag\Bison_64RndMag.p3d";
        weight = 300;
        weightPerQuantityUnit = 2;
        itemSize[] = { 1, 3 };
        count = 64;
        ammo = "Bullet_9x19";
        ammoItems[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
        };
        tracersEvery = 0;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\Bison\Mag\64RndMag\data\Bison_64RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\Bison\Mag\64RndMag\data\Bison_64RndMag.rvmat"
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
                                "My_DF_Weapons_SMG\Bison\Mag\64RndMag\data\Bison_64RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\Bison\Mag\64RndMag\data\Bison_64RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\Bison\Mag\64RndMag\data\Bison_64RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\Bison\Mag\64RndMag\data\Bison_64RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\Bison\Mag\64RndMag\data\Bison_64RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_MP5_20RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_MP5_20RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_MP5_20RndMag1";
        model = "\My_DF_Weapons_SMG\MP5\Mag\20RndMag\MP5_20RndMag.p3d";
        weight = 200;
        weightPerQuantityUnit = 2;
        itemSize[] = { 1, 2 };
        count = 20;
        ammo = "Bullet_9x19";
        ammoItems[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
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
            "My_DF_Weapons_SMG\MP5\Mag\20RndMag\data\MP5_20RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\MP5\Mag\20RndMag\data\MP5_20RndMag.rvmat"
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
                                "My_DF_Weapons_SMG\MP5\Mag\20RndMag\data\MP5_20RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\MP5\Mag\20RndMag\data\MP5_20RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\MP5\Mag\20RndMag\data\MP5_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\MP5\Mag\20RndMag\data\MP5_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\MP5\Mag\20RndMag\data\MP5_20RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_MP5_30RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_MP5_30RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_MP5_30RndMag1";
        model = "\My_DF_Weapons_SMG\MP5\Mag\30RndMag\MP5_30RndMag.p3d";
        weight = 300;
        weightPerQuantityUnit = 2;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_9x19";
        ammoItems[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
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
            "My_DF_Weapons_SMG\MP5\Mag\30RndMag\data\MP5_30RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\MP5\Mag\30RndMag\data\MP5_30RndMag.rvmat"
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
                                "My_DF_Weapons_SMG\MP5\Mag\30RndMag\data\MP5_30RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\MP5\Mag\30RndMag\data\MP5_30RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\MP5\Mag\30RndMag\data\MP5_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\MP5\Mag\30RndMag\data\MP5_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\MP5\Mag\30RndMag\data\MP5_30RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_MP5_50RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_MP5_50RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_MP5_50RndMag1";
        model = "\My_DF_Weapons_SMG\MP5\Mag\50RndMag\MP5_50RndMag.p3d";
        weight = 400;
        weightPerQuantityUnit = 2;
        itemSize[] = { 2, 2 };
        count = 50;
        ammo = "Bullet_9x19";
        ammoItems[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
        };
        tracersEvery = 0;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\MP5\Mag\50RndMag\data\MP5_50RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\MP5\Mag\50RndMag\data\MP5_50RndMag.rvmat"
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
                                "My_DF_Weapons_SMG\MP5\Mag\50RndMag\data\MP5_50RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\MP5\Mag\50RndMag\data\MP5_50RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\MP5\Mag\50RndMag\data\MP5_50RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\MP5\Mag\50RndMag\data\MP5_50RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\MP5\Mag\50RndMag\data\MP5_50RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_MP7_20RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_MP7_20RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_MP7_20RndMag1";
        model = "\My_DF_Weapons_SMG\MP7\Mag\20RndMag\MP7_20RndMag.p3d";
        weight = 200;
        weightPerQuantityUnit = 1;
        itemSize[] = { 1, 2 };
        count = 20;
        ammo = "Bullet_DF_46x30_FMJ_SX";
        ammoItems[] = { "My_DF_Weapons_Ammo_46x30_AP_SX", "My_DF_Weapons_Ammo_46x30_FMJ_SX", "My_DF_Weapons_Ammo_46x30_Subsonic_SX" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\MP7\Mag\20RndMag\data\MP7_20RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\MP7\Mag\20RndMag\data\MP7_20RndMag.rvmat"
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
                                "My_DF_Weapons_SMG\MP7\Mag\20RndMag\data\MP7_20RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\MP7\Mag\20RndMag\data\MP7_20RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\MP7\Mag\20RndMag\data\MP7_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\MP7\Mag\20RndMag\data\MP7_20RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\MP7\Mag\20RndMag\data\MP7_20RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_MP7_30RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_MP7_30RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_MP7_30RndMag1";
        model = "\My_DF_Weapons_SMG\MP7\Mag\30RndMag\MP7_30RndMag.p3d";
        weight = 300;
        weightPerQuantityUnit = 1;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_DF_46x30_FMJ_SX";
        ammoItems[] = { "My_DF_Weapons_Ammo_46x30_AP_SX", "My_DF_Weapons_Ammo_46x30_FMJ_SX", "My_DF_Weapons_Ammo_46x30_Subsonic_SX" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\MP7\Mag\40RndMag\data\MP7_40RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\MP7\Mag\40RndMag\data\MP7_40RndMag.rvmat"
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
                                "My_DF_Weapons_SMG\MP7\Mag\40RndMag\data\MP7_40RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\MP7\Mag\40RndMag\data\MP7_40RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\MP7\Mag\40RndMag\data\MP7_40RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\MP7\Mag\40RndMag\data\MP7_40RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\MP7\Mag\40RndMag\data\MP7_40RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_MP7_40RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_MP7_40RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_MP7_40RndMag1";
        model = "\My_DF_Weapons_SMG\MP7\Mag\40RndMag\MP7_40RndMag.p3d";
        weight = 400;
        weightPerQuantityUnit = 1;
        itemSize[] = { 1, 3 };
        count = 40;
        ammo = "Bullet_DF_46x30_FMJ_SX";
        ammoItems[] = { "My_DF_Weapons_Ammo_46x30_AP_SX", "My_DF_Weapons_Ammo_46x30_FMJ_SX", "My_DF_Weapons_Ammo_46x30_Subsonic_SX" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\MP7\Mag\40RndMag\data\MP7_40RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\MP7\Mag\40RndMag\data\MP7_40RndMag.rvmat"
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
                                "My_DF_Weapons_SMG\MP7\Mag\40RndMag\data\MP7_40RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\MP7\Mag\40RndMag\data\MP7_40RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\MP7\Mag\40RndMag\data\MP7_40RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\MP7\Mag\40RndMag\data\MP7_40RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\MP7\Mag\40RndMag\data\MP7_40RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_MP7_60RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_MP7_60RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_MP7_60RndMag1";
        model = "\My_DF_Weapons_SMG\MP7\Mag\60RndMag\MP7_60RndMag.p3d";
        weight = 500;
        weightPerQuantityUnit = 1;
        itemSize[] = { 2, 2 };
        count = 60;
        ammo = "Bullet_DF_46x30_FMJ_SX";
        ammoItems[] = { "My_DF_Weapons_Ammo_46x30_AP_SX", "My_DF_Weapons_Ammo_46x30_FMJ_SX", "My_DF_Weapons_Ammo_46x30_Subsonic_SX" };
        tracersEvery = 0;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\MP7\Mag\60RndMag\data\MP7_60RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\MP7\Mag\60RndMag\data\MP7_60RndMag.rvmat"
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
                                "My_DF_Weapons_SMG\MP7\Mag\60RndMag\data\MP7_60RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\MP7\Mag\60RndMag\data\MP7_60RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\MP7\Mag\60RndMag\data\MP7_60RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\MP7\Mag\60RndMag\data\MP7_60RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\MP7\Mag\60RndMag\data\MP7_60RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_P90_50RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_P90_50RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_P90_50RndMag1";
        model = "\My_DF_Weapons_SMG\P90\Mag\50RndMag\P90_50RndMag.p3d";
        weight = 500;
        weightPerQuantityUnit = 2;
        itemSize[] = { 1, 3 };
        count = 50;
        ammo = "Bullet_DF_57x28_L191";
        ammoItems[] = { "My_DF_Weapons_Ammo_57x28_L191", "My_DF_Weapons_Ammo_57x28_R37F", "My_DF_Weapons_Ammo_57x28_SS190", "My_DF_Weapons_Ammo_57x28_SS193", "My_DF_Weapons_Ammo_57x28_SS197SR", "My_DF_Weapons_Ammo_57x28_SS198LF" };
        tracersEvery = 0;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\P90\Mag\50RndMag\data\P90_50RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\P90\Mag\50RndMag\data\P90_50RndMag.rvmat"
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
                                "My_DF_Weapons_SMG\P90\Mag\50RndMag\data\P90_50RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\P90\Mag\50RndMag\data\P90_50RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\P90\Mag\50RndMag\data\P90_50RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\P90\Mag\50RndMag\data\P90_50RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\P90\Mag\50RndMag\data\P90_50RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_PP19_30RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_PP19_30RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_PP19_30RndMag1";
        model = "\My_DF_Weapons_SMG\PP19\Mag\30RndMag\PP19_30RndMag.p3d";
        weight = 300;
        weightPerQuantityUnit = 1;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_9x19";
        ammoItems[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
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
            "My_DF_Weapons_SMG\PP19\Mag\30RndMag\data\PP19_30RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\PP19\Mag\30RndMag\data\PP19_30RndMag.rvmat"
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
                                "My_DF_Weapons_SMG\PP19\Mag\30RndMag\data\PP19_30RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\PP19\Mag\30RndMag\data\PP19_30RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\PP19\Mag\30RndMag\data\PP19_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\PP19\Mag\30RndMag\data\PP19_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\PP19\Mag\30RndMag\data\PP19_30RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_PP19_45RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_PP19_45RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_PP19_45RndMag1";
        model = "\My_DF_Weapons_SMG\PP19\Mag\45RndMag\PP19_45RndMag.p3d";
        weight = 300;
        weightPerQuantityUnit = 1;
        itemSize[] = { 1, 3 };
        count = 45;
        ammo = "Bullet_9x19";
        ammoItems[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
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
            "My_DF_Weapons_SMG\PP19\Mag\45RndMag\data\PP19_45RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\PP19\Mag\45RndMag\data\PP19_45RndMag.rvmat"
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
                                "My_DF_Weapons_SMG\PP19\Mag\45RndMag\data\PP19_45RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\PP19\Mag\45RndMag\data\PP19_45RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\PP19\Mag\45RndMag\data\PP19_45RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\PP19\Mag\45RndMag\data\PP19_45RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\PP19\Mag\45RndMag\data\PP19_45RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_QCQ171_100RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_QCQ171_100RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_QCQ171_100RndMag1";
        model = "\My_DF_Weapons_SMG\QCQ171\Mag\100RndMag\QCQ171_100RndMag.p3d";
        weight = 500;
        weightPerQuantityUnit = 1;
        itemSize[] = { 2, 3 };
        count = 100;
        ammo = "Bullet_9x19";
        ammoItems[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
        };
        tracersEvery = 0;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\QCQ171\Mag\100RndMag\data\QCQ171_100RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\QCQ171\Mag\100RndMag\data\QCQ171_100RndMag.rvmat"
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
                                "My_DF_Weapons_SMG\QCQ171\Mag\100RndMag\data\QCQ171_100RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\QCQ171\Mag\100RndMag\data\QCQ171_100RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\QCQ171\Mag\100RndMag\data\QCQ171_100RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\QCQ171\Mag\100RndMag\data\QCQ171_100RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\QCQ171\Mag\100RndMag\data\QCQ171_100RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_QCQ171_30RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_QCQ171_30RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_QCQ171_30RndMag1";
        model = "\My_DF_Weapons_SMG\QCQ171\Mag\30RndMag\QCQ171_30RndMag.p3d";
        weight = 300;
        weightPerQuantityUnit = 1;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_9x19";
        ammoItems[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
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
            "My_DF_Weapons_SMG\QCQ171\Mag\30RndMag\data\QCQ171_30RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\QCQ171\Mag\30RndMag\data\QCQ171_30RndMag.rvmat"
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
                                "My_DF_Weapons_SMG\QCQ171\Mag\30RndMag\data\QCQ171_30RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\QCQ171\Mag\30RndMag\data\QCQ171_30RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\QCQ171\Mag\30RndMag\data\QCQ171_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\QCQ171\Mag\30RndMag\data\QCQ171_30RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\QCQ171\Mag\30RndMag\data\QCQ171_30RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_QCQ171_45RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_QCQ171_45RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_QCQ171_45RndMag1";
        model = "\My_DF_Weapons_SMG\QCQ171\Mag\45RndMag\QCQ171_45RndMag.p3d";
        weight = 400;
        weightPerQuantityUnit = 1;
        itemSize[] = { 1, 3 };
        count = 45;
        ammo = "Bullet_9x19";
        ammoItems[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
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
            "My_DF_Weapons_SMG\QCQ171\Mag\45RndMag\data\QCQ171_45RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\QCQ171\Mag\45RndMag\data\QCQ171_45RndMag.rvmat"
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
                                "My_DF_Weapons_SMG\QCQ171\Mag\45RndMag\data\QCQ171_45RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\QCQ171\Mag\45RndMag\data\QCQ171_45RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\QCQ171\Mag\45RndMag\data\QCQ171_45RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\QCQ171\Mag\45RndMag\data\QCQ171_45RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\QCQ171\Mag\45RndMag\data\QCQ171_45RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_SMG45_25RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_SMG45_25RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_SMG45_25RndMag1";
        model = "\My_DF_Weapons_SMG\SMG45\Mag\25RndMag\SMG45_25RndMag.p3d";
        weight = 200;
        weightPerQuantityUnit = 1;
        itemSize[] = { 1, 2 };
        count = 25;
        ammo = "Bullet_45ACP";
        ammoItems[] = { "Ammo_45ACP", "My_DF_Weapons_Ammo_45ACP_AP", "My_DF_Weapons_Ammo_45ACP_FMJ", "My_DF_Weapons_Ammo_45ACP_HS", "My_DF_Weapons_Ammo_45ACP_JHP", "My_DF_Weapons_Ammo_45ACP_RIP" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\SMG45\Mag\25RndMag\data\SMG45_25RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\SMG45\Mag\25RndMag\data\SMG45_25RndMag.rvmat"
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
                                "My_DF_Weapons_SMG\SMG45\Mag\25RndMag\data\SMG45_25RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\SMG45\Mag\25RndMag\data\SMG45_25RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\SMG45\Mag\25RndMag\data\SMG45_25RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\SMG45\Mag\25RndMag\data\SMG45_25RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\SMG45\Mag\25RndMag\data\SMG45_25RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_SMG45_40RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_SMG45_40RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_SMG45_40RndMag1";
        model = "\My_DF_Weapons_SMG\SMG45\Mag\40RndMag\SMG45_40RndMag.p3d";
        weight = 300;
        weightPerQuantityUnit = 1;
        itemSize[] = { 1, 3 };
        count = 40;
        ammo = "Bullet_45ACP";
        ammoItems[] = { "Ammo_45ACP", "My_DF_Weapons_Ammo_45ACP_AP", "My_DF_Weapons_Ammo_45ACP_FMJ", "My_DF_Weapons_Ammo_45ACP_HS", "My_DF_Weapons_Ammo_45ACP_JHP", "My_DF_Weapons_Ammo_45ACP_RIP" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\SMG45\Mag\40RndMag\data\SMG45_40RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\SMG45\Mag\40RndMag\data\SMG45_40RndMag.rvmat"
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
                                "My_DF_Weapons_SMG\SMG45\Mag\40RndMag\data\SMG45_40RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\SMG45\Mag\40RndMag\data\SMG45_40RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\SMG45\Mag\40RndMag\data\SMG45_40RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\SMG45\Mag\40RndMag\data\SMG45_40RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\SMG45\Mag\40RndMag\data\SMG45_40RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_Uzi_25RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_Uzi_25RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_Uzi_25RndMag1";
        model = "\My_DF_Weapons_SMG\Uzi\Mag\25RndMag\Uzi_25RndMag.p3d";
        weight = 200;
        weightPerQuantityUnit = 1;
        itemSize[] = { 1, 2 };
        count = 25;
        ammo = "Bullet_9x19";
        ammoItems[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
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
            "My_DF_Weapons_SMG\Uzi\Mag\25RndMag\data\Uzi_25RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\Uzi\Mag\25RndMag\data\Uzi_25RndMag.rvmat"
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
                                "My_DF_Weapons_SMG\Uzi\Mag\25RndMag\data\Uzi_25RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\Uzi\Mag\25RndMag\data\Uzi_25RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\Uzi\Mag\25RndMag\data\Uzi_25RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\Uzi\Mag\25RndMag\data\Uzi_25RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\Uzi\Mag\25RndMag\data\Uzi_25RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_Uzi_35RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_Uzi_35RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_Uzi_35RndMag1";
        model = "\My_DF_Weapons_SMG\Uzi\Mag\35RndMag\Uzi_35RndMag.p3d";
        weight = 300;
        weightPerQuantityUnit = 1;
        itemSize[] = { 1, 3 };
        count = 35;
        ammo = "Bullet_9x19";
        ammoItems[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
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
            "My_DF_Weapons_SMG\Uzi\Mag\35RndMag\data\Uzi_35RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\Uzi\Mag\35RndMag\data\Uzi_35RndMag.rvmat"
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
                                "My_DF_Weapons_SMG\Uzi\Mag\35RndMag\data\Uzi_35RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\Uzi\Mag\35RndMag\data\Uzi_35RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\Uzi\Mag\35RndMag\data\Uzi_35RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\Uzi\Mag\35RndMag\data\Uzi_35RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\Uzi\Mag\35RndMag\data\Uzi_35RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_Uzi_45RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_Uzi_45RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_Uzi_45RndMag1";
        model = "\My_DF_Weapons_SMG\Uzi\Mag\45RndMag\Uzi_45RndMag.p3d";
        weight = 500;
        weightPerQuantityUnit = 1;
        itemSize[] = { 1, 3 };
        count = 45;
        ammo = "Bullet_9x19";
        ammoItems[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
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
            "My_DF_Weapons_SMG\Uzi\Mag\45RndMag\data\Uzi_45RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\Uzi\Mag\45RndMag\data\Uzi_45RndMag.rvmat"
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
                                "My_DF_Weapons_SMG\Uzi\Mag\45RndMag\data\Uzi_45RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\Uzi\Mag\45RndMag\data\Uzi_45RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\Uzi\Mag\45RndMag\data\Uzi_45RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\Uzi\Mag\45RndMag\data\Uzi_45RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\Uzi\Mag\45RndMag\data\Uzi_45RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_Vector_20RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_Vector_20RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_Vector_20RndMag1";
        model = "\My_DF_Weapons_SMG\Vector\Mag\20RndMag\Vector_20RndMag.p3d";
        weight = 200;
        weightPerQuantityUnit = 1;
        itemSize[] = { 1, 2 };
        count = 20;
        ammo = "Bullet_45ACP";
        ammoItems[] = { "Ammo_45ACP", "My_DF_Weapons_Ammo_45ACP_AP", "My_DF_Weapons_Ammo_45ACP_FMJ", "My_DF_Weapons_Ammo_45ACP_HS", "My_DF_Weapons_Ammo_45ACP_JHP", "My_DF_Weapons_Ammo_45ACP_RIP" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\Vector\Mag\40RndMag\data\Vector_40RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\Vector\Mag\40RndMag\data\Vector_40RndMag.rvmat"
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
                                "My_DF_Weapons_SMG\Vector\Mag\40RndMag\data\Vector_40RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\Vector\Mag\40RndMag\data\Vector_40RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\Vector\Mag\40RndMag\data\Vector_40RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\Vector\Mag\40RndMag\data\Vector_40RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\Vector\Mag\40RndMag\data\Vector_40RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_Vector_30RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_Vector_30RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_Vector_30RndMag1";
        model = "\My_DF_Weapons_SMG\Vector\Mag\30RndMag\Vector_30RndMag.p3d";
        weight = 300;
        weightPerQuantityUnit = 1;
        itemSize[] = { 1, 3 };
        count = 30;
        ammo = "Bullet_45ACP";
        ammoItems[] = { "Ammo_45ACP", "My_DF_Weapons_Ammo_45ACP_AP", "My_DF_Weapons_Ammo_45ACP_FMJ", "My_DF_Weapons_Ammo_45ACP_HS", "My_DF_Weapons_Ammo_45ACP_JHP", "My_DF_Weapons_Ammo_45ACP_RIP" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\Vector\Mag\40RndMag\data\Vector_40RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\Vector\Mag\40RndMag\data\Vector_40RndMag.rvmat"
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
                                "My_DF_Weapons_SMG\Vector\Mag\40RndMag\data\Vector_40RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\Vector\Mag\40RndMag\data\Vector_40RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\Vector\Mag\40RndMag\data\Vector_40RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\Vector\Mag\40RndMag\data\Vector_40RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\Vector\Mag\40RndMag\data\Vector_40RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_Vector_40RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_Vector_40RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_Vector_40RndMag1";
        model = "\My_DF_Weapons_SMG\Vector\Mag\40RndMag\Vector_40RndMag.p3d";
        weight = 400;
        weightPerQuantityUnit = 1;
        itemSize[] = { 1, 3 };
        count = 40;
        ammo = "Bullet_45ACP";
        ammoItems[] = { "Ammo_45ACP", "My_DF_Weapons_Ammo_45ACP_AP", "My_DF_Weapons_Ammo_45ACP_FMJ", "My_DF_Weapons_Ammo_45ACP_HS", "My_DF_Weapons_Ammo_45ACP_JHP", "My_DF_Weapons_Ammo_45ACP_RIP" };
        tracersEvery = 0;
        attachments[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo",
            "quickdraw"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\Vector\Mag\40RndMag\data\Vector_40RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\Vector\Mag\40RndMag\data\Vector_40RndMag.rvmat"
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
                                "My_DF_Weapons_SMG\Vector\Mag\40RndMag\data\Vector_40RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\Vector\Mag\40RndMag\data\Vector_40RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\Vector\Mag\40RndMag\data\Vector_40RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\Vector\Mag\40RndMag\data\Vector_40RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\Vector\Mag\40RndMag\data\Vector_40RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_SMG_Vector_70RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_SMG_Vector_70RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_SMG_Vector_70RndMag1";
        model = "\My_DF_Weapons_SMG\Vector\Mag\70RndMag\Vector_70RndMag.p3d";
        weight = 600;
        weightPerQuantityUnit = 1;
        itemSize[] = { 2, 3 };
        count = 70;
        ammo = "Bullet_45ACP";
        ammoItems[] = { "Ammo_45ACP", "My_DF_Weapons_Ammo_45ACP_AP", "My_DF_Weapons_Ammo_45ACP_FMJ", "My_DF_Weapons_Ammo_45ACP_HS", "My_DF_Weapons_Ammo_45ACP_JHP", "My_DF_Weapons_Ammo_45ACP_RIP" };
        tracersEvery = 0;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\Vector\Mag\70RndMag\data\Vector_70RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\Vector\Mag\70RndMag\data\Vector_70RndMag.rvmat"
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
                                "My_DF_Weapons_SMG\Vector\Mag\70RndMag\data\Vector_70RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\Vector\Mag\70RndMag\data\Vector_70RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\Vector\Mag\70RndMag\data\Vector_70RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\Vector\Mag\70RndMag\data\Vector_70RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\Vector\Mag\70RndMag\data\Vector_70RndMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
	class My_DF_Weapons_SMG_MK4_24RndMag: My_DF_Weapons_Magazine_Base
	{
		scope=2;
		displayName="$STR_My_DF_Weapons_SMG_MK4_24RndMag0";
		descriptionShort="$STR_My_DF_Weapons_SMG_MK4_24RndMag1";
		model="\My_DF_Weapons_SMG\MK4\Mag\24RndMag\MK4_24RndMag.p3d";
		weight=100;
		weightPerQuantityUnit=4;
		itemSize[]={1,2};
		count=24;
        ammo="Bullet_DF_46x30_FMJ_SX";
        ammoItems[]={"My_DF_Weapons_Ammo_46x30_AP_SX", "My_DF_Weapons_Ammo_46x30_FMJ_SX", "My_DF_Weapons_Ammo_46x30_Subsonic_SX"};
		tracersEvery=0;
		attachments[]=
		{
			"DF_quickdraw"
		};
		hiddenSelections[]=
		{
			"camo",
			"quickdraw"
		};
		hiddenSelectionsTextures[]=
		{
			"My_DF_Weapons_SMG\MK4\Mag\24RndMag\data\MK4_24RndMag_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"My_DF_Weapons_SMG\MK4\Mag\24RndMag\data\MK4_24RndMag.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"My_DF_Weapons_SMG\MK4\Mag\24RndMag\data\MK4_24RndMag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"My_DF_Weapons_SMG\MK4\Mag\24RndMag\data\MK4_24RndMag_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"My_DF_Weapons_SMG\MK4\Mag\24RndMag\data\MK4_24RndMag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"My_DF_Weapons_SMG\MK4\Mag\24RndMag\data\MK4_24RndMag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"My_DF_Weapons_SMG\MK4\Mag\24RndMag\data\MK4_24RndMag_destruct.rvmat"
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
			class bullet_4
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
	class My_DF_Weapons_SMG_MK4_48RndMag: My_DF_Weapons_Magazine_Base
	{
		scope=2;
		displayName="$STR_My_DF_Weapons_SMG_MK4_48RndMag0";
		descriptionShort="$STR_My_DF_Weapons_SMG_MK4_48RndMag1";
		model="\My_DF_Weapons_SMG\MK4\Mag\48RndMag\MK4_48RndMag.p3d";
		weight=200;
		weightPerQuantityUnit=4;
		itemSize[]={1,3};
		count=48;
        ammo="Bullet_DF_46x30_FMJ_SX";
        ammoItems[]={"My_DF_Weapons_Ammo_46x30_AP_SX", "My_DF_Weapons_Ammo_46x30_FMJ_SX", "My_DF_Weapons_Ammo_46x30_Subsonic_SX"};
		tracersEvery=0;
		attachments[]=
		{
			"DF_quickdraw"
		};
		hiddenSelections[]=
		{
			"camo",
			"quickdraw"
		};
		hiddenSelectionsTextures[]=
		{
			"My_DF_Weapons_SMG\MK4\Mag\48RndMag\data\MK4_48RndMag_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"My_DF_Weapons_SMG\MK4\Mag\48RndMag\data\MK4_48RndMag.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"My_DF_Weapons_SMG\MK4\Mag\48RndMag\data\MK4_48RndMag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"My_DF_Weapons_SMG\MK4\Mag\48RndMag\data\MK4_48RndMag_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"My_DF_Weapons_SMG\MK4\Mag\48RndMag\data\MK4_48RndMag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"My_DF_Weapons_SMG\MK4\Mag\48RndMag\data\MK4_48RndMag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"My_DF_Weapons_SMG\MK4\Mag\48RndMag\data\MK4_48RndMag_destruct.rvmat"
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
			class bullet_4
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
};