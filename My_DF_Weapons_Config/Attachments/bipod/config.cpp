class CfgPatches
{
	class My_DF_Weapons_Attachments_bipod_config
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"DZ_Data",
			"My_DF_Weapons_Attachments_bipod"
		};
	};
};
class cfgVehicles
{
    class My_DF_Weapons_Attachments_bipod_Base;
    class My_DF_Weapons_Attachments_bipod_AK74Bar: My_DF_Weapons_Attachments_bipod_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_bipod_AK74Bar0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_bipod_AK74Bar1";
        model = "\My_DF_Weapons_Attachments\bipod\AK74Bar\AK74Bar.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\bipod\AK74Bar\data\AK74Bar_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\bipod\AK74Bar\data\AK74Bar.rvmat"
        };
        inventorySlot[] = {
            "DF_bipod_AK12"
        };
        weight = 500;
        itemSize[] = { 1, 3 };
        dispersionModifier = -0.0002;
        dexterityModifier = -0.15;
        recoilModifier[] = { 1.25, 1.25, 1.25 };
        swayModifier[] = { 1.25, 1.25, 1.25 };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\bipod\AK74Bar\data\AK74Bar.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\bipod\AK74Bar\data\AK74Bar_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\bipod\AK74Bar\data\AK74Bar_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\bipod\AK74Bar\data\AK74Bar_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\bipod\AK74Bar\data\AK74Bar_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_bipod_AUGBar: My_DF_Weapons_Attachments_bipod_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_bipod_AUGBar0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_bipod_AUGBar1";
        model = "\My_DF_Weapons_Attachments\bipod\AUGBar\AUGBar.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\bipod\AUGBar\data\AUGBar_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\bipod\AUGBar\data\AUGBar.rvmat"
        };
        inventorySlot[] = {
            "DF_bipod_AUG"
        };
        weight = 500;
        itemSize[] = { 1, 3 };
        dispersionModifier = -0.0002;
        dexterityModifier = -0.15;
        recoilModifier[] = { 1.25, 1.25, 1.25 };
        swayModifier[] = { 1.25, 1.25, 1.25 };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\bipod\AUGBar\data\AUGBar.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\bipod\AUGBar\data\AUGBar_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\bipod\AUGBar\data\AUGBar_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\bipod\AUGBar\data\AUGBar_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\bipod\AUGBar\data\AUGBar_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_bipod_AWM: My_DF_Weapons_Attachments_bipod_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_bipod_AWM0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_bipod_AWM1";
        model = "\My_DF_Weapons_Attachments\bipod\CSLR5\CSLR5.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\bipod\CSLR5\data\CSLR5_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\bipod\CSLR5\data\CSLR5.rvmat"
        };
        inventorySlot[] = {
            "DF_bipod_AWM"
        };
        weight = 500;
        itemSize[] = { 1, 3 };
        dispersionModifier = -0.0002;
        dexterityModifier = -0.15;
        recoilModifier[] = { 1.25, 1.25, 1.25 };
        swayModifier[] = { 1.25, 1.25, 1.25 };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\bipod\CSLR5\data\CSLR5.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\bipod\CSLR5\data\CSLR5_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\bipod\CSLR5\data\CSLR5_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\bipod\CSLR5\data\CSLR5_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\bipod\CSLR5\data\CSLR5_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_bipod_M249Bar: My_DF_Weapons_Attachments_bipod_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_bipod_M249Bar0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_bipod_M249Bar1";
        model = "\My_DF_Weapons_Attachments\bipod\M249Bar\M249Bar.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\bipod\M249Bar\data\M249Bar_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\bipod\M249Bar\data\M249Bar.rvmat"
        };
        inventorySlot[] = {
            "DF_bipod_M249"
        };
        weight = 500;
        itemSize[] = { 1, 3 };
        dispersionModifier = -0.0002;
        dexterityModifier = -0.15;
        recoilModifier[] = { 1.25, 1.25, 1.25 };
        swayModifier[] = { 1.25, 1.25, 1.25 };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\bipod\M249Bar\data\M249Bar.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\bipod\M249Bar\data\M249Bar_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\bipod\M249Bar\data\M249Bar_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\bipod\M249Bar\data\M249Bar_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\bipod\M249Bar\data\M249Bar_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_bipod_M250Bar: My_DF_Weapons_Attachments_bipod_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_bipod_M250Bar0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_bipod_M250Bar1";
        model = "\My_DF_Weapons_Attachments\bipod\M250Bar\M250Bar.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\bipod\M250Bar\data\M250Bar_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\bipod\M250Bar\data\M250Bar.rvmat"
        };
        inventorySlot[] = {
            "DF_bipod_M250"
        };
        weight = 500;
        itemSize[] = { 1, 3 };
        dispersionModifier = -0.0002;
        dexterityModifier = -0.15;
        recoilModifier[] = { 1.25, 1.25, 1.25 };
        swayModifier[] = { 1.25, 1.25, 1.25 };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\bipod\M250Bar\data\M250Bar.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\bipod\M250Bar\data\M250Bar_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\bipod\M250Bar\data\M250Bar_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\bipod\M250Bar\data\M250Bar_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\bipod\M250Bar\data\M250Bar_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_bipod_PKMBar: My_DF_Weapons_Attachments_bipod_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_bipod_PKMBar0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_bipod_PKMBar1";
        model = "\My_DF_Weapons_Attachments\bipod\PKMBar\PKMBar.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\bipod\PKMBar\data\PKMBar_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\bipod\PKMBar\data\PKMBar.rvmat"
        };
        inventorySlot[] = {
            "DF_bipod_PKM"
        };
        weight = 500;
        itemSize[] = { 1, 3 };
        dispersionModifier = -0.0002;
        dexterityModifier = -0.15;
        recoilModifier[] = { 1.25, 1.25, 1.25 };
        swayModifier[] = { 1.25, 1.25, 1.25 };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\bipod\PKMBar\data\PKMBar.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\bipod\PKMBar\data\PKMBar_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\bipod\PKMBar\data\PKMBar_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\bipod\PKMBar\data\PKMBar_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\bipod\PKMBar\data\PKMBar_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_bipod_QJB201Bar: My_DF_Weapons_Attachments_bipod_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_bipod_QJB201Bar0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_bipod_QJB201Bar1";
        model = "\My_DF_Weapons_Attachments\bipod\QJB201Bar\QJB201Bar.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\bipod\QJB201Bar\data\QJB201Bar_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\bipod\QJB201Bar\data\QJB201Bar.rvmat"
        };
        inventorySlot[] = {
            "DF_bipod_QJB201"
        };
        weight = 500;
        itemSize[] = { 1, 3 };
        dispersionModifier = -0.0002;
        dexterityModifier = -0.15;
        recoilModifier[] = { 1.25, 1.25, 1.25 };
        swayModifier[] = { 1.25, 1.25, 1.25 };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\bipod\QJB201Bar\data\QJB201Bar.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\bipod\QJB201Bar\data\QJB201Bar_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\bipod\QJB201Bar\data\QJB201Bar_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\bipod\QJB201Bar\data\QJB201Bar_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\bipod\QJB201Bar\data\QJB201Bar_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_bipod_SR25: My_DF_Weapons_Attachments_bipod_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_bipod_SR250";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_bipod_SR251";
        model = "\My_DF_Weapons_Attachments\bipod\SR25\SR25.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\bipod\SR25\data\SR25_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\bipod\SR25\data\SR25.rvmat"
        };
        weight = 500;
        itemSize[] = { 1, 3 };
        dispersionModifier = -0.00025000001;
        dexterityModifier = -0.2;
        recoilModifier[] = { 1.2, 1.2, 1.2 };
        swayModifier[] = { 1.2, 1.2, 1.2 };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\bipod\SR25\data\SR25.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\bipod\SR25\data\SR25_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\bipod\SR25\data\SR25_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\bipod\SR25\data\SR25_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\bipod\SR25\data\SR25_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_bipod_SV98Bar: My_DF_Weapons_Attachments_bipod_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_bipod_SV98Bar0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_bipod_SV98Bar1";
        model = "\My_DF_Weapons_Attachments\bipod\SV98Bar\SV98Bar.p3d";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\bipod\SV98Bar\data\SV98Bar_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\bipod\SV98Bar\data\SV98Bar.rvmat"
        };
        inventorySlot[] = {
            "DF_bipod_SV98"
        };
        weight = 500;
        itemSize[] = { 1, 3 };
        dispersionModifier = -0.0002;
        dexterityModifier = -0.15;
        recoilModifier[] = { 1.25, 1.25, 1.25 };
        swayModifier[] = { 1.25, 1.25, 1.25 };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\bipod\SV98Bar\data\SV98Bar.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\bipod\SV98Bar\data\SV98_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\bipod\SV98Bar\data\SV98_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\bipod\SV98Bar\data\SV98_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\bipod\SV98Bar\data\SV98_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
};