class CfgPatches
{
	class My_DF_Weapons_Melees_config
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Melee",
			"DZ_Weapons_Melee_Powered",
			"DZ_Sounds_Effects",
			"DZ_Weapons_Projectiles",
			"DZ_Weapons_Firearms",
			"My_DF_Weapons_Melees",
			"My_DF_Weapons_Melees_Chainsaw",
			"My_DF_Weapons_Melees_DataThrowingKnife",
			"My_DF_Weapons_Melees_FairbairnSykes",
			"My_DF_Weapons_Melees_Karambit_Raidenshogun",
			"My_DF_Weapons_Melees_MercyKnife",
			"My_DF_Weapons_Melees_Polaris",
			"My_DF_Weapons_Melees_ShadowKiller",
			"My_DF_Weapons_Melees_Sharpblade",
			"My_DF_Weapons_Melees_SilenceFD",
			"My_DF_Weapons_Melees_ThieveSea",
			"My_DF_Weapons_Melees_Creed"
		};
	};
};
class CfgVehicles
{
    class Switchable_Base;
    class My_DF_Weapons_Melees_Chainsaw: Switchable_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Melees_Chainsaw0";
        descriptionShort = "$STR_My_DF_Weapons_Melees_Chainsaw1";
        model = "\My_DF_Weapons_Melees\Chainsaw\Chainsaw.p3d";
        animClass = "Chainsaw";
        weight = 5800;
        itemSize[] = { 10, 5 };
        absorbency = 0;
        openItemSpillRange[] = { 40, 60 };
        repairableWithKits[] = { 7 };
        repairCosts[] = { 25 };
        isMeleeWeapon = 1;
        itemBehaviour = 2;
        debug_ItemCategory = 2;
        fragility = 0.001;
        stackedUnit = "ml";
        itemSize[] = { 8, 3 };
        dismantle_action_type = 64;
        suicideAnim = "woodaxe";
        quantityBar = 1;
        inventorySlot[] = {
            "Shoulder",
            "Melee"
        };
        attachments[] = {
            "SparkPlug"
        };
        varQuantityDestroyOnMin = 0;
        varQuantityInit = 0;
        varQuantityMin = 0;
        fuelTankCapacity = 5000;
        varQuantityMax = 5000;
        hiddenSelections[] = {
            "camo",
            "camo2",
            "camo3",
            "Game"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Melees\Chainsaw\data\Chainsaw_1_co.paa",
            "My_DF_Weapons_Melees\Chainsaw\data\Chainsaw_2_co.paa",
            "My_DF_Weapons_Melees\Chainsaw\data\Chainsaw_3_co.paa",
            "My_DF_Weapons_Melees\Chainsaw\data\Game_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Melees\Chainsaw\data\Chainsaw_1.rvmat",
            "My_DF_Weapons_Melees\Chainsaw\data\Chainsaw_2.rvmat",
            "My_DF_Weapons_Melees\Chainsaw\data\Chainsaw_3.rvmat",
            ""
        };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = { 0.0, 0.0, 0 };
                orientation[] = { 90, 0, 90 };
            };
            class Melee
            {
                position[] = { 0.06, 0.0, 0.02 };
                orientation[] = {-90, 0, 90 };
            };
        };
        soundImpactType = "metal";
        class AnimationSources
        {
            class chain
            {
                source = "user";
                initPhase = 0;
                animPeriod = 0.1;
            };
        };
        class NoiseChainsaw
        {
            strength = 100;
            type = "sound";
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
                                "My_DF_Weapons_Melees\Chainsaw\data\Chainsaw_1.rvmat",
                                "My_DF_Weapons_Melees\Chainsaw\data\Chainsaw_2.rvmat",
                                "My_DF_Weapons_Melees\Chainsaw\data\Chainsaw_3.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Melees\Chainsaw\data\Chainsaw_1_worn.rvmat",
                                "My_DF_Weapons_Melees\Chainsaw\data\Chainsaw_2_worn.rvmat",
                                "My_DF_Weapons_Melees\Chainsaw\data\Chainsaw_3_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Melees\Chainsaw\data\Chainsaw_1_damage.rvmat",
                                "My_DF_Weapons_Melees\Chainsaw\data\Chainsaw_2_damage.rvmat",
                                "My_DF_Weapons_Melees\Chainsaw\data\Chainsaw_3_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Melees\Chainsaw\data\Chainsaw_1_damage.rvmat",
                                "My_DF_Weapons_Melees\Chainsaw\data\Chainsaw_2_damage.rvmat",
                                "My_DF_Weapons_Melees\Chainsaw\data\Chainsaw_3_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Melees\Chainsaw\data\Chainsaw_1_destruct.rvmat",
                                "My_DF_Weapons_Melees\Chainsaw\data\Chainsaw_2_destruct.rvmat",
                                "My_DF_Weapons_Melees\Chainsaw\data\Chainsaw_3_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class EnergyManager
        {
            hasIcon = 1;
            autoSwitchOff = 1;
            energyStorageMax = 5000;
            energyAtSpawn = 5000;
            convertEnergyToQuantity = 1;
            energyUsagePerSecond = 1.0;
        };
        class flame
        {
            sound = "Sound_FlareFlame";
            texture = "dz\gear\consumables\data\flame_red_ca.paa";
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeDF_Chainsaw";
                range = 1.8;
            };
            class Heavy
            {
                ammo = "MeleeDF_Chainsaw_Heavy";
                range = 1.8;
            };
            class Sprint
            {
                ammo = "MeleeDF_Chainsaw_Heavy";
                range = 3.7;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickup_light
                {
                    soundSet = "Chainsaw_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "Chainsaw_pickup_SoundSet";
                    id = 797;
                };
            };
        };
    };
    class HuntingKnife;
    class My_DF_Weapons_Melees_DataThrowingKnife: HuntingKnife
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Melees_DataThrowingKnife0";
        descriptionShort = "$STR_My_DF_Weapons_Melees_DataThrowingKnife1";
        model = "\My_DF_Weapons_Melees\DataThrowingKnife\DataThrowingKnife.p3d";
        weight = 1000;
        itemSize[] = { 1, 3 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Melees\DataThrowingKnife\data\DataThrowingKnife_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Melees\DataThrowingKnife\data\DataThrowingKnife.rvmat"
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
                                "My_DF_Weapons_Melees\DataThrowingKnife\data\DataThrowingKnife.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Melees\DataThrowingKnife\data\DataThrowingKnife_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Melees\DataThrowingKnife\data\DataThrowingKnife_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Melees\DataThrowingKnife\data\DataThrowingKnife_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Melees\DataThrowingKnife\data\DataThrowingKnife_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeDF_DataThrowingKnife";
                range = 1.2;
            };
            class Heavy
            {
                ammo = "MeleeDF_DataThrowingKnife_Heavy";
                range = 1.2;
            };
            class Sprint
            {
                ammo = "MeleeDF_DataThrowingKnife_Heavy";
                range = 3.3;
            };
        };
    };
    class My_DF_Weapons_Melees_DataThrowingKnife_2: HuntingKnife
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Melees_DataThrowingKnife_20";
        descriptionShort = "$STR_My_DF_Weapons_Melees_DataThrowingKnife_21";
        model = "\My_DF_Weapons_Melees\DataThrowingKnife\DataThrowingKnife_2.p3d";
        weight = 1000;
        itemSize[] = { 1, 3 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Melees\DataThrowingKnife\data\DataThrowingKnife_2_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Melees\DataThrowingKnife\data\DataThrowingKnife_2.rvmat"
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
                                "My_DF_Weapons_Melees\DataThrowingKnife\data\DataThrowingKnife_2.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Melees\DataThrowingKnife\data\DataThrowingKnife_2_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Melees\DataThrowingKnife\data\DataThrowingKnife_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Melees\DataThrowingKnife\data\DataThrowingKnife_2_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Melees\DataThrowingKnife\data\DataThrowingKnife_2_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeDF_DataThrowingKnife";
                range = 1.2;
            };
            class Heavy
            {
                ammo = "MeleeDF_DataThrowingKnife_Heavy";
                range = 1.2;
            };
            class Sprint
            {
                ammo = "MeleeDF_DataThrowingKnife_Heavy";
                range = 3.3;
            };
        };
    };
    class My_DF_Weapons_Melees_FairbairnSykes: HuntingKnife
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Melees_FairbairnSykes0";
        descriptionShort = "$STR_My_DF_Weapons_Melees_FairbairnSykes1";
        model = "\My_DF_Weapons_Melees\FairbairnSykes\FairbairnSykes.p3d";
        weight = 1000;
        itemSize[] = { 1, 3 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Melees\FairbairnSykes\data\FairbairnSykes_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Melees\FairbairnSykes\data\FairbairnSykes.rvmat"
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
                                "My_DF_Weapons_Melees\FairbairnSykes\data\FairbairnSykes.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Melees\FairbairnSykes\data\FairbairnSykes_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Melees\FairbairnSykes\data\FairbairnSykes_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Melees\FairbairnSykes\data\FairbairnSykes_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Melees\FairbairnSykes\data\FairbairnSykes_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeDF_FairbairnSykes";
                range = 1.2;
            };
            class Heavy
            {
                ammo = "MeleeDF_FairbairnSykes_Heavy";
                range = 1.2;
            };
            class Sprint
            {
                ammo = "MeleeDF_FairbairnSykes_Heavy";
                range = 3.3;
            };
        };
    };
    class My_DF_Weapons_Melees_Karambit_Raidenshogun: HuntingKnife
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Melees_Karambit_Raidenshogun0";
        descriptionShort = "$STR_My_DF_Weapons_Melees_Karambit_Raidenshogun1";
        model = "\My_DF_Weapons_Melees\Karambit_Raidenshogun\Karambit_Raidenshogun.p3d";
        weight = 1000;
        itemSize[] = { 1, 3 };
        hiddenSelections[] = {
            "camo",
            "camo2"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Melees\Karambit_Raidenshogun\data\Karambit_Raidenshogun_co.paa",
            "My_DF_Weapons_Melees\Karambit_Raidenshogun\data\Karambit_Raidenshogun_2_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Melees\Karambit_Raidenshogun\data\Karambit_Raidenshogun.rvmat",
            "My_DF_Weapons_Melees\Karambit_Raidenshogun\data\Karambit_Raidenshogun_2.rvmat"
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
                                "My_DF_Weapons_Melees\Karambit_Raidenshogun\data\Karambit_Raidenshogun.rvmat",
                                "My_DF_Weapons_Melees\Karambit_Raidenshogun\data\Karambit_Raidenshogun_2.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Melees\Karambit_Raidenshogun\data\Karambit_Raidenshogun_worn.rvmat",
                                "My_DF_Weapons_Melees\Karambit_Raidenshogun\data\Karambit_Raidenshogun_2_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Melees\Karambit_Raidenshogun\data\Karambit_Raidenshogun_damage.rvmat",
                                "My_DF_Weapons_Melees\Karambit_Raidenshogun\data\Karambit_Raidenshogun_2_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Melees\Karambit_Raidenshogun\data\Karambit_Raidenshogun_damage.rvmat",
                                "My_DF_Weapons_Melees\Karambit_Raidenshogun\data\Karambit_Raidenshogun_2_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Melees\Karambit_Raidenshogun\data\Karambit_Raidenshogun_destruct.rvmat",
                                "My_DF_Weapons_Melees\Karambit_Raidenshogun\data\Karambit_Raidenshogun_2_destruct.rvmat"
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
                class pickup_light
                {
                    soundSet = "Karambit_Raidenshogun_drop_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "Karambit_Raidenshogun_drop_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "Karambit_Raidenshogun_drop_SoundSet";
                    id = 898;
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeDF_Karambit_Raidenshogun";
                range = 1.2;
            };
            class Heavy
            {
                ammo = "MeleeDF_Karambit_Raidenshogun_Heavy";
                range = 1.2;
            };
            class Sprint
            {
                ammo = "MeleeDF_Karambit_Raidenshogun_Heavy";
                range = 3.3;
            };
        };
    };
    class My_DF_Weapons_Melees_MercyKnife: HuntingKnife
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Melees_MercyKnife0";
        descriptionShort = "$STR_My_DF_Weapons_Melees_MercyKnife1";
        model = "\My_DF_Weapons_Melees\MercyKnife\MercyKnife.p3d";
        weight = 1000;
        itemSize[] = { 1, 3 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Melees\MercyKnife\data\MercyKnife_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Melees\MercyKnife\data\MercyKnife.rvmat"
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
                                "My_DF_Weapons_Melees\MercyKnife\data\MercyKnife.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Melees\MercyKnife\data\MercyKnife_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Melees\MercyKnife\data\MercyKnife_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Melees\MercyKnife\data\MercyKnife_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Melees\MercyKnife\data\MercyKnife_destruct.rvmat"
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
                class pickup_light
                {
                    soundSet = "MercyKnife_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "MercyKnife_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "MercyKnife_pickup_SoundSet";
                    id = 898;
                };
            };
        };
        class AnimationSources
        {
            class rot
            {
                source = "user";
                initPhase = 0;
                animPeriod = 1;
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeDF_MercyKnife";
                range = 1.2;
            };
            class Heavy
            {
                ammo = "MeleeDF_MercyKnife_Heavy";
                range = 1.2;
            };
            class Sprint
            {
                ammo = "MeleeDF_MercyKnife_Heavy";
                range = 3.3;
            };
        };
    };
    class My_DF_Weapons_Melees_Polaris: HuntingKnife
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Melees_Polaris0";
        descriptionShort = "$STR_My_DF_Weapons_Melees_Polaris1";
        model = "\My_DF_Weapons_Melees\Polaris\Polaris.p3d";
        weight = 1000;
        itemSize[] = { 1, 3 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Melees\Polaris\data\Polaris_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Melees\Polaris\data\Polaris.rvmat"
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
                                "My_DF_Weapons_Melees\Polaris\data\Polaris.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Melees\Polaris\data\Polaris_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Melees\Polaris\data\Polaris_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Melees\Polaris\data\Polaris_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Melees\Polaris\data\Polaris_destruct.rvmat"
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
                class pickup_light
                {
                    soundSet = "Polaris_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "Polaris_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "Polaris_pickup_SoundSet";
                    id = 898;
                };
            };
        };
        class AnimationSources
        {
            class rot
            {
                source = "user";
                initPhase = 0;
                animPeriod = 1;
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeDF_Polaris";
                range = 1.2;
            };
            class Heavy
            {
                ammo = "MeleeDF_Polaris_Heavy";
                range = 1.2;
            };
            class Sprint
            {
                ammo = "MeleeDF_Polaris_Heavy";
                range = 3.3;
            };
        };
    };
    class CombatKnife;
    class My_DF_Weapons_Melees_ShadowKiller: CombatKnife
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Melees_ShadowKiller0";
        descriptionShort = "$STR_My_DF_Weapons_Melees_ShadowKiller1";
        model = "\My_DF_Weapons_Melees\ShadowKiller\ShadowKiller.p3d";
        weight = 1000;
        itemSize[] = { 1, 3 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Melees\ShadowKiller\data\ShadowKiller_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Melees\ShadowKiller\data\ShadowKiller.rvmat"
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
                                "My_DF_Weapons_Melees\ShadowKiller\data\ShadowKiller.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Melees\ShadowKiller\data\ShadowKiller_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Melees\ShadowKiller\data\ShadowKiller_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Melees\ShadowKiller\data\ShadowKiller_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Melees\ShadowKiller\data\ShadowKiller_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeDF_ShadowKiller";
                range = 1.2;
            };
            class Heavy
            {
                ammo = "MeleeDF_ShadowKiller_Heavy";
                range = 1.2;
            };
            class Sprint
            {
                ammo = "MeleeDF_ShadowKiller_Heavy";
                range = 3.3;
            };
        };
    };
    class My_DF_Weapons_Melees_Sharpblade: HuntingKnife
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Melees_Sharpblade0";
        descriptionShort = "$STR_My_DF_Weapons_Melees_Sharpblade1";
        model = "\My_DF_Weapons_Melees\Sharpblade\Sharpblade.p3d";
        weight = 1000;
        itemSize[] = { 1, 3 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Melees\Sharpblade\data\Sharpblade_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Melees\Sharpblade\data\Sharpblade.rvmat"
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
                                "My_DF_Weapons_Melees\Sharpblade\data\Sharpblade.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Melees\Sharpblade\data\Sharpblade_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Melees\Sharpblade\data\Sharpblade_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Melees\Sharpblade\data\Sharpblade_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Melees\Sharpblade\data\Sharpblade_destruct.rvmat"
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
                class pickup_light
                {
                    soundSet = "Sharpblade_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "Sharpblade_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "Sharpblade_pickup_SoundSet";
                    id = 898;
                };
            };
        };
        class AnimationSources
        {
            class rot
            {
                source = "user";
                initPhase = 0;
                animPeriod = 1;
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeDF_Sharpblade";
                range = 1.2;
            };
            class Heavy
            {
                ammo = "MeleeDF_Sharpblade_Heavy";
                range = 1.2;
            };
            class Sprint
            {
                ammo = "MeleeDF_Sharpblade_Heavy";
                range = 3.3;
            };
        };
    };
    class My_DF_Weapons_Melees_SilenceFD: HuntingKnife
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Melees_SilenceFD0";
        descriptionShort = "$STR_My_DF_Weapons_Melees_SilenceFD1";
        model = "\My_DF_Weapons_Melees\SilenceFD\SilenceFD.p3d";
        weight = 1000;
        itemSize[] = { 1, 3 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Melees\SilenceFD\data\SilenceFD_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Melees\SilenceFD\data\SilenceFD.rvmat"
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
                                "My_DF_Weapons_Melees\SilenceFD\data\SilenceFD.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Melees\SilenceFD\data\SilenceFD_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Melees\SilenceFD\data\SilenceFD_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Melees\SilenceFD\data\SilenceFD_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Melees\SilenceFD\data\SilenceFD_destruct.rvmat"
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
                class pickup_light
                {
                    soundSet = "SilenceFD_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "SilenceFD_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "SilenceFD_pickup_SoundSet";
                    id = 898;
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeDF_SilenceFD";
                range = 1.2;
            };
            class Heavy
            {
                ammo = "MeleeDF_SilenceFD_Heavy";
                range = 1.2;
            };
            class Sprint
            {
                ammo = "MeleeDF_SilenceFD_Heavy";
                range = 3.3;
            };
        };
    };
    class Hatchet;
    class My_DF_Weapons_Melees_ThieveSea: Hatchet
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Melees_ThieveSea0";
        descriptionShort = "$STR_My_DF_Weapons_Melees_ThieveSea1";
        model = "\My_DF_Weapons_Melees\ThieveSea\ThieveSea.p3d";
        weight = 1000;
        itemSize[] = { 2, 4 };
        debug_ItemCategory = 2;
        build_action_type = 10;
        dismantle_action_type = 74;
        repairableWithKits[] = { 4 };
        repairCosts[] = { 18 };
        rotationFlags = 17;
        weight = 1000;
        itemSize[] = { 2, 4 };
        fragility = 0.0099999998;
        openItemSpillRange[] = { 20, 40 };
        itemInfo[] = {
            "Axe"
        };
        inventorySlot[] = {
            "Backpack_1"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Melees\ThieveSea\data\ThieveSea_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Melees\ThieveSea\data\ThieveSea.rvmat"
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
                                "My_DF_Weapons_Melees\ThieveSea\data\ThieveSea.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Melees\ThieveSea\data\ThieveSea_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Melees\ThieveSea\data\ThieveSea_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Melees\ThieveSea\data\ThieveSea_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Melees\ThieveSea\data\ThieveSea_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeDF_ThieveSea";
                range = 1.4;
            };
            class Heavy
            {
                ammo = "MeleeDF_ThieveSea_Heavy";
                range = 1.4;
            };
            class Sprint
            {
                ammo = "MeleeDF_ThieveSea_Heavy";
                range = 3.3;
            };
        };
        isMeleeWeapon = 1;
        suicideAnim = "woodaxe";
        soundImpactType = "metal";
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickup_light
                {
                    soundSet = "ThieveSea_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "ThieveSea_pickup_SoundSet";
                    id = 797;
                };
            };
        };
    };
	class My_DF_Weapons_Melees_Creed: HuntingKnife
	{
		scope=2;
		displayName="$STR_My_DF_Weapons_Melees_Creed0";
		descriptionShort="$STR_My_DF_Weapons_Melees_Creed1";
		model="\My_DF_Weapons_Melees\Creed\Creed.p3d";
		debug_ItemCategory=2;
        rotationFlags=17;
		weight=1000;
		itemSize[]={1,3};
        fragility=0.002;
        isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"My_DF_Weapons_Melees\Creed\data\Creed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"My_DF_Weapons_Melees\Creed\data\Creed.rvmat"
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
								"My_DF_Weapons_Melees\Creed\data\Creed.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"My_DF_Weapons_Melees\Creed\data\Creed_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"My_DF_Weapons_Melees\Creed\data\Creed_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"My_DF_Weapons_Melees\Creed\data\Creed_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"My_DF_Weapons_Melees\Creed\data\Creed_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
        {
            class Default
            {
                ammo="MeleeDF_Creed";
                range=1.2;
            };
            class Heavy
            {
                ammo="MeleeDF_Creed_Heavy";
                range=1.2;
            };
            class Sprint
            {
                ammo="MeleeDF_Creed_Heavy";
                range=3.3;
            };
        };
		soundImpactType="metal";
	};
};
class CfgAmmo
{
    class MeleeChainsaw;
    class MeleeDF_Chainsaw: MeleeChainsaw
    {
        affectSkeleton = 1;
        class DamageApplied
        {
            type = "Melee";
            bleedThreshold = 1;
            class Health
            {
                damage = 50;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 50;
            };
        };
    };
    class MeleeChainsaw_Heavy;
    class MeleeDF_Chainsaw_Heavy: MeleeChainsaw_Heavy
    {
        hitAnimation = 1;
        class DamageApplied
        {
            type = "Melee";
            bleedThreshold = 1;
            class Health
            {
                damage = 100;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 100;
            };
        };
    };
    class MeleeSharpLight_4;
    class MeleeDF_DataThrowingKnife: MeleeSharpLight_4
    {
        class DamageApplied
        {
            type = "Melee";
            bleedThreshold = 0.8;
            transferShockToDamage = 0;
            class Health
            {
                damage = 30;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 10;
            };
        };
    };
    class MeleeDF_FairbairnSykes: MeleeSharpLight_4
    {
        class DamageApplied
        {
            type = "Melee";
            bleedThreshold = 0.8;
            transferShockToDamage = 0;
            class Health
            {
                damage = 30;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 10;
            };
        };
    };
	class MeleeDF_Creed : MeleeSharpLight_4
    {
        class DamageApplied
        {
            type="Melee";
            bleedThreshold=0.8;
            transferShockToDamage=0;
            class Health
            {
                damage=30;
            };
            class Blood
            {
                damage=100;
            };
            class Shock
            {
                damage=10;
            };
        };
    };
    class MeleeDF_Karambit_Raidenshogun: MeleeSharpLight_4
    {
        class DamageApplied
        {
            type = "Melee";
            bleedThreshold = 0.8;
            transferShockToDamage = 0;
            class Health
            {
                damage = 30;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 10;
            };
        };
    };
    class MeleeDF_MercyKnife: MeleeSharpLight_4
    {
        class DamageApplied
        {
            type = "Melee";
            bleedThreshold = 0.8;
            transferShockToDamage = 0;
            class Health
            {
                damage = 30;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 10;
            };
        };
    };
    class MeleeDF_Polaris: MeleeSharpLight_4
    {
        class DamageApplied
        {
            type = "Melee";
            bleedThreshold = 0.8;
            transferShockToDamage = 0;
            class Health
            {
                damage = 30;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 10;
            };
        };
    };
    class MeleeDF_ShadowKiller: MeleeSharpLight_4
    {
        class DamageApplied
        {
            type = "Melee";
            bleedThreshold = 0.8;
            transferShockToDamage = 0;
            class Health
            {
                damage = 30;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 10;
            };
        };
    };
    class MeleeDF_Sharpblade: MeleeSharpLight_4
    {
        class DamageApplied
        {
            type = "Melee";
            bleedThreshold = 0.8;
            transferShockToDamage = 0;
            class Health
            {
                damage = 30;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 10;
            };
        };
    };
    class MeleeDF_SilenceFD: MeleeSharpLight_4
    {
        class DamageApplied
        {
            type = "Melee";
            bleedThreshold = 0.8;
            transferShockToDamage = 0;
            class Health
            {
                damage = 30;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 10;
            };
        };
    };
    class MeleeSharpHeavy_4;
    class MeleeDF_DataThrowingKnife_Heavy: MeleeSharpHeavy_4
    {
        class DamageApplied
        {
            type = "Melee";
            bleedThreshold = 0.8;
            transferShockToDamage = 0;
            class Health
            {
                damage = 50;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 20;
            };
        };
    };
    class MeleeDF_FairbairnSykes_Heavy: MeleeSharpHeavy_4
    {
        class DamageApplied
        {
            type = "Melee";
            bleedThreshold = 0.8;
            transferShockToDamage = 0;
            class Health
            {
                damage = 50;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 20;
            };
        };
    };
	class MeleeDF_Creed_Heavy : MeleeSharpHeavy_4
    {
        class DamageApplied
        {
            type="Melee";
            bleedThreshold=0.8;
            transferShockToDamage=0;
            class Health
            {
                damage=50;
            };
            class Blood
            {
                damage=100;
            };
            class Shock
            {
                damage=20;
            };
        };
    };
    class MeleeDF_Karambit_Raidenshogun_Heavy: MeleeSharpHeavy_4
    {
        class DamageApplied
        {
            type = "Melee";
            bleedThreshold = 0.8;
            transferShockToDamage = 0;
            class Health
            {
                damage = 50;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 20;
            };
        };
    };
    class MeleeDF_MercyKnife_Heavy: MeleeSharpHeavy_4
    {
        class DamageApplied
        {
            type = "Melee";
            bleedThreshold = 0.8;
            transferShockToDamage = 0;
            class Health
            {
                damage = 50;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 20;
            };
        };
    };
    class MeleeDF_Polaris_Heavy: MeleeSharpHeavy_4
    {
        class DamageApplied
        {
            type = "Melee";
            bleedThreshold = 0.8;
            transferShockToDamage = 0;
            class Health
            {
                damage = 50;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 20;
            };
        };
    };
    class MeleeDF_ShadowKiller_Heavy: MeleeSharpHeavy_4
    {
        class DamageApplied
        {
            type = "Melee";
            bleedThreshold = 0.8;
            transferShockToDamage = 0;
            class Health
            {
                damage = 50;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 20;
            };
        };
    };
    class MeleeDF_Sharpblade_Heavy: MeleeSharpHeavy_4
    {
        class DamageApplied
        {
            type = "Melee";
            bleedThreshold = 0.8;
            transferShockToDamage = 0;
            class Health
            {
                damage = 50;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 20;
            };
        };
    };
    class MeleeDF_SilenceFD_Heavy: MeleeSharpHeavy_4
    {
        class DamageApplied
        {
            type = "Melee";
            bleedThreshold = 0.8;
            transferShockToDamage = 0;
            class Health
            {
                damage = 50;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 20;
            };
        };
    };
    class MeleeSharpLight_2;
    class MeleeDF_ThieveSea: MeleeSharpLight_2
    {
        class DamageApplied
        {
            type = "Melee";
            bleedThreshold = 0.6;
            transferShockToDamage = 0;
            class Health
            {
                damage = 40;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 15;
            };
        };
    };
    class MeleeSharpHeavy_2;
    class MeleeDF_ThieveSea_Heavy: MeleeSharpHeavy_2
    {
        class DamageApplied
        {
            type = "Melee";
            bleedThreshold = 0.6;
            transferShockToDamage = 0;
            class Health
            {
                damage = 70;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 25;
            };
        };
    };
};