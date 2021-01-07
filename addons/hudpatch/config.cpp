class CfgPatches
{
	class ORO_Huey_Pack_Hud_Fix
	{
		name = "Huey Pack II Hud Fix";
		author = "Oronar";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"GR_Huey_Pack2"
		};
	};
};

class CfgVehicles
{
	class Helicopter_Base_H;
	
	class GR_HP2_UH1H_base : Helicopter_Base_H
	{
		unitInfoTypeRTD = "RscUnitInfoAir";
		unitInfoType = "RscUnitInfoAir";
	};
	
	class GR_HP2_UH1N_base : Helicopter_Base_H
	{
		unitInfoTypeRTD = "RscUnitInfoAir";
		unitInfoType = "RscUnitInfoAir";
	};
	
	class GR_HP2_UH1C_base : Helicopter_Base_H
	{
		unitInfoTypeRTD = "RscUnitInfoAir";
		unitInfoType = "RscUnitInfoAir";
	};
};
