class CfgPatches
{
	class My_DF_Weapons_AmmoBox
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Projectiles",
			"DZ_Weapons_Ammunition",
			"My_DF_Weapons_AmmoBox"
		};
	};
};
class CfgVehicles
{
    class My_DF_Weapons_AmmoBox_Base;
    class My_DF_Weapons_AmmoBox_127x55_BP_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_127x55_BP_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_127x55_BP_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\AmmoBox_127x55.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_127x55_BP
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_127x55_PD12_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_127x55_PD12_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_127x55_PD12_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\AmmoBox_127x55.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_127x55_PD12
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_127x55_PS12_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_127x55_PS12_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_127x55_PS12_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\AmmoBox_127x55.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_127x55_PS12
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_127x55_PS12A_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_127x55_PS12A100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_127x55_PS12A_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\AmmoBox_127x55.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_127x55_PS12A
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_127x55_PS12B_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_127x55_PS12B_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_127x55_PS12B_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\AmmoBox_127x55.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_127x55_PS12B
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_12Gauge_Dragon_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_12Gauge_Dragon_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_12Gauge_Dragon_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\AmmoBox_12Gauge.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_12Gauge_Dragon
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_12Gauge_7mmBuckshot_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_12Gauge_7mmBuckshot_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_12Gauge_7mmBuckshot_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\AmmoBox_12Gauge.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_12Gauge_7mmBuckshot
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_12Gauge_8mmBuckshot_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_12Gauge_8mmBuckshot_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_12Gauge_8mmBuckshot_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\AmmoBox_12Gauge.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_12Gauge_8mmBuckshot
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_12Gauge_AP20_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_12Gauge_AP20_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_12Gauge_AP20_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\AmmoBox_12Gauge.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_12Gauge_AP20
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_12Gauge_Arrow_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_12Gauge_Arrow_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_12Gauge_Arrow_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\AmmoBox_12Gauge.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_12Gauge_Arrow
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_12Gauge_RIP_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_12Gauge_RIP_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_12Gauge_RIP_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\AmmoBox_12Gauge.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_12Gauge_RIP
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_12Gauge_FTX_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_12Gauge_FTX_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_12Gauge_FTX_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\AmmoBox_12Gauge.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_12Gauge_FTX
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_12Gauge_GT_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_12Gauge_GT_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_12Gauge_GT_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\AmmoBox_12Gauge.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_12Gauge\data\AmmoBox_12Gauge_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_12Gauge_GT
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_300_Bpz_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_300_Bpz_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_300_Bpz_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\AmmoBox_127x55.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_300_Bpz
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_300_Cbj_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_300_Cbj_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_300_Cbj_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\AmmoBox_127x55.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_300_Cbj
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_300_Vmax_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_300_Vmax_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_300_Vmax_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\AmmoBox_127x55.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_127x55\data\AmmoBox_127x55_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_300_Vmax
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_338_LapMag_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_338_LapMag_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_338_LapMag_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_338\AmmoBox_338.p3d";
        itemSize[] = { 2, 2 };
        debug_ItemCategory = 5;
        rotationFlags = 17;
        weight = 10000;
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_338\data\AmmoBox_338_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_338\data\AmmoBox_338.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_338\data\AmmoBox_338.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_338\data\AmmoBox_338_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_338\data\AmmoBox_338_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_338\data\AmmoBox_338_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_338\data\AmmoBox_338_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_338_LapMag
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_357Magnum_FMJ_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_357Magnum_FMJ_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_357Magnum_FMJ_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\AmmoBox_357Magnum.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_357Magnum_FMJ
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_357Magnum_Shot_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_357Magnum_Shot_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_357Magnum_Shot_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\AmmoBox_357Magnum.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_357Magnum_Shot
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_357Magnum_JHP_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_357Magnum_JHP_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_357Magnum_JHP_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\AmmoBox_357Magnum.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_357Magnum_JHP
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_357Magnum_HP_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_357Magnum_HP_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_357Magnum_HP_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\AmmoBox_357Magnum.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_357Magnum\data\AmmoBox_357Magnum_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_357Magnum_HP
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_45ACP_AP_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_45ACP_AP_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_45ACP_AP_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\AmmoBox_45ACP.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_45ACP_AP
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_45ACP_FMJ_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_45ACP_FMJ_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_45ACP_FMJ_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\AmmoBox_45ACP.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_45ACP_FMJ
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_45ACP_HS_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_45ACP_HS_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_45ACP_HS_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\AmmoBox_45ACP.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_45ACP_HS
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_45ACP_JHP_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_45ACP_JHP_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_45ACP_JHP_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\AmmoBox_45ACP.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_45ACP_JHP
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_45ACP_RIP_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_45ACP_RIP_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_45ACP_RIP_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\AmmoBox_45ACP.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_45ACP_RIP
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_45_70_FMJ_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_45_70_FMJ_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_45_70_FMJ_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45_70\AmmoBox_45_70.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45_70\data\AmmoBox_45_70_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45_70\data\AmmoBox_45_70.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45_70\data\AmmoBox_45_70.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45_70\data\AmmoBox_45_70_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45_70\data\AmmoBox_45_70_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45_70\data\AmmoBox_45_70_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45_70\data\AmmoBox_45_70_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_45_70_FMJ
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_45_70_FTX_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_45_70_FTX_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_45_70_FTX_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45_70\AmmoBox_45_70.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45_70\data\AmmoBox_45_70_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45_70\data\AmmoBox_45_70.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45_70\data\AmmoBox_45_70.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45_70\data\AmmoBox_45_70_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45_70\data\AmmoBox_45_70_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45_70\data\AmmoBox_45_70_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45_70\data\AmmoBox_45_70_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_45_70_FTX
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_45_70_RN_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_45_70_RN_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_45_70_RN_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45_70\AmmoBox_45_70.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45_70\data\AmmoBox_45_70_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45_70\data\AmmoBox_45_70.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45_70\data\AmmoBox_45_70.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45_70\data\AmmoBox_45_70_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45_70\data\AmmoBox_45_70_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45_70\data\AmmoBox_45_70_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45_70\data\AmmoBox_45_70_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_45_70_RN
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_46x30_AP_SX_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_46x30_AP_SX_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_46x30_AP_SX_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_46x30\AmmoBox_46x30.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_46x30\data\AmmoBox_46x30_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_46x30\data\AmmoBox_46x30.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_46x30\data\AmmoBox_46x30.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_46x30\data\AmmoBox_46x30_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_46x30\data\AmmoBox_46x30_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_46x30\data\AmmoBox_46x30_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_46x30\data\AmmoBox_46x30_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_46x30_AP_SX
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_46x30_FMJ_SX_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_46x30_FMJ_SX_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_46x30_FMJ_SX_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_46x30\AmmoBox_46x30.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_46x30\data\AmmoBox_46x30_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_46x30\data\AmmoBox_46x30.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_46x30\data\AmmoBox_46x30.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_46x30\data\AmmoBox_46x30_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_46x30\data\AmmoBox_46x30_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_46x30\data\AmmoBox_46x30_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_46x30\data\AmmoBox_46x30_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_46x30_FMJ_SX
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_46x30_Subsonic_SX_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_46x30_Subsonic_SX_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_46x30_Subsonic_SX_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_46x30\AmmoBox_46x30.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_46x30\data\AmmoBox_46x30_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_46x30\data\AmmoBox_46x30.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_46x30\data\AmmoBox_46x30.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_46x30\data\AmmoBox_46x30_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_46x30\data\AmmoBox_46x30_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_46x30\data\AmmoBox_46x30_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_46x30\data\AmmoBox_46x30_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_46x30_Subsonic_SX
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_50AE_FMJ_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_50AE_FMJ_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_50AE_FMJ_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_50AE\AmmoBox_50AE.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_50AE\data\AmmoBox_50AE_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_50AE\data\AmmoBox_50AE.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_50AE\data\AmmoBox_50AE.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_50AE\data\AmmoBox_50AE_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_50AE\data\AmmoBox_50AE_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_50AE\data\AmmoBox_50AE_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_50AE\data\AmmoBox_50AE_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_50AE_FMJ
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_50AE_HP_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_50AE_HP_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_50AE_HP_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_50AE\AmmoBox_50AE.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_50AE\data\AmmoBox_50AE_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_50AE\data\AmmoBox_50AE.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_50AE\data\AmmoBox_50AE.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_50AE\data\AmmoBox_50AE_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_50AE\data\AmmoBox_50AE_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_50AE\data\AmmoBox_50AE_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_50AE\data\AmmoBox_50AE_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_50AE_HP
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_50AE_JHP_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_50AE_JHP_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_50AE_JHP_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_50AE\AmmoBox_50AE.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_50AE\data\AmmoBox_50AE_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_50AE\data\AmmoBox_50AE.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_50AE\data\AmmoBox_50AE.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_50AE\data\AmmoBox_50AE_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_50AE\data\AmmoBox_50AE_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_50AE\data\AmmoBox_50AE_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_50AE\data\AmmoBox_50AE_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_50AE_JHP
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_545x39_BS_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_545x39_BS_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_545x39_BS_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_545x39\AmmoBox_545x39.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_545x39_BS
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_545x39_BT_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_545x39_BT_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_545x39_BT_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_545x39\AmmoBox_545x39.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_545x39_BT
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_545x39_PRS_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_545x39_PRS_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_545x39_PRS_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_545x39\AmmoBox_545x39.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_545x39_PRS
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_545x39_PS_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_545x39_PS_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_545x39_PS_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_545x39\AmmoBox_545x39.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_545x39_PS
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_545x39_T_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_545x39_T_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_545x39_T_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_545x39\AmmoBox_545x39.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_545x39_T
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_556x45_FMJ_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_556x45_FMJ_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_556x45_FMJ_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\AmmoBox_556x45.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_556x45_FMJ
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_556x45_M855_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_556x45_M855_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_556x45_M855_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\AmmoBox_556x45.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_556x45_M855
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_556x45_M855A1_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_556x45_M855A1_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_556x45_M855A1_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\AmmoBox_556x45.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_556x45_M855A1
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_556x45_M995_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_556x45_M995_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_556x45_M995_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\AmmoBox_556x45.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_556x45_M995
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_556x45_RRLP_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_556x45_RRLP_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_556x45_RRLP_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\AmmoBox_556x45.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_556x45\data\AmmoBox_556x45_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_556x45_RRLP
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_57x28_L191_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_57x28_L191_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_57x28_L191_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\AmmoBox_45ACP.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_57x28_L191
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_57x28_R37F_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_57x28_R37F_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_57x28_R37F_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\AmmoBox_45ACP.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_57x28_R37F
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_57x28_SS190_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_57x28_SS190_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_57x28_SS190_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\AmmoBox_45ACP.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_57x28_SS190
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_57x28_SS193_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_57x28_SS193_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_57x28_SS193_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\AmmoBox_45ACP.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_57x28_SS193
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_57x28_SS197SR_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_57x28_SS197SR_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_57x28_SS197SR_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\AmmoBox_45ACP.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_57x28_SS197SR
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_57x28_SS198LF_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_57x28_SS198LF_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_57x28_SS198LF_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\AmmoBox_45ACP.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_45ACP\data\AmmoBox_45ACP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_57x28_SS198LF
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_58X42_DBP10_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_58X42_DBP10_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_58X42_DBP10_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\AmmoBox_58X42.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_58X42_DBP10
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_58X42_DBP87_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_58X42_DBP87_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_58X42_DBP87_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\AmmoBox_58X42.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_58X42_DBP87
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_58X42_DVC12_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_58X42_DVC12_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_58X42_DVC12_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\AmmoBox_58X42.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_58X42_DVC12
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_58X42_DVP88_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_58X42_DVP88_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_58X42_DVP88_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\AmmoBox_58X42.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_58X42\data\AmmoBox_58X42_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_58X42_DVP88
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_68x51_FMJ_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_68x51_FMJ_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_68x51_FMJ_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_68x51\AmmoBox_68x51.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_68x51\data\AmmoBox_68x51_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_68x51\data\AmmoBox_68x51.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_68x51\data\AmmoBox_68x51.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_68x51\data\AmmoBox_68x51_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_68x51\data\AmmoBox_68x51_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_68x51\data\AmmoBox_68x51_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_68x51\data\AmmoBox_68x51_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_68x51_FMJ
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_68x51_AP_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_68x51_AP_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_68x51_AP_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_68x51\AmmoBox_68x51.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_68x51\data\AmmoBox_68x51_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_68x51\data\AmmoBox_68x51.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_68x51\data\AmmoBox_68x51.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_68x51\data\AmmoBox_68x51_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_68x51\data\AmmoBox_68x51_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_68x51\data\AmmoBox_68x51_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_68x51\data\AmmoBox_68x51_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_68x51_AP
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_68x51_Hybird_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_68x51_Hybird_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_68x51_Hybird_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_68x51\AmmoBox_68x51.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_68x51\data\AmmoBox_68x51_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_68x51\data\AmmoBox_68x51.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_68x51\data\AmmoBox_68x51.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_68x51\data\AmmoBox_68x51_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_68x51\data\AmmoBox_68x51_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_68x51\data\AmmoBox_68x51_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_68x51\data\AmmoBox_68x51_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_68x51_Hybird
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_762x39_AP_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_762x39_AP_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_762x39_AP_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\AmmoBox_762x39.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_762x39_AP
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_762x39_BP_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_762x39_BP_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_762x39_BP_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\AmmoBox_762x39.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_762x39_BP
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_762x39_LP_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_762x39_LP_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_762x39_LP_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\AmmoBox_762x39.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_762x39_LP
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_762x39_PS_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_762x39_PS_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_762x39_PS_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\AmmoBox_762x39.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_762x39_PS
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_762x39_T45N_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_762x39_T45N_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_762x39_T45N_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\AmmoBox_762x39.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x39\data\AmmoBox_762x39_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_762x39_T45N
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_762x51_BPZ_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_762x51_BPZ_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_762x51_BPZ_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\AmmoBox_762x51.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_762x51_BPZ
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_762x51_M61_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_762x51_M61_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_762x51_M61_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\AmmoBox_762x51.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_762x51_M61
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_762x51_M62_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_762x51_M62_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_762x51_M62_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\AmmoBox_762x51.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_762x51_M62
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_762x51_M80_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_762x51_M80_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_762x51_M80_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\AmmoBox_762x51.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_762x51_M80
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_762x51_UltraNosler_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_762x51_UltraNosler_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_762x51_UltraNosler_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\AmmoBox_762x51.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x51\data\AmmoBox_762x51_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_762x51_UltraNosler
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_762x54R_BT_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_762x54R_BT_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_762x54R_BT_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\AmmoBox_762x54R.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_762x54R_BT
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_762x54R_SNB_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_762x54R_SNB_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_762x54R_SNB_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\AmmoBox_762x54R.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_762x54R_SNB
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_762x54R_LPS_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_762x54R_LPS_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_762x54R_LPS_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\AmmoBox_762x54R.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_762x54R_LPS
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_762x54R_T46M_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_762x54R_T46M_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_762x54R_T46M_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\AmmoBox_762x54R.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_762x54R\data\AmmoBox_762x54R_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_762x54R_T46M
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_9x19_AP63_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_9x19_AP63_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_9x19_AP63_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\AmmoBox_9x19.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_9x19_AP63
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_9x19_PBP_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_9x19_PBP_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_9x19_PBP_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\AmmoBox_9x19.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_9x19_PBP
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_9x19_PSO_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_9x19_PSO_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_9x19_PSO_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\AmmoBox_9x19.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_9x19_PSO
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_9x19_Pst_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_9x19_Pst_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_9x19_Pst_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\AmmoBox_9x19.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_9x19_Pst
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_9x19_RIP_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_9x19_RIP_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_9x19_RIP_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\AmmoBox_9x19.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_9x19_RIP
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_9x39_BP_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_9x39_BP_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_9x39_BP_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\AmmoBox_9x19.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_9x39_BP
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_9x39_SP5_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_9x39_SP5_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_9x39_SP5_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\AmmoBox_9x19.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_9x39_SP5
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
    class My_DF_Weapons_AmmoBox_9x39_SP6_100Rnd: My_DF_Weapons_AmmoBox_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_AmmoBox_9x39_SP6_100Rnd0";
        descriptionShort = "$STR_My_DF_Weapons_AmmoBox_9x39_SP6_100Rnd1";
        model = "\My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\AmmoBox_9x19.p3d";
        itemSize[] = { 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\AmmoBox\AmmoBox_9x19\data\AmmoBox_9x19_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class My_DF_Weapons_Ammo_9x39_SP6
            {
                value = 100;
                variable = "quantity";
            };
        };
    };
};