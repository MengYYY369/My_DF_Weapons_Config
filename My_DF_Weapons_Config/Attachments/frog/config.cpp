class CfgPatches
{
	class My_DF_Weapons_Attachments_frog_config
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"DZ_Data",
			"My_DF_Weapons_Attachments_frog",
			"My_DF_Weapons_Attachments_bipod"
		};
	};
};
class CfgVehicles
{
    class My_DF_Weapons_Attachments_frog_Base;
    class My_DF_Weapons_Attachments_frog_AFG_Light: My_DF_Weapons_Attachments_frog_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_frog_AFG_Light0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_frog_AFG_Light1";
        model = "\My_DF_Weapons_Attachments\frog\AFG_Light\AFG_Light.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 1.05, 1.05, 1.05 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        attachments[] = {
            "BatteryD"
        };
        hiddenSelections[] = {
            "camo",
            "glass"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\frog\AFG_Light\data\AFG_Light_co.paa",
            "My_DF_Weapons_Attachments\data\glass_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\frog\AFG_Light\data\AFG_Light.rvmat",
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
                                "My_DF_Weapons_Attachments\frog\AFG_Light\data\AFG_Light.rvmat",
                                "My_DF_Weapons_Attachments\data\glass.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\frog\AFG_Light\data\AFG_Light_worn.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\frog\AFG_Light\data\AFG_Light_damage.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\frog\AFG_Light\data\AFG_Light_damage.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\frog\AFG_Light\data\AFG_Light_destruct.rvmat",
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
    class My_DF_Weapons_Attachments_frog_Arisaka: My_DF_Weapons_Attachments_frog_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_frog_Arisaka0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_frog_Arisaka1";
        model = "\My_DF_Weapons_Attachments\frog\Arisaka\Arisaka.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\frog\Arisaka\data\Arisaka_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\frog\Arisaka\data\Arisaka.rvmat"
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
                                "My_DF_Weapons_Attachments\frog\Arisaka\data\Arisaka.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\frog\Arisaka\data\Arisaka_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\frog\Arisaka\data\Arisaka_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\frog\Arisaka\data\Arisaka_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\frog\Arisaka\data\Arisaka_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_frog_AYA_ZFSG: My_DF_Weapons_Attachments_frog_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_frog_AYA_ZFSG0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_frog_AYA_ZFSG1";
        model = "\My_DF_Weapons_Attachments\frog\AYA_ZFSG\AYA_ZFSG.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\frog\AYA_ZFSG\data\AYA_ZFSG_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\frog\AYA_ZFSG\data\AYA_ZFSG.rvmat"
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
                                "My_DF_Weapons_Attachments\frog\AYA_ZFSG\data\AYA_ZFSG.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\frog\AYA_ZFSG\data\AYA_ZFSG_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\frog\AYA_ZFSG\data\AYA_ZFSG_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\frog\AYA_ZFSG\data\AYA_ZFSG_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\frog\AYA_ZFSG\data\AYA_ZFSG_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_frog_BCM: My_DF_Weapons_Attachments_frog_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_frog_BCM0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_frog_BCM1";
        model = "\My_DF_Weapons_Attachments\frog\BCM\BCM.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\frog\BCM\data\BCM_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\frog\BCM\data\BCM.rvmat"
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
                                "My_DF_Weapons_Attachments\frog\BCM\data\BCM.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\frog\BCM\data\BCM_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\frog\BCM\data\BCM_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\frog\BCM\data\BCM_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\frog\BCM\data\BCM_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_frog_CQRgen2: My_DF_Weapons_Attachments_frog_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_frog_CQRgen20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_frog_CQRgen21";
        model = "\My_DF_Weapons_Attachments\frog\CQRgen2\CQRgen2.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.75, 0.75, 0.75 };
        swayModifier[] = { 1.05, 1.05, 1.05 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\frog\CQRgen2\data\CQRgen2_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\frog\CQRgen2\data\CQRgen2.rvmat"
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
                                "My_DF_Weapons_Attachments\frog\CQRgen2\data\CQRgen2.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\frog\CQRgen2\data\CQRgen2_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\frog\CQRgen2\data\CQRgen2_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\frog\CQRgen2\data\CQRgen2_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\frog\CQRgen2\data\CQRgen2_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_frog_For_Shift: My_DF_Weapons_Attachments_frog_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_frog_For_Shift0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_frog_For_Shift1";
        model = "\My_DF_Weapons_Attachments\frog\For_Shift\For_Shift.p3d";
        itemSize[] = { 1, 2 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\frog\For_Shift\data\For_Shift_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\frog\For_Shift\data\For_Shift.rvmat"
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
                                "My_DF_Weapons_Attachments\frog\For_Shift\data\For_Shift.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\frog\For_Shift\data\For_Shift_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\frog\For_Shift\data\For_Shift_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\frog\For_Shift\data\For_Shift_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\frog\For_Shift\data\For_Shift_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_frog_Hera_CQR: My_DF_Weapons_Attachments_frog_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_frog_Hera_CQR0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_frog_Hera_CQR1";
        model = "\My_DF_Weapons_Attachments\frog\Hera_CQR\Hera_CQR.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.7, 0.7, 0.7 };
        swayModifier[] = { 1.1, 1.1, 1.1 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\frog\Hera_CQR\data\Hera_CQR_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\frog\Hera_CQR\data\Hera_CQR.rvmat"
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
                                "My_DF_Weapons_Attachments\frog\Hera_CQR\data\Hera_CQR.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\frog\Hera_CQR\data\Hera_CQR_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\frog\Hera_CQR\data\Hera_CQR_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\frog\Hera_CQR\data\Hera_CQR_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\frog\Hera_CQR\data\Hera_CQR_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_frog_Kac: My_DF_Weapons_Attachments_frog_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_frog_Kac0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_frog_Kac1";
        model = "\My_DF_Weapons_Attachments\frog\Kac\Kac.p3d";
        itemSize[] = { 1, 2 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\frog\Kac\data\Kac_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\frog\Kac\data\Kac.rvmat"
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
                                "My_DF_Weapons_Attachments\frog\Kac\data\Kac.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\frog\Kac\data\Kac_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\frog\Kac\data\Kac_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\frog\Kac\data\Kac_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\frog\Kac\data\Kac_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_frog_Mag_AFG: My_DF_Weapons_Attachments_frog_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_frog_Mag_AFG0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_frog_Mag_AFG1";
        model = "\My_DF_Weapons_Attachments\frog\Mag_AFG\Mag_AFG.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 1, 1, 1 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\frog\Mag_AFG\data\Mag_AFG_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\frog\Mag_AFG\data\Mag_AFG.rvmat"
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
                                "My_DF_Weapons_Attachments\frog\Mag_AFG\data\Mag_AFG.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\frog\Mag_AFG\data\Mag_AFG_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\frog\Mag_AFG\data\Mag_AFG_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\frog\Mag_AFG\data\Mag_AFG_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\frog\Mag_AFG\data\Mag_AFG_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_frog_MP7: My_DF_Weapons_Attachments_frog_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_frog_MP70";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_frog_MP71";
        model = "\My_DF_Weapons_Attachments\frog\MP7\MP7.p3d";
        itemSize[] = { 1, 2 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 1, 1, 1 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\frog\MP7\data\MP7_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\frog\MP7\data\MP7.rvmat"
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
                                "My_DF_Weapons_Attachments\frog\MP7\data\MP7.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\frog\MP7\data\MP7_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\frog\MP7\data\MP7_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\frog\MP7\data\MP7_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\frog\MP7\data\MP7_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_frog_P90_Std: My_DF_Weapons_Attachments_frog_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_frog_P90_Std0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_frog_P90_Std1";
        model = "\My_DF_Weapons_Attachments\frog\P90_Std\P90_Std.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\frog\P90_Std\data\P90_Std_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\frog\P90_Std\data\P90_Std.rvmat"
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
                                "My_DF_Weapons_Attachments\frog\P90_Std\data\P90_Std.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\frog\P90_Std\data\P90_Std_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\frog\P90_Std\data\P90_Std_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\frog\P90_Std\data\P90_Std_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\frog\P90_Std\data\P90_Std_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_frog_RTK: My_DF_Weapons_Attachments_frog_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_frog_RTK0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_frog_RTK1";
        model = "\My_DF_Weapons_Attachments\frog\RTK\RTK.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\frog\RTK\data\RTK_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\frog\RTK\data\RTK.rvmat"
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
                                "My_DF_Weapons_Attachments\frog\RTK\data\RTK.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\frog\RTK\data\RTK_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\frog\RTK\data\RTK_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\frog\RTK\data\RTK_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\frog\RTK\data\RTK_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_frog_Rvg: My_DF_Weapons_Attachments_frog_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_frog_Rvg0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_frog_Rvg1";
        model = "\My_DF_Weapons_Attachments\frog\Rvg\Rvg.p3d";
        itemSize[] = { 1, 2 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\frog\Rvg\data\Rvg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\frog\Rvg\data\Rvg.rvmat"
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
                                "My_DF_Weapons_Attachments\frog\Rvg\data\Rvg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\frog\Rvg\data\Rvg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\frog\Rvg\data\Rvg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\frog\Rvg\data\Rvg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\frog\Rvg\data\Rvg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_frog_SCAR: My_DF_Weapons_Attachments_frog_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_frog_SCAR0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_frog_SCAR1";
        model = "\My_DF_Weapons_Attachments\frog\SCAR\SCAR.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\frog\SCAR\data\SCAR_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\frog\SCAR\data\SCAR.rvmat"
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
                                "My_DF_Weapons_Attachments\frog\SCAR\data\SCAR.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\frog\SCAR\data\SCAR_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\frog\SCAR\data\SCAR_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\frog\SCAR\data\SCAR_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\frog\SCAR\data\SCAR_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_frog_SF900A: My_DF_Weapons_Attachments_frog_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_frog_SF900A0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_frog_SF900A1";
        model = "\My_DF_Weapons_Attachments\frog\SF900A\SF900A.p3d";
        itemSize[] = { 1, 2 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "BatteryD"
        };
        hiddenSelections[] = {
            "camo",
            "glass"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\frog\SF900A\data\SF900A_co.paa",
            "My_DF_Weapons_Attachments\data\glass_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\frog\SF900A\data\SF900A.rvmat",
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
                                "My_DF_Weapons_Attachments\frog\SF900A\data\SF900A.rvmat",
                                "My_DF_Weapons_Attachments\data\glass.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\frog\SF900A\data\SF900A_worn.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\frog\SF900A\data\SF900A_damage.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\frog\SF900A\data\SF900A_damage.rvmat",
                                "My_DF_Weapons_Attachments\data\glass_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\frog\SF900A\data\SF900A_destruct.rvmat",
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
    class My_DF_Weapons_Attachments_frog_SHIFTbev: My_DF_Weapons_Attachments_frog_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_frog_SHIFTbev0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_frog_SHIFTbev1";
        model = "\My_DF_Weapons_Attachments\frog\SHIFTbev\SHIFTbev.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\frog\SHIFTbev\data\SHIFTbev_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\frog\SHIFTbev\data\SHIFTbev.rvmat"
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
                                "My_DF_Weapons_Attachments\frog\SHIFTbev\data\SHIFTbev.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\frog\SHIFTbev\data\SHIFTbev_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\frog\SHIFTbev\data\SHIFTbev_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\frog\SHIFTbev\data\SHIFTbev_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\frog\SHIFTbev\data\SHIFTbev_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_bipod_Base;
    class My_DF_Weapons_Attachments_frog_SI: My_DF_Weapons_Attachments_bipod_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_frog_SI0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_frog_SI1";
        model = "\My_DF_Weapons_Attachments\frog\SI\SI.p3d";
        itemSize[] = { 1, 2 };
        recoilModifier[] = { 1.1, 1.1, 1.1 };
        swayModifier[] = { 1, 1, 1 };
        inventorySlot[] = {
            "DF_frog_down"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\frog\SI\data\SI_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\frog\SI\data\SI.rvmat"
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
                                "My_DF_Weapons_Attachments\frog\SI\data\SI.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\frog\SI\data\SI_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\frog\SI\data\SI_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\frog\SI\data\SI_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\frog\SI\data\SI_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_frog_SLR: My_DF_Weapons_Attachments_frog_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_frog_SLR0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_frog_SLR1";
        model = "\My_DF_Weapons_Attachments\frog\SLR\SLR.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 1, 1, 1 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\frog\SLR\data\SLR_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\frog\SLR\data\SLR.rvmat"
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
                                "My_DF_Weapons_Attachments\frog\SLR\data\SLR.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\frog\SLR\data\SLR_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\frog\SLR\data\SLR_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\frog\SLR\data\SLR_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\frog\SLR\data\SLR_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_frog_SmallStopper: My_DF_Weapons_Attachments_frog_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_frog_SmallStopper0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_frog_SmallStopper1";
        model = "\My_DF_Weapons_Attachments\frog\SmallStopper\SmallStopper.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 1, 1, 1 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\frog\SmallStopper\data\SmallStopper_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\frog\SmallStopper\data\SmallStopper.rvmat"
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
                                "My_DF_Weapons_Attachments\frog\SmallStopper\data\SmallStopper.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\frog\SmallStopper\data\SmallStopper_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\frog\SmallStopper\data\SmallStopper_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\frog\SmallStopper\data\SmallStopper_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\frog\SmallStopper\data\SmallStopper_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_frog_STFG: My_DF_Weapons_Attachments_frog_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_frog_STFG0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_frog_STFG1";
        model = "\My_DF_Weapons_Attachments\frog\STFG\STFG.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\frog\STFG\data\STFG_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\frog\STFG\data\STFG.rvmat"
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
                                "My_DF_Weapons_Attachments\frog\STFG\data\STFG.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\frog\STFG\data\STFG_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\frog\STFG\data\STFG_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\frog\STFG\data\STFG_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\frog\STFG\data\STFG_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_frog_Tan_MK46K: My_DF_Weapons_Attachments_frog_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_frog_Tan_MK46K0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_frog_Tan_MK46K1";
        model = "\My_DF_Weapons_Attachments\frog\Tan_MK46K\Tan_MK46K.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 1.05, 1.05, 1.05 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\frog\Tan_MK46K\data\Tan_MK46K_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\frog\Tan_MK46K\data\Tan_MK46K.rvmat"
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
                                "My_DF_Weapons_Attachments\frog\Tan_MK46K\data\Tan_MK46K.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\frog\Tan_MK46K\data\Tan_MK46K_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\frog\Tan_MK46K\data\Tan_MK46K_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\frog\Tan_MK46K\data\Tan_MK46K_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\frog\Tan_MK46K\data\Tan_MK46K_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_frog_ZenitRK125U: My_DF_Weapons_Attachments_frog_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_frog_ZenitRK125U0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_frog_ZenitRK125U1";
        model = "\My_DF_Weapons_Attachments\frog\ZenitRK125U\ZenitRK125U.p3d";
        itemSize[] = { 1, 2 };
        recoilModifier[] = { 1.1, 1.1, 1.1 };
        swayModifier[] = { 0.7, 0.7, 0.7 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\frog\ZenitRK125U\data\ZenitRK125U_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\frog\ZenitRK125U\data\ZenitRK125U.rvmat"
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
                                "My_DF_Weapons_Attachments\frog\ZenitRK125U\data\ZenitRK125U.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\frog\ZenitRK125U\data\ZenitRK125U_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\frog\ZenitRK125U\data\ZenitRK125U_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\frog\ZenitRK125U\data\ZenitRK125U_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\frog\ZenitRK125U\data\ZenitRK125U_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_frog_Zenit_RK0: My_DF_Weapons_Attachments_frog_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_frog_Zenit_RK00";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_frog_Zenit_RK01";
        model = "\My_DF_Weapons_Attachments\frog\Zenit_RK0\Zenit_RK0.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\frog\Zenit_RK0\data\Zenit_RK0_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\frog\Zenit_RK0\data\Zenit_RK0.rvmat"
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
                                "My_DF_Weapons_Attachments\frog\Zenit_RK0\data\Zenit_RK0.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\frog\Zenit_RK0\data\Zenit_RK0_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\frog\Zenit_RK0\data\Zenit_RK0_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\frog\Zenit_RK0\data\Zenit_RK0_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\frog\Zenit_RK0\data\Zenit_RK0_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
	class My_DF_Weapons_Attachments_frog_Half_handstop: My_DF_Weapons_Attachments_frog_Base
	{
		scope=2;
		displayName="$STR_My_DF_Weapons_Attachments_frog_Half_handstop0";
		descriptionShort="$STR_My_DF_Weapons_Attachments_frog_Half_handstop1";
		model="\My_DF_Weapons_Attachments\frog\Half_handstop\Half_handstop.p3d";
		itemSize[]={1,1};
		recoilModifier[]={0.85,0.85,0.85};
		swayModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"My_DF_Weapons_Attachments\frog\Half_handstop\data\Half_handstop_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"My_DF_Weapons_Attachments\frog\Half_handstop\data\Half_handstop.rvmat"
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
								"My_DF_Weapons_Attachments\frog\Half_handstop\data\Half_handstop.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"My_DF_Weapons_Attachments\frog\Half_handstop\data\Half_handstop_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"My_DF_Weapons_Attachments\frog\Half_handstop\data\Half_handstop_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"My_DF_Weapons_Attachments\frog\Half_handstop\data\Half_handstop_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"My_DF_Weapons_Attachments\frog\Half_handstop\data\Half_handstop_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};