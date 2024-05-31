class CfgPatches
{
	class custom_flags			// This can be changed to whatever you want to call your custom flags class
	{
		units[]=
		{
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Containers",
			"DZ_Gear_Camping",
			"DZ_Data"
		};
	};
};
class cfgVehicles
{
	class Flag_Base;
	author = "capp";					// Change this to your name
	type = "mod";						
	
	class custom_flag: Flag_Base				// custom_flag can be change to whatever you want the class name of your custom flag to be  
	{
		scope=2;
		hiddenSelectionsTextures[]=
	};
		{
			"filepath_to\custom_flag.paa"				// Change this to "filepath_were_your_texture_file_is\name_of_texturefile.paa",
		};
};
