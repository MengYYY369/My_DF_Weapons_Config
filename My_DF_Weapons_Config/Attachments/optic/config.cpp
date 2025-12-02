class CfgPatches
{
	class My_DF_Weapons_Attachments_optic_config
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Optics",
			"My_DF_Weapons_Attachments_optic"
		};
	};
};
class CfgVehicles
{
    class My_DF_Weapons_Attachments_optic_Base;
    class My_DF_Weapons_Attachments_optic_1p: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_1p0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_1p1";
        model = "\My_DF_Weapons_Attachments\optic\1p\1p.p3d";
        debug_ItemCategory = 3;
        attachments[] = {
            "BatteryD"
        };
        animClass = "Binoculars";
        rotationFlags = 17;
        reversed = 0;
        weight = 2000;
        itemSize[] = { 3, 2 };
        simulation = "itemoptics";
        dispersionModifier = -0.001;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope_temp";
        cameraDir = "cameraDir";
        NVOptic = 1;
        repairableWithKits[] = { 7 };
        repairCosts[] = { 25 };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\1p\data\1p_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\1p\data\1p.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "My_DF_Weapons_Attachments\optic\1p\data\1p.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "My_DF_Weapons_Attachments\optic\1p\data\1p_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "My_DF_Weapons_Attachments\optic\1p\data\1p_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "My_DF_Weapons_Attachments\optic\1p\data\1p_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "My_DF_Weapons_Attachments\optic\1p\data\1p_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class OpticsInfo
        {
            memoryPointCamera = "eyeScope_temp";
            cameraDir = "cameraDir";
            useModelOptics = 1;
            modelOptics = "\My_DF_Weapons_Attachments\optic\1p\1p_opticview.p3d";
            preloadOpticType = "Preload2DOptic_DF_1P";
            opticsDisablePeripherialVision = 0.67000002;
            opticsFlare = 1;
            opticsPPEffects[] = {
                "OpticsCHAbera3",
                "OpticsBlur1"
            };
            opticsZoomMin = "0.3926/3";
            opticsZoomMax = "0.3926/3";
            opticsZoomInit = "0.3926/3";
            distanceZoomMin = 100;
            distanceZoomMax = 700;
            discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
        };
        class EnergyManager
        {
            hasIcon = 1;
            energyUsagePerSecond = 0.02;
            plugType = 1;
            attachmentAction = 1;
        };
    };
    class My_DF_Weapons_Attachments_optic_ACOG93: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_ACOG930";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_ACOG931";
        model = "\My_DF_Weapons_Attachments\optic\ACOG93\ACOG93.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        rotationFlags = 16;
        reversed = 0;
        weight = 400;
        itemSize[] = { 3, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.001;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\ACOG93\data\ACOG93_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\ACOG93\data\ACOG93.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
                                "My_DF_Weapons_Attachments\optic\ACOG93\data\ACOG93.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
                                "My_DF_Weapons_Attachments\optic\ACOG93\data\ACOG93_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\ACOG93\data\ACOG93_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\ACOG93\data\ACOG93_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\ACOG93\data\ACOG93_destruct.rvmat"
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
            opticsZoomMin = "0.3926/6";
            opticsZoomMax = "0.3926/6";
            opticsZoomInit = "0.3926/6";
            distanceZoomMin = 100;
            distanceZoomMax = 1000;
            discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
        };
    };
    class My_DF_Weapons_Attachments_optic_acog_remake: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_acog_remake0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_acog_remake1";
        model = "\My_DF_Weapons_Attachments\optic\acog_remake\acog_remake.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        rotationFlags = 16;
        reversed = 0;
        weight = 400;
        itemSize[] = { 2, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.001;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\acog_remake\data\acog_remake_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\acog_remake\data\acog_remake.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
                                "My_DF_Weapons_Attachments\optic\acog_remake\data\acog_remake.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
                                "My_DF_Weapons_Attachments\optic\acog_remake\data\acog_remake_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\acog_remake\data\acog_remake_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\acog_remake\data\acog_remake_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\acog_remake\data\acog_remake_destruct.rvmat"
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
            opticsZoomMin = "0.3926/3.5";
            opticsZoomMax = "0.3926/3.5";
            opticsZoomInit = "0.3926/3.5";
            distanceZoomMin = 100;
            distanceZoomMax = 600;
            discreteDistance[] = { 100, 200, 300, 400, 500, 600 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
        };
    };
    class My_DF_Weapons_Attachments_optic_aimpoint5000: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_aimpoint50000";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_aimpoint50001";
        model = "\My_DF_Weapons_Attachments\optic\aimpoint5000\aimpoint5000.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        rotationFlags = 16;
        reversed = 0;
        weight = 400;
        itemSize[] = { 2, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.001;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\aimpoint5000\data\aimpoint5000_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\aimpoint5000\data\aimpoint5000.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
                                "My_DF_Weapons_Attachments\optic\aimpoint5000\data\aimpoint5000.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
                                "My_DF_Weapons_Attachments\optic\aimpoint5000\data\aimpoint5000_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\aimpoint5000\data\aimpoint5000_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\aimpoint5000\data\aimpoint5000_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\aimpoint5000\data\aimpoint5000_destruct.rvmat"
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
            opticsZoomMin = "0.3926/2";
            opticsZoomMax = "0.3926/2";
            opticsZoomInit = "0.3926/2";
            distanceZoomMin = 25;
            distanceZoomMax = 50;
            discreteDistance[] = { 25, 50 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
        };
    };
    class My_DF_Weapons_Attachments_optic_aimpoint_pro: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_aimpoint_pro0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_aimpoint_pro1";
        model = "\My_DF_Weapons_Attachments\optic\aimpoint_pro\aimpoint_pro.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        rotationFlags = 16;
        reversed = 0;
        weight = 400;
        itemSize[] = { 2, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.001;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\aimpoint_pro\data\aimpoint_pro_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\aimpoint_pro\data\aimpoint_pro.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
                                "My_DF_Weapons_Attachments\optic\aimpoint_pro\data\aimpoint_pro.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
                                "My_DF_Weapons_Attachments\optic\aimpoint_pro\data\aimpoint_pro_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\aimpoint_pro\data\aimpoint_pro_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\aimpoint_pro\data\aimpoint_pro_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\aimpoint_pro\data\aimpoint_pro_destruct.rvmat"
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
    };
    class My_DF_Weapons_Attachments_optic_aimpoint_t2: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_aimpoint_t20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_aimpoint_t21";
        model = "\My_DF_Weapons_Attachments\optic\aimpoint_t2\aimpoint_t2.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        attachments[] = {
            "BatteryD"
        };
        rotationFlags = 16;
        reversed = 0;
        weight = 200;
        itemSize[] = { 2, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.00050000002;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        hiddenSelections[] = {
            "camo",
            "reddot"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\aimpoint_t2\data\aimpoint_t2_co.paa",
            ""
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\aimpoint_t2\data\aimpoint_t2.rvmat",
            ""
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\aimpoint_t2\data\aimpoint_t2.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\aimpoint_t2\data\aimpoint_t2_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\aimpoint_t2\data\aimpoint_t2_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\aimpoint_t2\data\aimpoint_t2_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\aimpoint_t2\data\aimpoint_t2_destruct.rvmat"
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
            opticsZoomMin = 0.52359998;
            opticsZoomMax = 0.52359998;
            opticsZoomInit = 0.52359998;
            distanceZoomMin = 25;
            distanceZoomMax = 50;
            discreteDistance[] = { 25, 50 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
            opticSightTexture = "My_DF_Weapons_Attachments\optic\data\dot_red_ca.paa";
        };
        class EnergyManager
        {
            hasIcon = 1;
            energyUsagePerSecond = 0.02;
            plugType = 1;
            attachmentAction = 1;
        };
    };
    class My_DF_Weapons_Attachments_optic_Canted: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_Canted0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_Canted1";
        model = "\My_DF_Weapons_Attachments\optic\Canted\Canted.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        rotationFlags = 16;
        reversed = 0;
        weight = 200;
        itemSize[] = { 1, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.00050000002;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        inventorySlot[] = {
            "weaponOptics",
            "pistolOptics",
            "weaponOpticsCrossbow"
        };
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\Canted\data\Canted_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\Canted\data\Canted.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\Canted\data\Canted.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\Canted\data\Canted_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\Canted\data\Canted_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\Canted\data\Canted_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\Canted\data\Canted_destruct.rvmat"
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
            opticsZoomMin = 0.52359998;
            opticsZoomMax = 0.52359998;
            opticsZoomInit = 0.52359998;
            distanceZoomMin = 25;
            distanceZoomMax = 50;
            discreteDistance[] = { 25, 50 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
        };
    };
    class My_DF_Weapons_Attachments_optic_Mount_Base;
    class My_DF_Weapons_Attachments_optic_compact_point: My_DF_Weapons_Attachments_optic_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_compact_point0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_compact_point1";
        model = "\My_DF_Weapons_Attachments\optic\compact_point\compact_point.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        attachments[] = {
            "BatteryD"
        };
        rotationFlags = 16;
        reversed = 0;
        weight = 200;
        itemSize[] = { 1, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.00050000002;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        inventorySlot[] = {
            "weaponOptics",
            "pistolOptics",
            "weaponOpticsCrossbow"
        };
        simpleHiddenSelections[] = {
            "mount"
        };
        hiddenSelections[] = {
            "camo",
            "reddot"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\compact_point\data\compact_point_co.paa",
            ""
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\compact_point\data\compact_point.rvmat",
            ""
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\compact_point\data\compact_point.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\compact_point\data\compact_point_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\compact_point\data\compact_point_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\compact_point\data\compact_point_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\compact_point\data\compact_point_destruct.rvmat"
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
            opticsZoomMin = 0.52359998;
            opticsZoomMax = 0.52359998;
            opticsZoomInit = 0.52359998;
            distanceZoomMin = 25;
            distanceZoomMax = 50;
            discreteDistance[] = { 25, 50 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
            opticSightTexture = "My_DF_Weapons_Attachments\optic\compact_point\data\compact_point_reticle.paa";
        };
        class EnergyManager
        {
            hasIcon = 1;
            energyUsagePerSecond = 0.02;
            plugType = 1;
            attachmentAction = 1;
        };
    };
    class My_DF_Weapons_Attachments_optic_DeltaPoint: My_DF_Weapons_Attachments_optic_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_DeltaPoint0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_DeltaPoint1";
        model = "\My_DF_Weapons_Attachments\optic\DeltaPoint\DeltaPoint.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        attachments[] = {
            "BatteryD"
        };
        rotationFlags = 16;
        reversed = 0;
        weight = 200;
        itemSize[] = { 1, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.00050000002;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        inventorySlot[] = {
            "weaponOptics",
            "pistolOptics",
            "weaponOpticsCrossbow"
        };
        simpleHiddenSelections[] = {
            "mount"
        };
        hiddenSelections[] = {
            "camo",
            "reddot"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\DeltaPoint\data\DeltaPoint_co.paa",
            ""
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\DeltaPoint\data\DeltaPoint.rvmat",
            ""
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\DeltaPoint\data\DeltaPoint.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\DeltaPoint\data\DeltaPoint_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\DeltaPoint\data\DeltaPoint_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\DeltaPoint\data\DeltaPoint_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\DeltaPoint\data\DeltaPoint_destruct.rvmat"
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
            opticsZoomMin = 0.52359998;
            opticsZoomMax = 0.52359998;
            opticsZoomInit = 0.52359998;
            distanceZoomMin = 25;
            distanceZoomMax = 50;
            discreteDistance[] = { 25, 50 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
            opticSightTexture = "My_DF_Weapons_Attachments\optic\DeltaPoint\data\DeltaPoint_reticle.paa";
        };
        class EnergyManager
        {
            hasIcon = 1;
            energyUsagePerSecond = 0.02;
            plugType = 1;
            attachmentAction = 1;
        };
    };
    class My_DF_Weapons_Attachments_optic_ekp_8: My_DF_Weapons_Attachments_optic_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_ekp_80";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_ekp_81";
        model = "\My_DF_Weapons_Attachments\optic\ekp_8\ekp_8.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        attachments[] = {
            "BatteryD"
        };
        rotationFlags = 16;
        reversed = 0;
        weight = 200;
        itemSize[] = { 2, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.00050000002;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        inventorySlot[] = {
            "weaponOptics",
            "weaponOpticsCrossbow"
        };
        simpleHiddenSelections[] = {
            "mount"
        };
        hiddenSelections[] = {
            "camo",
            "reddot"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\ekp_8\data\ekp_8_co.paa",
            ""
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\ekp_8\data\ekp_8.rvmat",
            ""
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\ekp_8\data\ekp_8.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\ekp_8\data\ekp_8_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\ekp_8\data\ekp_8_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\ekp_8\data\ekp_8_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\ekp_8\data\ekp_8_destruct.rvmat"
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
            opticsZoomMin = 0.52359998;
            opticsZoomMax = 0.52359998;
            opticsZoomInit = 0.52359998;
            distanceZoomMin = 25;
            distanceZoomMax = 50;
            discreteDistance[] = { 25, 50 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
            opticSightTexture = "My_DF_Weapons_Attachments\optic\data\dot_red_ca.paa";
        };
        class EnergyManager
        {
            hasIcon = 1;
            energyUsagePerSecond = 0.02;
            plugType = 1;
            attachmentAction = 1;
        };
    };
    class My_DF_Weapons_Attachments_optic_Fastfire: My_DF_Weapons_Attachments_optic_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_Fastfire0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_Fastfire1";
        model = "\My_DF_Weapons_Attachments\optic\Fastfire\Fastfire.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        attachments[] = {
            "BatteryD"
        };
        rotationFlags = 16;
        reversed = 0;
        weight = 200;
        itemSize[] = { 1, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.00050000002;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        inventorySlot[] = {
            "weaponOptics",
            "pistolOptics",
            "weaponOpticsCrossbow"
        };
        simpleHiddenSelections[] = {
            "mount"
        };
        hiddenSelections[] = {
            "camo",
            "reddot"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\Fastfire\data\Fastfire_co.paa",
            ""
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\Fastfire\data\Fastfire.rvmat",
            ""
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\Fastfire\data\Fastfire.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\Fastfire\data\Fastfire_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\Fastfire\data\Fastfire_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\Fastfire\data\Fastfire_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\Fastfire\data\Fastfire_destruct.rvmat"
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
            opticsZoomMin = 0.52359998;
            opticsZoomMax = 0.52359998;
            opticsZoomInit = 0.52359998;
            distanceZoomMin = 25;
            distanceZoomMax = 50;
            discreteDistance[] = { 25, 50 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
            opticSightTexture = "My_DF_Weapons_Attachments\optic\data\holo_red_ca.paa";
        };
        class EnergyManager
        {
            hasIcon = 1;
            energyUsagePerSecond = 0.02;
            plugType = 1;
            attachmentAction = 1;
        };
    };
    class My_DF_Weapons_Attachments_optic_foldingRD: My_DF_Weapons_Attachments_optic_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_foldingRD0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_foldingRD1";
        model = "\My_DF_Weapons_Attachments\optic\foldingRD\foldingRD.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        attachments[] = {
            "BatteryD"
        };
        rotationFlags = 16;
        reversed = 0;
        weight = 200;
        itemSize[] = { 1, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.00050000002;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        inventorySlot[] = {
            "weaponOptics",
            "pistolOptics",
            "weaponOpticsCrossbow"
        };
        simpleHiddenSelections[] = {
            "mount"
        };
        hiddenSelections[] = {
            "camo",
            "reddot"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\foldingRD\data\foldingRD_co.paa",
            ""
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\foldingRD\data\foldingRD.rvmat",
            ""
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\foldingRD\data\foldingRD.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\foldingRD\data\foldingRD_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\foldingRD\data\foldingRD_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\foldingRD\data\foldingRD_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\foldingRD\data\foldingRD_destruct.rvmat"
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
            opticsZoomMin = 0.52359998;
            opticsZoomMax = 0.52359998;
            opticsZoomInit = 0.52359998;
            distanceZoomMin = 25;
            distanceZoomMax = 50;
            discreteDistance[] = { 25, 50 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
            opticSightTexture = "My_DF_Weapons_Attachments\optic\data\holo_red_ca.paa";
        };
        class EnergyManager
        {
            hasIcon = 1;
            energyUsagePerSecond = 0.02;
            plugType = 1;
            attachmentAction = 1;
        };
    };
    class My_DF_Weapons_Attachments_optic_hamr: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_hamr0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_hamr1";
        model = "\My_DF_Weapons_Attachments\optic\hamr\hamr.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        rotationFlags = 16;
        reversed = 0;
        weight = 500;
        itemSize[] = { 2, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.001;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\hamr\data\hamr_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\hamr\data\hamr.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
                                "My_DF_Weapons_Attachments\optic\hamr\data\hamr.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
                                "My_DF_Weapons_Attachments\optic\hamr\data\hamr_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\hamr\data\hamr_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\hamr\data\hamr_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\hamr\data\hamr_destruct.rvmat"
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
    class My_DF_Weapons_Attachments_optic_holo: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_holo0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_holo1";
        model = "\My_DF_Weapons_Attachments\optic\holo\holo.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        attachments[] = {
            "BatteryD"
        };
        rotationFlags = 16;
        reversed = 0;
        weight = 200;
        itemSize[] = { 1, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.00050000002;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        inventorySlot[] = {
            "weaponOptics",
            "pistolOptics",
            "weaponOpticsCrossbow"
        };
        hiddenSelections[] = {
            "camo",
            "reddot"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\holo\data\holo_co.paa",
            ""
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\holo\data\holo.rvmat",
            ""
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\holo\data\holo.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\holo\data\holo_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\holo\data\holo_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\holo\data\holo_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\holo\data\holo_destruct.rvmat"
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
            opticsZoomMin = 0.52359998;
            opticsZoomMax = 0.52359998;
            opticsZoomInit = 0.52359998;
            distanceZoomMin = 25;
            distanceZoomMax = 50;
            discreteDistance[] = { 25, 50 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
            opticSightTexture = "My_DF_Weapons_Attachments\optic\data\holo_red_ca.paa";
        };
        class EnergyManager
        {
            hasIcon = 1;
            energyUsagePerSecond = 0.02;
            plugType = 1;
            attachmentAction = 1;
        };
    };
    class My_DF_Weapons_Attachments_optic_holo2: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_holo20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_holo21";
        model = "\My_DF_Weapons_Attachments\optic\holo2\holo2.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        attachments[] = {
            "BatteryD"
        };
        rotationFlags = 16;
        reversed = 0;
        weight = 200;
        itemSize[] = { 1, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.00050000002;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        inventorySlot[] = {
            "weaponOptics",
            "pistolOptics",
            "weaponOpticsCrossbow"
        };
        hiddenSelections[] = {
            "camo",
            "reddot"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\holo2\data\holo2_co.paa",
            ""
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\holo2\data\holo2.rvmat",
            ""
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\holo2\data\holo2.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\holo2\data\holo2_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\holo2\data\holo2_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\holo2\data\holo2_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\holo2\data\holo2_destruct.rvmat"
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
            opticsZoomMin = 0.52359998;
            opticsZoomMax = 0.52359998;
            opticsZoomInit = 0.52359998;
            distanceZoomMin = 25;
            distanceZoomMax = 50;
            discreteDistance[] = { 25, 50 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
            opticSightTexture = "My_DF_Weapons_Attachments\optic\data\holo_red_ca.paa";
        };
        class EnergyManager
        {
            hasIcon = 1;
            energyUsagePerSecond = 0.02;
            plugType = 1;
            attachmentAction = 1;
        };
    };
    class Rangefinder;
    class My_DF_Weapons_Attachments_optic_indicatoradditive: Rangefinder
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_indicatoradditive0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_indicatoradditive1";
        model = "\My_DF_Weapons_Attachments\optic\indicatoradditive\indicatoradditive.p3d";
        simulation = "itemoptics";
        animClass = "Binoculars";
        itemSize[] = { 2, 1 };
        weight = 300;
        rotationFlags = 17;
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        rangeFinderLayout = "Gui/layouts/gameplay/rangefinder_hud_2.layout";
        inventorySlot[] = { "WalkieTalkie", "Chemlight", "weaponOptics" };
        attachments[] = { "BatteryD" };
        repairableWithKits[] = { 7 };
        repairCosts[] = { 25 };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\indicatoradditive\data\indicatoradditive_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\indicatoradditive\data\indicatoradditive.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "My_DF_Weapons_Attachments\optic\indicatoradditive\data\indicatoradditive.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "My_DF_Weapons_Attachments\optic\indicatoradditive\data\indicatoradditive_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "My_DF_Weapons_Attachments\optic\indicatoradditive\data\indicatoradditive_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "My_DF_Weapons_Attachments\optic\indicatoradditive\data\indicatoradditive_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "My_DF_Weapons_Attachments\optic\indicatoradditive\data\indicatoradditive_destruct.rvmat"
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
            modelOptics = "\dz\gear\optics\opticview_rangefinder_new.p3d";
            distanceZoomMin = 500;
            distanceZoomMax = 500;
            opticsZoomMin = "0.3926/4";
            opticsZoomMax = "0.3926/4";
            opticsZoomInit = "0.3926/4";
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
        };
        class EnergyManager
        {
            hasIcon = 1;
            energyUsagePerSecond = 0.01;
            plugType = 1;
            attachmentAction = 1;
        };
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
        class InventorySlotsOffsets
        {
            class Chemlight
            {
                position[] = {-0.02, 0.06, 0 };
                orientation[] = { 90, 10, 0 };
            };
            class WalkieTalkie
            {
                position[] = { 0, 0.06, 0 };
                orientation[] = { 0, 0, 0 };
            };
        };
        class OpticsModelInfo
        {
            healthLevels[] = { { 1, { "dz\weapons\attachments\optics\data\lensglass_ca.paa" } }, { 0.7, {} }, { 0.5, { "dz\weapons\attachments\optics\data\lensglass_damage_ca.paa" } }, { 0.3, {} }, { 0, { "dz\weapons\attachments\optics\data\lensglass_destruct_ca.paa" } } };
        };
        soundImpactType = "plastic";
    };
    class My_DF_Weapons_Attachments_optic_LPM3: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_LPM30";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_LPM31";
        model = "\My_DF_Weapons_Attachments\optic\LPM3\LPM3.p3d";
        animClass = "Binoculars";
        rotationFlags = 4;
        reversed = 0;
        weight = 700;
        itemSize[] = { 3, 1 };
        inventorySlot[] = { "weaponOptics", "weaponOpticsHunting" };
        attachments[] = { "DF_flashkill" };
        simulation = "itemoptics";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope_temp";
        cameraDir = "cameraDir";
        simpleHiddenSelections[] = {
            "flashkill"
        };
        hiddenSelections[] = {
            "camo",
            "flashkill"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\LPM3\data\LPM3_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\LPM3\data\LPM3.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "My_DF_Weapons_Attachments\optic\LPM3\data\LPM3.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "My_DF_Weapons_Attachments\optic\LPM3\data\LPM3_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "My_DF_Weapons_Attachments\optic\LPM3\data\LPM3_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "My_DF_Weapons_Attachments\optic\LPM3\data\LPM3_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "My_DF_Weapons_Attachments\optic\LPM3\data\LPM3_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class OpticsInfo
        {
            memoryPointCamera = "eyeScope_temp";
            cameraDir = "cameraDir";
            useModelOptics = 1;
            modelOptics = "\My_DF_Weapons_Attachments\optic\LPM3\LPM3_opticview.p3d";
            preloadOpticType = "Preload2DOptic_DF_LPM3";
            opticsDisablePeripherialVision = 0.67000002;
            opticsFlare = 1;
            opticsPPEffects[] = {
                "OpticsCHAbera3",
                "OpticsBlur1"
            };
            opticsZoomMin = "0.3926/5";
            opticsZoomMax = "0.3926/5";
            opticsZoomInit = "0.3926/5";
            discretefov[] = { "0.3926/5", "0.3926/10" };
            distanceZoomMin = 100;
            distanceZoomMax = 1000;
            discreteDistance[] = { 200, 300, 400, 500, 600, 700, 800 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
        };
        class OpticsModelInfo
        {
            hiddenSelections[] = { "reddot" };
            hiddenSelectionsTextures[] = { "" };
            healthLevels[] = { { 1, { "dz\weapons\attachments\optics\data\lensglass_ca.paa" } }, { 0.7, {} }, { 0.5, { "dz\weapons\attachments\optics\data\lensglass_damage_ca.paa" } }, { 0.3, {} }, { 0, { "dz\weapons\attachments\optics\data\lensglass_destruct_ca.paa" } } };
        };
    };
    class My_DF_Weapons_Attachments_optic_M157: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_M1570";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_M1571";
        model = "\My_DF_Weapons_Attachments\optic\M157\M157.p3d";
        attachments[] = { "BatteryD", "DF_flashkill" };
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        rotationFlags = 4;
        reversed = 0;
        weight = 500;
        itemSize[] = { 2, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.001;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope_temp";
        cameraDir = "cameraDir";
        simpleHiddenSelections[] = {
            "flashkill"
        };
        hiddenSelections[] = {
            "camo",
            "flashkill"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\M157\data\M157_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\M157\data\M157.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
                                "My_DF_Weapons_Attachments\optic\M157\data\M157.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
                                "My_DF_Weapons_Attachments\optic\M157\data\M157_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\M157\data\M157_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\M157\data\M157_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\M157\data\M157_destruct.rvmat"
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
            useModelOptics = 1;
            modelOptics = "\My_DF_Weapons_Attachments\optic\M157\M157_opticview.p3d";
            preloadOpticType = "Preload2DOptic_DF_M157";
            opticsDisablePeripherialVision = 0.67000002;
            opticsFlare = 1;
            opticsPPEffects[] = {
                "OpticsCHAbera3",
                "OpticsBlur1"
            };
            opticsZoomMin = "0.3926/1.5";
            opticsZoomMax = "0.3926/1.5";
            opticsZoomInit = "0.3926/1.5";
            discretefov[] = { "0.3926/1.5", "0.3926/3", "0.3926/7" };
            discreteInitIndex = 0;
            distanceZoomMin = 100;
            distanceZoomMax = 1000;
            discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
        };
        class OpticsModelInfo
        {
            hiddenSelections[] = { "reddot" };
            hiddenSelectionsTextures[] = { "" };
            healthLevels[] = { { 1, { "dz\weapons\attachments\optics\data\lensglass_ca.paa" } }, { 0.7, {} }, { 0.5, { "dz\weapons\attachments\optics\data\lensglass_damage_ca.paa" } }, { 0.3, {} }, { 0, { "dz\weapons\attachments\optics\data\lensglass_destruct_ca.paa" } } };
            opticSightTexture = "My_DF_Weapons_Attachments\optic\data\dot_red_ca.paa";
            opticSightMaterial = "dz\weapons\attachments\optics\data\tritium_medium.rvmat";
        };
        class EnergyManager
        {
            hasIcon = 1;
            energyUsagePerSecond = 0.02;
            plugType = 1;
            attachmentAction = 1;
        };
    };
    class My_DF_Weapons_Attachments_optic_okp_7: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_okp_70";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_okp_71";
        model = "\My_DF_Weapons_Attachments\optic\okp_7\okp_7.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        attachments[] = {
            "BatteryD"
        };
        rotationFlags = 16;
        reversed = 0;
        weight = 200;
        itemSize[] = { 1, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.00050000002;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        inventorySlot[] = {
            "weaponOptics",
            "pistolOptics",
            "weaponOpticsCrossbow"
        };
        hiddenSelections[] = {
            "camo",
            "reddot"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\okp_7\data\okp_7_co.paa",
            ""
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\okp_7\data\okp_7.rvmat",
            ""
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\okp_7\data\okp_7.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\okp_7\data\okp_7_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\okp_7\data\okp_7_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\okp_7\data\okp_7_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\okp_7\data\okp_7_destruct.rvmat"
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
            opticsZoomMin = 0.52359998;
            opticsZoomMax = 0.52359998;
            opticsZoomInit = 0.52359998;
            distanceZoomMin = 25;
            distanceZoomMax = 50;
            discreteDistance[] = { 25, 50 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
            opticSightTexture = "My_DF_Weapons_Attachments\optic\okp_7\data\okp_7_reticle.paa";
        };
        class EnergyManager
        {
            hasIcon = 1;
            energyUsagePerSecond = 0.02;
            plugType = 1;
            attachmentAction = 1;
        };
    };
    class My_DF_Weapons_Attachments_optic_OSIGHT: My_DF_Weapons_Attachments_optic_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_OSIGHT0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_OSIGHT1";
        model = "\My_DF_Weapons_Attachments\optic\OSIGHT\OSIGHT.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        attachments[] = {
            "BatteryD"
        };
        rotationFlags = 16;
        reversed = 0;
        weight = 200;
        itemSize[] = { 1, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.00050000002;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        inventorySlot[] = {
            "weaponOptics",
            "pistolOptics",
            "weaponOpticsCrossbow"
        };
        simpleHiddenSelections[] = {
            "mount"
        };
        hiddenSelections[] = {
            "camo",
            "reddot"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\OSIGHT\data\OSIGHT_co.paa",
            ""
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\OSIGHT\data\OSIGHT.rvmat",
            ""
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\OSIGHT\data\OSIGHT.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\OSIGHT\data\OSIGHT_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\OSIGHT\data\OSIGHT_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\OSIGHT\data\OSIGHT_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\OSIGHT\data\OSIGHT_destruct.rvmat"
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
            opticsZoomMin = 0.52359998;
            opticsZoomMax = 0.52359998;
            opticsZoomInit = 0.52359998;
            distanceZoomMin = 25;
            distanceZoomMax = 50;
            discreteDistance[] = { 25, 50 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
            opticSightTexture = "My_DF_Weapons_Attachments\optic\data\dot_green_ca.paa";
        };
        class EnergyManager
        {
            hasIcon = 1;
            energyUsagePerSecond = 0.02;
            plugType = 1;
            attachmentAction = 1;
        };
    };
    class My_DF_Weapons_Attachments_optic_pk_as: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_pk_as0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_pk_as1";
        model = "\My_DF_Weapons_Attachments\optic\pk_as\pk_as.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        rotationFlags = 16;
        reversed = 0;
        weight = 400;
        itemSize[] = { 2, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.001;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\pk_as\data\pk_as_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\pk_as\data\pk_as.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
                                "My_DF_Weapons_Attachments\optic\pk_as\data\pk_as.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
                                "My_DF_Weapons_Attachments\optic\pk_as\data\pk_as_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\pk_as\data\pk_as_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\pk_as\data\pk_as_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\pk_as\data\pk_as_destruct.rvmat"
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
            opticsZoomMin = "0.3926/2";
            opticsZoomMax = "0.3926/2";
            opticsZoomInit = "0.3926/2";
            distanceZoomMin = 25;
            distanceZoomMax = 50;
            discreteDistance[] = { 25, 50 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
        };
    };
    class My_DF_Weapons_Attachments_optic_PSO7: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_PSO70";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_PSO71";
        model = "\My_DF_Weapons_Attachments\optic\PSO7\PSO7.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        rotationFlags = 16;
        reversed = 0;
        weight = 400;
        itemSize[] = { 2, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.001;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        inventorySlot[] = {
            "weaponOptics",
            "weaponOpticsAK"
        };
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\PSO7\data\PSO7_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\PSO7\data\PSO7.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "My_DF_Weapons_Attachments\optic\PSO7\data\PSO7.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "My_DF_Weapons_Attachments\optic\PSO7\data\PSO7_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "My_DF_Weapons_Attachments\optic\PSO7\data\PSO7_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "My_DF_Weapons_Attachments\optic\PSO7\data\PSO7_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "My_DF_Weapons_Attachments\optic\PSO7\data\PSO7_destruct.rvmat"
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
            opticsZoomMin = "0.3926/8";
            opticsZoomMax = "0.3926/8";
            opticsZoomInit = "0.3926/8";
            distanceZoomMin = 100;
            distanceZoomMax = 1000;
            discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
        };
    };
    class My_DF_Weapons_Attachments_optic_Reddot: My_DF_Weapons_Attachments_optic_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_Reddot0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_Reddot1";
        model = "\My_DF_Weapons_Attachments\optic\Reddot\Reddot.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        attachments[] = {
            "BatteryD"
        };
        rotationFlags = 16;
        reversed = 0;
        weight = 200;
        itemSize[] = { 1, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.00050000002;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        inventorySlot[] = {
            "weaponOptics",
            "pistolOptics",
            "weaponOpticsCrossbow"
        };
        simpleHiddenSelections[] = {
            "mount"
        };
        hiddenSelections[] = {
            "camo",
            "reddot"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\Reddot\data\Reddot_co.paa",
            ""
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\Reddot\data\Reddot.rvmat",
            ""
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\Reddot\data\Reddot.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\Reddot\data\Reddot_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\Reddot\data\Reddot_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\Reddot\data\Reddot_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\Reddot\data\Reddot_destruct.rvmat"
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
            opticsZoomMin = 0.52359998;
            opticsZoomMax = 0.52359998;
            opticsZoomInit = 0.52359998;
            distanceZoomMin = 25;
            distanceZoomMax = 50;
            discreteDistance[] = { 25, 50 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
            opticSightTexture = "My_DF_Weapons_Attachments\optic\data\dot_red_ca.paa";
        };
        class EnergyManager
        {
            hasIcon = 1;
            energyUsagePerSecond = 0.02;
            plugType = 1;
            attachmentAction = 1;
        };
    };
    class My_DF_Weapons_Attachments_optic_RMR: My_DF_Weapons_Attachments_optic_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_RMR0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_RMR1";
        model = "\My_DF_Weapons_Attachments\optic\RMR\RMR.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        attachments[] = {
            "BatteryD"
        };
        rotationFlags = 16;
        reversed = 0;
        weight = 200;
        itemSize[] = { 1, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.00050000002;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        inventorySlot[] = {
            "weaponOptics",
            "pistolOptics",
            "weaponOpticsCrossbow"
        };
        simpleHiddenSelections[] = {
            "mount"
        };
        hiddenSelections[] = {
            "camo",
            "reddot"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\RMR\data\RMR_co.paa",
            ""
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\RMR\data\RMR.rvmat",
            ""
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\RMR\data\RMR.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\RMR\data\RMR_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\RMR\data\RMR_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\RMR\data\RMR_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\RMR\data\RMR_destruct.rvmat"
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
            opticsZoomMin = 0.52359998;
            opticsZoomMax = 0.52359998;
            opticsZoomInit = 0.52359998;
            distanceZoomMin = 25;
            distanceZoomMax = 50;
            discreteDistance[] = { 25, 50 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
            opticSightTexture = "My_DF_Weapons_Attachments\optic\data\dot_red_ca.paa";
        };
        class EnergyManager
        {
            hasIcon = 1;
            energyUsagePerSecond = 0.02;
            plugType = 1;
            attachmentAction = 1;
        };
    };
    class My_DF_Weapons_Attachments_optic_rmr2: My_DF_Weapons_Attachments_optic_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_rmr20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_rmr21";
        model = "\My_DF_Weapons_Attachments\optic\rmr2\rmr2.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        attachments[] = {
            "BatteryD"
        };
        rotationFlags = 16;
        reversed = 0;
        weight = 200;
        itemSize[] = { 1, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.00050000002;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        inventorySlot[] = {
            "weaponOptics",
            "pistolOptics",
            "weaponOpticsCrossbow"
        };
        simpleHiddenSelections[] = {
            "mount"
        };
        hiddenSelections[] = {
            "camo",
            "reddot"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\rmr2\data\rmr2_co.paa",
            ""
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\rmr2\data\rmr2.rvmat",
            ""
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\rmr2\data\rmr2.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\rmr2\data\rmr2_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\rmr2\data\rmr2_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\rmr2\data\rmr2_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\rmr2\data\rmr2_destruct.rvmat"
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
            opticsZoomMin = 0.52359998;
            opticsZoomMax = 0.52359998;
            opticsZoomInit = 0.52359998;
            distanceZoomMin = 25;
            distanceZoomMax = 50;
            discreteDistance[] = { 25, 50 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
            opticSightTexture = "My_DF_Weapons_Attachments\optic\data\dot_blue_ca.paa";
        };
        class EnergyManager
        {
            hasIcon = 1;
            energyUsagePerSecond = 0.02;
            plugType = 1;
            attachmentAction = 1;
        };
    };
    class My_DF_Weapons_Attachments_optic_sniperscope: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_sniperscope0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_sniperscope1";
        model = "\My_DF_Weapons_Attachments\optic\sniperscope\sniperscope.p3d";
        animClass = "Binoculars";
        rotationFlags = 4;
        reversed = 0;
        weight = 700;
        itemSize[] = { 3, 1 };
        inventorySlot[] = { "weaponOptics", "weaponOpticsHunting" };
        attachments[] = { "weaponOptics", "DF_flashkill" };
        simulation = "itemoptics";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope_temp";
        cameraDir = "cameraDir";
        simpleHiddenSelections[] = {
            "flashkill"
        };
        hiddenSelections[] = {
            "camo",
            "flashkill"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\sniperscope\data\sniperscope_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\sniperscope\data\sniperscope.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope\data\sniperscope.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope\data\sniperscope_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope\data\sniperscope_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope\data\sniperscope_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope\data\sniperscope_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class OpticsInfo
        {
            memoryPointCamera = "eyeScope_temp";
            cameraDir = "cameraDir";
            useModelOptics = 1;
            modelOptics = "\My_DF_Weapons_Attachments\optic\LPM3\LPM3_opticview.p3d";
            preloadOpticType = "Preload2DOptic_DF_LPM3";
            opticsDisablePeripherialVision = 0.67000002;
            opticsFlare = 1;
            opticsPPEffects[] = {
                "OpticsCHAbera3",
                "OpticsBlur1"
            };
            opticsZoomMin = "0.3926/3";
            opticsZoomMax = "0.3926/7";
            opticsZoomInit = "0.3926/3";
            discretefov[] = { "0.3926/3", "0.3926/7" };
            discreteInitIndex = 0;
            distanceZoomMin = 100;
            distanceZoomMax = 1000;
            discreteDistance[] = { 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
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
            distanceZoomMax = 200;
            discreteDistance[] = { 25, 50, 100, 200 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
        };
        class OpticsModelInfo
        {
            hiddenSelections[] = { "reddot" };
            hiddenSelectionsTextures[] = { "" };
            healthLevels[] = { { 1, { "dz\weapons\attachments\optics\data\lensglass_ca.paa" } }, { 0.7, {} }, { 0.5, { "dz\weapons\attachments\optics\data\lensglass_damage_ca.paa" } }, { 0.3, {} }, { 0, { "dz\weapons\attachments\optics\data\lensglass_destruct_ca.paa" } } };
        };
        class EnergyManager
        {
            hasIcon = 1;
            energyUsagePerSecond = 0.02;
            plugType = 1;
            attachmentAction = 1;
        };
    };
    class My_DF_Weapons_Attachments_optic_sniperscope2: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_sniperscope20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_sniperscope21";
        model = "\My_DF_Weapons_Attachments\optic\sniperscope2\sniperscope2.p3d";
        animClass = "Binoculars";
        rotationFlags = 4;
        reversed = 0;
        weight = 700;
        itemSize[] = { 3, 1 };
        inventorySlot[] = { "weaponOptics", "weaponOpticsHunting" };
        attachments[] = { "weaponOptics", "DF_flashkill" };
        simulation = "itemoptics";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope_temp";
        cameraDir = "cameraDir";
        simpleHiddenSelections[] = {
            "flashkill"
        };
        hiddenSelections[] = {
            "camo",
            "flashkill"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\sniperscope2\data\sniperscope2_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\sniperscope2\data\sniperscope2.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope2\data\sniperscope2.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope2\data\sniperscope2_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope2\data\sniperscope2_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope2\data\sniperscope2_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope2\data\sniperscope2_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class OpticsInfo
        {
            memoryPointCamera = "eyeScope_temp";
            cameraDir = "cameraDir";
            useModelOptics = 1;
            modelOptics = "\My_DF_Weapons_Attachments\optic\LPM3\LPM3_opticview.p3d";
            preloadOpticType = "Preload2DOptic_DF_LPM3";
            opticsDisablePeripherialVision = 0.67000002;
            opticsFlare = 1;
            opticsPPEffects[] = {
                "OpticsCHAbera3",
                "OpticsBlur1"
            };
            opticsZoomMin = "0.3926/6";
            opticsZoomMax = "0.3926/12";
            opticsZoomInit = "0.3926/6";
            discretefov[] = { "0.3926/6", "0.3926/12" };
            discreteInitIndex = 0;
            distanceZoomMin = 100;
            distanceZoomMax = 1000;
            discreteDistance[] = { 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
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
            distanceZoomMax = 200;
            discreteDistance[] = { 25, 50, 100, 200 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
        };
        class OpticsModelInfo
        {
            hiddenSelections[] = { "reddot" };
            hiddenSelectionsTextures[] = { "" };
            healthLevels[] = { { 1, { "dz\weapons\attachments\optics\data\lensglass_ca.paa" } }, { 0.7, {} }, { 0.5, { "dz\weapons\attachments\optics\data\lensglass_damage_ca.paa" } }, { 0.3, {} }, { 0, { "dz\weapons\attachments\optics\data\lensglass_destruct_ca.paa" } } };
        };
        class EnergyManager
        {
            hasIcon = 1;
            energyUsagePerSecond = 0.02;
            plugType = 1;
            attachmentAction = 1;
        };
    };
    class My_DF_Weapons_Attachments_optic_sniperscope3: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_sniperscope30";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_sniperscope31";
        model = "\My_DF_Weapons_Attachments\optic\sniperscope3\sniperscope3.p3d";
        animClass = "Binoculars";
        rotationFlags = 4;
        reversed = 0;
        weight = 700;
        itemSize[] = { 3, 1 };
        inventorySlot[] = { "weaponOptics", "weaponOpticsHunting" };
        attachments[] = { "DF_flashkill" };
        simulation = "itemoptics";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope_temp";
        cameraDir = "cameraDir";
        simpleHiddenSelections[] = {
            "flashkill"
        };
        hiddenSelections[] = {
            "camo",
            "flashkill"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\sniperscope3\data\sniperscope3_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\sniperscope3\data\sniperscope3.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope3\data\sniperscope3.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope3\data\sniperscope3_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope3\data\sniperscope3_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope3\data\sniperscope3_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope3\data\sniperscope3_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class OpticsInfo
        {
            memoryPointCamera = "eyeScope_temp";
            cameraDir = "cameraDir";
            useModelOptics = 1;
            modelOptics = "\My_DF_Weapons_Attachments\optic\LPM3\LPM3_opticview.p3d";
            preloadOpticType = "Preload2DOptic_DF_LPM3";
            opticsDisablePeripherialVision = 0.67000002;
            opticsFlare = 1;
            opticsPPEffects[] = {
                "OpticsCHAbera3",
                "OpticsBlur1"
            };
            opticsZoomMin = "0.3926/3";
            opticsZoomMax = "0.3926/7";
            opticsZoomInit = "0.3926/3";
            discretefov[] = { "0.3926/3", "0.3926/7" };
            discreteInitIndex = 0;
            distanceZoomMin = 100;
            distanceZoomMax = 1000;
            discreteDistance[] = { 200, 300, 400, 500, 600, 700, 800 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
        };
        class OpticsModelInfo
        {
            hiddenSelections[] = { "reddot" };
            hiddenSelectionsTextures[] = { "" };
            healthLevels[] = { { 1, { "dz\weapons\attachments\optics\data\lensglass_ca.paa" } }, { 0.7, {} }, { 0.5, { "dz\weapons\attachments\optics\data\lensglass_damage_ca.paa" } }, { 0.3, {} }, { 0, { "dz\weapons\attachments\optics\data\lensglass_destruct_ca.paa" } } };
        };
    };
    class My_DF_Weapons_Attachments_optic_sniperscope4: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_sniperscope40";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_sniperscope41";
        model = "\My_DF_Weapons_Attachments\optic\sniperscope4\sniperscope4.p3d";
        animClass = "Binoculars";
        rotationFlags = 4;
        reversed = 0;
        weight = 500;
        itemSize[] = { 3, 1 };
        inventorySlot[] = { "weaponOptics", "weaponOpticsHunting" };
        attachments[] = {};
        simulation = "itemoptics";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope_temp";
        cameraDir = "cameraDir";
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\sniperscope4\data\sniperscope4_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\sniperscope4\data\sniperscope4.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope4\data\sniperscope4.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope4\data\sniperscope4_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope4\data\sniperscope4_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope4\data\sniperscope4_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope4\data\sniperscope4_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class OpticsInfo
        {
            memoryPointCamera = "eyeScope_temp";
            cameraDir = "cameraDir";
            useModelOptics = 1;
            modelOptics = "\DZ\weapons\attachments\optics\opticview_longrange.p3d";
            preloadOpticType = "Preload2DOptic_Longrange";
            opticsDisablePeripherialVision = 0.67000002;
            opticsFlare = 1;
            opticsPPEffects[] = {
                "OpticsCHAbera3",
                "OpticsBlur1"
            };
            opticsZoomMin = "0.3926/4";
            opticsZoomMax = "0.3926/4";
            opticsZoomInit = "0.3926/4";
            discretefov[] = { "0.3926/4" };
            discreteInitIndex = 0;
            distanceZoomMin = 100;
            distanceZoomMax = 1000;
            discreteDistance[] = { 200, 300, 400, 500, 600, 700, 800 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
        };
        class OpticsModelInfo
        {
            hiddenSelections[] = { "reddot" };
            hiddenSelectionsTextures[] = { "" };
            healthLevels[] = { { 1, { "dz\weapons\attachments\optics\data\lensglass_ca.paa" } }, { 0.7, {} }, { 0.5, { "dz\weapons\attachments\optics\data\lensglass_damage_ca.paa" } }, { 0.3, {} }, { 0, { "dz\weapons\attachments\optics\data\lensglass_destruct_ca.paa" } } };
        };
    };
    class My_DF_Weapons_Attachments_optic_specter: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_specter0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_specter1";
        model = "\My_DF_Weapons_Attachments\optic\specter\specter.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        rotationFlags = 16;
        reversed = 0;
        weight = 400;
        itemSize[] = { 2, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.001;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\specter\data\specter_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\specter\data\specter.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
                                "My_DF_Weapons_Attachments\optic\specter\data\specter.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
                                "My_DF_Weapons_Attachments\optic\specter\data\specter_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\specter\data\specter_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\specter\data\specter_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\specter\data\specter_destruct.rvmat"
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
            opticsZoomMin = "0.3926/2.5";
            opticsZoomMax = "0.3926/4";
            opticsZoomInit = "0.3926/2.5";
            discretefov[] = { "0.3926/2.5", "0.3926/4" };
            discreteInitIndex = 0;
            distanceZoomMin = 100;
            distanceZoomMax = 1000;
            discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
        };
    };
    class My_DF_Weapons_Attachments_optic_Sro: My_DF_Weapons_Attachments_optic_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_Sro0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_Sro1";
        model = "\My_DF_Weapons_Attachments\optic\Sro\Sro.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        attachments[] = {
            "BatteryD"
        };
        rotationFlags = 16;
        reversed = 0;
        weight = 200;
        itemSize[] = { 1, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.00050000002;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        inventorySlot[] = {
            "weaponOptics",
            "pistolOptics",
            "weaponOpticsCrossbow"
        };
        simpleHiddenSelections[] = {
            "mount"
        };
        hiddenSelections[] = {
            "camo",
            "reddot"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\Sro\data\Sro_co.paa",
            ""
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\Sro\data\Sro.rvmat",
            ""
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\Sro\data\Sro.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\Sro\data\Sro_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\Sro\data\Sro_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\Sro\data\Sro_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\Sro\data\Sro_destruct.rvmat"
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
            opticsZoomMin = 0.52359998;
            opticsZoomMax = 0.52359998;
            opticsZoomInit = 0.52359998;
            distanceZoomMin = 25;
            distanceZoomMax = 50;
            discreteDistance[] = { 25, 50 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
            opticSightTexture = "My_DF_Weapons_Attachments\optic\data\dot_green_ca.paa";
        };
        class EnergyManager
        {
            hasIcon = 1;
            energyUsagePerSecond = 0.02;
            plugType = 1;
            attachmentAction = 1;
        };
    };
    class My_DF_Weapons_Attachments_optic_ThermalAdditive: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_ThermalAdditive0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_ThermalAdditive1";
        model = "\My_DF_Weapons_Attachments\optic\ThermalAdditive\ThermalAdditive.p3d";
        animClass = "Binoculars";
        rotationFlags = 4;
        reversed = 0;
        weight = 700;
        itemSize[] = { 3, 1 };
        inventorySlot[] = { "weaponOptics", "weaponOpticsHunting" };
        attachments[] = { "weaponOptics", "DF_flashkill" };
        simulation = "itemoptics";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope_temp";
        cameraDir = "cameraDir";
        simpleHiddenSelections[] = {
            "flashkill"
        };
        hiddenSelections[] = {
            "camo",
            "camo2",
            "flashkill"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\sniperscope\data\sniperscope_co.paa",
            "My_DF_Weapons_Attachments\optic\ThermalAdditive\data\ThermalAdditive_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\sniperscope\data\sniperscope.rvmat",
            "My_DF_Weapons_Attachments\optic\ThermalAdditive\data\ThermalAdditive.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope\data\sniperscope.rvmat",
                                "My_DF_Weapons_Attachments\optic\ThermalAdditive\data\ThermalAdditive.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope\data\sniperscope_worn.rvmat",
                                "My_DF_Weapons_Attachments\optic\ThermalAdditive\data\ThermalAdditive_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope\data\sniperscope_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\ThermalAdditive\data\ThermalAdditive_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope\data\sniperscope_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\ThermalAdditive\data\ThermalAdditive_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "My_DF_Weapons_Attachments\optic\sniperscope\data\sniperscope_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\ThermalAdditive\data\ThermalAdditive_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class OpticsInfo
        {
            memoryPointCamera = "eyeScope_temp";
            cameraDir = "cameraDir";
            useModelOptics = 1;
            modelOptics = "\My_DF_Weapons_Attachments\optic\LPM3\LPM3_opticview.p3d";
            preloadOpticType = "Preload2DOptic_DF_LPM3";
            opticsDisablePeripherialVision = 0.67000002;
            opticsFlare = 1;
            opticsPPEffects[] = {
                "OpticsCHAbera3",
                "OpticsBlur1"
            };
            opticsZoomMin = "0.3926/3";
            opticsZoomMax = "0.3926/6";
            opticsZoomInit = "0.3926/3";
            discretefov[] = { "0.3926/3", "0.3926/6" };
            discreteInitIndex = 0;
            distanceZoomMin = 100;
            distanceZoomMax = 1000;
            discreteDistance[] = { 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
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
            distanceZoomMax = 200;
            discreteDistance[] = { 25, 50, 100, 200 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
        };
        class OpticsModelInfo
        {
            hiddenSelections[] = { "reddot" };
            hiddenSelectionsTextures[] = { "" };
            healthLevels[] = { { 1, { "dz\weapons\attachments\optics\data\lensglass_ca.paa" } }, { 0.7, {} }, { 0.5, { "dz\weapons\attachments\optics\data\lensglass_damage_ca.paa" } }, { 0.3, {} }, { 0, { "dz\weapons\attachments\optics\data\lensglass_destruct_ca.paa" } } };
        };
        class EnergyManager
        {
            hasIcon = 1;
            energyUsagePerSecond = 0.02;
            plugType = 1;
            attachmentAction = 1;
        };
    };
    class My_DF_Weapons_Attachments_optic_thermalreddot: My_DF_Weapons_Attachments_optic_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_thermalreddot0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_thermalreddot1";
        model = "\My_DF_Weapons_Attachments\optic\thermalreddot\thermalreddot.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        attachments[] = {
            "BatteryD"
        };
        rotationFlags = 16;
        reversed = 0;
        weight = 200;
        itemSize[] = { 1, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.00050000002;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        inventorySlot[] = {
            "weaponOptics",
            "pistolOptics",
            "weaponOpticsCrossbow"
        };
        hiddenSelections[] = {
            "camo",
            "reddot"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\thermalreddot\data\thermalreddot_co.paa",
            ""
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\thermalreddot\data\thermalreddot.rvmat",
            ""
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\thermalreddot\data\thermalreddot.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\thermalreddot\data\thermalreddot_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\thermalreddot\data\thermalreddot_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\thermalreddot\data\thermalreddot_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\thermalreddot\data\thermalreddot_destruct.rvmat"
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
            opticsZoomMin = 0.52359998;
            opticsZoomMax = 0.52359998;
            opticsZoomInit = 0.52359998;
            distanceZoomMin = 25;
            distanceZoomMax = 50;
            discreteDistance[] = { 25, 50 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
            opticSightTexture = "My_DF_Weapons_Attachments\optic\data\holo_green_ca.paa";
        };
        class EnergyManager
        {
            hasIcon = 1;
            energyUsagePerSecond = 0.02;
            plugType = 1;
            attachmentAction = 1;
        };
    };
    class My_DF_Weapons_Attachments_optic_thermalscope: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_thermalscope0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_thermalscope1";
        model = "\My_DF_Weapons_Attachments\optic\thermalscope\thermalscope.p3d";
        animClass = "Binoculars";
        rotationFlags = 4;
        reversed = 0;
        weight = 700;
        itemSize[] = { 3, 1 };
        inventorySlot[] = { "weaponOptics", "weaponOpticsHunting" };
        attachments[] = { "BatteryD" };
        simulation = "itemoptics";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope_temp";
        cameraDir = "cameraDir";
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\thermalscope\data\thermalscope_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\thermalscope\data\thermalscope.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "My_DF_Weapons_Attachments\optic\thermalscope\data\thermalscope.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "My_DF_Weapons_Attachments\optic\thermalscope\data\thermalscope_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "My_DF_Weapons_Attachments\optic\thermalscope\data\thermalscope_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "My_DF_Weapons_Attachments\optic\thermalscope\data\thermalscope_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "My_DF_Weapons_Attachments\optic\thermalscope\data\thermalscope_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class OpticsInfo
        {
            memoryPointCamera = "eyeScope_temp";
            cameraDir = "cameraDir";
            useModelOptics = 1;
            modelOptics = "\My_DF_Weapons_Attachments\optic\thermalscope\thermalscope_opticview.p3d";
            preloadOpticType = "Preload2DOptic_DF_thermalscope";
            opticsDisablePeripherialVision = 0.67000002;
            opticsFlare = 1;
            opticsPPEffects[] = {
                "OpticsCHAbera3",
                "OpticsBlur1"
            };
            opticsZoomMin = "0.3926/2";
            opticsZoomMax = "0.3926/5";
            opticsZoomInit = "0.3926/2";
            discretefov[] = { "0.3926/2", "0.3926/5" };
            discreteInitIndex = 0;
            distanceZoomMin = 100;
            distanceZoomMax = 1000;
            discreteDistance[] = { 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
        };
        class OpticsModelInfo
        {
            hiddenSelections[] = { "reddot" };
            hiddenSelectionsTextures[] = { "" };
            healthLevels[] = { { 1, { "dz\weapons\attachments\optics\data\lensglass_ca.paa" } }, { 0.7, {} }, { 0.5, { "dz\weapons\attachments\optics\data\lensglass_damage_ca.paa" } }, { 0.3, {} }, { 0, { "dz\weapons\attachments\optics\data\lensglass_destruct_ca.paa" } } };
        };
        class EnergyManager
        {
            hasIcon = 1;
            energyUsagePerSecond = 0.02;
            plugType = 1;
            attachmentAction = 1;
        };
    };
    class My_DF_Weapons_Attachments_optic_thermalscope2: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_thermalscope20";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_thermalscope21";
        model = "\My_DF_Weapons_Attachments\optic\thermalscope2\thermalscope2.p3d";
        animClass = "Binoculars";
        rotationFlags = 4;
        reversed = 0;
        weight = 700;
        itemSize[] = { 3, 1 };
        inventorySlot[] = { "weaponOptics", "weaponOpticsHunting" };
        simulation = "itemoptics";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope_temp";
        cameraDir = "cameraDir";
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\thermalscope2\data\thermalscope2_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\thermalscope2\data\thermalscope2.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "My_DF_Weapons_Attachments\optic\thermalscope2\data\thermalscope2.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "My_DF_Weapons_Attachments\optic\thermalscope2\data\thermalscope2_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "My_DF_Weapons_Attachments\optic\thermalscope2\data\thermalscope2_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "My_DF_Weapons_Attachments\optic\thermalscope2\data\thermalscope2_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "My_DF_Weapons_Attachments\optic\thermalscope2\data\thermalscope2_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class OpticsInfo
        {
            memoryPointCamera = "eyeScope_temp";
            cameraDir = "cameraDir";
            useModelOptics = 1;
            modelOptics = "\My_DF_Weapons_Attachments\optic\thermalscope2\thermalscope2_opticview.p3d";
            preloadOpticType = "Preload2DOptic_DF_thermalscope2";
            opticsDisablePeripherialVision = 0.67000002;
            opticsFlare = 1;
            opticsPPEffects[] = {
                "OpticsCHAbera3",
                "OpticsBlur1"
            };
            opticsZoomMin = "0.3926/8";
            opticsZoomMax = "0.3926/8";
            opticsZoomInit = "0.3926/8";
            discretefov[] = { "0.3926/8" };
            discreteInitIndex = 0;
            distanceZoomMin = 100;
            distanceZoomMax = 1000;
            discreteDistance[] = { 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
        };
        class OpticsModelInfo
        {
            hiddenSelections[] = { "reddot" };
            hiddenSelectionsTextures[] = { "" };
            healthLevels[] = { { 1, { "dz\weapons\attachments\optics\data\lensglass_ca.paa" } }, { 0.7, {} }, { 0.5, { "dz\weapons\attachments\optics\data\lensglass_damage_ca.paa" } }, { 0.3, {} }, { 0, { "dz\weapons\attachments\optics\data\lensglass_destruct_ca.paa" } } };
        };
        class EnergyManager
        {
            hasIcon = 1;
            energyUsagePerSecond = 0.02;
            plugType = 1;
            attachmentAction = 1;
        };
    };
    class My_DF_Weapons_Attachments_optic_TrihawkPrismScope: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_TrihawkPrismScope0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_TrihawkPrismScope1";
        model = "\My_DF_Weapons_Attachments\optic\TrihawkPrismScope\TrihawkPrismScope.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        rotationFlags = 16;
        reversed = 0;
        weight = 400;
        itemSize[] = { 2, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.001;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\TrihawkPrismScope\data\TrihawkPrismScope_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\TrihawkPrismScope\data\TrihawkPrismScope.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
                                "My_DF_Weapons_Attachments\optic\TrihawkPrismScope\data\TrihawkPrismScope.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
                                "My_DF_Weapons_Attachments\optic\TrihawkPrismScope\data\TrihawkPrismScope_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\TrihawkPrismScope\data\TrihawkPrismScope_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\TrihawkPrismScope\data\TrihawkPrismScope_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\TrihawkPrismScope\data\TrihawkPrismScope_destruct.rvmat"
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
            opticsZoomMin = "0.3926/2";
            opticsZoomMax = "0.3926/2";
            opticsZoomInit = "0.3926/2";
            distanceZoomMin = 100;
            distanceZoomMax = 600;
            discreteDistance[] = { 100, 200, 300, 400, 500, 600 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
        };
    };
    class My_DF_Weapons_Attachments_optic_Valday: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_Valday0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_Valday1";
        model = "\My_DF_Weapons_Attachments\optic\Valday\Valday.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        rotationFlags = 16;
        reversed = 0;
        weight = 400;
        itemSize[] = { 2, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.001;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\Valday\data\Valday_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\Valday\data\Valday.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
                                "My_DF_Weapons_Attachments\optic\Valday\data\Valday.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
                                "My_DF_Weapons_Attachments\optic\Valday\data\Valday_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\Valday\data\Valday_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\Valday\data\Valday_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\Valday\data\Valday_destruct.rvmat"
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
            opticsZoomMin = "0.3926/2";
            opticsZoomMax = "0.3926/4";
            opticsZoomInit = "0.3926/2";
            discretefov[] = { "0.3926/2", "0.3926/4" };
            discreteInitIndex = 0;
            distanceZoomMin = 100;
            distanceZoomMax = 1000;
            discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
        };
    };
    class My_DF_Weapons_Attachments_optic_VortexVenom: My_DF_Weapons_Attachments_optic_Mount_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_VortexVenom0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_VortexVenom1";
        model = "\My_DF_Weapons_Attachments\optic\VortexVenom\VortexVenom.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        attachments[] = {
            "BatteryD"
        };
        rotationFlags = 16;
        reversed = 0;
        weight = 200;
        itemSize[] = { 1, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.00050000002;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        inventorySlot[] = {
            "weaponOptics",
            "pistolOptics",
            "weaponOpticsCrossbow"
        };
        simpleHiddenSelections[] = {
            "mount"
        };
        hiddenSelections[] = {
            "camo",
            "reddot"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\VortexVenom\data\VortexVenom_co.paa",
            ""
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\VortexVenom\data\VortexVenom.rvmat",
            ""
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\VortexVenom\data\VortexVenom.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
                                "My_DF_Weapons_Attachments\optic\VortexVenom\data\VortexVenom_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\VortexVenom\data\VortexVenom_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\VortexVenom\data\VortexVenom_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\VortexVenom\data\VortexVenom_destruct.rvmat"
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
            opticsZoomMin = 0.52359998;
            opticsZoomMax = 0.52359998;
            opticsZoomInit = 0.52359998;
            distanceZoomMin = 25;
            distanceZoomMax = 50;
            discreteDistance[] = { 25, 50 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
            opticSightTexture = "My_DF_Weapons_Attachments\optic\data\dot_red_ca.paa";
        };
        class EnergyManager
        {
            hasIcon = 1;
            energyUsagePerSecond = 0.02;
            plugType = 1;
            attachmentAction = 1;
        };
    };
    class My_DF_Weapons_Attachments_optic_vudu: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_vudu0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_vudu1";
        model = "\My_DF_Weapons_Attachments\optic\vudu\vudu.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        rotationFlags = 16;
        reversed = 0;
        weight = 400;
        itemSize[] = { 2, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.001;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        attachments[] = { "DF_flashkill" };
        simpleHiddenSelections[] = {
            "flashkill"
        };
        hiddenSelections[] = {
            "camo",
            "flashkill"
        };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\vudu\data\vudu_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\vudu\data\vudu.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
                                "My_DF_Weapons_Attachments\optic\vudu\data\vudu.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
                                "My_DF_Weapons_Attachments\optic\vudu\data\vudu_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\vudu\data\vudu_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
                                "My_DF_Weapons_Attachments\optic\vudu\data\vudu_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa",
                                "DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat",
                                "My_DF_Weapons_Attachments\optic\vudu\data\vudu_destruct.rvmat"
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
            opticsZoomMin = "0.3926/1.25";
            opticsZoomMax = "0.3926/7";
            opticsZoomInit = "0.3926/1.25";
            discretefov[] = { "0.3926/1.25", "0.3926/3", "0.3926/7" };
            discreteInitIndex = 0;
            distanceZoomMin = 100;
            distanceZoomMax = 1000;
            discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
        };
        class AnimationSources
        {
            class hide
            {
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
        };
    };
    class My_DF_Weapons_Attachments_optic_ZenitBelomoPSO: My_DF_Weapons_Attachments_optic_Base
    {
        scope = 2;
        displayName = "$STR_My_DF_Weapons_Attachments_optic_ZenitBelomoPSO0";
        descriptionShort = "$STR_My_DF_Weapons_Attachments_optic_ZenitBelomoPSO1";
        model = "\My_DF_Weapons_Attachments\optic\ZenitBelomoPSO\ZenitBelomoPSO.p3d";
        debug_ItemCategory = 3;
        animClass = "Binoculars";
        rotationFlags = 16;
        reversed = 0;
        weight = 400;
        itemSize[] = { 2, 1 };
        selectionFireAnim = "zasleh";
        simulation = "itemoptics";
        dispersionModifier = -0.001;
        dispersionCondition = "true";
        recoilModifier[] = { 1, 1, 1 };
        swayModifier[] = { 1, 1, 1 };
        memoryPointCamera = "eyeScope";
        cameraDir = "cameraDir";
        inventorySlot[] = {
            "weaponOptics",
            "weaponOpticsAK"
        };
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = {
            "My_DF_Weapons_Attachments\optic\ZenitBelomoPSO\data\ZenitBelomoPSO_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "My_DF_Weapons_Attachments\optic\ZenitBelomoPSO\data\ZenitBelomoPSO.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "My_DF_Weapons_Attachments\optic\ZenitBelomoPSO\data\ZenitBelomoPSO.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_ca.paa",
                                "My_DF_Weapons_Attachments\optic\ZenitBelomoPSO\data\ZenitBelomoPSO_worn.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "My_DF_Weapons_Attachments\optic\ZenitBelomoPSO\data\ZenitBelomoPSO_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
                                "My_DF_Weapons_Attachments\optic\ZenitBelomoPSO\data\ZenitBelomoPSO_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
                                "My_DF_Weapons_Attachments\optic\ZenitBelomoPSO\data\ZenitBelomoPSO_destruct.rvmat"
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
            opticsZoomMin = "0.3926/2.5";
            opticsZoomMax = "0.3926/2.5";
            opticsZoomInit = "0.3926/2.5";
            distanceZoomMin = 100;
            distanceZoomMax = 1000;
            discreteDistance[] = { 100, 200, 300, 400, 500, 600 };
            discreteDistanceInitIndex = 0;
            PPMaskProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPLensProperties[] = { 0.0, 0.0, 0.0, 0.0 };
            PPDOFProperties[] = { 0, 0.0, 0.0, 0.0, 0.0, 1.0 };
            PPBlurProperties = 0;
        };
    };
	class My_DF_Weapons_Attachments_optic_GlasslessRedDot: My_DF_Weapons_Attachments_optic_Mount_Base
	{
		scope=2;
		displayName="$STR_My_DF_Weapons_Attachments_optic_GlasslessRedDot0";
		descriptionShort="$STR_My_DF_Weapons_Attachments_optic_GlasslessRedDot1";
		model="\My_DF_Weapons_Attachments\optic\GlasslessRedDot\GlasslessRedDot.p3d";
		debug_ItemCategory=3;
		animClass="Binoculars";
		attachments[]=
		{
			"BatteryD"
		};
		rotationFlags=16;
		reversed=0;
		weight=200;
		itemSize[]={1,1};
		selectionFireAnim="zasleh";
		simulation="itemoptics";
		dispersionModifier=-0.00050000002;
		dispersionCondition="true";
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		inventorySlot[]=
		{
			"weaponOptics",
			"pistolOptics",
			"weaponOpticsCrossbow"
		};
		simpleHiddenSelections[]=
		{
			"mount"
		};
		hiddenSelections[]=
		{
			"camo",
			"reddot"
		};
		hiddenSelectionsTextures[]=
		{
			"My_DF_Weapons_Attachments\optic\GlasslessRedDot\data\GlasslessRedDot_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"My_DF_Weapons_Attachments\optic\GlasslessRedDot\data\GlasslessRedDot.rvmat",
			""
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_ca.paa",
								"DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
								"My_DF_Weapons_Attachments\optic\GlasslessRedDot\data\GlasslessRedDot.rvmat"
							}
						},
						
						{
							0.69999999,
							{
								"DZ\weapons\attachments\optics\data\lensglass_ca.paa",
								"DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
								"My_DF_Weapons_Attachments\optic\GlasslessRedDot\data\GlasslessRedDot_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
								"DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
								"My_DF_Weapons_Attachments\optic\GlasslessRedDot\data\GlasslessRedDot_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{
								"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
								"DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
								"My_DF_Weapons_Attachments\optic\GlasslessRedDot\data\GlasslessRedDot_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
								"DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
								"My_DF_Weapons_Attachments\optic\GlasslessRedDot\data\GlasslessRedDot_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]={};
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
			distanceZoomMin=25;
			distanceZoomMax=50;
			discreteDistance[]={25,50};
			discreteDistanceInitIndex=0;
			PPMaskProperties[] = {0.0, 0.0, 0.0, 0.0};
			PPLensProperties[] = {0.0, 0.0, 0.0, 0.0};
			PPDOFProperties[] = {0, 0.0, 0.0, 0.0, 0.0, 1.0};
			PPBlurProperties = 0;
			opticSightTexture="My_DF_Weapons_Attachments\optic\data\dot_red_ca.paa";
		};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.02;
			plugType=1;
			attachmentAction=1;
		};
	};
};