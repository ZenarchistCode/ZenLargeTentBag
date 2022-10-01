class CfgPatches
{
	class ZenLargeTentBag
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Gear_Camping",
			"DZ_Characters_Backpacks"
		};
	};
};

class CfgMods
{
	class ZenLargeTentBag
	{
		dir = "ZenLargeTentBag";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "ZenLargeTentBag";
		credits = "Zenarchist";
		author = "Zenarchist";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = { "Game","World","Mission" };
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = { "ZenLargeTentBag/scripts/3_game" };
			};
			class worldScriptModule
			{
				value = "";
				files[] = { "ZenLargeTentBag/scripts/4_world" };
			};
			class missionScriptModule
			{
				value = "";
				files[] = { "ZenLargeTentBag/scripts/5_mission" };
			};
		};
	};
};

class CfgVehicles
{
	// Add backpack slot to Large Tent (LargeTent.c converts it into backpack version)
	class TentBase;
	class LargeTent : TentBase
	{
		inventorySlot[] +=
		{
			"Back"
		};
		itemInfo[] +=
		{
			"Clothing",
			"Back"
		};
	};

	// Define large tent backpack object
	class Clothing;
	class LargeTentBackpack : Clothing
	{
		scope = 2;
		displayName = "$STR_ZEN_LARGETENT0";
		descriptionShort = "$STR_ZEN_LARGETENT1";
		model = "\dz\gear\camping\large_tent_backpack.p3d";
		inventorySlot[] +=
		{
			"Back"
		};
		itemInfo[] +=
		{
			"Clothing",
			"Back"
		};
		rotationFlags = 16;
		itemSize[] = { 10,4 };
		itemsCargoSize[] = { 0,0 };
		weight = 90000;
		varWetMax = 0.49000001;
		heatIsolation = 0.69999999;
		visibilityModifier = 0.80000001;
		soundAttType = "Military";
		randomQuantity = 4;
		class ClothingTypes
		{
			male = "dz\gear\camping\large_tent_backpack.p3d";
			female = "dz\gear\camping\large_tent_backpack.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2000;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\camping\data\bagpack.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\camping\data\bagpack.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\camping\data\bagpack_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\camping\data\bagpack_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\camping\data\bagpack_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpBackPack_Metal_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpBackPack_Metal_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "taloonbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
};
