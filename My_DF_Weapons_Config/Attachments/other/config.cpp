class CfgPatches
{
	class My_DF_Weapons_Attachments_other_config
	{
		units[]={};
		weapons[]={};
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Supports",
			"My_DF_Weapons_Attachments_other"
		};
	};
};
class CfgVehicles
{
    class Inventory_Base;
    class My_DF_Weapons_Attachments_other_AKhandleCap: Inventory_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_AKhandleCap0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_AKhandleCap1";
        model = "\My_DF_Weapons_Attachments\other\AKhandleCap\AKhandleCap.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_ak_handlecap"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\AKhandleCap\data\AKhandleCap_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\AKhandleCap\data\AKhandleCap.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\AKhandleCap\data\AKhandleCap.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\AKhandleCap\data\AKhandleCap_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\AKhandleCap\data\AKhandleCap_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\AKhandleCap\data\AKhandleCap_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\AKhandleCap\data\AKhandleCap_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_Bison_mag_additional: Inventory_Base
    {
        scope = 0;
        displayName = "$STR_My_DF_Weapons_Attachments_other_Bison_mag_additional0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_Bison_mag_additional1";
        model = "\My_DF_Weapons_Attachments\other\Bison_mag_additional\Bison_mag_additional.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        inventorySlot[] = {
            "DF_mag_additional_Bison"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\Bison\data\mag_additional\Bison_mag_additional_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\Bison\data\mag_additional\Bison_mag_additional.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_SMG\Bison\data\mag_additional\Bison_mag_additional.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\Bison\data\mag_additional\Bison_mag_additional_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\Bison\data\mag_additional\Bison_mag_additional_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\Bison\data\mag_additional\Bison_mag_additional_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\Bison\data\mag_additional\Bison_mag_additional_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_Mount_Base;
    class My_DF_Weapons_Attachments_other_cantedMount: My_DF_Weapons_Attachments_other_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_cantedMount0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_cantedMount1";
        model = "\My_DF_Weapons_Attachments\other\cantedMount\cantedMount.p3d";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\cantedMount\data\cantedMount_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\cantedMount\data\cantedMount.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\cantedMount\data\cantedMount.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\cantedMount\data\cantedMount_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\cantedMount\data\cantedMount_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\cantedMount\data\cantedMount_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\cantedMount\data\cantedMount_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_other_Common: Inventory_Base
    {
        scope = 0;
        displayName = "$STR_My_DF_Weapons_Attachments_other_Common0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_Common1";
        model = "\My_DF_Weapons_Attachments\other\Common\Common.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        inventorySlot[] = {
            "DF_Common"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\Common\data\Common_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\Common\data\Common.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\Common\data\Common.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\Common\data\Common_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\Common\data\Common_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\Common\data\Common_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\Common\data\Common_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_Railcover_Base;
    class My_DF_Weapons_Attachments_other_cqbRailcover_Base: My_DF_Weapons_Attachments_other_Railcover_Base
    {
        scope = 0;
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\cqbRailcover\data\cqbRailcover_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\cqbRailcover\data\cqbRailcover.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\cqbRailcover\data\cqbRailcover.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\cqbRailcover\data\cqbRailcover_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\cqbRailcover\data\cqbRailcover_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\cqbRailcover\data\cqbRailcover_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\cqbRailcover\data\cqbRailcover_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_other_cqbRailcover1: My_DF_Weapons_Attachments_other_cqbRailcover_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_cqbRailcover10";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_cqbRailcover11";
        model = "\My_DF_Weapons_Attachments\other\cqbRailcover\cqbRailcover1.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_cqbRailcover2: My_DF_Weapons_Attachments_other_cqbRailcover_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_cqbRailcover20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_cqbRailcover21";
        model = "\My_DF_Weapons_Attachments\other\cqbRailcover\cqbRailcover2.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_cqbRailcover3: My_DF_Weapons_Attachments_other_cqbRailcover_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_cqbRailcover30";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_cqbRailcover31";
        model = "\My_DF_Weapons_Attachments\other\cqbRailcover\cqbRailcover3.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_cqbRailcover4: My_DF_Weapons_Attachments_other_cqbRailcover_Base
    {
        scope = 0;
        displayName = "$STR_My_DF_Weapons_Attachments_other_cqbRailcover40";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_cqbRailcover41";
        model = "\My_DF_Weapons_Attachments\other\cqbRailcover\cqbRailcover4.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_cqbRailcover5: My_DF_Weapons_Attachments_other_cqbRailcover_Base
    {
        scope = 0;
        displayName = "$STR_My_DF_Weapons_Attachments_other_cqbRailcover50";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_cqbRailcover51";
        model = "\My_DF_Weapons_Attachments\other\cqbRailcover\cqbRailcover5.p3d";
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_DDRailcover_Base: My_DF_Weapons_Attachments_other_Railcover_Base
    {
        scope = 0;
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\DDRailcover\data\DDRailcover_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\DDRailcover\data\DDRailcover.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\DDRailcover\data\DDRailcover.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\DDRailcover\data\DDRailcover_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\DDRailcover\data\DDRailcover_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\DDRailcover\data\DDRailcover_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\DDRailcover\data\DDRailcover_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_other_DDRailcover1: My_DF_Weapons_Attachments_other_DDRailcover_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_DDRailcover10";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_DDRailcover11";
        model = "\My_DF_Weapons_Attachments\other\DDRailcover\DDRailcover1.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_DDRailcover2: My_DF_Weapons_Attachments_other_DDRailcover_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_DDRailcover20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_DDRailcover21";
        model = "\My_DF_Weapons_Attachments\other\DDRailcover\DDRailcover2.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_DDRailcover3: My_DF_Weapons_Attachments_other_DDRailcover_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_DDRailcover30";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_DDRailcover31";
        model = "\My_DF_Weapons_Attachments\other\DDRailcover\DDRailcover3.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_DDRailcover4: My_DF_Weapons_Attachments_other_DDRailcover_Base
    {
        scope = 0;
        displayName = "$STR_My_DF_Weapons_Attachments_other_DDRailcover40";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_DDRailcover41";
        model = "\My_DF_Weapons_Attachments\other\DDRailcover\DDRailcover4.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_DDRailcover5: My_DF_Weapons_Attachments_other_DDRailcover_Base
    {
        scope = 0;
        displayName = "$STR_My_DF_Weapons_Attachments_other_DDRailcover50";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_DDRailcover51";
        model = "\My_DF_Weapons_Attachments\other\DDRailcover\DDRailcover5.p3d";
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_flashkill: Inventory_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_flashkill0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_flashkill1";
        model = "\My_DF_Weapons_Attachments\other\flashkill\flashkill.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 1, 1, 1 };
        inventorySlot[] = {
            "DF_flashkill"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\flashkill\data\flashkill_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\flashkill\data\flashkill.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\flashkill\data\flashkill.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\flashkill\data\flashkill_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\flashkill\data\flashkill_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\flashkill\data\flashkill_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\flashkill\data\flashkill_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_G3_Mount: My_DF_Weapons_Attachments_other_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_G3_Mount0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_G3_Mount1";
        model = "\My_DF_Weapons_Attachments\other\G3_Mount\G3_Mount.p3d";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        inventorySlot[] = {
            "DF_mount_G3"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\G3_Mount\data\G3_Mount_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\G3_Mount\data\G3_Mount.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\G3_Mount\data\G3_Mount.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\G3_Mount\data\G3_Mount_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\G3_Mount\data\G3_Mount_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\G3_Mount\data\G3_Mount_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\G3_Mount\data\G3_Mount_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_other_Hammer_M1911Tac: Inventory_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_Hammer_M1911Tac0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_Hammer_M1911Tac1";
        model = "\My_DF_Weapons_Attachments\other\Hammer_M1911Tac\Hammer_M1911Tac.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 1, 1, 1 };
        inventorySlot[] = {
            "DF_hammer_M1911"
        };
        hiddenSelections[] = {
            "camo"
        };
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
                                "DMy_DF_Weapons_Attachments\barrel\M1911Tac\data\M1911Tac_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_hydra: My_DF_Weapons_Attachments_other_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_hydra0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_hydra1";
        model = "\My_DF_Weapons_Attachments\other\hydra\hydra.p3d";
        itemSize[] = { 1, 2 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        attachments[] = {
            "DF_frog_up",
            "DF_mount"
        };
        inventorySlot[] = {
            "DF_mount"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\hydra\data\hydra_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\hydra\data\hydra.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\hydra\data\hydra.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\hydra\data\hydra_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\hydra\data\hydra_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\hydra\data\hydra_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\hydra\data\hydra_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_KACRailcover_Base: My_DF_Weapons_Attachments_other_Railcover_Base
    {
        scope = 0;
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\KACRailcover\data\KACRailcover_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\KACRailcover\data\KACRailcover.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\KACRailcover\data\KACRailcover.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\KACRailcover\data\KACRailcover_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\KACRailcover\data\KACRailcover_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\KACRailcover\data\KACRailcover_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\KACRailcover\data\KACRailcover_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_other_KACRailcover1: My_DF_Weapons_Attachments_other_KACRailcover_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_KACRailcover10";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_KACRailcover11";
        model = "\My_DF_Weapons_Attachments\other\KACRailcover\KACRailcover1.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_KACRailcover2: My_DF_Weapons_Attachments_other_KACRailcover_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_KACRailcover20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_KACRailcover21";
        model = "\My_DF_Weapons_Attachments\other\KACRailcover\KACRailcover2.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_KACRailcover3: My_DF_Weapons_Attachments_other_KACRailcover_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_KACRailcover30";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_KACRailcover31";
        model = "\My_DF_Weapons_Attachments\other\KACRailcover\KACRailcover3.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_KACRailcover4: My_DF_Weapons_Attachments_other_KACRailcover_Base
    {
        scope = 0;
        displayName = "$STR_My_DF_Weapons_Attachments_other_KACRailcover40";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_KACRailcover41";
        model = "\My_DF_Weapons_Attachments\other\KACRailcover\KACRailcover4.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_KACRailcover5: My_DF_Weapons_Attachments_other_KACRailcover_Base
    {
        scope = 0;
        displayName = "$STR_My_DF_Weapons_Attachments_other_KACRailcover50";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_KACRailcover51";
        model = "\My_DF_Weapons_Attachments\other\KACRailcover\KACRailcover5.p3d";
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_M14_Mount: My_DF_Weapons_Attachments_other_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_M14_Mount0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_M14_Mount1";
        model = "\My_DF_Weapons_Attachments\other\M14_Mount\M14_Mount.p3d";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        inventorySlot[] = {
            "DF_mount_M14"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\M14\data\M14_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\M14\data\M14.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_DMR\M14\data\M14.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\M14\data\M14_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\M14\data\M14_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\M14\data\M14_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\M14\data\M14_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_other_M1911Mount: My_DF_Weapons_Attachments_other_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_M1911Mount0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_M1911Mount1";
        model = "\My_DF_Weapons_Attachments\other\M1911Mount\M1911Mount.p3d";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        inventorySlot[] = {
            "DF_mount_M1911"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\M1911Mount\data\M1911Mount_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\M1911Mount\data\M1911Mount.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\M1911Mount\data\M1911Mount.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\M1911Mount\data\M1911Mount_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\M1911Mount\data\M1911Mount_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\M1911Mount\data\M1911Mount_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\M1911Mount\data\M1911Mount_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_other_M700_nylon_cheekpad: My_DF_Weapons_Attachments_other_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_M700_nylon_cheekpad0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_M700_nylon_cheekpad1";
        model = "\My_DF_Weapons_Attachments\other\M700_nylon_cheekpad\M700_nylon_cheekpad.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 1, 1, 1 };
        inventorySlot[] = {
            "DF_cheekpad"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\M700_nylon\data\M700_nylon_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\M700_nylon\data\M700_nylon.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\M700_nylon\data\M700_nylon.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\M700_nylon\data\M700_nylon_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\M700_nylon\data\M700_nylon_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\M700_nylon\data\M700_nylon_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\M700_nylon\data\M700_nylon_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_Marlin_HeavyTrigger: Inventory_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_Marlin_HeavyTrigger0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_Marlin_HeavyTrigger1";
        model = "\My_DF_Weapons_Attachments\other\Marlin_HeavyTrigger\Marlin_HeavyTrigger.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 1, 1, 1 };
        inventorySlot[] = {
            "DF_trigger_Marlin"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\Marlin_HeavyTrigger\data\Marlin_HeavyTrigger_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\Marlin_HeavyTrigger\data\Marlin_HeavyTrigger.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\Marlin_HeavyTrigger\data\Marlin_HeavyTrigger.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\Marlin_HeavyTrigger\data\Marlin_HeavyTrigger_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\Marlin_HeavyTrigger\data\Marlin_HeavyTrigger_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\Marlin_HeavyTrigger\data\Marlin_HeavyTrigger_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DMy_DF_Weapons_Attachments\other\Marlin_HeavyTrigger\data\Marlin_HeavyTrigger_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_Marlin_LightTrigger: Inventory_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_Marlin_LightTrigger0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_Marlin_LightTrigger1";
        model = "\My_DF_Weapons_Attachments\other\Marlin_LightTrigger\Marlin_LightTrigger.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_trigger_Marlin"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\Marlin_LightTrigger\data\Marlin_LightTrigger_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\Marlin_LightTrigger\data\Marlin_LightTrigger.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\Marlin_LightTrigger\data\Marlin_LightTrigger.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\Marlin_LightTrigger\data\Marlin_LightTrigger_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\Marlin_LightTrigger\data\Marlin_LightTrigger_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\Marlin_LightTrigger\data\Marlin_LightTrigger_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DMy_DF_Weapons_Attachments\other\Marlin_LightTrigger\data\Marlin_LightTrigger_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_metalRailcover_Base: My_DF_Weapons_Attachments_other_Railcover_Base
    {
        scope = 0;
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\metalRailcover\data\metalRailcover_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\metalRailcover\data\metalRailcover.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\metalRailcover\data\metalRailcover.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\metalRailcover\data\metalRailcover_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\metalRailcover\data\metalRailcover_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\metalRailcover\data\metalRailcover_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\metalRailcover\data\metalRailcover_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_other_metalRailcover1: My_DF_Weapons_Attachments_other_metalRailcover_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_metalRailcover10";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_metalRailcover11";
        model = "\My_DF_Weapons_Attachments\other\metalRailcover\metalRailcover1.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_metalRailcover2: My_DF_Weapons_Attachments_other_metalRailcover_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_metalRailcover20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_metalRailcover21";
        model = "\My_DF_Weapons_Attachments\other\metalRailcover\metalRailcover2.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_metalRailcover3: My_DF_Weapons_Attachments_other_metalRailcover_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_metalRailcover30";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_metalRailcover31";
        model = "\My_DF_Weapons_Attachments\other\metalRailcover\metalRailcover3.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_metalRailcover4: My_DF_Weapons_Attachments_other_metalRailcover_Base
    {
        scope = 0;
        displayName = "$STR_My_DF_Weapons_Attachments_other_metalRailcover40";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_metalRailcover41";
        model = "\My_DF_Weapons_Attachments\other\metalRailcover\metalRailcover4.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_metalRailcover5: My_DF_Weapons_Attachments_other_metalRailcover_Base
    {
        scope = 0;
        displayName = "$STR_My_DF_Weapons_Attachments_other_metalRailcover50";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_metalRailcover51";
        model = "\My_DF_Weapons_Attachments\other\metalRailcover\metalRailcover5.p3d";
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_PKM_Handle: Inventory_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_PKM_Handle0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_PKM_Handle1";
        model = "\My_DF_Weapons_Attachments\other\PKM_Handle\PKM_Handle.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_Handle_PKM"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\PKM_Handle\data\PKM_Handle_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\PKM_Handle\data\PKM_Handle.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\PKM_Handle\data\PKM_Handle.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\PKM_Handle\data\PKM_Handle_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\PKM_Handle\data\PKM_Handle_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\PKM_Handle\data\PKM_Handle_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\PKM_Handle\data\PKM_Handle_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_PTMount: My_DF_Weapons_Attachments_other_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_PTMount0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_PTMount1";
        model = "\My_DF_Weapons_Attachments\other\PTMount\PTMount.p3d";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        inventorySlot[] = {
            "DF_mount_Pistol"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\PTMount\data\PTMount_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\PTMount\data\PTMount.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\PTMount\data\PTMount.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\PTMount\data\PTMount_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\PTMount\data\PTMount_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\PTMount\data\PTMount_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\PTMount\data\PTMount_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_other_QBZ191highPiston: Inventory_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_QBZ191highPiston0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_QBZ191highPiston1";
        model = "\My_DF_Weapons_Attachments\other\QBZ191highPiston\QBZ191highPiston.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_Piston_QBZ191"
        };
        hiddenSelections[] = {
            "camo"
        };
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
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_QBZ191lowPiston: Inventory_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_QBZ191lowPiston0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_QBZ191lowPiston1";
        model = "\My_DF_Weapons_Attachments\other\QBZ191lowPiston\QBZ191lowPiston.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 1, 1, 1 };
        inventorySlot[] = {
            "DF_Piston_QBZ191"
        };
        hiddenSelections[] = {
            "camo"
        };
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
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_QBZ95LongBowHandle: My_DF_Weapons_Attachments_other_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_QBZ95LongBowHandle0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_QBZ95LongBowHandle1";
        model = "\My_DF_Weapons_Attachments\other\QBZ95LongBowHandle\QBZ95LongBowHandle.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        inventorySlot[] = {
            "DF_Handle_QBZ95"
        };
        attachments[] = {
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\QBZ95LongBowHandle\data\QBZ95LongBowHandle_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\QBZ95LongBowHandle\data\QBZ95LongBowHandle.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\QBZ95LongBowHandle\data\QBZ95LongBowHandle.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\QBZ95LongBowHandle\data\QBZ95LongBowHandle_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\QBZ95LongBowHandle\data\QBZ95LongBowHandle_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\QBZ95LongBowHandle\data\QBZ95LongBowHandle_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\QBZ95LongBowHandle\data\QBZ95LongBowHandle_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_other_QBZ95_Cheekpad: My_DF_Weapons_Attachments_other_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_QBZ95_Cheekpad0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_QBZ95_Cheekpad1";
        model = "\My_DF_Weapons_Attachments\other\QBZ95_Cheekpad\QBZ95_Cheekpad.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_cheekpad_QBZ95"
        };
        attachments[] = {};
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\QBZ95_Cheekpad\data\QBZ95_Cheekpad_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\QBZ95_Cheekpad\data\QBZ95_Cheekpad.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\QBZ95_Cheekpad\data\QBZ95_Cheekpad.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\QBZ95_Cheekpad\data\QBZ95_Cheekpad_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\QBZ95_Cheekpad\data\QBZ95_Cheekpad_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\QBZ95_Cheekpad\data\QBZ95_Cheekpad_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\QBZ95_Cheekpad\data\QBZ95_Cheekpad_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_QCQ171Heavy_Bolt: Inventory_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_QCQ171Heavy_Bolt0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_QCQ171Heavy_Bolt1";
        model = "\My_DF_Weapons_Attachments\other\QCQ171Heavy_Bolt\QCQ171Heavy_Bolt.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_Bolt_QCQ171"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\QCQ171Heavy_Bolt\data\QCQ171Heavy_Bolt_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\QCQ171Heavy_Bolt\data\QCQ171Heavy_Bolt.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\QCQ171Heavy_Bolt\data\QCQ171Heavy_Bolt.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\QCQ171Heavy_Bolt\data\QCQ171Heavy_Bolt_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\QCQ171Heavy_Bolt\data\QCQ171Heavy_Bolt_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\QCQ171Heavy_Bolt\data\QCQ171Heavy_Bolt_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\QCQ171Heavy_Bolt\data\QCQ171Heavy_Bolt_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_QCQ171Light_Bolt: Inventory_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_QCQ171Light_Bolt0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_QCQ171Light_Bolt1";
        model = "\My_DF_Weapons_Attachments\other\QCQ171Light_Bolt\QCQ171Light_Bolt.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 1, 1, 1 };
        inventorySlot[] = {
            "DF_Bolt_QCQ171"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\QCQ171Light_Bolt\data\QCQ171Light_Bolt_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\QCQ171Light_Bolt\data\QCQ171Light_Bolt.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\QCQ171Light_Bolt\data\QCQ171Light_Bolt.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\QCQ171Light_Bolt\data\QCQ171Light_Bolt_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\QCQ171Light_Bolt\data\QCQ171Light_Bolt_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\QCQ171Light_Bolt\data\QCQ171Light_Bolt_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\QCQ171Light_Bolt\data\QCQ171Light_Bolt_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_QJB201highPiston: Inventory_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_QJB201highPiston0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_QJB201highPiston1";
        model = "\My_DF_Weapons_Attachments\other\QJB201highPiston\QJB201highPiston.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 1, 1, 1 };
        inventorySlot[] = {
            "DF_Piston_QJB201"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_LMG\QJB201\data\Piston\QJB201_Piston_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_LMG\QJB201\data\Piston\QJB201_Piston.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_LMG\QJB201\data\Piston\QJB201_Piston.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_LMG\QJB201\data\Piston\QJB201_Piston_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_LMG\QJB201\data\Piston\QJB201_Piston_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_LMG\QJB201\data\Piston\QJB201_Piston_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_LMG\QJB201\data\Piston\QJB201_Piston_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_QJB201lowPiston: Inventory_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_QJB201lowPiston0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_QJB201lowPiston1";
        model = "\My_DF_Weapons_Attachments\other\QJB201lowPiston\QJB201lowPiston.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_Piston_QJB201"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_LMG\QJB201\data\Piston\QJB201_Piston_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_LMG\QJB201\data\Piston\QJB201_Piston.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_LMG\QJB201\data\Piston\QJB201_Piston.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_LMG\QJB201\data\Piston\QJB201_Piston_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_LMG\QJB201\data\Piston\QJB201_Piston_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_LMG\QJB201\data\Piston\QJB201_Piston_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_LMG\QJB201\data\Piston\QJB201_Piston_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_quickdraw_Base: Inventory_Base
    {
        scope = 0;
        model = "\My_DF_Weapons_Attachments\other\quickdraw\quickdraw.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.98, 0.98, 0.98 };
        swayModifier[] = { 0.98, 0.98, 0.98 };
        inventorySlot[] = {
            "DF_quickdraw"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\quickdraw\data\quickdraw_black_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\quickdraw\data\quickdraw.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\quickdraw\data\quickdraw.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\quickdraw\data\quickdraw_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\quickdraw\data\quickdraw_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\quickdraw\data\quickdraw_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\quickdraw\data\quickdraw_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_quickdraw_Black: My_DF_Weapons_Attachments_other_quickdraw_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_quickdraw_Black0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_quickdraw_Black1";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\quickdraw\data\quickdraw_black_co.paa"
        };
    };
    class My_DF_Weapons_Attachments_other_quickdraw_Green: My_DF_Weapons_Attachments_other_quickdraw_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_quickdraw_Green0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_quickdraw_Green1";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\quickdraw\data\quickdraw_green_co.paa"
        };
    };
    class My_DF_Weapons_Attachments_other_quickdraw_Tan: My_DF_Weapons_Attachments_other_quickdraw_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_quickdraw_Tan0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_quickdraw_Tan1";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\quickdraw\data\quickdraw_tan_co.paa"
        };
    };
    class My_DF_Weapons_Attachments_other_R93HeatShield: Inventory_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_R93HeatShield0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_R93HeatShield1";
        model = "\My_DF_Weapons_Attachments\other\R93HeatShield\R93HeatShield.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_R93HeatShield"
        };
        hiddenSelections[] = {
            "camo"
        };
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
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_riser: My_DF_Weapons_Attachments_other_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_riser0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_riser1";
        model = "\My_DF_Weapons_Attachments\other\riser\riser.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        inventorySlot[] = {
            "DF_mount"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\riser\data\riser_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\riser\data\riser.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\riser\data\riser.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\riser\data\riser_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\riser\data\riser_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\riser\data\riser_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\riser\data\riser_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_S12K_Mount: My_DF_Weapons_Attachments_other_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_S12K_Mount0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_S12K_Mount1";
        model = "\My_DF_Weapons_Attachments\other\S12K_Mount\S12K_Mount.p3d";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        inventorySlot[] = {
            "DF_mount_S12K"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\S12K_Mount\data\S12K_Mount_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\S12K_Mount\data\S12K_Mount.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\S12K_Mount\data\S12K_Mount.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\S12K_Mount\data\S12K_Mount_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\S12K_Mount\data\S12K_Mount_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\S12K_Mount\data\S12K_Mount_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\S12K_Mount\data\S12K_Mount_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_other_SKS_Mount: My_DF_Weapons_Attachments_other_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_SKS_Mount0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_SKS_Mount1";
        model = "\My_DF_Weapons_Attachments\other\SKS_Mount\SKS_Mount.p3d";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        inventorySlot[] = {
            "DF_mount_SKS"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\SKS_Mount\data\SKS_Mount_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\SKS_Mount\data\SKS_Mount.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\SKS_Mount\data\SKS_Mount.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\SKS_Mount\data\SKS_Mount_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\SKS_Mount\data\SKS_Mount_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\SKS_Mount\data\SKS_Mount_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\SKS_Mount\data\SKS_Mount_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_other_StickLoaderLifter: Inventory_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_StickLoaderLifter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_StickLoaderLifter1";
        model = "\My_DF_Weapons_Attachments\other\StickLoaderLifter\StickLoaderLifter.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 1, 1, 1 };
        inventorySlot[] = {
            "DF_StickLoaderLifter"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\StickLoaderLifter\data\StickLoaderLifter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\StickLoaderLifter\data\StickLoaderLifter.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\StickLoaderLifter\data\StickLoaderLifter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\StickLoaderLifter\data\StickLoaderLifter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\StickLoaderLifter\data\StickLoaderLifter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\StickLoaderLifter\data\StickLoaderLifter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\StickLoaderLifter\data\StickLoaderLifter_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_SVD_Mount: My_DF_Weapons_Attachments_other_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_SVD_Mount0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_SVD_Mount1";
        model = "\My_DF_Weapons_Attachments\other\SVD_Mount\SVD_Mount.p3d";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        inventorySlot[] = {
            "DF_mount_SVD"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\SVD_Mount\data\SVD_Mount_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\SVD_Mount\data\SVD_Mount.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\SVD_Mount\data\SVD_Mount.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\SVD_Mount\data\SVD_Mount_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\SVD_Mount\data\SVD_Mount_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\SVD_Mount\data\SVD_Mount_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\SVD_Mount\data\SVD_Mount_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_other_Trigger_725Burst: Inventory_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_Trigger_725Burst0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_Trigger_725Burst1";
        model = "\My_DF_Weapons_Attachments\other\Trigger_725Burst\Trigger_725Burst.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 1, 1, 1 };
        inventorySlot[] = {
            "DF_trigger_Citori725"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\Trigger_725Burst\data\Trigger_725Burst_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\Trigger_725Burst\data\Trigger_725Burst.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\Trigger_725Burst\data\Trigger_725Burst.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\Trigger_725Burst\data\Trigger_725Burst_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\Trigger_725Burst\data\Trigger_725Burst_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\Trigger_725Burst\data\Trigger_725Burst_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DMy_DF_Weapons_Attachments\other\Trigger_725Burst\data\Trigger_725Burst_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_Trigger_725Twostage: Inventory_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_Trigger_725Twostage0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_Trigger_725Twostage1";
        model = "\My_DF_Weapons_Attachments\other\Trigger_725Twostage\Trigger_725Twostage.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_trigger_Citori725"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\Trigger_725Twostage\data\Trigger_725Twostage_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\Trigger_725Twostage\data\Trigger_725Twostage.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\Trigger_725Twostage\data\Trigger_725Twostage.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\Trigger_725Twostage\data\Trigger_725Twostage_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\Trigger_725Twostage\data\Trigger_725Twostage_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\Trigger_725Twostage\data\Trigger_725Twostage_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DMy_DF_Weapons_Attachments\other\Trigger_725Twostage\data\Trigger_725Twostage_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_Trigger_M1911Tac: Inventory_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_Trigger_M1911Tac0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_Trigger_M1911Tac1";
        model = "\My_DF_Weapons_Attachments\other\Trigger_M1911Tac\Trigger_M1911Tac.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_trigger_M1911"
        };
        hiddenSelections[] = {
            "camo"
        };
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
                                "DMy_DF_Weapons_Attachments\barrel\M1911Tac\data\M1911Tac_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_Trigger_PSG: Inventory_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_Trigger_PSG0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_Trigger_PSG1";
        model = "\My_DF_Weapons_Attachments\other\Trigger_PSG\Trigger_PSG.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 1, 1, 1 };
        inventorySlot[] = {
            "DF_trigger_PSG"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\PSG\data\PSG_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\PSG\data\PSG.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_DMR\PSG\data\PSG.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\PSG\data\PSG_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\PSG\data\PSG_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\PSG\data\PSG_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DMy_DF_Weapons_DMR\PSG\data\PSG_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_type2Railcover_Base: My_DF_Weapons_Attachments_other_Railcover_Base
    {
        scope = 0;
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\type2Railcover\data\type2Railcover_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\type2Railcover\data\type2Railcover.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\type2Railcover\data\type2Railcover.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\type2Railcover\data\type2Railcover_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\type2Railcover\data\type2Railcover_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\type2Railcover\data\type2Railcover_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\type2Railcover\data\type2Railcover_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_other_type2Railcover1: My_DF_Weapons_Attachments_other_type2Railcover_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_type2Railcover10";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_type2Railcover11";
        model = "\My_DF_Weapons_Attachments\other\type2Railcover\type2Railcover1.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_type2Railcover2: My_DF_Weapons_Attachments_other_type2Railcover_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_type2Railcover20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_type2Railcover21";
        model = "\My_DF_Weapons_Attachments\other\type2Railcover\type2Railcover2.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_type2Railcover3: My_DF_Weapons_Attachments_other_type2Railcover_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_type2Railcover30";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_type2Railcover31";
        model = "\My_DF_Weapons_Attachments\other\type2Railcover\type2Railcover3.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_type2Railcover4: My_DF_Weapons_Attachments_other_type2Railcover_Base
    {
        scope = 0;
        displayName = "$STR_My_DF_Weapons_Attachments_other_type2Railcover40";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_type2Railcover41";
        model = "\My_DF_Weapons_Attachments\other\type2Railcover\type2Railcover4.p3d";
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_type2Railcover5: My_DF_Weapons_Attachments_other_type2Railcover_Base
    {
        scope = 0;
        displayName = "$STR_My_DF_Weapons_Attachments_other_type2Railcover50";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_type2Railcover51";
        model = "\My_DF_Weapons_Attachments\other\type2Railcover\type2Railcover5.p3d";
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.99, 0.99, 0.99 };
        swayModifier[] = { 0.99, 0.99, 0.99 };
    };
    class My_DF_Weapons_Attachments_other_Universal_Cheekpad: My_DF_Weapons_Attachments_other_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_Universal_Cheekpad0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_Universal_Cheekpad1";
        model = "\My_DF_Weapons_Attachments\other\Universal_Cheekpad\Universal_Cheekpad.p3d";
        itemSize[] = { 1, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        inventorySlot[] = {
            "DF_cheekpad"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\Universal_Cheekpad\data\Universal_Cheekpad_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\Universal_Cheekpad\data\Universal_Cheekpad.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\Universal_Cheekpad\data\Universal_Cheekpad.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\Universal_Cheekpad\data\Universal_Cheekpad_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\Universal_Cheekpad\data\Universal_Cheekpad_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\Universal_Cheekpad\data\Universal_Cheekpad_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\Universal_Cheekpad\data\Universal_Cheekpad_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_other_VSS_Mount: My_DF_Weapons_Attachments_other_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_other_VSS_Mount0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_other_VSS_Mount1";
        model = "\My_DF_Weapons_Attachments\other\VSS_Mount\VSS_Mount.p3d";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        inventorySlot[] = {
            "DF_mount_SR3M"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\other\VSS_Mount\data\VSS_Mount_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\other\VSS_Mount\data\VSS_Mount.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\other\VSS_Mount\data\VSS_Mount.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\other\VSS_Mount\data\VSS_Mount_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\other\VSS_Mount\data\VSS_Mount_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\other\VSS_Mount\data\VSS_Mount_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\other\VSS_Mount\data\VSS_Mount_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
	class My_DF_Weapons_Attachments_other_MEO_Mount: My_DF_Weapons_Attachments_other_Mount_Base
	{
		scope=2;
		displayName="$STR_My_DF_Weapons_Attachments_other_MEO_Mount0";
		descriptionShort="$STR_My_DF_Weapons_Attachments_other_MEO_Mount1";
		model="\My_DF_Weapons_Attachments\other\MEO_Mount\MEO_Mount.p3d";
		itemSize[]={1,1};
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		inventorySlot[]=
		{
			"DF_mount"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"My_DF_Weapons_Attachments\other\MEO_Mount\data\MEO_Mount_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"My_DF_Weapons_Attachments\other\MEO_Mount\data\MEO_Mount.rvmat"
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
								"My_DF_Weapons_Attachments\other\MEO_Mount\data\MEO_Mount.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"My_DF_Weapons_Attachments\other\MEO_Mount\data\MEO_Mount_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"My_DF_Weapons_Attachments\other\MEO_Mount\data\MEO_Mount_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"My_DF_Weapons_Attachments\other\MEO_Mount\data\MEO_Mount_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"My_DF_Weapons_Attachments\other\MEO_Mount\data\MEO_Mount_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="plastic";
	};
};