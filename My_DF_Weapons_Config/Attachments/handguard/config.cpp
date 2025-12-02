class CfgPatches
{
	class My_DF_Weapons_Attachments_handguard_config
	{
		units[]={};
		weapons[]={};
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Supports",
			"My_DF_Weapons_Attachments_optic",
			"My_DF_Weapons_Attachments_muzzle",
			"My_DF_Weapons_Attachments_handguard"
		};
	};
};
class CfgVehicles
{
    class My_DF_Weapons_Attachments_handguard_Base;
    class My_DF_Weapons_Attachments_handguard_AK100polymer: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AK100polymer0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AK100polymer1";
        model = "\My_DF_Weapons_Attachments\handguard\AK100polymer\AK100polymer.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 300;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_right"
        };
        inventorySlot[] = {
            "DF_handguard_AKM"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\AK100polymer\data\AK100polymer_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\AK100polymer\data\AK100polymer.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK100polymer\data\AK100polymer.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK100polymer\data\AK100polymer_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK100polymer\data\AK100polymer_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK100polymer\data\AK100polymer_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK100polymer\data\AK100polymer_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_AK12_mlok: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AK12_mlok0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AK12_mlok1";
        model = "\My_DF_Weapons_Attachments\handguard\AK12\mlok\AK12_handguard_mlok.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_up",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up2",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_AK12"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.75, 0.75, 0.75 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\AK12\data\barrel\AK12_handguard_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\AK12\mlok\data\AK12_handguard_mlok_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\AK12\data\barrel\AK12_handguard_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\AK12\mlok\data\AK12_handguard_mlok.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK12\data\barrel\AK12_handguard_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK12\mlok\data\AK12_handguard_mlok.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK12\data\barrel\AK12_handguard_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK12\mlok\data\AK12_handguard_mlok_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK12\data\barrel\AK12_handguard_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK12\mlok\data\AK12_handguard_mlok_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK12\data\barrel\AK12_handguard_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK12\mlok\data\AK12_handguard_mlok_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK12\data\barrel\AK12_handguard_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK12\mlok\data\AK12_handguard_mlok_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_AK12_mlok_extend: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AK12_mlok_extend0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AK12_mlok_extend1";
        model = "\My_DF_Weapons_Attachments\handguard\AK12\mlok_extend\AK12_handguard_mlok_extend.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_up",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up2",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_bipod_AK12"
        };
        inventorySlot[] = {
            "DF_handguard_AK12"
        };
        itemSize[] = { 4, 1 };
        recoilModifier[] = { 0.75, 0.75, 0.75 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\AK12\data\barrel\AK12_handguard_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\AK12\mlok_extend\data\AK12_handguard_mlok_extend_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\AK12\data\barrel\AK12_handguard_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\AK12\mlok_extend\data\AK12_handguard_mlok_extend.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK12\data\barrel\AK12_handguard_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK12\mlok_extend\data\AK12_handguard_mlok_extend.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK12\data\barrel\AK12_handguard_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK12\mlok_extend\data\AK12_handguard_mlok_extend_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK12\data\barrel\AK12_handguard_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK12\mlok_extend\data\AK12_handguard_mlok_extend_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK12\data\barrel\AK12_handguard_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK12\mlok_extend\data\AK12_handguard_mlok_extend_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK12\data\barrel\AK12_handguard_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK12\mlok_extend\data\AK12_handguard_mlok_extend_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        isMeleeWeapon = 1;
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeLightBlunt";
                range = 1;
            };
            class Heavy
            {
                ammo = "MeleeLightBlunt_Heavy";
                range = 1;
            };
            class Sprint
            {
                ammo = "MeleeLightBlunt_Heavy";
                range = 2.8;
            };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_handguard_AKS74U_handguard: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AKS74U_handguard0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AKS74U_handguard1";
        model = "\My_DF_Weapons_Attachments\handguard\AKS74U_handguard\AKS74U_handguard.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 300;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right"
        };
        inventorySlot[] = {
            "DF_handguard_AKS74U"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\AKS74U_handguard\data\AKS74U_handguard_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\AKS74U_handguard\data\AKS74U_handguard.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\AKS74U_handguard\data\AKS74U_handguard.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\AKS74U_handguard\data\AKS74U_handguard_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\AKS74U_handguard\data\AKS74U_handguard_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\AKS74U_handguard\data\AKS74U_handguard_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\AKS74U_handguard\data\AKS74U_handguard_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_AKS74U_handguard_up: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AKS74U_handguard_up0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AKS74U_handguard_up1";
        model = "\My_DF_Weapons_Attachments\handguard\AKS74U_handguard\AKS74U_handguard_up.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 300;
        attachments[] = {
            "DF_frog_up"
        };
        inventorySlot[] = {
            "DF_handguard_up_AKS74U"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\AKS74U_handguard\data\AKS74U_handguard_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\AKS74U_handguard\data\AKS74U_handguard.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\AKS74U_handguard\data\AKS74U_handguard.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\AKS74U_handguard\data\AKS74U_handguard_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\AKS74U_handguard\data\AKS74U_handguard_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\AKS74U_handguard\data\AKS74U_handguard_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\AKS74U_handguard\data\AKS74U_handguard_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_AK_AYA_lance_S12K: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AK_AYA_lance_S12K0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AK_AYA_lance_S12K1";
        model = "\My_DF_Weapons_Attachments\handguard\AK_AYA_lance\AK_AYA_lance.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
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
            "DF_handguard_S12K"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.75, 0.75, 0.75 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\S12K\data\S12K_co.paa",
            "My_DF_Weapons_Attachments\handguard\AK_AYA_lance\data\AK_AYA_lance_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\S12K\data\S12K.rvmat",
            "My_DF_Weapons_Attachments\handguard\AK_AYA_lance\data\AK_AYA_lance.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\S12K\data\S12K.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK_AYA_lance\data\AK_AYA_lance.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\S12K\data\S12K_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK_AYA_lance\data\AK_AYA_lance_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\S12K\data\S12K_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK_AYA_lance\data\AK_AYA_lance_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\S12K\data\S12K_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK_AYA_lance\data\AK_AYA_lance_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\S12K\data\S12K_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK_AYA_lance\data\AK_AYA_lance_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_AK_AYA_lance_nobarrel: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AK_AYA_lance_nobarrel0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AK_AYA_lance_nobarrel1";
        model = "\My_DF_Weapons_Attachments\handguard\AK_AYA_lance\AK_AYA_lance_nobarrel.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
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
            "DF_handguard_AKM"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\AK_AYA_lance\data\AK_AYA_lance_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\AK_AYA_lance\data\AK_AYA_lance.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_AYA_lance\data\AK_AYA_lance.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_AYA_lance\data\AK_AYA_lance_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_AYA_lance\data\AK_AYA_lance_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_AYA_lance\data\AK_AYA_lance_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_AYA_lance\data\AK_AYA_lance_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_AK_CAA_RS47_S12K: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AK_CAA_RS47_S12K0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AK_CAA_RS47_S12K1";
        model = "\My_DF_Weapons_Attachments\handguard\AK_CAA_RS47\AK_CAA_RS47.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right"
        };
        inventorySlot[] = {
            "DF_handguard_S12K"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\S12K\data\S12K_co.paa",
            "My_DF_Weapons_Attachments\handguard\AK_CAA_RS47\data\AK_CAA_RS47_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\S12K\data\S12K.rvmat",
            "My_DF_Weapons_Attachments\handguard\AK_CAA_RS47\data\AK_CAA_RS47.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\S12K\data\S12K.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK_CAA_RS47\data\AK_CAA_RS47.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\S12K\data\S12K_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK_CAA_RS47\data\AK_CAA_RS47_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\S12K\data\S12K_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK_CAA_RS47\data\AK_CAA_RS47_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\S12K\data\S12K_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK_CAA_RS47\data\AK_CAA_RS47_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\S12K\data\S12K_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK_CAA_RS47\data\AK_CAA_RS47_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_AK_CAA_RS47_PP19: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AK_CAA_RS47_PP190";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AK_CAA_RS47_PP191";
        model = "\My_DF_Weapons_Attachments\handguard\AK_CAA_RS47\AK_CAA_RS47_PP19.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right"
        };
        inventorySlot[] = {
            "DF_handguard_PP19",
            "DF_handguard_AKM"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\AK_CAA_RS47\data\AK_CAA_RS47_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\AK_CAA_RS47\data\AK_CAA_RS47.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_CAA_RS47\data\AK_CAA_RS47.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_CAA_RS47\data\AK_CAA_RS47_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_CAA_RS47\data\AK_CAA_RS47_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_CAA_RS47\data\AK_CAA_RS47_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_CAA_RS47\data\AK_CAA_RS47_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_AK_competition_S12K: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AK_competition_S12K0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AK_competition_S12K1";
        model = "\My_DF_Weapons_Attachments\handguard\AK_competition\AK_competition.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_left2",
            "DF_frog_right2"
        };
        inventorySlot[] = {
            "DF_handguard_S12K"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.75, 0.75, 0.75 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\S12K\data\S12K_co.paa",
            "My_DF_Weapons_Attachments\handguard\AK_competition\data\AK_competition_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\S12K\data\S12K.rvmat",
            "My_DF_Weapons_Attachments\handguard\AK_competition\data\AK_competition.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\S12K\data\S12K.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK_competition\data\AK_competition.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\S12K\data\S12K_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK_competition\data\AK_competition_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\S12K\data\S12K_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK_competition\data\AK_competition_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\S12K\data\S12K_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK_competition\data\AK_competition_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\S12K\data\S12K_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK_competition\data\AK_competition_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_AK_competition_nobarrel: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AK_competition_nobarrel0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AK_competition_nobarrel1";
        model = "\My_DF_Weapons_Attachments\handguard\AK_competition\AK_competition_nobarrel.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_left2",
            "DF_frog_right2"
        };
        inventorySlot[] = {
            "DF_handguard_AKM"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\AK_competition\data\AK_competition_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\AK_competition\data\AK_competition.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_competition\data\AK_competition.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_competition\data\AK_competition_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_competition\data\AK_competition_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_competition\data\AK_competition_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_competition\data\AK_competition_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_AK_romania: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AK_romania0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AK_romania1";
        model = "\My_DF_Weapons_Attachments\handguard\AK_romania\AK_romania.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 300;
        attachments[] = {};
        inventorySlot[] = {
            "DF_handguard_AKM"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\AK_romania\data\AK_romania_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\AK_romania\data\AK_romania.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_romania\data\AK_romania.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_romania\data\AK_romania_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_romania\data\AK_romania_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_romania\data\AK_romania_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_romania\data\AK_romania_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_AK_slr_S12K: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AK_slr_S12K0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AK_slr_S12K1";
        model = "\My_DF_Weapons_Attachments\handguard\AK_slr\AK_slr.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2"
        };
        inventorySlot[] = {
            "DF_handguard_S12K"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\S12K\data\S12K_co.paa",
            "My_DF_Weapons_Attachments\handguard\AK_slr\data\AK_slr_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\S12K\data\S12K.rvmat",
            "My_DF_Weapons_Attachments\handguard\AK_slr\data\AK_slr.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\S12K\data\S12K.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK_slr\data\AK_slr.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\S12K\data\S12K_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK_slr\data\AK_slr_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\S12K\data\S12K_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK_slr\data\AK_slr_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\S12K\data\S12K_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK_slr\data\AK_slr_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\S12K\data\S12K_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AK_slr\data\AK_slr_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_AK_slr_PP19: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AK_slr_PP190";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AK_slr_PP191";
        model = "\My_DF_Weapons_Attachments\handguard\AK_slr\AK_slr_PP19.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2"
        };
        inventorySlot[] = {
            "DF_handguard_PP19",
            "DF_handguard_AKM"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\AK_slr\data\AK_slr_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\AK_slr\data\AK_slr.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_slr\data\AK_slr.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_slr\data\AK_slr_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_slr\data\AK_slr_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_slr\data\AK_slr_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_slr\data\AK_slr_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_AK_slr_extend: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AK_slr_extend0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AK_slr_extend1";
        model = "\My_DF_Weapons_Attachments\handguard\AK_slr_extend\AK_slr_extend.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_AKM"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        hiddenSelections[] = {
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\AK_slr_extend\data\AK_slr_extend_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\AK_slr_extend\data\AK_slr_extend.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_slr_extend\data\AK_slr_extend.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_slr_extend\data\AK_slr_extend_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_slr_extend\data\AK_slr_extend_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_slr_extend\data\AK_slr_extend_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\AK_slr_extend\data\AK_slr_extend_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_AR_competition: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AR_competition0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AR_competition1";
        model = "\My_DF_Weapons_Attachments\handguard\AR_competition\AR_competition.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_frog_up2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_AR"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.75, 0.75, 0.75 };
        swayModifier[] = { 0.85 .85, 0.85 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\AR_competition\data\AR_competition_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\AR_competition\data\AR_competition.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_competition\data\AR_competition.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_competition\data\AR_competition_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_competition\data\AR_competition_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_competition\data\AR_competition_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_competition\data\AR_competition_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_AR_KAC_RIS: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AR_KAC_RIS0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AR_KAC_RIS1";
        model = "\My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\AR_KAC_RIS.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 200;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up"
        };
        inventorySlot[] = {
            "DF_handguard_AR"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "frosight",
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\frosight\AR_KAC_RIS_frosight_co.paa",
            "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\AR_KAC_RIS_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\frosight\AR_KAC_RIS_frosight.rvmat",
            "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\AR_KAC_RIS.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\frosight\AR_KAC_RIS_frosight.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\AR_KAC_RIS.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\frosight\AR_KAC_RIS_frosight_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\AR_KAC_RIS_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\frosight\AR_KAC_RIS_frosight_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\AR_KAC_RIS_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\frosight\AR_KAC_RIS_frosight_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\AR_KAC_RIS_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\frosight\AR_KAC_RIS_frosight_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_RIS\data\AR_KAC_RIS_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_AR_KAC_URX: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AR_KAC_URX0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AR_KAC_URX1";
        model = "\My_DF_Weapons_Attachments\handguard\AR_KAC_URX\AR_KAC_URX.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_frog_up2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_AR"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.7, 0.7, 0.7 };
        swayModifier[] = { 0.95, 0.95, 0.95 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\AR_KAC_URX\data\AR_KAC_URX_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\AR_KAC_URX\data\AR_KAC_URX.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_URX\data\AR_KAC_URX.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_URX\data\AR_KAC_URX_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_URX\data\AR_KAC_URX_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_URX\data\AR_KAC_URX_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_KAC_URX\data\AR_KAC_URX_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_AR_lvoa: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AR_lvoa0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AR_lvoa1";
        model = "\My_DF_Weapons_Attachments\handguard\AR_lvoa\AR_lvoa.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_frog_up2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_AR"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.75, 0.75, 0.75 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\AR_lvoa_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\AR_lvoa.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\AR_lvoa.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\AR_lvoa_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\AR_lvoa_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\AR_lvoa_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\barrel\AR_lvoa_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_lvoa\data\AR_lvoa_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_AR_mk18: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AR_mk180";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AR_mk181";
        model = "\My_DF_Weapons_Attachments\handguard\AR_mk18\AR_mk18.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_frog_up2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_AR"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\AR_mk18\data\barrel\AR_mk18_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\AR_mk18\data\AR_mk18_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\AR_mk18\data\barrel\AR_mk18_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\AR_mk18\data\AR_mk18.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\AR_mk18\data\barrel\AR_mk18_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_mk18\data\AR_mk18.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\AR_mk18\data\barrel\AR_mk18_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_mk18\data\AR_mk18_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\AR_mk18\data\barrel\AR_mk18_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_mk18\data\AR_mk18_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\AR_mk18\data\barrel\AR_mk18_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_mk18\data\AR_mk18_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\AR_mk18\data\barrel\AR_mk18_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_mk18\data\AR_mk18_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_AR_std: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AR_std0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AR_std1";
        model = "\My_DF_Weapons_Attachments\handguard\AR_mk18\AR_std.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_frog_up2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_AR"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.69999999, 0.69999999, 0.69999999 };
        swayModifier[] = { 0.89999998, 0.89999998, 0.89999998 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\AR_mk18\data\AR_mk18_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\AR_mk18\data\AR_mk18.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_mk18\data\AR_mk18.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_mk18\data\AR_mk18_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_mk18\data\AR_mk18_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_mk18\data\AR_mk18_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\M4A1\data\barrel\M4A1_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AR_mk18\data\AR_mk18_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_AUG_competition: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AUG_competition0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AUG_competition1";
        model = "\My_DF_Weapons_Attachments\handguard\AUG_competition\AUG_competition.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        simpleHiddenSelections[] = {
            "rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_right2"
        };
        inventorySlot[] = {
            "DF_handguard_AUG"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\AUG_competition\data\AUG_competition_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\AUG_competition\data\AUG_competition.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\AUG_competition\data\AUG_competition.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\AUG_competition\data\AUG_competition_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\AUG_competition\data\AUG_competition_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\AUG_competition\data\AUG_competition_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\AUG_competition\data\AUG_competition_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_optic_Base;
    class My_DF_Weapons_Attachments_handguard_AUG_Optic: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AUG_Optic0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AUG_Optic1";
        model = "\My_DF_Weapons_Attachments\handguard\AUG_Optic\AUG_Optic.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.001;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        attachments[] = {
            "weaponOptics",
            "DF_frog_right"
        };
        inventorySlot[] = {
            "DF_handguard_AUG"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\AUG_Optic\data\AUG_Optic_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\AUG_Optic\data\AUG_Optic.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\AUG_Optic\data\AUG_Optic.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\AUG_Optic\data\AUG_Optic_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\AUG_Optic\data\AUG_Optic_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\AUG_Optic\data\AUG_Optic_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\AUG_Optic\data\AUG_Optic_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class OpticsInfo
        {
            memoryPointCamera = "eyeScope";
            cameraDir = "cameraDir";
            modelOptics = "-";
            opticsDisablePeripherialVision = 0.67000002;
            opticsFlare = 1;
            opticsPPEffects[] = {};
            opticsZoomMin = "0.3926/3";
            opticsZoomMax = "0.3926/3";
            opticsZoomInit = "0.3926/3";
            distanceZoomMin = 100;
            distanceZoomMax = 600;
            discreteDistance[] = { 100, 200, 300, 400, 500, 600 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
        };
        class OpticsInfoWeaponOverride
        {
            memoryPointCamera = "eyeIronsights";
            cameraDir = "cameraDirIronsights";
            opticsZoomMin = 0.5236;
            opticsZoomMax = 0.5236;
            opticsZoomInit = 0.5236;
            distanceZoomMin = 25;
            distanceZoomMax = 25;
            discreteDistance[] = { 25 };
            discreteDistanceInitIndex = 0;
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
        };
    };
    class My_DF_Weapons_Attachments_handguard_AUG_quadrail: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AUG_quadrail0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AUG_quadrail1";
        model = "\My_DF_Weapons_Attachments\handguard\AUG_quadrail\AUG_quadrail.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_right2",
            "DF_bipod_AUG"
        };
        inventorySlot[] = {
            "DF_handguard_AUG"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\AUG_quadrail\data\barrel\AUG_quadrail_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\AUG_quadrail\data\AUG_quadrail_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\AUG_quadrail\data\barrel\AUG_quadrail_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\AUG_quadrail\data\AUG_quadrail.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\AUG_quadrail\data\barrel\AUG_quadrail_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AUG_quadrail\data\AUG_quadrail.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\AUG_quadrail\data\barrel\AUG_quadrail_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AUG_quadrail\data\AUG_quadrail_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\AUG_quadrail\data\barrel\AUG_quadrail_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AUG_quadrail\data\AUG_quadrail_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\AUG_quadrail\data\barrel\AUG_quadrail_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AUG_quadrail\data\AUG_quadrail_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\AUG_quadrail\data\barrel\AUG_quadrail_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\AUG_quadrail\data\AUG_quadrail_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_AUG_Suppressed: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AUG_Suppressed0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AUG_Suppressed1";
        model = "\My_DF_Weapons_Attachments\handguard\AUG_Suppressed\AUG_Suppressed.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right"
        };
        inventorySlot[] = {
            "DF_handguard_AUG"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\AUG_Suppressed\data\AUG_Suppressed_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\AUG_Suppressed\data\AUG_Suppressed.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\AUG_Suppressed\data\AUG_Suppressed.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\AUG_Suppressed\data\AUG_Suppressed_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\AUG_Suppressed\data\AUG_Suppressed_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\AUG_Suppressed\data\AUG_Suppressed_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\AUG_Suppressed\data\AUG_Suppressed_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_AWMExtendedhandguard: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_AWMExtendedhandguard0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_AWMExtendedhandguard1";
        model = "\My_DF_Weapons_Attachments\handguard\AWMExtendedhandguard\AWMExtendedhandguard.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        attachments[] = {
            "DF_frog_left",
            "DF_frog_right",
            "DF_bipod_AWM"
        };
        inventorySlot[] = {
            "DF_handguard_AWM"
        };
        itemSize[] = { 4, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\AWMExtendedhandguard\data\AWMExtendedhandguard_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\AWMExtendedhandguard\data\AWMExtendedhandguard.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\AWMExtendedhandguard\data\AWMExtendedhandguard.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\AWMExtendedhandguard\data\AWMExtendedhandguard_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\AWMExtendedhandguard\data\AWMExtendedhandguard_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\AWMExtendedhandguard\data\AWMExtendedhandguard_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\AWMExtendedhandguard\data\AWMExtendedhandguard_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_Bison_competition: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_Bison_competition0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_Bison_competition1";
        model = "\My_DF_Weapons_Attachments\handguard\Bison_competition\Bison_competition.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 300;
        attachments[] = {
            "DF_frog_left",
            "DF_frog_right"
        };
        inventorySlot[] = {
            "DF_handguard_Bison"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\Bison_competition\data\Bison_competition_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\Bison_competition\data\Bison_competition.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\Bison_competition\data\Bison_competition.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\Bison_competition\data\Bison_competition_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\Bison_competition\data\Bison_competition_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\Bison_competition\data\Bison_competition_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\Bison_competition\data\Bison_competition_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_Citori725_Short: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_Citori725_Short0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_Citori725_Short1";
        model = "\My_DF_Weapons_Attachments\handguard\Citori725_Short\Citori725_Short.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        inventorySlot[] = {
            "DF_handguard_Citori725"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.75, 0.75, 0.75 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\Citori725_Short\data\barrel\Citori725_Short_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\Citori725_Short\data\Citori725_Short_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\Citori725_Short\data\barrel\Citori725_Short_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\Citori725_Short\data\Citori725_Short.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\Citori725_Short\data\barrel\Citori725_Short_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Citori725_Short\data\Citori725_Short.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\Citori725_Short\data\barrel\Citori725_Short_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Citori725_Short\data\Citori725_Short_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\Citori725_Short\data\barrel\Citori725_Short_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Citori725_Short\data\Citori725_Short_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\Citori725_Short\data\barrel\Citori725_Short_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Citori725_Short\data\Citori725_Short_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\Citori725_Short\data\barrel\Citori725_Short_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Citori725_Short\data\Citori725_Short_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_Citori725_Tac: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_Citori725_Tac0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_Citori725_Tac1";
        model = "\My_DF_Weapons_Attachments\handguard\Citori725_Tac\Citori725_Tac.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_up",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up2",
            "DF_frog_left2",
            "DF_frog_right2"
        };
        inventorySlot[] = {
            "DF_handguard_Citori725"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.75, 0.75, 0.75 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        simpleHiddenSelections[] = {
            "rail"
        };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\Citori725_Tac\data\barrel\Citori725_Tac_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\Citori725_Tac\data\Citori725_Tac_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\Citori725_Tac\data\barrel\Citori725_Tac_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\Citori725_Tac\data\Citori725_Tac.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\Citori725_Tac\data\barrel\Citori725_Tac_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Citori725_Tac\data\Citori725_Tac.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\Citori725_Tac\data\barrel\Citori725_Tac_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Citori725_Tac\data\Citori725_Tac_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\Citori725_Tac\data\barrel\Citori725_Tac_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Citori725_Tac\data\Citori725_Tac_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\Citori725_Tac\data\barrel\Citori725_Tac_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Citori725_Tac\data\Citori725_Tac_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\Citori725_Tac\data\barrel\Citori725_Tac_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Citori725_Tac\data\Citori725_Tac_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_G3_mlok: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_G3_mlok0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_G3_mlok1";
        model = "\My_DF_Weapons_Attachments\handguard\G3_mlok\G3_mlok.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_G3"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "frosight",
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\G3\data\frosight\G3_frosight_co.paa",
            "My_DF_Weapons_Rifles\G3\data\barrel\G3_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\G3_mlok\data\G3_mlok_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\G3\data\frosight\G3_frosight.rvmat",
            "My_DF_Weapons_Rifles\G3\data\barrel\G3_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\G3_mlok\data\G3_mlok.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Rifles\G3\data\frosight\G3_frosight.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\barrel\G3_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_mlok\data\G3_mlok.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\G3\data\frosight\G3_frosight_worn.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\barrel\G3_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_mlok\data\G3_mlok_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\G3\data\frosight\G3_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\barrel\G3_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_mlok\data\G3_mlok_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\G3\data\frosight\G3_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\barrel\G3_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_mlok\data\G3_mlok_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\G3\data\frosight\G3_frosight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\barrel\G3_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_mlok\data\G3_mlok_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_G3_mlok_extend: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_G3_mlok_extend0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_G3_mlok_extend1";
        model = "\My_DF_Weapons_Attachments\handguard\G3_mlok_extend\G3_mlok_extend.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_G3"
        };
        itemSize[] = { 4, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "frosight",
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\G3\data\frosight\G3_frosight_co.paa",
            "My_DF_Weapons_Rifles\G3\data\barrel\G3_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\G3_mlok_extend\data\G3_mlok_extend_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\G3\data\frosight\G3_frosight.rvmat",
            "My_DF_Weapons_Rifles\G3\data\barrel\G3_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\G3_mlok_extend\data\G3_mlok_extend.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Rifles\G3\data\frosight\G3_frosight.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\barrel\G3_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_mlok_extend\data\G3_mlok_extend.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\G3\data\frosight\G3_frosight_worn.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\barrel\G3_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_mlok_extend\data\G3_mlok_extend_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\G3\data\frosight\G3_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\barrel\G3_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_mlok_extend\data\G3_mlok_extend_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\G3\data\frosight\G3_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\barrel\G3_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_mlok_extend\data\G3_mlok_extend_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\G3\data\frosight\G3_frosight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\G3\data\barrel\G3_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_mlok_extend\data\G3_mlok_extend_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_G3_Rail: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_G3_Rail0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_G3_Rail1";
        model = "\My_DF_Weapons_Attachments\handguard\G3_Rail\G3_Rail.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_G3"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "frosight",
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\G3_Rail\data\frosight\G3_Rail_frosight_co.paa",
            "My_DF_Weapons_Attachments\handguard\G3_Rail\data\barrel\G3_Rail_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\G3_Rail\data\G3_Rail_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\G3_Rail\data\frosight\G3_Rail_frosight.rvmat",
            "My_DF_Weapons_Attachments\handguard\G3_Rail\data\barrel\G3_Rail_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\G3_Rail\data\G3_Rail.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\G3_Rail\data\frosight\G3_Rail_frosight.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_Rail\data\barrel\G3_Rail_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_Rail\data\G3_Rail.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\G3_Rail\data\frosight\G3_Rail_frosight_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_Rail\data\barrel\G3_Rail_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_Rail\data\G3_Rail_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\G3_Rail\data\frosight\G3_Rail_frosight_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_Rail\data\barrel\G3_Rail_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_Rail\data\G3_Rail_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\G3_Rail\data\frosight\G3_Rail_frosight_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_Rail\data\barrel\G3_Rail_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_Rail\data\G3_Rail_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\G3_Rail\data\frosight\G3_Rail_frosight_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_Rail\data\barrel\G3_Rail_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_Rail\data\G3_Rail_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_G3_shortRail: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_G3_shortRail0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_G3_shortRail1";
        model = "\My_DF_Weapons_Attachments\handguard\G3_shortRail\G3_shortRail.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right"
        };
        inventorySlot[] = {
            "DF_handguard_G3"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "frosight",
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\G3_shortRail\data\frosight\G3_shortRail_frosight_co.paa",
            "My_DF_Weapons_Attachments\handguard\G3_shortRail\data\barrel\G3_shortRail_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\G3_shortRail\data\G3_shortRail_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\G3_shortRail\data\frosight\G3_shortRail_frosight.rvmat",
            "My_DF_Weapons_Attachments\handguard\G3_shortRail\data\barrel\G3_shortRail_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\G3_shortRail\data\G3_shortRail.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\G3_shortRail\data\frosight\G3_shortRail_frosight.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_shortRail\data\barrel\G3_shortRail_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_shortRail\data\G3_shortRail.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\G3_shortRail\data\frosight\G3_shortRail_frosight_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_shortRail\data\barrel\G3_shortRail_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_shortRail\data\G3_shortRail_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\G3_shortRail\data\frosight\G3_shortRail_frosight_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_shortRail\data\barrel\G3_shortRail_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_shortRail\data\G3_shortRail_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\G3_shortRail\data\frosight\G3_shortRail_frosight_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_shortRail\data\barrel\G3_shortRail_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_shortRail\data\G3_shortRail_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\G3_shortRail\data\frosight\G3_shortRail_frosight_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_shortRail\data\barrel\G3_shortRail_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\G3_shortRail\data\G3_shortRail_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_K416_A8: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_K416_A80";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_K416_A81";
        model = "\My_DF_Weapons_Attachments\handguard\K416_A8\K416_A8.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up"
        };
        inventorySlot[] = {
            "DF_handguard_K416"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "frosight",
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_co.paa",
            "My_DF_Weapons_Rifles\K416\data\barrel\K416_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\K416_A8\data\K416_A8_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight.rvmat",
            "My_DF_Weapons_Rifles\K416\data\barrel\K416_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\K416_A8\data\K416_A8.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\barrel\K416_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_A8\data\K416_A8.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_worn.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\barrel\K416_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_A8\data\K416_A8_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\barrel\K416_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_A8\data\K416_A8_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_damage.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\barrel\K416_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_A8\data\K416_A8_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_destruct.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\barrel\K416_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_A8\data\K416_A8_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_K416_A8_extend: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_K416_A8_extend0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_K416_A8_extend1";
        model = "\My_DF_Weapons_Attachments\handguard\K416_A8_extend\K416_A8_extend.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_frog_up2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_K416"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "frosight",
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_co.paa",
            "My_DF_Weapons_Attachments\handguard\K416_A8_extend\data\barrel\K416_A8_extend_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\K416_A8_extend\data\K416_A8_extend_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight.rvmat",
            "My_DF_Weapons_Attachments\handguard\K416_A8_extend\data\barrel\K416_A8_extend_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\K416_A8_extend\data\K416_A8_extend.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_A8_extend\data\barrel\K416_A8_extend_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_A8_extend\data\K416_A8_extend.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_A8_extend\data\barrel\K416_A8_extend_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_A8_extend\data\K416_A8_extend_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_A8_extend\data\barrel\K416_A8_extend_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_A8_extend\data\K416_A8_extend_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_A8_extend\data\barrel\K416_A8_extend_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_A8_extend\data\K416_A8_extend_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_A8_extend\data\barrel\K416_A8_extend_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_A8_extend\data\K416_A8_extend_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_K416_long: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_K416_long0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_K416_long1";
        model = "\My_DF_Weapons_Attachments\handguard\K416_long\K416_long.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_frog_up2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_K416"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.75, 0.75, 0.75 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "frosight",
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_co.paa",
            "My_DF_Weapons_Attachments\handguard\K416_A8_extend\data\barrel\K416_A8_extend_barrel_co.paa",
            "My_DF_Weapons_Rifles\K416\data\handguard\K416_handguard_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight.rvmat",
            "My_DF_Weapons_Attachments\handguard\K416_A8_extend\data\barrel\K416_A8_extend_barrel.rvmat",
            "My_DF_Weapons_Rifles\K416\data\handguard\K416_handguard.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_A8_extend\data\barrel\K416_A8_extend_barrel.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\handguard\K416_handguard.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_A8_extend\data\barrel\K416_A8_extend_barrel_worn.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\handguard\K416_handguard_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_A8_extend\data\barrel\K416_A8_extend_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\handguard\K416_handguard_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_A8_extend\data\barrel\K416_A8_extend_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\handguard\K416_handguard_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_A8_extend\data\barrel\K416_A8_extend_barrel_destruct.rvmat",
                                "My_DF_Weapons_Rifles\K416\data\handguard\K416_handguard_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_K416_Short: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_K416_Short0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_K416_Short1";
        model = "\My_DF_Weapons_Attachments\handguard\K416_Short\K416_Short.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up"
        };
        inventorySlot[] = {
            "DF_handguard_K416"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.7, 0.7, 0.7 };
        hiddenSelections[] = {
            "frosight",
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_co.paa",
            "My_DF_Weapons_Attachments\handguard\K416_Short\data\barrel\K416_Short_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\K416_Short\data\K416_Short_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight.rvmat",
            "My_DF_Weapons_Attachments\handguard\K416_Short\data\barrel\K416_Short_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\K416_Short\data\K416_Short.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_Short\data\barrel\K416_Short_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_Short\data\K416_Short.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_Short\data\barrel\K416_Short_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_Short\data\K416_Short_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_Short\data\barrel\K416_Short_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_Short\data\K416_Short_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_Short\data\barrel\K416_Short_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_Short\data\K416_Short_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\K416\data\frosight\K416_frosight_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_Short\data\barrel\K416_Short_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K416_Short\data\K416_Short_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_K437_Short: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_K437_Short0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_K437_Short1";
        model = "\My_DF_Weapons_Attachments\handguard\K437_Short\K437_Short.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 300;
        simpleHiddenSelections[] = {
            "rail_l",
            "rail_r"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right"
        };
        inventorySlot[] = {
            "DF_handguard_K437"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\K437\data\barrel\K437_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\K437_Short\data\K437_Short_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\K437\data\barrel\K437_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\K437_Short\data\K437_Short.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Rifles\K437\data\barrel\K437_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K437_Short\data\K437_Short.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\K437\data\barrel\K437_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K437_Short\data\K437_Short_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\K437\data\barrel\K437_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K437_Short\data\K437_Short_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\K437\data\barrel\K437_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K437_Short\data\K437_Short_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\K437\data\barrel\K437_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K437_Short\data\K437_Short_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_K437_Silencer: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_K437_Silencer0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_K437_Silencer1";
        model = "\My_DF_Weapons_Attachments\handguard\K437_Silencer\K437_Silencer.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_left2",
            "DF_frog_right2"
        };
        inventorySlot[] = {
            "DF_handguard_K437"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "muzzle",
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\muzzle\HK437Silencer\data\HK437Silencer_co.paa",
            "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\barrel\K437_Silencer_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\K437_Silencer_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\muzzle\HK437Silencer\data\HK437Silencer.rvmat",
            "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\barrel\K437_Silencer_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\K437_Silencer.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\muzzle\HK437Silencer\data\HK437Silencer.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\barrel\K437_Silencer_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\K437_Silencer.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\muzzle\HK437Silencer\data\HK437Silencer_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\barrel\K437_Silencer_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\K437_Silencer_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\muzzle\HK437Silencer\data\HK437Silencer_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\barrel\K437_Silencer_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\K437_Silencer_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\muzzle\HK437Silencer\data\HK437Silencer_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\barrel\K437_Silencer_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\K437_Silencer_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\muzzle\HK437Silencer\data\HK437Silencer_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\barrel\K437_Silencer_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\K437_Silencer_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_K437_long: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_K437_long0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_K437_long1";
        model = "\My_DF_Weapons_Attachments\handguard\K437_Silencer\K437_long.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_left2",
            "DF_frog_right",
            "DF_frog_right2"
        };
        inventorySlot[] = {
            "DF_handguard_K437"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.69999999, 0.69999999, 0.69999999 };
        swayModifier[] = { 0.89999998, 0.89999998, 0.89999998 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\barrel\K437_Silencer_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\K437_Silencer_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\barrel\K437_Silencer_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\K437_Silencer.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\barrel\K437_Silencer_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\K437_Silencer.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\barrel\K437_Silencer_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\K437_Silencer_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\barrel\K437_Silencer_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\K437_Silencer_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\barrel\K437_Silencer_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\K437_Silencer_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\barrel\K437_Silencer_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\K437_Silencer\data\K437_Silencer_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_KC17_long: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_KC17_long0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_KC17_long1";
        model = "\My_DF_Weapons_Attachments\handguard\KC17_long\KC17_long.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_KC17"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\KC17_long\data\barrel\KC17_long_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\KC17_long\data\KC17_long_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\KC17_long\data\barrel\KC17_long_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\KC17_long\data\KC17_long.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\KC17_long\data\barrel\KC17_long_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\KC17_long\data\KC17_long.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\KC17_long\data\barrel\KC17_long_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\KC17_long\data\KC17_long_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\KC17_long\data\barrel\KC17_long_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\KC17_long\data\KC17_long_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\KC17_long\data\barrel\KC17_long_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\KC17_long\data\KC17_long_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\KC17_long\data\barrel\KC17_long_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\KC17_long\data\KC17_long_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_KC17_Short: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_KC17_Short0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_KC17_Short1";
        model = "\My_DF_Weapons_Attachments\handguard\KC17_Short\KC17_Short.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up"
        };
        inventorySlot[] = {
            "DF_handguard_KC17"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\KC17_Short\data\barrel\KC17_Short_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\KC17_Short\data\KC17_Short_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\KC17_Short\data\barrel\KC17_Short_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\KC17_Short\data\KC17_Short.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\KC17_Short\data\barrel\KC17_Short_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\KC17_Short\data\KC17_Short.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\KC17_Short\data\barrel\KC17_Short_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\KC17_Short\data\KC17_Short_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\KC17_Short\data\barrel\KC17_Short_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\KC17_Short\data\KC17_Short_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\KC17_Short\data\barrel\KC17_Short_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\KC17_Short\data\KC17_Short_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\KC17_Short\data\barrel\KC17_Short_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\KC17_Short\data\KC17_Short_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_KC17_Silencer: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_KC17_Silencer0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_KC17_Silencer1";
        model = "\My_DF_Weapons_Attachments\handguard\KC17_Silencer\KC17_Silencer.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_frog_up2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_KC17"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "muzzle",
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\KC17_Silencer\data\muzzle\KC17_Silencer_muzzle_co.paa",
            "My_DF_Weapons_Attachments\handguard\KC17_Silencer\data\barrel\KC17_Silencer_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\KC17_Silencer\data\KC17_Silencer_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\KC17_Silencer\data\muzzle\KC17_Silencer_muzzle.rvmat",
            "My_DF_Weapons_Attachments\handguard\KC17_Silencer\data\barrel\KC17_Silencer_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\KC17_Silencer\data\KC17_Silencer.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\KC17_Silencer\data\muzzle\KC17_Silencer_muzzle.rvmat",
                                "My_DF_Weapons_Attachments\handguard\KC17_Silencer\data\barrel\KC17_Silencer_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\KC17_Silencer\data\KC17_Silencer.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\KC17_Silencer\data\muzzle\KC17_Silencer_muzzle_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\KC17_Silencer\data\barrel\KC17_Silencer_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\KC17_Silencer\data\KC17_Silencer_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\KC17_Silencer\data\muzzle\KC17_Silencer_muzzle_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\KC17_Silencer\data\barrel\KC17_Silencer_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\KC17_Silencer\data\KC17_Silencer_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\KC17_Silencer\data\muzzle\KC17_Silencer_muzzle_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\KC17_Silencer\data\barrel\KC17_Silencer_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\KC17_Silencer\data\KC17_Silencer_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\KC17_Silencer\data\muzzle\KC17_Silencer_muzzle_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\KC17_Silencer\data\barrel\KC17_Silencer_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\KC17_Silencer\data\KC17_Silencer_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_M1014_TriRaid: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_M1014_TriRaid0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_M1014_TriRaid1";
        model = "\My_DF_Weapons_Attachments\handguard\M1014_TriRaid\M1014_TriRaid.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right"
        };
        inventorySlot[] = {
            "DF_handguard_M1014"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\M1014_TriRaid\data\M1014_TriRaid_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\M1014_TriRaid\data\M1014_TriRaid.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\M1014_TriRaid\data\M1014_TriRaid.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\M1014_TriRaid\data\M1014_TriRaid_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\M1014_TriRaid\data\M1014_TriRaid_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\M1014_TriRaid\data\M1014_TriRaid_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\M1014_TriRaid\data\M1014_TriRaid_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_M14_comp: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_M14_comp0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_M14_comp1";
        model = "\My_DF_Weapons_Attachments\handguard\M14_comp\M14_comp.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        attachments[] = {
            "DF_cheekpad"
        };
        inventorySlot[] = {
            "DF_handguard_M14"
        };
        itemSize[] = { 4, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\M14_comp\data\M14_comp_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\M14_comp\data\M14_comp.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\M14_comp\data\M14_comp.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\M14_comp\data\M14_comp_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\M14_comp\data\M14_comp_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\M14_comp\data\M14_comp_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\M14_comp\data\M14_comp_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_M14_ebr: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_M14_ebr0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_M14_ebr1";
        model = "\My_DF_Weapons_Attachments\handguard\M14_ebr\M14_ebr.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        simpleHiddenSelections[] = {
            "stock"
        };
        attachments[] = {
            "DF_stock",
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_up2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_M14"
        };
        itemSize[] = { 4, 2 };
        recoilModifier[] = { 0.7, 0.7, 0.7 };
        swayModifier[] = { 0.7, 0.7, 0.7 };
        hiddenSelections[] = {
            "handguard",
            "pisg",
            "stock"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\M14_ebr\data\M14_ebr_co.paa",
            "My_DF_Weapons_Attachments\handguard\M14_ebr\data\pisg\M14_ebr_pisg_co.paa",
            "My_DF_Weapons_Attachments\handguard\M14_ebr\data\stock\M14_ebr_stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\M14_ebr\data\M14_ebr.rvmat",
            "My_DF_Weapons_Attachments\handguard\M14_ebr\data\pisg\M14_ebr_pisg.rvmat",
            "My_DF_Weapons_Attachments\handguard\M14_ebr\data\stock\M14_ebr_stock.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\M14_ebr\data\M14_ebr.rvmat",
                                "My_DF_Weapons_Attachments\handguard\M14_ebr\data\pisg\M14_ebr_pisg.rvmat",
                                "My_DF_Weapons_Attachments\handguard\M14_ebr\data\stock\M14_ebr_stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\M14_ebr\data\M14_ebr_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\M14_ebr\data\pisg\M14_ebr_pisg_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\M14_ebr\data\stock\M14_ebr_stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\M14_ebr\data\M14_ebr_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\M14_ebr\data\pisg\M14_ebr_pisg_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\M14_ebr\data\stock\M14_ebr_stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\M14_ebr\data\M14_ebr_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\M14_ebr\data\pisg\M14_ebr_pisg_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\M14_ebr\data\stock\M14_ebr_stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\M14_ebr\data\M14_ebr_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\M14_ebr\data\pisg\M14_ebr_pisg_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\M14_ebr\data\stock\M14_ebr_stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_M14_rail: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_M14_rail0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_M14_rail1";
        model = "\My_DF_Weapons_Attachments\handguard\M14_rail\M14_rail.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        attachments[] = {
            "DF_cheekpad",
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_up2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_M14"
        };
        itemSize[] = { 4, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\M14_rail\data\M14_rail_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\M14_rail\data\M14_rail.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\M14_rail\data\M14_rail.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\M14_rail\data\M14_rail_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\M14_rail\data\M14_rail_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\M14_rail\data\M14_rail_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\M14_rail\data\M14_rail_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_M249_Bipod: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_M249_Bipod0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_M249_Bipod1";
        model = "\My_DF_Weapons_Attachments\handguard\M249_Bipod\M249_Bipod.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        attachments[] = {
            "DF_frog_left",
            "DF_frog_right",
            "DF_bipod_M249"
        };
        inventorySlot[] = {
            "DF_handguard_M249"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\M249_Bipod\data\M249_Bipod_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\M249_Bipod\data\M249_Bipod.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\M249_Bipod\data\M249_Bipod.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\M249_Bipod\data\M249_Bipod_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\M249_Bipod\data\M249_Bipod_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\M249_Bipod\data\M249_Bipod_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\M249_Bipod\data\M249_Bipod_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_M249_TriRaid: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_M249_TriRaid0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_M249_TriRaid1";
        model = "\My_DF_Weapons_Attachments\handguard\M249_TriRaid\M249_TriRaid.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_M249"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\M249_TriRaid\data\M249_TriRaid_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\M249_TriRaid\data\M249_TriRaid.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\M249_TriRaid\data\M249_TriRaid.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\M249_TriRaid\data\M249_TriRaid_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\M249_TriRaid\data\M249_TriRaid_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\M249_TriRaid\data\M249_TriRaid_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\M249_TriRaid\data\M249_TriRaid_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_M249_TriRaidShort: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_M249_TriRaidShort0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_M249_TriRaidShort1";
        model = "\My_DF_Weapons_Attachments\handguard\M249_TriRaidShort\M249_TriRaidShort.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up"
        };
        inventorySlot[] = {
            "DF_handguard_M249"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\M249_TriRaidShort\data\M249_TriRaidShort_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\M249_TriRaidShort\data\M249_TriRaidShort.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\M249_TriRaidShort\data\M249_TriRaidShort.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\M249_TriRaidShort\data\M249_TriRaidShort_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\M249_TriRaidShort\data\M249_TriRaidShort_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\M249_TriRaidShort\data\M249_TriRaidShort_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\M249_TriRaidShort\data\M249_TriRaidShort_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_M700_A3: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_M700_A30";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_M700_A31";
        model = "\My_DF_Weapons_Attachments\handguard\M700_A3\M700_A3.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        attachments[] = {
            "DF_frog_left",
            "DF_frog_right",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_M700"
        };
        itemSize[] = { 4, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\M700_A3\data\M700_A3_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\M700_A3\data\M700_A3.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\M700_A3\data\M700_A3.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\M700_A3\data\M700_A3_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\M700_A3\data\M700_A3_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\M700_A3\data\M700_A3_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\M700_A3\data\M700_A3_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_M700_A6: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_M700_A60";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_M700_A61";
        model = "\My_DF_Weapons_Attachments\handguard\M700_A6\M700_A6.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 800;
        simpleHiddenSelections[] = {
            "pisg"
        };
        attachments[] = {
            "DF_stock_M700_A6",
            "DF_ar_pisg",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_frog_up2",
            "DF_frog_down",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_M700"
        };
        itemSize[] = { 4, 2 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\M700_A6\data\M700_A6_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\M700_A6\data\M700_A6.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\M700_A6\data\M700_A6.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\M700_A6\data\M700_A6_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\M700_A6\data\M700_A6_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\M700_A6\data\M700_A6_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\M700_A6\data\M700_A6_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_M700_handguard: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_M700_handguard0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_M700_handguard1";
        model = "\My_DF_Weapons_Attachments\handguard\M700_handguard\M700_handguard.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        attachments[] = {
            "DF_cheekpad",
            "DF_frog_left",
            "DF_frog_right",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_M700"
        };
        itemSize[] = { 4, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\M700_handguard\data\M700_handguard_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\M700_handguard\data\M700_handguard.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\M700_handguard\data\M700_handguard.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\M700_handguard\data\M700_handguard_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\M700_handguard\data\M700_handguard_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\M700_handguard\data\M700_handguard_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\M700_handguard\data\M700_handguard_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_M700_nylon: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_M700_nylon0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_M700_nylon1";
        model = "\My_DF_Weapons_Attachments\handguard\M700_nylon\M700_nylon.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        attachments[] = {
            "DF_cheekpad",
            "DF_frog_left",
            "DF_frog_right",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_M700"
        };
        itemSize[] = { 4, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
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
    };
    class My_DF_Weapons_Attachments_handguard_M7_dmr: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_M7_dmr0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_M7_dmr1";
        model = "\My_DF_Weapons_Attachments\handguard\M7_dmr\M7_dmr.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_frog_up2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_M7"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.75, 0.75, 0.75 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\M7_dmr\data\M7_dmr_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\M7_dmr\data\M7_dmr.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\M7_dmr\data\M7_dmr.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\M7_dmr\data\M7_dmr_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\M7_dmr\data\M7_dmr_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\M7_dmr\data\M7_dmr_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\M7_dmr\data\M7_dmr_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_M7_long: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_M7_long0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_M7_long1";
        model = "\My_DF_Weapons_Attachments\handguard\M7_long\M7_long.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_M7"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.75, 0.75, 0.75 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel_co.paa",
            "My_DF_Weapons_Rifles\M7\data\handguard\M7_handguard_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel.rvmat",
            "My_DF_Weapons_Rifles\M7\data\handguard\M7_handguard.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\handguard\M7_handguard.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel_worn.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\handguard\M7_handguard_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\handguard\M7_handguard_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel_damage.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\handguard\M7_handguard_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel_destruct.rvmat",
                                "My_DF_Weapons_Rifles\M7\data\handguard\M7_handguard_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_M7_short: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_M7_short0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_M7_short1";
        model = "\My_DF_Weapons_Attachments\handguard\M7_short\M7_short.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up"
        };
        inventorySlot[] = {
            "DF_handguard_M7"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.75, 0.75, 0.75 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\M7_short\data\M7_short_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\M7_short\data\M7_short.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\M7_short\data\M7_short.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\M7_short\data\M7_short_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\M7_short\data\M7_short_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\M7_short\data\M7_short_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Rifles\M7\data\barrel\M7_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\M7_short\data\M7_short_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_M870_Rail: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_M870_Rail0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_M870_Rail1";
        model = "\My_DF_Weapons_Attachments\handguard\M870_Rail\M870_Rail.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right"
        };
        inventorySlot[] = {
            "DF_handguard_M870"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\M870_Rail\data\M870_Rail_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\M870_Rail\data\M870_Rail.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\M870_Rail\data\M870_Rail.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\M870_Rail\data\M870_Rail_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\M870_Rail\data\M870_Rail_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\M870_Rail\data\M870_Rail_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\M870_Rail\data\M870_Rail_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_Marlin_long: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_Marlin_long0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_Marlin_long1";
        model = "\My_DF_Weapons_Attachments\handguard\Marlin_long\Marlin_long.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_frog_up2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_Marlin"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "frosight",
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\Marlin\data\frosight\Marlin_frosight_co.paa",
            "My_DF_Weapons_Attachments\handguard\Marlin_long\data\barrel\Marlin_long_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\Marlin_long\data\Marlin_long_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\Marlin\data\frosight\Marlin_frosight.rvmat",
            "My_DF_Weapons_Attachments\handguard\Marlin_long\data\barrel\Marlin_long_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\Marlin_long\data\Marlin_long.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_DMR\Marlin\data\frosight\Marlin_frosight.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Marlin_long\data\barrel\Marlin_long_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Marlin_long\data\Marlin_long.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\Marlin\data\frosight\Marlin_frosight_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Marlin_long\data\barrel\Marlin_long_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Marlin_long\data\Marlin_long_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\Marlin\data\frosight\Marlin_frosight_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Marlin_long\data\barrel\Marlin_long_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Marlin_long\data\Marlin_long_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\Marlin\data\frosight\Marlin_frosight_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Marlin_long\data\barrel\Marlin_long_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Marlin_long\data\Marlin_long_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\Marlin\data\frosight\Marlin_frosight_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Marlin_long\data\barrel\Marlin_long_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Marlin_long\data\Marlin_long_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_Marlin_Short: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_Marlin_Short0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_Marlin_Short1";
        model = "\My_DF_Weapons_Attachments\handguard\Marlin_Short\Marlin_Short.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right"
        };
        inventorySlot[] = {
            "DF_handguard_Marlin"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "frosight",
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_DMR\Marlin\data\frosight\Marlin_frosight_co.paa",
            "My_DF_Weapons_Attachments\handguard\Marlin_Short\data\barrel\Marlin_Short_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\Marlin_Short\data\Marlin_Short_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_DMR\Marlin\data\frosight\Marlin_frosight.rvmat",
            "My_DF_Weapons_Attachments\handguard\Marlin_Short\data\barrel\Marlin_Short_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\Marlin_Short\data\Marlin_Short.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_DMR\Marlin\data\frosight\Marlin_frosight.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Marlin_Short\data\barrel\Marlin_Short_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Marlin_Short\data\Marlin_Short.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_DMR\Marlin\data\frosight\Marlin_frosight_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Marlin_Short\data\barrel\Marlin_Short_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Marlin_Short\data\Marlin_Short_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_DMR\Marlin\data\frosight\Marlin_frosight_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Marlin_Short\data\barrel\Marlin_Short_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Marlin_Short\data\Marlin_Short_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_DMR\Marlin\data\frosight\Marlin_frosight_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Marlin_Short\data\barrel\Marlin_Short_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Marlin_Short\data\Marlin_Short_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_DMR\Marlin\data\frosight\Marlin_frosight_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Marlin_Short\data\barrel\Marlin_Short_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Marlin_Short\data\Marlin_Short_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_Mini14_ebr: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_Mini14_ebr0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_Mini14_ebr1";
        model = "\My_DF_Weapons_Attachments\handguard\Mini14_ebr\Mini14_ebr.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        simpleHiddenSelections[] = {
            "stock"
        };
        attachments[] = {
            "DF_stock",
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_Mini14"
        };
        itemSize[] = { 4, 2 };
        recoilModifier[] = { 0.7, 0.7, 0.7 };
        swayModifier[] = { 0.7, 0.7, 0.7 };
        hiddenSelections[] = {
            "handguard",
            "pisg",
            "stock"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\Mini14_ebr\data\Mini14_ebr_co.paa",
            "My_DF_Weapons_Attachments\pisg\Mini14_pisg\data\Mini14_pisg_co.paa",
            "My_DF_Weapons_Attachments\stock\Mini14_Stock\data\Mini14_Stock_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\Mini14_ebr\data\Mini14_ebr.rvmat",
            "My_DF_Weapons_Attachments\pisg\Mini14_pisg\data\Mini14_pisg.rvmat",
            "My_DF_Weapons_Attachments\pisg\Mini14_pisg\data\Mini14_Stock.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\Mini14_ebr\data\Mini14_ebr.rvmat",
                                "My_DF_Weapons_Attachments\pisg\Mini14_pisg\data\Mini14_pisg.rvmat",
                                "My_DF_Weapons_Attachments\pisg\Mini14_pisg\data\Mini14_Stock.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\Mini14_ebr\data\Mini14_ebr_worn.rvmat",
                                "My_DF_Weapons_Attachments\pisg\Mini14_pisg\data\Mini14_pisg_worn.rvmat",
                                "My_DF_Weapons_Attachments\pisg\Mini14_pisg\data\Mini14_Stock_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\Mini14_ebr\data\Mini14_ebr_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\Mini14_pisg\data\Mini14_pisg_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\Mini14_pisg\data\Mini14_Stock_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\Mini14_ebr\data\Mini14_ebr_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\Mini14_pisg\data\Mini14_pisg_damage.rvmat",
                                "My_DF_Weapons_Attachments\pisg\Mini14_pisg\data\Mini14_Stock_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\Mini14_ebr\data\Mini14_ebr_destruct.rvmat",
                                "My_DF_Weapons_Attachments\pisg\Mini14_pisg\data\Mini14_pisg_destruct.rvmat",
                                "My_DF_Weapons_Attachments\pisg\Mini14_pisg\data\Mini14_Stock_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_Mini14_ergo: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_Mini14_ergo0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_Mini14_ergo1";
        model = "\My_DF_Weapons_Attachments\handguard\Mini14_ergo\Mini14_ergo.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right"
        };
        inventorySlot[] = {
            "DF_handguard_Mini14"
        };
        itemSize[] = { 4, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\Mini14_ergo\data\Mini14_ergo_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\Mini14_ergo\data\Mini14_ergo.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\Mini14_ergo\data\Mini14_ergo.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\Mini14_ergo\data\Mini14_ergo_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\Mini14_ergo\data\Mini14_ergo_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\Mini14_ergo\data\Mini14_ergo_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\Mini14_ergo\data\Mini14_ergo_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_Mini14_Std: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_Mini14_Std0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_Mini14_Std1";
        model = "\My_DF_Weapons_Attachments\handguard\Mini14_Std\Mini14_Std.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        simpleHiddenSelections[] = {
            "stock"
        };
        attachments[] = {
            "DF_stock",
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right"
        };
        inventorySlot[] = {
            "DF_handguard_Mini14"
        };
        itemSize[] = { 4, 2 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\Mini14_Std\data\Mini14_Std_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\Mini14_Std\data\Mini14_Std.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\Mini14_Std\data\Mini14_Std.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\Mini14_Std\data\Mini14_Std_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\Mini14_Std\data\Mini14_Std_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\Mini14_Std\data\Mini14_Std_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\Mini14_Std\data\Mini14_Std_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_MK47_long: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_MK47_long0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_MK47_long1";
        model = "\My_DF_Weapons_Attachments\handguard\MK47_long\MK47_long.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_frog_up2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_MK47"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\MK47_long\data\barrel\MK47_long_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\MK47_long\data\MK47_long_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\MK47_long\data\barrel\MK47_long_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\MK47_long\data\MK47_long.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\MK47_long\data\barrel\MK47_long_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MK47_long\data\MK47_long.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\MK47_long\data\barrel\MK47_long_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MK47_long\data\MK47_long_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\MK47_long\data\barrel\MK47_long_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MK47_long\data\MK47_long_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\MK47_long\data\barrel\MK47_long_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MK47_long\data\MK47_long_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\MK47_long\data\barrel\MK47_long_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MK47_long\data\MK47_long_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_MK47_Short: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_MK47_Short0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_MK47_Short1";
        model = "\My_DF_Weapons_Attachments\handguard\MK47_Short\MK47_Short.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up"
        };
        inventorySlot[] = {
            "DF_handguard_MK47"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.75, 0.75, 0.75 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\MK47_Short\data\barrel\MK47_Short_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\MK47_Short\data\MK47_Short_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\MK47_Short\data\barrel\MK47_Short_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\MK47_Short\data\MK47_Short.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\MK47_Short\data\barrel\MK47_Short_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MK47_Short\data\MK47_Short.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\MK47_Short\data\barrel\MK47_Short_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MK47_Short\data\MK47_Short_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\MK47_Short\data\barrel\MK47_Short_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MK47_Short\data\MK47_Short_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\MK47_Short\data\barrel\MK47_Short_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MK47_Short\data\MK47_Short_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\MK47_Short\data\barrel\MK47_Short_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MK47_Short\data\MK47_Short_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_MP5K: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_MP5K0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_MP5K1";
        model = "\My_DF_Weapons_Attachments\handguard\MP5K\MP5K.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 300;
        simpleHiddenSelections[] = {
            "rail_l",
            "rail_r"
        };
        attachments[] = {
            "DF_frog_left",
            "DF_frog_right"
        };
        inventorySlot[] = {
            "DF_handguard_MP5"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\MP5\data\MP5_co.paa",
            "My_DF_Weapons_Attachments\handguard\MP5K\data\MP5K_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\MP5\data\MP5.rvmat",
            "My_DF_Weapons_Attachments\handguard\MP5K\data\MP5K.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_SMG\MP5\data\MP5.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MP5K\data\MP5K.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\MP5\data\MP5_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MP5K\data\MP5K_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\MP5\data\MP5_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MP5K\data\MP5K_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\MP5\data\MP5_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MP5K\data\MP5K_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\MP5\data\MP5_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MP5K\data\MP5K_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_MP5_PTR: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_MP5_PTR0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_MP5_PTR1";
        model = "\My_DF_Weapons_Attachments\handguard\MP5_PTR\MP5_PTR.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        simpleHiddenSelections[] = {
            "barrel"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right"
        };
        inventorySlot[] = {
            "DF_handguard_MP5"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\MP5_PTR\data\MP5_PTR_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\MP5_PTR\data\MP5_PTR.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MP5_PTR\data\MP5_PTR.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MP5_PTR\data\MP5_PTR_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MP5_PTR\data\MP5_PTR_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MP5_PTR\data\MP5_PTR_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MP5_PTR\data\MP5_PTR_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_MP5_PTR_Short: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_MP5_PTR_Short0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_MP5_PTR_Short1";
        model = "\My_DF_Weapons_Attachments\handguard\MP5_PTR\MP5_PTR.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        simpleHiddenSelections[] = {
            "barrel"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right"
        };
        inventorySlot[] = {
            "DF_handguard_MP5"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.69999999, 0.69999999, 0.69999999 };
        swayModifier[] = { 0.89999998, 0.89999998, 0.89999998 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\MP5_PTR\data\MP5_PTR_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\MP5_PTR\data\MP5_PTR.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MP5_PTR\data\MP5_PTR.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MP5_PTR\data\MP5_PTR_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MP5_PTR\data\MP5_PTR_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MP5_PTR\data\MP5_PTR_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\MP5_PTR\data\MP5_PTR_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_muzzle_Base;
    class My_DF_Weapons_Attachments_handguard_MP5_striker: My_DF_Weapons_Attachments_muzzle_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_MP5_striker0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_MP5_striker1";
        model = "\My_DF_Weapons_Attachments\handguard\MP5_striker\MP5_striker.p3d";
        itemModelLength = 0.3;
        barrelArmor = 3000;
        noiseShootModifier = -0.9;
        soundIndex = 1;
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_up",
            "DF_frog_left",
            "DF_frog_right"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\MP5_striker\data\MP5_striker_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\MP5_striker\data\MP5_striker.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\MP5_striker\data\MP5_striker.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\MP5_striker\data\MP5_striker_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\MP5_striker\data\MP5_striker_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\MP5_striker\data\MP5_striker_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\MP5_striker\data\MP5_striker_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_MP7_long: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_MP7_long0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_MP7_long1";
        model = "\My_DF_Weapons_Attachments\handguard\MP7_long\MP7_long.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_MP7"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\MP7_long\data\MP7_long_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\MP7_long\data\MP7_long.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\MP7_long\data\MP7_long.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\MP7_long\data\MP7_long_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\MP7_long\data\MP7_long_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\MP7_long\data\MP7_long_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\MP7_long\data\MP7_long_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_P90_FourTri: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_P90_FourTri0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_P90_FourTri1";
        model = "\My_DF_Weapons_Attachments\handguard\P90_FourTri\P90_FourTri.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 300;
        attachments[] = {
            "DF_frog_left",
            "DF_frog_right"
        };
        inventorySlot[] = {
            "DF_handguard_P90"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "camo",
            "camo2"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\P90_FourTri\data\P90_FourTri_co.paa",
            "My_DF_Weapons_SMG\P90\data\handguard\P90_handguard_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\P90_FourTri\data\P90_FourTri.rvmat",
            "My_DF_Weapons_SMG\P90\data\handguard\P90_handguard.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\P90_FourTri\data\P90_FourTri.rvmat",
                                "My_DF_Weapons_SMG\P90\data\handguard\P90_handguard.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\P90_FourTri\data\P90_FourTri_worn.rvmat",
                                "My_DF_Weapons_SMG\P90\data\handguard\P90_handguard_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\P90_FourTri\data\P90_FourTri_damage.rvmat",
                                "My_DF_Weapons_SMG\P90\data\handguard\P90_handguard_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\P90_FourTri\data\P90_FourTri_damage.rvmat",
                                "My_DF_Weapons_SMG\P90\data\handguard\P90_handguard_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\P90_FourTri\data\P90_FourTri_destruct.rvmat",
                                "My_DF_Weapons_SMG\P90\data\handguard\P90_handguard_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_QBZ191_long: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_QBZ191_long0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_QBZ191_long1";
        model = "\My_DF_Weapons_Attachments\handguard\QBZ191_long\QBZ191_long.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_frog_up2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_QBZ191"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\QBZ191_long\data\QBZ191_long_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\QBZ191_long\data\QBZ191_long.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\QBZ191_long\data\QBZ191_long.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\QBZ191_long\data\QBZ191_long_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\QBZ191_long\data\QBZ191_long_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\QBZ191_long\data\QBZ191_long_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\QBZ191_long\data\QBZ191_long_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_QBZ95_mlok: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_QBZ95_mlok0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_QBZ95_mlok1";
        model = "\My_DF_Weapons_Attachments\handguard\QBZ95_mlok\QBZ95_mlok.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 400;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_left",
            "DF_frog_right",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_QBZ95"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\QBZ95_mlok\data\QBZ95_mlok_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\QBZ95_mlok\data\QBZ95_mlok.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\QBZ95_mlok\data\QBZ95_mlok.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\QBZ95_mlok\data\QBZ95_mlok_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\QBZ95_mlok\data\QBZ95_mlok_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\QBZ95_mlok\data\QBZ95_mlok_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\QBZ95_mlok\data\QBZ95_mlok_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_QCQ171_ForeGrip: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_QCQ171_ForeGrip0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_QCQ171_ForeGrip1";
        model = "\My_DF_Weapons_Attachments\handguard\QCQ171_ForeGrip\QCQ171_ForeGrip.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 300;
        attachments[] = {
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up"
        };
        inventorySlot[] = {
            "DF_handguard_QCQ171"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\QCQ171\data\barrel\QCQ171_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\QCQ171_ForeGrip\data\QCQ171_ForeGrip_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\QCQ171\data\barrel\QCQ171_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\QCQ171_ForeGrip\data\QCQ171_ForeGrip.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_SMG\QCQ171\data\barrel\QCQ171_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\QCQ171_ForeGrip\data\QCQ171_ForeGrip.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\QCQ171\data\barrel\QCQ171_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\QCQ171_ForeGrip\data\QCQ171_ForeGrip_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\QCQ171\data\barrel\QCQ171_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\QCQ171_ForeGrip\data\QCQ171_ForeGrip_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\QCQ171\data\barrel\QCQ171_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\QCQ171_ForeGrip\data\QCQ171_ForeGrip_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\QCQ171\data\barrel\QCQ171_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\QCQ171_ForeGrip\data\QCQ171_ForeGrip_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_QCQ171_Tactical: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_QCQ171_Tactical0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_QCQ171_Tactical1";
        model = "\My_DF_Weapons_Attachments\handguard\QCQ171_Tactical\QCQ171_Tactical.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_frog_up2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_QCQ171"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\QCQ171_Tactical\data\barrel\QCQ171_Tactical_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\QCQ171_Tactical\data\QCQ171_Tactical_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\QCQ171_Tactical\data\barrel\QCQ171_Tactical_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\QCQ171_Tactical\data\QCQ171_Tactical.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\QCQ171_Tactical\data\barrel\QCQ171_Tactical_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\QCQ171_Tactical\data\QCQ171_Tactical.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\QCQ171_Tactical\data\barrel\QCQ171_Tactical_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\QCQ171_Tactical\data\QCQ171_Tactical_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\QCQ171_Tactical\data\barrel\QCQ171_Tactical_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\QCQ171_Tactical\data\QCQ171_Tactical_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\QCQ171_Tactical\data\barrel\QCQ171_Tactical_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\QCQ171_Tactical\data\QCQ171_Tactical_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\QCQ171_Tactical\data\barrel\QCQ171_Tactical_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\QCQ171_Tactical\data\QCQ171_Tactical_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_QCQ171_Tactical2: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_QCQ171_Tactical20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_QCQ171_Tactical21";
        model = "\My_DF_Weapons_Attachments\handguard\QCQ171_Tactical\QCQ171_Tactical2.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_frog_up2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_QCQ171"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.69999999, 0.69999999, 0.69999999 };
        swayModifier[] = { 0.89999998, 0.89999998, 0.89999998 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_SMG\QCQ171\data\barrel\QCQ171_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\QCQ171_Tactical\data\QCQ171_Tactical_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_SMG\QCQ171\data\barrel\QCQ171_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\QCQ171_Tactical\data\QCQ171_Tactical.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_SMG\QCQ171\data\barrel\QCQ171_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\QCQ171_Tactical\data\QCQ171_Tactical.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_SMG\QCQ171\data\barrel\QCQ171_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\QCQ171_Tactical\data\QCQ171_Tactical_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_SMG\QCQ171\data\barrel\QCQ171_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\QCQ171_Tactical\data\QCQ171_Tactical_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_SMG\QCQ171\data\barrel\QCQ171_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\QCQ171_Tactical\data\QCQ171_Tactical_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_SMG\QCQ171\data\barrel\QCQ171_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\QCQ171_Tactical\data\QCQ171_Tactical_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_QJB201_Short: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_QJB201_Short0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_QJB201_Short1";
        model = "\My_DF_Weapons_Attachments\handguard\QJB201_Short\QJB201_Short.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_up",
            "DF_frog_left",
            "DF_frog_right"
        };
        inventorySlot[] = {
            "DF_handguard_QJB201"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\QJB201_Short\data\QJB201_Short_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\QJB201_Short\data\QJB201_Short.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\QJB201_Short\data\QJB201_Short.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\QJB201_Short\data\QJB201_Short_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\QJB201_Short\data\QJB201_Short_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\QJB201_Short\data\QJB201_Short_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\QJB201_Short\data\QJB201_Short_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_QJB201_Tac: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_QJB201_Tac0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_QJB201_Tac1";
        model = "\My_DF_Weapons_Attachments\handguard\QJB201_Tac\QJB201_Tac.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_up",
            "DF_frog_left",
            "DF_frog_right",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_QJB201"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\QJB201_Tac\data\QJB201_Tac_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\QJB201_Tac\data\QJB201_Tac.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\QJB201_Tac\data\QJB201_Tac.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\QJB201_Tac\data\QJB201_Tac_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\QJB201_Tac\data\QJB201_Tac_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\QJB201_Tac\data\QJB201_Tac_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\QJB201_Tac\data\QJB201_Tac_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_R93handguard: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_R93handguard0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_R93handguard1";
        model = "\My_DF_Weapons_Attachments\handguard\R93handguard\R93handguard.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        attachments[] = {
            "DF_frog_up",
            "DF_frog_left",
            "DF_frog_right"
        };
        inventorySlot[] = {
            "DF_handguard_R93"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\R93handguard\data\R93handguard_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\R93handguard\data\R93handguard.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\R93handguard\data\R93handguard.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\R93handguard\data\R93handguard_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\R93handguard\data\R93handguard_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\R93handguard\data\R93handguard_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\R93handguard\data\R93handguard_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_SCARH_long: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_SCARH_long0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_SCARH_long1";
        model = "\My_DF_Weapons_Attachments\handguard\SCARH_long\SCARH_long.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_frog_up2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_SCARH"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\SCARH_long\data\barrel\SCARH_long_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\SCARH_long\data\SCARH_long_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\SCARH_long\data\barrel\SCARH_long_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\SCARH_long\data\SCARH_long.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\SCARH_long\data\barrel\SCARH_long_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\SCARH_long\data\SCARH_long.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\SCARH_long\data\barrel\SCARH_long_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\SCARH_long\data\SCARH_long_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\SCARH_long\data\barrel\SCARH_long_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\SCARH_long\data\SCARH_long_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\SCARH_long\data\barrel\SCARH_long_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\SCARH_long\data\SCARH_long_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\SCARH_long\data\barrel\SCARH_long_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\SCARH_long\data\SCARH_long_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_SCARH_short: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_SCARH_short0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_SCARH_short1";
        model = "\My_DF_Weapons_Attachments\handguard\SCARH_short\SCARH_short.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up"
        };
        inventorySlot[] = {
            "DF_handguard_SCARH"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\SCARH_short\data\barrel\SCARH_short_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\SCARH_short\data\SCARH_short_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\SCARH_short\data\barrel\SCARH_short_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\SCARH_short\data\SCARH_short.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\SCARH_short\data\barrel\SCARH_short_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\SCARH_short\data\SCARH_short.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\SCARH_short\data\barrel\SCARH_short_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\SCARH_short\data\SCARH_short_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\SCARH_short\data\barrel\SCARH_short_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\SCARH_short\data\SCARH_short_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\SCARH_short\data\barrel\SCARH_short_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\SCARH_short\data\SCARH_short_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\SCARH_short\data\barrel\SCARH_short_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\SCARH_short\data\SCARH_short_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_SG553_long: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_SG553_long0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_SG553_long1";
        model = "\My_DF_Weapons_Attachments\handguard\SG553_long\SG553_long.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_frog_up2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_SG553"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\SG553_long\data\SG553_long_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\SG553_long\data\SG553_long.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\SG553_long\data\SG553_long.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\SG553_long\data\SG553_long_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\SG553_long\data\SG553_long_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\SG553_long\data\SG553_long_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\SG553_long\data\SG553_long_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_SKS_adv: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_SKS_adv0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_SKS_adv1";
        model = "\My_DF_Weapons_Attachments\handguard\SKS_adv\SKS_adv.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        simpleHiddenSelections[] = {
            "stock",
            "pisg"
        };
        attachments[] = {
            "DF_stock",
            "DF_ak_pisg",
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_SKS"
        };
        itemSize[] = { 5, 2 };
        recoilModifier[] = { 0.75, 0.75, 0.75 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\SKS_adv\data\SKS_adv_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\SKS_adv\data\SKS_adv.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\SKS_adv\data\SKS_adv.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\SKS_adv\data\SKS_adv_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\SKS_adv\data\SKS_adv_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\SKS_adv\data\SKS_adv_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\SKS_adv\data\SKS_adv_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_SKS_comp: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_SKS_comp0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_SKS_comp1";
        model = "\My_DF_Weapons_Attachments\handguard\SKS_comp\SKS_comp.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 600;
        simpleHiddenSelections[] = {
            "stock",
            "pisg"
        };
        attachments[] = {
            "DF_stock",
            "DF_ak_pisg",
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right"
        };
        inventorySlot[] = {
            "DF_handguard_SKS"
        };
        itemSize[] = { 5, 2 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\SKS_comp\data\SKS_comp_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\SKS_comp\data\SKS_comp.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\SKS_comp\data\SKS_comp.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\SKS_comp\data\SKS_comp_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\SKS_comp\data\SKS_comp_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\SKS_comp\data\SKS_comp_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\SKS_comp\data\SKS_comp_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_SMG45_Tactical: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_SMG45_Tactical0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_SMG45_Tactical1";
        model = "\My_DF_Weapons_Attachments\handguard\SMG45_Tactical\SMG45_Tactical.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_SMG45"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\SMG45_Tactical\data\SMG45_Tactical_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\SMG45_Tactical\data\SMG45_Tactical.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\SMG45_Tactical\data\SMG45_Tactical.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\SMG45_Tactical\data\SMG45_Tactical_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\SMG45_Tactical\data\SMG45_Tactical_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\SMG45_Tactical\data\SMG45_Tactical_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\SMG45_Tactical\data\SMG45_Tactical_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_SR25_cqb: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_SR25_cqb0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_SR25_cqb1";
        model = "\My_DF_Weapons_Attachments\handguard\SR25_cqb\SR25_cqb.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_frog_up2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_SR25"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\SR25_cqb\data\SR25_cqb_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\SR25_cqb\data\SR25_cqb.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\SR25_cqb\data\SR25_cqb.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\SR25_cqb\data\SR25_cqb_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\SR25_cqb\data\SR25_cqb_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\SR25_cqb\data\SR25_cqb_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\SR25_cqb\data\SR25_cqb_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_SR3M_Silencer: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_SR3M_Silencer0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_SR3M_Silencer1";
        model = "\My_DF_Weapons_Attachments\handguard\SR3M_Silencer\SR3M_Silencer.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 400;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up"
        };
        inventorySlot[] = {
            "DF_handguard_SR3M"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\SR3M_Silencer\data\barrel\SR3M_Silencer_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\SR3M_Silencer\data\SR3M_Silencer_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\SR3M_Silencer\data\barrel\SR3M_Silencer_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\SR3M_Silencer\data\SR3M_Silencer.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\SR3M_Silencer\data\barrel\SR3M_Silencer_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\SR3M_Silencer\data\SR3M_Silencer.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\SR3M_Silencer\data\barrel\SR3M_Silencer_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\SR3M_Silencer\data\SR3M_Silencer_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\SR3M_Silencer\data\barrel\SR3M_Silencer_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\SR3M_Silencer\data\SR3M_Silencer_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\SR3M_Silencer\data\barrel\SR3M_Silencer_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\SR3M_Silencer\data\SR3M_Silencer_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\SR3M_Silencer\data\barrel\SR3M_Silencer_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\SR3M_Silencer\data\SR3M_Silencer_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_SVD_rail: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_SVD_rail0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_SVD_rail1";
        model = "\My_DF_Weapons_Attachments\handguard\SVD_rail\SVD_rail.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_SVD"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\SVD_rail\data\SVD_rail_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\SVD_rail\data\SVD_rail.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\SVD_rail\data\SVD_rail.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\SVD_rail\data\SVD_rail_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\SVD_rail\data\SVD_rail_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\SVD_rail\data\SVD_rail_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\SVD_rail\data\SVD_rail_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_SVD_std: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_SVD_std0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_SVD_std1";
        model = "\My_DF_Weapons_Attachments\handguard\SVD_std\SVD_std.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        simpleHiddenSelections[] = {
            "mlok_rail"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right"
        };
        inventorySlot[] = {
            "DF_handguard_SVD"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\SVD_std\data\SVD_std_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\SVD_std\data\SVD_std.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\SVD_std\data\SVD_std.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\SVD_std\data\SVD_std_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\SVD_std\data\SVD_std_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\SVD_std\data\SVD_std_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\SVD_std\data\SVD_std_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_Uzi_foregrip: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_Uzi_foregrip0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_Uzi_foregrip1";
        model = "\My_DF_Weapons_Attachments\handguard\Uzi_foregrip\Uzi_foregrip.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        attachments[] = {};
        inventorySlot[] = {
            "DF_handguard_Uzi"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.95, 0.95, 0.95 };
        swayModifier[] = { 0.75, 0.75, 0.75 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\Uzi_foregrip\data\Uzi_foregrip_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\Uzi_foregrip\data\Uzi_foregrip.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\Uzi_foregrip\data\Uzi_foregrip.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\Uzi_foregrip\data\Uzi_foregrip_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\Uzi_foregrip\data\Uzi_foregrip_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\Uzi_foregrip\data\Uzi_foregrip_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\Uzi_foregrip\data\Uzi_foregrip_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_Uzi_military: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_Uzi_military0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_Uzi_military1";
        model = "\My_DF_Weapons_Attachments\handguard\Uzi_military\Uzi_military.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 300;
        simpleHiddenSelections[] = {
            "rail_l",
            "rail_r"
        };
        attachments[] = {
            "DF_frog_down",
            "DF_frog_left",
            "DF_frog_right"
        };
        inventorySlot[] = {
            "DF_handguard_Uzi"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\Uzi_military\data\Uzi_military_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\Uzi_military\data\Uzi_military.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\Uzi_military\data\Uzi_military.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\Uzi_military\data\Uzi_military_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\Uzi_military\data\Uzi_military_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\Uzi_military\data\Uzi_military_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\Uzi_military\data\Uzi_military_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_Vector_4PicHan: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_Vector_4PicHan0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_Vector_4PicHan1";
        model = "\My_DF_Weapons_Attachments\handguard\Vector_4PicHan\Vector_4PicHan.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        attachments[] = {
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_Vector"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\UziLong\data\UziLong_co.paa",
            "My_DF_Weapons_Attachments\handguard\Vector_4PicHan\data\Vector_4PicHan_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\UziLong\data\UziLong.rvmat",
            "My_DF_Weapons_Attachments\handguard\Vector_4PicHan\data\Vector_4PicHan.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\UziLong\data\UziLong.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Vector_4PicHan\data\Vector_4PicHan.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\UziLong\data\UziLong_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Vector_4PicHan\data\Vector_4PicHan_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\UziLong\data\UziLong_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Vector_4PicHan\data\Vector_4PicHan_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\UziLong\data\UziLong_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Vector_4PicHan\data\Vector_4PicHan_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\UziLong\data\UziLong_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Vector_4PicHan\data\Vector_4PicHan_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_Vector_ExtraExtented: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_Vector_ExtraExtented0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_Vector_ExtraExtented1";
        model = "\My_DF_Weapons_Attachments\handguard\Vector_ExtraExtented\Vector_ExtraExtented.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 700;
        attachments[] = {
            "DF_frog_left",
            "DF_frog_right",
            "DF_frog_up",
            "DF_frog_left2",
            "DF_frog_right2",
            "DF_frog_up2",
            "DF_bipod"
        };
        inventorySlot[] = {
            "DF_handguard_Vector"
        };
        itemSize[] = { 3, 1 };
        recoilModifier[] = { 0.8, 0.8, 0.8 };
        swayModifier[] = { 0.8, 0.8, 0.8 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\UziLong\data\UziLong_co.paa",
            "My_DF_Weapons_Attachments\handguard\Vector_ExtraExtented\data\Vector_ExtraExtented_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\UziLong\data\UziLong.rvmat",
            "My_DF_Weapons_Attachments\handguard\Vector_ExtraExtented\data\Vector_ExtraExtented.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\UziLong\data\UziLong.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Vector_ExtraExtented\data\Vector_ExtraExtented.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\UziLong\data\UziLong_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Vector_ExtraExtented\data\Vector_ExtraExtented_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\UziLong\data\UziLong_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Vector_ExtraExtented\data\Vector_ExtraExtented_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\UziLong\data\UziLong_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Vector_ExtraExtented\data\Vector_ExtraExtented_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\UziLong\data\UziLong_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Vector_ExtraExtented\data\Vector_ExtraExtented_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_Vector_Striker: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_Vector_Striker0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_Vector_Striker1";
        model = "\My_DF_Weapons_Attachments\handguard\Vector_Striker\Vector_Striker.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        attachments[] = {
            "DF_frog_left",
            "DF_frog_right"
        };
        inventorySlot[] = {
            "DF_handguard_Vector"
        };
        itemSize[] = { 2, 2 };
        recoilModifier[] = { 0.85, 0.85, 0.85 };
        swayModifier[] = { 0.9, 0.9, 0.9 };
        hiddenSelections[] = {
            "barrel",
            "handguard"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_co.paa",
            "My_DF_Weapons_Attachments\handguard\Vector_Striker\data\Vector_Striker_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel.rvmat",
            "My_DF_Weapons_Attachments\handguard\Vector_Striker\data\Vector_Striker.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Vector_Striker\data\Vector_Striker.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_worn.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Vector_Striker\data\Vector_Striker_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Vector_Striker\data\Vector_Striker_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_damage.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Vector_Striker\data\Vector_Striker_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\barrel\SG553_barrel\data\SG553_barrel_destruct.rvmat",
                                "My_DF_Weapons_Attachments\handguard\Vector_Striker\data\Vector_Striker_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
    class My_DF_Weapons_Attachments_handguard_PKMZenitKit: My_DF_Weapons_Attachments_handguard_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_handguard_PKMZenitKit0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_handguard_PKMZenitKit1";
        model = "\My_DF_Weapons_Attachments\handguard\ZenitKit\ZenitKit.p3d";
        rotationFlags = 17;
        reversed = 0;
        weight = 500;
        attachments[] = {
            "DF_frog_down",
            "DF_frog_up",
            "DF_frog_left",
            "DF_frog_right",
        };
        inventorySlot[] = {
            "DF_handguard_PKM"
        };
        itemSize[] = { 2, 1 };
        recoilModifier[] = { 0.9, 0.9, 0.9 };
        swayModifier[] = { 0.85, 0.85, 0.85 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\handguard\ZenitKit\data\ZenitKit_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\handguard\ZenitKit\data\ZenitKit.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\handguard\ZenitKit\data\ZenitKit.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\handguard\ZenitKit\data\ZenitKit_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\handguard\ZenitKit\data\ZenitKit_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\handguard\ZenitKit\data\ZenitKit_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\handguard\ZenitKit\data\ZenitKit_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
    };
	class My_DF_Weapons_Attachments_handguard_Ash12_Advanced: My_DF_Weapons_Attachments_handguard_Base
	{
		scope=2;
		displayName="$STR_My_DF_Weapons_Attachments_handguard_Ash12_Advanced0";
		descriptionShort="$STR_My_DF_Weapons_Attachments_handguard_Ash12_Advanced1";
		model="\My_DF_Weapons_Attachments\handguard\Ash12_Advanced\Ash12_Advanced.p3d";
		rotationFlags=17;
		reversed=0;
		weight=300;
		attachments[]=
		{
			
		};
		inventorySlot[]=
		{
			"DF_handguard_Ash12"
		};
		itemSize[]={3,1};
		recoilModifier[]={0.85,0.85,0.85};
		swayModifier[]={0.85,0.85,0.85};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"My_DF_Weapons_Attachments\handguard\Ash12_Advanced\data\Ash12_Advanced_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"My_DF_Weapons_Attachments\handguard\Ash12_Advanced\data\Ash12_Advanced.rvmat"
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
								"My_DF_Weapons_Attachments\handguard\Ash12_Advanced\data\Ash12_Advanced.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"My_DF_Weapons_Attachments\handguard\Ash12_Advanced\data\Ash12_Advanced_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"My_DF_Weapons_Attachments\handguard\Ash12_Advanced\data\Ash12_Advanced_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"My_DF_Weapons_Attachments\handguard\Ash12_Advanced\data\Ash12_Advanced_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"My_DF_Weapons_Attachments\handguard\Ash12_Advanced\data\Ash12_Advanced_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class My_DF_Weapons_Attachments_handguard_MK4_Short: My_DF_Weapons_Attachments_handguard_Base
	{
		scope=2;
		displayName="$STR_My_DF_Weapons_Attachments_handguard_MK4_Short0";
		descriptionShort="$STR_My_DF_Weapons_Attachments_handguard_MK4_Short1";
		model="\My_DF_Weapons_Attachments\handguard\MK4_Short\MK4_Short.p3d";
		rotationFlags=17;
		reversed=0;
		weight=300;
		simpleHiddenSelections[]=
		{
			"mlok_rail"
		};
		attachments[]=
		{
			"DF_frog_down",
			"DF_frog_left",
			"DF_frog_right",
			"DF_frog_up"
		};
		inventorySlot[]=
		{
			"DF_handguard_MK4"
		};
		itemSize[]={2,1};
		recoilModifier[]={0.85,0.85,0.85};
		swayModifier[]={0.85,0.85,0.85};
		hiddenSelections[]=
		{
			"barrel",
			"handguard"
		};
		hiddenSelectionsTextures[]=
		{
			"My_DF_Weapons_Attachments\handguard\MK4_Short\data\barrel\MK4_Short_barrel_co.paa",
			"My_DF_Weapons_Attachments\handguard\MK4_Short\data\MK4_Short_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"My_DF_Weapons_Attachments\handguard\MK4_Short\data\barrel\MK4_Short_barrel.rvmat",
			"My_DF_Weapons_Attachments\handguard\MK4_Short\data\MK4_Short.rvmat"
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
								"My_DF_Weapons_Attachments\handguard\MK4_Short\data\barrel\MK4_Short_barrel.rvmat",
								"My_DF_Weapons_Attachments\handguard\MK4_Short\data\MK4_Short.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"My_DF_Weapons_Attachments\handguard\MK4_Short\data\barrel\MK4_Short_barrel_worn.rvmat",
								"My_DF_Weapons_Attachments\handguard\MK4_Short\data\MK4_Short_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"My_DF_Weapons_Attachments\handguard\MK4_Short\data\barrel\MK4_Short_barrel_damage.rvmat",
								"My_DF_Weapons_Attachments\handguard\MK4_Short\data\MK4_Short_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"My_DF_Weapons_Attachments\handguard\MK4_Short\data\barrel\MK4_Short_barrel_damage.rvmat",
								"My_DF_Weapons_Attachments\handguard\MK4_Short\data\MK4_Short_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"My_DF_Weapons_Attachments\handguard\MK4_Short\data\barrel\MK4_Short_barrel_destruct.rvmat",
								"My_DF_Weapons_Attachments\handguard\MK4_Short\data\MK4_Short_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class My_DF_Weapons_Attachments_handguard_MK4_long: My_DF_Weapons_Attachments_handguard_Base
	{
		scope=2;
		displayName="$STR_My_DF_Weapons_Attachments_handguard_MK4_long0";
		descriptionShort="$STR_My_DF_Weapons_Attachments_handguard_MK4_long1";
		model="\My_DF_Weapons_Attachments\handguard\MK4_long\MK4_long.p3d";
		rotationFlags=17;
		reversed=0;
		weight=500;
		simpleHiddenSelections[]=
		{
			"mlok_rail"
		};
		attachments[]=
		{
			"DF_frog_down",
			"DF_frog_left",
			"DF_frog_right",
			"DF_frog_up",
			"DF_frog_left2",
			"DF_frog_right2",
			"DF_frog_up2",
			"DF_bipod"
		};
		inventorySlot[]=
		{
			"DF_handguard_MK4"
		};
		itemSize[]={3,1};
		recoilModifier[]={0.8,0.8,0.8};
		swayModifier[]={0.8,0.8,0.8};
		hiddenSelections[]=
		{
			"barrel",
			"handguard"
		};
		hiddenSelectionsTextures[]=
		{
			"My_DF_Weapons_Attachments\handguard\MK4_long\data\barrel\MK4_long_barrel_co.paa",
			"My_DF_Weapons_Attachments\handguard\MK4_long\data\MK4_long_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"My_DF_Weapons_Attachments\handguard\MK4_long\data\barrel\MK4_long_barrel.rvmat",
			"My_DF_Weapons_Attachments\handguard\MK4_long\data\MK4_long.rvmat"
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
								"My_DF_Weapons_Attachments\handguard\MK4_long\data\barrel\MK4_long_barrel.rvmat",
								"My_DF_Weapons_Attachments\handguard\MK4_long\data\MK4_long.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"My_DF_Weapons_Attachments\handguard\MK4_long\data\barrel\MK4_long_barrel_worn.rvmat",
								"My_DF_Weapons_Attachments\handguard\MK4_long\data\MK4_long_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"My_DF_Weapons_Attachments\handguard\MK4_long\data\barrel\MK4_long_barrel_damage.rvmat",
								"My_DF_Weapons_Attachments\handguard\MK4_long\data\MK4_long_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"My_DF_Weapons_Attachments\handguard\MK4_long\data\barrel\MK4_long_barrel_damage.rvmat",
								"My_DF_Weapons_Attachments\handguard\MK4_long\data\MK4_long_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"My_DF_Weapons_Attachments\handguard\MK4_long\data\barrel\MK4_long_barrel_destruct.rvmat",
								"My_DF_Weapons_Attachments\handguard\MK4_long\data\MK4_long_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class My_DF_Weapons_Attachments_handguard_SR25_Carbon: My_DF_Weapons_Attachments_handguard_Base
	{
		scope=2;
		displayName="$STR_My_DF_Weapons_Attachments_handguard_SR25_Carbon0";
		descriptionShort="$STR_My_DF_Weapons_Attachments_handguard_SR25_Carbon1";
		model="\My_DF_Weapons_Attachments\handguard\SR25_Carbon\SR25_Carbon.p3d";
		rotationFlags=17;
		reversed=0;
		weight=700;
		simpleHiddenSelections[]=
		{
			"mlok_rail"
		};
		attachments[]=
		{
			"DF_frog_down",
			"DF_frog_left",
			"DF_frog_right",
			"DF_frog_up",
			"DF_frog_left2",
			"DF_frog_right2",
			"DF_frog_up2",
			"DF_bipod"
		};
		inventorySlot[]=
		{
			"DF_handguard_SR25"
		};
		itemSize[]={3,1};
		recoilModifier[]={0.9,0.9,0.9};
		swayModifier[]={0.85,0.85,0.85};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"My_DF_Weapons_Attachments\handguard\SR25_Carbon\data\SR25_Carbon_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"My_DF_Weapons_Attachments\handguard\SR25_Carbon\data\SR25_Carbon.rvmat"
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
								"My_DF_Weapons_Attachments\handguard\SR25_Carbon\data\SR25_Carbon.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"My_DF_Weapons_Attachments\handguard\SR25_Carbon\data\SR25_Carbon_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"My_DF_Weapons_Attachments\handguard\SR25_Carbon\data\SR25_Carbon_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"My_DF_Weapons_Attachments\handguard\SR25_Carbon\data\SR25_Carbon_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"My_DF_Weapons_Attachments\handguard\SR25_Carbon\data\SR25_Carbon_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class My_DF_Weapons_Attachments_handguard_MP7_Advanced: My_DF_Weapons_Attachments_handguard_Base
	{
		scope=2;
		displayName="$STR_My_DF_Weapons_Attachments_handguard_MP7_Advanced0";
		descriptionShort="$STR_My_DF_Weapons_Attachments_handguard_MP7_Advanced1";
		model="\My_DF_Weapons_Attachments\handguard\MP7_Advanced\MP7_Advanced.p3d";
		rotationFlags=17;
		reversed=0;
		weight=500;
		attachments[]=
		{
			"DF_frog_down"
		};
		inventorySlot[]=
		{
			"DF_handguard_MP7"
		};
		itemSize[]={2,1};
		recoilModifier[]={0.85,0.85,0.85};
		swayModifier[]={0.95,0.95,0.95};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"My_DF_Weapons_Attachments\handguard\MP7_Advanced\data\MP7_Advanced_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"My_DF_Weapons_Attachments\handguard\MP7_Advanced\data\MP7_Advanced.rvmat"
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
								"My_DF_Weapons_Attachments\handguard\MP7_Advanced\data\MP7_Advanced.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"My_DF_Weapons_Attachments\handguard\MP7_Advanced\data\MP7_Advanced_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"My_DF_Weapons_Attachments\handguard\MP7_Advanced\data\MP7_Advanced_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"My_DF_Weapons_Attachments\handguard\MP7_Advanced\data\MP7_Advanced_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"My_DF_Weapons_Attachments\handguard\MP7_Advanced\data\MP7_Advanced_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class My_DF_Weapons_Attachments_handguard_SG553_Advanced: My_DF_Weapons_Attachments_handguard_Base
	{
		scope=2;
		displayName="$STR_My_DF_Weapons_Attachments_handguard_SG553_Advanced0";
		descriptionShort="$STR_My_DF_Weapons_Attachments_handguard_SG553_Advanced1";
		model="\My_DF_Weapons_Attachments\handguard\SG553_Advanced\SG553_Advanced.p3d";
		rotationFlags=17;
		reversed=0;
		weight=500;
		simpleHiddenSelections[]=
		{
			"mlok_rail"
		};
		attachments[]=
		{
			"DF_frog_down",
			"DF_frog_left",
			"DF_frog_right",
			"DF_frog_up"
		};
		inventorySlot[]=
		{
			"DF_handguard_SG553"
		};
		itemSize[]={2,1};
		recoilModifier[]={0.85,0.85,0.85};
		swayModifier[]={0.9,0.9,0.9};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"My_DF_Weapons_Attachments\handguard\SG553_Advanced\data\SG553_Advanced_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"My_DF_Weapons_Attachments\handguard\SG553_Advanced\data\SG553_Advanced.rvmat"
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
								"My_DF_Weapons_Attachments\handguard\SG553_Advanced\data\SG553_Advanced.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"My_DF_Weapons_Attachments\handguard\SG553_Advanced\data\SG553_Advanced_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"My_DF_Weapons_Attachments\handguard\SG553_Advanced\data\SG553_Advanced_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"My_DF_Weapons_Attachments\handguard\SG553_Advanced\data\SG553_Advanced_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"My_DF_Weapons_Attachments\handguard\SG553_Advanced\data\SG553_Advanced_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};