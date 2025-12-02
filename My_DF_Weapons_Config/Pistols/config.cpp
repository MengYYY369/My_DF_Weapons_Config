class CfgPatches
{
	class My_DF_Weapons_Pistols_config
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Pistols",
			"My_DF_Weapons_Magazine",
			"My_DF_Weapons_Pistols_93R",
			"My_DF_Weapons_Pistols_ColtPython",
			"My_DF_Weapons_Pistols_Deagle",
			"My_DF_Weapons_Pistols_Glock",
			"My_DF_Weapons_Pistols_M1911",
			"My_DF_Weapons_Pistols_QSZ92G"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Mode_Single;
class OpticsInfo;
class OpticsInfoPistol;
class OpticsInfoRifle;
class Muzzle_Base;
class cfgWeapons
{
    class Pistol_Base;
    class My_DF_Weapons_Pistols_93R_Base: Pistol_Base
    {
        scope = 0;
        weight = 1000;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 1, 0.55, 10, 280, 4, 10 };
        WeaponLength = 0.21;
        ShoulderDistance = 0.4;
        ObstructionDistance = 0.431;
        barrelArmor = 2;
        initSpeedMultiplier = 1;
        chamberSize = 1;
        chamberedRound = "";
        magazines[] = { "My_DF_Weapons_Pistols_93R_12RndMag", "My_DF_Weapons_Pistols_93R_18RndExtMag", "My_DF_Weapons_Pistols_93R_24RndExtMag" };
        chamberableFrom[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
        };
        attachments[] = {
            "DF_pisg_93R",
            "DF_barrel_93R",
            "pistolOptics",
            "DF_mount_Pistol",
            "pistolMuzzle",
            "pistolFlashlight",
            "DF_Pendant"
        };
        itemSize[] = { 3, 2 };
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1.2, 1.2, 0.55 };
        hiddenSelections[] = { "camo", "barrel", "pisg" };
        simpleHiddenSelections[] = {
            "barrel",
            "pisg",
            "selector"
        };
        class NoiseShoot
        {
            strength = 40;
            type = "shot";
        };
        modes[] = { "SemiAuto", "Burst" };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_Pistols_93R_Shot_SoundSet", "CZ75_Tail_SoundSet", "CZ75_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Pistols_93R_silencer_SoundSet", "CZ75_silencerTail_SoundSet", "CZ75_silencerInteriorTail_SoundSet" } };
            reloadTime = 0.13;
            recoil = "recoil_cz75";
            recoilProne = "recoil_cz75_prone";
            dispersion = 0.0045;
            magazineSlot = "magazine";
        };
        class Burst: Mode_Burst
        {
            soundSetShot[] = { "My_DF_Weapons_Pistols_93R_Shot_SoundSet", "CZ75_Tail_SoundSet", "CZ75_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Pistols_93R_silencer_SoundSet", "CZ75_silencerTail_SoundSet", "CZ75_silencerInteriorTail_SoundSet" } };
            burst = 3;
            reloadTime = 0.07;
            recoil = "recoil_cz75";
            recoilProne = "recoil_cz75_prone";
            dispersion = 0.004;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoPistol
        {
            memoryPointCamera = "eye";
            discreteDistance[] = { 25 };
            discreteDistanceInitIndex = 0;
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 100;
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
                    overrideParticle = "weapon_shot_cz75_01";
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
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    positionOffset[] = { 0, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 1 };
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
        weaponStateAnim = "dz\anims\anm\player\reloads\CZ75\w_CZ75_states.anm";
        class AnimationSources
        {
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0.075;
            };
            class ptoptic
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_Pistols_93R: My_DF_Weapons_Pistols_93R_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Pistols_93R0";
        descriptionShort = "$STR_My_DF_Weapons_Pistols_93R1";
        model = "\My_DF_Weapons_Pistols\93R\93R.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Pistols\93R\data\93R_co.paa",
            "My_DF_Weapons_Pistols\93R\data\barrel\93R_barrel_co.paa",
            "My_DF_Weapons_Pistols\93R\data\pisg\93R_pisg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Pistols\93R\data\93R.rvmat",
            "My_DF_Weapons_Pistols\93R\data\barrel\93R_barrel.rvmat",
            "My_DF_Weapons_Pistols\93R\data\pisg\93R_pisg.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 300;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Pistols\93R\data\93R.rvmat",
                                "My_DF_Weapons_Pistols\93R\data\barrel\93R_barrel.rvmat",
                                "My_DF_Weapons_Pistols\93R\data\pisg\93R_pisg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Pistols\93R\data\93R_worn.rvmat",
                                "My_DF_Weapons_Pistols\93R\data\barrel\93R_barrel_worn.rvmat",
                                "My_DF_Weapons_Pistols\93R\data\pisg\93R_pisg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Pistols\93R\data\93R_damage.rvmat",
                                "My_DF_Weapons_Pistols\93R\data\barrel\93R_barrel_damage.rvmat",
                                "My_DF_Weapons_Pistols\93R\data\pisg\93R_pisg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Pistols\93R\data\93R_damage.rvmat",
                                "My_DF_Weapons_Pistols\93R\data\barrel\93R_barrel_damage.rvmat",
                                "My_DF_Weapons_Pistols\93R\data\pisg\93R_pisg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Pistols\93R\data\93R_destruct.rvmat",
                                "My_DF_Weapons_Pistols\93R\data\barrel\93R_barrel_destruct.rvmat",
                                "My_DF_Weapons_Pistols\93R\data\pisg\93R_pisg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Pistols_ColtPython_Base: Pistol_Base
    {
        scope = 0;
        weight = 1400;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 1, 0.9, 10, 250, 4, 10 };
        WeaponLength = 0.28;
        ShoulderDistance = 0.44;
        ObstructionDistance = 0.528;
        barrelArmor = 1.758;
        initSpeedMultiplier = 0.9;
        DisplayMagazine = 0;
        chamberSize = 1;
        chamberedRound = "";
        chamberableFrom[] = {
            "Ammo_357",
            "My_DF_Weapons_Ammo_357Magnum_FMJ",
            "My_DF_Weapons_Ammo_357Magnum_Shot",
            "My_DF_Weapons_Ammo_357Magnum_JHP",
            "Mag_357Speedloader_6Rnd"
        };
        attachments[] = {
            "DF_pisg_ColtPython",
            "weaponOptics",
            "DF_barrel_ColtPython",
            "pistolMuzzle",
            "DF_Pendant",
            "RevolverCylinder",
            "RevolverEjector"
        };
        itemSize[] = { 4, 2 };
        hiddenSelections[] = {
            "camo",
            "barrel",
            "pisg"
        };
        simpleHiddenSelections[] = {
            "barrel",
            "pisg",
            "rail"
        };
        ejectType = 8;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1.15, 1.15, 0.6 };
        class NoiseShoot
        {
            strength = 80;
            type = "shot";
        };
        modes[] = { "Single" };
        class Single: Mode_Single
        {
            soundSetShot[] = { "My_DF_Weapons_Pistols_ColtPython_Shot_SoundSet", "Magnum_Tail_SoundSet", "Magnum_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Pistols_ColtPython_silencer_SoundSet", "Magnum_Tail_SoundSet", "Magnum_InteriorTail_SoundSet" } };
            reloadTime = 0.3;
            dispersion = 0.0045;
            magazineSlot = "magazine";
        };
        class OpticsInfoMagnumBase: OpticsInfoPistol
        {
            memoryPointCamera = "eye";
            discreteDistance[] = { 25 };
            discreteDistanceInitIndex = 0;
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 100;
        };
        class OpticsInfo: OpticsInfoMagnumBase
        {};
        muzzles[] = { "this", "SecondMuzzle", "ThirdMuzzle", "FourthMuzzle", "FifthMuzzle", "SixthMuzzle" };
        class SecondMuzzle: Muzzle_Base
        {
            chamberSize = 1;
            muzzlePos = "usti hlavne";
            muzzleEnd = "konec hlavne";
            cartridgePos = "nabojnicestart_2";
            cartridgeVel = "nabojniceend_2";
            modes[] = { "Single" };
            magazines[] = {};
            chamberableFrom[] = {
                "Ammo_357",
                "My_DF_Weapons_Ammo_357Magnum_FMJ",
                "My_DF_Weapons_Ammo_357Magnum_Shot",
                "My_DF_Weapons_Ammo_357Magnum_JHP",
                "Mag_357Speedloader_6Rnd"
            };
            barrelArmor = 1.758;
            initSpeedMultiplier = 0.9;
            class Single: Mode_Single
            {
                soundSetShot[] = { "My_DF_Weapons_Pistols_ColtPython_Shot_SoundSet", "Magnum_Tail_SoundSet", "Magnum_InteriorTail_SoundSet" };
                soundSetShotExt[] = { { "My_DF_Weapons_Pistols_ColtPython_silencer_SoundSet", "Magnum_Tail_SoundSet", "Magnum_InteriorTail_SoundSet" } };
                reloadTime = 0.08;
                dispersion = 0.0045;
                magazineSlot = "magazine";
            };
            class OpticsInfo: OpticsInfoMagnumBase
            {};
        };
        class ThirdMuzzle: SecondMuzzle
        {
            cartridgePos = "nabojnicestart_3";
            cartridgeVel = "nabojniceend_3";
        };
        class FourthMuzzle: SecondMuzzle
        {
            cartridgePos = "nabojnicestart_4";
            cartridgeVel = "nabojniceend_4";
        };
        class FifthMuzzle: SecondMuzzle
        {
            cartridgePos = "nabojnicestart_5";
            cartridgeVel = "nabojniceend_5";
        };
        class SixthMuzzle: SecondMuzzle
        {
            cartridgePos = "nabojnicestart_6";
            cartridgeVel = "nabojniceend_6";
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
            };
            class OnOverheating
            {
                maxOverheatingValue = 8;
                shotsToStartOverheating = 8;
                overheatingDecayInterval = 1;
                class SmokingBarrel1
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    positionOffset[] = { 0, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 1 };
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
                initPhase = 0.1;
            };
            class sup2
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class revolver_optic
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
        weaponStateAnim = "dz\anims\anm\player\reloads\Magnum\w_magnum_states.anm";
        boneRemap[] = { "bolt", "Weapon_Bolt", "magazine", "Weapon_Magazine", "bullet", "Weapon_Bullet", "trigger", "Weapon_Trigger", "hammer", "Weapon_Bone_01", "cylinder_arm", "Weapon_Bone_03", "ejector", "Weapon_Bone_04" };
    };
    class My_DF_Weapons_Pistols_ColtPython: My_DF_Weapons_Pistols_ColtPython_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Pistols_ColtPython0";
        descriptionShort = "$STR_My_DF_Weapons_Pistols_ColtPython1";
        model = "\My_DF_Weapons_Pistols\ColtPython\ColtPython.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Pistols\ColtPython\data\ColtPython_co.paa",
            "My_DF_Weapons_Pistols\ColtPython\data\barrel\ColtPython_barrel_co.paa",
            "My_DF_Weapons_Pistols\ColtPython\data\pisg\ColtPython_pisg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Pistols\ColtPython\data\ColtPython.rvmat",
            "My_DF_Weapons_Pistols\ColtPython\data\barrel\ColtPython_barrel.rvmat",
            "My_DF_Weapons_Pistols\ColtPython\data\pisg\ColtPython_pisg.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 300;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Pistols\ColtPython\data\ColtPython.rvmat",
                                "My_DF_Weapons_Pistols\ColtPython\data\barrel\ColtPython_barrel.rvmat",
                                "My_DF_Weapons_Pistols\ColtPython\data\pisg\ColtPython_pisg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Pistols\ColtPython\data\ColtPython_worn.rvmat",
                                "My_DF_Weapons_Pistols\ColtPython\data\barrel\ColtPython_barrel_worn.rvmat",
                                "My_DF_Weapons_Pistols\ColtPython\data\pisg\ColtPython_pisg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Pistols\ColtPython\data\ColtPython_damage.rvmat",
                                "My_DF_Weapons_Pistols\ColtPython\data\barrel\ColtPython_barrel_damage.rvmat",
                                "My_DF_Weapons_Pistols\ColtPython\data\pisg\ColtPython_pisg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Pistols\ColtPython\data\ColtPython_damage.rvmat",
                                "My_DF_Weapons_Pistols\ColtPython\data\barrel\ColtPython_barrel_damage.rvmat",
                                "My_DF_Weapons_Pistols\ColtPython\data\pisg\ColtPython_pisg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Pistols\ColtPython\data\ColtPython_destruct.rvmat",
                                "My_DF_Weapons_Pistols\ColtPython\data\barrel\ColtPython_barrel_destruct.rvmat",
                                "My_DF_Weapons_Pistols\ColtPython\data\pisg\ColtPython_pisg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Pistols_Deagle_Base: Pistol_Base
    {
        scope = 0;
        weight = 1500;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 1, 0.89999998, 10, 250, 5, 10 };
        WeaponLength = 0.28;
        ShoulderDistance = 0.38999999;
        barrelArmor = 0.80000001;
        initSpeedMultiplier = 1;
        chamberSize = 1;
        chamberedRound = "";
        magazines[] = {
            "Mag_Deagle_9rnd",
            "My_DF_Weapons_Pistols_Deagle_7RndMag",
            "My_DF_Weapons_Pistols_Deagle_13RndMag"
        };
        chamberableFrom[] = {
            "Ammo_357",
            "My_DF_Weapons_Ammo_357Magnum_FMJ",
            "My_DF_Weapons_Ammo_357Magnum_Shot",
            "My_DF_Weapons_Ammo_357Magnum_JHP",
            "My_DF_Weapons_Ammo_50AE_FMJ",
            "My_DF_Weapons_Ammo_50AE_HP",
            "My_DF_Weapons_Ammo_50AE_JHP"
        };
        attachments[] = {
            "DF_pisg_Deagle",
            "weaponOpticsCrossbow",
            "DF_barrel_Deagle",
            "pistolMuzzle",
            "pistolFlashlight",
            "DF_Pendant"
        };
        itemSize[] = { 4, 2 };
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1.3, 1.3, 0.89999998 };
        simpleHiddenSelections[] = {
            "hide_barrel",
            "pisg",
            "barrel"
        };
        hiddenSelections[] = {
            "camo",
            "pisg",
            "barrel"
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
            soundSetShot[] = {
                "My_DF_Weapons_Pistols_Deagle_Shot_SoundSet",
                "DEG_Tail_SoundSet",
                "DEG_InteriorTail_SoundSet"
            };
            soundSetShotExt[] = {
                {
                    "My_DF_Weapons_Pistols_Deagle_silencer_SoundSet",
                    "DEG_silencerTail_SoundSet",
                    "DEG_silencerInteriorTail_SoundSet"
                }
            };
            reloadTime = 0.25;
            dispersion = 0.003;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoPistol
        {
            memoryPointCamera = "eye";
            discreteDistance[] = { 25 };
            discreteDistanceInitIndex = 0;
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 100;
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
            };
            class OnOverheating
            {
                maxOverheatingValue = 8;
                shotsToStartOverheating = 8;
                overheatingDecayInterval = 1;
                class SmokingBarrel1
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    positionOffset[] = { 0, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 1 };
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
        weaponStateAnim = "dz\anims\anm\player\reloads\Deagle\w_Deagle_states.anm";
        class AnimationSources
        {
            class sup
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
    class My_DF_Weapons_Pistols_Deagle: My_DF_Weapons_Pistols_Deagle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Pistols_Deagle0";
        descriptionShort = "$STR_My_DF_Weapons_Pistols_Deagle1";
        model = "\My_DF_Weapons_Pistols\Deagle\Deagle.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Pistols\Deagle\data\Deagle_co.paa",
            "My_DF_Weapons_Pistols\Deagle\data\pisg\Deagle_pisg_co.paa",
            "My_DF_Weapons_Pistols\Deagle\data\barrel\Deagle_barrel_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Pistols\Deagle\data\Deagle.rvmat",
            "My_DF_Weapons_Pistols\Deagle\data\pisg\Deagle_pisg.rvmat",
            "My_DF_Weapons_Pistols\Deagle\data\barrel\Deagle_barrel.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 300;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Pistols\Deagle\data\Deagle.rvmat",
                                "My_DF_Weapons_Pistols\Deagle\data\pisg\Deagle_pisg.rvmat",
                                "My_DF_Weapons_Pistols\Deagle\data\barrel\Deagle_barrel.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Pistols\Deagle\data\Deagle_worn.rvmat",
                                "My_DF_Weapons_Pistols\Deagle\data\pisg\Deagle_pisg_worn.rvmat",
                                "My_DF_Weapons_Pistols\Deagle\data\barrel\Deagle_barrel_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Pistols\Deagle\data\Deagle_damage.rvmat",
                                "My_DF_Weapons_Pistols\Deagle\data\pisg\Deagle_pisg_damage.rvmat",
                                "My_DF_Weapons_Pistols\Deagle\data\barrel\Deagle_barrel_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Pistols\Deagle\data\Deagle_damage.rvmat",
                                "My_DF_Weapons_Pistols\Deagle\data\pisg\Deagle_pisg_damage.rvmat",
                                "My_DF_Weapons_Pistols\Deagle\data\barrel\Deagle_barrel_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Pistols\Deagle\data\Deagle_destruct.rvmat",
                                "My_DF_Weapons_Pistols\Deagle\data\pisg\Deagle_pisg_destruct.rvmat",
                                "My_DF_Weapons_Pistols\Deagle\data\barrel\Deagle_barrel_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Pistols_Glock18C_Base: Pistol_Base
    {
        scope = 0;
        weight = 1000;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 1, 0.5, 10, 250, 4, 10 };
        WeaponLength = 0.21;
        ShoulderDistance = 0.4;
        ObstructionDistance = 0.431;
        barrelArmor = 1.5;
        initSpeedMultiplier = 1;
        chamberSize = 1;
        chamberedRound = "";
        magazines[] = {
            "Mag_Glock_15Rnd",
            "My_DF_Weapons_Pistols_Glock18C_17RndMag",
            "My_DF_Weapons_Pistols_Glock18C_25RndExtMag",
            "My_DF_Weapons_Pistols_Glock18C_33RndExtMag"
        };
        chamberableFrom[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
        };
        attachments[] = {
            "DF_pisg_Glock",
            "DF_barrel_G18",
            "pistolOptics",
            "DF_mount_Pistol",
            "pistolMuzzle",
            "pistolFlashlight",
            "DF_Pendant"
        };
        itemSize[] = { 3, 2 };
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1.1, 1.1, 0.5 };
        hiddenSelections[] = { "camo", "barrel", "pisg" };
        simpleHiddenSelections[] = {
            "barrel",
            "pisg"
        };
        class NoiseShoot
        {
            strength = 40;
            type = "shot";
        };
        modes[] = { "FullAuto", "SemiAuto" };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_Pistols_Glock17c_Shot_SoundSet", "Glock19_Tail_SoundSet", "Glock19_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Pistols_Glock17c_silencer_SoundSet", "Glock19_silencerTail_SoundSet", "Glock19_silencerInteriorTail_SoundSet" } };
            reloadTime = 0.1;
            recoil = "recoil_Glock";
            recoilProne = "recoil_Glock_prone";
            dispersion = 0.003;
            magazineSlot = "magazine";
        };
        class FullAuto: Mode_FullAuto
        {
            soundSetShot[] = { "My_DF_Weapons_Pistols_Glock18c_Shot_SoundSet", "Glock19_Tail_SoundSet", "Glock19_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Pistols_Glock18c_silencer_SoundSet", "Glock19_silencerTail_SoundSet", "Glock19_silencerInteriorTail_SoundSet" } };
            reloadTime = 0.055;
            recoil = "recoil_Glock";
            recoilProne = "recoil_Glock_prone";
            dispersion = 0.003;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoPistol
        {
            memoryPointCamera = "eye";
            discreteDistance[] = { 25 };
            discreteDistanceInitIndex = 0;
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 100;
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
            };
            class OnOverheating
            {
                maxOverheatingValue = 8;
                shotsToStartOverheating = 8;
                overheatingDecayInterval = 1;
                class SmokingBarrel1
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    positionOffset[] = { 0, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 1 };
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
        weaponStateAnim = "dz\anims\anm\player\reloads\Glock\w_Glock19_states.anm";
        class AnimationSources
        {
            class sup
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class ptoptic
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_Pistols_Glock18C: My_DF_Weapons_Pistols_Glock18C_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Pistols_Glock18C0";
        descriptionShort = "$STR_My_DF_Weapons_Pistols_Glock18C1";
        model = "\My_DF_Weapons_Pistols\Glock18C\Glock18C.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Pistols\Glock18C\data\Glock18C_co.paa",
            "My_DF_Weapons_Pistols\Glock18C\data\Glock18C_co.paa",
            "My_DF_Weapons_Pistols\Glock18C\data\pisg\Glock18C_pisg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Pistols\Glock18C\data\Glock18C.rvmat",
            "My_DF_Weapons_Pistols\Glock18C\data\Glock18C.rvmat",
            "My_DF_Weapons_Pistols\Glock18C\data\pisg\Glock18C_pisg.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 300;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Pistols\Glock18C\data\Glock18C.rvmat",
                                "My_DF_Weapons_Pistols\Glock18C\data\Glock18C.rvmat",
                                "My_DF_Weapons_Pistols\Glock18C\data\pisg\Glock18C_pisg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Pistols\Glock18C\data\Glock18C_worn.rvmat",
                                "My_DF_Weapons_Pistols\Glock18C\data\Glock18C_worn.rvmat",
                                "My_DF_Weapons_Pistols\Glock18C\data\pisg\Glock18C_pisg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Pistols\Glock18C\data\Glock18C_damage.rvmat",
                                "My_DF_Weapons_Pistols\Glock18C\data\Glock18C_damage.rvmat",
                                "My_DF_Weapons_Pistols\Glock18C\data\pisg\Glock18C_pisg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Pistols\Glock18C\data\Glock18C_damage.rvmat",
                                "My_DF_Weapons_Pistols\Glock18C\data\Glock18C_damage.rvmat",
                                "My_DF_Weapons_Pistols\Glock18C\data\pisg\Glock18C_pisg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Pistols\Glock18C\data\Glock18C_destruct.rvmat",
                                "My_DF_Weapons_Pistols\Glock18C\data\Glock18C_destruct.rvmat",
                                "My_DF_Weapons_Pistols\Glock18C\data\pisg\Glock18C_pisg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Pistols_Glock17C_Base: Pistol_Base
    {
        scope = 0;
        weight = 1000;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 1, 0.5, 10, 250, 4, 10 };
        WeaponLength = 0.21;
        ShoulderDistance = 0.4;
        ObstructionDistance = 0.431;
        barrelArmor = 1.5;
        initSpeedMultiplier = 1;
        chamberSize = 1;
        chamberedRound = "";
        magazines[] = {
            "Mag_Glock_15Rnd",
            "My_DF_Weapons_Pistols_Glock18C_17RndMag",
            "My_DF_Weapons_Pistols_Glock18C_25RndExtMag",
            "My_DF_Weapons_Pistols_Glock18C_33RndExtMag"
        };
        chamberableFrom[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
        };
        attachments[] = {
            "DF_pisg_Glock",
            "DF_barrel_G17",
            "pistolOptics",
            "DF_mount_Pistol",
            "pistolMuzzle",
            "pistolFlashlight",
            "DF_Pendant"
        };
        itemSize[] = { 3, 2 };
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1.1, 1.1, 0.5 };
        hiddenSelections[] = { "camo", "barrel", "pisg" };
        simpleHiddenSelections[] = {
            "barrel",
            "pisg"
        };
        class NoiseShoot
        {
            strength = 40;
            type = "shot";
        };
        modes[] = { "SemiAuto" };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_Pistols_Glock17c_Shot_SoundSet", "Glock19_Tail_SoundSet", "Glock19_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Pistols_Glock17c_silencer_SoundSet", "Glock19_silencerTail_SoundSet", "Glock19_silencerInteriorTail_SoundSet" } };
            reloadTime = 0.13;
            recoil = "recoil_Glock";
            recoilProne = "recoil_Glock_prone";
            dispersion = 0.003;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoPistol
        {
            memoryPointCamera = "eye";
            discreteDistance[] = { 25 };
            discreteDistanceInitIndex = 0;
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 100;
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
            };
            class OnOverheating
            {
                maxOverheatingValue = 8;
                shotsToStartOverheating = 8;
                overheatingDecayInterval = 1;
                class SmokingBarrel1
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    positionOffset[] = { 0, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 1 };
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
        weaponStateAnim = "dz\anims\anm\player\reloads\Glock\w_Glock19_states.anm";
        class AnimationSources
        {
            class ptoptic
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_Pistols_Glock17C: My_DF_Weapons_Pistols_Glock17C_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Pistols_Glock17C0";
        descriptionShort = "$STR_My_DF_Weapons_Pistols_Glock17C1";
        model = "\My_DF_Weapons_Pistols\Glock18C\Glock17C.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Pistols\Glock18C\data\Glock18C_co.paa",
            "My_DF_Weapons_Pistols\Glock18C\data\barrel\Glock17C_barrel_co.paa",
            "My_DF_Weapons_Pistols\Glock18C\data\pisg\Glock18C_pisg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Pistols\Glock18C\data\Glock18C.rvmat",
            "My_DF_Weapons_Pistols\Glock18C\data\barrel\Glock17C_barrel.rvmat",
            "My_DF_Weapons_Pistols\Glock18C\data\pisg\Glock18C_pisg.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 300;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Pistols\Glock18C\data\Glock18C.rvmat",
                                "My_DF_Weapons_Pistols\Glock18C\data\barrel\Glock17C_barrel.rvmat",
                                "My_DF_Weapons_Pistols\Glock18C\data\pisg\Glock18C_pisg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Pistols\Glock18C\data\Glock18C_worn.rvmat",
                                "My_DF_Weapons_Pistols\Glock18C\data\barrel\Glock17C_barrel_worn.rvmat",
                                "My_DF_Weapons_Pistols\Glock18C\data\pisg\Glock18C_pisg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Pistols\Glock18C\data\Glock18C_damage.rvmat",
                                "My_DF_Weapons_Pistols\Glock18C\data\barrel\Glock17C_barrel_damage.rvmat",
                                "My_DF_Weapons_Pistols\Glock18C\data\pisg\Glock18C_pisg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Pistols\Glock18C\data\Glock18C_damage.rvmat",
                                "My_DF_Weapons_Pistols\Glock18C\data\barrel\Glock17C_barrel_damage.rvmat",
                                "My_DF_Weapons_Pistols\Glock18C\data\pisg\Glock18C_pisg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Pistols\Glock18C\data\Glock18C_destruct.rvmat",
                                "My_DF_Weapons_Pistols\Glock18C\data\barrel\Glock17C_barrel_destruct.rvmat",
                                "My_DF_Weapons_Pistols\Glock18C\data\pisg\Glock18C_pisg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Pistols_M1911_Base: Pistol_Base
    {
        scope = 0;
        weight = 1100;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 1, 0.9, 10, 250, 4, 10 };
        ironsightsExcludingOptics[] = {
            "FNP45_MRDSOptic"
        };
        WeaponLength = 0.21;
        ShoulderDistance = 0.4;
        ObstructionDistance = 0.431;
        barrelArmor = 1.5;
        chamberSize = 1;
        chamberedRound = "";
        magazines[] = {
            "Mag_1911_7Rnd",
            "My_DF_Weapons_Pistols_M1911_7RndMag",
            "My_DF_Weapons_Pistols_M1911_11RndExtMag"
        };
        chamberableFrom[] = {
            "Ammo_45ACP",
            "My_DF_Weapons_Ammo_45ACP_AP",
            "My_DF_Weapons_Ammo_45ACP_FMJ",
            "My_DF_Weapons_Ammo_45ACP_HS",
            "My_DF_Weapons_Ammo_45ACP_JHP",
            "My_DF_Weapons_Ammo_45ACP_RIP"
        };
        attachments[] = {
            "DF_hammer_M1911",
            "DF_trigger_M1911",
            "DF_pisg_M1911",
            "DF_barrel_M1911",
            "pistolOptics",
            "DF_mount_M1911",
            "pistolMuzzle",
            "pistolFlashlight",
            "DF_Pendant"
        };
        itemSize[] = { 3, 2 };
        hiddenSelections[] = {
            "camo",
            "barrel",
            "pisg"
        };
        simpleHiddenSelections[] = {
            "trigger",
            "hammer2",
            "barrel",
            "pisg",
            "sight"
        };
        magazineSwitchTime = 0.24;
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1.3, 1.3, 0.6 };
        class NoiseShoot
        {
            strength = 40;
            type = "shot";
        };
        modes[] = {
            "SemiAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = { "My_DF_Weapons_Pistols_M1911_Shot_SoundSet", "Colt1911_Tail_SoundSet", "Colt1911_InteriorTail_SoundSet" };
            soundSetShotExt[] = { { "My_DF_Weapons_Pistols_M1911_silencer_SoundSet", "Colt1911_silencerTail_SoundSet", "Colt1911_silencerInteriorTail_SoundSet" } };
            reloadTime = 0.13;
            recoil = "recoil_1911";
            recoilProne = "recoil_1911_prone";
            dispersion = 0.0045;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoPistol
        {
            memoryPointCamera = "eye";
            discreteDistance[] = { 25 };
            discreteDistanceInitIndex = 0;
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 100;
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
            };
            class OnOverheating
            {
                maxOverheatingValue = 8;
                shotsToStartOverheating = 8;
                overheatingDecayInterval = 1;
                class SmokingBarrel1
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    positionOffset[] = { 0, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 1 };
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
        weaponStateAnim = "dz\anims\anm\player\reloads\1911\w_1911_states.anm";
        class AnimationSources
        {
            class ptoptic
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_Pistols_M1911: My_DF_Weapons_Pistols_M1911_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Pistols_M19110";
        descriptionShort = "$STR_My_DF_Weapons_Pistols_M19111";
        model = "\My_DF_Weapons_Pistols\M1911\M1911.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Pistols\M1911\data\M1911_co.paa",
            "My_DF_Weapons_Pistols\M1911\data\barrel\M1911_barrel_co.paa",
            "My_DF_Weapons_Pistols\M1911\data\pisg\M1911_pisg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Pistols\M1911\data\M1911.rvmat",
            "My_DF_Weapons_Pistols\M1911\data\barrel\M1911_barrel.rvmat",
            "My_DF_Weapons_Pistols\M1911\data\pisg\M1911_pisg.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 300;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Pistols\M1911\data\M1911.rvmat",
                                "My_DF_Weapons_Pistols\M1911\data\barrel\M1911_barrel.rvmat",
                                "My_DF_Weapons_Pistols\M1911\data\pisg\M1911_pisg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Pistols\M1911\data\M1911_worn.rvmat",
                                "My_DF_Weapons_Pistols\M1911\data\barrel\M1911_barrel_worn.rvmat",
                                "My_DF_Weapons_Pistols\M1911\data\pisg\M1911_pisg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Pistols\M1911\data\M1911_damage.rvmat",
                                "My_DF_Weapons_Pistols\M1911\data\barrel\M1911_barrel_damage.rvmat",
                                "My_DF_Weapons_Pistols\M1911\data\pisg\M1911_pisg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Pistols\M1911\data\M1911_damage.rvmat",
                                "My_DF_Weapons_Pistols\M1911\data\barrel\M1911_barrel_damage.rvmat",
                                "My_DF_Weapons_Pistols\M1911\data\pisg\M1911_pisg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Pistols\M1911\data\M1911_destruct.rvmat",
                                "My_DF_Weapons_Pistols\M1911\data\barrel\M1911_barrel_destruct.rvmat",
                                "My_DF_Weapons_Pistols\M1911\data\pisg\M1911_pisg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Pistols_QSZ92G_Base: Pistol_Base
    {
        weight = 950;
        absorbency = 0;
        repairableWithKits[] = { 1 };
        repairCosts[] = { 25 };
        PPDOFProperties[] = { 1, 0.5, 10, 250, 4, 10 };
        ironsightsExcludingOptics[] = {
            "FNP45_MRDSOptic"
        };
        WeaponLength = 0.22;
        ShoulderDistance = 0.40000001;
        barrelArmor = 1.7;
        chamberSize = 1;
        chamberedRound = "";
        magazines[] = {
            "My_DF_Weapons_Pistols_QSZ92G_15RndMag"
        };
        chamberableFrom[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
        };
        attachments[] = {
            "DF_barrel_QSZ92G",
            "pistolOptics",
            "pistolMuzzle",
            "pistolFlashlight",
            "DF_Pendant"
        };
        itemSize[] = { 3, 2 };
        hiddenSelections[] = {
            "camo",
            "barrel"
        };
        simpleHiddenSelections[] = {
            "barrel"
        };
        ejectType = 1;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1.3, 1.3, 0.80000001 };
        class NoiseShoot
        {
            strength = 40;
            type = "shot";
        };
        modes[] = {
            "SemiAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[] = {
                "My_DF_Weapons_Pistols_QSZ92G_Shot_SoundSet",
                "FNX45_Tail_SoundSet",
                "FNX45_InteriorTail_SoundSet"
            };
            soundSetShotExt[] = {
                {
                    "My_DF_Weapons_Pistols_QSZ92G_silencer_SoundSet",
                    "FNX45_silencerTail_SoundSet",
                    "FNX45_silencerInteriorTail_SoundSet"
                }
            };
            reloadTime = 0.13;
            recoil = "recoil_fnx";
            recoilProne = "recoil_fnx_prone";
            dispersion = 0.003;
            magazineSlot = "magazine";
        };
        class OpticsInfo: OpticsInfoPistol
        {
            memoryPointCamera = "eye";
            discreteDistance[] = { 25 };
            discreteDistanceInitIndex = 0;
            modelOptics = "-";
            distanceZoomMin = 100;
            distanceZoomMax = 100;
        };
        weaponStateAnim = "dz\anims\anm\player\reloads\FNP45\w_fnp45_states.anm";
        boneRemap[] = {
            "bolt",
            "Weapon_Bolt",
            "magazine",
            "Weapon_Magazine",
            "bullet",
            "Weapon_Bullet",
            "trigger",
            "Weapon_Trigger",
            "hammer",
            "Weapon_Bone_01"
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
            };
            class OnOverheating
            {
                maxOverheatingValue = 8;
                shotsToStartOverheating = 8;
                overheatingDecayInterval = 1;
                class SmokingBarrel1
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    positionOffset[] = { 0, 0, 0 };
                    onlyWithinRainLimits[] = { 0, 1 };
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
            class ptoptic
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_Pistols_QSZ92G: My_DF_Weapons_Pistols_QSZ92G_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Pistols_QSZ92G0";
        descriptionShort = "$STR_My_DF_Weapons_Pistols_QSZ92G1";
        model = "\My_DF_Weapons_Pistols\QSZ92G\QSZ92G.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Pistols\QSZ92G\data\QSZ92G_co.paa",
            "My_DF_Weapons_Pistols\QSZ92G\data\barrel\QSZ92G_barrel_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Pistols\QSZ92G\data\QSZ92G.rvmat",
            "My_DF_Weapons_Pistols\QSZ92G\data\barrel\QSZ92G_barrel.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 300;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Pistols\QSZ92G\data\QSZ92G.rvmat",
                                "My_DF_Weapons_Pistols\QSZ92G\data\barrel\QSZ92G_barrel.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Pistols\QSZ92G\data\QSZ92G_worn.rvmat",
                                "My_DF_Weapons_Pistols\QSZ92G\data\barrel\QSZ92G_barrel_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Pistols\QSZ92G\data\QSZ92G_damage.rvmat",
                                "My_DF_Weapons_Pistols\QSZ92G\data\barrel\QSZ92G_barrel_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Pistols\QSZ92G\data\QSZ92G_damage.rvmat",
                                "My_DF_Weapons_Pistols\QSZ92G\data\barrel\QSZ92G_barrel_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Pistols\QSZ92G\data\QSZ92G_destruct.rvmat",
                                "My_DF_Weapons_Pistols\QSZ92G\data\barrel\QSZ92G_barrel_destruct.rvmat"
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
    class My_DF_Weapons_Pistols_93R_12RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Pistols_93R_12RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Pistols_93R_12RndMag1";
        model = "\My_DF_Weapons_Pistols\93R\Mag\12RndMag\93R_12RndMag.p3d";
        weight = 150;
        weightPerQuantityUnit = 8;
        itemSize[] = { 1, 2 };
        ammo = "Bullet_9x19";
        ammoItems[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
        };
        count = 12;
        tracersEvery = 0;
        mass = 10;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Pistols\93R\Mag\12RndMag\data\93R_12RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Pistols\93R\Mag\12RndMag\data\93R_12RndMag.rvmat"
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
                                "My_DF_Weapons_Pistols\93R\Mag\12RndMag\data\93R_12RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Pistols\93R\Mag\12RndMag\data\93R_12RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Pistols\93R\Mag\12RndMag\data\93R_12RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Pistols\93R\Mag\12RndMag\data\93R_12RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Pistols\93R\Mag\12RndMag\data\93R_12RndMag_destruct.rvmat"
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
        };
    };
    class My_DF_Weapons_Pistols_93R_18RndExtMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Pistols_93R_18RndExtMag0";
        descriptionShort = "$STR_My_DF_Weapons_Pistols_93R_18RndExtMag1";
        model = "\My_DF_Weapons_Pistols\93R\Mag\18RndExtMag\93R_18RndExtMag.p3d";
        weight = 250;
        weightPerQuantityUnit = 8;
        itemSize[] = { 1, 3 };
        ammo = "Bullet_9x19";
        ammoItems[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
        };
        count = 18;
        tracersEvery = 0;
        mass = 10;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Pistols\93R\Mag\18RndExtMag\data\93R_18RndExtMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Pistols\93R\Mag\18RndExtMag\data\93R_18RndExtMag.rvmat"
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
                                "My_DF_Weapons_Pistols\93R\Mag\18RndExtMag\data\93R_18RndExtMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Pistols\93R\Mag\18RndExtMag\data\93R_18RndExtMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Pistols\93R\Mag\18RndExtMag\data\93R_18RndExtMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Pistols\93R\Mag\18RndExtMag\data\93R_18RndExtMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Pistols\93R\Mag\18RndExtMag\data\93R_18RndExtMag_destruct.rvmat"
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
        };
    };
    class My_DF_Weapons_Pistols_93R_24RndExtMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Pistols_93R_24RndExtMag0";
        descriptionShort = "$STR_My_DF_Weapons_Pistols_93R_24RndExtMag1";
        model = "\My_DF_Weapons_Pistols\93R\Mag\24RndExtMag\93R_24RndExtMag.p3d";
        weight = 300;
        weightPerQuantityUnit = 8;
        itemSize[] = { 1, 3 };
        ammo = "Bullet_9x19";
        ammoItems[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
        };
        count = 24;
        tracersEvery = 0;
        mass = 10;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Pistols\93R\Mag\18RndExtMag\data\93R_18RndExtMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Pistols\93R\Mag\18RndExtMag\data\93R_18RndExtMag.rvmat"
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
                                "My_DF_Weapons_Pistols\93R\Mag\18RndExtMag\data\93R_18RndExtMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Pistols\93R\Mag\18RndExtMag\data\93R_18RndExtMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Pistols\93R\Mag\18RndExtMag\data\93R_18RndExtMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Pistols\93R\Mag\18RndExtMag\data\93R_18RndExtMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Pistols\93R\Mag\18RndExtMag\data\93R_18RndExtMag_destruct.rvmat"
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
        };
    };
    class My_DF_Weapons_Pistols_Deagle_13RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Pistols_Deagle_13RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Pistols_Deagle_13RndMag1";
        model = "\My_DF_Weapons_Pistols\Deagle\Mag\13RndMag\Deagle_13RndMag.p3d";
        weight = 100;
        weightPerQuantityUnit = 8;
        itemSize[] = { 1, 2 };
        ammo = "Bullet_DF_50AE_FMJ";
        ammoItems[] = {
            "Ammo_357",
            "My_DF_Weapons_Ammo_357Magnum_FMJ",
            "My_DF_Weapons_Ammo_357Magnum_Shot",
            "My_DF_Weapons_Ammo_357Magnum_JHP",
            "My_DF_Weapons_Ammo_50AE_FMJ",
            "My_DF_Weapons_Ammo_50AE_HP",
            "My_DF_Weapons_Ammo_50AE_JHP"
        };
        count = 13;
        tracersEvery = 0;
        mass = 10;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Pistols\Deagle\Mag\13RndMag\data\Deagle_13RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Pistols\Deagle\Mag\13RndMag\data\Deagle_13RndMag.rvmat"
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
                                "My_DF_Weapons_Pistols\Deagle\Mag\13RndMag\data\Deagle_13RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Pistols\Deagle\Mag\13RndMag\data\Deagle_13RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Pistols\Deagle\Mag\13RndMag\data\Deagle_13RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Pistols\Deagle\Mag\13RndMag\data\Deagle_13RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Pistols\Deagle\Mag\13RndMag\data\Deagle_13RndMag_destruct.rvmat"
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
    class My_DF_Weapons_Pistols_Deagle_7RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Pistols_Deagle_7RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Pistols_Deagle_7RndMag1";
        model = "\My_DF_Weapons_Pistols\Deagle\Mag\7RndMag\Deagle_7RndMag.p3d";
        weight = 70;
        weightPerQuantityUnit = 8;
        itemSize[] = { 1, 2 };
        ammo = "Bullet_DF_50AE_FMJ";
        ammoItems[] = {
            "Ammo_357",
            "My_DF_Weapons_Ammo_357Magnum_FMJ",
            "My_DF_Weapons_Ammo_357Magnum_Shot",
            "My_DF_Weapons_Ammo_357Magnum_JHP",
            "My_DF_Weapons_Ammo_50AE_FMJ",
            "My_DF_Weapons_Ammo_50AE_HP",
            "My_DF_Weapons_Ammo_50AE_JHP"
        };
        count = 7;
        tracersEvery = 0;
        mass = 10;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Pistols\Deagle\Mag\7RndMag\data\Deagle_7RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Pistols\Deagle\Mag\7RndMag\data\Deagle_7RndMag.rvmat"
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
                                "My_DF_Weapons_Pistols\Deagle\Mag\7RndMag\data\Deagle_7RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Pistols\Deagle\Mag\7RndMag\data\Deagle_7RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Pistols\Deagle\Mag\7RndMag\data\Deagle_7RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Pistols\Deagle\Mag\7RndMag\data\Deagle_7RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Pistols\Deagle\Mag\7RndMag\data\Deagle_7RndMag_destruct.rvmat"
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
    class My_DF_Weapons_Pistols_Glock18C_17RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Pistols_Glock18C_17RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Pistols_Glock18C_17RndMag1";
        model = "\My_DF_Weapons_Pistols\Glock18C\Mag\17RndMag\Glock18C_17RndMag.p3d";
        weight = 175;
        weightPerQuantityUnit = 8;
        itemSize[] = { 1, 2 };
        ammo = "Bullet_9x19";
        ammoItems[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
        };
        count = 17;
        tracersEvery = 0;
        mass = 10;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Pistols\Glock18C\Mag\17RndMag\data\Glock18C_17RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Pistols\Glock18C\Mag\17RndMag\data\Glock18C_17RndMag.rvmat"
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
                                "My_DF_Weapons_Pistols\Glock18C\Mag\17RndMag\data\Glock18C_17RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Pistols\Glock18C\Mag\17RndMag\data\Glock18C_17RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Pistols\Glock18C\Mag\17RndMag\data\Glock18C_17RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Pistols\Glock18C\Mag\17RndMag\data\Glock18C_17RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Pistols\Glock18C\Mag\17RndMag\data\Glock18C_17RndMag_destruct.rvmat"
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
    class My_DF_Weapons_Pistols_Glock18C_25RndExtMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Pistols_Glock18C_25RndExtMag0";
        descriptionShort = "$STR_My_DF_Weapons_Pistols_Glock18C_25RndExtMag1";
        model = "\My_DF_Weapons_Pistols\Glock18C\Mag\25RndExtMag\Glock18C_25RndExtMag.p3d";
        weight = 250;
        weightPerQuantityUnit = 8;
        itemSize[] = { 1, 3 };
        ammo = "Bullet_9x19";
        ammoItems[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
        };
        count = 25;
        tracersEvery = 0;
        mass = 10;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Pistols\Glock18C\Mag\25RndExtMag\data\Glock18C_25RndExtMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Pistols\Glock18C\Mag\25RndExtMag\data\Glock18C_25RndExtMag.rvmat"
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
                                "My_DF_Weapons_Pistols\Glock18C\Mag\25RndExtMag\data\Glock18C_25RndExtMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Pistols\Glock18C\Mag\25RndExtMag\data\Glock18C_25RndExtMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Pistols\Glock18C\Mag\25RndExtMag\data\Glock18C_25RndExtMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Pistols\Glock18C\Mag\25RndExtMag\data\Glock18C_25RndExtMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Pistols\Glock18C\Mag\25RndExtMag\data\Glock18C_25RndExtMag_destruct.rvmat"
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
    class My_DF_Weapons_Pistols_Glock18C_33RndExtMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Pistols_Glock18C_33RndExtMag0";
        descriptionShort = "$STR_My_DF_Weapons_Pistols_Glock18C_33RndExtMag1";
        model = "\My_DF_Weapons_Pistols\Glock18C\Mag\33RndExtMag\Glock18C_33RndExtMag.p3d";
        weight = 350;
        weightPerQuantityUnit = 8;
        itemSize[] = { 1, 3 };
        ammo = "Bullet_9x19";
        ammoItems[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
        };
        count = 33;
        tracersEvery = 0;
        mass = 10;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Pistols\Glock18C\Mag\25RndExtMag\data\Glock18C_25RndExtMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Pistols\Glock18C\Mag\25RndExtMag\data\Glock18C_25RndExtMag.rvmat"
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
                                "My_DF_Weapons_Pistols\Glock18C\Mag\25RndExtMag\data\Glock18C_25RndExtMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Pistols\Glock18C\Mag\25RndExtMag\data\Glock18C_25RndExtMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Pistols\Glock18C\Mag\25RndExtMag\data\Glock18C_25RndExtMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Pistols\Glock18C\Mag\25RndExtMag\data\Glock18C_25RndExtMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Pistols\Glock18C\Mag\25RndExtMag\data\Glock18C_25RndExtMag_destruct.rvmat"
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
    class My_DF_Weapons_Pistols_M1911_11RndExtMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Pistols_M1911_11RndExtMag0";
        descriptionShort = "$STR_My_DF_Weapons_Pistols_M1911_11RndExtMag1";
        model = "\My_DF_Weapons_Pistols\M1911\Mag\11RndExtMag\M1911_11RndExtMag.p3d";
        weight = 100;
        weightPerQuantityUnit = 12;
        itemSize[] = { 1, 2 };
        ammo = "Bullet_45ACP";
        ammoItems[] = {
            "Ammo_45ACP",
            "My_DF_Weapons_Ammo_45ACP_AP",
            "My_DF_Weapons_Ammo_45ACP_FMJ",
            "My_DF_Weapons_Ammo_45ACP_HS",
            "My_DF_Weapons_Ammo_45ACP_JHP",
            "My_DF_Weapons_Ammo_45ACP_RIP"
        };
        count = 11;
        tracersEvery = 0;
        mass = 10;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Pistols\M1911\Mag\11RndExtMag\data\M1911_11RndExtMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Pistols\M1911\Mag\11RndExtMag\data\M1911_11RndExtMag.rvmat"
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
                                "My_DF_Weapons_Pistols\M1911\Mag\11RndExtMag\data\M1911_11RndExtMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Pistols\M1911\Mag\11RndExtMag\data\M1911_11RndExtMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Pistols\M1911\Mag\11RndExtMag\data\M1911_11RndExtMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Pistols\M1911\Mag\11RndExtMag\data\M1911_11RndExtMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Pistols\M1911\Mag\11RndExtMag\data\M1911_11RndExtMag_destruct.rvmat"
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
    class My_DF_Weapons_Pistols_M1911_7RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Pistols_M1911_7RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Pistols_M1911_7RndMag1";
        model = "\My_DF_Weapons_Pistols\M1911\Mag\7RndMag\M1911_7RndMag.p3d";
        weight = 70;
        weightPerQuantityUnit = 12;
        itemSize[] = { 1, 2 };
        ammo = "Bullet_45ACP";
        ammoItems[] = {
            "Ammo_45ACP",
            "My_DF_Weapons_Ammo_45ACP_AP",
            "My_DF_Weapons_Ammo_45ACP_FMJ",
            "My_DF_Weapons_Ammo_45ACP_HS",
            "My_DF_Weapons_Ammo_45ACP_JHP",
            "My_DF_Weapons_Ammo_45ACP_RIP"
        };
        count = 7;
        tracersEvery = 0;
        mass = 10;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Pistols\M1911\Mag\7RndMag\data\M1911_7RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Pistols\M1911\Mag\7RndMag\data\M1911_7RndMag.rvmat"
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
                                "My_DF_Weapons_Pistols\M1911\Mag\7RndMag\data\M1911_7RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Pistols\M1911\Mag\7RndMag\data\M1911_7RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Pistols\M1911\Mag\7RndMag\data\M1911_7RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Pistols\M1911\Mag\7RndMag\data\M1911_7RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Pistols\M1911\Mag\7RndMag\data\M1911_7RndMag_destruct.rvmat"
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
    class My_DF_Weapons_Pistols_QSZ92G_15RndMag: My_DF_Weapons_Magazine_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Pistols_QSZ92G_15RndMag0";
        descriptionShort = "$STR_My_DF_Weapons_Pistols_QSZ92G_15RndMag1";
        model = "\My_DF_Weapons_Pistols\QSZ92G\Mag\15RndMag\QSZ92G_15RndMag.p3d";
        weight = 150;
        weightPerQuantityUnit = 12;
        itemSize[] = { 1, 2 };
        ammo = "Bullet_9x19";
        ammoItems[] = {
            "Ammo_9x19",
            "My_DF_Weapons_Ammo_9x19_AP63",
            "My_DF_Weapons_Ammo_9x19_PBP",
            "My_DF_Weapons_Ammo_9x19_PSO",
            "My_DF_Weapons_Ammo_9x19_Pst",
            "My_DF_Weapons_Ammo_9x19_RIP"
        };
        count = 15;
        tracersEvery = 0;
        mass = 10;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Pistols\QSZ92G\Mag\15RndMag\data\QSZ92G_15RndMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Pistols\QSZ92G\Mag\15RndMag\data\QSZ92G_15RndMag.rvmat"
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
                                "My_DF_Weapons_Pistols\QSZ92G\Mag\15RndMag\data\QSZ92G_15RndMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Pistols\QSZ92G\Mag\15RndMag\data\QSZ92G_15RndMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Pistols\QSZ92G\Mag\15RndMag\data\QSZ92G_15RndMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Pistols\QSZ92G\Mag\15RndMag\data\QSZ92G_15RndMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Pistols\QSZ92G\Mag\15RndMag\data\QSZ92G_15RndMag_destruct.rvmat"
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
};