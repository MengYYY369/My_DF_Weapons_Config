class CfgPatches
{
	class My_DF_Weapons_Ammo_Config
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Projectiles",
			"DZ_Weapons_Ammunition",
			"My_DF_Weapons_Ammo"
		};
	};
};
class CfgMagazines
{
    class My_DF_Weapons_Ammo_Base;
    class My_DF_Weapons_Ammo_127x55_BP: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_127x55_BP0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_127x55_BP1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_127x55_BP\Ammo_127x55_BP.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 50;
        count = 100;
        ammo = "Bullet_DF_127x55_BP";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_BP\data\Ammo_127x55_BP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_BP\data\Ammo_127x55_BP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_BP\data\Ammo_127x55_BP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_BP\data\Ammo_127x55_BP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_BP\data\Ammo_127x55_BP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_BP\data\Ammo_127x55_BP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_BP\data\Ammo_127x55_BP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_127x55_PD12: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_127x55_PD120";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_127x55_PD121";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PD12\Ammo_127x55_PD12.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 50;
        count = 100;
        ammo = "Bullet_DF_127x55_PD12";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PD12\data\Ammo_127x55_PD12_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PD12\data\Ammo_127x55_PD12.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PD12\data\Ammo_127x55_PD12.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PD12\data\Ammo_127x55_PD12_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PD12\data\Ammo_127x55_PD12_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PD12\data\Ammo_127x55_PD12_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PD12\data\Ammo_127x55_PD12_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_127x55_PS12: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_127x55_PS120";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_127x55_PS121";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PS12\Ammo_127x55_PS12.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 50;
        count = 100;
        ammo = "Bullet_DF_127x55_PS12";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PS12\data\Ammo_127x55_PS12_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PS12\data\Ammo_127x55_PS12.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PS12\data\Ammo_127x55_PS12.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PS12\data\Ammo_127x55_PS12_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PS12\data\Ammo_127x55_PS12_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PS12\data\Ammo_127x55_PS12_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PS12\data\Ammo_127x55_PS12_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_127x55_PS12A: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_127x55_PS12A0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_127x55_PS12A1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PS12A\Ammo_127x55_PS12A.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 50;
        count = 100;
        ammo = "Bullet_DF_127x55_PS12A";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PS12A\data\Ammo_127x55_PS12A_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PS12A\data\Ammo_127x55_PS12A.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PS12A\data\Ammo_127x55_PS12A.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PS12A\data\Ammo_127x55_PS12A_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PS12A\data\Ammo_127x55_PS12A_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PS12A\data\Ammo_127x55_PS12A_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PS12A\data\Ammo_127x55_PS12A_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_127x55_PS12B: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_127x55_PS12B0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_127x55_PS12B1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PS12B\Ammo_127x55_PS12B.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 50;
        count = 100;
        ammo = "Bullet_DF_127x55_PS12B";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PS12B\data\Ammo_127x55_PS12B_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PS12B\data\Ammo_127x55_PS12B.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PS12B\data\Ammo_127x55_PS12B.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PS12B\data\Ammo_127x55_PS12B_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PS12B\data\Ammo_127x55_PS12B_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PS12B\data\Ammo_127x55_PS12B_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_127x55_PS12B\data\Ammo_127x55_PS12B_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_12Gauge_7mmBuckshot: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_12Gauge_7mmBuckshot0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_12Gauge_7mmBuckshot1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_7mmBuckshot\Ammo_12Gauge_7mmBuckshot.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 4;
        weight = 30;
        count = 100;
        ammo = "Bullet_DF_12Gauge_7mmBuckshot";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_7mmBuckshot\data\Ammo_12Gauge_7mmBuckshot_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_7mmBuckshot\data\Ammo_12Gauge_7mmBuckshot.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_7mmBuckshot\data\Ammo_12Gauge_7mmBuckshot.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_7mmBuckshot\data\Ammo_12Gauge_7mmBuckshot_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_7mmBuckshot\data\Ammo_12Gauge_7mmBuckshot_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_7mmBuckshot\data\Ammo_12Gauge_7mmBuckshot_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_7mmBuckshot\data\Ammo_12Gauge_7mmBuckshot_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_12Gauge_8mmBuckshot: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_12Gauge_8mmBuckshot0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_12Gauge_8mmBuckshot1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_8mmBuckshot\Ammo_12Gauge_8mmBuckshot.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 4;
        weight = 40;
        count = 100;
        ammo = "Bullet_DF_12Gauge_8mmBuckshot";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_8mmBuckshot\data\Ammo_12Gauge_8mmBuckshot_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_8mmBuckshot\data\Ammo_12Gauge_8mmBuckshot.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_8mmBuckshot\data\Ammo_12Gauge_8mmBuckshot.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_8mmBuckshot\data\Ammo_12Gauge_8mmBuckshot_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_8mmBuckshot\data\Ammo_12Gauge_8mmBuckshot_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_8mmBuckshot\data\Ammo_12Gauge_8mmBuckshot_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_8mmBuckshot\data\Ammo_12Gauge_8mmBuckshot_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_12Gauge_AP20: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_12Gauge_AP200";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_12Gauge_AP201";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_AP20\Ammo_12Gauge_AP20.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 4;
        weight = 40;
        count = 100;
        ammo = "Bullet_DF_12Gauge_AP20";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_AP20\data\Ammo_12Gauge_AP20_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_AP20\data\Ammo_12Gauge_AP20.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_AP20\data\Ammo_12Gauge_AP20.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_AP20\data\Ammo_12Gauge_AP20_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_AP20\data\Ammo_12Gauge_AP20_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_AP20\data\Ammo_12Gauge_AP20_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_AP20\data\Ammo_12Gauge_AP20_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_12Gauge_Arrow: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_12Gauge_Arrow0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_12Gauge_Arrow1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Arrow\Ammo_12Gauge_Arrow.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 4;
        weight = 40;
        count = 100;
        ammo = "Bullet_DF_12Gauge_Arrow";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Arrow\data\Ammo_12Gauge_Arrow_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Arrow\data\Ammo_12Gauge_Arrow.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Arrow\data\Ammo_12Gauge_Arrow.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Arrow\data\Ammo_12Gauge_Arrow_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Arrow\data\Ammo_12Gauge_Arrow_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Arrow\data\Ammo_12Gauge_Arrow_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Arrow\data\Ammo_12Gauge_Arrow_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_12Gauge_RIP: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_12Gauge_RIP0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_12Gauge_RIP1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Arrow\Ammo_12Gauge_Arrow.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 4;
        weight = 40;
        count = 100;
        ammo = "Bullet_DF_12Gauge_RIP";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Arrow\data\Ammo_12Gauge_Arrow_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Arrow\data\Ammo_12Gauge_Arrow.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Arrow\data\Ammo_12Gauge_Arrow.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Arrow\data\Ammo_12Gauge_Arrow_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Arrow\data\Ammo_12Gauge_Arrow_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Arrow\data\Ammo_12Gauge_Arrow_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Arrow\data\Ammo_12Gauge_Arrow_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_12Gauge_Dragon: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_12Gauge_Dragon0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_12Gauge_Dragon1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Dragon\Ammo_12Gauge_Dragon.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 4;
        weight = 40;
        count = 100;
        ammo = "Bullet_DF_12Gauge_Dragon";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Dragon\data\Ammo_12Gauge_Dragon_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Dragon\data\Ammo_12Gauge_Dragon.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Dragon\data\Ammo_12Gauge_Dragon.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Dragon\data\Ammo_12Gauge_Dragon_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Dragon\data\Ammo_12Gauge_Dragon_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Dragon\data\Ammo_12Gauge_Dragon_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Dragon\data\Ammo_12Gauge_Dragon_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_12Gauge_FTX: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_12Gauge_FTX0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_12Gauge_FTX1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_FTX\Ammo_12Gauge_FTX.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 4;
        weight = 35;
        count = 100;
        ammo = "Bullet_DF_12Gauge_FTX";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_FTX\data\Ammo_12Gauge_FTX_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_FTX\data\Ammo_12Gauge_FTX.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_FTX\data\Ammo_12Gauge_FTX.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_FTX\data\Ammo_12Gauge_FTX_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_FTX\data\Ammo_12Gauge_FTX_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_FTX\data\Ammo_12Gauge_FTX_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_FTX\data\Ammo_12Gauge_FTX_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_12Gauge_GT: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_12Gauge_GT0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_12Gauge_GT1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_GT\Ammo_12Gauge_GT.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 4;
        weight = 10;
        count = 100;
        ammo = "Bullet_DF_12Gauge_GT";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_GT\data\Ammo_12Gauge_GT_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_GT\data\Ammo_12Gauge_GT.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_GT\data\Ammo_12Gauge_GT.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_GT\data\Ammo_12Gauge_GT_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_GT\data\Ammo_12Gauge_GT_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_GT\data\Ammo_12Gauge_GT_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_GT\data\Ammo_12Gauge_GT_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_300_Bpz: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_300_Bpz0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_300_Bpz1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_300_Bpz\Ammo_300_Bpz.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 30;
        count = 100;
        ammo = "Bullet_DF_300_Bpz";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_300_Bpz\data\Ammo_300_Bpz_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_300_Bpz\data\Ammo_300_Bpz.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_300_Bpz\data\Ammo_300_Bpz.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_300_Bpz\data\Ammo_300_Bpz_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_300_Bpz\data\Ammo_300_Bpz_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_300_Bpz\data\Ammo_300_Bpz_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_300_Bpz\data\Ammo_300_Bpz_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_300_Cbj: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_300_Cbj0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_300_Cbj1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_300_Cbj\Ammo_300_Cbj.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 30;
        count = 100;
        ammo = "Bullet_DF_300_Cbj";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_300_Cbj\data\Ammo_300_Cbj_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_300_Cbj\data\Ammo_300_Cbj.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_300_Cbj\data\Ammo_300_Cbj.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_300_Cbj\data\Ammo_300_Cbj_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_300_Cbj\data\Ammo_300_Cbj_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_300_Cbj\data\Ammo_300_Cbj_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_300_Cbj\data\Ammo_300_Cbj_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_300_Vmax: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_300_Vmax0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_300_Vmax1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_300_Vmax\Ammo_300_Vmax.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 30;
        count = 100;
        ammo = "Bullet_DF_300_Vmax";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_300_Vmax\data\Ammo_300_Vmax_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_300_Vmax\data\Ammo_300_Vmax.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_300_Vmax\data\Ammo_300_Vmax.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_300_Vmax\data\Ammo_300_Vmax_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_300_Vmax\data\Ammo_300_Vmax_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_300_Vmax\data\Ammo_300_Vmax_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_300_Vmax\data\Ammo_300_Vmax_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_338_LapMag: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_338_LapMag0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_338_LapMag1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_338_LapMag\Ammo_338_LapMag.p3d";
        itemSize[] = { 1, 2 };
        iconCartridge = 3;
        weight = 100;
        count = 100;
        ammo = "Bullet_DF_338_LapMag";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_338_LapMag\data\Ammo_338_LapMag_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_338_LapMag\data\Ammo_338_LapMag.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_338_LapMag\data\Ammo_338_LapMag.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_338_LapMag\data\Ammo_338_LapMag_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_338_LapMag\data\Ammo_338_LapMag_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_338_LapMag\data\Ammo_338_LapMag_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_338_LapMag\data\Ammo_338_LapMag_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_357Magnum_FMJ: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_357Magnum_FMJ0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_357Magnum_FMJ1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_FMJ\Ammo_357Magnum_FMJ.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 1;
        weight = 10;
        count = 100;
        ammo = "Bullet_DF_357Magnum_FMJ";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_FMJ\data\Ammo_357Magnum_FMJ_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_FMJ\data\Ammo_357Magnum_FMJ.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_FMJ\data\Ammo_357Magnum_FMJ.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_FMJ\data\Ammo_357Magnum_FMJ_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_FMJ\data\Ammo_357Magnum_FMJ_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_FMJ\data\Ammo_357Magnum_FMJ_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_FMJ\data\Ammo_357Magnum_FMJ_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_357Magnum_JHP: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_357Magnum_JHP0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_357Magnum_JHP1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_JHP\Ammo_357Magnum_JHP.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 1;
        weight = 10;
        count = 100;
        ammo = "Bullet_DF_357Magnum_JHP";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_JHP\data\Ammo_357Magnum_JHP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_JHP\data\Ammo_357Magnum_JHP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_JHP\data\Ammo_357Magnum_JHP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_JHP\data\Ammo_357Magnum_JHP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_JHP\data\Ammo_357Magnum_JHP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_JHP\data\Ammo_357Magnum_JHP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_JHP\data\Ammo_357Magnum_JHP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_357Magnum_HP: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_357Magnum_HP0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_357Magnum_HP1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_JHP\Ammo_357Magnum_JHP.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 1;
        weight = 10;
        count = 100;
        ammo = "Bullet_DF_357Magnum_HP";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_JHP\data\Ammo_357Magnum_JHP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_JHP\data\Ammo_357Magnum_JHP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_JHP\data\Ammo_357Magnum_JHP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_JHP\data\Ammo_357Magnum_JHP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_JHP\data\Ammo_357Magnum_JHP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_JHP\data\Ammo_357Magnum_JHP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_JHP\data\Ammo_357Magnum_JHP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_357Magnum_Shot: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_357Magnum_Shot0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_357Magnum_Shot1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_Shot\Ammo_357Magnum_Shot.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 1;
        weight = 15;
        count = 100;
        ammo = "Bullet_DF_357Magnum_Shot";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_Shot\data\Ammo_357Magnum_Shot_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_Shot\data\Ammo_357Magnum_Shot.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_Shot\data\Ammo_357Magnum_Shot.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_Shot\data\Ammo_357Magnum_Shot_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_Shot\data\Ammo_357Magnum_Shot_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_Shot\data\Ammo_357Magnum_Shot_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_Shot\data\Ammo_357Magnum_Shot_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_45ACP_AP: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_45ACP_AP0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_45ACP_AP1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_AP\Ammo_45ACP_AP.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 1;
        weight = 10;
        count = 100;
        ammo = "Bullet_DF_45ACP_AP";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_AP\data\Ammo_45ACP_AP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_AP\data\Ammo_45ACP_AP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_AP\data\Ammo_45ACP_AP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_AP\data\Ammo_45ACP_AP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_AP\data\Ammo_45ACP_AP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_AP\data\Ammo_45ACP_AP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_AP\data\Ammo_45ACP_AP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_45ACP_FMJ: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_45ACP_FMJ0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_45ACP_FMJ1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_FMJ\Ammo_45ACP_FMJ.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 1;
        weight = 10;
        count = 100;
        ammo = "Bullet_DF_45ACP_FMJ";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_FMJ\data\Ammo_45ACP_FMJ_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_FMJ\data\Ammo_45ACP_FMJ.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_FMJ\data\Ammo_45ACP_FMJ.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_FMJ\data\Ammo_45ACP_FMJ_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_FMJ\data\Ammo_45ACP_FMJ_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_FMJ\data\Ammo_45ACP_FMJ_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_FMJ\data\Ammo_45ACP_FMJ_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_45ACP_HS: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_45ACP_HS0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_45ACP_HS1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_HS\Ammo_45ACP_HS.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 1;
        weight = 10;
        count = 100;
        ammo = "Bullet_DF_45ACP_HS";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_HS\data\Ammo_45ACP_HS_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_HS\data\Ammo_45ACP_HS.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_HS\data\Ammo_45ACP_HS.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_HS\data\Ammo_45ACP_HS_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_HS\data\Ammo_45ACP_HS_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_HS\data\Ammo_45ACP_HS_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_HS\data\Ammo_45ACP_HS_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_45ACP_JHP: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_45ACP_JHP0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_45ACP_JHP1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_JHP\Ammo_45ACP_JHP.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 1;
        weight = 10;
        count = 100;
        ammo = "Bullet_DF_45ACP_JHP";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_JHP\data\Ammo_45ACP_JHP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_JHP\data\Ammo_45ACP_JHP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_JHP\data\Ammo_45ACP_JHP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_JHP\data\Ammo_45ACP_JHP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_JHP\data\Ammo_45ACP_JHP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_JHP\data\Ammo_45ACP_JHP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_JHP\data\Ammo_45ACP_JHP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_45ACP_RIP: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_45ACP_RIP0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_45ACP_RIP1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_RIP\Ammo_45ACP_RIP.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 1;
        weight = 10;
        count = 100;
        ammo = "Bullet_DF_45ACP_RIP";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_RIP\data\Ammo_45ACP_RIP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_RIP\data\Ammo_45ACP_RIP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_RIP\data\Ammo_45ACP_RIP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_RIP\data\Ammo_45ACP_RIP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_RIP\data\Ammo_45ACP_RIP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_RIP\data\Ammo_45ACP_RIP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45ACP_RIP\data\Ammo_45ACP_RIP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_45_70_FMJ: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_45_70_FMJ0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_45_70_FMJ1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_45_70_FMJ\Ammo_45_70_FMJ.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 1;
        weight = 15;
        count = 100;
        ammo = "Bullet_DF_45_70_FMJ";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_45_70_FMJ\data\Ammo_45_70_FMJ_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_45_70_FMJ\data\Ammo_45_70_FMJ.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45_70_FMJ\data\Ammo_45_70_FMJ.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45_70_FMJ\data\Ammo_45_70_FMJ_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45_70_FMJ\data\Ammo_45_70_FMJ_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45_70_FMJ\data\Ammo_45_70_FMJ_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45_70_FMJ\data\Ammo_45_70_FMJ_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_45_70_FTX: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_45_70_FTX0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_45_70_FTX1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_45_70_FTX\Ammo_45_70_FTX.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 1;
        weight = 15;
        count = 100;
        ammo = "Bullet_DF_45_70_FTX";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_45_70_FTX\data\Ammo_45_70_FTX_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_45_70_FTX\data\Ammo_45_70_FTX.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45_70_FTX\data\Ammo_45_70_FTX.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45_70_FTX\data\Ammo_45_70_FTX_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45_70_FTX\data\Ammo_45_70_FTX_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45_70_FTX\data\Ammo_45_70_FTX_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45_70_FTX\data\Ammo_45_70_FTX_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_45_70_RN: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_45_70_RN0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_45_70_RN1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_45_70_RN\Ammo_45_70_RN.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 1;
        weight = 15;
        count = 100;
        ammo = "Bullet_DF_45_70_RN";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_45_70_RN\data\Ammo_45_70_RN_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_45_70_RN\data\Ammo_45_70_RN.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45_70_RN\data\Ammo_45_70_RN.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45_70_RN\data\Ammo_45_70_RN_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45_70_RN\data\Ammo_45_70_RN_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45_70_RN\data\Ammo_45_70_RN_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_45_70_RN\data\Ammo_45_70_RN_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_46x30_AP_SX: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_46x30_AP_SX0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_46x30_AP_SX1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_46x30_AP_SX\Ammo_46x30_AP_SX.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 15;
        count = 100;
        ammo = "Bullet_DF_46x30_AP_SX";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_46x30_AP_SX\data\Ammo_46x30_AP_SX_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_46x30_AP_SX\data\Ammo_46x30_AP_SX.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_46x30_AP_SX\data\Ammo_46x30_AP_SX.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_46x30_AP_SX\data\Ammo_46x30_AP_SX_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_46x30_AP_SX\data\Ammo_46x30_AP_SX_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_46x30_AP_SX\data\Ammo_46x30_AP_SX_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_46x30_AP_SX\data\Ammo_46x30_AP_SX_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_46x30_FMJ_SX: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_46x30_FMJ_SX0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_46x30_FMJ_SX1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_46x30_FMJ_SX\Ammo_46x30_FMJ_SX.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 15;
        count = 100;
        ammo = "Bullet_DF_46x30_FMJ_SX";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_46x30_FMJ_SX\data\Ammo_46x30_FMJ_SX_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_46x30_FMJ_SX\data\Ammo_46x30_FMJ_SX.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_46x30_FMJ_SX\data\Ammo_46x30_FMJ_SX.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_46x30_FMJ_SX\data\Ammo_46x30_FMJ_SX_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_46x30_FMJ_SX\data\Ammo_46x30_FMJ_SX_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_46x30_FMJ_SX\data\Ammo_46x30_FMJ_SX_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_46x30_FMJ_SX\data\Ammo_46x30_FMJ_SX_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_46x30_Subsonic_SX: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_46x30_Subsonic_SX0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_46x30_Subsonic_SX1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_46x30_Subsonic_SX\Ammo_46x30_Subsonic_SX.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 15;
        count = 100;
        ammo = "Bullet_DF_46x30_Subsonic_SX";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_46x30_Subsonic_SX\data\Ammo_46x30_Subsonic_SX_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_46x30_Subsonic_SX\data\Ammo_46x30_Subsonic_SX.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_46x30_Subsonic_SX\data\Ammo_46x30_Subsonic_SX.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_46x30_Subsonic_SX\data\Ammo_46x30_Subsonic_SX_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_46x30_Subsonic_SX\data\Ammo_46x30_Subsonic_SX_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_46x30_Subsonic_SX\data\Ammo_46x30_Subsonic_SX_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_46x30_Subsonic_SX\data\Ammo_46x30_Subsonic_SX_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_50AE_FMJ: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_50AE_FMJ0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_50AE_FMJ1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_50AE_FMJ\Ammo_50AE_FMJ.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 1;
        weight = 15;
        count = 100;
        ammo = "Bullet_DF_50AE_FMJ";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_50AE_FMJ\data\Ammo_50AE_FMJ_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_50AE_FMJ\data\Ammo_50AE_FMJ.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_50AE_FMJ\data\Ammo_50AE_FMJ.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_50AE_FMJ\data\Ammo_50AE_FMJ_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_50AE_FMJ\data\Ammo_50AE_FMJ_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_50AE_FMJ\data\Ammo_50AE_FMJ_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_50AE_FMJ\data\Ammo_50AE_FMJ_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_50AE_HP: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_50AE_HP0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_50AE_HP1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_50AE_HP\Ammo_50AE_HP.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 1;
        weight = 15;
        count = 100;
        ammo = "Bullet_DF_50AE_HP";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_50AE_HP\data\Ammo_50AE_HP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_50AE_HP\data\Ammo_50AE_HP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_50AE_HP\data\Ammo_50AE_HP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_50AE_HP\data\Ammo_50AE_HP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_50AE_HP\data\Ammo_50AE_HP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_50AE_HP\data\Ammo_50AE_HP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_50AE_HP\data\Ammo_50AE_HP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_50AE_JHP: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_50AE_JHP0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_50AE_JHP1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_50AE_JHP\Ammo_50AE_JHP.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 1;
        weight = 15;
        count = 100;
        ammo = "Bullet_DF_50AE_JHP";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_50AE_JHP\data\Ammo_50AE_JHP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_50AE_JHP\data\Ammo_50AE_JHP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_50AE_JHP\data\Ammo_50AE_JHP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_50AE_JHP\data\Ammo_50AE_JHP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_50AE_JHP\data\Ammo_50AE_JHP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_50AE_JHP\data\Ammo_50AE_JHP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_50AE_JHP\data\Ammo_50AE_JHP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_545x39_BS: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_545x39_BS0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_545x39_BS1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_545x39_BS\Ammo_545x39_BS.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 20;
        count = 100;
        ammo = "Bullet_DF_545x39_BS";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_BS\data\Ammo_545x39_BS_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_BS\data\Ammo_545x39_BS.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_BS\data\Ammo_545x39_BS.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_BS\data\Ammo_545x39_BS_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_BS\data\Ammo_545x39_BS_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_BS\data\Ammo_545x39_BS_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_BS\data\Ammo_545x39_BS_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_545x39_BT: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_545x39_BT0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_545x39_BT1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_545x39_BT\Ammo_545x39_BT.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 20;
        count = 100;
        ammo = "Bullet_DF_545x39_BT";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_BT\data\Ammo_545x39_BT_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_BT\data\Ammo_545x39_BT.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_BT\data\Ammo_545x39_BT.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_BT\data\Ammo_545x39_BT_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_BT\data\Ammo_545x39_BT_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_BT\data\Ammo_545x39_BT_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_BT\data\Ammo_545x39_BT_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_545x39_PRS: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_545x39_PRS0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_545x39_PRS1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_545x39_PRS\Ammo_545x39_PRS.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 20;
        count = 100;
        ammo = "Bullet_DF_545x39_PRS";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_PRS\data\Ammo_545x39_PRS_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_PRS\data\Ammo_545x39_PRS.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_PRS\data\Ammo_545x39_PRS.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_PRS\data\Ammo_545x39_PRS_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_PRS\data\Ammo_545x39_PRS_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_PRS\data\Ammo_545x39_PRS_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_PRS\data\Ammo_545x39_PRS_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_545x39_PS: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_545x39_PS0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_545x39_PS1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_545x39_PS\Ammo_545x39_PS.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 20;
        count = 100;
        ammo = "Bullet_DF_545x39_PS";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_PS\data\Ammo_545x39_PS_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_PS\data\Ammo_545x39_PS.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_PS\data\Ammo_545x39_PS.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_PS\data\Ammo_545x39_PS_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_PS\data\Ammo_545x39_PS_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_PS\data\Ammo_545x39_PS_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_PS\data\Ammo_545x39_PS_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_545x39_T: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_545x39_T0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_545x39_T1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_545x39_T\Ammo_545x39_T.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 20;
        count = 100;
        ammo = "Bullet_DF_545x39_T";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_T\data\Ammo_545x39_T_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_T\data\Ammo_545x39_T.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_T\data\Ammo_545x39_T.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_T\data\Ammo_545x39_T_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_T\data\Ammo_545x39_T_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_T\data\Ammo_545x39_T_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_545x39_T\data\Ammo_545x39_T_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_556x45_FMJ: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_556x45_FMJ0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_556x45_FMJ1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_556x45_FMJ\Ammo_556x45_FMJ.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 20;
        count = 100;
        ammo = "Bullet_DF_556x45_FMJ";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_FMJ\data\Ammo_556x45_FMJ_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_FMJ\data\Ammo_556x45_FMJ.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_FMJ\data\Ammo_556x45_FMJ.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_FMJ\data\Ammo_556x45_FMJ_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_FMJ\data\Ammo_556x45_FMJ_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_FMJ\data\Ammo_556x45_FMJ_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_FMJ\data\Ammo_556x45_FMJ_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_556x45_M855: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_556x45_M8550";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_556x45_M8551";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_556x45_M855\Ammo_556x45_M855.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 20;
        count = 100;
        ammo = "Bullet_DF_556x45_M855";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_M855\data\Ammo_556x45_M855_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_M855\data\Ammo_556x45_M855.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_M855\data\Ammo_556x45_M855.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_M855\data\Ammo_556x45_M855_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_M855\data\Ammo_556x45_M855_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_M855\data\Ammo_556x45_M855_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_M855\data\Ammo_556x45_M855_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_556x45_M855A1: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_556x45_M855A10";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_556x45_M855A11";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_556x45_M855A1\Ammo_556x45_M855A1.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 20;
        count = 100;
        ammo = "Bullet_DF_556x45_M855A1";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_M855A1\data\Ammo_556x45_M855A1_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_M855A1\data\Ammo_556x45_M855A1.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_M855A1\data\Ammo_556x45_M855A1.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_M855A1\data\Ammo_556x45_M855A1_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_M855A1\data\Ammo_556x45_M855A1_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_M855A1\data\Ammo_556x45_M855A1_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_M855A1\data\Ammo_556x45_M855A1_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_556x45_M995: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_556x45_M9950";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_556x45_M9951";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_556x45_M995\Ammo_556x45_M995.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 20;
        count = 100;
        ammo = "Bullet_DF_556x45_M995";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_M995\data\Ammo_556x45_M995_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_M995\data\Ammo_556x45_M995.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_M995\data\Ammo_556x45_M995.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_M995\data\Ammo_556x45_M995_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_M995\data\Ammo_556x45_M995_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_M995\data\Ammo_556x45_M995_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_M995\data\Ammo_556x45_M995_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_556x45_RRLP: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_556x45_RRLP0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_556x45_RRLP1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_556x45_RRLP\Ammo_556x45_RRLP.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 20;
        count = 100;
        ammo = "Bullet_DF_556x45_RRLP";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_RRLP\data\Ammo_556x45_RRLP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_RRLP\data\Ammo_556x45_RRLP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_RRLP\data\Ammo_556x45_RRLP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_RRLP\data\Ammo_556x45_RRLP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_RRLP\data\Ammo_556x45_RRLP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_RRLP\data\Ammo_556x45_RRLP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_556x45_RRLP\data\Ammo_556x45_RRLP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_57x28_L191: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_57x28_L1910";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_57x28_L1911";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_57x28_L191\Ammo_57x28_L191.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 25;
        count = 100;
        ammo = "Bullet_DF_57x28_L191";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_L191\data\Ammo_57x28_L191_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_L191\data\Ammo_57x28_L191.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_L191\data\Ammo_57x28_L191.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_L191\data\Ammo_57x28_L191_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_L191\data\Ammo_57x28_L191_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_L191\data\Ammo_57x28_L191_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_L191\data\Ammo_57x28_L191_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_57x28_R37F: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_57x28_R37F0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_57x28_R37F1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_57x28_R37F\Ammo_57x28_R37F.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 25;
        count = 100;
        ammo = "Bullet_DF_57x28_R37F";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_R37F\data\Ammo_57x28_R37F_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_R37F\data\Ammo_57x28_R37F.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_R37F\data\Ammo_57x28_R37F.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_R37F\data\Ammo_57x28_R37F_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_R37F\data\Ammo_57x28_R37F_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_R37F\data\Ammo_57x28_R37F_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_R37F\data\Ammo_57x28_R37F_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_57x28_SS190: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_57x28_SS1900";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_57x28_SS1901";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS190\Ammo_57x28_SS190.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 25;
        count = 100;
        ammo = "Bullet_DF_57x28_SS190";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS190\data\Ammo_57x28_SS190_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS190\data\Ammo_57x28_SS190.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS190\data\Ammo_57x28_SS190.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS190\data\Ammo_57x28_SS190_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS190\data\Ammo_57x28_SS190_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS190\data\Ammo_57x28_SS190_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS190\data\Ammo_57x28_SS190_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_57x28_SS193: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_57x28_SS1930";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_57x28_SS1931";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS193\Ammo_57x28_SS193.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 25;
        count = 100;
        ammo = "Bullet_DF_57x28_SS193";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS193\data\Ammo_57x28_SS193_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS193\data\Ammo_57x28_SS193.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS193\data\Ammo_57x28_SS193.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS193\data\Ammo_57x28_SS193_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS193\data\Ammo_57x28_SS193_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS193\data\Ammo_57x28_SS193_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS193\data\Ammo_57x28_SS193_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_57x28_SS197SR: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_57x28_SS197SR0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_57x28_SS197SR1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS197SR\Ammo_57x28_SS197SR.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 25;
        count = 100;
        ammo = "Bullet_DF_57x28_SS197SR";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS197SR\data\Ammo_57x28_SS197SR_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS197SR\data\Ammo_57x28_SS197SR.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS197SR\data\Ammo_57x28_SS197SR.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS197SR\data\Ammo_57x28_SS197SR_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS197SR\data\Ammo_57x28_SS197SR_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS197SR\data\Ammo_57x28_SS197SR_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS197SR\data\Ammo_57x28_SS197SR_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_57x28_SS198LF: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_57x28_SS198LF0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_57x28_SS198LF1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS198LF\Ammo_57x28_SS198LF.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 25;
        count = 100;
        ammo = "Bullet_DF_57x28_SS198LF";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS198LF\data\Ammo_57x28_SS198LF_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS198LF\data\Ammo_57x28_SS198LF.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS198LF\data\Ammo_57x28_SS198LF.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS198LF\data\Ammo_57x28_SS198LF_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS198LF\data\Ammo_57x28_SS198LF_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS198LF\data\Ammo_57x28_SS198LF_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_57x28_SS198LF\data\Ammo_57x28_SS198LF_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_58X42_DBP10: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_58X42_DBP100";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_58X42_DBP101";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DBP10\Ammo_58X42_DBP10.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 25;
        count = 100;
        ammo = "Bullet_DF_58X42_DBP10";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DBP10\data\Ammo_58X42_DBP10_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DBP10\data\Ammo_58X42_DBP10.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DBP10\data\Ammo_58X42_DBP10.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DBP10\data\Ammo_58X42_DBP10_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DBP10\data\Ammo_58X42_DBP10_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DBP10\data\Ammo_58X42_DBP10_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DBP10\data\Ammo_58X42_DBP10_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_58X42_DBP87: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_58X42_DBP870";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_58X42_DBP871";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DBP87\Ammo_58X42_DBP87.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 25;
        count = 100;
        ammo = "Bullet_DF_58X42_DBP87";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DBP87\data\Ammo_58X42_DBP87_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DBP87\data\Ammo_58X42_DBP87.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DBP87\data\Ammo_58X42_DBP87.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DBP87\data\Ammo_58X42_DBP87_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DBP87\data\Ammo_58X42_DBP87_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DBP87\data\Ammo_58X42_DBP87_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DBP87\data\Ammo_58X42_DBP87_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_58X42_DVC12: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_58X42_DVC120";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_58X42_DVC121";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DVC12\Ammo_58X42_DVC12.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 25;
        count = 100;
        ammo = "Bullet_DF_58X42_DVC12";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DVC12\data\Ammo_58X42_DVC12_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DVC12\data\Ammo_58X42_DVC12.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DVC12\data\Ammo_58X42_DVC12.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DVC12\data\Ammo_58X42_DVC12_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DVC12\data\Ammo_58X42_DVC12_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DVC12\data\Ammo_58X42_DVC12_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DVC12\data\Ammo_58X42_DVC12_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_58X42_DVP88: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_58X42_DVP880";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_58X42_DVP881";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DVP88\Ammo_58X42_DVP88.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 25;
        count = 100;
        ammo = "Bullet_DF_58X42_DVP88";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DVP88\data\Ammo_58X42_DVP88_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DVP88\data\Ammo_58X42_DVP88.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DVP88\data\Ammo_58X42_DVP88.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DVP88\data\Ammo_58X42_DVP88_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DVP88\data\Ammo_58X42_DVP88_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DVP88\data\Ammo_58X42_DVP88_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_58X42_DVP88\data\Ammo_58X42_DVP88_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_68x51_AP: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_68x51_AP0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_68x51_AP1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_68x51_AP\Ammo_68x51_AP.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 35;
        count = 100;
        ammo = "Bullet_DF_68x51_AP";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_68x51_AP\data\Ammo_68x51_AP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_68x51_AP\data\Ammo_68x51_AP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_68x51_AP\data\Ammo_68x51_AP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_68x51_AP\data\Ammo_68x51_AP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_68x51_AP\data\Ammo_68x51_AP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_68x51_AP\data\Ammo_68x51_AP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_68x51_AP\data\Ammo_68x51_AP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_68x51_FMJ: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_68x51_FMJ0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_68x51_FMJ1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_68x51_FMJ\Ammo_68x51_FMJ.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 35;
        count = 100;
        ammo = "Bullet_DF_68x51_FMJ";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_68x51_FMJ\data\Ammo_68x51_FMJ_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_68x51_FMJ\data\Ammo_68x51_FMJ.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_68x51_FMJ\data\Ammo_68x51_FMJ.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_68x51_FMJ\data\Ammo_68x51_FMJ_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_68x51_FMJ\data\Ammo_68x51_FMJ_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_68x51_FMJ\data\Ammo_68x51_FMJ_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_68x51_FMJ\data\Ammo_68x51_FMJ_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_68x51_Hybird: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_68x51_Hybird0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_68x51_Hybird1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_68x51_Hybird\Ammo_68x51_Hybird.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 35;
        count = 100;
        ammo = "Bullet_DF_68x51_Hybird";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_68x51_Hybird\data\Ammo_68x51_Hybird_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_68x51_Hybird\data\Ammo_68x51_Hybird.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_68x51_Hybird\data\Ammo_68x51_Hybird.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_68x51_Hybird\data\Ammo_68x51_Hybird_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_68x51_Hybird\data\Ammo_68x51_Hybird_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_68x51_Hybird\data\Ammo_68x51_Hybird_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_68x51_Hybird\data\Ammo_68x51_Hybird_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_762x39_AP: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_762x39_AP0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_762x39_AP1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_762x39_AP\Ammo_762x39_AP.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 30;
        count = 100;
        ammo = "Bullet_DF_762x39_AP";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_AP\data\Ammo_762x39_AP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_AP\data\Ammo_762x39_AP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_AP\data\Ammo_762x39_AP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_AP\data\Ammo_762x39_AP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_AP\data\Ammo_762x39_AP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_AP\data\Ammo_762x39_AP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_AP\data\Ammo_762x39_AP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_762x39_BP: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_762x39_BP0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_762x39_BP1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_762x39_BP\Ammo_762x39_BP.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 30;
        count = 100;
        ammo = "Bullet_DF_762x39_BP";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_BP\data\Ammo_762x39_BP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_BP\data\Ammo_762x39_BP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_BP\data\Ammo_762x39_BP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_BP\data\Ammo_762x39_BP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_BP\data\Ammo_762x39_BP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_BP\data\Ammo_762x39_BP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_BP\data\Ammo_762x39_BP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_762x39_LP: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_762x39_LP0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_762x39_LP1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_762x39_LP\Ammo_762x39_LP.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 30;
        count = 100;
        ammo = "Bullet_DF_762x39_LP";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_LP\data\Ammo_762x39_LP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_LP\data\Ammo_762x39_LP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_LP\data\Ammo_762x39_LP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_LP\data\Ammo_762x39_LP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_LP\data\Ammo_762x39_LP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_LP\data\Ammo_762x39_LP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_LP\data\Ammo_762x39_LP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_762x39_PS: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_762x39_PS0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_762x39_PS1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_762x39_PS\Ammo_762x39_PS.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 30;
        count = 100;
        ammo = "Bullet_DF_762x39_PS";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_PS\data\Ammo_762x39_PS_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_PS\data\Ammo_762x39_PS.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_PS\data\Ammo_762x39_PS.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_PS\data\Ammo_762x39_PS_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_PS\data\Ammo_762x39_PS_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_PS\data\Ammo_762x39_PS_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_PS\data\Ammo_762x39_PS_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_762x39_T45N: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_762x39_T45N0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_762x39_T45N1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_762x39_T45N\Ammo_762x39_T45N.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 30;
        count = 100;
        ammo = "Bullet_DF_762x39_T45N";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_T45N\data\Ammo_762x39_T45N_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_T45N\data\Ammo_762x39_T45N.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_T45N\data\Ammo_762x39_T45N.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_T45N\data\Ammo_762x39_T45N_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_T45N\data\Ammo_762x39_T45N_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_T45N\data\Ammo_762x39_T45N_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x39_T45N\data\Ammo_762x39_T45N_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_762x51_BPZ: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_762x51_BPZ0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_762x51_BPZ1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_762x51_BPZ\Ammo_762x51_BPZ.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 3;
        weight = 35;
        count = 100;
        ammo = "Bullet_DF_762x51_BPZ";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_BPZ\data\Ammo_762x51_BPZ_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_BPZ\data\Ammo_762x51_BPZ.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_BPZ\data\Ammo_762x51_BPZ.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_BPZ\data\Ammo_762x51_BPZ_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_BPZ\data\Ammo_762x51_BPZ_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_BPZ\data\Ammo_762x51_BPZ_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_BPZ\data\Ammo_762x51_BPZ_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_762x51_M61: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_762x51_M610";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_762x51_M611";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_762x51_M61\Ammo_762x51_M61.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 3;
        weight = 35;
        count = 100;
        ammo = "Bullet_DF_762x51_M61";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_M61\data\Ammo_762x51_M61_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_M61\data\Ammo_762x51_M61.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_M61\data\Ammo_762x51_M61.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_M61\data\Ammo_762x51_M61_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_M61\data\Ammo_762x51_M61_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_M61\data\Ammo_762x51_M61_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_M61\data\Ammo_762x51_M61_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_762x51_M62: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_762x51_M620";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_762x51_M621";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_762x51_M62\Ammo_762x51_M62.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 3;
        weight = 35;
        count = 100;
        ammo = "Bullet_DF_762x51_M62";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_M62\data\Ammo_762x51_M62_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_M62\data\Ammo_762x51_M62.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_M62\data\Ammo_762x51_M62.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_M62\data\Ammo_762x51_M62_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_M62\data\Ammo_762x51_M62_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_M62\data\Ammo_762x51_M62_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_M62\data\Ammo_762x51_M62_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_762x51_M80: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_762x51_M800";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_762x51_M801";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_762x51_M80\Ammo_762x51_M80.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 3;
        weight = 35;
        count = 100;
        ammo = "Bullet_DF_762x51_M80";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_M80\data\Ammo_762x51_M80_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_M80\data\Ammo_762x51_M80.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_M80\data\Ammo_762x51_M80.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_M80\data\Ammo_762x51_M80_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_M80\data\Ammo_762x51_M80_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_M80\data\Ammo_762x51_M80_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_M80\data\Ammo_762x51_M80_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_762x51_UltraNosler: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_762x51_UltraNosler0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_762x51_UltraNosler1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_762x51_UltraNosler\Ammo_762x51_UltraNosler.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 3;
        weight = 35;
        count = 100;
        ammo = "Bullet_DF_762x51_UltraNosler";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_UltraNosler\data\Ammo_762x51_UltraNosler_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_UltraNosler\data\Ammo_762x51_UltraNosler.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_UltraNosler\data\Ammo_762x51_UltraNosler.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_UltraNosler\data\Ammo_762x51_UltraNosler_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_UltraNosler\data\Ammo_762x51_UltraNosler_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_UltraNosler\data\Ammo_762x51_UltraNosler_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x51_UltraNosler\data\Ammo_762x51_UltraNosler_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_762x54R_BT: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_762x54R_BT0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_762x54R_BT1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_BT\Ammo_762x54R_BT.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 3;
        weight = 50;
        count = 100;
        ammo = "Bullet_DF_762x54R_BT";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_BT\data\Ammo_762x54R_BT_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_BT\data\Ammo_762x54R_BT.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_BT\data\Ammo_762x54R_BT.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_BT\data\Ammo_762x54R_BT_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_BT\data\Ammo_762x54R_BT_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_BT\data\Ammo_762x54R_BT_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_BT\data\Ammo_762x54R_BT_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_762x54R_LPS: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_762x54R_LPS0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_762x54R_LPS1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_LPS\Ammo_762x54R_LPS.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 3;
        weight = 50;
        count = 100;
        ammo = "Bullet_DF_762x54R_LPS";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_LPS\data\Ammo_762x54R_LPS_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_LPS\data\Ammo_762x54R_LPS.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_LPS\data\Ammo_762x54R_LPS.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_LPS\data\Ammo_762x54R_LPS_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_LPS\data\Ammo_762x54R_LPS_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_LPS\data\Ammo_762x54R_LPS_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_LPS\data\Ammo_762x54R_LPS_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_762x54R_SNB: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_762x54R_SNB0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_762x54R_SNB1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_SNB\Ammo_762x54R_SNB.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 3;
        weight = 50;
        count = 100;
        ammo = "Bullet_DF_762x54R_SNB";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_SNB\data\Ammo_762x54R_SNB_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_SNB\data\Ammo_762x54R_SNB.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_SNB\data\Ammo_762x54R_SNB.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_SNB\data\Ammo_762x54R_SNB_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_SNB\data\Ammo_762x54R_SNB_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_SNB\data\Ammo_762x54R_SNB_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_SNB\data\Ammo_762x54R_SNB_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_762x54R_T46M: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_762x54R_T46M0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_762x54R_T46M1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_T46M\Ammo_762x54R_T46M.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 3;
        weight = 50;
        count = 100;
        ammo = "Bullet_DF_762x54R_T46M";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_T46M\data\Ammo_762x54R_T46M_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_T46M\data\Ammo_762x54R_T46M.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_T46M\data\Ammo_762x54R_T46M.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_T46M\data\Ammo_762x54R_T46M_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_T46M\data\Ammo_762x54R_T46M_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_T46M\data\Ammo_762x54R_T46M_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_762x54R_T46M\data\Ammo_762x54R_T46M_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_9x19_AP63: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_9x19_AP630";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_9x19_AP631";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_9x19_AP63\Ammo_9x19_AP63.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 1;
        weight = 10;
        count = 100;
        ammo = "Bullet_DF_9x19_AP63";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_AP63\data\Ammo_9x19_AP63_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_AP63\data\Ammo_9x19_AP63.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_AP63\data\Ammo_9x19_AP63.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_AP63\data\Ammo_9x19_AP63_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_AP63\data\Ammo_9x19_AP63_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_AP63\data\Ammo_9x19_AP63_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_AP63\data\Ammo_9x19_AP63_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_9x19_PBP: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_9x19_PBP0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_9x19_PBP1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_9x19_PBP\Ammo_9x19_PBP.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 1;
        weight = 10;
        count = 100;
        ammo = "Bullet_DF_9x19_PBP";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_PBP\data\Ammo_9x19_PBP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_PBP\data\Ammo_9x19_PBP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_PBP\data\Ammo_9x19_PBP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_PBP\data\Ammo_9x19_PBP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_PBP\data\Ammo_9x19_PBP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_PBP\data\Ammo_9x19_PBP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_PBP\data\Ammo_9x19_PBP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_9x19_PSO: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_9x19_PSO0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_9x19_PSO1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_9x19_PSO\Ammo_9x19_PSO.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 1;
        weight = 10;
        count = 100;
        ammo = "Bullet_DF_9x19_PSO";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_PSO\data\Ammo_9x19_PSO_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_PSO\data\Ammo_9x19_PSO.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_PSO\data\Ammo_9x19_PSO.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_PSO\data\Ammo_9x19_PSO_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_PSO\data\Ammo_9x19_PSO_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_PSO\data\Ammo_9x19_PSO_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_PSO\data\Ammo_9x19_PSO_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_9x19_Pst: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_9x19_Pst0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_9x19_Pst1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_9x19_Pst\Ammo_9x19_Pst.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 1;
        weight = 10;
        count = 100;
        ammo = "Bullet_DF_9x19_Pst";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_Pst\data\Ammo_9x19_Pst_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_Pst\data\Ammo_9x19_Pst.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_Pst\data\Ammo_9x19_Pst.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_Pst\data\Ammo_9x19_Pst_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_Pst\data\Ammo_9x19_Pst_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_Pst\data\Ammo_9x19_Pst_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_Pst\data\Ammo_9x19_Pst_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_9x19_RIP: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_9x19_RIP0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_9x19_RIP1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_9x19_RIP\Ammo_9x19_RIP.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 1;
        weight = 10;
        count = 100;
        ammo = "Bullet_DF_9x19_RIP";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_RIP\data\Ammo_9x19_RIP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_RIP\data\Ammo_9x19_RIP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_RIP\data\Ammo_9x19_RIP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_RIP\data\Ammo_9x19_RIP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_RIP\data\Ammo_9x19_RIP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_RIP\data\Ammo_9x19_RIP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x19_RIP\data\Ammo_9x19_RIP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_9x39_BP: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_9x39_BP0";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_9x39_BP1";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_9x39_BP\Ammo_9x39_BP.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 20;
        count = 100;
        ammo = "Bullet_DF_9x39_BP";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_9x39_BP\data\Ammo_9x39_BP_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_9x39_BP\data\Ammo_9x39_BP.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x39_BP\data\Ammo_9x39_BP.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x39_BP\data\Ammo_9x39_BP_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x39_BP\data\Ammo_9x39_BP_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x39_BP\data\Ammo_9x39_BP_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x39_BP\data\Ammo_9x39_BP_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_9x39_SP5: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_9x39_SP50";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_9x39_SP51";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_9x39_SP5\Ammo_9x39_SP5.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 20;
        count = 100;
        ammo = "Bullet_DF_9x39_SP5";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_9x39_SP5\data\Ammo_9x39_SP5_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_9x39_SP5\data\Ammo_9x39_SP5.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x39_SP5\data\Ammo_9x39_SP5.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x39_SP5\data\Ammo_9x39_SP5_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x39_SP5\data\Ammo_9x39_SP5_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x39_SP5\data\Ammo_9x39_SP5_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x39_SP5\data\Ammo_9x39_SP5_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Ammo_9x39_SP6: My_DF_Weapons_Ammo_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Ammo_9x39_SP60";
        descriptionShort = "$STR_My_DF_Weapons_Ammo_9x39_SP61";
        model = "\My_DF_Weapons_Ammo\Ammo\Ammo_9x39_SP6\Ammo_9x39_SP6.p3d";
        itemSize[] = { 1, 1 };
        iconCartridge = 2;
        weight = 20;
        count = 100;
        ammo = "Bullet_DF_9x39_SP6";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_9x39_SP6\data\Ammo_9x39_SP6_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Ammo\Ammo\Ammo_9x39_SP6\data\Ammo_9x39_SP6.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x39_SP6\data\Ammo_9x39_SP6.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x39_SP6\data\Ammo_9x39_SP6_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x39_SP6\data\Ammo_9x39_SP6_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x39_SP6\data\Ammo_9x39_SP6_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Ammo\Ammo\Ammo_9x39_SP6\data\Ammo_9x39_SP6_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
};
class CfgAmmo
{
    class Bullet_Base;
    class Bullet_DF_127x55_BP: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_127x55_BP";
        round = "FxRound_DF_127x55_BP";
        spawnPileType = "My_DF_Weapons_Ammo_127x55_BP";
        hit = 13;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 600;
        typicalSpeed = 650;
        airFriction = -0.003;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 700;
        damageBarrelDestroyed = 700;
        weight = 0.02;
        impactBehaviour = 1;
        hitAnimation = 1;
        unconRefillModifier = 5;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.85, 1 } };
            class Health
            {
                damage = 150;
                armorDamage = 3;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 150;
                damageOverride[] = { { 0.8, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_127x55_PD12: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_127x55_PD12";
        round = "FxRound_DF_127x55_PD12";
        spawnPileType = "My_DF_Weapons_Ammo_127x55_PD12";
        hit = 13;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 500;
        typicalSpeed = 650;
        airFriction = -0.0025;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 500;
        damageBarrelDestroyed = 500;
        weight = 0.05;
        impactBehaviour = 1;
        hitAnimation = 1;
        unconRefillModifier = 3;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.85, 1 } };
            class Health
            {
                damage = 165;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 165;
                damageOverride[] = { { 0.8, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_127x55_PS12: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_127x55_PS12";
        round = "FxRound_DF_127x55_PS12";
        spawnPileType = "My_DF_Weapons_Ammo_127x55_PS12";
        hit = 13;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 550;
        typicalSpeed = 700;
        airFriction = -0.0018;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 500;
        damageBarrelDestroyed = 500;
        weight = 0.03;
        impactBehaviour = 1;
        hitAnimation = 1;
        unconRefillModifier = 3;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.85, 1 } };
            class Health
            {
                damage = 160;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 160;
                damageOverride[] = { { 0.8, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_127x55_PS12A: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_127x55_PS12A";
        round = "FxRound_DF_127x55_PS12A";
        spawnPileType = "My_DF_Weapons_Ammo_127x55_PS12A";
        hit = 13;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 500;
        typicalSpeed = 700;
        airFriction = -0.002;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 500;
        damageBarrelDestroyed = 500;
        weight = 0.03;
        impactBehaviour = 1;
        hitAnimation = 1;
        unconRefillModifier = 3;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.85, 1 } };
            class Health
            {
                damage = 150;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 150;
                damageOverride[] = { { 0.86, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_127x55_PS12B: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_127x55_PS12B";
        round = "FxRound_DF_127x55_PS12B";
        spawnPileType = "My_DF_Weapons_Ammo_127x55_PS12B";
        hit = 13;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 580;
        typicalSpeed = 720;
        airFriction = -0.0017;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 500;
        damageBarrelDestroyed = 500;
        weight = 0.04;
        impactBehaviour = 1;
        hitAnimation = 1;
        unconRefillModifier = 3;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.85, 1 } };
            class Health
            {
                damage = 170;
                armorDamage = 2;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 170;
                damageOverride[] = { { 0.8, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Shotgun_Base;
    class Bullet_DF_12Gauge_7mmBuckshot: Shotgun_Base
    {
        scope = 1;
        proxyShape = "\My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_7mmBuckshot\Ammo_12Gauge_7mmBuckshot_pellets.p3d";
        muzzleFlashParticle = "weapon_shot_pellets";
        casing = "FxCartridge_DF_12Gauge_7mmBuckshot";
        round = "FxRound_DF_12Gauge_7mmBuckshot";
        spawnPileType = "My_DF_Weapons_Ammo_12Gauge_7mmBuckshot";
        initSpeed = 340;
        typicalSpeed = 420;
        airFriction = -0.00575;
        caliber = 0.5;
        deflecting = 0;
        dispersion = 0.05;
        projectilesCount = 8;
        damageBarrel = 600;
        damageBarrelDestroyed = 600;
        weight = 0.005;
        impactBehaviour = 0;
        hitAnimation = 0;
        unconRefillModifier = 1.75;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.9, 1 } };
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
                damage = 40;
            };
        };
        class NoiseHit
        {
            strength = 2;
            type = "sound";
        };
    };
    class Bullet_DF_12Gauge_8mmBuckshot: Shotgun_Base
    {
        scope = 1;
        proxyShape = "\My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_8mmBuckshot\Ammo_12Gauge_8mmBuckshot_pellets.p3d";
        muzzleFlashParticle = "weapon_shot_pellets";
        casing = "FxCartridge_DF_12Gauge_8mmBuckshot";
        round = "FxRound_DF_12Gauge_8mmBuckshot";
        spawnPileType = "My_DF_Weapons_Ammo_12Gauge_8mmBuckshot";
        initSpeed = 350;
        typicalSpeed = 430;
        airFriction = -0.0055;
        caliber = 0.5;
        deflecting = 0;
        dispersion = 0.05;
        projectilesCount = 8;
        damageBarrel = 600;
        damageBarrelDestroyed = 600;
        weight = 0.005;
        impactBehaviour = 0;
        hitAnimation = 0;
        unconRefillModifier = 1.75;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.9, 1 } };
            class Health
            {
                damage = 45;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 45;
            };
        };
        class NoiseHit
        {
            strength = 2;
            type = "sound";
        };
    };
    class Bullet_DF_12Gauge_AP20: Bullet_Base
    {
        scope = 1;
        muzzleFlashParticle = "weapon_shot_pellets";
        casing = "FxCartridge_DF_12Gauge_AP20";
        round = "FxRound_DF_12Gauge_AP20";
        spawnPileType = "My_DF_Weapons_Ammo_12Gauge_AP20";
        hit = 11;
        indirectHit = 0;
        indirectHitRange = 0;
        initSpeed = 390;
        typicalSpeed = 420;
        airFriction = -0.005;
        caliber = 1;
        deflecting = 0;
        damageBarrel = 600;
        damageBarrelDestroyed = 600;
        weight = 0.028;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 1.75;
        class SoundSetsGroundHits
        {
            default[]={"Shell_12ga_default_SoundSet"};
            sakhal_snow[]={"Shell_12ga_leaves_SoundSet"};
            sakhal_snow_forest[]={"Shell_12ga_leaves_SoundSet"};
            sakhal_ice_sea[]={"Shell_12ga_dirt_SoundSet"};
            sakhal_ice_lake[]={"Shell_12ga_default_SoundSet"};
            sakhal_grass_brown[]={"Shell_12ga_grass_SoundSet"};
            sakhal_grass_green[]={"Shell_12ga_grass_SoundSet"};
            sakhal_forest_birch[]={"Shell_12ga_grass_SoundSet"};
            sakhal_forest_spruce[]={"Shell_12ga_grass_SoundSet"};
            sakhal_volcanic_red[]={"Shell_12ga_gravel_SoundSet"};
            sakhal_volcanic_yellow[]={"Shell_12ga_gravel_SoundSet"};
            sakhal_beach[]={"Shell_12ga_grass_SoundSet"};
            sakhal_hotwater[]={"Shell_12ga_water_SoundSet"};
            asphalt_ext[]={"Shell_12ga_default_SoundSet"};
            asphalt_destroyed_ext[]={"Shell_12ga_default_SoundSet"};
            asphalt_int[]={"Shell_12ga_default_int_SoundSet"};
            asphalt_destroyed_int[]={"Shell_12ga_default_int_SoundSet"};
            asphalt_felt[]={"Shell_12ga_default_SoundSet"};
            asphalt_felt_int[]={"Shell_12ga_default_int_SoundSet"};
            cp_broadleaf_dense1[]={"Shell_12ga_leaves_SoundSet"};
            cp_broadleaf_dense2[]={"Shell_12ga_leaves_SoundSet"};
            cp_broadleaf_sparse1[]={"Shell_12ga_leaves_SoundSet"};
            cp_broadleaf_sparse2[]={"Shell_12ga_leaves_SoundSet"};
            cp_conifer_common1[]={"Shell_12ga_leaves_SoundSet"};
            cp_conifer_common2[]={"Shell_12ga_leaves_SoundSet"};
            cp_conifer_moss1[]={"Shell_12ga_leaves_SoundSet"};
            cp_conifer_moss2[]={"Shell_12ga_leaves_SoundSet"};
            cp_concrete1[]={"Shell_12ga_default_SoundSet"};
            cp_concrete2[]={"Shell_12ga_default_SoundSet"};
            concrete_ext[]={"Shell_12ga_default_SoundSet"};
            concrete_stairs_ext[]={"Shell_12ga_default_SoundSet"};
            concrete_int[]={"Shell_12ga_default_int_SoundSet"};
            concrete_stairs[]={"Shell_12ga_default_SoundSet"};
            ceramic_tiles_ext[]={"Shell_12ga_default_SoundSet"};
            ceramic_tiles_int[]={"Shell_12ga_default_SoundSet"};
            ceramic_tiles_roof_ext[]={"Shell_12ga_default_SoundSet"};
            ceramic_tiles_roof_int[]={"Shell_12ga_default_SoundSet"};
            cp_dirt[]={"Shell_12ga_dirt_SoundSet"};
            dirt_ext[]={"Shell_12ga_dirt_SoundSet"};
            dirt_int[]={"Shell_12ga_dirt_int_SoundSet"};
            cp_grass[]={"Shell_12ga_grass_SoundSet"};
            grass_dry_ext[]={"Shell_12ga_grass_SoundSet"};
            grass_dry_int[]={"Shell_12ga_grass_int_SoundSet"};
            cp_grass_tall[]={"Shell_12ga_grass_SoundSet"};
            cp_gravel[]={"Shell_12ga_gravel_SoundSet"};
            gravel_small_ext[]={"Shell_12ga_gravel_SoundSet"};
            gravel_small_int[]={"Shell_12ga_gravel_int_SoundSet"};
            gravel_large_ext[]={"Shell_12ga_gravel_SoundSet"};
            gravel_large_int[]={"Shell_12ga_gravel_int_SoundSet"};
            lino_ext[]={"Shell_12ga_default_SoundSet"};
            lino_int[]={"Shell_12ga_default_SoundSet"};
            metal_thick_ext[]={"Shell_12ga_metal_SoundSet"};
            metal_stairs_ext[]={"Shell_12ga_metal_SoundSet"};
            metal_thick_int[]={"Shell_12ga_metal_int_SoundSet"};
            metal_thin_ext[]={"Shell_12ga_metal_SoundSet"};
            metal_thin_int[]={"Shell_12ga_metal_int_SoundSet"};
            metal_thin_mesh_ext[]={"Shell_12ga_metal_SoundSet"};
            metal_thin_mesh_int[]={"Shell_12ga_metal_int_SoundSet"};
            cp_rock[]={"Shell_12ga_default_SoundSet"};
            rubble_large_ext[]={"Shell_12ga_gravel_SoundSet"};
            rubble_large_int[]={"Shell_12ga_gravel_SoundSet"};
            rubble_small_ext[]={"Shell_12ga_gravel_SoundSet"};
            rubble_small_int[]={"Shell_12ga_gravel_SoundSet"};
            sand_ext[]={"Shell_12ga_sand_SoundSet"};
            sand_int[]={"Shell_12ga_sand_int_SoundSet"};
            stone_ext[]={"Shell_12ga_sand_SoundSet"};
            stone_int[]={"Shell_12ga_sand_int_SoundSet"};
            textile_carpet_ext[]={"Shell_12ga_carpet_SoundSet"};
            textile_carpet_int[]={"Shell_12ga_carpet_int_SoundSet"};
            trash_ext[]={"Shell_12ga_default_SoundSet"};
            trash_int[]={"Shell_12ga_default_SoundSet"};
            wood_parquet_ext[]={"Shell_12ga_wood_SoundSet"};
            wood_parquet_int[]={"Shell_12ga_wood_int_SoundSet"};
            wood_planks_ext[]={"Shell_12ga_wood_SoundSet"};
            wood_planks_stairs_ext[]={"Shell_12ga_wood_SoundSet"};
            wood_planks_int[]={"Shell_12ga_wood_int_SoundSet"};
            wood_planks_stairs_int[]={"Shell_12ga_wood_int_SoundSet"};
            fresh_water_ext[]={"Shell_12ga_water_SoundSet"};
            fresh_water_int[]={"Shell_12ga_water_int_SoundSet"};
            water_int[]={"Shell_12ga_water_int_SoundSet"};
            water[]={"Shell_12ga_water_int_SoundSet"};
        };
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            class Health
            {
                damage = 125;
                armorDamage = 2;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 125;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_12Gauge_Arrow: Shotgun_Base
    {
        scope = 1;
        proxyShape = "\My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Arrow\Ammo_12Gauge_Arrow_pellets.p3d";
        muzzleFlashParticle = "weapon_shot_pellets";
        casing = "FxCartridge_DF_12Gauge_Arrow";
        round = "FxRound_DF_12Gauge_Arrow";
        spawnPileType = "My_DF_Weapons_Ammo_12Gauge_Arrow";
        initSpeed = 400;
        typicalSpeed = 450;
        airFriction = -0.005;
        caliber = 0.5;
        deflecting = 0;
        dispersion = 0.05;
        projectilesCount = 8;
        damageBarrel = 600;
        damageBarrelDestroyed = 600;
        weight = 0.004;
        impactBehaviour = 0;
        hitAnimation = 0;
        unconRefillModifier = 2;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.9, 1 } };
            class Health
            {
                damage = 45;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 45;
            };
        };
        class NoiseHit
        {
            strength = 2;
            type = "sound";
        };
    };
    class Bullet_DF_12Gauge_RIP: Bullet_Base
    {
        scope = 1;
        muzzleFlashParticle = "weapon_shot_pellets";
        casing = "FxCartridge_DF_12Gauge_Arrow";
        round = "FxRound_DF_12Gauge_Arrow";
        spawnPileType = "My_DF_Weapons_Ammo_12Gauge_RIP";
        hit = 11;
        indirectHit = 0;
        indirectHitRange = 0;
        initSpeed = 350;
        typicalSpeed = 400;
        airFriction = -0.0055;
        caliber = 1;
        deflecting = 0;
        damageBarrel = 600;
        damageBarrelDestroyed = 600;
        weight = 0.028;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 1.75;
        class SoundSetsGroundHits
        {
            default[]={"Shell_12ga_default_SoundSet"};
            sakhal_snow[]={"Shell_12ga_leaves_SoundSet"};
            sakhal_snow_forest[]={"Shell_12ga_leaves_SoundSet"};
            sakhal_ice_sea[]={"Shell_12ga_dirt_SoundSet"};
            sakhal_ice_lake[]={"Shell_12ga_default_SoundSet"};
            sakhal_grass_brown[]={"Shell_12ga_grass_SoundSet"};
            sakhal_grass_green[]={"Shell_12ga_grass_SoundSet"};
            sakhal_forest_birch[]={"Shell_12ga_grass_SoundSet"};
            sakhal_forest_spruce[]={"Shell_12ga_grass_SoundSet"};
            sakhal_volcanic_red[]={"Shell_12ga_gravel_SoundSet"};
            sakhal_volcanic_yellow[]={"Shell_12ga_gravel_SoundSet"};
            sakhal_beach[]={"Shell_12ga_grass_SoundSet"};
            sakhal_hotwater[]={"Shell_12ga_water_SoundSet"};
            asphalt_ext[]={"Shell_12ga_default_SoundSet"};
            asphalt_destroyed_ext[]={"Shell_12ga_default_SoundSet"};
            asphalt_int[]={"Shell_12ga_default_int_SoundSet"};
            asphalt_destroyed_int[]={"Shell_12ga_default_int_SoundSet"};
            asphalt_felt[]={"Shell_12ga_default_SoundSet"};
            asphalt_felt_int[]={"Shell_12ga_default_int_SoundSet"};
            cp_broadleaf_dense1[]={"Shell_12ga_leaves_SoundSet"};
            cp_broadleaf_dense2[]={"Shell_12ga_leaves_SoundSet"};
            cp_broadleaf_sparse1[]={"Shell_12ga_leaves_SoundSet"};
            cp_broadleaf_sparse2[]={"Shell_12ga_leaves_SoundSet"};
            cp_conifer_common1[]={"Shell_12ga_leaves_SoundSet"};
            cp_conifer_common2[]={"Shell_12ga_leaves_SoundSet"};
            cp_conifer_moss1[]={"Shell_12ga_leaves_SoundSet"};
            cp_conifer_moss2[]={"Shell_12ga_leaves_SoundSet"};
            cp_concrete1[]={"Shell_12ga_default_SoundSet"};
            cp_concrete2[]={"Shell_12ga_default_SoundSet"};
            concrete_ext[]={"Shell_12ga_default_SoundSet"};
            concrete_stairs_ext[]={"Shell_12ga_default_SoundSet"};
            concrete_int[]={"Shell_12ga_default_int_SoundSet"};
            concrete_stairs[]={"Shell_12ga_default_SoundSet"};
            ceramic_tiles_ext[]={"Shell_12ga_default_SoundSet"};
            ceramic_tiles_int[]={"Shell_12ga_default_SoundSet"};
            ceramic_tiles_roof_ext[]={"Shell_12ga_default_SoundSet"};
            ceramic_tiles_roof_int[]={"Shell_12ga_default_SoundSet"};
            cp_dirt[]={"Shell_12ga_dirt_SoundSet"};
            dirt_ext[]={"Shell_12ga_dirt_SoundSet"};
            dirt_int[]={"Shell_12ga_dirt_int_SoundSet"};
            cp_grass[]={"Shell_12ga_grass_SoundSet"};
            grass_dry_ext[]={"Shell_12ga_grass_SoundSet"};
            grass_dry_int[]={"Shell_12ga_grass_int_SoundSet"};
            cp_grass_tall[]={"Shell_12ga_grass_SoundSet"};
            cp_gravel[]={"Shell_12ga_gravel_SoundSet"};
            gravel_small_ext[]={"Shell_12ga_gravel_SoundSet"};
            gravel_small_int[]={"Shell_12ga_gravel_int_SoundSet"};
            gravel_large_ext[]={"Shell_12ga_gravel_SoundSet"};
            gravel_large_int[]={"Shell_12ga_gravel_int_SoundSet"};
            lino_ext[]={"Shell_12ga_default_SoundSet"};
            lino_int[]={"Shell_12ga_default_SoundSet"};
            metal_thick_ext[]={"Shell_12ga_metal_SoundSet"};
            metal_stairs_ext[]={"Shell_12ga_metal_SoundSet"};
            metal_thick_int[]={"Shell_12ga_metal_int_SoundSet"};
            metal_thin_ext[]={"Shell_12ga_metal_SoundSet"};
            metal_thin_int[]={"Shell_12ga_metal_int_SoundSet"};
            metal_thin_mesh_ext[]={"Shell_12ga_metal_SoundSet"};
            metal_thin_mesh_int[]={"Shell_12ga_metal_int_SoundSet"};
            cp_rock[]={"Shell_12ga_default_SoundSet"};
            rubble_large_ext[]={"Shell_12ga_gravel_SoundSet"};
            rubble_large_int[]={"Shell_12ga_gravel_SoundSet"};
            rubble_small_ext[]={"Shell_12ga_gravel_SoundSet"};
            rubble_small_int[]={"Shell_12ga_gravel_SoundSet"};
            sand_ext[]={"Shell_12ga_sand_SoundSet"};
            sand_int[]={"Shell_12ga_sand_int_SoundSet"};
            stone_ext[]={"Shell_12ga_sand_SoundSet"};
            stone_int[]={"Shell_12ga_sand_int_SoundSet"};
            textile_carpet_ext[]={"Shell_12ga_carpet_SoundSet"};
            textile_carpet_int[]={"Shell_12ga_carpet_int_SoundSet"};
            trash_ext[]={"Shell_12ga_default_SoundSet"};
            trash_int[]={"Shell_12ga_default_SoundSet"};
            wood_parquet_ext[]={"Shell_12ga_wood_SoundSet"};
            wood_parquet_int[]={"Shell_12ga_wood_int_SoundSet"};
            wood_planks_ext[]={"Shell_12ga_wood_SoundSet"};
            wood_planks_stairs_ext[]={"Shell_12ga_wood_SoundSet"};
            wood_planks_int[]={"Shell_12ga_wood_int_SoundSet"};
            wood_planks_stairs_int[]={"Shell_12ga_wood_int_SoundSet"};
            fresh_water_ext[]={"Shell_12ga_water_SoundSet"};
            fresh_water_int[]={"Shell_12ga_water_int_SoundSet"};
            water_int[]={"Shell_12ga_water_int_SoundSet"};
            water[]={"Shell_12ga_water_int_SoundSet"};
        };
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            class Health
            {
                damage = 120;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 120;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_12Gauge_Dragon: Shotgun_Base
    {
        scope = 1;
        proxyShape = "\My_DF_Weapons_Ammo\Ammo\Ammo_12Gauge_Dragon\Ammo_12Gauge_Dragon_pellets.p3d";
        muzzleFlashParticle = "DF_12Gauge_Dragon";
        casing = "FxCartridge_DF_12Gauge_Dragon";
        round = "FxRound_DF_12Gauge_Dragon";
        spawnPileType = "My_DF_Weapons_Ammo_12Gauge_Dragon";
        initSpeed = 370;
        typicalSpeed = 430;
        airFriction = -0.005;
        caliber = 0.5;
        deflecting = 0;
        dispersion = 0.05;
        projectilesCount = 8;
        damageBarrel = 600;
        damageBarrelDestroyed = 600;
        weight = 0.005;
        impactBehaviour = 0;
        hitAnimation = 0;
        unconRefillModifier = 1.75;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.9, 1 } };
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
        class NoiseHit
        {
            strength = 2;
            type = "sound";
        };
    };
    class Bullet_DF_12Gauge_FTX: Bullet_Base
    {
        scope = 1;
        muzzleFlashParticle = "weapon_shot_pellets";
        casing = "FxCartridge_DF_12Gauge_FTX";
        round = "FxRound_DF_12Gauge_FTX";
        spawnPileType = "My_DF_Weapons_Ammo_12Gauge_FTX";
        hit = 11;
        indirectHit = 0;
        indirectHitRange = 0;
        initSpeed = 390;
        typicalSpeed = 420;
        airFriction = -0.005;
        caliber = 1;
        deflecting = 0;
        damageBarrel = 600;
        damageBarrelDestroyed = 600;
        weight = 0.028;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 1.75;
        class SoundSetsGroundHits
        {
            default[]={"Shell_12ga_default_SoundSet"};
            sakhal_snow[]={"Shell_12ga_leaves_SoundSet"};
            sakhal_snow_forest[]={"Shell_12ga_leaves_SoundSet"};
            sakhal_ice_sea[]={"Shell_12ga_dirt_SoundSet"};
            sakhal_ice_lake[]={"Shell_12ga_default_SoundSet"};
            sakhal_grass_brown[]={"Shell_12ga_grass_SoundSet"};
            sakhal_grass_green[]={"Shell_12ga_grass_SoundSet"};
            sakhal_forest_birch[]={"Shell_12ga_grass_SoundSet"};
            sakhal_forest_spruce[]={"Shell_12ga_grass_SoundSet"};
            sakhal_volcanic_red[]={"Shell_12ga_gravel_SoundSet"};
            sakhal_volcanic_yellow[]={"Shell_12ga_gravel_SoundSet"};
            sakhal_beach[]={"Shell_12ga_grass_SoundSet"};
            sakhal_hotwater[]={"Shell_12ga_water_SoundSet"};
            asphalt_ext[]={"Shell_12ga_default_SoundSet"};
            asphalt_destroyed_ext[]={"Shell_12ga_default_SoundSet"};
            asphalt_int[]={"Shell_12ga_default_int_SoundSet"};
            asphalt_destroyed_int[]={"Shell_12ga_default_int_SoundSet"};
            asphalt_felt[]={"Shell_12ga_default_SoundSet"};
            asphalt_felt_int[]={"Shell_12ga_default_int_SoundSet"};
            cp_broadleaf_dense1[]={"Shell_12ga_leaves_SoundSet"};
            cp_broadleaf_dense2[]={"Shell_12ga_leaves_SoundSet"};
            cp_broadleaf_sparse1[]={"Shell_12ga_leaves_SoundSet"};
            cp_broadleaf_sparse2[]={"Shell_12ga_leaves_SoundSet"};
            cp_conifer_common1[]={"Shell_12ga_leaves_SoundSet"};
            cp_conifer_common2[]={"Shell_12ga_leaves_SoundSet"};
            cp_conifer_moss1[]={"Shell_12ga_leaves_SoundSet"};
            cp_conifer_moss2[]={"Shell_12ga_leaves_SoundSet"};
            cp_concrete1[]={"Shell_12ga_default_SoundSet"};
            cp_concrete2[]={"Shell_12ga_default_SoundSet"};
            concrete_ext[]={"Shell_12ga_default_SoundSet"};
            concrete_stairs_ext[]={"Shell_12ga_default_SoundSet"};
            concrete_int[]={"Shell_12ga_default_int_SoundSet"};
            concrete_stairs[]={"Shell_12ga_default_SoundSet"};
            ceramic_tiles_ext[]={"Shell_12ga_default_SoundSet"};
            ceramic_tiles_int[]={"Shell_12ga_default_SoundSet"};
            ceramic_tiles_roof_ext[]={"Shell_12ga_default_SoundSet"};
            ceramic_tiles_roof_int[]={"Shell_12ga_default_SoundSet"};
            cp_dirt[]={"Shell_12ga_dirt_SoundSet"};
            dirt_ext[]={"Shell_12ga_dirt_SoundSet"};
            dirt_int[]={"Shell_12ga_dirt_int_SoundSet"};
            cp_grass[]={"Shell_12ga_grass_SoundSet"};
            grass_dry_ext[]={"Shell_12ga_grass_SoundSet"};
            grass_dry_int[]={"Shell_12ga_grass_int_SoundSet"};
            cp_grass_tall[]={"Shell_12ga_grass_SoundSet"};
            cp_gravel[]={"Shell_12ga_gravel_SoundSet"};
            gravel_small_ext[]={"Shell_12ga_gravel_SoundSet"};
            gravel_small_int[]={"Shell_12ga_gravel_int_SoundSet"};
            gravel_large_ext[]={"Shell_12ga_gravel_SoundSet"};
            gravel_large_int[]={"Shell_12ga_gravel_int_SoundSet"};
            lino_ext[]={"Shell_12ga_default_SoundSet"};
            lino_int[]={"Shell_12ga_default_SoundSet"};
            metal_thick_ext[]={"Shell_12ga_metal_SoundSet"};
            metal_stairs_ext[]={"Shell_12ga_metal_SoundSet"};
            metal_thick_int[]={"Shell_12ga_metal_int_SoundSet"};
            metal_thin_ext[]={"Shell_12ga_metal_SoundSet"};
            metal_thin_int[]={"Shell_12ga_metal_int_SoundSet"};
            metal_thin_mesh_ext[]={"Shell_12ga_metal_SoundSet"};
            metal_thin_mesh_int[]={"Shell_12ga_metal_int_SoundSet"};
            cp_rock[]={"Shell_12ga_default_SoundSet"};
            rubble_large_ext[]={"Shell_12ga_gravel_SoundSet"};
            rubble_large_int[]={"Shell_12ga_gravel_SoundSet"};
            rubble_small_ext[]={"Shell_12ga_gravel_SoundSet"};
            rubble_small_int[]={"Shell_12ga_gravel_SoundSet"};
            sand_ext[]={"Shell_12ga_sand_SoundSet"};
            sand_int[]={"Shell_12ga_sand_int_SoundSet"};
            stone_ext[]={"Shell_12ga_sand_SoundSet"};
            stone_int[]={"Shell_12ga_sand_int_SoundSet"};
            textile_carpet_ext[]={"Shell_12ga_carpet_SoundSet"};
            textile_carpet_int[]={"Shell_12ga_carpet_int_SoundSet"};
            trash_ext[]={"Shell_12ga_default_SoundSet"};
            trash_int[]={"Shell_12ga_default_SoundSet"};
            wood_parquet_ext[]={"Shell_12ga_wood_SoundSet"};
            wood_parquet_int[]={"Shell_12ga_wood_int_SoundSet"};
            wood_planks_ext[]={"Shell_12ga_wood_SoundSet"};
            wood_planks_stairs_ext[]={"Shell_12ga_wood_SoundSet"};
            wood_planks_int[]={"Shell_12ga_wood_int_SoundSet"};
            wood_planks_stairs_int[]={"Shell_12ga_wood_int_SoundSet"};
            fresh_water_ext[]={"Shell_12ga_water_SoundSet"};
            fresh_water_int[]={"Shell_12ga_water_int_SoundSet"};
            water_int[]={"Shell_12ga_water_int_SoundSet"};
            water[]={"Shell_12ga_water_int_SoundSet"};
        };
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            class Health
            {
                damage = 120;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 120;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_12Gauge_GT: Shotgun_Base
    {
        scope = 1;
        muzzleFlashParticle = "weapon_shot_pellets";
        casing = "FxCartridge_DF_12Gauge_GT";
        round = "FxRound_DF_12Gauge_GT";
        spawnPileType = "My_DF_Weapons_Ammo_12Gauge_GT";
        hit = 11;
        indirectHit = 0;
        indirectHitRange = 0;
        initSpeed = 380;
        typicalSpeed = 420;
        airFriction = -0.005;
        caliber = 1;
        deflecting = 0;
        damageBarrel = 600;
        damageBarrelDestroyed = 600;
        weight = 0.028;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 1.75;
        class SoundSetsGroundHits
        {
            default[]={"Shell_12ga_default_SoundSet"};
            sakhal_snow[]={"Shell_12ga_leaves_SoundSet"};
            sakhal_snow_forest[]={"Shell_12ga_leaves_SoundSet"};
            sakhal_ice_sea[]={"Shell_12ga_dirt_SoundSet"};
            sakhal_ice_lake[]={"Shell_12ga_default_SoundSet"};
            sakhal_grass_brown[]={"Shell_12ga_grass_SoundSet"};
            sakhal_grass_green[]={"Shell_12ga_grass_SoundSet"};
            sakhal_forest_birch[]={"Shell_12ga_grass_SoundSet"};
            sakhal_forest_spruce[]={"Shell_12ga_grass_SoundSet"};
            sakhal_volcanic_red[]={"Shell_12ga_gravel_SoundSet"};
            sakhal_volcanic_yellow[]={"Shell_12ga_gravel_SoundSet"};
            sakhal_beach[]={"Shell_12ga_grass_SoundSet"};
            sakhal_hotwater[]={"Shell_12ga_water_SoundSet"};
            asphalt_ext[]={"Shell_12ga_default_SoundSet"};
            asphalt_destroyed_ext[]={"Shell_12ga_default_SoundSet"};
            asphalt_int[]={"Shell_12ga_default_int_SoundSet"};
            asphalt_destroyed_int[]={"Shell_12ga_default_int_SoundSet"};
            asphalt_felt[]={"Shell_12ga_default_SoundSet"};
            asphalt_felt_int[]={"Shell_12ga_default_int_SoundSet"};
            cp_broadleaf_dense1[]={"Shell_12ga_leaves_SoundSet"};
            cp_broadleaf_dense2[]={"Shell_12ga_leaves_SoundSet"};
            cp_broadleaf_sparse1[]={"Shell_12ga_leaves_SoundSet"};
            cp_broadleaf_sparse2[]={"Shell_12ga_leaves_SoundSet"};
            cp_conifer_common1[]={"Shell_12ga_leaves_SoundSet"};
            cp_conifer_common2[]={"Shell_12ga_leaves_SoundSet"};
            cp_conifer_moss1[]={"Shell_12ga_leaves_SoundSet"};
            cp_conifer_moss2[]={"Shell_12ga_leaves_SoundSet"};
            cp_concrete1[]={"Shell_12ga_default_SoundSet"};
            cp_concrete2[]={"Shell_12ga_default_SoundSet"};
            concrete_ext[]={"Shell_12ga_default_SoundSet"};
            concrete_stairs_ext[]={"Shell_12ga_default_SoundSet"};
            concrete_int[]={"Shell_12ga_default_int_SoundSet"};
            concrete_stairs[]={"Shell_12ga_default_SoundSet"};
            ceramic_tiles_ext[]={"Shell_12ga_default_SoundSet"};
            ceramic_tiles_int[]={"Shell_12ga_default_SoundSet"};
            ceramic_tiles_roof_ext[]={"Shell_12ga_default_SoundSet"};
            ceramic_tiles_roof_int[]={"Shell_12ga_default_SoundSet"};
            cp_dirt[]={"Shell_12ga_dirt_SoundSet"};
            dirt_ext[]={"Shell_12ga_dirt_SoundSet"};
            dirt_int[]={"Shell_12ga_dirt_int_SoundSet"};
            cp_grass[]={"Shell_12ga_grass_SoundSet"};
            grass_dry_ext[]={"Shell_12ga_grass_SoundSet"};
            grass_dry_int[]={"Shell_12ga_grass_int_SoundSet"};
            cp_grass_tall[]={"Shell_12ga_grass_SoundSet"};
            cp_gravel[]={"Shell_12ga_gravel_SoundSet"};
            gravel_small_ext[]={"Shell_12ga_gravel_SoundSet"};
            gravel_small_int[]={"Shell_12ga_gravel_int_SoundSet"};
            gravel_large_ext[]={"Shell_12ga_gravel_SoundSet"};
            gravel_large_int[]={"Shell_12ga_gravel_int_SoundSet"};
            lino_ext[]={"Shell_12ga_default_SoundSet"};
            lino_int[]={"Shell_12ga_default_SoundSet"};
            metal_thick_ext[]={"Shell_12ga_metal_SoundSet"};
            metal_stairs_ext[]={"Shell_12ga_metal_SoundSet"};
            metal_thick_int[]={"Shell_12ga_metal_int_SoundSet"};
            metal_thin_ext[]={"Shell_12ga_metal_SoundSet"};
            metal_thin_int[]={"Shell_12ga_metal_int_SoundSet"};
            metal_thin_mesh_ext[]={"Shell_12ga_metal_SoundSet"};
            metal_thin_mesh_int[]={"Shell_12ga_metal_int_SoundSet"};
            cp_rock[]={"Shell_12ga_default_SoundSet"};
            rubble_large_ext[]={"Shell_12ga_gravel_SoundSet"};
            rubble_large_int[]={"Shell_12ga_gravel_SoundSet"};
            rubble_small_ext[]={"Shell_12ga_gravel_SoundSet"};
            rubble_small_int[]={"Shell_12ga_gravel_SoundSet"};
            sand_ext[]={"Shell_12ga_sand_SoundSet"};
            sand_int[]={"Shell_12ga_sand_int_SoundSet"};
            stone_ext[]={"Shell_12ga_sand_SoundSet"};
            stone_int[]={"Shell_12ga_sand_int_SoundSet"};
            textile_carpet_ext[]={"Shell_12ga_carpet_SoundSet"};
            textile_carpet_int[]={"Shell_12ga_carpet_int_SoundSet"};
            trash_ext[]={"Shell_12ga_default_SoundSet"};
            trash_int[]={"Shell_12ga_default_SoundSet"};
            wood_parquet_ext[]={"Shell_12ga_wood_SoundSet"};
            wood_parquet_int[]={"Shell_12ga_wood_int_SoundSet"};
            wood_planks_ext[]={"Shell_12ga_wood_SoundSet"};
            wood_planks_stairs_ext[]={"Shell_12ga_wood_SoundSet"};
            wood_planks_int[]={"Shell_12ga_wood_int_SoundSet"};
            wood_planks_stairs_int[]={"Shell_12ga_wood_int_SoundSet"};
            fresh_water_ext[]={"Shell_12ga_water_SoundSet"};
            fresh_water_int[]={"Shell_12ga_water_int_SoundSet"};
            water_int[]={"Shell_12ga_water_int_SoundSet"};
            water[]={"Shell_12ga_water_int_SoundSet"};
        };
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            class Health
            {
                damage = 115;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 115;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_300_Bpz: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_300_Bpz";
        round = "FxRound_DF_300_Bpz";
        spawnPileType = "My_DF_Weapons_Ammo_300_Bpz";
        hit = 10;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 680;
        typicalSpeed = 740;
        airFriction = -0.0015;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 500;
        damageBarrelDestroyed = 500;
        weight = 0.007;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.95, 1 } };
            class Health
            {
                damage = 115;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 115;
                damageOverride[] = { { 0.8, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_300_Cbj: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_300_Cbj";
        round = "FxRound_DF_300_Cbj";
        spawnPileType = "My_DF_Weapons_Ammo_300_Cbj";
        hit = 10;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 680;
        typicalSpeed = 750;
        airFriction = -0.0013;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 500;
        damageBarrelDestroyed = 500;
        weight = 0.007;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.95, 1 } };
            class Health
            {
                damage = 120;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 120;
                damageOverride[] = { { 0.8, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_300_Vmax: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_300_Vmax";
        round = "FxRound_DF_300_Vmax";
        spawnPileType = "My_DF_Weapons_Ammo_300_Vmax";
        hit = 10;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 700;
        typicalSpeed = 750;
        airFriction = -0.0013;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 500;
        damageBarrelDestroyed = 500;
        weight = 0.007;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.95, 1 } };
            class Health
            {
                damage = 130;
                armorDamage = 2;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 130;
                damageOverride[] = { { 0.8, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_338_LapMag: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_338_LapMag";
        round = "FxRound_DF_338_LapMag";
        spawnPileType = "My_DF_Weapons_Ammo_338_LapMag";
        hit = 20;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 1100;
        typicalSpeed = 1200;
        tracerScale = 1.2;
        tracerStartTime = -1;
        tracerEndTime = 1;
        airFriction = -0.0005;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 1000;
        damageBarrelDestroyed = 1000;
        weight = 0.02;
        impactBehaviour = 1;
        hitAnimation = 1;
        unconRefillModifier = 10;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.95, 1 } };
            class Health
            {
                damage = 300;
            };
            class Blood
            {
                damage = 300;
            };
            class Shock
            {
                damage = 300;
            };
        };
        class NoiseHit
        {
            strength = 20;
            type = "sound";
        };
    };
    class Bullet_DF_357Magnum_FMJ: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_357Magnum_FMJ";
        round = "FxRound_DF_357Magnum_FMJ";
        spawnPileType = "My_DF_Weapons_Ammo_357Magnum_FMJ";
        hit = 9;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 1;
        deflecting = 30;
        airFriction = -0.0022;
        typicalSpeed = 530;
        initSpeed = 470;
        damageBarrel = 187.5;
        damageBarrelDestroyed = 187.5;
        weight = 0.01;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 2.75;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.85, 1 } };
            class Health
            {
                damage = 80;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 80;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_357Magnum_JHP: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_357Magnum_JHP";
        round = "FxRound_DF_357Magnum_JHP";
        spawnPileType = "My_DF_Weapons_Ammo_357Magnum_JHP";
        hit = 9;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 1;
        deflecting = 30;
        airFriction = -0.0023;
        typicalSpeed = 520;
        initSpeed = 460;
        damageBarrel = 187.5;
        damageBarrelDestroyed = 187.5;
        weight = 0.01;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 2.75;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.85, 1 } };
            class Health
            {
                damage = 75;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 75;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_357Magnum_HP: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_357Magnum_JHP";
        round = "FxRound_DF_357Magnum_JHP";
        spawnPileType = "My_DF_Weapons_Ammo_357Magnum_HP";
        hit = 9;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 1;
        deflecting = 30;
        airFriction = -0.0025;
        typicalSpeed = 520;
        initSpeed = 440;
        damageBarrel = 187.5;
        damageBarrelDestroyed = 187.5;
        weight = 0.0102;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 2.75;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.85, 1 } };
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
                damage = 70;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_357Magnum_Shot: Shotgun_Base
    {
        scope = 1;
        proxyShape = "\My_DF_Weapons_Ammo\Ammo\Ammo_357Magnum_Shot\Ammo_357Magnum_Shot_pellets.p3d";
        muzzleFlashParticle = "weapon_shot_pellets";
        casing = "FxCartridge_DF_357Magnum_Shot";
        round = "FxRound_DF_357Magnum_Shot";
        spawnPileType = "My_DF_Weapons_Ammo_357Magnum_Shot";
        initSpeed = 300;
        typicalSpeed = 400;
        airFriction = -0.006;
        caliber = 0.5;
        deflecting = 0;
        dispersion = 0.05;
        projectilesCount = 8;
        damageBarrel = 600;
        damageBarrelDestroyed = 600;
        weight = 0.005;
        impactBehaviour = 0;
        hitAnimation = 0;
        unconRefillModifier = 1.75;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.9, 1 } };
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
                damage = 30;
            };
        };
        class NoiseHit
        {
            strength = 2;
            type = "sound";
        };
    };
    class Bullet_DF_45ACP_AP: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_45ACP_AP";
        round = "FxRound_DF_45ACP_AP";
        spawnPileType = "My_DF_Weapons_Ammo_45ACP_AP";
        hit = 1;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 0.8;
        deflecting = 30;
        initSpeed = 300;
        typicalSpeed = 350;
        airFriction = -0.001;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        damageBarrel = 200;
        damageBarrelDestroyed = 200;
        weight = 0.012;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 6;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            class Health
            {
                damage = 60;
                armorDamage = 1;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 60;
                damageOverride[] = { { 0.9, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_45ACP_FMJ: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_45ACP_FMJ";
        round = "FxRound_DF_45ACP_FMJ";
        spawnPileType = "My_DF_Weapons_Ammo_45ACP_FMJ";
        hit = 0;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 0.8;
        deflecting = 30;
        initSpeed = 280;
        typicalSpeed = 320;
        airFriction = -0.001;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        damageBarrel = 190;
        damageBarrelDestroyed = 190;
        weight = 0.012;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 6;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            class Health
            {
                damage = 55;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 55;
                damageOverride[] = { { 0.9, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_45ACP_HS: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_45ACP_HS";
        round = "FxRound_DF_45ACP_HS";
        spawnPileType = "My_DF_Weapons_Ammo_45ACP_HS";
        hit = 0;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 0.8;
        deflecting = 30;
        initSpeed = 260;
        typicalSpeed = 290;
        airFriction = -0.001;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        damageBarrel = 187.5;
        damageBarrelDestroyed = 187.5;
        weight = 0.0149;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 6;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            class Health
            {
                damage = 45;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 45;
                damageOverride[] = { { 0.9, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_45ACP_JHP: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_45ACP_JHP";
        round = "FxRound_DF_45ACP_JHP";
        spawnPileType = "My_DF_Weapons_Ammo_45ACP_JHP";
        hit = 0;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 0.8;
        deflecting = 30;
        initSpeed = 270;
        typicalSpeed = 300;
        airFriction = -0.001;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        damageBarrel = 187.5;
        damageBarrelDestroyed = 187.5;
        weight = 0.013;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 6;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
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
                damageOverride[] = { { 0.9, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_45ACP_RIP: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_45ACP_RIP";
        round = "FxRound_DF_45ACP_RIP";
        spawnPileType = "My_DF_Weapons_Ammo_45ACP_RIP";
        hit = 0;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 0.8;
        deflecting = 30;
        initSpeed = 250;
        typicalSpeed = 270;
        airFriction = -0.0015;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        damageBarrel = 187.5;
        damageBarrelDestroyed = 187.5;
        weight = 0.015;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 6;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            class Health
            {
                damage = 60;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 60;
                damageOverride[] = { { 0.9, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_45_70_FMJ: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_45_70_FMJ";
        round = "FxRound_DF_45_70_FMJ";
        spawnPileType = "My_DF_Weapons_Ammo_45_70_FMJ";
        hit = 12;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 800;
        typicalSpeed = 940;
        tracerScale = 1.2;
        tracerStartTime = -1;
        tracerEndTime = 1;
        airFriction = -0.001;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 500;
        damageBarrelDestroyed = 500;
        weight = 0.01;
        impactBehaviour = 1;
        hitAnimation = 1;
        unconRefillModifier = 2.75;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.9, 1 } };
            class Health
            {
                damage = 160;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 160;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_45_70_FTX: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_45_70_FTX";
        round = "FxRound_DF_45_70_FTX";
        spawnPileType = "My_DF_Weapons_Ammo_45_70_FTX";
        hit = 12;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 820;
        typicalSpeed = 950;
        tracerScale = 1.2;
        tracerStartTime = -1;
        tracerEndTime = 1;
        airFriction = -0.001;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 500;
        damageBarrelDestroyed = 500;
        weight = 0.01;
        impactBehaviour = 1;
        hitAnimation = 1;
        unconRefillModifier = 3;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.9, 1 } };
            class Health
            {
                damage = 170;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 170;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_45_70_RN: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_45_70_RN";
        round = "FxRound_DF_45_70_RN";
        spawnPileType = "My_DF_Weapons_Ammo_45_70_RN";
        hit = 12;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 770;
        typicalSpeed = 940;
        tracerScale = 1.2;
        tracerStartTime = -1;
        tracerEndTime = 1;
        airFriction = -0.001;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 500;
        damageBarrelDestroyed = 500;
        weight = 0.01;
        impactBehaviour = 1;
        hitAnimation = 1;
        unconRefillModifier = 2.75;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.9, 1 } };
            class Health
            {
                damage = 155;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 155;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_46x30_AP_SX: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_46x30_AP_SX";
        round = "FxRound_DF_46x30_AP_SX";
        spawnPileType = "My_DF_Weapons_Ammo_46x30_AP_SX";
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 0.8;
        deflecting = 30;
        initSpeed = 650;
        typicalSpeed = 700;
        airFriction = -0.0012;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        damageBarrel = 170;
        damageBarrelDestroyed = 170;
        weight = 0.004;
        impactBehaviour = 0;
        hitAnimation = 0;
        unconRefillModifier = 6;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.95, 1 } };
            class Health
            {
                damage = 60;
                armorDamage = 1;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 60;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_46x30_FMJ_SX: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_46x30_FMJ_SX";
        round = "FxRound_DF_46x30_FMJ_SX";
        spawnPileType = "My_DF_Weapons_Ammo_46x30_FMJ_SX";
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 0.8;
        deflecting = 30;
        initSpeed = 600;
        typicalSpeed = 680;
        airFriction = -0.0015;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        damageBarrel = 170;
        damageBarrelDestroyed = 170;
        weight = 0.005;
        impactBehaviour = 0;
        hitAnimation = 0;
        unconRefillModifier = 6;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.95, 1 } };
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
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_46x30_Subsonic_SX: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_46x30_Subsonic_SX";
        round = "FxRound_DF_46x30_Subsonic_SX";
        spawnPileType = "My_DF_Weapons_Ammo_46x30_Subsonic_SX";
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 0.8;
        deflecting = 30;
        initSpeed = 550;
        typicalSpeed = 680;
        airFriction = -0.0015;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        damageBarrel = 166.66667;
        damageBarrelDestroyed = 166.66667;
        weight = 0.005;
        impactBehaviour = 0;
        hitAnimation = 0;
        unconRefillModifier = 6;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.95, 1 } };
            class Health
            {
                damage = 45;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 45;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_50AE_FMJ: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_50AE_FMJ";
        round = "FxRound_DF_50AE_FMJ";
        spawnPileType = "My_DF_Weapons_Ammo_50AE_FMJ";
        hit = 9;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 1;
        deflecting = 30;
        airFriction = -0.0022;
        typicalSpeed = 540;
        initSpeed = 480;
        damageBarrel = 190;
        damageBarrelDestroyed = 190;
        weight = 0.01;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 3;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.85, 1 } };
            class Health
            {
                damage = 80;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 80;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_50AE_HP: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_50AE_HP";
        round = "FxRound_DF_50AE_HP";
        spawnPileType = "My_DF_Weapons_Ammo_50AE_HP";
        hit = 9;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 1;
        deflecting = 30;
        airFriction = -0.0025;
        typicalSpeed = 520;
        initSpeed = 450;
        damageBarrel = 187.5;
        damageBarrelDestroyed = 187.5;
        weight = 0.0102;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 2.75;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.85, 1 } };
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
                damage = 70;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_50AE_JHP: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_50AE_JHP";
        round = "FxRound_DF_50AE_JHP";
        spawnPileType = "My_DF_Weapons_Ammo_50AE_JHP";
        hit = 9;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 1;
        deflecting = 30;
        airFriction = -0.0023;
        typicalSpeed = 540;
        initSpeed = 470;
        damageBarrel = 187.5;
        damageBarrelDestroyed = 187.5;
        weight = 0.01;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 2.75;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.85, 1 } };
            class Health
            {
                damage = 75;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 75;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_545x39_BS: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_545x39_BS";
        round = "FxRound_DF_545x39_BS";
        spawnPileType = "My_DF_Weapons_Ammo_545x39_BS";
        hit = 8;
        airFriction = -0.001;
        typicalSpeed = 920;
        initSpeed = 890;
        caliber = 0.9;
        deflecting = 10;
        damageBarrel = 250;
        damageBarrelDestroyed = 250;
        weight = 0.004;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            class Health
            {
                damage = 140;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 140;
                damageOverride[] = { { 0.9, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_545x39_BT: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_545x39_BT";
        round = "FxRound_DF_545x39_BT";
        spawnPileType = "My_DF_Weapons_Ammo_545x39_BT";
        hit = 8;
        airFriction = -0.0011;
        typicalSpeed = 900;
        initSpeed = 880;
        caliber = 0.9;
        deflecting = 10;
        damageBarrel = 220;
        damageBarrelDestroyed = 220;
        weight = 0.0035;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            class Health
            {
                damage = 135;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 135;
                damageOverride[] = { { 0.9, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_545x39_PRS: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_545x39_PRS";
        round = "FxRound_DF_545x39_PRS";
        spawnPileType = "My_DF_Weapons_Ammo_545x39_PRS";
        hit = 8;
        airFriction = -0.00125;
        typicalSpeed = 880;
        initSpeed = 880;
        caliber = 0.9;
        deflecting = 10;
        damageBarrel = 214.28572;
        damageBarrelDestroyed = 214.28572;
        weight = 0.00343;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            class Health
            {
                damage = 120;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 120;
                damageOverride[] = { { 0.9, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_545x39_PS: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_545x39_PS";
        round = "FxRound_DF_545x39_PS";
        spawnPileType = "My_DF_Weapons_Ammo_545x39_PS";
        hit = 8;
        airFriction = -0.0012;
        typicalSpeed = 900;
        initSpeed = 880;
        caliber = 0.9;
        deflecting = 10;
        damageBarrel = 220;
        damageBarrelDestroyed = 220;
        weight = 0.0035;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            class Health
            {
                damage = 130;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 130;
                damageOverride[] = { { 0.9, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_545x39_T: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_545x39_T";
        round = "FxRound_DF_545x39_T";
        spawnPileType = "My_DF_Weapons_Ammo_545x39_T";
        hit = 8;
        airFriction = -0.0012;
        typicalSpeed = 880;
        initSpeed = 880;
        caliber = 0.9;
        deflecting = 10;
        damageBarrel = 214.28572;
        damageBarrelDestroyed = 214.28572;
        weight = 0.00343;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            class Health
            {
                damage = 125;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 125;
                damageOverride[] = { { 0.9, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_556x45_FMJ: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_556x45_FMJ";
        round = "FxRound_DF_556x45_FMJ";
        spawnPileType = "My_DF_Weapons_Ammo_556x45_FMJ";
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        initSpeed = 870;
        typicalSpeed = 1000;
        airFriction = -0.0012;
        caliber = 1;
        deflecting = 10;
        tracerScale = 1;
        tracerStartTime = -1;
        tracerEndTime = 1;
        nvgOnly = 1;
        damageBarrel = 250;
        damageBarrelDestroyed = 250;
        weight = 0.004;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.85, 1 } };
            class Health
            {
                damage = 120;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 120;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_556x45_M855: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_556x45_M855";
        round = "FxRound_DF_556x45_M855";
        spawnPileType = "My_DF_Weapons_Ammo_556x45_M855";
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        initSpeed = 880;
        typicalSpeed = 1000;
        airFriction = -0.00115;
        caliber = 1;
        deflecting = 10;
        tracerScale = 1;
        tracerStartTime = -1;
        tracerEndTime = 1;
        nvgOnly = 1;
        damageBarrel = 250;
        damageBarrelDestroyed = 250;
        weight = 0.004;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.85, 1 } };
            class Health
            {
                damage = 125;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 125;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_556x45_M855A1: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_556x45_M855A1";
        round = "FxRound_DF_556x45_M855A1";
        spawnPileType = "My_DF_Weapons_Ammo_556x45_M855A1";
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        initSpeed = 900;
        typicalSpeed = 1000;
        airFriction = -0.00115;
        caliber = 1;
        deflecting = 10;
        tracerScale = 1;
        tracerStartTime = -1;
        tracerEndTime = 1;
        nvgOnly = 1;
        damageBarrel = 270;
        damageBarrelDestroyed = 270;
        weight = 0.005;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.85, 1 } };
            class Health
            {
                damage = 130;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 130;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_556x45_M995: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_556x45_M995";
        round = "FxRound_DF_556x45_M995";
        spawnPileType = "My_DF_Weapons_Ammo_556x45_M995";
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        initSpeed = 950;
        typicalSpeed = 1050;
        airFriction = -0.001;
        caliber = 1;
        deflecting = 10;
        tracerScale = 1;
        tracerStartTime = -1;
        tracerEndTime = 1;
        nvgOnly = 1;
        damageBarrel = 300;
        damageBarrelDestroyed = 300;
        weight = 0.005;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.85, 1 } };
            class Health
            {
                damage = 135;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 135;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_556x45_RRLP: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_556x45_RRLP";
        round = "FxRound_DF_556x45_RRLP";
        spawnPileType = "My_DF_Weapons_Ammo_556x45_RRLP";
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        initSpeed = 850;
        typicalSpeed = 1000;
        airFriction = -0.00125;
        caliber = 1;
        deflecting = 10;
        tracerScale = 1;
        tracerStartTime = -1;
        tracerEndTime = 1;
        nvgOnly = 1;
        damageBarrel = 250;
        damageBarrelDestroyed = 250;
        weight = 0.004;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.85, 1 } };
            class Health
            {
                damage = 115;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 115;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_57x28_L191: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_57x28_L191";
        round = "FxRound_DF_57x28_L191";
        spawnPileType = "My_DF_Weapons_Ammo_57x28_L191";
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 0.8;
        deflecting = 30;
        initSpeed = 430;
        typicalSpeed = 460;
        airFriction = -0.002;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        damageBarrel = 180;
        damageBarrelDestroyed = 180;
        weight = 0.005;
        impactBehaviour = 0;
        hitAnimation = 0;
        unconRefillModifier = 6;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.95, 1 } };
            class Health
            {
                damage = 55;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 55;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_57x28_R37F: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_57x28_R37F";
        round = "FxRound_DF_57x28_R37F";
        spawnPileType = "My_DF_Weapons_Ammo_57x28_R37F";
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 0.8;
        deflecting = 30;
        initSpeed = 330;
        typicalSpeed = 360;
        airFriction = -0.0025;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        damageBarrel = 180;
        damageBarrelDestroyed = 180;
        weight = 0.008;
        impactBehaviour = 0;
        hitAnimation = 0;
        unconRefillModifier = 6;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.95, 1 } };
            class Health
            {
                damage = 60;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 60;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_57x28_SS190: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_57x28_SS190";
        round = "FxRound_DF_57x28_SS190";
        spawnPileType = "My_DF_Weapons_Ammo_57x28_SS190";
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 0.8;
        deflecting = 30;
        initSpeed = 480;
        typicalSpeed = 520;
        airFriction = -0.0018;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        damageBarrel = 180;
        damageBarrelDestroyed = 180;
        weight = 0.005;
        impactBehaviour = 0;
        hitAnimation = 0;
        unconRefillModifier = 6;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.95, 1 } };
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
                damage = 70;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_57x28_SS193: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_57x28_SS193";
        round = "FxRound_DF_57x28_SS193";
        spawnPileType = "My_DF_Weapons_Ammo_57x28_SS193";
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 0.8;
        deflecting = 30;
        initSpeed = 450;
        typicalSpeed = 500;
        airFriction = -0.002;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        damageBarrel = 180;
        damageBarrelDestroyed = 180;
        weight = 0.005;
        impactBehaviour = 0;
        hitAnimation = 0;
        unconRefillModifier = 6;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.95, 1 } };
            class Health
            {
                damage = 60;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 60;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_57x28_SS197SR: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_57x28_SS197SR";
        round = "FxRound_DF_57x28_SS197SR";
        spawnPileType = "My_DF_Weapons_Ammo_57x28_SS197SR";
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 0.8;
        deflecting = 30;
        initSpeed = 420;
        typicalSpeed = 450;
        airFriction = -0.002;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        damageBarrel = 180;
        damageBarrelDestroyed = 180;
        weight = 0.006;
        impactBehaviour = 0;
        hitAnimation = 0;
        unconRefillModifier = 6;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.95, 1 } };
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
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_57x28_SS198LF: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_57x28_SS198LF";
        round = "FxRound_DF_57x28_SS198LF";
        spawnPileType = "My_DF_Weapons_Ammo_57x28_SS198LF";
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 0.8;
        deflecting = 30;
        initSpeed = 400;
        typicalSpeed = 450;
        airFriction = -0.002;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        damageBarrel = 180;
        damageBarrelDestroyed = 180;
        weight = 0.007;
        impactBehaviour = 0;
        hitAnimation = 0;
        unconRefillModifier = 6;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.95, 1 } };
            class Health
            {
                damage = 45;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 45;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_58X42_DBP10: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_58X42_DBP10";
        round = "FxRound_DF_58X42_DBP10";
        spawnPileType = "My_DF_Weapons_Ammo_58X42_DBP10";
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        initSpeed = 950;
        typicalSpeed = 1050;
        airFriction = -0.001;
        caliber = 1;
        deflecting = 10;
        tracerScale = 1;
        tracerStartTime = -1;
        tracerEndTime = 1;
        nvgOnly = 1;
        damageBarrel = 250;
        damageBarrelDestroyed = 250;
        weight = 0.003;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.87, 1 } };
            class Health
            {
                damage = 125;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 125;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_58X42_DBP87: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_58X42_DBP87";
        round = "FxRound_DF_58X42_DBP87";
        spawnPileType = "My_DF_Weapons_Ammo_58X42_DBP87";
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        initSpeed = 900;
        typicalSpeed = 1000;
        airFriction = -0.001;
        caliber = 1;
        deflecting = 10;
        tracerScale = 1;
        tracerStartTime = -1;
        tracerEndTime = 1;
        nvgOnly = 1;
        damageBarrel = 250;
        damageBarrelDestroyed = 250;
        weight = 0.003;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.87, 1 } };
            class Health
            {
                damage = 115;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 115;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_58X42_DVC12: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_58X42_DVC12";
        round = "FxRound_DF_58X42_DVC12";
        spawnPileType = "My_DF_Weapons_Ammo_58X42_DVC12";
        hit = 9;
        indirectHit = 0;
        indirectHitRange = 0;
        initSpeed = 970;
        typicalSpeed = 1070;
        airFriction = -0.001;
        caliber = 1;
        deflecting = 10;
        tracerScale = 1;
        tracerStartTime = -1;
        tracerEndTime = 1;
        nvgOnly = 1;
        damageBarrel = 270;
        damageBarrelDestroyed = 270;
        weight = 0.003;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.87, 1 } };
            class Health
            {
                damage = 130;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 130;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_58X42_DVP88: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_58X42_DVP88";
        round = "FxRound_DF_58X42_DVP88";
        spawnPileType = "My_DF_Weapons_Ammo_58X42_DVP88";
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        initSpeed = 920;
        typicalSpeed = 1010;
        airFriction = -0.001;
        caliber = 1;
        deflecting = 10;
        tracerScale = 1;
        tracerStartTime = -1;
        tracerEndTime = 1;
        nvgOnly = 1;
        damageBarrel = 250;
        damageBarrelDestroyed = 250;
        weight = 0.003;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.87, 1 } };
            class Health
            {
                damage = 120;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 120;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_68x51_AP: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_68x51_AP";
        round = "FxRound_DF_68x51_AP";
        spawnPileType = "My_DF_Weapons_Ammo_68x51_AP";
        hit = 10;
        indirectHit = 0;
        indirectHitRange = 0;
        initSpeed = 980;
        typicalSpeed = 1100;
        airFriction = -0.001;
        caliber = 1;
        deflecting = 10;
        tracerScale = 1;
        tracerStartTime = -1;
        tracerEndTime = 1;
        nvgOnly = 1;
        damageBarrel = 300;
        damageBarrelDestroyed = 300;
        weight = 0.007;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.9, 1 } };
            class Health
            {
                damage = 150;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 150;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_68x51_FMJ: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_68x51_FMJ";
        round = "FxRound_DF_68x51_FMJ";
        spawnPileType = "My_DF_Weapons_Ammo_68x51_FMJ";
        hit = 10;
        indirectHit = 0;
        indirectHitRange = 0;
        initSpeed = 900;
        typicalSpeed = 1000;
        airFriction = -0.0012;
        caliber = 1;
        deflecting = 10;
        tracerScale = 1;
        tracerStartTime = -1;
        tracerEndTime = 1;
        nvgOnly = 1;
        damageBarrel = 300;
        damageBarrelDestroyed = 300;
        weight = 0.005;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.87, 1 } };
            class Health
            {
                damage = 130;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 130;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_68x51_Hybird: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_68x51_Hybird";
        round = "FxRound_DF_68x51_Hybird";
        spawnPileType = "My_DF_Weapons_Ammo_68x51_Hybird";
        hit = 10;
        indirectHit = 0;
        indirectHitRange = 0;
        initSpeed = 950;
        typicalSpeed = 1000;
        airFriction = -0.0011;
        caliber = 1;
        deflecting = 10;
        tracerScale = 1;
        tracerStartTime = -1;
        tracerEndTime = 1;
        nvgOnly = 1;
        damageBarrel = 300;
        damageBarrelDestroyed = 300;
        weight = 0.005;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.9, 1 } };
            class Health
            {
                damage = 140;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 140;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_762x39_AP: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_762x39_AP";
        round = "FxRound_DF_762x39_AP";
        spawnPileType = "My_DF_Weapons_Ammo_762x39_AP";
        hit = 10;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 720;
        typicalSpeed = 770;
        airFriction = -0.0013;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 500;
        damageBarrelDestroyed = 500;
        weight = 0.01;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.85, 1 } };
            class Health
            {
                damage = 135;
                armorDamage = 2;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 135;
                damageOverride[] = { { 0.8, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_762x39_BP: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_762x39_BP";
        round = "FxRound_DF_762x39_BP";
        spawnPileType = "My_DF_Weapons_Ammo_762x39_BP";
        hit = 10;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 700;
        typicalSpeed = 750;
        airFriction = -0.0014;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 500;
        damageBarrelDestroyed = 500;
        weight = 0.01;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.85, 1 } };
            class Health
            {
                damage = 130;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 130;
                damageOverride[] = { { 0.8, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_762x39_LP: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_762x39_LP";
        round = "FxRound_DF_762x39_LP";
        spawnPileType = "My_DF_Weapons_Ammo_762x39_LP";
        hit = 9.5;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 640;
        typicalSpeed = 740;
        airFriction = -0.0015;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 500;
        damageBarrelDestroyed = 500;
        weight = 0.008;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.85, 1 } };
            class Health
            {
                damage = 115;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 115;
                damageOverride[] = { { 0.8, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_762x39_PS: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_762x39_PS";
        round = "FxRound_DF_762x39_PS";
        spawnPileType = "My_DF_Weapons_Ammo_762x39_PS";
        hit = 10;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 680;
        typicalSpeed = 740;
        airFriction = -0.0015;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 500;
        damageBarrelDestroyed = 500;
        weight = 0.009;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.85, 1 } };
            class Health
            {
                damage = 125;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 125;
                damageOverride[] = { { 0.8, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_762x39_T45N: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_762x39_T45N";
        round = "FxRound_DF_762x39_T45N";
        spawnPileType = "My_DF_Weapons_Ammo_762x39_T45N";
        hit = 10;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 650;
        typicalSpeed = 740;
        airFriction = -0.0015;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 500;
        damageBarrelDestroyed = 500;
        weight = 0.008;
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.85, 1 } };
            class Health
            {
                damage = 120;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 120;
                damageOverride[] = { { 0.8, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_762x51_BPZ: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_762x51_BPZ";
        round = "FxRound_DF_762x51_BPZ";
        spawnPileType = "My_DF_Weapons_Ammo_762x51_BPZ";
        hit = 12;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 800;
        typicalSpeed = 940;
        tracerScale = 1.2;
        tracerStartTime = -1;
        tracerEndTime = 1;
        airFriction = -0.001;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 500;
        damageBarrelDestroyed = 500;
        weight = 0.01;
        impactBehaviour = 1;
        hitAnimation = 1;
        unconRefillModifier = 2.75;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.9, 1 } };
            class Health
            {
                damage = 160;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 160;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_762x51_M61: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_762x51_M61";
        round = "FxRound_DF_762x51_M61";
        spawnPileType = "My_DF_Weapons_Ammo_762x51_M61";
        hit = 12;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 900;
        typicalSpeed = 950;
        tracerScale = 1.2;
        tracerStartTime = -1;
        tracerEndTime = 1;
        airFriction = -0.001;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 700;
        damageBarrelDestroyed = 700;
        weight = 0.02;
        impactBehaviour = 1;
        hitAnimation = 1;
        unconRefillModifier = 3;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.95, 1 } };
            class Health
            {
                damage = 175;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 175;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_762x51_M62: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_762x51_M62";
        round = "FxRound_DF_762x51_M62";
        spawnPileType = "My_DF_Weapons_Ammo_762x51_M62";
        hit = 12;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 850;
        typicalSpeed = 950;
        tracerScale = 1.2;
        tracerStartTime = -1;
        tracerEndTime = 1;
        airFriction = -0.001;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 600;
        damageBarrelDestroyed = 600;
        weight = 0.02;
        impactBehaviour = 1;
        hitAnimation = 1;
        unconRefillModifier = 3;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.9, 1 } };
            class Health
            {
                damage = 170;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 170;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_762x51_M80: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_762x51_M80";
        round = "FxRound_DF_762x51_M80";
        spawnPileType = "My_DF_Weapons_Ammo_762x51_M80";
        hit = 12;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 830;
        typicalSpeed = 950;
        tracerScale = 1.2;
        tracerStartTime = -1;
        tracerEndTime = 1;
        airFriction = -0.001;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 600;
        damageBarrelDestroyed = 600;
        weight = 0.01;
        impactBehaviour = 1;
        hitAnimation = 1;
        unconRefillModifier = 3;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.9, 1 } };
            class Health
            {
                damage = 165;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 165;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_762x51_UltraNosler: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_762x51_UltraNosler";
        round = "FxRound_DF_762x51_UltraNosler";
        spawnPileType = "My_DF_Weapons_Ammo_762x51_UltraNosler";
        hit = 12;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 770;
        typicalSpeed = 940;
        tracerScale = 1.2;
        tracerStartTime = -1;
        tracerEndTime = 1;
        airFriction = -0.001;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 500;
        damageBarrelDestroyed = 500;
        weight = 0.01;
        impactBehaviour = 1;
        hitAnimation = 1;
        unconRefillModifier = 2.75;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.9, 1 } };
            class Health
            {
                damage = 155;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 155;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_762x54R_BT: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_762x54R_BT";
        round = "FxRound_DF_762x54R_BT";
        spawnPileType = "My_DF_Weapons_Ammo_762x54R_BT";
        hit = 12;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 800;
        typicalSpeed = 880;
        airFriction = -0.001;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 500;
        damageBarrelDestroyed = 500;
        weight = 0.015;
        impactBehaviour = 1;
        hitAnimation = 1;
        unconRefillModifier = 3;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.9, 1 } };
            class Health
            {
                damage = 170;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 170;
                damageOverride[] = { { 0.85, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_762x54R_LPS: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_762x54R_LPS";
        round = "FxRound_DF_762x54R_LPS";
        spawnPileType = "My_DF_Weapons_Ammo_762x54R_LPS";
        hit = 12;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 800;
        typicalSpeed = 870;
        airFriction = -0.001;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 500;
        damageBarrelDestroyed = 500;
        weight = 0.015;
        impactBehaviour = 1;
        hitAnimation = 1;
        unconRefillModifier = 2.75;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.9, 1 } };
            class Health
            {
                damage = 165;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 165;
                damageOverride[] = { { 0.85, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_762x54R_SNB: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_762x54R_SNB";
        round = "FxRound_DF_762x54R_SNB";
        spawnPileType = "My_DF_Weapons_Ammo_762x54R_SNB";
        hit = 12;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 850;
        typicalSpeed = 900;
        airFriction = -0.001;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 600;
        damageBarrelDestroyed = 600;
        weight = 0.02;
        impactBehaviour = 1;
        hitAnimation = 1;
        unconRefillModifier = 3;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.95, 1 } };
            class Health
            {
                damage = 175;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 175;
                damageOverride[] = { { 0.85, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_762x54R_T46M: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_762x54R_T46M";
        round = "FxRound_DF_762x54R_T46M";
        spawnPileType = "My_DF_Weapons_Ammo_762x54R_T46M";
        hit = 12;
        indirectHit = 0;
        indirectHitRange = 0;
        airLock = 1;
        initSpeed = 785;
        typicalSpeed = 865;
        airFriction = -0.001;
        caliber = 1;
        deflecting = 10;
        damageBarrel = 500;
        damageBarrelDestroyed = 500;
        weight = 0.012;
        impactBehaviour = 1;
        hitAnimation = 1;
        unconRefillModifier = 2.75;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.9, 1 } };
            class Health
            {
                damage = 160;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 160;
                damageOverride[] = { { 0.85, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_9x19_AP63: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_9x19_AP63";
        round = "FxRound_DF_9x19_AP63";
        spawnPileType = "My_DF_Weapons_Ammo_9x19_AP63";
        hit = 7;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 0.8;
        deflecting = 30;
        initSpeed = 350;
        typicalSpeed = 400;
        airFriction = -0.0022;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        damageBarrel = 166.66667;
        damageBarrelDestroyed = 166.66667;
        weight = 0.0084;
        impactBehaviour = 0;
        hitAnimation = 0;
        unconRefillModifier = 6;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.95, 1 } };
            class Health
            {
                damage = 55;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 55;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_9x19_PBP: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_9x19_PBP";
        round = "FxRound_DF_9x19_PBP";
        spawnPileType = "My_DF_Weapons_Ammo_9x19_PBP";
        hit = 7;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 0.8;
        deflecting = 30;
        initSpeed = 360;
        typicalSpeed = 400;
        airFriction = -0.002;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        damageBarrel = 166.66667;
        damageBarrelDestroyed = 166.66667;
        weight = 0.008;
        impactBehaviour = 0;
        hitAnimation = 0;
        unconRefillModifier = 6;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.95, 1 } };
            class Health
            {
                damage = 60;
                armorDamage = 1;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 60;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_9x19_PSO: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_9x19_PSO";
        round = "FxRound_DF_9x19_PSO";
        spawnPileType = "My_DF_Weapons_Ammo_9x19_PSO";
        hit = 7;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 0.8;
        deflecting = 30;
        initSpeed = 350;
        typicalSpeed = 380;
        airFriction = -0.0023;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        damageBarrel = 166.66667;
        damageBarrelDestroyed = 166.66667;
        weight = 0.0084;
        impactBehaviour = 0;
        hitAnimation = 0;
        unconRefillModifier = 6;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.95, 1 } };
            class Health
            {
                damage = 45;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 45;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_9x19_Pst: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_9x19_Pst";
        round = "FxRound_DF_9x19_Pst";
        spawnPileType = "My_DF_Weapons_Ammo_9x19_Pst";
        hit = 7;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 0.8;
        deflecting = 30;
        initSpeed = 350;
        typicalSpeed = 400;
        airFriction = -0.0022;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        damageBarrel = 166.66667;
        damageBarrelDestroyed = 166.66667;
        weight = 0.0084;
        impactBehaviour = 0;
        hitAnimation = 0;
        unconRefillModifier = 6;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.95, 1 } };
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
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_9x19_RIP: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_9x19_RIP";
        round = "FxRound_DF_9x19_RIP";
        spawnPileType = "My_DF_Weapons_Ammo_9x19_RIP";
        hit = 7;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 0.8;
        deflecting = 30;
        initSpeed = 340;
        typicalSpeed = 370;
        airFriction = -0.0025;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        damageBarrel = 166.66667;
        damageBarrelDestroyed = 166.66667;
        weight = 0.0085;
        impactBehaviour = 0;
        hitAnimation = 0;
        unconRefillModifier = 6;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            defaultDamageOverride[] = { { 0.95, 1 } };
            class Health
            {
                damage = 60;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 60;
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_9x39_BP: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_9x39_BP";
        round = "FxRound_DF_9x39_BP";
        spawnPileType = "My_DF_Weapons_Ammo_9x39_BP";
        hit = 11;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 0.9;
        deflecting = 20;
        typicalSpeed = 330;
        airFriction = -0.0015;
        initSpeed = 300;
        damageBarrel = 270;
        damageBarrelDestroyed = 270;
        weight = 0.015;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            class Health
            {
                damage = 90;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 90;
                damageOverride[] = { { 0.9, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_9x39_SP5: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_9x39_SP5";
        round = "FxRound_DF_9x39_SP5";
        spawnPileType = "My_DF_Weapons_Ammo_9x39_SP5";
        hit = 11;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 0.9;
        deflecting = 20;
        typicalSpeed = 300;
        airFriction = -0.0015;
        initSpeed = 280;
        damageBarrel = 250;
        damageBarrelDestroyed = 250;
        weight = 0.015;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            class Health
            {
                damage = 80;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 80;
                damageOverride[] = { { 0.9, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
    class Bullet_DF_9x39_SP6: Bullet_Base
    {
        scope = 1;
        casing = "FxCartridge_DF_9x39_SP6";
        round = "FxRound_DF_9x39_SP6";
        spawnPileType = "My_DF_Weapons_Ammo_9x39_SP6";
        hit = 11;
        indirectHit = 0;
        indirectHitRange = 0;
        tracerScale = 1;
        caliber = 0.9;
        deflecting = 20;
        typicalSpeed = 320;
        airFriction = -0.0015;
        initSpeed = 300;
        damageBarrel = 250;
        damageBarrelDestroyed = 250;
        weight = 0.015;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        impactBehaviour = 0;
        hitAnimation = 1;
        unconRefillModifier = 4;
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0;
            bleedThreshold = 1;
            class Health
            {
                damage = 85;
            };
            class Blood
            {
                damage = 100;
            };
            class Shock
            {
                damage = 85;
                damageOverride[] = { { 0.9, 1 } };
            };
        };
        class NoiseHit
        {
            strength = 10;
            type = "sound";
        };
    };
};