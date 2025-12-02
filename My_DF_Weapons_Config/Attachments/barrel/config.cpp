class CfgPatches
{
	class My_DF_Weapons_Attachments_barrel_config
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Supports",
			"My_DF_Weapons_Attachments_barrel"
		};
	};
};
class cfgVehicles
{
    class My_DF_Weapons_Attachments_barrel_Base;
    class My_DF_Weapons_Attachments_barrel_93RAuto: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_93RAuto0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_93RAuto1";
        model = "\My_DF_Weapons_Attachments\barrel\93RAuto\93RAuto.p3d";
        inventorySlot[] = {
            "DF_barrel_93R"
        };
        weight = 500;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 1.05, 1.05, 1.05 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\93RAuto\data\93RAuto_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\93RAuto\data\93RAuto.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\93RAuto\data\93RAuto.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\93RAuto\data\93RAuto_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\93RAuto\data\93RAuto_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\93RAuto\data\93RAuto_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\93RAuto\data\93RAuto_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_93RHeavy: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_93RHeavy0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_93RHeavy1";
        model = "\My_DF_Weapons_Attachments\barrel\93RHeavy\93RHeavy.p3d";
        inventorySlot[] = {
            "DF_barrel_93R"
        };
        weight = 400;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\93RHeavy\data\93RHeavy_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\93RHeavy\data\93RHeavy.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\93RHeavy\data\93RHeavy.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\93RHeavy\data\93RHeavy_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\93RHeavy\data\93RHeavy_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\93RHeavy\data\93RHeavy_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\93RHeavy\data\93RHeavy_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_93RLong: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_93RLong0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_93RLong1";
        model = "\My_DF_Weapons_Attachments\barrel\93RLong\93RLong.p3d";
        inventorySlot[] = {
            "DF_barrel_93R"
        };
        weight = 500;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\93RLong\data\93RLong_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\93RLong\data\93RLong.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\93RLong\data\93RLong.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\93RLong\data\93RLong_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\93RLong\data\93RLong_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\93RLong\data\93RLong_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\93RLong\data\93RLong_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_93RShort: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_93RShort0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_93RShort1";
        model = "\My_DF_Weapons_Attachments\barrel\93RShort\93RShort.p3d";
        inventorySlot[] = {
            "DF_barrel_93R"
        };
        weight = 300;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 1, 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\93RShort\data\93RShort_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\93RShort\data\93RShort.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\93RShort\data\93RShort.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\93RShort\data\93RShort_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\93RShort\data\93RShort_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\93RShort\data\93RShort_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\93RShort\data\93RShort_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_93RTac: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_93RTac0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_93RTac1";
        model = "\My_DF_Weapons_Attachments\barrel\93RTac\93RTac.p3d";
        inventorySlot[] = {
            "DF_barrel_93R"
        };
        weight = 300;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Pistols\93R\data\93R_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Pistols\93R\data\93R.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Pistols\93R\data\93R.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Pistols\93R\data\93R_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Pistols\93R\data\93R_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Pistols\93R\data\93R_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Pistols\93R\data\93R_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_akmDmr: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_akmDmr0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_akmDmr1";
        model = "\My_DF_Weapons_Attachments\barrel\akmDmr\akmDmr.p3d";
        inventorySlot[] = {
            "DF_barrel_AKM"
        };
        weight = 400;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 1.05, 1.05, 1.05 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\akmDmr\data\akmDmr_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\akmDmr\data\akmDmr.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\akmDmr\data\akmDmr.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\akmDmr\data\akmDmr_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\akmDmr\data\akmDmr_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\akmDmr\data\akmDmr_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\akmDmr\data\akmDmr_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_Ash12long: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_Ash12long0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_Ash12long1";
        model = "\My_DF_Weapons_Attachments\barrel\Ash12long\Ash12long.p3d";
        inventorySlot[] = {
            "DF_barrel_Ash12"
        };
        weight = 600;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 1.1, 1.1, 1.1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\Ash12long\data\Ash12long_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\Ash12long\data\Ash12long.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\Ash12long\data\Ash12long.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\Ash12long\data\Ash12long_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\Ash12long\data\Ash12long_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\Ash12long\data\Ash12long_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\Ash12long\data\Ash12long_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_Ash12Mid: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_Ash12Mid0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_Ash12Mid1";
        model = "\My_DF_Weapons_Attachments\barrel\Ash12Mid\Ash12Mid.p3d";
        inventorySlot[] = {
            "DF_barrel_Ash12"
        };
        weight = 400;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\Ash12Mid\data\Ash12Mid_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\Ash12Mid\data\Ash12Mid.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\Ash12Mid\data\Ash12Mid.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\Ash12Mid\data\Ash12Mid_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\Ash12Mid\data\Ash12Mid_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\Ash12Mid\data\Ash12Mid_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\Ash12Mid\data\Ash12Mid_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_ASVALlong: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_ASVALlong0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_ASVALlong1";
        model = "\My_DF_Weapons_Attachments\barrel\ASVALlong\ASVALlong.p3d";
        inventorySlot[] = {
            "DF_barrel_VSS"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up"
        };
        weight = 500;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\ASVALlong\data\ASVALlong_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\ASVALlong\data\ASVALlong.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\ASVALlong\data\ASVALlong.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\ASVALlong\data\ASVALlong_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\ASVALlong\data\ASVALlong_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\ASVALlong\data\ASVALlong_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\ASVALlong\data\ASVALlong_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_AWMLong: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_AWMLong0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_AWMLong1";
        model = "\My_DF_Weapons_Attachments\barrel\AWMLong\AWMLong.p3d";
        inventorySlot[] = {
            "DF_barrel_AWM",
            "DF_barrel_M700"
        };
        weight = 500;
        itemSize[] = { 4, 1 };
        recoilModifier[] = { 0.7, 0.7, 0.7 };
        swayModifier[] = { 1, 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\AWMLong\data\AWMLong_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\AWMLong\data\AWMLong.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\AWMLong\data\AWMLong.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\AWMLong\data\AWMLong_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\AWMLong\data\AWMLong_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\AWMLong\data\AWMLong_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\AWMLong\data\AWMLong_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_ColtPythonCarbine: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_ColtPythonCarbine0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_ColtPythonCarbine1";
        model = "\My_DF_Weapons_Attachments\barrel\ColtPythonCarbine\ColtPythonCarbine.p3d";
        inventorySlot[] = {
            "DF_barrel_ColtPython"
        };
        weight = 400;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\ColtPythonCarbine\data\ColtPythonCarbine_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\ColtPythonCarbine\data\ColtPythonCarbine.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\ColtPythonCarbine\data\ColtPythonCarbine.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\ColtPythonCarbine\data\ColtPythonCarbine_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\ColtPythonCarbine\data\ColtPythonCarbine_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\ColtPythonCarbine\data\ColtPythonCarbine_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\ColtPythonCarbine\data\ColtPythonCarbine_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_ColtPythonLong: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_ColtPythonLong0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_ColtPythonLong1";
        model = "\My_DF_Weapons_Attachments\barrel\ColtPythonLong\ColtPythonLong.p3d";
        inventorySlot[] = {
            "DF_barrel_ColtPython"
        };
        weight = 500;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\ColtPythonLong\data\ColtPythonLong_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\ColtPythonLong\data\ColtPythonLong.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\ColtPythonLong\data\ColtPythonLong.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\ColtPythonLong\data\ColtPythonLong_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\ColtPythonLong\data\ColtPythonLong_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\ColtPythonLong\data\ColtPythonLong_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\ColtPythonLong\data\ColtPythonLong_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_ColtPythonShort: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_ColtPythonShort0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_ColtPythonShort1";
        model = "\My_DF_Weapons_Attachments\barrel\ColtPythonShort\ColtPythonShort.p3d";
        inventorySlot[] = {
            "DF_barrel_ColtPython"
        };
        weight = 300;
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\ColtPythonShort\data\ColtPythonShort_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\ColtPythonShort\data\ColtPythonShort.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\ColtPythonShort\data\ColtPythonShort.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\ColtPythonShort\data\ColtPythonShort_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\ColtPythonShort\data\ColtPythonShort_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\ColtPythonShort\data\ColtPythonShort_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\ColtPythonShort\data\ColtPythonShort_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_DeagleLong: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_DeagleLong0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_DeagleLong1";
        model = "\My_DF_Weapons_Attachments\barrel\DeagleLong\DeagleLong.p3d";
        inventorySlot[] = {
            "DF_barrel_Deagle"
        };
        weight = 500;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 1, 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\DeagleLong\data\DeagleLong_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\DeagleLong\data\DeagleLong.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\DeagleLong\data\DeagleLong.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\DeagleLong\data\DeagleLong_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\DeagleLong\data\DeagleLong_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\DeagleLong\data\DeagleLong_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\DeagleLong\data\DeagleLong_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_DeagleTac: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_DeagleTac0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_DeagleTac1";
        model = "\My_DF_Weapons_Attachments\barrel\DeagleTac\DeagleTac.p3d";
        inventorySlot[] = {
            "DF_barrel_Deagle"
        };
        weight = 500;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\DeagleTac\data\DeagleTac_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\DeagleTac\data\DeagleTac.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\DeagleTac\data\DeagleTac.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\DeagleTac\data\DeagleTac_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\DeagleTac\data\DeagleTac_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\DeagleTac\data\DeagleTac_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\DeagleTac\data\DeagleTac_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_G17cAdv: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_G17cAdv0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_G17cAdv1";
        model = "\My_DF_Weapons_Attachments\barrel\G17cAdv\G17cAdv.p3d";
        inventorySlot[] = {
            "DF_barrel_G17"
        };
        weight = 300;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\G17cAdv\data\G17cAdv_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\G17cAdv\data\G17cAdv.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\G17cAdv\data\G17cAdv.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\G17cAdv\data\G17cAdv_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\G17cAdv\data\G17cAdv_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\G17cAdv\data\G17cAdv_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\G17cAdv\data\G17cAdv_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_G17cCompetition: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_G17cCompetition0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_G17cCompetition1";
        model = "\My_DF_Weapons_Attachments\barrel\G17cCompetition\G17cCompetition.p3d";
        inventorySlot[] = {
            "DF_barrel_G17"
        };
        weight = 300;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\G17cCompetition\data\G17cCompetition_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\G17cCompetition\data\G17cCompetition.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\G17cCompetition\data\G17cCompetition.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\G17cCompetition\data\G17cCompetition_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\G17cCompetition\data\G17cCompetition_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\G17cCompetition\data\G17cCompetition_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\G17cCompetition\data\G17cCompetition_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_G18cLong: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_G18cLong0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_G18cLong1";
        model = "\My_DF_Weapons_Attachments\barrel\G18cLong\G18cLong.p3d";
        inventorySlot[] = {
            "DF_barrel_G18"
        };
        weight = 300;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\G18cLong\data\G18cLong_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\G18cLong\data\G18cLong.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\G18cLong\data\G18cLong.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\G18cLong\data\G18cLong_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\G18cLong\data\G18cLong_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\G18cLong\data\G18cLong_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\G18cLong\data\G18cLong_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_M1014Long: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_M1014Long0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_M1014Long1";
        model = "\My_DF_Weapons_Attachments\barrel\M1014Long\M1014Long.p3d";
        inventorySlot[] = {
            "DF_barrel_M1014"
        };
        weight = 500;
        itemSize[] = { 4, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\M1014Long\data\M1014Long_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\M1014Long\data\M1014Long.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\M1014Long\data\M1014Long.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\M1014Long\data\M1014Long_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\M1014Long\data\M1014Long_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\M1014Long\data\M1014Long_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\M1014Long\data\M1014Long_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_M14_long: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_M14_long0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_M14_long1";
        model = "\My_DF_Weapons_Attachments\barrel\M14_long\M14_long.p3d";
        inventorySlot[] = {
            "DF_barrel_M14"
        };
        weight = 600;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\M14_long\data\M14_long_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\M14_long\data\M14_long.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\M14_long\data\M14_long.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\M14_long\data\M14_long_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\M14_long\data\M14_long_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\M14_long\data\M14_long_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\M14_long\data\M14_long_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_M14_short: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_M14_short0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_M14_short1";
        model = "\My_DF_Weapons_Attachments\barrel\M14_short\M14_short.p3d";
        inventorySlot[] = {
            "DF_barrel_M14"
        };
        weight = 600;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.75, 0.75, 0.75 };
        swayModifier[] = { 1.1, 1.1, 1.1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\M14_long\data\M14_long_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\M14_long\data\M14_long.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\M14_long\data\M14_long.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\M14_long\data\M14_long_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\M14_long\data\M14_long_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\M14_long\data\M14_long_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\M14_long\data\M14_long_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_M1911Tac: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_M1911Tac0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_M1911Tac1";
        model = "\My_DF_Weapons_Attachments\barrel\M1911Tac\M1911Tac.p3d";
        inventorySlot[] = {
            "DF_barrel_M1911"
        };
        weight = 300;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 1, 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\M1911Tac\data\M1911Tac_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\M1911Tac\data\M1911Tac.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\M1911Tac\data\M1911Tac.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\M1911Tac\data\M1911Tac_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\M1911Tac\data\M1911Tac_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\M1911Tac\data\M1911Tac_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\M1911Tac\data\M1911Tac_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_M249Short: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_M249Short0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_M249Short1";
        model = "\My_DF_Weapons_Attachments\barrel\M249Short\M249Short.p3d";
        inventorySlot[] = {
            "DF_barrel_M249"
        };
        weight = 600;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 1.1, 1.1, 1.1 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\M249Short\data\M249Short_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\M249Short\data\M249Short.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\M249Short\data\M249Short.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\M249Short\data\M249Short_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\M249Short\data\M249Short_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\M249Short\data\M249Short_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\M249Short\data\M249Short_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_M250short: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_M250short0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_M250short1";
        model = "\My_DF_Weapons_Attachments\barrel\M250short\M250short.p3d";
        inventorySlot[] = {
            "DF_barrel_M250"
        };
        weight = 500;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_LMG\M250\data\barrel\M250_barrel_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_LMG\M250\data\barrel\M250_barrel.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_LMG\M250\data\barrel\M250_barrel.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_LMG\M250\data\barrel\M250_barrel_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_LMG\M250\data\barrel\M250_barrel_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_LMG\M250\data\barrel\M250_barrel_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_LMG\M250\data\barrel\M250_barrel_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_M700barrel: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_M700barrel0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_M700barrel1";
        model = "\My_DF_Weapons_Attachments\barrel\M700barrel\M700barrel.p3d";
        inventorySlot[] = {
            "DF_barrel_M700"
        };
        weight = 500;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 1.05, 1.05, 1.05 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\M700barrel\data\M700barrel_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\M700barrel\data\M700barrel.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\M700barrel\data\M700barrel.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\M700barrel\data\M700barrel_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\M700barrel\data\M700barrel_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\M700barrel\data\M700barrel_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\M700barrel\data\M700barrel_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_M870ext: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_M870ext0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_M870ext1";
        model = "\My_DF_Weapons_Attachments\barrel\M870ext\M870ext.p3d";
        inventorySlot[] = {
            "DF_barrel_M870"
        };
        weight = 500;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\M870ext\data\M870ext_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\M870ext\data\M870ext.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\M870ext\data\M870ext.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\M870ext\data\M870ext_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\M870ext\data\M870ext_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\M870ext\data\M870ext_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\M870ext\data\M870ext_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_Mini14long: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_Mini14long0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_Mini14long1";
        model = "\My_DF_Weapons_Attachments\barrel\Mini14long\Mini14long.p3d";
        inventorySlot[] = {
            "DF_barrel_Mini14"
        };
        weight = 500;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\Mini14\data\barrel\Mini14_barrel_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\Mini14\data\barrel\Mini14_barrel.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_DMR\Mini14\data\barrel\Mini14_barrel.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\Mini14\data\barrel\Mini14_barrel_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\Mini14\data\barrel\Mini14_barrel_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\Mini14\data\barrel\Mini14_barrel_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\Mini14\data\barrel\Mini14_barrel_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_mp7long: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_mp7long0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_mp7long1";
        model = "\My_DF_Weapons_Attachments\barrel\mp7long\mp7long.p3d";
        inventorySlot[] = {
            "DF_barrel_MP7"
        };
        weight = 300;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 1.05, 1.05, 1.05 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\mp7long3\data\mp7long3_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\mp7long3\data\mp7long3.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\mp7long3\data\mp7long3.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\mp7long3\data\mp7long3_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\mp7long3\data\mp7long3_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\mp7long3\data\mp7long3_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\mp7long3\data\mp7long3_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_mp7long2: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_mp7long20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_mp7long21";
        model = "\My_DF_Weapons_Attachments\barrel\mp7long2\mp7long2.p3d";
        inventorySlot[] = {
            "DF_barrel_MP7"
        };
        weight = 300;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 1.05, 1.05, 1.05 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\mp7long3\data\mp7long3_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\mp7long3\data\mp7long3.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\mp7long3\data\mp7long3.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\mp7long3\data\mp7long3_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\mp7long3\data\mp7long3_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\mp7long3\data\mp7long3_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\mp7long3\data\mp7long3_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_mp7long3: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_mp7long30";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_mp7long31";
        model = "\My_DF_Weapons_Attachments\barrel\mp7long3\mp7long3.p3d";
        inventorySlot[] = {
            "DF_barrel_MP7"
        };
        weight = 300;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 1.1, 1.1, 1.1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\mp7long3\data\mp7long3_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\mp7long3\data\mp7long3.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\mp7long3\data\mp7long3.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\mp7long3\data\mp7long3_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\mp7long3\data\mp7long3_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\mp7long3\data\mp7long3_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\mp7long3\data\mp7long3_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_P90Long: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_P90Long0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_P90Long1";
        model = "\My_DF_Weapons_Attachments\barrel\P90Long\P90Long.p3d";
        inventorySlot[] = {
            "DF_barrel_P90"
        };
        weight = 300;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\P90Long\data\P90Long_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\P90Long\data\P90Long.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\P90Long\data\P90Long.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\P90Long\data\P90Long_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\P90Long\data\P90Long_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\P90Long\data\P90Long_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\P90Long\data\P90Long_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_PKMShort: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_PKMShort0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_PKMShort1";
        model = "\My_DF_Weapons_Attachments\barrel\PKMShort\PKMShort.p3d";
        inventorySlot[] = {
            "DF_barrel_PKM"
        };
        weight = 500;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 1.05, 1.05, 1.05 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo",
            "Handle"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_LMG\PKM\data\barrel\PKM_barrel_co.paa",
            "My_DF_Weapons_Attachments\barrel\PKMShort\data\PKMShort_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_LMG\PKM\data\barrel\PKM_barrel.rvmat",
            "My_DF_Weapons_Attachments\barrel\PKMShort\data\PKMShort.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_LMG\PKM\data\barrel\PKM_barrel.rvmat",
                                "My_DF_Weapons_Attachments\barrel\PKMShort\data\PKMShort.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_LMG\PKM\data\barrel\PKM_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\barrel\PKMShort\data\PKMShort_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_LMG\PKM\data\barrel\PKM_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\barrel\PKMShort\data\PKMShort_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_LMG\PKM\data\barrel\PKM_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\barrel\PKMShort\data\PKMShort_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_LMG\PKM\data\barrel\PKM_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\barrel\PKMShort\data\PKMShort_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_PKMShort2: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_PKMShort20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_PKMShort21";
        model = "\My_DF_Weapons_Attachments\barrel\PKMShort2\PKMShort2.p3d";
        inventorySlot[] = {
            "DF_barrel_PKM"
        };
        weight = 500;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 1.05, 1.05, 1.05 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_LMG\PKM\data\barrel\PKM_barrel_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_LMG\PKM\data\barrel\PKM_barrel.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_LMG\PKM\data\barrel\PKM_barrel.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_LMG\PKM\data\barrel\PKM_barrel_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_LMG\PKM\data\barrel\PKM_barrel_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_LMG\PKM\data\barrel\PKM_barrel_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_LMG\PKM\data\barrel\PKM_barrel_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_QBZ191long: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_QBZ191long0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_QBZ191long1";
        model = "\My_DF_Weapons_Attachments\barrel\QBZ191long\QBZ191long.p3d";
        inventorySlot[] = {
            "DF_barrel_QBZ191"
        };
        weight = 300;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 1.05, 1.05, 1.05 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_QBZ191short: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_QBZ191short0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_QBZ191short1";
        model = "\My_DF_Weapons_Attachments\barrel\QBZ191short\QBZ191short.p3d";
        inventorySlot[] = {
            "DF_barrel_QBZ191"
        };
        weight = 200;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 1.1, 1.1, 1.1 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\QBZ191\data\barrel\QBZ191_barrel_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_QBZ95long: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_QBZ95long0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_QBZ95long1";
        model = "\My_DF_Weapons_Attachments\barrel\QBZ95long\QBZ95long.p3d";
        inventorySlot[] = {
            "DF_barrel_QBZ95"
        };
        weight = 300;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 1.1, 1.1, 1.1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\QBZ95long\data\QBZ95long_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\QBZ95long\data\QBZ95long.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\QBZ95long\data\QBZ95long.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\QBZ95long\data\QBZ95long_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\QBZ95long\data\QBZ95long_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\QBZ95long\data\QBZ95long_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\QBZ95long\data\QBZ95long_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_QBZ95short: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_QBZ95short0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_QBZ95short1";
        model = "\My_DF_Weapons_Attachments\barrel\QBZ95short\QBZ95short.p3d";
        inventorySlot[] = {
            "DF_barrel_QBZ95"
        };
        weight = 200;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 1.05, 1.05, 1.05 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\QBZ95long\data\QBZ95long_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\QBZ95long\data\QBZ95long.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\QBZ95long\data\QBZ95long.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\QBZ95long\data\QBZ95long_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\QBZ95long\data\QBZ95long_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\QBZ95long\data\QBZ95long_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\QBZ95long\data\QBZ95long_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_QJB201Short_barrel: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_QJB201Short_barrel0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_QJB201Short_barrel1";
        model = "\My_DF_Weapons_Attachments\barrel\QJB201Short_barrel\QJB201Short_barrel.p3d";
        inventorySlot[] = {
            "DF_barrel_QJB201"
        };
        weight = 400;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\QJB201Short_barrel\data\QJB201Short_barrel_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\QJB201Short_barrel\data\QJB201Short_barrel.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\QJB201Short_barrel\data\QJB201Short_barrel.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\QJB201Short_barrel\data\QJB201Short_barrel_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\QJB201Short_barrel\data\QJB201Short_barrel_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\QJB201Short_barrel\data\QJB201Short_barrel_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\QJB201Short_barrel\data\QJB201Short_barrel_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_QJB201Tac_barrel: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 0;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_QJB201Tac_barrel0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_QJB201Tac_barrel1";
        model = "\My_DF_Weapons_Attachments\barrel\QJB201Tac_barrel\QJB201Tac_barrel.p3d";
        inventorySlot[] = {
            "DF_barrel_QJB201"
        };
        weight = 400;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\QJB201Tac_barrel\data\QJB201Tac_barrel_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\QJB201Tac_barrel\data\QJB201Tac_barrel.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\QJB201Tac_barrel\data\QJB201Tac_barrel.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\QJB201Tac_barrel\data\QJB201Tac_barrel_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\QJB201Tac_barrel\data\QJB201Tac_barrel_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\QJB201Tac_barrel\data\QJB201Tac_barrel_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\QJB201Tac_barrel\data\QJB201Tac_barrel_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_QSZ92GTac: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_QSZ92GTac0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_QSZ92GTac1";
        model = "\My_DF_Weapons_Attachments\barrel\QSZ92GTac\QSZ92GTac.p3d";
        inventorySlot[] = {
            "DF_barrel_QSZ92G"
        };
        weight = 500;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 1, 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\QSZ92GTac\data\QSZ92GTac_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\QSZ92GTac\data\QSZ92GTac.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\QSZ92GTac\data\QSZ92GTac.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\QSZ92GTac\data\QSZ92GTac_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\QSZ92GTac\data\QSZ92GTac_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\QSZ92GTac\data\QSZ92GTac_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\QSZ92GTac\data\QSZ92GTac_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_R93long: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_R93long0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_R93long1";
        model = "\My_DF_Weapons_Attachments\barrel\R93long\R93long.p3d";
        inventorySlot[] = {
            "DF_barrel_R93"
        };
        weight = 400;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 1, 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\R93long\data\R93long_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\R93long\data\R93long.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\R93long\data\R93long.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\R93long\data\R93long_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\R93long\data\R93long_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\R93long\data\R93long_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\R93long\data\R93long_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_R93Short: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_R93Short0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_R93Short1";
        model = "\My_DF_Weapons_Attachments\barrel\R93Short\R93Short.p3d";
        inventorySlot[] = {
            "DF_barrel_R93",
            "DF_barrel_M700"
        };
        weight = 200;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 1.1, 1.1, 1.1 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\R93Short\data\R93Short_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\R93Short\data\R93Short.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\R93Short\data\R93Short.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\R93Short\data\R93Short_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\R93Short\data\R93Short_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\R93Short\data\R93Short_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\R93Short\data\R93Short_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_Base;
    class My_DF_Weapons_Attachments_barrel_Revolver: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_Revolver0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_Revolver1";
        model = "\My_DF_Weapons_Attachments\barrel\Revolver\Revolver.p3d";
        attachments[] = {
            "DF_frog_down",
            "DF_frog_up",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_barrel_ColtPython"
        };
        weight = 500;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\Revolver\data\Revolver_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\Revolver\data\Revolver.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\Revolver\data\Revolver.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\Revolver\data\Revolver_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\Revolver\data\Revolver_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\Revolver\data\Revolver_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\Revolver\data\Revolver_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_Revolver_Short: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_Revolver_Short0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_Revolver_Short1";
        model = "\My_DF_Weapons_Attachments\barrel\Revolver\Revolver_Short.p3d";
        attachments[] = {
            "DF_frog_down",
            "DF_frog_up",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_barrel_ColtPython"
        };
        weight = 400;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\Revolver\data\Revolver_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\Revolver\data\Revolver.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\Revolver\data\Revolver.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\Revolver\data\Revolver_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\Revolver\data\Revolver_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\Revolver\data\Revolver_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\Revolver\data\Revolver_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_SG553long: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_SG553long0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_SG553long1";
        model = "\My_DF_Weapons_Attachments\barrel\SG553long\SG553long.p3d";
        inventorySlot[] = {
            "DF_barrel_SG553"
        };
        weight = 300;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 1.1, 1.1, 1.1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\SG553long\data\SG553long_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\SG553long\data\SG553long.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553long\data\SG553long.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553long\data\SG553long_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553long\data\SG553long_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553long\data\SG553long_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553long\data\SG553long_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_SG553_barrel: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_SG553_barrel0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_SG553_barrel1";
        model = "\My_DF_Weapons_Attachments\barrel\SG553_barrel\SG553_barrel.p3d";
        inventorySlot[] = {
            "DF_barrel_SG553",
            "DF_barrel_SMG45",
            "DF_barrel_Uzi"
        };
        weight = 200;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_SKS_short: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_SKS_short0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_SKS_short1";
        model = "\My_DF_Weapons_Attachments\barrel\SKS_short\SKS_short.p3d";
        inventorySlot[] = {
            "DF_barrel_SKS"
        };
        weight = 500;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 1.2, 1.2, 1.2 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\SKS\data\barrel\SKS_barrel_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\SKS\data\barrel\SKS_barrel.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_DMR\SKS\data\barrel\SKS_barrel.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\SKS\data\barrel\SKS_barrel_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\SKS\data\barrel\SKS_barrel_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\SKS\data\barrel\SKS_barrel_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\SKS\data\barrel\SKS_barrel_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_SKS_Yugoslav: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_SKS_Yugoslav0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_SKS_Yugoslav1";
        model = "\My_DF_Weapons_Attachments\barrel\SKS_Yugoslav\SKS_Yugoslav.p3d";
        inventorySlot[] = {
            "DF_barrel_SKS"
        };
        weight = 600;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 1.1, 1.1, 1.1 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\SKS_Yugoslav\data\SKS_Yugoslav_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\SKS_Yugoslav\data\SKS_Yugoslav.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\SKS_Yugoslav\data\SKS_Yugoslav.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\SKS_Yugoslav\data\SKS_Yugoslav_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\SKS_Yugoslav\data\SKS_Yugoslav_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\SKS_Yugoslav\data\SKS_Yugoslav_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\SKS_Yugoslav\data\SKS_Yugoslav_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_SMG45Tac: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_SMG45Tac0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_SMG45Tac1";
        model = "\My_DF_Weapons_Attachments\barrel\SMG45Tac\SMG45Tac.p3d";
        inventorySlot[] = {
            "DF_barrel_SMG45"
        };
        weight = 200;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 1, 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\SMG45Tac\data\SMG45Tac_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\SMG45Tac\data\SMG45Tac.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45Tac\data\SMG45Tac.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45Tac\data\SMG45Tac_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45Tac\data\SMG45Tac_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45Tac\data\SMG45Tac_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45Tac\data\SMG45Tac_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_SMG45_barrel: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 0;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_SMG45_barrel0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_SMG45_barrel1";
        model = "\My_DF_Weapons_Attachments\barrel\SMG45_barrel\SMG45_barrel.p3d";
        inventorySlot[] = {
            "DF_barrel_SMG45"
        };
        weight = 200;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\SMG45_barrel\data\SMG45_barrel_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_SR25Long: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_SR25Long0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_SR25Long1";
        model = "\My_DF_Weapons_Attachments\barrel\SR25Long\SR25Long.p3d";
        inventorySlot[] = {
            "DF_barrel_SR25"
        };
        weight = 500;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\SR25\data\barrel\SR25_barrel_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\SR25\data\barrel\SR25_barrel.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_DMR\SR25\data\barrel\SR25_barrel.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\SR25\data\barrel\SR25_barrel_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\SR25\data\barrel\SR25_barrel_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\SR25\data\barrel\SR25_barrel_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\SR25\data\barrel\SR25_barrel_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_SR25Short: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_SR25Short0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_SR25Short1";
        model = "\My_DF_Weapons_Attachments\barrel\SR25Short\SR25Short.p3d";
        inventorySlot[] = {
            "DF_barrel_SR25"
        };
        weight = 500;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\SR25\data\barrel\SR25_barrel_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\SR25\data\barrel\SR25_barrel.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_DMR\SR25\data\barrel\SR25_barrel.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\SR25\data\barrel\SR25_barrel_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\SR25\data\barrel\SR25_barrel_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\SR25\data\barrel\SR25_barrel_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\SR25\data\barrel\SR25_barrel_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_SV98long: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_SV98long0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_SV98long1";
        model = "\My_DF_Weapons_Attachments\barrel\SV98long\SV98long.p3d";
        inventorySlot[] = {
            "DF_barrel_SV98"
        };
        weight = 500;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 1.1, 1.1, 1.1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_SV98short: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_SV98short0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_SV98short1";
        model = "\My_DF_Weapons_Attachments\barrel\SV98short\SV98short.p3d";
        inventorySlot[] = {
            "DF_barrel_SV98"
        };
        weight = 300;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 1.2, 1.2, 1.2 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_SV98short2: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_SV98short20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_SV98short21";
        model = "\My_DF_Weapons_Attachments\barrel\SV98short2\SV98short2.p3d";
        inventorySlot[] = {
            "DF_barrel_SV98"
        };
        weight = 300;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 1.05, 1.05, 1.05 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Snipers\SV98\data\barrel\SV98_barrel_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_svdlong: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_svdlong0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_svdlong1";
        model = "\My_DF_Weapons_Attachments\barrel\svdlong\svdlong.p3d";
        inventorySlot[] = {
            "DF_barrel_SVD"
        };
        weight = 500;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 1, 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\SVD\data\barrel\SVD_barrel_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\SVD\data\barrel\SVD_barrel.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_DMR\SVD\data\barrel\SVD_barrel.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\SVD\data\barrel\SVD_barrel_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\SVD\data\barrel\SVD_barrel_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\SVD\data\barrel\SVD_barrel_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\SVD\data\barrel\SVD_barrel_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_svdlong2: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_svdlong20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_svdlong21";
        model = "\My_DF_Weapons_Attachments\barrel\svdlong2\svdlong2.p3d";
        inventorySlot[] = {
            "DF_barrel_SVD"
        };
        weight = 500;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 1.05, 1.05, 1.05 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\SVD\data\barrel\SVD_barrel_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\SVD\data\barrel\SVD_barrel.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_DMR\SVD\data\barrel\SVD_barrel.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\SVD\data\barrel\SVD_barrel_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\SVD\data\barrel\SVD_barrel_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\SVD\data\barrel\SVD_barrel_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\SVD\data\barrel\SVD_barrel_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_UziLong: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_UziLong0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_UziLong1";
        model = "\My_DF_Weapons_Attachments\barrel\UziLong\UziLong.p3d";
        inventorySlot[] = {
            "DF_barrel_Uzi",
            "DF_barrel_Bison",
            "DF_barrel_SMG45",
            "DF_barrel_PP19"
        };
        weight = 200;
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\UziLong\data\UziLong_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\UziLong\data\UziLong.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\UziLong\data\UziLong.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\UziLong\data\UziLong_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\UziLong\data\UziLong_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\UziLong\data\UziLong_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\UziLong\data\UziLong_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_barrel_VSS_extended: My_DF_Weapons_Attachments_barrel_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_barrel_VSS_extended0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_barrel_VSS_extended1";
        model = "\My_DF_Weapons_Attachments\barrel\VSS_extended\VSS_extended.p3d";
        inventorySlot[] = {
            "DF_barrel_VSS"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_up",
            "DF_frog_left",
            "DF_frog_right",
            "DF_bipod"
        };
        weight = 600;
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 1.05, 1.05, 1.05 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\VSS_extended\data\VSS_extended_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\VSS_extended\data\VSS_extended.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\VSS_extended\data\VSS_extended.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\VSS_extended\data\VSS_extended_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\VSS_extended\data\VSS_extended_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\VSS_extended\data\VSS_extended_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\VSS_extended\data\VSS_extended_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
	class My_DF_Weapons_Attachments_barrel_MP7Advanced: My_DF_Weapons_Attachments_barrel_Base
	{
		scope=2;
		displayName="$STR_My_DF_Weapons_Attachments_barrel_MP7Advanced0";
		descriptionShort="$STR_My_DF_Weapons_Attachments_barrel_MP7Advanced1";
		model="\My_DF_Weapons_Attachments\barrel\MP7Advanced\MP7Advanced.p3d";
		inventorySlot[]=
		{
			"DF_barrel_MP7"
		};
		weight=300;
		itemSize[]={2,1};
		recoilModifier[]={0.9,0.9,0.9};
		swayModifier[]={1,1,1};
		hiddenSelectionsTextures[]=
		{
			"My_DF_Weapons_Attachments\barrel\MP7Advanced\data\MP7Advanced_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"My_DF_Weapons_Attachments\barrel\MP7Advanced\data\MP7Advanced.rvmat"
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
								"My_DF_Weapons_Attachments\barrel\MP7Advanced\data\MP7Advanced.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"My_DF_Weapons_Attachments\barrel\MP7Advanced\data\MP7Advanced_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"My_DF_Weapons_Attachments\barrel\MP7Advanced\data\MP7Advanced_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"My_DF_Weapons_Attachments\barrel\MP7Advanced\data\MP7Advanced_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"My_DF_Weapons_Attachments\barrel\MP7Advanced\data\MP7Advanced_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class My_DF_Weapons_Attachments_barrel_Ash12Advanced: My_DF_Weapons_Attachments_barrel_Base
	{
		scope=2;
		displayName="$STR_My_DF_Weapons_Attachments_barrel_Ash12Advanced0";
		descriptionShort="$STR_My_DF_Weapons_Attachments_barrel_Ash12Advanced1";
		model="\My_DF_Weapons_Attachments\barrel\Ash12Advanced\Ash12Advanced.p3d";
		inventorySlot[]=
		{
			"DF_barrel_Ash12"
		};
		weight=600;
		itemSize[]={3,1};
		recoilModifier[]={0.9,0.9,0.9};
		swayModifier[]={1.1,1.1,1.1};
		hiddenSelectionsTextures[]=
		{
			"My_DF_Weapons_Attachments\barrel\Ash12Advanced\data\Ash12Advanced_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"My_DF_Weapons_Attachments\barrel\Ash12Advanced\data\Ash12Advanced.rvmat"
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
								"My_DF_Weapons_Attachments\barrel\Ash12Advanced\data\Ash12Advanced.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"My_DF_Weapons_Attachments\barrel\Ash12Advanced\data\Ash12Advanced_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"My_DF_Weapons_Attachments\barrel\Ash12Advanced\data\Ash12Advanced_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"My_DF_Weapons_Attachments\barrel\Ash12Advanced\data\Ash12Advanced_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"My_DF_Weapons_Attachments\barrel\Ash12Advanced\data\Ash12Advanced_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class My_DF_Weapons_Attachments_barrel_SG553Advanced: My_DF_Weapons_Attachments_barrel_Base
	{
		scope=2;
		displayName="$STR_My_DF_Weapons_Attachments_barrel_SG553Advanced0";
		descriptionShort="$STR_My_DF_Weapons_Attachments_barrel_SG553Advanced1";
		model="\My_DF_Weapons_Attachments\barrel\SG553Advanced\SG553Advanced.p3d";
		inventorySlot[]=
		{
			"DF_barrel_SG553"
		};
		weight=300;
		itemSize[]={3,1};
		recoilModifier[]={0.85,0.85,0.85};
		swayModifier[]={1,1,1};
		hiddenSelectionsTextures[]=
		{
			"My_DF_Weapons_Attachments\barrel\SG553Advanced\data\SG553Advanced_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"My_DF_Weapons_Attachments\barrel\SG553Advanced\data\SG553Advanced.rvmat"
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
								"My_DF_Weapons_Attachments\barrel\SG553Advanced\data\SG553Advanced.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"My_DF_Weapons_Attachments\barrel\SG553Advanced\data\SG553Advanced_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"My_DF_Weapons_Attachments\barrel\SG553Advanced\data\SG553Advanced_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"My_DF_Weapons_Attachments\barrel\SG553Advanced\data\SG553Advanced_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"My_DF_Weapons_Attachments\barrel\SG553Advanced\data\SG553Advanced_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};