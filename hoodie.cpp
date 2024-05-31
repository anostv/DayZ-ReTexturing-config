class CfgPatches
{
	class ClassName_Change_To_Your_Own	// No spaces in classname, use _ and make it unique
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] =
		{
			"DZ_Data",
			"DZ_Characters",
			"DZ_Characters_Tops"
		};
	};
};

class CfgVehicles
{
	class Clothing;
	class Hoodie_ColorBase;		// Make sure to call the right class for the item you are retexturing
	class custom_hoodie: Hoodie_ColorBase	// Change custom_hoodie to whatever class name you want for your new item.
	{
        	displayName="Whatever you want the hoodie to be called ingame";
        	descriptionShort="ingame description of the hoodie";
        	scope=2;
		attachments[]={"Shoulder","magazine"}; // All slots can be found in P:\scripts\config.cpp
		itemsCargoSize[]={10,100};		// 10-Horizontal, 100-Vertical = 100 slots in inventory. H can be 1-10, V 1-100
		itemSize[]={2,1};		// How many slots the item will use if placed in inventory
		heatIsolation=0.95;		// Isolation value. 0.0 - 1.0
		quickBarBonus=3;		// QuickBar slots you get when using the hoodie
		hiddenSelectionsTextures[]=
		{
			"path\to\your\custom_texture.paa",
			"path\to\your\custom_texture.paa",
			"path\to\your\custom_texture.paa"
		};
	};
};
