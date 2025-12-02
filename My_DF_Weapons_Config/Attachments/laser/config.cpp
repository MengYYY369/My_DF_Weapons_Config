class CfgPatches
{
	class My_DF_Weapons_Attachments_laser_config
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"DZ_Data",
			"My_DF_Weapons_Attachments_laser"
		};
	};
};
class CfgVehicles
{
    class My_DF_Weapons_Attachments_laser_Base;
    class My_DF_Weapons_Attachments_laser_DBAL_X2: My_DF_Weapons_Attachments_laser_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_laser_DBAL_X20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_laser_DBAL_X21";
        model = "\My_DF_Weapons_Attachments\laser\DBAL_X2\DBAL_X2.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 1.1, 1.1, 1.1 };
        swayModifier[] = { 1.1, 1.1, 1.1 };
        attachments[] = {
            "BatteryD"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\laser\DBAL_X2\data\DBAL_X2_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\laser\DBAL_X2\data\DBAL_X2.rvmat"
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
                                "My_DF_Weapons_Attachments\laser\DBAL_X2\data\DBAL_X2.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\laser\DBAL_X2\data\DBAL_X2_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\laser\DBAL_X2\data\DBAL_X2_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\laser\DBAL_X2\data\DBAL_X2_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\laser\DBAL_X2\data\DBAL_X2_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_laser_peq2: My_DF_Weapons_Attachments_laser_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_laser_peq20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_laser_peq21";
        model = "\My_DF_Weapons_Attachments\laser\peq2\peq2.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 1.1, 1.1, 1.1 };
        swayModifier[] = { 1.1, 1.1, 1.1 };
        attachments[] = {
            "BatteryD"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\laser\peq2\data\peq2_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\laser\peq2\data\peq2.rvmat"
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
                                "My_DF_Weapons_Attachments\laser\peq2\data\peq2.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\laser\peq2\data\peq2_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\laser\peq2\data\peq2_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\laser\peq2\data\peq2_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\laser\peq2\data\peq2_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_laser_PEQ25: My_DF_Weapons_Attachments_laser_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_laser_PEQ250";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_laser_PEQ251";
        model = "\My_DF_Weapons_Attachments\laser\PEQ25\PEQ25.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 1.1, 1.1, 1.1 };
        swayModifier[] = { 1.1, 1.1, 1.1 };
        attachments[] = {
            "BatteryD"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\laser\PEQ25\data\PEQ25_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\laser\PEQ25\data\PEQ25.rvmat"
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
                                "My_DF_Weapons_Attachments\laser\PEQ25\data\PEQ25.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\laser\PEQ25\data\PEQ25_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\laser\PEQ25\data\PEQ25_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\laser\PEQ25\data\PEQ25_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\laser\PEQ25\data\PEQ25_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_laser_Pistol: My_DF_Weapons_Attachments_laser_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_laser_Pistol0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_laser_Pistol1";
        model = "\My_DF_Weapons_Attachments\laser\Pistol\Pistol.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 1.1, 1.1, 1.1 };
        swayModifier[] = { 1.1, 1.1, 1.1 };
        attachments[] = {
            "BatteryD"
        };
        inventorySlot[] = {
            "pistolFlashlight"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\laser\Pistol\data\Pistol_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\laser\Pistol\data\Pistol.rvmat"
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
                                "My_DF_Weapons_Attachments\laser\Pistol\data\Pistol.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\laser\Pistol\data\Pistol_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\laser\Pistol\data\Pistol_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\laser\Pistol\data\Pistol_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\laser\Pistol\data\Pistol_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_laser_prest4: My_DF_Weapons_Attachments_laser_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_laser_prest40";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_laser_prest41";
        model = "\My_DF_Weapons_Attachments\laser\prest4\prest4.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 1.1, 1.1, 1.1 };
        swayModifier[] = { 1.1, 1.1, 1.1 };
        attachments[] = {
            "BatteryD"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\laser\prest4\data\prest4_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\laser\prest4\data\prest4.rvmat"
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
                                "My_DF_Weapons_Attachments\laser\prest4\data\prest4.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\laser\prest4\data\prest4_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\laser\prest4\data\prest4_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\laser\prest4\data\prest4_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\laser\prest4\data\prest4_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
};