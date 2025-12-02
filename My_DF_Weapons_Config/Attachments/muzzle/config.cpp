class CfgPatches
{
	class My_DF_Weapons_Attachments_muzzle_config
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"My_DF_Weapons_Attachments_muzzle"
		};
	};
};
class cfgVehicles
{
    class My_DF_Weapons_Attachments_muzzle_Base;
    class My_DF_Weapons_Attachments_muzzle_762SL4: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_762SL40";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_762SL41";
        model = "\My_DF_Weapons_Attachments\muzzle\762SL4\762SL4.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\762SL4\data\762SL4_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\762SL4\data\762SL4.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.1;
        barrelArmor = 3000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0002;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                    positionOffset[] = { 0, -0.050000001, 0 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\762SL4\data\762SL4.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\762SL4\data\762SL4_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\762SL4\data\762SL4_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\762SL4\data\762SL4_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\762SL4\data\762SL4_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_AK74: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_AK740";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_AK741";
        model = "\My_DF_Weapons_Attachments\muzzle\AK74\AK74.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\AK74\data\AK74_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\AK74\data\AK74.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.15;
        barrelArmor = 3500;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                    positionOffset[] = { 0, -0.050000001, 0 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\AK74\data\AK74.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\AK74\data\AK74_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\AK74\data\AK74_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\AK74\data\AK74_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\AK74\data\AK74_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_AKS: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_AKS0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_AKS1";
        model = "\My_DF_Weapons_Attachments\muzzle\AKS\AKS.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\AKS\data\AKS_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\AKS\data\AK74.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.15;
        barrelArmor = 3500;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                    positionOffset[] = { 0, -0.050000001, 0 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\AKS\data\AKS.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\AKS\data\AKS_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\AKS\data\AKS_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\AKS\data\AKS_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\AKS\data\AKS_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_AMTBig: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_AMTBig0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_AMTBig1";
        model = "\My_DF_Weapons_Attachments\muzzle\AMTBig\AMTBig.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\AMTBig\data\AMTBig_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\AMTBig\data\AMTBig.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.15;
        barrelArmor = 4000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                    positionOffset[] = { 0, -0.050000001, 0 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\AMTBig\data\AMTBig.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\AMTBig\data\AMTBig_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\AMTBig\data\AMTBig_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\AMTBig\data\AMTBig_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\AMTBig\data\AMTBig_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_ARCompensator: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_ARCompensator0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_ARCompensator1";
        model = "\My_DF_Weapons_Attachments\muzzle\ARCompensator\ARCompensator.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\ARCompensator\data\ARCompensator_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\ARCompensator\data\ARCompensator.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.1;
        barrelArmor = 4000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0005;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                    positionOffset[] = { 0, -0.050000001, 0 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\ARCompensator\data\ARCompensator.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\ARCompensator\data\ARCompensator_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\ARCompensator\data\ARCompensator_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\ARCompensator\data\ARCompensator_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\ARCompensator\data\ARCompensator_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_Ash12: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_Ash120";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_Ash121";
        model = "\My_DF_Weapons_Attachments\muzzle\Ash12\Ash12.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\Ash12\data\Ash12_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\Ash12\data\Ash12.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.1;
        barrelArmor = 5000;
        inventorySlot[] = {
            "DF_muzzle_Ash12"
        };
        dispersionModifier = -0.0008;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.75, 0.75, 0.75 };
        swayModifier[] = { 1.2, 1.2, 1.2 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                    positionOffset[] = { 0, -0.050000001, 0 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Ash12\data\Ash12.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Ash12\data\Ash12_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Ash12\data\Ash12_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Ash12\data\Ash12_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Ash12\data\Ash12_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_Ash12_2: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_Ash12_20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_Ash12_21";
        model = "\My_DF_Weapons_Attachments\muzzle\Ash12_2\Ash12_2.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\Ash12_2\data\Ash12_2_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\Ash12_2\data\Ash12_2.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.15;
        barrelArmor = 5000;
        inventorySlot[] = {
            "DF_muzzle_Ash12"
        };
        dispersionModifier = -0.0006;
        dispersionCondition = "true";
        noiseShootModifier = -0.95;
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 1.1, 1.1, 1.1 };
        soundIndex = 1;
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 3;
                maxOverheatingValue = 10;
                overheatingDecayInterval = 1;
                class SmokeTrail
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Ash12_2\data\Ash12_2.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Ash12_2\data\Ash12_2_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Ash12_2\data\Ash12_2_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Ash12_2\data\Ash12_2_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Ash12_2\data\Ash12_2_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_Break: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_Break0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_Break1";
        model = "\My_DF_Weapons_Attachments\muzzle\Break\Break.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\Break\data\Break_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\Break\data\Break.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.15;
        barrelArmor = 4000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                    positionOffset[] = { 0, -0.050000001, 0 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Break\data\Break.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Break\data\Break_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Break\data\Break_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Break\data\Break_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Break\data\Break_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_car15: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_car150";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_car151";
        model = "\My_DF_Weapons_Attachments\muzzle\car15\car15.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\car15\data\car15_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\car15\data\car15.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.2;
        barrelArmor = 3500;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = -0.9;
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 1.05, 1.05, 1.05 };
        soundIndex = 1;
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 3;
                maxOverheatingValue = 10;
                overheatingDecayInterval = 1;
                class SmokeTrail
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\car15\data\car15.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\car15\data\car15_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\car15\data\car15_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\car15\data\car15_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\car15\data\car15_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_Citori725: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_Citori7250";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_Citori7251";
        model = "\My_DF_Weapons_Attachments\muzzle\Citori725\Citori725.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\Citori725\data\Citori725_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\Citori725\data\Citori725.rvmat"
        };
        itemSize[] = { 3, 1 };
        itemModelLength = 0.3;
        barrelArmor = 4000;
        inventorySlot[] = {
            "DF_muzzle_Citori725"
        };
        dispersionModifier = -0.0015;
        dispersionCondition = "true";
        noiseShootModifier = -0.95;
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        soundIndex = 1;
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 2;
                maxOverheatingValue = 10;
                overheatingDecayInterval = 1;
                class SmokingBarrel
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\Citori725.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\Citori725_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\Citori725_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\Citori725_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Citori725\data\Citori725_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_Common1: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_Common10";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_Common11";
        model = "\My_DF_Weapons_Attachments\muzzle\Common1\Common1.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\Common1\data\Common1_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\Common1\data\Common1.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.1;
        barrelArmor = 2000;
        inventorySlot[] = {
            "pistolMuzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Common1\data\Common1.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Common1\data\Common1_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Common1\data\Common1_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Common1\data\Common1_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Common1\data\Common1_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_Common1_2: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_Common1_20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_Common1_21";
        model = "\My_DF_Weapons_Attachments\muzzle\Common1_2\Common1_2.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\Common1_2\data\Common1_2_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\Common1_2\data\Common1_2.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.2;
        barrelArmor = 3000;
        inventorySlot[] = {
            "pistolMuzzle"
        };
        dispersionModifier = -0.0002;
        dispersionCondition = "true";
        noiseShootModifier = -0.8;
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        soundIndex = 1;
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 2;
                maxOverheatingValue = 10;
                overheatingDecayInterval = 1;
                class SmokingBarrel
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Common1_2\data\Common1_2.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Common1_2\data\Common1_2_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Common1_2\data\Common1_2_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Common1_2\data\Common1_2_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Common1_2\data\Common1_2_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_Common1_3: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_Common1_30";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_Common1_31";
        model = "\My_DF_Weapons_Attachments\muzzle\Common1_3\Common1_3.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\Common1_3\data\Common1_3_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\Common1_3\data\Common1_3.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.15;
        barrelArmor = 3000;
        inventorySlot[] = {
            "DF_muzzleShotgun"
        };
        dispersionModifier = -0.003;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Common1_3\data\Common1_3.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Common1_3\data\Common1_3_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Common1_3\data\Common1_3_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Common1_3\data\Common1_3_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Common1_3\data\Common1_3_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_Common1_4: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_Common1_40";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_Common1_41";
        model = "\My_DF_Weapons_Attachments\muzzle\Common1_4\Common1_4.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\Common1_4\data\Common1_4_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\Common1_4\data\Common1_4.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.25;
        barrelArmor = 3000;
        inventorySlot[] = {
            "DF_muzzleShotgun"
        };
        dispersionModifier = -0.0004;
        dispersionCondition = "true";
        noiseShootModifier = -0.7;
        soundIndex = 1;
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 1, 1, 1 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 1;
                maxOverheatingValue = 15;
                overheatingDecayInterval = 1;
                class SmokeTrail
                {
                    overrideParticle = "smoking_barrel_small";
                    overrideDirectionVector[] = { 0, 180, 180 };
                    onlyWithinOverheatLimits[] = { 0, 0.69999999 };
                };
                class SmokeHot
                {
                    overrideParticle = "smoking_barrel_heavy";
                    onlyWithinOverheatLimits[] = { 0.69999999, 2 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Common1_4\data\Common1_4.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Common1_4\data\Common1_4_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Common1_4\data\Common1_4_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Common1_4\data\Common1_4_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Common1_4\data\Common1_4_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_CSLR17: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_CSLR170";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_CSLR171";
        model = "\My_DF_Weapons_Attachments\muzzle\CSLR17\CSLR17.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\CSLR17\data\CSLR17_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\CSLR17\data\CSLR17.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.15;
        barrelArmor = 3500;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0005;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                    positionOffset[] = { 0, -0.050000001, 0 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\CSLR17\data\CSLR17.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\CSLR17\data\CSLR17_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\CSLR17\data\CSLR17_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\CSLR17\data\CSLR17_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\CSLR17\data\CSLR17_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_DTK2: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_DTK20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_DTK21";
        model = "\My_DF_Weapons_Attachments\muzzle\DTK2\DTK2.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\DTK2\data\DTK2_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\DTK2\data\DTK2.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.1;
        barrelArmor = 3000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.75, 0.75, 0.75 };
        swayModifier[] = { 1.1, 1.1, 1.1 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\DTK2\data\DTK2.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\DTK2\data\DTK2_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\DTK2\data\DTK2_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\DTK2\data\DTK2_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\DTK2\data\DTK2_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_FNAttenuator: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_FNAttenuator0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_FNAttenuator1";
        model = "\My_DF_Weapons_Attachments\muzzle\FNAttenuator\FNAttenuator.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\FNAttenuator\data\FNAttenuator_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\FNAttenuator\data\FNAttenuator.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.25;
        barrelArmor = 3500;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0004;
        dispersionCondition = "true";
        noiseShootModifier = -0.93;
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        soundIndex = 1;
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 3;
                maxOverheatingValue = 10;
                overheatingDecayInterval = 1;
                class SmokeTrail
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\FNAttenuator\data\FNAttenuator.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\FNAttenuator\data\FNAttenuator_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\FNAttenuator\data\FNAttenuator_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\FNAttenuator\data\FNAttenuator_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\FNAttenuator\data\FNAttenuator_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_Hide_muzzle: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "...";
        descriptionShort = "...";
        model = "\My_DF_Weapons_Attachments\muzzle\Hide_muzzle\Hide_muzzle.p3d";
        itemSize[] = { 1, 1 };
        itemModelLength = 0.1;
        barrelArmor = 10000;
        inventorySlot[] = {
            "DF_muzzle_Hide"
        };
        dispersionModifier = -0.0005;
        dispersionCondition = "true";
        noiseShootModifier = -0.95;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        soundIndex = 1;
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 3;
                maxOverheatingValue = 10;
                overheatingDecayInterval = 1;
                class SmokeTrail
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
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
                                ""
                            }
                        },
                        {
                            0.69999999,
                            {
                                ""
                            }
                        },
                        {
                            0.5,
                            {
                                ""
                            }
                        },
                        {
                            0.30000001,
                            {
                                ""
                            }
                        },
                        {
                            0,
                            {
                                ""
                            }
                        }
                    };
                };
            };
        };
    };
    class Inventory_Base;
    class My_DF_Weapons_Attachments_muzzle_Hive: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_Hive0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_Hive1";
        model = "\My_DF_Weapons_Attachments\muzzle\Hive\Hive.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\Hive\data\Hive_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\Hive\data\Hive.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.3;
        barrelArmor = 4000;
        attachments[] = {
            "DF_muzzle_Hive"
        };
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0005;
        dispersionCondition = "true";
        noiseShootModifier = -0.99;
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        soundIndex = 1;
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 3;
                maxOverheatingValue = 10;
                overheatingDecayInterval = 1;
                class SmokeTrail
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Hive\data\Hive.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Hive\data\Hive_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Hive\data\Hive_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Hive\data\Hive_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Hive\data\Hive_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_Hive_HeatShield: Inventory_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_Hive_HeatShield0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_Hive_HeatShield1";
        model = "\My_DF_Weapons_Attachments\muzzle\Hive\Hive_HeatShield.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\Hive\data\Hive_HeatShield_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\Hive\data\Hive_HeatShield.rvmat"
        };
        itemSize[] = { 2, 1 };
        inventorySlot[] = {
            "DF_muzzle_Hive"
        };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 1.05, 1.05, 1.05 };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Hive\data\Hive_HeatShield.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Hive\data\Hive_HeatShield_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Hive\data\Hive_HeatShield_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Hive\data\Hive_HeatShield_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Hive\data\Hive_HeatShield_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_HK437: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_HK4370";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_HK4371";
        model = "\My_DF_Weapons_Attachments\muzzle\HK437\HK437.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\HK437\data\HK437_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\HK437\data\HK437.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.11;
        barrelArmor = 2500;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                    positionOffset[] = { 0, -0.050000001, 0 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\HK437\data\HK437.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\HK437\data\HK437_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\HK437\data\HK437_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\HK437\data\HK437_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\HK437\data\HK437_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_HK437Silencer: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_HK437Silencer0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_HK437Silencer1";
        model = "\My_DF_Weapons_Attachments\muzzle\HK437Silencer\HK437Silencer.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\HK437Silencer\data\HK437Silencer_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\HK437Silencer\data\HK437Silencer.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.2;
        barrelArmor = 3000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = -0.9;
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        soundIndex = 1;
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 3;
                maxOverheatingValue = 10;
                overheatingDecayInterval = 1;
                class SmokeTrail
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\HK437Silencer\data\HK437Silencer.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\HK437Silencer\data\HK437Silencer_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\HK437Silencer\data\HK437Silencer_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\HK437Silencer\data\HK437Silencer_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\HK437Silencer\data\HK437Silencer_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_HK_Noveske: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_HK_Noveske0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_HK_Noveske1";
        model = "\My_DF_Weapons_Attachments\muzzle\HK_Noveske\HK_Noveske.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\HK_Noveske\data\HK_Noveske_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\HK_Noveske\data\HK_Noveske.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.15;
        barrelArmor = 3000;
        inventorySlot[] = {
            "DF_muzzleShotgun"
        };
        dispersionModifier = -0.0015;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                    positionOffset[] = { 0, -0.050000001, 0 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\HK_Noveske\data\HK_Noveske.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\HK_Noveske\data\HK_Noveske_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\HK_Noveske\data\HK_Noveske_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\HK_Noveske\data\HK_Noveske_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\HK_Noveske\data\HK_Noveske_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_KC17_muzzle: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_KC17_muzzle0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_KC17_muzzle1";
        model = "\My_DF_Weapons_Attachments\muzzle\KC17_muzzle\KC17_muzzle.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\KC17_muzzle\data\KC17_muzzle_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\KC17_muzzle\data\KC17_muzzle.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.1;
        barrelArmor = 4000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 1.05, 1.05, 1.05 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                    positionOffset[] = { 0, -0.050000001, 0 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\KC17_muzzle\data\KC17_muzzle.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\KC17_muzzle\data\KC17_muzzle_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\KC17_muzzle\data\KC17_muzzle_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\KC17_muzzle\data\KC17_muzzle_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\KC17_muzzle\data\KC17_muzzle_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_M14: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_M140";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_M141";
        model = "\My_DF_Weapons_Attachments\muzzle\M14\M14.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\M14\data\M14_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\M14\data\M14.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.18;
        barrelArmor = 5000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0005;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.85, 0.8, 0.85 };
        swayModifier[] = { 0.85, 0.8, 0.85 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                    positionOffset[] = { 0, -0.050000001, 0 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M14\data\M14.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M14\data\M14_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M14\data\M14_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M14\data\M14_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M14\data\M14_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_M249: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_M2490";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_M2491";
        model = "\My_DF_Weapons_Attachments\muzzle\M249\M249.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\M249\data\M249_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\M249\data\M249.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.1;
        barrelArmor = 3000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M249\data\M249.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M249\data\M249_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M249\data\M249_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M249\data\M249_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M249\data\M249_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_M250: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_M2500";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_M2501";
        model = "\My_DF_Weapons_Attachments\muzzle\M250\M250.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\M250\data\M250_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\M250\data\M250.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.1;
        barrelArmor = 3000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0005;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M250\data\M250.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M250\data\M250_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M250\data\M250_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M250\data\M250_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M250\data\M250_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_M250Silencer: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_M250Silencer0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_M250Silencer1";
        model = "\My_DF_Weapons_Attachments\muzzle\M250Silencer\M250Silencer.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\M250Silencer\data\M250Silencer_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\M250Silencer\data\M250Silencer.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.2;
        barrelArmor = 3000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = -0.92;
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        soundIndex = 1;
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 3;
                maxOverheatingValue = 10;
                overheatingDecayInterval = 1;
                class SmokeTrail
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M250Silencer\data\M250Silencer.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M250Silencer\data\M250Silencer_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M250Silencer\data\M250Silencer_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M250Silencer\data\M250Silencer_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M250Silencer\data\M250Silencer_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_M40: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_M400";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_M401";
        model = "\My_DF_Weapons_Attachments\muzzle\M40\M40.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\M40\data\M40_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\M40\data\M40.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.2;
        barrelArmor = 4000;
        inventorySlot[] = {
            "DF_muzzle_AWM"
        };
        dispersionModifier = -0.0005;
        dispersionCondition = "true";
        noiseShootModifier = -0.9;
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        soundIndex = 1;
        class Particles
        {
            class OnFire
            {
                class MuzzleFlashAssault
                {
                    overrideParticle = "weapon_shot_akm_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 2;
                maxOverheatingValue = 20;
                overheatingDecayInterval = 1;
                class SmokingBarrel
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M40\data\M40.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M40\data\M40_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M40\data\M40_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M40\data\M40_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M40\data\M40_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_M4A1: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_M4A10";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_M4A11";
        model = "\My_DF_Weapons_Attachments\muzzle\M4A1\M4A1.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\M4A1\data\M4A1_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\M4A1\data\M4A1.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.1;
        barrelArmor = 3000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 1.05, 1.05, 1.05 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                    positionOffset[] = { 0, -0.050000001, 0 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M4A1\data\M4A1.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M4A1\data\M4A1_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M4A1\data\M4A1_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M4A1\data\M4A1_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\M4A1\data\M4A1_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_MCX: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_MCX0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_MCX1";
        model = "\My_DF_Weapons_Attachments\muzzle\MCX\MCX.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\MCX\data\MCX_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\MCX\data\MCX.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.15;
        barrelArmor = 3000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = -0.8;
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 3;
                maxOverheatingValue = 10;
                overheatingDecayInterval = 1;
                class SmokeTrail
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MCX\data\MCX.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MCX\data\MCX_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MCX\data\MCX_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MCX\data\MCX_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MCX\data\MCX_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_MCXSilencer: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_MCXSilencer0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_MCXSilencer1";
        model = "\My_DF_Weapons_Attachments\muzzle\MCXSilencer\MCXSilencer.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\MCXSilencer\data\MCXSilencer_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\MCXSilencer\data\MCXSilencer.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.2;
        barrelArmor = 3500;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0004;
        dispersionCondition = "true";
        noiseShootModifier = -0.95;
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        soundIndex = 1;
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 3;
                maxOverheatingValue = 10;
                overheatingDecayInterval = 1;
                class SmokeTrail
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MCXSilencer\data\MCXSilencer.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MCXSilencer\data\MCXSilencer_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MCXSilencer\data\MCXSilencer_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MCXSilencer\data\MCXSilencer_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MCXSilencer\data\MCXSilencer_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_MCXSilencer2: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_MCXSilencer20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_MCXSilencer21";
        model = "\My_DF_Weapons_Attachments\muzzle\MCXSilencer2\MCXSilencer2.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\MCXSilencer2\data\MCXSilencer2_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\MCXSilencer2\data\MCXSilencer2.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.2;
        barrelArmor = 3000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = -0.9;
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        soundIndex = 1;
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 3;
                maxOverheatingValue = 10;
                overheatingDecayInterval = 1;
                class SmokeTrail
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MCXSilencer2\data\MCXSilencer2.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MCXSilencer2\data\MCXSilencer2_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MCXSilencer2\data\MCXSilencer2_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MCXSilencer2\data\MCXSilencer2_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MCXSilencer2\data\MCXSilencer2_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_MK47_muzzle: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_MK47_muzzle0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_MK47_muzzle1";
        model = "\My_DF_Weapons_Attachments\muzzle\MK47_muzzle\MK47_muzzle.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\MK47_muzzle\data\MK47_muzzle_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\MK47_muzzle\data\MK47_muzzle.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.1;
        barrelArmor = 4000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 1.05, 1.05, 1.05 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                    positionOffset[] = { 0, -0.050000001, 0 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MK47_muzzle\data\MK47_muzzle.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MK47_muzzle\data\MK47_muzzle_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MK47_muzzle\data\MK47_muzzle_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MK47_muzzle\data\MK47_muzzle_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MK47_muzzle\data\MK47_muzzle_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_mp7: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_mp70";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_mp71";
        model = "\My_DF_Weapons_Attachments\muzzle\mp7\mp7.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\mp7\data\mp7_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\mp7\data\mp7.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.08;
        barrelArmor = 3000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0002;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 1.1, 1.1, 1.1 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                    positionOffset[] = { 0, -0.050000001, 0 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\mp7\data\mp7.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\mp7\data\mp7_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\mp7\data\mp7_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\mp7\data\mp7_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\mp7\data\mp7_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_OPS: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_OPS0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_OPS1";
        model = "\My_DF_Weapons_Attachments\muzzle\OPS\OPS.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\OPS\data\OPS_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\OPS\data\OPS.rvmat"
        };
        itemSize[] = { 3, 1 };
        itemModelLength = 0.3;
        barrelArmor = 3000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = -0.9;
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        soundIndex = 1;
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 3;
                maxOverheatingValue = 10;
                overheatingDecayInterval = 1;
                class SmokeTrail
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\OPS\data\OPS.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\OPS\data\OPS_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\OPS\data\OPS_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\OPS\data\OPS_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\OPS\data\OPS_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_Osprey: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_Osprey0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_Osprey1";
        model = "\My_DF_Weapons_Attachments\muzzle\Osprey\Osprey.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\Osprey\data\Osprey_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\Osprey\data\Osprey.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.25;
        barrelArmor = 4000;
        inventorySlot[] = {
            "pistolMuzzle",
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = -0.9;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        soundIndex = 1;
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 3;
                maxOverheatingValue = 10;
                overheatingDecayInterval = 1;
                class SmokeTrail
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Osprey\data\Osprey.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Osprey\data\Osprey_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Osprey\data\Osprey_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Osprey\data\Osprey_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Osprey\data\Osprey_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_P90: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_P900";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_P901";
        model = "\My_DF_Weapons_Attachments\muzzle\P90\P90.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\P90\data\P90_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\P90\data\P90.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.05;
        barrelArmor = 2000;
        inventorySlot[] = {
            "pistolMuzzle"
        };
        dispersionModifier = -0.0001;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\P90\data\P90.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\P90\data\P90_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\P90\data\P90_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\P90\data\P90_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\P90\data\P90_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_PAMuzzleBrake: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_PAMuzzleBrake0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_PAMuzzleBrake1";
        model = "\My_DF_Weapons_Attachments\muzzle\PAMuzzleBrake\PAMuzzleBrake.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\PAMuzzleBrake\data\PAMuzzleBrake_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\PAMuzzleBrake\data\PAMuzzleBrake.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.1;
        barrelArmor = 4000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 1, 1, 1 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                    positionOffset[] = { 0, -0.050000001, 0 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\PAMuzzleBrake\data\PAMuzzleBrake.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\PAMuzzleBrake\data\PAMuzzleBrake_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\PAMuzzleBrake\data\PAMuzzleBrake_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\PAMuzzleBrake\data\PAMuzzleBrake_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\PAMuzzleBrake\data\PAMuzzleBrake_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_PBS04: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_PBS040";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_PBS041";
        model = "\My_DF_Weapons_Attachments\muzzle\PBS04\PBS04.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\PBS04\data\PBS04_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\PBS04\data\PBS04.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.2;
        barrelArmor = 3000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0004;
        dispersionCondition = "true";
        noiseShootModifier = -0.9;
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 1.1, 1.1, 1.1 };
        soundIndex = 1;
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 3;
                maxOverheatingValue = 10;
                overheatingDecayInterval = 1;
                class SmokeTrail
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\PBS04\data\PBS04.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\PBS04\data\PBS04_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\PBS04\data\PBS04_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\PBS04\data\PBS04_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\PBS04\data\PBS04_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_QBZ191: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_QBZ1910";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_QBZ1911";
        model = "\My_DF_Weapons_Attachments\muzzle\QBZ191\QBZ191.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\QBZ191\data\QBZ191_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\QBZ191\data\QBZ191.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.1;
        barrelArmor = 2500;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 1, 1, 1 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                    positionOffset[] = { 0, -0.050000001, 0 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QBZ191\data\QBZ191.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QBZ191\data\QBZ191_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QBZ191\data\QBZ191_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QBZ191\data\QBZ191_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QBZ191\data\QBZ191_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_QBZ191long: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_QBZ191long0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_QBZ191long1";
        model = "\My_DF_Weapons_Attachments\muzzle\QBZ191long\QBZ191long.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\QBZ191long\data\QBZ191long_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\QBZ191long\data\QBZ191long.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.1;
        barrelArmor = 3000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 1, 1, 1 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                    positionOffset[] = { 0, -0.050000001, 0 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QBZ191long\data\QBZ191long.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QBZ191long\data\QBZ191long_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QBZ191long\data\QBZ191long_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QBZ191long\data\QBZ191long_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QBZ191long\data\QBZ191long_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_QCQ171: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_QCQ1710";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_QCQ1711";
        model = "\My_DF_Weapons_Attachments\muzzle\QCQ171\QCQ171.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\QCQ171\data\QCQ171_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\QCQ171\data\QCQ171.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.1;
        barrelArmor = 3500;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 1.1, 1.1, 1.1 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                    positionOffset[] = { 0, -0.050000001, 0 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QCQ171\data\QCQ171.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QCQ171\data\QCQ171_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QCQ171\data\QCQ171_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QCQ171\data\QCQ171_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QCQ171\data\QCQ171_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_QCQ171Silencer: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_QCQ171Silencer0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_QCQ171Silencer1";
        model = "\My_DF_Weapons_Attachments\muzzle\QCQ171Silencer\QCQ171Silencer.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\QCQ171Silencer\data\QCQ171Silencer_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\QCQ171Silencer\data\QCQ171Silencer.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.2;
        barrelArmor = 2500;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.00015;
        dispersionCondition = "true";
        noiseShootModifier = -0.93;
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        soundIndex = 1;
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 3;
                maxOverheatingValue = 10;
                overheatingDecayInterval = 1;
                class SmokeTrail
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QCQ171Silencer\data\QCQ171Silencer.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QCQ171Silencer\data\QCQ171Silencer_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QCQ171Silencer\data\QCQ171Silencer_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QCQ171Silencer\data\QCQ171Silencer_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QCQ171Silencer\data\QCQ171Silencer_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_QJB201: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_QJB2010";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_QJB2011";
        model = "\My_DF_Weapons_Attachments\muzzle\QJB201\QJB201.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\QJB201\data\QJB201_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\QJB201\data\QJB201.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.1;
        barrelArmor = 3000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                    positionOffset[] = { 0, -0.050000001, 0 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QJB201\data\QJB201.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QJB201\data\QJB201_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QJB201\data\QJB201_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QJB201\data\QJB201_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\QJB201\data\QJB201_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_Russian9: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_Russian90";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_Russian91";
        model = "\My_DF_Weapons_Attachments\muzzle\Russian9\Russian9.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\Russian9\data\Russian9_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\Russian9\data\Russian9.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.2;
        barrelArmor = 3000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = -0.9;
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        soundIndex = 1;
        class Particles
        {
            class OnFire
            {
                class MuzzleFlashAssault
                {
                    overrideParticle = "weapon_shot_akm_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 2;
                maxOverheatingValue = 20;
                overheatingDecayInterval = 1;
                class SmokingBarrel
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Russian9\data\Russian9.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Russian9\data\Russian9_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Russian9\data\Russian9_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Russian9\data\Russian9_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Russian9\data\Russian9_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_SG2: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_SG20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_SG21";
        model = "\My_DF_Weapons_Attachments\muzzle\SG2\SG2.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\SG2\data\SG2_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\SG2\data\SG2.rvmat"
        };
        itemSize[] = { 3, 1 };
        itemModelLength = 0.15;
        barrelArmor = 3000;
        inventorySlot[] = {
            "DF_muzzleShotgun"
        };
        dispersionModifier = -0.0005;
        dispersionCondition = "true";
        noiseShootModifier = -0.85;
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        soundIndex = 1;
        class Particles
        {
            class OnFire
            {
                class MuzzleFlashAssault
                {
                    overrideParticle = "weapon_shot_akm_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 2;
                maxOverheatingValue = 20;
                overheatingDecayInterval = 1;
                class SmokingBarrel
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SG2\data\SG2.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SG2\data\SG2_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SG2\data\SG2_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SG2\data\SG2_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SG2\data\SG2_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_SilHybrid46: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_SilHybrid460";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_SilHybrid461";
        model = "\My_DF_Weapons_Attachments\muzzle\SilHybrid46\SilHybrid46.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\SilHybrid46\data\SilHybrid46_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\SilHybrid46\data\SilHybrid46.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.15;
        barrelArmor = 2500;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = -0.85;
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        soundIndex = 1;
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 3;
                maxOverheatingValue = 10;
                overheatingDecayInterval = 1;
                class SmokeTrail
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SilHybrid46\data\SilHybrid46.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SilHybrid46\data\SilHybrid46_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SilHybrid46\data\SilHybrid46_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SilHybrid46\data\SilHybrid46_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SilHybrid46\data\SilHybrid46_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_SKSHexagon: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_SKSHexagon0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_SKSHexagon1";
        model = "\My_DF_Weapons_Attachments\muzzle\SKSHexagon\SKSHexagon.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\SKSHexagon\data\SKSHexagon_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\SKSHexagon\data\SKSHexagon.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.2;
        barrelArmor = 3000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = -0.85;
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        soundIndex = 1;
        class Particles
        {
            class OnFire
            {
                class MuzzleFlashAssault
                {
                    overrideParticle = "weapon_shot_akm_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 2;
                maxOverheatingValue = 20;
                overheatingDecayInterval = 1;
                class SmokingBarrel
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SKSHexagon\data\SKSHexagon.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SKSHexagon\data\SKSHexagon_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SKSHexagon\data\SKSHexagon_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SKSHexagon\data\SKSHexagon_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SKSHexagon\data\SKSHexagon_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_sr25cqbSilencer: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_sr25cqbSilencer0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_sr25cqbSilencer1";
        model = "\My_DF_Weapons_Attachments\muzzle\sr25cqbSilencer\sr25cqbSilencer.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\sr25cqbSilencer\data\sr25cqbSilencer_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\sr25cqbSilencer\data\sr25cqbSilencer.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.2;
        barrelArmor = 3000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = -0.9;
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        soundIndex = 1;
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 3;
                maxOverheatingValue = 10;
                overheatingDecayInterval = 1;
                class SmokeTrail
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\sr25cqbSilencer\data\sr25cqbSilencer.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\sr25cqbSilencer\data\sr25cqbSilencer_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\sr25cqbSilencer\data\sr25cqbSilencer_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\sr25cqbSilencer\data\sr25cqbSilencer_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\sr25cqbSilencer\data\sr25cqbSilencer_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_SR25Short: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_SR25Short0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_SR25Short1";
        model = "\My_DF_Weapons_Attachments\muzzle\SR25Short\SR25Short.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\SR25Short\data\SR25Short_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\SR25Short\data\SR25Short.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.2;
        barrelArmor = 4000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 1, 1, 1 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                    positionOffset[] = { 0, -0.050000001, 0 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SR25Short\data\SR25Short.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SR25Short\data\SR25Short_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SR25Short\data\SR25Short_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SR25Short\data\SR25Short_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SR25Short\data\SR25Short_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_SR3M: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_SR3M0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_SR3M1";
        model = "\My_DF_Weapons_Attachments\muzzle\SR3M\SR3M.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\SR3M\data\SR3M_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\SR3M\data\SR3M.rvmat"
        };
        itemSize[] = { 3, 1 };
        itemModelLength = 0.2;
        barrelArmor = 3500;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = -0.95;
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 1.05, 1.05, 1.05 };
        soundIndex = 1;
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 3;
                maxOverheatingValue = 10;
                overheatingDecayInterval = 1;
                class SmokeTrail
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SR3M\data\SR3M.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SR3M\data\SR3M_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SR3M\data\SR3M_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SR3M\data\SR3M_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SR3M\data\SR3M_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_SurF_SF3P: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_SurF_SF3P0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_SurF_SF3P1";
        model = "\My_DF_Weapons_Attachments\muzzle\SurF_SF3P\SurF_SF3P.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\SurF_SF3P\data\SurF_SF3P_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\SurF_SF3P\data\SurF_SF3P.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.1;
        barrelArmor = 3000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                    positionOffset[] = { 0, -0.050000001, 0 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SurF_SF3P\data\SurF_SF3P.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SurF_SF3P\data\SurF_SF3P_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SurF_SF3P\data\SurF_SF3P_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SurF_SF3P\data\SurF_SF3P_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SurF_SF3P\data\SurF_SF3P_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_SV98: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_SV980";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_SV981";
        model = "\My_DF_Weapons_Attachments\muzzle\SV98\SV98.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\SV98\data\SV98_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\SV98\data\SV98.rvmat"
        };
        itemSize[] = { 3, 1 };
        itemModelLength = 0.2;
        barrelArmor = 5000;
        inventorySlot[] = {
            "DF_muzzle_AWM"
        };
        dispersionModifier = -0.001;
        dispersionCondition = "true";
        noiseShootModifier = -0.98;
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        soundIndex = 1;
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 1;
                maxOverheatingValue = 15;
                overheatingDecayInterval = 1;
                class SmokeTrail
                {
                    overrideParticle = "smoking_barrel_small";
                    overrideDirectionVector[] = { 0, 180, 180 };
                    onlyWithinOverheatLimits[] = { 0, 0.7 };
                };
                class SmokeHot
                {
                    overrideParticle = "smoking_barrel_heavy";
                    onlyWithinOverheatLimits[] = { 0.7, 2 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SV98\data\SV98.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SV98\data\SV98_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SV98\data\SV98_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SV98\data\SV98_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\SV98\data\SV98_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_TwistedTempest: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_TwistedTempest0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_TwistedTempest1";
        model = "\My_DF_Weapons_Attachments\muzzle\TwistedTempest\TwistedTempest.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\TwistedTempest\data\TwistedTempest_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\TwistedTempest\data\TwistedTempest.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.2;
        barrelArmor = 4000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\TwistedTempest\data\TwistedTempest.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\TwistedTempest\data\TwistedTempest_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\TwistedTempest\data\TwistedTempest_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\TwistedTempest\data\TwistedTempest_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\TwistedTempest\data\TwistedTempest_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_V6Muzzle: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_V6Muzzle0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_V6Muzzle1";
        model = "\My_DF_Weapons_Attachments\muzzle\V6Muzzle\V6Muzzle.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\V6Muzzle\data\V6Muzzle_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\V6Muzzle\data\V6Muzzle.rvmat"
        };
        itemSize[] = { 2, 1 };
        itemModelLength = 0.2;
        barrelArmor = 4000;
        inventorySlot[] = {
            "DF_muzzleShotgun"
        };
        dispersionModifier = -0.001;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.7, 0.7, 0.7 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\V6Muzzle\data\V6Muzzle.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\V6Muzzle\data\V6Muzzle_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\V6Muzzle\data\V6Muzzle_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\V6Muzzle\data\V6Muzzle_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\V6Muzzle\data\V6Muzzle_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_VKS: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_VKS0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_VKS1";
        model = "\My_DF_Weapons_Attachments\muzzle\VKS\VKS.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\VKS\data\VKS_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\VKS\data\VKS.rvmat"
        };
        itemSize[] = { 3, 1 };
        itemModelLength = 0.2;
        barrelArmor = 5000;
        inventorySlot[] = {
            "DF_muzzle_AWM",
            "DF_muzzle_Ash12"
        };
        dispersionModifier = -0.0005;
        dispersionCondition = "true";
        noiseShootModifier = -0.85;
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        soundIndex = 1;
        class Particles
        {
            class OnFire
            {
                class MuzzleFlashAssault
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 2;
                maxOverheatingValue = 20;
                overheatingDecayInterval = 1;
                class SmokingBarrel
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\VKS\data\VKS.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\VKS\data\VKS_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\VKS\data\VKS_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\VKS\data\VKS_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\VKS\data\VKS_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_Zen_DTK: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_Zen_DTK0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_Zen_DTK1";
        model = "\My_DF_Weapons_Attachments\muzzle\Zen_DTK\Zen_DTK.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\Zen_DTK\data\Zen_DTK_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\Zen_DTK\data\Zen_DTK.rvmat"
        };
        itemSize[] = { 1, 1 };
        itemModelLength = 0.2;
        barrelArmor = 4000;
        inventorySlot[] = {
            "DF_muzzle"
        };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        noiseShootModifier = -0.85;
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Zen_DTK\data\Zen_DTK.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Zen_DTK\data\Zen_DTK_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Zen_DTK\data\Zen_DTK_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Zen_DTK\data\Zen_DTK_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\Zen_DTK\data\Zen_DTK_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_ZeroRise: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_muzzle_ZeroRise0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_muzzle_ZeroRise1";
        model = "\My_DF_Weapons_Attachments\muzzle\ZeroRise\ZeroRise.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\ZeroRise\data\ZeroRise_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\ZeroRise\data\ZeroRise.rvmat"
        };
        itemSize[] = { 3, 1 };
        itemModelLength = 0.2;
        barrelArmor = 4000;
        inventorySlot[] = {
            "DF_muzzleShotgun"
        };
        dispersionModifier = -0.0015;
        dispersionCondition = "true";
        noiseShootModifier = 0;
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.7, 0.7, 0.7 };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_01";
                    illuminateWorld = 1;
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\ZeroRise\data\ZeroRise.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\ZeroRise\data\ZeroRise_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\ZeroRise\data\ZeroRise_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\ZeroRise\data\ZeroRise_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\ZeroRise\data\ZeroRise_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_MP5SD: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_MP5SD0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_MP5SD1";
        model = "\My_DF_Weapons_Attachments\muzzle\MP5SD\MP5SD.p3d";
        itemModelLength = 0.4;
        barrelArmor = 3000;
        rotationFlags = 17;
        reversed = 0;
        weight = 400;
        itemSize[] = { 2, 1 };
        dispersionModifier = -0.0003;
        dispersionCondition = "true";
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        noiseShootModifier = -0.9;
        soundIndex = 1;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\MP5SD\data\MP5SD_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\MP5SD\data\MP5SD.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MP5SD\data\MP5SD.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MP5SD\data\MP5SD_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MP5SD\data\MP5SD_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MP5SD\data\MP5SD_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\MP5SD\data\MP5SD_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_fnx_02";
                    onlyWithinHealthLabel[] = { 0, 3 };
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating = 3;
                maxOverheatingValue = 10;
                overheatingDecayInterval = 1;
                class SmokeTrail
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinRainLimits[] = { 0, 0.2 };
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = { 0, 0.1, 0 };
                    onlyWithinOverheatLimits[] = { 0, 1 };
                    onlyWithinRainLimits[] = { 0.2, 1 };
                };
            };
        };
    };
	class My_DF_Weapons_Attachments_muzzle_LeverStd: My_DF_Weapons_Attachments_muzzle_Base
	{
		scope=2;
		displayName="$STR_My_DF_Weapons_Attachments_muzzle_LeverStd0";
		descriptionShort="$STR_My_DF_Weapons_Attachments_muzzle_LeverStd1";
		model="\My_DF_Weapons_Attachments\muzzle\LeverStd\LeverStd.p3d";
		hiddenSelectionsTextures[]=
		{
			"My_DF_Weapons_Attachments\muzzle\LeverStd\data\LeverStd_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"My_DF_Weapons_Attachments\muzzle\LeverStd\data\LeverStd.rvmat"
		};
		itemSize[]={1,1};
		itemModelLength=0.2;
		barrelArmor=4000;
		inventorySlot[]=
		{
			"DF_muzzle"
		};
		dispersionModifier=-0.00035;
		dispersionCondition="true";
		noiseShootModifier=-0.85;
		recoilModifier[]={0.95,0.95,0.95};
		swayModifier[]={0.85,0.85,0.85};
		class Particles
        {
            class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle="weapon_shot_fnx_01";
                    illuminateWorld=1;
                };
            };
        };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"My_DF_Weapons_Attachments\muzzle\LeverStd\data\LeverStd.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"My_DF_Weapons_Attachments\muzzle\LeverStd\data\LeverStd_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"My_DF_Weapons_Attachments\muzzle\LeverStd\data\LeverStd_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"My_DF_Weapons_Attachments\muzzle\LeverStd\data\LeverStd_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"My_DF_Weapons_Attachments\muzzle\LeverStd\data\LeverStd_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class My_DF_Weapons_Attachments_muzzle_MK4_muzzle: My_DF_Weapons_Attachments_muzzle_Base
	{
		scope=2;
		displayName="$STR_My_DF_Weapons_Attachments_muzzle_MK4_muzzle0";
		descriptionShort="$STR_My_DF_Weapons_Attachments_muzzle_MK4_muzzle1";
		model="\My_DF_Weapons_Attachments\muzzle\MK4_muzzle\MK4_muzzle.p3d";
		hiddenSelectionsTextures[]=
		{
			"My_DF_Weapons_Attachments\muzzle\MK4_muzzle\data\MK4_muzzle_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"My_DF_Weapons_Attachments\muzzle\MK4_muzzle\data\MK4_muzzle.rvmat"
		};
		itemSize[]={1,1};
		itemModelLength=0.1;
		barrelArmor=3000;
		inventorySlot[]=
		{
			"DF_muzzle"
		};
		dispersionModifier=-0.0003;
		dispersionCondition="true";
		noiseShootModifier=0;
		recoilModifier[]={0.95,0.95,0.95};
		swayModifier[]={1.05,1.05,1.05};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_01";
					illuminateWorld=1;
					positionOffset[]={0,-0.050000001,0};
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"My_DF_Weapons_Attachments\muzzle\MK4_muzzle\data\MK4_muzzle.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"My_DF_Weapons_Attachments\muzzle\MK4_muzzle\data\MK4_muzzle_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"My_DF_Weapons_Attachments\muzzle\MK4_muzzle\data\MK4_muzzle_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"My_DF_Weapons_Attachments\muzzle\MK4_muzzle\data\MK4_muzzle_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"My_DF_Weapons_Attachments\muzzle\MK4_muzzle\data\MK4_muzzle_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};