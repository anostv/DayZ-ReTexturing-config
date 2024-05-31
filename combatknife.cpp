class CfgPatches
{
	class custom_knifes				// This can be changed to whatever you want to call your custom knifes class
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Melee",
			"DZ_Weapons_Melee_Blade"
		};
	};
};
class CfgVehicles
{	
	class CombatKnife;
	class custom_combat_knife: CombatKnife			// custom_combat_knife can be change to whatever you want the class name of your custom knife to be
	{
		displayName="Custom Combat Knife";				// Display name of item ingame
		descriptionShort="Write a short description of your beanie here if you like, or remove this text";
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"filepath_to\custom_combat_knife.paa"				// Change this to "filepath_were_your_texture_file_is\name_of_texturefile.paa",
		};
	};
};
