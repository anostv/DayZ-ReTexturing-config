class CfgPatches
{
    class Custom_Clothing               // This can be changed to whatever you want to call your custom clothing class
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Characters",
            "DZ_Characters_Backpacks",
            "DZ_Characters_Pants",
            "DZ_Characters_Tops",
            "DZ_Gear_Containers",
            "DZ_Characters_Headgear",
            "DZ_Data"
        };
    };
};
class CfgVehicles
{
    class Clothing;
    class Bandana_ColorBase;
    class custom_bandana: Bandana_ColorBase             // custom_bandana can be change to whatever you want the class name of your custom bandana to be
    {
        displayName="Bandana";                  // Display name of item ingame
        descriptionShort="Write a short description of your bandana here if you like, or remove this text";
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "filepath_to\custom_bandana.paa",               // Change this to "filepath_were_your_texture_file_is\name_of_texturefile.paa",
            "filepath_to\custom_bandana.paa",               // Change this to "filepath_were_your_texture_file_is\name_of_texturefile.paa",
            "filepath_to\custom_bandana.paa"                // Change this to "filepath_were_your_texture_file_is\name_of_texturefile.paa"
        };
    };
};
