class CfgPatches
{
	class My_DF_Weapons_Attachments_pisg_config
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"DZ_Data",
			"My_DF_Weapons_Attachments_pisg"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
    class My_DF_Weapons_Attachments_pisg_Base;
    class My_DF_Weapons_Attachments_pisg_93RAdv: My_DF_Weapons_Attachments_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_93RAdv0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_93RAdv1";
        model = "\My_DF_Weapons_Attachments\pisg\93RAdv\93RAdv.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_pisg_93R"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\93RAdv\data\93RAdv_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\93RAdv\data\93RAdv.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\93RAdv\data\93RAdv.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\93RAdv\data\93RAdv_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\93RAdv\data\93RAdv_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\93RAdv\data\93RAdv_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\93RAdv\data\93RAdv_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_93RErgo: My_DF_Weapons_Attachments_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_93RErgo0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_93RErgo1";
        model = "\My_DF_Weapons_Attachments\pisg\93RErgo\93RErgo.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_pisg_93R"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\93RErgo\data\93RErgo_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\93RErgo\data\93RErgo.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\93RErgo\data\93RErgo.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\93RErgo\data\93RErgo_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\93RErgo\data\93RErgo_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\93RErgo\data\93RErgo_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\93RErgo\data\93RErgo_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_93RSteady: My_DF_Weapons_Attachments_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_93RSteady0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_93RSteady1";
        model = "\My_DF_Weapons_Attachments\pisg\93RSteady\93RSteady.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_pisg_93R"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\93RSteady\data\93RSteady_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\93RSteady\data\93RSteady.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\93RSteady\data\93RSteady.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\93RSteady\data\93RSteady_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\93RSteady\data\93RSteady_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\93RSteady\data\93RSteady_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\93RSteady\data\93RSteady_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_ak_pisg_Base;
    class My_DF_Weapons_Attachments_pisg_AK100: My_DF_Weapons_Attachments_ak_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_AK1000";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_AK1001";
        model = "\My_DF_Weapons_Attachments\pisg\AK100\AK100.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\AK100\data\AK100_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\AK100\data\AK100.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AK100.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AK100_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AK100_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AK100_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AK100_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_AKS: My_DF_Weapons_Attachments_ak_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_AKS0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_AKS1";
        model = "\My_DF_Weapons_Attachments\pisg\AK100\AK100.p3d";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\AK100\data\AKS_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\AK100\data\AKS.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AKS.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AKS_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AKS_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AKS_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\AK100\data\AKS_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_AK12: My_DF_Weapons_Attachments_ak_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_AK120";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_AK121";
        model = "\My_DF_Weapons_Attachments\pisg\AK12\AK12.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\AK12\data\pisg\AK12_pisg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\AK12\data\pisg\AK12_pisg.rvmat"
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
                                "My_DF_Weapons_Rifles\AK12\data\pisg\AK12_pisg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\AK12\data\pisg\AK12_pisg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\AK12\data\pisg\AK12_pisg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\AK12\data\pisg\AK12_pisg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\AK12\data\pisg\AK12_pisg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_AK74: My_DF_Weapons_Attachments_ak_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_AK740";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_AK741";
        model = "\My_DF_Weapons_Attachments\pisg\AK74\AK74.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\AK74\data\AK74_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\AK74\data\AK74.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\AK74\data\AK74.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\AK74\data\AK74_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\AK74\data\AK74_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\AK74\data\AK74_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\AK74\data\AK74_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_AKframe: My_DF_Weapons_Attachments_ak_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_AKframe0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_AKframe1";
        model = "\My_DF_Weapons_Attachments\pisg\AKframe\AKframe.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\AKframe\data\AKframe_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\AKframe\data\AKframe.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\AKframe\data\AKframe.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\AKframe\data\AKframe_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\AKframe\data\AKframe_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\AKframe\data\AKframe_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\AKframe\data\AKframe_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_AKHouger: My_DF_Weapons_Attachments_ak_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_AKHouger0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_AKHouger1";
        model = "\My_DF_Weapons_Attachments\pisg\AKHouger\AKHouger.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        attachments[] = {
            "DF_pisg_AKHouger"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\AKHouger\data\AKHouger_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\AKHouger\data\AKHouger.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\AKHouger\data\AKHouger.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\AKHouger\data\AKHouger_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\AKHouger\data\AKHouger_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\AKHouger\data\AKHouger_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\AKHouger\data\AKHouger_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_other_PSGbass1: Inventory_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_PSGbass10";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_PSGbass11";
        model = "\My_DF_Weapons_Attachments\pisg\AKHouger\PSGbass1\PSGbass1.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_pisg_AKHouger"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\AKHouger\PSGbass1\data\PSGbass_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\AKHouger\PSGbass1\data\PSGbass.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\AKHouger\PSGbass1\data\PSGbass.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\AKHouger\PSGbass1\data\PSGbass_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\AKHouger\PSGbass1\data\PSGbass_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\AKHouger\PSGbass1\data\PSGbass_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\AKHouger\PSGbass1\data\PSGbass_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_PSGbass2: Inventory_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_PSGbass20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_PSGbass21";
        model = "\My_DF_Weapons_Attachments\pisg\AKHouger\PSGbass2\PSGbass2.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_pisg_AKHouger"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\AKHouger\PSGbass1\data\PSGbass_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\AKHouger\PSGbass1\data\PSGbass.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\AKHouger\PSGbass1\data\PSGbass.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\AKHouger\PSGbass1\data\PSGbass_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\AKHouger\PSGbass1\data\PSGbass_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\AKHouger\PSGbass1\data\PSGbass_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\AKHouger\PSGbass1\data\PSGbass_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_pisg_AKpsg: My_DF_Weapons_Attachments_ak_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_AKpsg0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_AKpsg1";
        model = "\My_DF_Weapons_Attachments\pisg\AKpsg\AKpsg.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\AKpsg\data\AKpsg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\AKpsg\data\AKpsg.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\AKpsg\data\AKpsg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\AKpsg\data\AKpsg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\AKpsg\data\AKpsg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\AKpsg\data\AKpsg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\AKpsg\data\AKpsg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_ar_pisg_Base;
    class My_DF_Weapons_Attachments_pisg_ARProGrip: My_DF_Weapons_Attachments_ar_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_ARProGrip0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_ARProGrip1";
        model = "\My_DF_Weapons_Attachments\pisg\ARProGrip\ARProGrip.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        attachments[] = {
            "DF_ar_pisg_ext"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\ARProGrip\data\ARProGrip_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\ARProGrip\data\ARProGrip.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\ARProGrip\data\ARProGrip.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\ARProGrip\data\ARProGrip_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\ARProGrip\data\ARProGrip_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\ARProGrip\data\ARProGrip_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\ARProGrip\data\ARProGrip_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_ARProBalance: Inventory_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_ARProBalance0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_ARProBalance1";
        model = "\My_DF_Weapons_Attachments\pisg\ARProGrip\ARProBalance.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_ar_pisg_ext"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\ARProGrip\data\Balance\ARProGrip_Balance_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\ARProGrip\data\Balance\ARProGrip_Balance.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\ARProGrip\data\Balance\ARProGrip_Balance.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\ARProGrip\data\Balance\ARProGrip_Balance_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\ARProGrip\data\Balance\ARProGrip_Balance_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\ARProGrip\data\Balance\ARProGrip_Balance_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\ARProGrip\data\Balance\ARProGrip_Balance_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_ARProHeavy: Inventory_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_ARProHeavy0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_ARProHeavy1";
        model = "\My_DF_Weapons_Attachments\pisg\ARProGrip\ARProHeavy.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_ar_pisg_ext"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\ARProGrip\data\Heavy\ARProGrip_Heavy_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\ARProGrip\data\Heavy\ARProGrip_Heavy.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\ARProGrip\data\Heavy\ARProGrip_Heavy.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\ARProGrip\data\Heavy\ARProGrip_Heavy_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\ARProGrip\data\Heavy\ARProGrip_Heavy_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\ARProGrip\data\Heavy\ARProGrip_Heavy_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\ARProGrip\data\Heavy\ARProGrip_Heavy_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_ARProStd: Inventory_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_ARProStd0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_ARProStd1";
        model = "\My_DF_Weapons_Attachments\pisg\ARProGrip\ARProStd.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_ar_pisg_ext"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\ARProGrip\data\Std\ARProGrip_Std_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\ARProGrip\data\Std\ARProGrip_Std.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\ARProGrip\data\Std\ARProGrip_Std.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\ARProGrip\data\Std\ARProGrip_Std_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\ARProGrip\data\Std\ARProGrip_Std_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\ARProGrip\data\Std\ARProGrip_Std_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\ARProGrip\data\Std\ARProGrip_Std_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_ARpsg: My_DF_Weapons_Attachments_ar_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_ARpsg0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_ARpsg1";
        model = "\My_DF_Weapons_Attachments\pisg\ARpsg\ARpsg.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\ARpsg\data\ARpsg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\ARpsg\data\ARpsg.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\ARpsg\data\ARpsg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\ARpsg\data\ARpsg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\ARpsg\data\ARpsg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\ARpsg\data\ARpsg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\ARpsg\data\ARpsg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_ASVAL: My_DF_Weapons_Attachments_ak_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_ASVAL0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_ASVAL1";
        model = "\My_DF_Weapons_Attachments\pisg\ASVAL\ASVAL.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\ASVAL\data\ASVAL_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\ASVAL\data\ASVAL.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\ASVAL\data\ASVAL.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\ASVAL\data\ASVAL_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\ASVAL\data\ASVAL_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\ASVAL\data\ASVAL_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\ASVAL\data\ASVAL_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_CAR15_pisg: My_DF_Weapons_Attachments_ar_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_CAR15_pisg0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_CAR15_pisg1";
        model = "\My_DF_Weapons_Attachments\pisg\CAR15_pisg\CAR15_pisg.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\CAR15_pisg\data\CAR15_pisg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\CAR15_pisg\data\CAR15_pisg.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\CAR15_pisg\data\CAR15_pisg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\CAR15_pisg\data\CAR15_pisg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\CAR15_pisg\data\CAR15_pisg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\CAR15_pisg\data\CAR15_pisg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\CAR15_pisg\data\CAR15_pisg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_ColtPythonCarbine_pisg: My_DF_Weapons_Attachments_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_ColtPythonCarbine_pisg0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_ColtPythonCarbine_pisg1";
        model = "\My_DF_Weapons_Attachments\pisg\ColtPythonCarbine_pisg\ColtPythonCarbine_pisg.p3d";
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        inventorySlot[] = {
            "DF_pisg_ColtPython"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\ColtPythonCarbine_pisg\data\ColtPythonCarbine_pisg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\ColtPythonCarbine_pisg\data\ColtPythonCarbine_pisg.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\ColtPythonCarbine_pisg\data\ColtPythonCarbine_pisg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\ColtPythonCarbine_pisg\data\ColtPythonCarbine_pisg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\ColtPythonCarbine_pisg\data\ColtPythonCarbine_pisg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\ColtPythonCarbine_pisg\data\ColtPythonCarbine_pisg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\ColtPythonCarbine_pisg\data\ColtPythonCarbine_pisg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_DeagleErgo: My_DF_Weapons_Attachments_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_DeagleErgo0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_DeagleErgo1";
        model = "\My_DF_Weapons_Attachments\pisg\DeagleErgo\DeagleErgo.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_pisg_deagle"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\DeagleErgo\data\DeagleErgo_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\DeagleErgo\data\DeagleErgo.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\DeagleErgo\data\DeagleErgo.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\DeagleErgo\data\DeagleErgo_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\DeagleErgo\data\DeagleErgo_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\DeagleErgo\data\DeagleErgo_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\DeagleErgo\data\DeagleErgo_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_G18cAdv: My_DF_Weapons_Attachments_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_G18cAdv0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_G18cAdv1";
        model = "\My_DF_Weapons_Attachments\pisg\G18cAdv\G18cAdv.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_pisg_Glock"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\G18cAdv\data\G18cAdv_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\G18cAdv\data\G18cAdv.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\G18cAdv\data\G18cAdv.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\G18cAdv\data\G18cAdv_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\G18cAdv\data\G18cAdv_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\G18cAdv\data\G18cAdv_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\G18cAdv\data\G18cAdv_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_G18cFriction: My_DF_Weapons_Attachments_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_G18cFriction0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_G18cFriction1";
        model = "\My_DF_Weapons_Attachments\pisg\G18cFriction\G18cFriction.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_pisg_Glock"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\G18cFriction\data\G18cFriction_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\G18cFriction\data\G18cFriction.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\G18cFriction\data\G18cFriction.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\G18cFriction\data\G18cFriction_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\G18cFriction\data\G18cFriction_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\G18cFriction\data\G18cFriction_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\G18cFriction\data\G18cFriction_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_G18cSteady: My_DF_Weapons_Attachments_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_G18cSteady0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_G18cSteady1";
        model = "\My_DF_Weapons_Attachments\pisg\G18cSteady\G18cSteady.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_pisg_Glock"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\G18cSteady\data\G18cSteady_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\G18cSteady\data\G18cSteady.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\G18cSteady\data\G18cSteady.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\G18cSteady\data\G18cSteady_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\G18cSteady\data\G18cSteady_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\G18cSteady\data\G18cSteady_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\G18cSteady\data\G18cSteady_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_g3: My_DF_Weapons_Attachments_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_g30";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_g31";
        model = "\My_DF_Weapons_Attachments\pisg\g3\g3.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_pisg_G3"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\g3\data\g3_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\g3\data\g3.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\g3\data\g3.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\g3\data\g3_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\g3\data\g3_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\g3\data\g3_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\g3\data\g3_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_G3frame: My_DF_Weapons_Attachments_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_G3frame0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_G3frame1";
        model = "\My_DF_Weapons_Attachments\pisg\G3frame\G3frame.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_pisg_G3"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\G3frame\data\G3frame_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\G3frame\data\G3frame.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\G3frame\data\G3frame.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\G3frame\data\G3frame_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\G3frame\data\G3frame_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\G3frame\data\G3frame_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\G3frame\data\G3frame_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_g3psg1: My_DF_Weapons_Attachments_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_g3psg10";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_g3psg11";
        model = "\My_DF_Weapons_Attachments\pisg\g3psg1\g3psg1.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_pisg_G3"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\g3psg1\data\g3psg1_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\g3psg1\data\g3psg1.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\g3psg1\data\g3psg1.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\g3psg1\data\g3psg1_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\g3psg1\data\g3psg1_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\g3psg1\data\g3psg1_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\g3psg1\data\g3psg1_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_GRALS: My_DF_Weapons_Attachments_ar_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_GRALS0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_GRALS1";
        model = "\My_DF_Weapons_Attachments\pisg\GRALS\GRALS.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\GRALS\data\GRALS_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\GRALS\data\GRALS.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\GRALS\data\GRALS.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\GRALS\data\GRALS_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\GRALS\data\GRALS_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\GRALS\data\GRALS_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\GRALS\data\GRALS_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_Izh_Polymer: My_DF_Weapons_Attachments_ak_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_Izh_Polymer0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_Izh_Polymer1";
        model = "\My_DF_Weapons_Attachments\pisg\Izh_Polymer\Izh_Polymer.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\Izh_Polymer\data\Izh_Polymer_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\Izh_Polymer\data\Izh_Polymer.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\Izh_Polymer\data\Izh_Polymer.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\Izh_Polymer\data\Izh_Polymer_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\Izh_Polymer\data\Izh_Polymer_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\Izh_Polymer\data\Izh_Polymer_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\Izh_Polymer\data\Izh_Polymer_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_K416_pisg: My_DF_Weapons_Attachments_ar_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_K416_pisg0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_K416_pisg1";
        model = "\My_DF_Weapons_Attachments\pisg\K416_pisg\K416_pisg.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\K416\data\pisg\K416_pisg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\K416\data\pisg\K416_pisg.rvmat"
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
                                "My_DF_Weapons_Rifles\K416\data\pisg\K416_pisg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\K416\data\pisg\K416_pisg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\K416\data\pisg\K416_pisg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\K416\data\pisg\K416_pisg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\K416\data\pisg\K416_pisg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_K437_pisg: My_DF_Weapons_Attachments_ar_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_K437_pisg0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_K437_pisg1";
        model = "\My_DF_Weapons_Attachments\pisg\K437_pisg\K437_pisg.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\K437\data\pisg\K437_pisg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\K437\data\pisg\K437_pisg.rvmat"
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
                                "My_DF_Weapons_Rifles\K437\data\pisg\K437_pisg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\K437\data\pisg\K437_pisg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\K437\data\pisg\K437_pisg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\K437\data\pisg\K437_pisg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\K437\data\pisg\K437_pisg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_KC17_pisg: My_DF_Weapons_Attachments_ar_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_KC17_pisg0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_KC17_pisg1";
        model = "\My_DF_Weapons_Attachments\pisg\KC17_pisg\KC17_pisg.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\KC17\data\pisg\KC17_pisg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\KC17\data\pisg\KC17_pisg.rvmat"
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
                                "My_DF_Weapons_Rifles\KC17\data\pisg\KC17_pisg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\KC17\data\pisg\KC17_pisg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\KC17\data\pisg\KC17_pisg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\KC17\data\pisg\KC17_pisg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\KC17\data\pisg\KC17_pisg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_M1911Tac_pisg: My_DF_Weapons_Attachments_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_M1911Tac_pisg0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_M1911Tac_pisg1";
        model = "\My_DF_Weapons_Attachments\pisg\M1911Tac_pisg\M1911Tac_pisg.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_pisg_M1911"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\M1911Tac_pisg\data\M1911Tac_pisg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\M1911Tac_pisg\data\M1911Tac_pisg.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\M1911Tac_pisg\data\M1911Tac_pisg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\M1911Tac_pisg\data\M1911Tac_pisg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\M1911Tac_pisg\data\M1911Tac_pisg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\M1911Tac_pisg\data\M1911Tac_pisg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\M1911Tac_pisg\data\M1911Tac_pisg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_M250psg: My_DF_Weapons_Attachments_ar_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_M250psg0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_M250psg1";
        model = "\My_DF_Weapons_Attachments\pisg\M250psg\M250psg.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_LMG\M250\data\pisg\M250_pisg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_LMG\M250\data\pisg\M250_pisg.rvmat"
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
                                "My_DF_Weapons_LMG\M250\data\pisg\M250_pisg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_LMG\M250\data\pisg\M250_pisg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_LMG\M250\data\pisg\M250_pisg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_LMG\M250\data\pisg\M250_pisg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_LMG\M250\data\pisg\M250_pisg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_M40A6: My_DF_Weapons_Attachments_ak_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_M40A60";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_M40A61";
        model = "\My_DF_Weapons_Attachments\pisg\M40A6\M40A6.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\M40A6\data\M40A6_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\M40A6\data\M40A6.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\M40A6\data\M40A6.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\M40A6\data\M40A6_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\M40A6\data\M40A6_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\M40A6\data\M40A6_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\M40A6\data\M40A6_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_M4A1_std: My_DF_Weapons_Attachments_ar_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_M4A1_std0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_M4A1_std1";
        model = "\My_DF_Weapons_Attachments\pisg\M4A1_std\M4A1_std.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\M4A1_std\data\M4A1_std_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_M7: My_DF_Weapons_Attachments_ar_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_M70";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_M71";
        model = "\My_DF_Weapons_Attachments\pisg\M7\M7.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\M7\data\pisg\M7_pisg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\M7\data\pisg\M7_pisg.rvmat"
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
                                "My_DF_Weapons_Rifles\M7\data\pisg\M7_pisg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\M7\data\pisg\M7_pisg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\M7\data\pisg\M7_pisg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\M7\data\pisg\M7_pisg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\M7\data\pisg\M7_pisg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_Mag_MOE1: My_DF_Weapons_Attachments_ar_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_Mag_MOE10";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_Mag_MOE11";
        model = "\My_DF_Weapons_Attachments\pisg\Mag_MOE\Mag_MOE1.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo",
            "camo2"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\Mag_MOE_co.paa",
            "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\SpeedGripTape_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\Mag_MOE.rvmat",
            "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\SpeedGripTape.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\Mag_MOE.rvmat",
                                "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\SpeedGripTape.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\Mag_MOE_worn.rvmat",
                                "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\SpeedGripTape_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\Mag_MOE_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\SpeedGripTape_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\Mag_MOE_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\SpeedGripTape_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\Mag_MOE_destruct.rvmat",
                                "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\SpeedGripTape_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_Mag_MOE2: My_DF_Weapons_Attachments_ar_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_Mag_MOE20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_Mag_MOE21";
        model = "\My_DF_Weapons_Attachments\pisg\Mag_MOE\Mag_MOE2.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        hiddenSelections[] = {
            "camo",
            "camo2"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\Mag_MOE_co.paa",
            "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\StableGripTape_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\Mag_MOE.rvmat",
            "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\StableGripTape.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\Mag_MOE.rvmat",
                                "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\StableGripTape.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\Mag_MOE_worn.rvmat",
                                "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\StableGripTape_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\Mag_MOE_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\StableGripTape_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\Mag_MOE_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\StableGripTape_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\Mag_MOE_destruct.rvmat",
                                "My_DF_Weapons_Attachments\pisg\Mag_MOE\data\StableGripTape_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_MK47_pisg: My_DF_Weapons_Attachments_ar_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_MK47_pisg0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_MK47_pisg1";
        model = "\My_DF_Weapons_Attachments\pisg\MK47_pisg\MK47_pisg.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\MK47\data\pisg\MK47_pisg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\MK47\data\pisg\MK47_pisg.rvmat"
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
                                "My_DF_Weapons_Rifles\MK47\data\pisg\MK47_pisg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\MK47\data\pisg\MK47_pisg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\MK47\data\pisg\MK47_pisg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\MK47\data\pisg\MK47_pisg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\MK47\data\pisg\MK47_pisg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_MOE_K2: My_DF_Weapons_Attachments_ar_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_MOE_K20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_MOE_K21";
        model = "\My_DF_Weapons_Attachments\pisg\MOE_K2\MOE_K2.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\MOE_K2\data\MOE_K2_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\MOE_K2\data\MOE_K2.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\MOE_K2\data\MOE_K2.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\MOE_K2\data\MOE_K2_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\MOE_K2\data\MOE_K2_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\MOE_K2\data\MOE_K2_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\MOE_K2\data\MOE_K2_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_MORE: My_DF_Weapons_Attachments_ar_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_MORE0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_MORE1";
        model = "\My_DF_Weapons_Attachments\pisg\MORE\MORE.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\MORE\data\MORE_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\MORE\data\MORE.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\MORE\data\MORE.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\MORE\data\MORE_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\MORE\data\MORE_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\MORE\data\MORE_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\MORE\data\MORE_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_mp7psg: My_DF_Weapons_Attachments_ak_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_mp7psg0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_mp7psg1";
        model = "\My_DF_Weapons_Attachments\pisg\mp7psg\mp7psg.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_pisg_MP7"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\mp7psg\data\mp7psg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\mp7psg\data\mp7psg.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\mp7psg\data\mp7psg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\mp7psg\data\mp7psg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\mp7psg\data\mp7psg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\mp7psg\data\mp7psg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\mp7psg\data\mp7psg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_mp7psg2: My_DF_Weapons_Attachments_ak_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_mp7psg20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_mp7psg21";
        model = "\My_DF_Weapons_Attachments\pisg\mp7psg2\mp7psg2.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_pisg_MP7"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\mp7psg2\data\mp7psg2_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\mp7psg2\data\mp7psg2.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\mp7psg2\data\mp7psg2.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\mp7psg2\data\mp7psg2_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\mp7psg2\data\mp7psg2_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\mp7psg2\data\mp7psg2_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\mp7psg2\data\mp7psg2_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_PKM: My_DF_Weapons_Attachments_ak_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_PKM0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_PKM1";
        model = "\My_DF_Weapons_Attachments\pisg\PKM\PKM.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo",
            "tape"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\PKM\data\PKM_co.paa",
            "My_DF_Weapons_Attachments\pisg\PKM\data\tape\PKM_tape_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\PKM\data\PKM.rvmat",
            "My_DF_Weapons_Attachments\pisg\PKM\data\tape\PKM_tape.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\PKM\data\PKM.rvmat",
                                "My_DF_Weapons_Attachments\pisg\PKM\data\tape\PKM_tape.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\PKM\data\PKM_worn.rvmat",
                                "My_DF_Weapons_Attachments\pisg\PKM\data\tape\PKM_tape_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\PKM\data\PKM_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\PKM\data\tape\PKM_tape_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\PKM\data\PKM_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\PKM\data\tape\PKM_tape_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\PKM\data\PKM_destruct.rvmat",
                                "My_DF_Weapons_Attachments\pisg\PKM\data\tape\PKM_tape_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_PLA_pisg_Base;
    class My_DF_Weapons_Attachments_pisg_QBZ191: My_DF_Weapons_Attachments_PLA_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_QBZ1910";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_QBZ1911";
        model = "\My_DF_Weapons_Attachments\pisg\QBZ191\QBZ191.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\QBZ191\data\QBZ191_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\QBZ191\data\QBZ191.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\QBZ191\data\QBZ191.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\QBZ191\data\QBZ191_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\QBZ191\data\QBZ191_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\QBZ191\data\QBZ191_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\QBZ191\data\QBZ191_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_QBZ191heavy: My_DF_Weapons_Attachments_PLA_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_QBZ191heavy0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_QBZ191heavy1";
        model = "\My_DF_Weapons_Attachments\pisg\QBZ191heavy\QBZ191heavy.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\QBZ191heavy\data\QBZ191heavy_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\QBZ191heavy\data\QBZ191heavy.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\QBZ191heavy\data\QBZ191heavy.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\QBZ191heavy\data\QBZ191heavy_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\QBZ191heavy\data\QBZ191heavy_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\QBZ191heavy\data\QBZ191heavy_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\QBZ191heavy\data\QBZ191heavy_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_QBZ191light: My_DF_Weapons_Attachments_PLA_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_QBZ191light0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_QBZ191light1";
        model = "\My_DF_Weapons_Attachments\pisg\QBZ191light\QBZ191light.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\QBZ191light\data\QBZ191light_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\QBZ191light\data\QBZ191light.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\QBZ191light\data\QBZ191light.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\QBZ191light\data\QBZ191light_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\QBZ191light\data\QBZ191light_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\QBZ191light\data\QBZ191light_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\QBZ191light\data\QBZ191light_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_QBZ95_pisg: My_DF_Weapons_Attachments_PLA_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_QBZ95_pisg0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_QBZ95_pisg1";
        model = "\My_DF_Weapons_Attachments\pisg\QBZ95_pisg\QBZ95_pisg.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\QBZ95\data\pisg\QBZ95_pisg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\QBZ95\data\pisg\QBZ95_pisg.rvmat"
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
                                "My_DF_Weapons_Rifles\QBZ95\data\pisg\QBZ95_pisg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\QBZ95\data\pisg\QBZ95_pisg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\QBZ95\data\pisg\QBZ95_pisg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\QBZ95\data\pisg\QBZ95_pisg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\QBZ95\data\pisg\QBZ95_pisg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_QBZBalance: My_DF_Weapons_Attachments_PLA_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_QBZBalance0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_QBZBalance1";
        model = "\My_DF_Weapons_Attachments\pisg\QBZBalance\QBZBalance.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\QBZBalance\data\QBZBalance_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\QBZBalance\data\QBZBalance.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\QBZBalance\data\QBZBalance.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\QBZBalance\data\QBZBalance_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\QBZBalance\data\QBZBalance_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\QBZBalance\data\QBZBalance_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\QBZBalance\data\QBZBalance_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_QCQ171_pisg: My_DF_Weapons_Attachments_PLA_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_QCQ171_pisg0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_QCQ171_pisg1";
        model = "\My_DF_Weapons_Attachments\pisg\QCQ171_pisg\QCQ171_pisg.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\QCQ171\data\pisg\QCQ171_pisg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\QCQ171\data\pisg\QCQ171_pisg.rvmat"
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
                                "My_DF_Weapons_SMG\QCQ171\data\pisg\QCQ171_pisg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\QCQ171\data\pisg\QCQ171_pisg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\QCQ171\data\pisg\QCQ171_pisg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\QCQ171\data\pisg\QCQ171_pisg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\QCQ171\data\pisg\QCQ171_pisg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_QJB201_pisg: My_DF_Weapons_Attachments_PLA_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_QJB201_pisg0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_QJB201_pisg1";
        model = "\My_DF_Weapons_Attachments\pisg\QJB201_pisg\QJB201_pisg.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\QJB201_pisg\data\QJB201_pisg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\QJB201_pisg\data\QJB201_pisg.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\QJB201_pisg\data\QJB201_pisg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\QJB201_pisg\data\QJB201_pisg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\QJB201_pisg\data\QJB201_pisg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\QJB201_pisg\data\QJB201_pisg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\QJB201_pisg\data\QJB201_pisg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_Revolver_pisg: My_DF_Weapons_Attachments_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_Revolver_pisg0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_Revolver_pisg1";
        model = "\My_DF_Weapons_Attachments\pisg\Revolver_pisg\Revolver_pisg.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        attachments[] = {
            "DF_stock_Revolver"
        };
        inventorySlot[] = {
            "DF_pisg_ColtPython"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\Revolver_pisg\data\Revolver_pisg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\Revolver_pisg\data\Revolver_pisg.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\Revolver_pisg\data\Revolver_pisg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\Revolver_pisg\data\Revolver_pisg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\Revolver_pisg\data\Revolver_pisg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\Revolver_pisg\data\Revolver_pisg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\Revolver_pisg\data\Revolver_pisg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_RK3: My_DF_Weapons_Attachments_ak_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_RK30";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_RK31";
        model = "\My_DF_Weapons_Attachments\pisg\RK3\RK3.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\RK3\data\RK3_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\RK3\data\RK3.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\RK3\data\RK3.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\RK3\data\RK3_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\RK3\data\RK3_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\RK3\data\RK3_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\RK3\data\RK3_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_scorpius: My_DF_Weapons_Attachments_ak_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_scorpius0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_scorpius1";
        model = "\My_DF_Weapons_Attachments\pisg\scorpius\scorpius.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\scorpius\data\scorpius_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\scorpius\data\scorpius.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\scorpius\data\scorpius.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\scorpius\data\scorpius_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\scorpius\data\scorpius_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\scorpius\data\scorpius_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\scorpius\data\scorpius_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_SG553_pisg: My_DF_Weapons_Attachments_ak_pisg_Base
    {
        scope = 0;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_SG553_pisg0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_SG553_pisg1";
        model = "\My_DF_Weapons_Attachments\pisg\SG553_pisg\SG553_pisg.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\SG553_pisg\data\SG553_pisg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\SG553_pisg\data\SG553_pisg.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\SG553_pisg\data\SG553_pisg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\SG553_pisg\data\SG553_pisg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\SG553_pisg\data\SG553_pisg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\SG553_pisg\data\SG553_pisg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\SG553_pisg\data\SG553_pisg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_SI25: My_DF_Weapons_Attachments_ar_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_SI250";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_SI251";
        model = "\My_DF_Weapons_Attachments\pisg\SI25\SI25.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\pisg\SI25\data\SI25_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\pisg\SI25\data\SI25.rvmat"
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
                                "My_DF_Weapons_Attachments\pisg\SI25\data\SI25.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\pisg\SI25\data\SI25_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\pisg\SI25\data\SI25_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\pisg\SI25\data\SI25_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\pisg\SI25\data\SI25_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_pisg_SMG45_pisg: My_DF_Weapons_Attachments_ar_pisg_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_pisg_SMG45_pisg0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_pisg_SMG45_pisg1";
        model = "\My_DF_Weapons_Attachments\pisg\SMG45_pisg\SMG45_pisg.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\SMG45\data\pisg\SMG45_pisg_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\SMG45\data\pisg\SMG45_pisg.rvmat"
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
                                "My_DF_Weapons_SMG\SMG45\data\pisg\SMG45_pisg.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\SMG45\data\pisg\SMG45_pisg_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\SMG45\data\pisg\SMG45_pisg_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\SMG45\data\pisg\SMG45_pisg_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\SMG45\data\pisg\SMG45_pisg_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
	class My_DF_Weapons_Attachments_pisg_MK4_pisg: My_DF_Weapons_Attachments_ar_pisg_Base
	{
		scope=2;
		displayName="$STR_My_DF_Weapons_Attachments_pisg_MK4_pisg0";
		descriptionShort="$STR_My_DF_Weapons_Attachments_pisg_MK4_pisg1";
		model="\My_DF_Weapons_Attachments\pisg\MK4_pisg\MK4_pisg.p3d";
		recoilModifier[]={0.9,0.9,0.9};
		swayModifier[]={0.9,0.9,0.9};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"My_DF_Weapons_Attachments\pisg\MK4_pisg\data\MK4_pisg_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"My_DF_Weapons_Attachments\pisg\MK4_pisg\data\MK4_pisg.rvmat"
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
								"My_DF_Weapons_Attachments\pisg\MK4_pisg\data\MK4_pisg.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"My_DF_Weapons_Attachments\pisg\MK4_pisg\data\MK4_pisg_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"My_DF_Weapons_Attachments\pisg\MK4_pisg\data\MK4_pisg_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"My_DF_Weapons_Attachments\pisg\MK4_pisg\data\MK4_pisg_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"My_DF_Weapons_Attachments\pisg\MK4_pisg\data\MK4_pisg_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class My_DF_Weapons_Attachments_pisg_G3Balance: My_DF_Weapons_Attachments_pisg_Base
	{
		scope=2;
		displayName="$STR_My_DF_Weapons_Attachments_pisg_G3Balance0";
		descriptionShort="$STR_My_DF_Weapons_Attachments_pisg_G3Balance1";
		model="\My_DF_Weapons_Attachments\pisg\G3Balance\G3Balance.p3d";
		recoilModifier[]={0.85,0.85,0.85};
		swayModifier[]={0.85,0.85,0.85};
		inventorySlot[]=
		{
			"DF_pisg_G3"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"My_DF_Weapons_Attachments\pisg\G3Balance\data\G3Balance_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"My_DF_Weapons_Attachments\pisg\G3Balance\data\G3Balance.rvmat"
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
								"My_DF_Weapons_Attachments\pisg\G3Balance\data\G3Balance.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"My_DF_Weapons_Attachments\pisg\G3Balance\data\G3Balance_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"My_DF_Weapons_Attachments\pisg\G3Balance\data\G3Balance_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"My_DF_Weapons_Attachments\pisg\G3Balance\data\G3Balance_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"My_DF_Weapons_Attachments\pisg\G3Balance\data\G3Balance_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};