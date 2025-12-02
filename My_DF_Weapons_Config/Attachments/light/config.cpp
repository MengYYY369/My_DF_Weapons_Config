class CfgPatches
{
	class My_DF_Weapons_Attachments_light_config
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"DZ_Data",
			"My_DF_Weapons_Attachments_light"
		};
	};
};
class CfgVehicles
{
    class My_DF_Weapons_Attachments_light_Base;
    class My_DF_Weapons_Attachments_light_Baldr: My_DF_Weapons_Attachments_light_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_light_Baldr0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_light_Baldr1";
        model = "\My_DF_Weapons_Attachments\light\Baldr\Baldr.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 1.1, 1.1, 1.1 };
        swayModifier[] = { 1.1, 1.1, 1.1 };
        attachments[] = {
            "BatteryD"
        };
        inventorySlot[] = {
            "DF_frog_down",
            "DF_frog_up",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up2",
            "DF_frog_left2",
            "DF_frog_right2",
            "weaponFlashlight",
            "helmetFlashlight",
            "pistolFlashlight"
        };
        hiddenSelections[] = {
            "camo",
            "glass"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\light\Baldr\data\Baldr_co.paa",
            "My_DF_Weapons_Attachments\data\glass_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\light\Baldr\data\Baldr.rvmat",
            "My_DF_Weapons_Attachments\data\glass.rvmat"
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
                                "My_DF_Weapons_Attachments\light\Baldr\data\Baldr.rvmat",
                                "My_DF_Weapons_Attachments\data\glass.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\light\Baldr\data\Baldr_worn.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\light\Baldr\data\Baldr_damage.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\light\Baldr\data\Baldr_damage.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\light\Baldr\data\Baldr_destruct.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class EnergyManager
        {
            hasIcon = 1;
            autoSwitchOffWhenInCargo = 1;
            energyUsagePerSecond = 0.0099999998;
            plugType = 1;
            attachmentAction = 1;
            updateInterval = 40;
        };
        class AnimationSources
        {
            class rot
            {
                source = "user";
                animPeriod = 0.1;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_Attachments_light_BHD: My_DF_Weapons_Attachments_light_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_light_BHD0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_light_BHD1";
        model = "\My_DF_Weapons_Attachments\light\BHD\BHD.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 1.1, 1.1, 1.1 };
        swayModifier[] = { 1.1, 1.1, 1.1 };
        attachments[] = {
            "BatteryD"
        };
        hiddenSelections[] = {
            "camo",
            "glass"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\light\BHD\data\BHD_co.paa",
            "My_DF_Weapons_Attachments\data\glass_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\light\BHD\data\BHD.rvmat",
            "My_DF_Weapons_Attachments\data\glass.rvmat"
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
                                "My_DF_Weapons_Attachments\light\BHD\data\BHD.rvmat",
                                "My_DF_Weapons_Attachments\data\glass.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\light\BHD\data\BHD_worn.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\light\BHD\data\BHD_damage.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\light\BHD\data\BHD_damage.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\light\BHD\data\BHD_destruct.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class EnergyManager
        {
            hasIcon = 1;
            autoSwitchOffWhenInCargo = 1;
            energyUsagePerSecond = 0.0099999998;
            plugType = 1;
            attachmentAction = 1;
            updateInterval = 40;
        };
    };
    class My_DF_Weapons_Attachments_light_BHDpistol: My_DF_Weapons_Attachments_light_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_light_BHDpistol0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_light_BHDpistol1";
        model = "\My_DF_Weapons_Attachments\light\BHDpistol\BHDpistol.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 1.1, 1.1, 1.1 };
        swayModifier[] = { 1.1, 1.1, 1.1 };
        attachments[] = {
            "BatteryD"
        };
        inventorySlot[] = {
            "pistolFlashlight"
        };
        hiddenSelections[] = {
            "camo",
            "glass"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\light\BHDpistol\data\BHDpistol_co.paa",
            "My_DF_Weapons_Attachments\data\glass_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\light\BHDpistol\data\BHDpistol.rvmat",
            "My_DF_Weapons_Attachments\data\glass.rvmat"
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
                                "My_DF_Weapons_Attachments\light\BHDpistol\data\BHDpistol.rvmat",
                                "My_DF_Weapons_Attachments\data\glass.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\light\BHDpistol\data\BHDpistol_worn.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\light\BHDpistol\data\BHDpistol_damage.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\light\BHDpistol\data\BHDpistol_damage.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\light\BHDpistol\data\BHDpistol_destruct.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class EnergyManager
        {
            hasIcon = 1;
            autoSwitchOffWhenInCargo = 1;
            energyUsagePerSecond = 0.0099999998;
            plugType = 1;
            attachmentAction = 1;
            updateInterval = 40;
        };
    };
    class My_DF_Weapons_Attachments_light_Odin: My_DF_Weapons_Attachments_light_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_light_Odin0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_light_Odin1";
        model = "\My_DF_Weapons_Attachments\light\Odin\Odin.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 1.1, 1.1, 1.1 };
        swayModifier[] = { 1.1, 1.1, 1.1 };
        attachments[] = {
            "BatteryD"
        };
        hiddenSelections[] = {
            "camo",
            "glass"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\light\Odin\data\Odin_co.paa",
            "My_DF_Weapons_Attachments\data\glass_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\light\Odin\data\Odin.rvmat",
            "My_DF_Weapons_Attachments\data\glass.rvmat"
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
                                "My_DF_Weapons_Attachments\light\Odin\data\Odin.rvmat",
                                "My_DF_Weapons_Attachments\data\glass.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\light\Odin\data\Odin_worn.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\light\Odin\data\Odin_damage.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\light\Odin\data\Odin_damage.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\light\Odin\data\Odin_destruct.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class EnergyManager
        {
            hasIcon = 1;
            autoSwitchOffWhenInCargo = 1;
            energyUsagePerSecond = 0.0099999998;
            plugType = 1;
            attachmentAction = 1;
            updateInterval = 40;
        };
    };
    class My_DF_Weapons_Attachments_light_StrobeLight: My_DF_Weapons_Attachments_light_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_light_StrobeLight0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_light_StrobeLight1";
        model = "\My_DF_Weapons_Attachments\light\StrobeLight\StrobeLight.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 1.1, 1.1, 1.1 };
        swayModifier[] = { 1.1, 1.1, 1.1 };
        attachments[] = {
            "BatteryD"
        };
        hiddenSelections[] = {
            "camo",
            "glass"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\light\StrobeLight\data\StrobeLight_co.paa",
            "My_DF_Weapons_Attachments\data\glass_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\light\StrobeLight\data\StrobeLight.rvmat",
            "My_DF_Weapons_Attachments\data\glass.rvmat"
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
                                "My_DF_Weapons_Attachments\light\StrobeLight\data\StrobeLight.rvmat",
                                "My_DF_Weapons_Attachments\data\glass.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\light\StrobeLight\data\StrobeLight_worn.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\light\StrobeLight\data\StrobeLight_damage.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\light\StrobeLight\data\StrobeLight_damage.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\light\StrobeLight\data\StrobeLight_destruct.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class EnergyManager
        {
            hasIcon = 1;
            autoSwitchOffWhenInCargo = 1;
            energyUsagePerSecond = 0.0099999998;
            plugType = 1;
            attachmentAction = 1;
            updateInterval = 40;
        };
    };
    class My_DF_Weapons_Attachments_light_Surf_X400: My_DF_Weapons_Attachments_light_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_light_Surf_X4000";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_light_Surf_X4001";
        model = "\My_DF_Weapons_Attachments\light\Surf_X400\Surf_X400.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 1.1, 1.1, 1.1 };
        swayModifier[] = { 1.1, 1.1, 1.1 };
        attachments[] = {
            "BatteryD"
        };
        inventorySlot[] = {
            "DF_frog_down",
            "DF_frog_up",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up2",
            "DF_frog_left2",
            "DF_frog_right2",
            "weaponFlashlight",
            "helmetFlashlight",
            "pistolFlashlight"
        };
        hiddenSelections[] = {
            "camo",
            "glass"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\light\Surf_X400\data\Surf_X400_co.paa",
            "My_DF_Weapons_Attachments\data\glass_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\light\Surf_X400\data\Surf_X400.rvmat",
            "My_DF_Weapons_Attachments\data\glass.rvmat"
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
                                "My_DF_Weapons_Attachments\light\Surf_X400\data\Surf_X400.rvmat",
                                "My_DF_Weapons_Attachments\data\glass.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\light\Surf_X400\data\Surf_X400_worn.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\light\Surf_X400\data\Surf_X400_damage.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\light\Surf_X400\data\Surf_X400_damage.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\light\Surf_X400\data\Surf_X400_destruct.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class EnergyManager
        {
            hasIcon = 1;
            autoSwitchOffWhenInCargo = 1;
            energyUsagePerSecond = 0.0099999998;
            plugType = 1;
            attachmentAction = 1;
            updateInterval = 40;
        };
        class AnimationSources
        {
            class rot
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_Attachments_light_Warrior3S: My_DF_Weapons_Attachments_light_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_light_Warrior3S0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_light_Warrior3S1";
        model = "\My_DF_Weapons_Attachments\light\Warrior3S\Warrior3S.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 1.1, 1.1, 1.1 };
        swayModifier[] = { 1.1, 1.1, 1.1 };
        attachments[] = {
            "BatteryD"
        };
        hiddenSelections[] = {
            "camo",
            "glass"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\light\Warrior3S\data\Warrior3S_co.paa",
            "My_DF_Weapons_Attachments\data\glass_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\light\Warrior3S\data\Warrior3S.rvmat",
            "My_DF_Weapons_Attachments\data\glass.rvmat"
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
                                "My_DF_Weapons_Attachments\light\Warrior3S\data\Warrior3S.rvmat",
                                "My_DF_Weapons_Attachments\data\glass.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\light\Warrior3S\data\Warrior3S_worn.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\light\Warrior3S\data\Warrior3S_damage.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\light\Warrior3S\data\Warrior3S_damage.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\light\Warrior3S\data\Warrior3S_destruct.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class EnergyManager
        {
            hasIcon = 1;
            autoSwitchOffWhenInCargo = 1;
            energyUsagePerSecond = 0.0099999998;
            plugType = 1;
            attachmentAction = 1;
            updateInterval = 40;
        };
    };
};