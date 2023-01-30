class CfgPatches
{
    class Custom_Bags
    {
        units[]=
        {           
            "",         
        };
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Characters"
        };
    };
};
class cfgVehicles 
{
    class Clothing_Base;
    class Clothing: Clothing_Base{};
    class TortillaBag;
    class custom_tortilla_bag: TortillaBag          // Change "custom_tortilla_bag" to your own class name
    {
        scope = 2;
        displayName = "Custom Tortilla Bag";                // Display name of item ingame
        descriptionShort =;                                                // Description of item ingame, write the description you want between the = and ; Like this: descriptionShort="Desription goes here";
        model = "\dz\characters\backpacks\tortilla_g.p3d";
        inventorySlot = "Back";
        attachments[] = {"Chemlight","WalkieTalkie","VestPouch","CookingEquipment","Belt_Left","shoulder","melee"};             // Can be changed to prefered attachments
        itemInfo[] = {"Clothing","Back"};
        rotationFlags = 16;
        itemSize[] = {2,2};             // How many slots the item will use if put into players inventory 
        itemsCargoSize[] = {10,50};             // Items inventory size. 10,50=500 slots. 10 Horizontally 50 Vertically
        weight = 2100;              // Weight of item in grams. 2100 = 2.1kg
        absorbency = 0;
        varWetMax = 0.001;
        heatIsolation = 0.08;
        visibilityModifier = 0.8;
        repairableWithKits[] = {5,3};
        repairCosts[] = {30,25};
        hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
        hiddenSelectionsTextures[] = {"filepath\custom_tortilla_bag","filepath\custom_tortilla_bag","filepath\custom_tortilla_bag"};                // Change this to "filepath_were_your_texture_file_and_config_is\name_of_texturefile.paa"
        class ClothingTypes
        {
            male = "\DZ\characters\backpacks\tortilla_m.p3d";
            female = "\DZ\characters\backpacks\tortilla_f.p3d";
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 300;
                    healthLevels[] = {{1,{"filepath\custom_tortilla_bag"}},{0.7,{"filepath\custom_tortilla_bag"}},{0.5,{"DZ\Characters\backpacks\data\tortila_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\tortila_damage.rvmat"}},{0,{"DZ\Characters\backpacks\data\tortila_destruct.rvmat"}}};             // Change the two first to same filepath\texture as in line 42
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickUpItem_Light
                {
                    soundSet = "pickUpBackPack_Plastic_Light_SoundSet";
                    id = 796;
                };
                class pickUpItem
                {
                    soundSet = "pickUpBackPack_Plastic_SoundSet";
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
};                                          // Remember to save the file as config.cpp in the same folder as your texture file. 