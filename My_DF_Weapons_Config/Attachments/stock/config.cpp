class CfgPatches
{
	class My_DF_Weapons_Attachments_stock_config
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"DZ_Data",
			"My_DF_Weapons_Attachments_stock"
		};
	};
};
class CfgVehicles
{
    class My_DF_Weapons_Attachments_stock_Base;
    class My_DF_Weapons_Attachments_stock_ACR: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_ACR0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_ACR1";
        model = "\My_DF_Weapons_Attachments\stock\ACR\ACR.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock"
        };
        hiddenSelections[] = {
            "body",
            "tube",
            "pad"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\ACR\data\ACR_co.paa",
            "My_DF_Weapons_Attachments\stock\ACR\data\ACR_co.paa",
            "My_DF_Weapons_Attachments\stock\ACR\data\cheekpad\ACR_cheekpad_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\ACR\data\ACR.rvmat",
            "My_DF_Weapons_Attachments\stock\ACR\data\ACR.rvmat",
            "My_DF_Weapons_Attachments\stock\ACR\data\cheekpad\ACR_cheekpad.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\ACR\data\ACR.rvmat",
                                "My_DF_Weapons_Attachments\stock\ACR\data\ACR.rvmat",
                                "My_DF_Weapons_Attachments\stock\ACR\data\cheekpad\ACR_cheekpad.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\ACR\data\ACR_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\ACR\data\ACR_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\ACR\data\cheekpad\ACR_cheekpad_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\ACR\data\ACR_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\ACR\data\ACR_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\ACR\data\cheekpad\ACR_cheekpad_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\ACR\data\ACR_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\ACR\data\ACR_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\ACR\data\cheekpad\ACR_cheekpad_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\ACR\data\ACR_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\ACR\data\ACR_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\ACR\data\cheekpad\ACR_cheekpad_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_ACR_BodyPad: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_ACR_BodyPad0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_ACR_BodyPad1";
        model = "\My_DF_Weapons_Attachments\stock\ACR\ACR_BodyPad.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock",
            "DF_stock_ACR_BodyPad"
        };
        hiddenSelections[] = {
            "body",
            "pad"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\ACR\data\ACR_co.paa",
            "My_DF_Weapons_Attachments\stock\ACR\data\cheekpad\ACR_cheekpad_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\ACR\data\ACR.rvmat",
            "My_DF_Weapons_Attachments\stock\ACR\data\cheekpad\ACR_cheekpad.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\ACR\data\ACR.rvmat",
                                "My_DF_Weapons_Attachments\stock\ACR\data\cheekpad\ACR_cheekpad.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\ACR\data\ACR_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\ACR\data\cheekpad\ACR_cheekpad_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\ACR\data\ACR_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\ACR\data\cheekpad\ACR_cheekpad_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\ACR\data\ACR_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\ACR\data\cheekpad\ACR_cheekpad_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\ACR\data\ACR_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\ACR\data\cheekpad\ACR_cheekpad_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_AK19: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_AK190";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_AK191";
        model = "\My_DF_Weapons_Attachments\stock\AK19\AK19.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "body",
            "tube",
            "pad"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\AK19\data\AK19_co.paa",
            "My_DF_Weapons_Attachments\stock\AK19\data\AK19_co.paa",
            "My_DF_Weapons_Attachments\stock\AK19\data\AK19_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\AK19\data\AK19.rvmat",
            "My_DF_Weapons_Attachments\stock\AK19\data\AK19.rvmat",
            "My_DF_Weapons_Attachments\stock\AK19\data\AK19.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\AK19\data\AK19.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK19\data\AK19.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK19\data\AK19.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\AK19\data\AK19_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK19\data\AK19_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK19\data\AK19_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\AK19\data\AK19_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK19\data\AK19_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK19\data\AK19_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\AK19\data\AK19_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK19\data\AK19_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK19\data\AK19_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\AK19\data\AK19_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK19\data\AK19_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK19\data\AK19_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_AK74_Std: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_AK74_Std0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_AK74_Std1";
        model = "\My_DF_Weapons_Attachments\stock\AK74_Std\AK74_Std.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        attachments[] = {
            "DF_stock_pad"
        };
        hiddenSelections[] = {
            "body"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\AK74_Std\data\AK74_Std_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\AK74_Std\data\AK74_Std.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\AK74_Std\data\AK74_Std.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\AK74_Std\data\AK74_Std_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\AK74_Std\data\AK74_Std_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\AK74_Std\data\AK74_Std_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\AK74_Std\data\AK74_Std_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_AK74_Std_Pad: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_AK74_Std_Pad0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_AK74_Std_Pad1";
        model = "\My_DF_Weapons_Attachments\stock\AK74_Std\AK74_Std_Pad.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        inventorySlot[] = {
            "DF_stock_pad"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\AK74_Std\data\pad\AK74_Std_pad_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\AK74_Std\data\pad\AK74_Std_pad.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\AK74_Std\data\pad\AK74_Std_pad.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\AK74_Std\data\pad\AK74_Std_pad_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\AK74_Std\data\pad\AK74_Std_pad_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\AK74_Std\data\pad\AK74_Std_pad_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\AK74_Std\data\pad\AK74_Std_pad_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_AKS74U_Std: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_AKS74U_Std0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_AKS74U_Std1";
        model = "\My_DF_Weapons_Attachments\stock\AKS74U_Std\AKS74U_Std.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        attachments[] = {
            "DF_stock_pad"
        };
        hiddenSelections[] = {
            "body"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\AKS74U_Std\data\AKS74U_Std_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_AKSkeleton: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_AKSkeleton0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_AKSkeleton1";
        model = "\My_DF_Weapons_Attachments\stock\AKSkeleton\AKSkeleton.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "body"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\AKSkeleton\data\AKSkeleton_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\AKSkeleton\data\AKSkeleton.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\AKSkeleton\data\AKSkeleton.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\AKSkeleton\data\AKSkeleton_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\AKSkeleton\data\AKSkeleton_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\AKSkeleton\data\AKSkeleton_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\AKSkeleton\data\AKSkeleton_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_AK_1913adapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_AK_1913adapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_AK_1913adapter1";
        model = "\My_DF_Weapons_Attachments\stock\AK_1913adapter\AK_1913adapter.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_special"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\AK_1913adapter\data\AK_1913adapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\AK_1913adapter\data\AK_1913adapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\AK_1913adapter\data\AK_1913adapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\AK_1913adapter\data\AK_1913adapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\AK_1913adapter\data\AK_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\AK_1913adapter\data\AK_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\AK_1913adapter\data\AK_1913adapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_AK_acradapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_AK_acradapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_AK_acradapter1";
        model = "\My_DF_Weapons_Attachments\stock\AK_acradapter\AK_acradapter.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_ACR_BodyPad"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\AK_acradapter\data\AK_acradapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\AK_acradapter\data\AK_acradapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\AK_acradapter\data\AK_acradapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\AK_acradapter\data\AK_acradapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\AK_acradapter\data\AK_acradapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\AK_acradapter\data\AK_acradapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\AK_acradapter\data\AK_acradapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_AK_bufferadapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_AK_bufferadapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_AK_bufferadapter1";
        model = "\My_DF_Weapons_Attachments\stock\AK_bufferadapter\AK_bufferadapter.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "tube"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_ARtube: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_ARtube0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_ARtube1";
        model = "\My_DF_Weapons_Attachments\stock\ARtube\ARtube.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        hiddenSelections[] = {
            "body"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\ARtube\data\ARtube_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\ARtube\data\ARtube.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\ARtube\data\ARtube.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\ARtube\data\ARtube_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\ARtube\data\ARtube_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\ARtube\data\ARtube_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\ARtube\data\ARtube_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_Ash12Skeleton: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_Ash12Skeleton0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_Ash12Skeleton1";
        model = "\My_DF_Weapons_Attachments\stock\Ash12Skeleton\Ash12Skeleton.p3d";
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        inventorySlot[] = {
            "DF_stock_Ash12"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\Ash12Skeleton\data\Ash12Skeleton_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\Ash12Skeleton\data\Ash12Skeleton.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\Ash12Skeleton\data\Ash12Skeleton.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\Ash12Skeleton\data\Ash12Skeleton_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\Ash12Skeleton\data\Ash12Skeleton_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\Ash12Skeleton\data\Ash12Skeleton_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\Ash12Skeleton\data\Ash12Skeleton_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_Ash12Sniper: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_Ash12Sniper0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_Ash12Sniper1";
        model = "\My_DF_Weapons_Attachments\stock\Ash12Sniper\Ash12Sniper.p3d";
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        inventorySlot[] = {
            "DF_stock_Ash12"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\Ash12Sniper\data\Ash12Sniper_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\Ash12Sniper\data\Ash12Sniper.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\Ash12Sniper\data\Ash12Sniper.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\Ash12Sniper\data\Ash12Sniper_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\Ash12Sniper\data\Ash12Sniper_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\Ash12Sniper\data\Ash12Sniper_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\Ash12Sniper\data\Ash12Sniper_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_AUG_StockPad: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_AUG_StockPad0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_AUG_StockPad1";
        model = "\My_DF_Weapons_Attachments\stock\AUG_StockPad\AUG_StockPad.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock_pad_AUG"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\AUG_StockPad\data\AUG_StockPad_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\AUG_StockPad\data\AUG_StockPad.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\AUG_StockPad\data\AUG_StockPad.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\AUG_StockPad\data\AUG_StockPad_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\AUG_StockPad\data\AUG_StockPad_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\AUG_StockPad\data\AUG_StockPad_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\AUG_StockPad\data\AUG_StockPad_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_CAR15_stock: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_CAR15_stock0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_CAR15_stock1";
        model = "\My_DF_Weapons_Attachments\stock\CAR15_stock\CAR15_stock.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "body"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\CAR15\data\stock\CAR15_stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\CAR15\data\stock\CAR15_stock.rvmat"
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
                                "My_DF_Weapons_Rifles\CAR15\data\stock\CAR15_stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\CAR15\data\stock\CAR15_stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\CAR15\data\stock\CAR15_stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\CAR15\data\stock\CAR15_stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\CAR15\data\stock\CAR15_stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_Citori725Short_stock: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_Citori725Short_stock0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_Citori725Short_stock1";
        model = "\My_DF_Weapons_Attachments\stock\Citori725Short_stock\Citori725Short_stock.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock_Citori725"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\Citori725Short_stock\data\Citori725Short_stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\Citori725Short_stock\data\Citori725Short_stock.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\Citori725Short_stock\data\Citori725Short_stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\Citori725Short_stock\data\Citori725Short_stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\Citori725Short_stock\data\Citori725Short_stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\Citori725Short_stock\data\Citori725Short_stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\Citori725Short_stock\data\Citori725Short_stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_Citori725Tac_stock: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_Citori725Tac_stock0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_Citori725Tac_stock1";
        model = "\My_DF_Weapons_Attachments\stock\Citori725Tac_stock\Citori725Tac_stock.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        itemSize[] = { 3, 1 };
        inventorySlot[] = {
            "DF_stock_Citori725"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\Citori725Tac_stock\data\Citori725Tac_stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\Citori725Tac_stock\data\Citori725Tac_stock.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\Citori725Tac_stock\data\Citori725Tac_stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\Citori725Tac_stock\data\Citori725Tac_stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\Citori725Tac_stock\data\Citori725Tac_stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\Citori725Tac_stock\data\Citori725Tac_stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\Citori725Tac_stock\data\Citori725Tac_stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_CoreCP: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_CoreCP0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_CoreCP1";
        model = "\My_DF_Weapons_Attachments\stock\CoreCP\CoreCP.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "body"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\CoreCP\data\CoreCP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\CoreCP\data\CoreCP.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\CoreCP\data\CoreCP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\CoreCP\data\CoreCP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\CoreCP\data\CoreCP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\CoreCP\data\CoreCP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\CoreCP\data\CoreCP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_CQR2: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_CQR20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_CQR21";
        model = "\My_DF_Weapons_Attachments\stock\CQR2\CQR2.p3d";
        itemSize[] = { 2, 2 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        inventorySlot[] = {
            "DF_stock",
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\CQR2\data\CQR2_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\CQR2\data\CQR2.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\CQR2\data\CQR2.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\CQR2\data\CQR2_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\CQR2\data\CQR2_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\CQR2\data\CQR2_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\CQR2\data\CQR2_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_CTR: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_CTR0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_CTR1";
        model = "\My_DF_Weapons_Attachments\stock\CTR\CTR.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "body"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\CTR\data\CTR_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\CTR\data\CTR.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\CTR\data\CTR.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\CTR\data\CTR_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\CTR\data\CTR_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\CTR\data\CTR_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\CTR\data\CTR_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_E1: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_E10";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_E11";
        model = "\My_DF_Weapons_Attachments\stock\E1\E1.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "body"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\E1\data\E1_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\E1\data\E1.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\E1\data\E1.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\E1\data\E1_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\E1\data\E1_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\E1\data\E1_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\E1\data\E1_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_Frame: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_Frame0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_Frame1";
        model = "\My_DF_Weapons_Attachments\stock\Frame\Frame.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock",
            "DF_stock_special"
        };
        hiddenSelections[] = {
            "body"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\Frame\data\Frame_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\Frame\data\Frame.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\Frame\data\Frame.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\Frame\data\Frame_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\Frame\data\Frame_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\Frame\data\Frame_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\Frame\data\Frame_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_HeraCQR: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_HeraCQR0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_HeraCQR1";
        model = "\My_DF_Weapons_Attachments\stock\HeraCQR\HeraCQR.p3d";
        itemSize[] = { 2, 2 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        inventorySlot[] = {
            "DF_stock",
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\HeraCQR\data\HeraCQR_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\HeraCQR\data\HeraCQR.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\HeraCQR\data\HeraCQR.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\HeraCQR\data\HeraCQR_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\HeraCQR\data\HeraCQR_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\HeraCQR\data\HeraCQR_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\HeraCQR\data\HeraCQR_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_HK416_bufferadapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_HK416_bufferadapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_HK416_bufferadapter1";
        model = "\My_DF_Weapons_Attachments\stock\HK416_bufferadapter\HK416_bufferadapter.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "tube"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_K437_1913adapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_K437_1913adapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_K437_1913adapter1";
        model = "\My_DF_Weapons_Attachments\stock\K437_1913adapter\K437_1913adapter.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_special"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\K437_1913adapter\data\K437_1913adapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\K437_1913adapter\data\K437_1913adapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\K437_1913adapter\data\K437_1913adapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\K437_1913adapter\data\K437_1913adapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\K437_1913adapter\data\K437_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\K437_1913adapter\data\K437_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\K437_1913adapter\data\K437_1913adapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_K437_bufferadapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_K437_bufferadapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_K437_bufferadapter1";
        model = "\My_DF_Weapons_Attachments\stock\K437_bufferadapter\K437_bufferadapter.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "camo",
            "tube"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\K437_bufferadapter\data\K437_bufferadapter_co.paa",
            "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\K437_bufferadapter\data\K437_bufferadapter.rvmat",
            "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\K437_bufferadapter\data\K437_bufferadapter.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\K437_bufferadapter\data\K437_bufferadapter_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\K437_bufferadapter\data\K437_bufferadapter_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\K437_bufferadapter\data\K437_bufferadapter_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\K437_bufferadapter\data\K437_bufferadapter_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_KC17_1913adapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_KC17_1913adapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_KC17_1913adapter1";
        model = "\My_DF_Weapons_Attachments\stock\KC17_1913adapter\KC17_1913adapter.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_special"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\KC17_1913adapter\data\KC17_1913adapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\KC17_1913adapter\data\KC17_1913adapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\KC17_1913adapter\data\KC17_1913adapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\KC17_1913adapter\data\KC17_1913adapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\KC17_1913adapter\data\KC17_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\KC17_1913adapter\data\KC17_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\KC17_1913adapter\data\KC17_1913adapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_KC17_bufferadapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_KC17_bufferadapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_KC17_bufferadapter1";
        model = "\My_DF_Weapons_Attachments\stock\KC17_bufferadapter\KC17_bufferadapter.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "camo",
            "tube"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\KC17_bufferadapter\data\KC17_bufferadapter_co.paa",
            "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\KC17_bufferadapter\data\KC17_bufferadapter.rvmat",
            "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\KC17_bufferadapter\data\KC17_bufferadapter.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\KC17_bufferadapter\data\KC17_bufferadapter_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\KC17_bufferadapter\data\KC17_bufferadapter_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\KC17_bufferadapter\data\KC17_bufferadapter_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\KC17_bufferadapter\data\KC17_bufferadapter_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_M1014Fixed: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_M1014Fixed0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_M1014Fixed1";
        model = "\My_DF_Weapons_Attachments\stock\M1014Fixed\M1014Fixed.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\M1014Fixed\data\M1014Fixed_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\M1014Fixed\data\M1014Fixed.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\M1014Fixed\data\M1014Fixed.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\M1014Fixed\data\M1014Fixed_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\M1014Fixed\data\M1014Fixed_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\M1014Fixed\data\M1014Fixed_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\M1014Fixed\data\M1014Fixed_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_M1014Retra: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_M1014Retra0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_M1014Retra1";
        model = "\My_DF_Weapons_Attachments\stock\M1014Retra\M1014Retra.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\M1014Retra\data\M1014Retra_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\M1014Retra\data\M1014Retra.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\M1014Retra\data\M1014Retra.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\M1014Retra\data\M1014Retra_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\M1014Retra\data\M1014Retra_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\M1014Retra\data\M1014Retra_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\M1014Retra\data\M1014Retra_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_M1014Retra_Short: My_DF_Weapons_Attachments_stock_M1014Retra
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_M1014Retra_Short0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_M1014Retra_Short1";
        model = "\My_DF_Weapons_Attachments\stock\M1014Retra\M1014Retra_Short.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
    };
    class My_DF_Weapons_Attachments_stock_M14EBR_Stock: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_M14EBR_Stock0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_M14EBR_Stock1";
        model = "\My_DF_Weapons_Attachments\stock\M14EBR_Stock\M14EBR_Stock.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\M14EBR_Stock\data\M14EBR_Stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\M14EBR_Stock\data\M14EBR_Stock.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\M14EBR_Stock\data\M14EBR_Stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\M14EBR_Stock\data\M14EBR_Stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\M14EBR_Stock\data\M14EBR_Stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\M14EBR_Stock\data\M14EBR_Stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\M14EBR_Stock\data\M14EBR_Stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_M14_ebr_1913adapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_M14_ebr_1913adapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_M14_ebr_1913adapter1";
        model = "\My_DF_Weapons_Attachments\stock\M14_ebr_1913adapter\M14_ebr_1913adapter.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_stock"
        };
        attachments[] = {
            "DF_stock_special"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\M14EBR_Stock\data\M14EBR_Stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\M14EBR_Stock\data\M14EBR_Stock.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\M14EBR_Stock\data\M14EBR_Stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\M14EBR_Stock\data\M14EBR_Stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\M14EBR_Stock\data\M14EBR_Stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\M14EBR_Stock\data\M14EBR_Stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\M14EBR_Stock\data\M14EBR_Stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_M16: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_M160";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_M161";
        model = "\My_DF_Weapons_Attachments\stock\M16\M16.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "body"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\M16\data\M16_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\M16\data\M16.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\M16\data\M16.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\M16\data\M16_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\M16\data\M16_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\M16\data\M16_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\M16\data\M16_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_M249_1913adapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_M249_1913adapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_M249_1913adapter1";
        model = "\My_DF_Weapons_Attachments\stock\M249_1913adapter\M249_1913adapter.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_special"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\M249_1913adapter\data\M249_1913adapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\M249_1913adapter\data\M249_1913adapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\M249_1913adapter\data\M249_1913adapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\M249_1913adapter\data\M249_1913adapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\M249_1913adapter\data\M249_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\M249_1913adapter\data\M249_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\M249_1913adapter\data\M249_1913adapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_M249_bufferadapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_M249_bufferadapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_M249_bufferadapter1";
        model = "\My_DF_Weapons_Attachments\stock\M249_bufferadapter\M249_bufferadapter.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\M249_bufferadapter\data\M249_bufferadapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\M249_bufferadapter\data\M249_bufferadapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\M249_bufferadapter\data\M249_bufferadapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\M249_bufferadapter\data\M249_bufferadapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\M249_bufferadapter\data\M249_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\M249_bufferadapter\data\M249_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\M249_bufferadapter\data\M249_bufferadapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_M250_bufferadapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 0;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_M250_bufferadapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_M250_bufferadapter1";
        model = "\My_DF_Weapons_Attachments\stock\M250_bufferadapter\M250_bufferadapter.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\M250_bufferadapter\data\M250_bufferadapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\M250_bufferadapter\data\M250_bufferadapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\M250_bufferadapter\data\M250_bufferadapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\M250_bufferadapter\data\M250_bufferadapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\M250_bufferadapter\data\M250_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\M250_bufferadapter\data\M250_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\M250_bufferadapter\data\M250_bufferadapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_M4A1_Std: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_M4A1_Std0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_M4A1_Std1";
        model = "\My_DF_Weapons_Attachments\stock\M4A1_Std\M4A1_Std.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\M4A1_Std\data\M4A1_Std_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\M4A1_Std\data\M4A1_Std.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\M4A1_Std\data\M4A1_Std.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\M4A1_Std\data\M4A1_Std_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\M4A1_Std\data\M4A1_Std_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\M4A1_Std\data\M4A1_Std_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\M4A1_Std\data\M4A1_Std_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_M700_A6: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_M700_A60";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_M700_A61";
        model = "\My_DF_Weapons_Attachments\stock\M700_A6\M700_A6.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock_M700_A6"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\M700_A6\data\M700_A6_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\M700_A6\data\M700_A6.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\M700_A6\data\M700_A6.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\M700_A6\data\M700_A6_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\M700_A6\data\M700_A6_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\M700_A6\data\M700_A6_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\M700_A6\data\M700_A6_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_M7_bufferadapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_M7_bufferadapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_M7_bufferadapter1";
        model = "\My_DF_Weapons_Attachments\stock\M7_bufferadapter\M7_bufferadapter.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\M7_bufferadapter\data\M7_bufferadapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\M7_bufferadapter\data\M7_bufferadapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\M7_bufferadapter\data\M7_bufferadapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\M7_bufferadapter\data\M7_bufferadapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\M7_bufferadapter\data\M7_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\M7_bufferadapter\data\M7_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\M7_bufferadapter\data\M7_bufferadapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_M7_stock: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_M7_stock0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_M7_stock1";
        model = "\My_DF_Weapons_Attachments\stock\M7_stock\M7_stock.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\M7_stock\data\M7_stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\M7_stock\data\M7_stock.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\M7_stock\data\M7_stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\M7_stock\data\M7_stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\M7_stock\data\M7_stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\M7_stock\data\M7_stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\M7_stock\data\M7_stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_MarlinNonStock: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_MarlinNonStock0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_MarlinNonStock1";
        model = "\My_DF_Weapons_Attachments\stock\MarlinNonStock\MarlinNonStock.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock_Marlin"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\MarlinNonStock\data\MarlinNonStock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\MarlinNonStock\data\MarlinNonStock.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\MarlinNonStock\data\MarlinNonStock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\MarlinNonStock\data\MarlinNonStock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\MarlinNonStock\data\MarlinNonStock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\MarlinNonStock\data\MarlinNonStock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\MarlinNonStock\data\MarlinNonStock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_MarlinOpenwork: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_MarlinOpenwork0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_MarlinOpenwork1";
        model = "\My_DF_Weapons_Attachments\stock\MarlinOpenwork\MarlinOpenwork.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock_Marlin"
        };
        hiddenSelections[] = {
            "camo",
            "ShellHolder"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\MarlinOpenwork\data\MarlinOpenwork_co.paa",
            "My_DF_Weapons_Attachments\stock\MarlinOpenwork\data\ShellHolder\MarlinOpenwork_ShellHolder_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\MarlinOpenwork\data\MarlinOpenwork.rvmat",
            "My_DF_Weapons_Attachments\stock\MarlinOpenwork\data\ShellHolder\MarlinOpenwork_ShellHolder.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\MarlinOpenwork\data\MarlinOpenwork.rvmat",
                                "My_DF_Weapons_Attachments\stock\MarlinOpenwork\data\ShellHolder\MarlinOpenwork_ShellHolder.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\MarlinOpenwork\data\MarlinOpenwork_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\MarlinOpenwork\data\ShellHolder\MarlinOpenwork_ShellHolder_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\MarlinOpenwork\data\MarlinOpenwork_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\MarlinOpenwork\data\ShellHolder\MarlinOpenwork_ShellHolder_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\MarlinOpenwork\data\MarlinOpenwork_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\MarlinOpenwork\data\ShellHolder\MarlinOpenwork_ShellHolder_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\MarlinOpenwork\data\MarlinOpenwork_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\MarlinOpenwork\data\ShellHolder\MarlinOpenwork_ShellHolder_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_MarlinSport: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_MarlinSport0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_MarlinSport1";
        model = "\My_DF_Weapons_Attachments\stock\MarlinSport\MarlinSport.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock_Marlin"
        };
        hiddenSelections[] = {
            "camo",
            "cheekpad"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\MarlinSport\data\MarlinSport_co.paa",
            "My_DF_Weapons_Attachments\stock\MarlinSport\data\cheekpad\MarlinSport_cheekpad_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\MarlinSport\data\MarlinSport.rvmat",
            "My_DF_Weapons_Attachments\stock\MarlinSport\data\cheekpad\MarlinSport_cheekpad.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\MarlinSport\data\MarlinSport.rvmat",
                                "My_DF_Weapons_Attachments\stock\MarlinSport\data\cheekpad\MarlinSport_cheekpad.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\MarlinSport\data\MarlinSport_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\MarlinSport\data\cheekpad\MarlinSport_cheekpad_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\MarlinSport\data\MarlinSport_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\MarlinSport\data\cheekpad\MarlinSport_cheekpad_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\MarlinSport\data\MarlinSport_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\MarlinSport\data\cheekpad\MarlinSport_cheekpad_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\MarlinSport\data\MarlinSport_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\MarlinSport\data\cheekpad\MarlinSport_cheekpad_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_MarlinSteady: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_MarlinSteady0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_MarlinSteady1";
        model = "\My_DF_Weapons_Attachments\stock\MarlinSteady\MarlinSteady.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock_Marlin"
        };
        hiddenSelections[] = {
            "camo",
            "cheekpad"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\MarlinSteady\data\MarlinSteady_co.paa",
            "My_DF_Weapons_Attachments\stock\MarlinSteady\data\cheekpad\MarlinSteady_cheekpad_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\MarlinSteady\data\MarlinSteady.rvmat",
            "My_DF_Weapons_Attachments\stock\MarlinSteady\data\cheekpad\MarlinSteady_cheekpad.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\MarlinSteady\data\MarlinSteady.rvmat",
                                "My_DF_Weapons_Attachments\stock\MarlinSteady\data\cheekpad\MarlinSteady_cheekpad.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\MarlinSteady\data\MarlinSteady_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\MarlinSteady\data\cheekpad\MarlinSteady_cheekpad_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\MarlinSteady\data\MarlinSteady_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\MarlinSteady\data\cheekpad\MarlinSteady_cheekpad_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\MarlinSteady\data\MarlinSteady_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\MarlinSteady\data\cheekpad\MarlinSteady_cheekpad_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\MarlinSteady\data\MarlinSteady_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\MarlinSteady\data\cheekpad\MarlinSteady_cheekpad_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_MarlinTactical: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_MarlinTactical0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_MarlinTactical1";
        model = "\My_DF_Weapons_Attachments\stock\MarlinTactical\MarlinTactical.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock_Marlin"
        };
        hiddenSelections[] = {
            "camo",
            "cheekpad"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\MarlinTactical\data\MarlinTactical_co.paa",
            "My_DF_Weapons_Attachments\stock\MarlinTactical\data\cheekpad\MarlinTactical_cheekpad_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\MarlinTactical\data\MarlinTactical.rvmat",
            "My_DF_Weapons_Attachments\stock\MarlinTactical\data\cheekpad\MarlinTactical_cheekpad.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\MarlinTactical\data\MarlinTactical.rvmat",
                                "My_DF_Weapons_Attachments\stock\MarlinTactical\data\cheekpad\MarlinTactical_cheekpad.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\MarlinTactical\data\MarlinTactical_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\MarlinTactical\data\cheekpad\MarlinTactical_cheekpad_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\MarlinTactical\data\MarlinTactical_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\MarlinTactical\data\cheekpad\MarlinTactical_cheekpad_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\MarlinTactical\data\MarlinTactical_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\MarlinTactical\data\cheekpad\MarlinTactical_cheekpad_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\MarlinTactical\data\MarlinTactical_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\MarlinTactical\data\cheekpad\MarlinTactical_cheekpad_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_MBRS: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_MBRS0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_MBRS1";
        model = "\My_DF_Weapons_Attachments\stock\MBRS\MBRS.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "body"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\MBRS\data\MBRS_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\MBRS\data\MBRS.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\MBRS\data\MBRS.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\MBRS\data\MBRS_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\MBRS\data\MBRS_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\MBRS\data\MBRS_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\MBRS\data\MBRS_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_MDT: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_MDT0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_MDT1";
        model = "\My_DF_Weapons_Attachments\stock\MDT\MDT.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "body"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\MDT\data\MDT_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\MDT\data\MDT.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\MDT\data\MDT.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\MDT\data\MDT_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\MDT\data\MDT_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\MDT\data\MDT_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\MDT\data\MDT_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_MK47_1913adapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_MK47_1913adapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_MK47_1913adapter1";
        model = "\My_DF_Weapons_Attachments\stock\MK47_1913adapter\MK47_1913adapter.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_special"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\MK47_1913adapter\data\MK47_1913adapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\MK47_1913adapter\data\MK47_1913adapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\MK47_1913adapter\data\MK47_1913adapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\MK47_1913adapter\data\MK47_1913adapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\MK47_1913adapter\data\MK47_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\MK47_1913adapter\data\MK47_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\MK47_1913adapter\data\MK47_1913adapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_MK47_bufferadapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_MK47_bufferadapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_MK47_bufferadapter1";
        model = "\My_DF_Weapons_Attachments\stock\MK47_bufferadapter\MK47_bufferadapter.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "camo",
            "tube"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\MK47_bufferadapter\data\MK47_bufferadapter_co.paa",
            "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\MK47_bufferadapter\data\MK47_bufferadapter.rvmat",
            "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\MK47_bufferadapter\data\MK47_bufferadapter.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\MK47_bufferadapter\data\MK47_bufferadapter_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\MK47_bufferadapter\data\MK47_bufferadapter_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\MK47_bufferadapter\data\MK47_bufferadapter_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\MK47_bufferadapter\data\MK47_bufferadapter_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\AK_bufferadapter\data\AK_bufferadapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_MP5K: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_MP5K0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_MP5K1";
        model = "\My_DF_Weapons_Attachments\stock\MP5K\MP5K.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\MP5K\data\MP5K_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\MP5K\data\MP5K.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\MP5K\data\MP5K.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\MP5K\data\MP5K_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\MP5K\data\MP5K_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\MP5K\data\MP5K_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\MP5K\data\MP5K_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_MP5K_2: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_MP5K_20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_MP5K_21";
        model = "\My_DF_Weapons_Attachments\stock\MP5K_2\MP5K_2.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\MP5K_2\data\MP5K_2_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\MP5K_2\data\MP5K_2.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\MP5K_2\data\MP5K_2.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\MP5K_2\data\MP5K_2_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\MP5K_2\data\MP5K_2_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\MP5K_2\data\MP5K_2_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\MP5K_2\data\MP5K_2_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_MP5Tele: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_MP5Tele0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_MP5Tele1";
        model = "\My_DF_Weapons_Attachments\stock\MP5Tele\MP5Tele.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\MP5Tele\data\MP5Tele_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\MP5Tele\data\MP5Tele.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\MP5Tele\data\MP5Tele.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\MP5Tele\data\MP5Tele_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\MP5Tele\data\MP5Tele_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\MP5Tele\data\MP5Tele_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\MP5Tele\data\MP5Tele_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_MP5_HK_Endcap: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_MP5_HK_Endcap0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_MP5_HK_Endcap1";
        model = "\My_DF_Weapons_Attachments\stock\MP5_HK_Endcap\MP5_HK_Endcap.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\MP5_HK_Endcap\data\MP5_HK_Endcap_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\MP5_HK_Endcap\data\MP5_HK_Endcap.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\MP5_HK_Endcap\data\MP5_HK_Endcap.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\MP5_HK_Endcap\data\MP5_HK_Endcap_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\MP5_HK_Endcap\data\MP5_HK_Endcap_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\MP5_HK_Endcap\data\MP5_HK_Endcap_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\MP5_HK_Endcap\data\MP5_HK_Endcap_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_MP7_1913adapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_MP7_1913adapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_MP7_1913adapter1";
        model = "\My_DF_Weapons_Attachments\stock\MP7_1913adapter\MP7_1913adapter.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_special"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\MP7_1913adapter\data\MP7_1913adapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\MP7_1913adapter\data\MP7_1913adapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\MP7_1913adapter\data\MP7_1913adapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\MP7_1913adapter\data\MP7_1913adapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\MP7_1913adapter\data\MP7_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\MP7_1913adapter\data\MP7_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\MP7_1913adapter\data\MP7_1913adapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_MP7_bufferadapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_MP7_bufferadapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_MP7_bufferadapter1";
        model = "\My_DF_Weapons_Attachments\stock\MP7_bufferadapter\MP7_bufferadapter.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\MP7_bufferadapter\data\MP7_bufferadapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\MP7_bufferadapter\data\MP7_bufferadapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\MP7_bufferadapter\data\MP7_bufferadapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\MP7_bufferadapter\data\MP7_bufferadapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\MP7_bufferadapter\data\MP7_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\MP7_bufferadapter\data\MP7_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\MP7_bufferadapter\data\MP7_bufferadapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_P90_StockPad: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_P90_StockPad0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_P90_StockPad1";
        model = "\My_DF_Weapons_Attachments\stock\P90_StockPad\P90_StockPad.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock_pad_P90"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\P90_StockPad\data\P90_StockPad_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\P90_StockPad\data\P90_StockPad.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\P90_StockPad\data\P90_StockPad.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\P90_StockPad\data\P90_StockPad_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\P90_StockPad\data\P90_StockPad_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\P90_StockPad\data\P90_StockPad_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\P90_StockPad\data\P90_StockPad_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_PKMLight: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_PKMLight0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_PKMLight1";
        model = "\My_DF_Weapons_Attachments\stock\PKMLight\PKMLight.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\PKMLight\data\PKMLight_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\PKMLight\data\PKMLight.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\PKMLight\data\PKMLight.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\PKMLight\data\PKMLight_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\PKMLight\data\PKMLight_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\PKMLight\data\PKMLight_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\PKMLight\data\PKMLight_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_PKMZenit: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_PKMZenit0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_PKMZenit1";
        model = "\My_DF_Weapons_Attachments\stock\PKMZenit\PKMZenit.p3d";
        itemSize[] = { 2, 2 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\PKMZenit\data\PKMZenit_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\PKMZenit\data\PKMZenit.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\PKMZenit\data\PKMZenit.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\PKMZenit\data\PKMZenit_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\PKMZenit\data\PKMZenit_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\PKMZenit\data\PKMZenit_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\PKMZenit\data\PKMZenit_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_PKM_1913adapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_PKM_1913adapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_PKM_1913adapter1";
        model = "\My_DF_Weapons_Attachments\stock\PKM_1913adapter\PKM_1913adapter.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_special"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\PKM_1913adapter\data\PKM_1913adapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\PKM_1913adapter\data\PKM_1913adapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\PKM_1913adapter\data\PKM_1913adapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\PKM_1913adapter\data\PKM_1913adapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\PKM_1913adapter\data\PKM_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\PKM_1913adapter\data\PKM_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\PKM_1913adapter\data\PKM_1913adapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_PKM_bufferadapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_PKM_bufferadapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_PKM_bufferadapter1";
        model = "\My_DF_Weapons_Attachments\stock\PKM_bufferadapter\PKM_bufferadapter.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\PKM_bufferadapter\data\PKM_bufferadapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\PKM_bufferadapter\data\PKM_bufferadapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\PKM_bufferadapter\data\PKM_bufferadapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\PKM_bufferadapter\data\PKM_bufferadapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\PKM_bufferadapter\data\PKM_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\PKM_bufferadapter\data\PKM_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\PKM_bufferadapter\data\PKM_bufferadapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_PRS3: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_PRS30";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_PRS31";
        model = "\My_DF_Weapons_Attachments\stock\PRS3\PRS3.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "body",
            "tube",
            "pad"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\PRS3\data\PRS3_co.paa",
            "My_DF_Weapons_Attachments\stock\PRS3\data\PRS3_co.paa",
            "My_DF_Weapons_Attachments\stock\PRS3\data\cheekpad\PRS3_cheekpad_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\PRS3\data\PRS3.rvmat",
            "My_DF_Weapons_Attachments\stock\PRS3\data\PRS3.rvmat",
            "My_DF_Weapons_Attachments\stock\PRS3\data\cheekpad\PRS3_cheekpad.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\PRS3\data\PRS3.rvmat",
                                "My_DF_Weapons_Attachments\stock\PRS3\data\PRS3.rvmat",
                                "My_DF_Weapons_Attachments\stock\PRS3\data\cheekpad\PRS3_cheekpad.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\PRS3\data\PRS3_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\PRS3\data\PRS3_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\PRS3\data\cheekpad\PRS3_cheekpad_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\PRS3\data\PRS3_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\PRS3\data\PRS3_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\PRS3\data\cheekpad\PRS3_cheekpad_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\PRS3\data\PRS3_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\PRS3\data\PRS3_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\PRS3\data\cheekpad\PRS3_cheekpad_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\PRS3\data\PRS3_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\PRS3\data\PRS3_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\PRS3\data\cheekpad\PRS3_cheekpad_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_PSG: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_PSG0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_PSG1";
        model = "\My_DF_Weapons_Attachments\stock\PSG_Stock\PSG_Stock.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\PSG_Stock\data\PSG_Stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\PSG_Stock\data\PSG_Stock.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\PSG_Stock\data\PSG_Stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\PSG_Stock\data\PSG_Stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\PSG_Stock\data\PSG_Stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\PSG_Stock\data\PSG_Stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\PSG_Stock\data\PSG_Stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_PT1: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_PT10";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_PT11";
        model = "\My_DF_Weapons_Attachments\stock\PT1\PT1.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "body"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\PT1\data\PT1_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\PT1\data\PT1.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\PT1\data\PT1.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\PT1\data\PT1_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\PT1\data\PT1_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\PT1\data\PT1_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\PT1\data\PT1_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_PT3: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_PT30";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_PT31";
        model = "\My_DF_Weapons_Attachments\stock\PT3\PT3.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "body",
            "tube",
            "pad"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\PT3\data\PT3_co.paa",
            "My_DF_Weapons_Attachments\stock\PT3\data\PT3_co.paa",
            "My_DF_Weapons_Attachments\stock\PT3\data\PT3_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\PT3\data\PT3.rvmat",
            "My_DF_Weapons_Attachments\stock\PT3\data\PT3.rvmat",
            "My_DF_Weapons_Attachments\stock\PT3\data\PT3.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\PT3\data\PT3.rvmat",
                                "My_DF_Weapons_Attachments\stock\PT3\data\PT3.rvmat",
                                "My_DF_Weapons_Attachments\stock\PT3\data\PT3.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\PT3\data\PT3_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\PT3\data\PT3_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\PT3\data\PT3_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\PT3\data\PT3_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\PT3\data\PT3_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\PT3\data\PT3_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\PT3\data\PT3_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\PT3\data\PT3_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\PT3\data\PT3_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\PT3\data\PT3_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\PT3\data\PT3_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\PT3\data\PT3_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_QBZ191_bufferadapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_QBZ191_bufferadapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_QBZ191_bufferadapter1";
        model = "\My_DF_Weapons_Attachments\stock\QBZ191_bufferadapter\QBZ191_bufferadapter.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "camo",
            "tube"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\QBZ191_bufferadapter\data\QBZ191_bufferadapter_co.paa",
            "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\QBZ191_bufferadapter\data\QBZ191_bufferadapter.rvmat",
            "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\QBZ191_bufferadapter\data\QBZ191_bufferadapter.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\QBZ191_bufferadapter\data\QBZ191_bufferadapter_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\QBZ191_bufferadapter\data\QBZ191_bufferadapter_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\QBZ191_bufferadapter\data\QBZ191_bufferadapter_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\QBZ191_bufferadapter\data\QBZ191_bufferadapter_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_QCQ171_1913adapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_QCQ171_1913adapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_QCQ171_1913adapter1";
        model = "\My_DF_Weapons_Attachments\stock\QCQ171_1913adapter\QCQ171_1913adapter.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_special"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\QCQ171_1913adapter\data\QCQ171_1913adapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\QCQ171_1913adapter\data\QCQ171_1913adapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\QCQ171_1913adapter\data\QCQ171_1913adapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\QCQ171_1913adapter\data\QCQ171_1913adapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\QCQ171_1913adapter\data\QCQ171_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\QCQ171_1913adapter\data\QCQ171_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\QCQ171_1913adapter\data\QCQ171_1913adapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_QCQ171_bufferadapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_QCQ171_bufferadapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_QCQ171_bufferadapter1";
        model = "\My_DF_Weapons_Attachments\stock\QCQ171_bufferadapter\QCQ171_bufferadapter.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "camo",
            "tube"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\QCQ171_bufferadapter\data\QCQ171_bufferadapter_co.paa",
            "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\QCQ171_bufferadapter\data\QCQ171_bufferadapter.rvmat",
            "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\QCQ171_bufferadapter\data\QCQ171_bufferadapter.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\QCQ171_bufferadapter\data\QCQ171_bufferadapter_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\QCQ171_bufferadapter\data\QCQ171_bufferadapter_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\QCQ171_bufferadapter\data\QCQ171_bufferadapter_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\QCQ171_bufferadapter\data\QCQ171_bufferadapter_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_QJB201_1913adapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_QJB201_1913adapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_QJB201_1913adapter1";
        model = "\My_DF_Weapons_Attachments\stock\QJB201_1913adapter\QJB201_1913adapter.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_special"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\QJB201_1913adapter\data\QJB201_1913adapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\QJB201_1913adapter\data\QJB201_1913adapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\QJB201_1913adapter\data\QJB201_1913adapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\QJB201_1913adapter\data\QJB201_1913adapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\QJB201_1913adapter\data\QJB201_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\QJB201_1913adapter\data\QJB201_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\QJB201_1913adapter\data\QJB201_1913adapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_QJB201_bufferadapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_QJB201_bufferadapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_QJB201_bufferadapter1";
        model = "\My_DF_Weapons_Attachments\stock\QJB201_bufferadapter\QJB201_bufferadapter.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "camo",
            "tube"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\QJB201_bufferadapter\data\QJB201_bufferadapter_co.paa",
            "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\QJB201_bufferadapter\data\QJB201_bufferadapter.rvmat",
            "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\QJB201_bufferadapter\data\QJB201_bufferadapter.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\QJB201_bufferadapter\data\QJB201_bufferadapter_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\QJB201_bufferadapter\data\QJB201_bufferadapter_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\QJB201_bufferadapter\data\QJB201_bufferadapter_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\QJB201_bufferadapter\data\QJB201_bufferadapter_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_Revolver_Stock: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_Revolver_Stock0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_Revolver_Stock1";
        model = "\My_DF_Weapons_Attachments\stock\Revolver_Stock\Revolver_Stock.p3d";
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        inventorySlot[] = {
            "DF_stock_Revolver"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\Revolver_Stock\data\Revolver_Stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\Revolver_Stock\data\Revolver_Stock.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\Revolver_Stock\data\Revolver_Stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\Revolver_Stock\data\Revolver_Stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\Revolver_Stock\data\Revolver_Stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\Revolver_Stock\data\Revolver_Stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\Revolver_Stock\data\Revolver_Stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_S12KBumpStock: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_S12KBumpStock0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_S12KBumpStock1";
        model = "\My_DF_Weapons_Attachments\stock\S12KBumpStock\S12KBumpStock.p3d";
        itemSize[] = { 2, 2 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\S12KBumpStock\data\S12KBumpStock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\S12KBumpStock\data\S12KBumpStock.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\S12KBumpStock\data\S12KBumpStock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\S12KBumpStock\data\S12KBumpStock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\S12KBumpStock\data\S12KBumpStock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\S12KBumpStock\data\S12KBumpStock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\S12KBumpStock\data\S12KBumpStock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_S12K_Std: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_S12K_Std0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_S12K_Std1";
        model = "\My_DF_Weapons_Attachments\stock\S12K_Std\S12K_Std.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        attachments[] = {
            "DF_stock_pad"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Shotguns\Saiga12K\data\stock\Saiga12K_stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Shotguns\Saiga12K\data\stock\Saiga12K_stock.rvmat"
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
                                "My_DF_Weapons_Shotguns\Saiga12K\data\stock\Saiga12K_stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Shotguns\Saiga12K\data\stock\Saiga12K_stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Shotguns\Saiga12K\data\stock\Saiga12K_stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Shotguns\Saiga12K\data\stock\Saiga12K_stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Shotguns\Saiga12K\data\stock\Saiga12K_stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_SCARH_bufferadapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_SCARH_bufferadapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_SCARH_bufferadapter1";
        model = "\My_DF_Weapons_Attachments\stock\SCARH_bufferadapter\SCARH_bufferadapter.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\SCARH_bufferadapter\data\SCARH_bufferadapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\SCARH_bufferadapter\data\SCARH_bufferadapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\SCARH_bufferadapter\data\SCARH_bufferadapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\SCARH_bufferadapter\data\SCARH_bufferadapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\SCARH_bufferadapter\data\SCARH_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\SCARH_bufferadapter\data\SCARH_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\SCARH_bufferadapter\data\SCARH_bufferadapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_SG553_1913adapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_SG553_1913adapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_SG553_1913adapter1";
        model = "\My_DF_Weapons_Attachments\stock\SG553_1913adapter\SG553_1913adapter.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_special"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\SG553_1913adapter\data\SG553_1913adapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\SG553_1913adapter\data\SG553_1913adapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\SG553_1913adapter\data\SG553_1913adapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\SG553_1913adapter\data\SG553_1913adapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\SG553_1913adapter\data\SG553_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\SG553_1913adapter\data\SG553_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\SG553_1913adapter\data\SG553_1913adapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_SG553_acradapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_SG553_acradapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_SG553_acradapter1";
        model = "\My_DF_Weapons_Attachments\stock\SG553_acradapter\SG553_acradapter.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_ACR_BodyPad"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\SG553_acradapter\data\SG553_acradapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\SG553_acradapter\data\SG553_acradapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\SG553_acradapter\data\SG553_acradapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\SG553_acradapter\data\SG553_acradapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\SG553_acradapter\data\SG553_acradapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\SG553_acradapter\data\SG553_acradapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\SG553_acradapter\data\SG553_acradapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_SG553_bufferadapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_SG553_bufferadapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_SG553_bufferadapter1";
        model = "\My_DF_Weapons_Attachments\stock\SG553_bufferadapter\SG553_bufferadapter.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\SG553_bufferadapter\data\SG553_bufferadapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\SG553_bufferadapter\data\SG553_bufferadapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\SG553_bufferadapter\data\SG553_bufferadapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\SG553_bufferadapter\data\SG553_bufferadapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\SG553_bufferadapter\data\SG553_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\SG553_bufferadapter\data\SG553_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\SG553_bufferadapter\data\SG553_bufferadapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_SI: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_SI0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_SI1";
        model = "\My_DF_Weapons_Attachments\stock\SI\SI.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock"
        };
        hiddenSelections[] = {
            "body",
            "pad"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\SI\data\SI_co.paa",
            "My_DF_Weapons_Attachments\stock\SI\data\SI_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\SI\data\SI.rvmat",
            "My_DF_Weapons_Attachments\stock\SI\data\SI.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\SI\data\SI.rvmat",
                                "My_DF_Weapons_Attachments\stock\SI\data\SI.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\SI\data\SI_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\SI\data\SI_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\SI\data\SI_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\SI\data\SI_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\SI\data\SI_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\SI\data\SI_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\SI\data\SI_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\SI\data\SI_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_Sig1: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_Sig10";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_Sig11";
        model = "\My_DF_Weapons_Attachments\stock\Sig1\Sig1.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock",
            "DF_stock_special"
        };
        hiddenSelections[] = {
            "body",
            "tube"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\Sig1\data\Sig1_co.paa",
            "My_DF_Weapons_Attachments\stock\Sig1\data\tube\Sig1_tube_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\Sig1\data\Sig1.rvmat",
            "My_DF_Weapons_Attachments\stock\Sig1\data\tube\Sig1_tube.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\Sig1\data\Sig1.rvmat",
                                "My_DF_Weapons_Attachments\stock\Sig1\data\tube\Sig1_tube.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\Sig1\data\Sig1_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\Sig1\data\tube\Sig1_tube_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\Sig1\data\Sig1_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\Sig1\data\tube\Sig1_tube_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\Sig1\data\Sig1_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\Sig1\data\tube\Sig1_tube_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\Sig1\data\Sig1_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\Sig1\data\tube\Sig1_tube_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_Sig2: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_Sig20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_Sig21";
        model = "\My_DF_Weapons_Attachments\stock\Sig2\Sig2.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock",
            "DF_stock_special"
        };
        hiddenSelections[] = {
            "body"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\Sig2\data\Sig2_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\Sig2\data\Sig2.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\Sig2\data\Sig2.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\Sig2\data\Sig2_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\Sig2\data\Sig2_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\Sig2\data\Sig2_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\Sig2\data\Sig2_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_SL: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_SL0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_SL1";
        model = "\My_DF_Weapons_Attachments\stock\SL\SL.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "body"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\SL\data\SL_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\SL\data\SL.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\SL\data\SL.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\SL\data\SL_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\SL\data\SL_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\SL\data\SL_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\SL\data\SL_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_Slimline: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_Slimline0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_Slimline1";
        model = "\My_DF_Weapons_Attachments\stock\Slimline\Slimline.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "body"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\Slimline\data\Slimline_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\Slimline\data\Slimline.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\Slimline\data\Slimline.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\Slimline\data\Slimline_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\Slimline\data\Slimline_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\Slimline\data\Slimline_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\Slimline\data\Slimline_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_SMG45_1913adapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_SMG45_1913adapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_SMG45_1913adapter1";
        model = "\My_DF_Weapons_Attachments\stock\SMG45_1913adapter\SMG45_1913adapter.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_special"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\SMG45_1913adapter\data\SMG45_1913adapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\SMG45_1913adapter\data\SMG45_1913adapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\SMG45_1913adapter\data\SMG45_1913adapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\SMG45_1913adapter\data\SMG45_1913adapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\SMG45_1913adapter\data\SMG45_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\SMG45_1913adapter\data\SMG45_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\SMG45_1913adapter\data\SMG45_1913adapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_SMG45_acradapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_SMG45_acradapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_SMG45_acradapter1";
        model = "\My_DF_Weapons_Attachments\stock\SMG45_acradapter\SMG45_acradapter.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_ACR_BodyPad"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\SMG45_acradapter\data\SMG45_acradapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\SMG45_acradapter\data\SMG45_acradapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\SMG45_acradapter\data\SMG45_acradapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\SMG45_acradapter\data\SMG45_acradapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\SMG45_acradapter\data\SMG45_acradapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\SMG45_acradapter\data\SMG45_acradapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\SMG45_acradapter\data\SMG45_acradapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_SMG45_bufferadapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_SMG45_bufferadapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_SMG45_bufferadapter1";
        model = "\My_DF_Weapons_Attachments\stock\SMG45_bufferadapter\SMG45_bufferadapter.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\SMG45_bufferadapter\data\SMG45_bufferadapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\SMG45_bufferadapter\data\SMG45_bufferadapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\SMG45_bufferadapter\data\SMG45_bufferadapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\SMG45_bufferadapter\data\SMG45_bufferadapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\SMG45_bufferadapter\data\SMG45_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\SMG45_bufferadapter\data\SMG45_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\SMG45_bufferadapter\data\SMG45_bufferadapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_Strike: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_Strike0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_Strike1";
        model = "\My_DF_Weapons_Attachments\stock\Strike\Strike.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock",
            "DF_stock_special"
        };
        hiddenSelections[] = {
            "body",
            "pad"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\Strike\data\Strike_co.paa",
            "My_DF_Weapons_Attachments\stock\Strike\data\Strike_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\Strike\data\Strike.rvmat",
            "My_DF_Weapons_Attachments\stock\Strike\data\Strike.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\Strike\data\Strike.rvmat",
                                "My_DF_Weapons_Attachments\stock\Strike\data\Strike.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\Strike\data\Strike_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\Strike\data\Strike_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\Strike\data\Strike_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\Strike\data\Strike_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\Strike\data\Strike_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\Strike\data\Strike_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\Strike\data\Strike_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\Strike\data\Strike_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_SVD_bufferadapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_SVD_bufferadapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_SVD_bufferadapter1";
        model = "\My_DF_Weapons_Attachments\stock\SVD_bufferadapter\SVD_bufferadapter.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_stock_SVD"
        };
        attachments[] = {
            "DF_stock",
            "DF_ak_pisg"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\SVD_bufferadapter\data\SVD_bufferadapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\SVD_bufferadapter\data\SVD_bufferadapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\SVD_bufferadapter\data\SVD_bufferadapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\SVD_bufferadapter\data\SVD_bufferadapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\SVD_bufferadapter\data\SVD_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\SVD_bufferadapter\data\SVD_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\SVD_bufferadapter\data\SVD_bufferadapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_SVD_stock: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_SVD_stock0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_SVD_stock1";
        model = "\My_DF_Weapons_Attachments\stock\SVD_stock\SVD_stock.p3d";
        itemSize[] = { 2, 2 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock_SVD"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\SVD_stock\data\SVD_stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\SVD_stock\data\SVD_stock.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\SVD_stock\data\SVD_stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\SVD_stock\data\SVD_stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\SVD_stock\data\SVD_stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\SVD_stock\data\SVD_stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\SVD_stock\data\SVD_stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_UBR2: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_UBR20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_UBR21";
        model = "\My_DF_Weapons_Attachments\stock\UBR2\UBR2.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock",
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "body",
            "tube"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\UBR2\data\UBR2_co.paa",
            "My_DF_Weapons_Attachments\stock\UBR2\data\UBR2_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\UBR2\data\UBR2.rvmat",
            "My_DF_Weapons_Attachments\stock\UBR2\data\UBR2.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\UBR2\data\UBR2.rvmat",
                                "My_DF_Weapons_Attachments\stock\UBR2\data\UBR2.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\UBR2\data\UBR2_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\UBR2\data\UBR2_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\UBR2\data\UBR2_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\UBR2\data\UBR2_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\UBR2\data\UBR2_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\UBR2\data\UBR2_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\UBR2\data\UBR2_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\UBR2\data\UBR2_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_Uzi_1913adapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_Uzi_1913adapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_Uzi_1913adapter1";
        model = "\My_DF_Weapons_Attachments\stock\Uzi_1913adapter\Uzi_1913adapter.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_special"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\Uzi_1913adapter\data\Uzi_1913adapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\Uzi_1913adapter\data\Uzi_1913adapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\Uzi_1913adapter\data\Uzi_1913adapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\Uzi_1913adapter\data\Uzi_1913adapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\Uzi_1913adapter\data\Uzi_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\Uzi_1913adapter\data\Uzi_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\Uzi_1913adapter\data\Uzi_1913adapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_Uzi_bufferadapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_Uzi_bufferadapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_Uzi_bufferadapter1";
        model = "\My_DF_Weapons_Attachments\stock\Uzi_bufferadapter\Uzi_bufferadapter.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\Uzi_bufferadapter\data\Uzi_bufferadapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\Uzi_bufferadapter\data\Uzi_bufferadapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\Uzi_bufferadapter\data\Uzi_bufferadapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\Uzi_bufferadapter\data\Uzi_bufferadapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\Uzi_bufferadapter\data\Uzi_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\Uzi_bufferadapter\data\Uzi_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\Uzi_bufferadapter\data\Uzi_bufferadapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_Uzi_Stock: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_Uzi_Stock0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_Uzi_Stock1";
        model = "\My_DF_Weapons_Attachments\stock\Uzi_Stock\Uzi_Stock.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\Uzi_Stock\data\Uzi_Stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\Uzi_Stock\data\Uzi_Stock.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\Uzi_Stock\data\Uzi_Stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\Uzi_Stock\data\Uzi_Stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\Uzi_Stock\data\Uzi_Stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\Uzi_Stock\data\Uzi_Stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\Uzi_Stock\data\Uzi_Stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_VectorStriker: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_VectorStriker0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_VectorStriker1";
        model = "\My_DF_Weapons_Attachments\stock\VectorStriker\VectorStriker.p3d";
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        itemSize[] = { 2, 2 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\VectorStriker\data\VectorStriker_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\VectorStriker\data\VectorStriker.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\VectorStriker\data\VectorStriker.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\VectorStriker\data\VectorStriker_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\VectorStriker\data\VectorStriker_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\VectorStriker\data\VectorStriker_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\VectorStriker\data\VectorStriker_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_Vector_1913adapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_Vector_1913adapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_Vector_1913adapter1";
        model = "\My_DF_Weapons_Attachments\stock\Vector_1913adapter\Vector_1913adapter.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_special"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\Vector_1913adapter\data\Vector_1913adapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\Vector_1913adapter\data\Vector_1913adapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\Vector_1913adapter\data\Vector_1913adapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\Vector_1913adapter\data\Vector_1913adapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\Vector_1913adapter\data\Vector_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\Vector_1913adapter\data\Vector_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\Vector_1913adapter\data\Vector_1913adapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_Vector_bufferadapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_Vector_bufferadapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_Vector_bufferadapter1";
        model = "\My_DF_Weapons_Attachments\stock\Vector_bufferadapter\Vector_bufferadapter.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\Vector_bufferadapter\data\Vector_bufferadapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\Vector_bufferadapter\data\Vector_bufferadapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\Vector_bufferadapter\data\Vector_bufferadapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\Vector_bufferadapter\data\Vector_bufferadapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\Vector_bufferadapter\data\Vector_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\Vector_bufferadapter\data\Vector_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\Vector_bufferadapter\data\Vector_bufferadapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_vltor: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_vltor0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_vltor1";
        model = "\My_DF_Weapons_Attachments\stock\vltor\vltor.p3d";
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        inventorySlot[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "body"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\vltor\data\vltor_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\vltor\data\vltor.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\vltor\data\vltor.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\vltor\data\vltor_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\vltor\data\vltor_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\vltor\data\vltor_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\vltor\data\vltor_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_VSS_1913adapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_VSS_1913adapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_VSS_1913adapter1";
        model = "\My_DF_Weapons_Attachments\stock\VSS_1913adapter\VSS_1913adapter.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_special"
        };
        inventorySlot[] = {
            "DF_stock"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\VSS_1913adapter\data\VSS_1913adapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\VSS_1913adapter\data\VSS_1913adapter.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\VSS_1913adapter\data\VSS_1913adapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\VSS_1913adapter\data\VSS_1913adapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\VSS_1913adapter\data\VSS_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\VSS_1913adapter\data\VSS_1913adapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\VSS_1913adapter\data\VSS_1913adapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_VSS_bufferadapter: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_VSS_bufferadapter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_VSS_bufferadapter1";
        model = "\My_DF_Weapons_Attachments\stock\VSS_bufferadapter\VSS_bufferadapter.p3d";
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        attachments[] = {
            "DF_stock_notube"
        };
        hiddenSelections[] = {
            "camo",
            "tube"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\VSS\data\VSS_co.paa",
            "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\VSS\data\VSS.rvmat",
            "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter.rvmat"
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
                                "My_DF_Weapons_DMR\VSS\data\VSS.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\VSS\data\VSS_worn.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\VSS\data\VSS_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\VSS\data\VSS_damage.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\VSS\data\VSS_destruct.rvmat",
                                "My_DF_Weapons_Attachments\stock\HK416_bufferadapter\data\HK416_bufferadapter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_stock_VSS_Stock: My_DF_Weapons_Attachments_stock_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_stock_VSS_Stock0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_stock_VSS_Stock1";
        model = "\My_DF_Weapons_Attachments\stock\VSS_Stock\VSS_Stock.p3d";
        itemSize[] = { 2, 2 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        inventorySlot[] = {
            "DF_stock_VSS",
            "DF_stock"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\stock\VSS_Stock\data\VSS_Stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\stock\VSS_Stock\data\VSS_Stock.rvmat"
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
                                "My_DF_Weapons_Attachments\stock\VSS_Stock\data\VSS_Stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\stock\VSS_Stock\data\VSS_Stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\stock\VSS_Stock\data\VSS_Stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\stock\VSS_Stock\data\VSS_Stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\stock\VSS_Stock\data\VSS_Stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
	class My_DF_Weapons_Attachments_stock_MagpulDT: My_DF_Weapons_Attachments_stock_Base
	{
		scope=2;
		displayName="$STR_My_DF_Weapons_Attachments_stock_MagpulDT0";
		descriptionShort="$STR_My_DF_Weapons_Attachments_stock_MagpulDT1";
		model="\My_DF_Weapons_Attachments\stock\MagpulDT\MagpulDT.p3d";
		recoilModifier[]={0.9,0.9,0.9};
		swayModifier[]={0.85,0.85,0.85};
		inventorySlot[]=
		{
			"DF_stock_notube"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"My_DF_Weapons_Attachments\stock\MagpulDT\data\MagpulDT_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"My_DF_Weapons_Attachments\stock\MagpulDT\data\MagpulDT.rvmat"
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
								"My_DF_Weapons_Attachments\stock\MagpulDT\data\MagpulDT.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"My_DF_Weapons_Attachments\stock\MagpulDT\data\MagpulDT_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"My_DF_Weapons_Attachments\stock\MagpulDT\data\MagpulDT_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"My_DF_Weapons_Attachments\stock\MagpulDT\data\MagpulDT_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"My_DF_Weapons_Attachments\stock\MagpulDT\data\MagpulDT_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class My_DF_Weapons_Attachments_stock_AdvanceART: My_DF_Weapons_Attachments_stock_Base
	{
		scope=2;
		displayName="$STR_My_DF_Weapons_Attachments_stock_AdvanceART0";
		descriptionShort="$STR_My_DF_Weapons_Attachments_stock_AdvanceART1";
		model="\My_DF_Weapons_Attachments\stock\AdvanceART\AdvanceART.p3d";
		recoilModifier[]={0.85,0.85,0.85};
		swayModifier[]={0.9,0.9,0.9};
		inventorySlot[]=
		{
			"DF_stock_notube"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"My_DF_Weapons_Attachments\stock\AdvanceART\data\AdvanceART_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"My_DF_Weapons_Attachments\stock\AdvanceART\data\AdvanceART.rvmat"
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
								"My_DF_Weapons_Attachments\stock\AdvanceART\data\AdvanceART.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"My_DF_Weapons_Attachments\stock\AdvanceART\data\AdvanceART_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"My_DF_Weapons_Attachments\stock\AdvanceART\data\AdvanceART_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"My_DF_Weapons_Attachments\stock\AdvanceART\data\AdvanceART_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"My_DF_Weapons_Attachments\stock\AdvanceART\data\AdvanceART_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};