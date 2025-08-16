
class CfgPatches
{
    class cmh_data
    {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "A3_Characters_F",
            "A3_Data_F",
            "rhsusf_infantry",
            "rhsusf_infantry2",
            "rhsusf_infantry3",
            "po_main",
        };
        author = "Cepeda";
        version = "1.0";
    };
};

class CfgFactionClasses
{
    class CMH_Occidental
    {
        displayName = "CMH Equipamiento Occidental";
        priority = 2;
        side = 1;
        icon = "\icon\cmh_logo.paa";
    };
};

class CfgEditorSubcategories
{
    class CMH_Woodland_CMHLogo
    {
        displayName = "Woodland - CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
    };
    class CMH_Woodland_Condor
    {
        displayName = "Woodland - Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
    };
    class CMH_Woodland_Puma
    {
        displayName = "Woodland - Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
    };
    class CMH_Woodland_Aguara
    {
        displayName = "Woodland - Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
    };
    class CMH_Woodland_Buho
    {
        displayName = "Woodland - Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
    };
    class CMH_Woodland_Carpincho
    {
        displayName = "Woodland - Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
    };
    class CMH_Woodland_Arid_CMHLogo
    {
        displayName = "Woodland Arid - CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
    };
    class CMH_Woodland_Arid_Condor
    {
        displayName = "Woodland Arid - Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
    };
    class CMH_Woodland_Arid_Puma
    {
        displayName = "Woodland Arid - Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
    };
    class CMH_Woodland_Arid_Aguara
    {
        displayName = "Woodland Arid - Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
    };
    class CMH_Woodland_Arid_Buho
    {
        displayName = "Woodland Arid - Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
    };
    class CMH_Woodland_Arid_Carpincho
    {
        displayName = "Woodland Arid - Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
    };
    class CMH_Woodland_Dark_CMHLogo
    {
        displayName = "Woodland Dark - CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
    };
    class CMH_Woodland_Dark_Condor
    {
        displayName = "Woodland Dark - Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
    };
    class CMH_Woodland_Dark_Puma
    {
        displayName = "Woodland Dark - Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
    };
    class CMH_Woodland_Dark_Aguara
    {
        displayName = "Woodland Dark - Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
    };
    class CMH_Woodland_Dark_Buho
    {
        displayName = "Woodland Dark - Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
    };
    class CMH_Woodland_Dark_Carpincho
    {
        displayName = "Woodland Dark - Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
    };
};

class CfgUnitInsignia
{
    class Equipo_Aguara   { displayName = "Equipo Aguara";   author = "Cepeda"; texture = "\icon\aguara.paa";   textureVehicle = ""; };
    class Equipo_Puma     { displayName = "Equipo Puma";     author = "Cepeda"; texture = "\icon\puma.paa";     textureVehicle = ""; };
    class Equipo_Carpincho{ displayName = "Equipo Carpincho";author = "Cepeda"; texture = "\icon\carpincho.paa";textureVehicle = ""; };
    class Equipo_Condor   { displayName = "Equipo Cóndor";   author = "Cepeda"; texture = "\icon\condor.paa";   textureVehicle = ""; };
    class Equipo_Buho     { displayName = "Equipo Búho";     author = "Cepeda"; texture = "\icon\buho.paa";     textureVehicle = ""; };
    class Equipo_CMH      { displayName = "Equipo CMH";      author = "Cepeda"; texture = "\icon\cmh_logo.paa"; textureVehicle = ""; };
};
class CfgVehicles
{
    class rhsusf_spcs_ocp;
	class rhsusf_spcs_ocp_crewman;
	class rhsusf_spcs_ocp_grenadier;
	class rhsusf_spcs_ocp_machinegunner;
	class rhsusf_spcs_ocp_medic;
	class rhsusf_spcs_ocp_rifleman;
	class rhsusf_spcs_ocp_rifleman_alt;
	class rhsusf_spcs_ocp_sniper;
	class rhsusf_spcs_ocp_squadleader;
	class rhsusf_spcs_ocp_teamleader;
	class rhsusf_spcs_ocp_teamleader_alt;
    // ==========================================================
    // PATRÓN: Woodland
    // ==========================================================

    // ----- Equipo: CMHLogo -----
    class CMH_Fusilero_Woodland_CMHLogo: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Fusilero (Woodland - CMHLogo)";
        editorSubcategory = "CMH_Woodland_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Ametrallador_Woodland_CMHLogo: rhsusf_spcs_ocp_machinegunner
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ametrallador (Woodland - CMHLogo)";
        editorSubcategory = "CMH_Woodland_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        magazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        respawnMagazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Especialista_AA_Woodland_CMHLogo: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AA (Woodland - CMHLogo)";
        editorSubcategory = "CMH_Woodland_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Especialista_AT_Woodland_CMHLogo: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AT (Woodland - CMHLogo)";
        editorSubcategory = "CMH_Woodland_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Granadero_Woodland_CMHLogo: rhsusf_spcs_ocp_grenadier
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Granadero (Woodland - CMHLogo)";
        editorSubcategory = "CMH_Woodland_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Operador_UAV_Woodland_CMHLogo: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Operador UAV (Woodland - CMHLogo)";
        editorSubcategory = "CMH_Woodland_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        backpack = "B_UAV_01_backpack_F";
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Medico_Woodland_CMHLogo: rhsusf_spcs_ocp_medic
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Medico (Woodland - CMHLogo)";
        editorSubcategory = "CMH_Woodland_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        attendant = 1;
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Ingeniero_Woodland_CMHLogo: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ingeniero (Woodland - CMHLogo)";
        editorSubcategory = "CMH_Woodland_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        engineer = 1;
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Oficial_Woodland_CMHLogo: rhsusf_spcs_ocp_squadleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Oficial (Woodland - CMHLogo)";
        editorSubcategory = "CMH_Woodland_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        respawnWeapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Suboficial_Woodland_CMHLogo: rhsusf_spcs_ocp_teamleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Suboficial (Woodland - CMHLogo)";
        editorSubcategory = "CMH_Woodland_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    // ----- Equipo: Condor -----
    class CMH_Fusilero_Woodland_Condor: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Fusilero (Woodland - Condor)";
        editorSubcategory = "CMH_Woodland_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Ametrallador_Woodland_Condor: rhsusf_spcs_ocp_machinegunner
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ametrallador (Woodland - Condor)";
        editorSubcategory = "CMH_Woodland_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        magazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        respawnMagazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Especialista_AA_Woodland_Condor: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AA (Woodland - Condor)";
        editorSubcategory = "CMH_Woodland_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Especialista_AT_Woodland_Condor: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AT (Woodland - Condor)";
        editorSubcategory = "CMH_Woodland_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Granadero_Woodland_Condor: rhsusf_spcs_ocp_grenadier
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Granadero (Woodland - Condor)";
        editorSubcategory = "CMH_Woodland_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Operador_UAV_Woodland_Condor: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Operador UAV (Woodland - Condor)";
        editorSubcategory = "CMH_Woodland_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        backpack = "B_UAV_01_backpack_F";
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Medico_Woodland_Condor: rhsusf_spcs_ocp_medic
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Medico (Woodland - Condor)";
        editorSubcategory = "CMH_Woodland_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        attendant = 1;
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Ingeniero_Woodland_Condor: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ingeniero (Woodland - Condor)";
        editorSubcategory = "CMH_Woodland_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        engineer = 1;
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Oficial_Woodland_Condor: rhsusf_spcs_ocp_squadleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Oficial (Woodland - Condor)";
        editorSubcategory = "CMH_Woodland_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        respawnWeapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Suboficial_Woodland_Condor: rhsusf_spcs_ocp_teamleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Suboficial (Woodland - Condor)";
        editorSubcategory = "CMH_Woodland_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    // ----- Equipo: Puma -----
    class CMH_Fusilero_Woodland_Puma: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Fusilero (Woodland - Puma)";
        editorSubcategory = "CMH_Woodland_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Ametrallador_Woodland_Puma: rhsusf_spcs_ocp_machinegunner
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ametrallador (Woodland - Puma)";
        editorSubcategory = "CMH_Woodland_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        magazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        respawnMagazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Especialista_AA_Woodland_Puma: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AA (Woodland - Puma)";
        editorSubcategory = "CMH_Woodland_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Especialista_AT_Woodland_Puma: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AT (Woodland - Puma)";
        editorSubcategory = "CMH_Woodland_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Granadero_Woodland_Puma: rhsusf_spcs_ocp_grenadier
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Granadero (Woodland - Puma)";
        editorSubcategory = "CMH_Woodland_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Operador_UAV_Woodland_Puma: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Operador UAV (Woodland - Puma)";
        editorSubcategory = "CMH_Woodland_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        backpack = "B_UAV_01_backpack_F";
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Medico_Woodland_Puma: rhsusf_spcs_ocp_medic
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Medico (Woodland - Puma)";
        editorSubcategory = "CMH_Woodland_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        attendant = 1;
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Ingeniero_Woodland_Puma: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ingeniero (Woodland - Puma)";
        editorSubcategory = "CMH_Woodland_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        engineer = 1;
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Oficial_Woodland_Puma: rhsusf_spcs_ocp_squadleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Oficial (Woodland - Puma)";
        editorSubcategory = "CMH_Woodland_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        respawnWeapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Suboficial_Woodland_Puma: rhsusf_spcs_ocp_teamleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Suboficial (Woodland - Puma)";
        editorSubcategory = "CMH_Woodland_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    // ----- Equipo: Aguara -----
    class CMH_Fusilero_Woodland_Aguara: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Fusilero (Woodland - Aguara)";
        editorSubcategory = "CMH_Woodland_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Ametrallador_Woodland_Aguara: rhsusf_spcs_ocp_machinegunner
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ametrallador (Woodland - Aguara)";
        editorSubcategory = "CMH_Woodland_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        magazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        respawnMagazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Especialista_AA_Woodland_Aguara: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AA (Woodland - Aguara)";
        editorSubcategory = "CMH_Woodland_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Especialista_AT_Woodland_Aguara: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AT (Woodland - Aguara)";
        editorSubcategory = "CMH_Woodland_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Granadero_Woodland_Aguara: rhsusf_spcs_ocp_grenadier
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Granadero (Woodland - Aguara)";
        editorSubcategory = "CMH_Woodland_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Operador_UAV_Woodland_Aguara: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Operador UAV (Woodland - Aguara)";
        editorSubcategory = "CMH_Woodland_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        backpack = "B_UAV_01_backpack_F";
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Medico_Woodland_Aguara: rhsusf_spcs_ocp_medic
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Medico (Woodland - Aguara)";
        editorSubcategory = "CMH_Woodland_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        attendant = 1;
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Ingeniero_Woodland_Aguara: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ingeniero (Woodland - Aguara)";
        editorSubcategory = "CMH_Woodland_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        engineer = 1;
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Oficial_Woodland_Aguara: rhsusf_spcs_ocp_squadleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Oficial (Woodland - Aguara)";
        editorSubcategory = "CMH_Woodland_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        respawnWeapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Suboficial_Woodland_Aguara: rhsusf_spcs_ocp_teamleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Suboficial (Woodland - Aguara)";
        editorSubcategory = "CMH_Woodland_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    // ----- Equipo: Buho -----
    class CMH_Fusilero_Woodland_Buho: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Fusilero (Woodland - Buho)";
        editorSubcategory = "CMH_Woodland_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Ametrallador_Woodland_Buho: rhsusf_spcs_ocp_machinegunner
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ametrallador (Woodland - Buho)";
        editorSubcategory = "CMH_Woodland_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        magazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        respawnMagazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Especialista_AA_Woodland_Buho: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AA (Woodland - Buho)";
        editorSubcategory = "CMH_Woodland_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Especialista_AT_Woodland_Buho: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AT (Woodland - Buho)";
        editorSubcategory = "CMH_Woodland_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Granadero_Woodland_Buho: rhsusf_spcs_ocp_grenadier
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Granadero (Woodland - Buho)";
        editorSubcategory = "CMH_Woodland_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Operador_UAV_Woodland_Buho: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Operador UAV (Woodland - Buho)";
        editorSubcategory = "CMH_Woodland_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        backpack = "B_UAV_01_backpack_F";
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Medico_Woodland_Buho: rhsusf_spcs_ocp_medic
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Medico (Woodland - Buho)";
        editorSubcategory = "CMH_Woodland_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        attendant = 1;
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Ingeniero_Woodland_Buho: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ingeniero (Woodland - Buho)";
        editorSubcategory = "CMH_Woodland_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        engineer = 1;
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Oficial_Woodland_Buho: rhsusf_spcs_ocp_squadleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Oficial (Woodland - Buho)";
        editorSubcategory = "CMH_Woodland_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        respawnWeapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Suboficial_Woodland_Buho: rhsusf_spcs_ocp_teamleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Suboficial (Woodland - Buho)";
        editorSubcategory = "CMH_Woodland_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    // ----- Equipo: Carpincho -----
    class CMH_Fusilero_Woodland_Carpincho: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Fusilero (Woodland - Carpincho)";
        editorSubcategory = "CMH_Woodland_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Ametrallador_Woodland_Carpincho: rhsusf_spcs_ocp_machinegunner
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ametrallador (Woodland - Carpincho)";
        editorSubcategory = "CMH_Woodland_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        magazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        respawnMagazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Especialista_AA_Woodland_Carpincho: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AA (Woodland - Carpincho)";
        editorSubcategory = "CMH_Woodland_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Especialista_AT_Woodland_Carpincho: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AT (Woodland - Carpincho)";
        editorSubcategory = "CMH_Woodland_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Granadero_Woodland_Carpincho: rhsusf_spcs_ocp_grenadier
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Granadero (Woodland - Carpincho)";
        editorSubcategory = "CMH_Woodland_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Operador_UAV_Woodland_Carpincho: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Operador UAV (Woodland - Carpincho)";
        editorSubcategory = "CMH_Woodland_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        backpack = "B_UAV_01_backpack_F";
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Medico_Woodland_Carpincho: rhsusf_spcs_ocp_medic
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Medico (Woodland - Carpincho)";
        editorSubcategory = "CMH_Woodland_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        attendant = 1;
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Ingeniero_Woodland_Carpincho: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ingeniero (Woodland - Carpincho)";
        editorSubcategory = "CMH_Woodland_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        engineer = 1;
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Oficial_Woodland_Carpincho: rhsusf_spcs_ocp_squadleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Oficial (Woodland - Carpincho)";
        editorSubcategory = "CMH_Woodland_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        respawnWeapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Suboficial_Woodland_Carpincho: rhsusf_spcs_ocp_teamleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Suboficial (Woodland - Carpincho)";
        editorSubcategory = "CMH_Woodland_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland","CMH_Helmet_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    // ==========================================================
    // PATRÓN: Woodland Arid
    // ==========================================================

    // ----- Equipo: CMHLogo -----
    class CMH_Fusilero_Woodland_Arid_CMHLogo: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Fusilero (Woodland Arid - CMHLogo)";
        editorSubcategory = "CMH_Woodland_Arid_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Ametrallador_Woodland_Arid_CMHLogo: rhsusf_spcs_ocp_machinegunner
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ametrallador (Woodland Arid - CMHLogo)";
        editorSubcategory = "CMH_Woodland_Arid_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        magazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        respawnMagazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Especialista_AA_Woodland_Arid_CMHLogo: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AA (Woodland Arid - CMHLogo)";
        editorSubcategory = "CMH_Woodland_Arid_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Especialista_AT_Woodland_Arid_CMHLogo: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AT (Woodland Arid - CMHLogo)";
        editorSubcategory = "CMH_Woodland_Arid_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Granadero_Woodland_Arid_CMHLogo: rhsusf_spcs_ocp_grenadier
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Granadero (Woodland Arid - CMHLogo)";
        editorSubcategory = "CMH_Woodland_Arid_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Operador_UAV_Woodland_Arid_CMHLogo: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Operador UAV (Woodland Arid - CMHLogo)";
        editorSubcategory = "CMH_Woodland_Arid_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        backpack = "B_UAV_01_backpack_F";
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Medico_Woodland_Arid_CMHLogo: rhsusf_spcs_ocp_medic
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Medico (Woodland Arid - CMHLogo)";
        editorSubcategory = "CMH_Woodland_Arid_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        attendant = 1;
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Ingeniero_Woodland_Arid_CMHLogo: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ingeniero (Woodland Arid - CMHLogo)";
        editorSubcategory = "CMH_Woodland_Arid_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        engineer = 1;
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Oficial_Woodland_Arid_CMHLogo: rhsusf_spcs_ocp_squadleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Oficial (Woodland Arid - CMHLogo)";
        editorSubcategory = "CMH_Woodland_Arid_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Suboficial_Woodland_Arid_CMHLogo: rhsusf_spcs_ocp_teamleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Suboficial (Woodland Arid - CMHLogo)";
        editorSubcategory = "CMH_Woodland_Arid_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    // ----- Equipo: Condor -----
    class CMH_Fusilero_Woodland_Arid_Condor: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Fusilero (Woodland Arid - Condor)";
        editorSubcategory = "CMH_Woodland_Arid_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Ametrallador_Woodland_Arid_Condor: rhsusf_spcs_ocp_machinegunner
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ametrallador (Woodland Arid - Condor)";
        editorSubcategory = "CMH_Woodland_Arid_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        magazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Especialista_AA_Woodland_Arid_Condor: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AA (Woodland Arid - Condor)";
        editorSubcategory = "CMH_Woodland_Arid_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Especialista_AT_Woodland_Arid_Condor: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AT (Woodland Arid - Condor)";
        editorSubcategory = "CMH_Woodland_Arid_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Granadero_Woodland_Arid_Condor: rhsusf_spcs_ocp_grenadier
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Granadero (Woodland Arid - Condor)";
        editorSubcategory = "CMH_Woodland_Arid_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Operador_UAV_Woodland_Arid_Condor: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Operador UAV (Woodland Arid - Condor)";
        editorSubcategory = "CMH_Woodland_Arid_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        backpack = "B_UAV_01_backpack_F";
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Medico_Woodland_Arid_Condor: rhsusf_spcs_ocp_medic
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Medico (Woodland Arid - Condor)";
        editorSubcategory = "CMH_Woodland_Arid_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        attendant = 1;
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Ingeniero_Woodland_Arid_Condor: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ingeniero (Woodland Arid - Condor)";
        editorSubcategory = "CMH_Woodland_Arid_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        engineer = 1;
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Oficial_Woodland_Arid_Condor: rhsusf_spcs_ocp_squadleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Oficial (Woodland Arid - Condor)";
        editorSubcategory = "CMH_Woodland_Arid_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Suboficial_Woodland_Arid_Condor: rhsusf_spcs_ocp_teamleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Suboficial (Woodland Arid - Condor)";
        editorSubcategory = "CMH_Woodland_Arid_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    // ----- Equipo: Puma -----
    class CMH_Fusilero_Woodland_Arid_Puma: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Fusilero (Woodland Arid - Puma)";
        editorSubcategory = "CMH_Woodland_Arid_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Ametrallador_Woodland_Arid_Puma: rhsusf_spcs_ocp_machinegunner
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ametrallador (Woodland Arid - Puma)";
        editorSubcategory = "CMH_Woodland_Arid_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        magazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Especialista_AA_Woodland_Arid_Puma: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AA (Woodland Arid - Puma)";
        editorSubcategory = "CMH_Woodland_Arid_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Especialista_AT_Woodland_Arid_Puma: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AT (Woodland Arid - Puma)";
        editorSubcategory = "CMH_Woodland_Arid_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Granadero_Woodland_Arid_Puma: rhsusf_spcs_ocp_grenadier
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Granadero (Woodland Arid - Puma)";
        editorSubcategory = "CMH_Woodland_Arid_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Operador_UAV_Woodland_Arid_Puma: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Operador UAV (Woodland Arid - Puma)";
        editorSubcategory = "CMH_Woodland_Arid_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        backpack = "B_UAV_01_backpack_F";
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Medico_Woodland_Arid_Puma: rhsusf_spcs_ocp_medic
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Medico (Woodland Arid - Puma)";
        editorSubcategory = "CMH_Woodland_Arid_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        attendant = 1;
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Ingeniero_Woodland_Arid_Puma: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ingeniero (Woodland Arid - Puma)";
        editorSubcategory = "CMH_Woodland_Arid_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        engineer = 1;
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Oficial_Woodland_Arid_Puma: rhsusf_spcs_ocp_squadleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Oficial (Woodland Arid - Puma)";
        editorSubcategory = "CMH_Woodland_Arid_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Suboficial_Woodland_Arid_Puma: rhsusf_spcs_ocp_teamleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Suboficial (Woodland Arid - Puma)";
        editorSubcategory = "CMH_Woodland_Arid_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    // ----- Equipo: Aguara -----
    class CMH_Fusilero_Woodland_Arid_Aguara: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Fusilero (Woodland Arid - Aguara)";
        editorSubcategory = "CMH_Woodland_Arid_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Ametrallador_Woodland_Arid_Aguara: rhsusf_spcs_ocp_machinegunner
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ametrallador (Woodland Arid - Aguara)";
        editorSubcategory = "CMH_Woodland_Arid_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        magazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Especialista_AA_Woodland_Arid_Aguara: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AA (Woodland Arid - Aguara)";
        editorSubcategory = "CMH_Woodland_Arid_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Especialista_AT_Woodland_Arid_Aguara: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AT (Woodland Arid - Aguara)";
        editorSubcategory = "CMH_Woodland_Arid_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Granadero_Woodland_Arid_Aguara: rhsusf_spcs_ocp_grenadier
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Granadero (Woodland Arid - Aguara)";
        editorSubcategory = "CMH_Woodland_Arid_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Operador_UAV_Woodland_Arid_Aguara: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Operador UAV (Woodland Arid - Aguara)";
        editorSubcategory = "CMH_Woodland_Arid_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        backpack = "B_UAV_01_backpack_F";
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Medico_Woodland_Arid_Aguara: rhsusf_spcs_ocp_medic
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Medico (Woodland Arid - Aguara)";
        editorSubcategory = "CMH_Woodland_Arid_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        attendant = 1;
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Ingeniero_Woodland_Arid_Aguara: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ingeniero (Woodland Arid - Aguara)";
        editorSubcategory = "CMH_Woodland_Arid_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        engineer = 1;
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Oficial_Woodland_Arid_Aguara: rhsusf_spcs_ocp_squadleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Oficial (Woodland Arid - Aguara)";
        editorSubcategory = "CMH_Woodland_Arid_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Suboficial_Woodland_Arid_Aguara: rhsusf_spcs_ocp_teamleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Suboficial (Woodland Arid - Aguara)";
        editorSubcategory = "CMH_Woodland_Arid_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    // ----- Equipo: Buho -----
    class CMH_Fusilero_Woodland_Arid_Buho: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Fusilero (Woodland Arid - Buho)";
        editorSubcategory = "CMH_Woodland_Arid_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Ametrallador_Woodland_Arid_Buho: rhsusf_spcs_ocp_machinegunner
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ametrallador (Woodland Arid - Buho)";
        editorSubcategory = "CMH_Woodland_Arid_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        magazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Especialista_AA_Woodland_Arid_Buho: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AA (Woodland Arid - Buho)";
        editorSubcategory = "CMH_Woodland_Arid_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Especialista_AT_Woodland_Arid_Buho: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AT (Woodland Arid - Buho)";
        editorSubcategory = "CMH_Woodland_Arid_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Granadero_Woodland_Arid_Buho: rhsusf_spcs_ocp_grenadier
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Granadero (Woodland Arid - Buho)";
        editorSubcategory = "CMH_Woodland_Arid_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Operador_UAV_Woodland_Arid_Buho: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Operador UAV (Woodland Arid - Buho)";
        editorSubcategory = "CMH_Woodland_Arid_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        backpack = "B_UAV_01_backpack_F";
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Medico_Woodland_Arid_Buho: rhsusf_spcs_ocp_medic
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Medico (Woodland Arid - Buho)";
        editorSubcategory = "CMH_Woodland_Arid_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        attendant = 1;
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Ingeniero_Woodland_Arid_Buho: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ingeniero (Woodland Arid - Buho)";
        editorSubcategory = "CMH_Woodland_Arid_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        engineer = 1;
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Oficial_Woodland_Arid_Buho: rhsusf_spcs_ocp_squadleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Oficial (Woodland Arid - Buho)";
        editorSubcategory = "CMH_Woodland_Arid_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Suboficial_Woodland_Arid_Buho: rhsusf_spcs_ocp_teamleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Suboficial (Woodland Arid - Buho)";
        editorSubcategory = "CMH_Woodland_Arid_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    // ----- Equipo: Carpincho -----
    class CMH_Fusilero_Woodland_Arid_Carpincho: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Fusilero (Woodland Arid - Carpincho)";
        editorSubcategory = "CMH_Woodland_Arid_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Ametrallador_Woodland_Arid_Carpincho: rhsusf_spcs_ocp_machinegunner
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ametrallador (Woodland Arid - Carpincho)";
        editorSubcategory = "CMH_Woodland_Arid_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        magazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Especialista_AA_Woodland_Arid_Carpincho: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AA (Woodland Arid - Carpincho)";
        editorSubcategory = "CMH_Woodland_Arid_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Especialista_AT_Woodland_Arid_Carpincho: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AT (Woodland Arid - Carpincho)";
        editorSubcategory = "CMH_Woodland_Arid_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Granadero_Woodland_Arid_Carpincho: rhsusf_spcs_ocp_grenadier
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Granadero (Woodland Arid - Carpincho)";
        editorSubcategory = "CMH_Woodland_Arid_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Operador_UAV_Woodland_Arid_Carpincho: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Operador UAV (Woodland Arid - Carpincho)";
        editorSubcategory = "CMH_Woodland_Arid_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        backpack = "B_UAV_01_backpack_F";
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Medico_Woodland_Arid_Carpincho: rhsusf_spcs_ocp_medic
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Medico (Woodland Arid - Carpincho)";
        editorSubcategory = "CMH_Woodland_Arid_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        attendant = 1;
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Ingeniero_Woodland_Arid_Carpincho: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ingeniero (Woodland Arid - Carpincho)";
        editorSubcategory = "CMH_Woodland_Arid_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        engineer = 1;
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Oficial_Woodland_Arid_Carpincho: rhsusf_spcs_ocp_squadleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Oficial (Woodland Arid - Carpincho)";
        editorSubcategory = "CMH_Woodland_Arid_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Suboficial_Woodland_Arid_Carpincho: rhsusf_spcs_ocp_teamleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Suboficial (Woodland Arid - Carpincho)";
        editorSubcategory = "CMH_Woodland_Arid_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland_Arid";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Arid","CMH_Helmet_Woodland_Arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    // ==========================================================
    // PATRÓN: Woodland Dark
    // ==========================================================

    // ----- Equipo: CMHLogo -----
    class CMH_Fusilero_Woodland_Dark_CMHLogo: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Fusilero (Woodland Dark - CMHLogo)";
        editorSubcategory = "CMH_Woodland_Dark_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Ametrallador_Woodland_Dark_CMHLogo: rhsusf_spcs_ocp_machinegunner
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ametrallador (Woodland Dark - CMHLogo)";
        editorSubcategory = "CMH_Woodland_Dark_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        magazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Especialista_AA_Woodland_Dark_CMHLogo: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AA (Woodland Dark - CMHLogo)";
        editorSubcategory = "CMH_Woodland_Dark_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Especialista_AT_Woodland_Dark_CMHLogo: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AT (Woodland Dark - CMHLogo)";
        editorSubcategory = "CMH_Woodland_Dark_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Granadero_Woodland_Dark_CMHLogo: rhsusf_spcs_ocp_grenadier
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Granadero (Woodland Dark - CMHLogo)";
        editorSubcategory = "CMH_Woodland_Dark_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Operador_UAV_Woodland_Dark_CMHLogo: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Operador UAV (Woodland Dark - CMHLogo)";
        editorSubcategory = "CMH_Woodland_Dark_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        backpack = "B_UAV_01_backpack_F";
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Medico_Woodland_Dark_CMHLogo: rhsusf_spcs_ocp_medic
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Medico (Woodland Dark - CMHLogo)";
        editorSubcategory = "CMH_Woodland_Dark_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        attendant = 1;
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Ingeniero_Woodland_Dark_CMHLogo: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ingeniero (Woodland Dark - CMHLogo)";
        editorSubcategory = "CMH_Woodland_Dark_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        engineer = 1;
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Oficial_Woodland_Dark_CMHLogo: rhsusf_spcs_ocp_squadleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Oficial (Woodland Dark - CMHLogo)";
        editorSubcategory = "CMH_Woodland_Dark_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Suboficial_Woodland_Dark_CMHLogo: rhsusf_spcs_ocp_teamleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Suboficial (Woodland Dark - CMHLogo)";
        editorSubcategory = "CMH_Woodland_Dark_CMHLogo";
        icon = "@CMH_VARIOS\Addons\icon\cmh_logo.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\cmh_logo.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    // ----- Equipo: Condor -----
    class CMH_Fusilero_Woodland_Dark_Condor: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Fusilero (Woodland Dark - Condor)";
        editorSubcategory = "CMH_Woodland_Dark_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Ametrallador_Woodland_Dark_Condor: rhsusf_spcs_ocp_machinegunner
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ametrallador (Woodland Dark - Condor)";
        editorSubcategory = "CMH_Woodland_Dark_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        magazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Especialista_AA_Woodland_Dark_Condor: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AA (Woodland Dark - Condor)";
        editorSubcategory = "CMH_Woodland_Dark_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Especialista_AT_Woodland_Dark_Condor: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AT (Woodland Dark - Condor)";
        editorSubcategory = "CMH_Woodland_Dark_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Granadero_Woodland_Dark_Condor: rhsusf_spcs_ocp_grenadier
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Granadero (Woodland Dark - Condor)";
        editorSubcategory = "CMH_Woodland_Dark_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Operador_UAV_Woodland_Dark_Condor: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Operador UAV (Woodland Dark - Condor)";
        editorSubcategory = "CMH_Woodland_Dark_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        backpack = "B_UAV_01_backpack_F";
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Medico_Woodland_Dark_Condor: rhsusf_spcs_ocp_medic
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Medico (Woodland Dark - Condor)";
        editorSubcategory = "CMH_Woodland_Dark_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        attendant = 1;
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Ingeniero_Woodland_Dark_Condor: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ingeniero (Woodland Dark - Condor)";
        editorSubcategory = "CMH_Woodland_Dark_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        engineer = 1;
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Oficial_Woodland_Dark_Condor: rhsusf_spcs_ocp_squadleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Oficial (Woodland Dark - Condor)";
        editorSubcategory = "CMH_Woodland_Dark_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        respawnWeapons[] = {"__COPY_WEAPONS__"};
        respawnMagazines[] = {"__COPY_MAGAZINES__"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"__COPY_ITEMS__"};
    };

    class CMH_Suboficial_Woodland_Dark_Condor: rhsusf_spcs_ocp_teamleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Suboficial (Woodland Dark - Condor)";
        editorSubcategory = "CMH_Woodland_Dark_Condor";
        icon = "@CMH_VARIOS\Addons\icon\condor.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\condor.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    // ----- Equipo: Puma -----
    class CMH_Fusilero_Woodland_Dark_Puma: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Fusilero (Woodland Dark - Puma)";
        editorSubcategory = "CMH_Woodland_Dark_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Ametrallador_Woodland_Dark_Puma: rhsusf_spcs_ocp_machinegunner
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ametrallador (Woodland Dark - Puma)";
        editorSubcategory = "CMH_Woodland_Dark_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        magazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        respawnMagazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Especialista_AA_Woodland_Dark_Puma: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AA (Woodland Dark - Puma)";
        editorSubcategory = "CMH_Woodland_Dark_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Especialista_AT_Woodland_Dark_Puma: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AT (Woodland Dark - Puma)";
        editorSubcategory = "CMH_Woodland_Dark_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Granadero_Woodland_Dark_Puma: rhsusf_spcs_ocp_grenadier
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Granadero (Woodland Dark - Puma)";
        editorSubcategory = "CMH_Woodland_Dark_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Operador_UAV_Woodland_Dark_Puma: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Operador UAV (Woodland Dark - Puma)";
        editorSubcategory = "CMH_Woodland_Dark_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        backpack = "B_UAV_01_backpack_F";
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Medico_Woodland_Dark_Puma: rhsusf_spcs_ocp_medic
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Medico (Woodland Dark - Puma)";
        editorSubcategory = "CMH_Woodland_Dark_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        attendant = 1;
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Ingeniero_Woodland_Dark_Puma: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ingeniero (Woodland Dark - Puma)";
        editorSubcategory = "CMH_Woodland_Dark_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        engineer = 1;
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Oficial_Woodland_Dark_Puma: rhsusf_spcs_ocp_squadleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Oficial (Woodland Dark - Puma)";
        editorSubcategory = "CMH_Woodland_Dark_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        respawnWeapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Suboficial_Woodland_Dark_Puma: rhsusf_spcs_ocp_teamleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Suboficial (Woodland Dark - Puma)";
        editorSubcategory = "CMH_Woodland_Dark_Puma";
        icon = "@CMH_VARIOS\Addons\icon\puma.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\puma.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    // ----- Equipo: Aguara -----
    class CMH_Fusilero_Woodland_Dark_Aguara: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Fusilero (Woodland Dark - Aguara)";
        editorSubcategory = "CMH_Woodland_Dark_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Ametrallador_Woodland_Dark_Aguara: rhsusf_spcs_ocp_machinegunner
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ametrallador (Woodland Dark - Aguara)";
        editorSubcategory = "CMH_Woodland_Dark_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        magazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        respawnMagazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Especialista_AA_Woodland_Dark_Aguara: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AA (Woodland Dark - Aguara)";
        editorSubcategory = "CMH_Woodland_Dark_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Especialista_AT_Woodland_Dark_Aguara: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AT (Woodland Dark - Aguara)";
        editorSubcategory = "CMH_Woodland_Dark_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Granadero_Woodland_Dark_Aguara: rhsusf_spcs_ocp_grenadier
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Granadero (Woodland Dark - Aguara)";
        editorSubcategory = "CMH_Woodland_Dark_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Operador_UAV_Woodland_Dark_Aguara: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Operador UAV (Woodland Dark - Aguara)";
        editorSubcategory = "CMH_Woodland_Dark_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        backpack = "B_UAV_01_backpack_F";
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Medico_Woodland_Dark_Aguara: rhsusf_spcs_ocp_medic
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Medico (Woodland Dark - Aguara)";
        editorSubcategory = "CMH_Woodland_Dark_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        attendant = 1;
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Ingeniero_Woodland_Dark_Aguara: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ingeniero (Woodland Dark - Aguara)";
        editorSubcategory = "CMH_Woodland_Dark_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        engineer = 1;
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Oficial_Woodland_Dark_Aguara: rhsusf_spcs_ocp_squadleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Oficial (Woodland Dark - Aguara)";
        editorSubcategory = "CMH_Woodland_Dark_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        respawnWeapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Suboficial_Woodland_Dark_Aguara: rhsusf_spcs_ocp_teamleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Suboficial (Woodland Dark - Aguara)";
        editorSubcategory = "CMH_Woodland_Dark_Aguara";
        icon = "@CMH_VARIOS\Addons\icon\aguara.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\aguara.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    // ----- Equipo: Buho -----
    class CMH_Fusilero_Woodland_Dark_Buho: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Fusilero (Woodland Dark - Buho)";
        editorSubcategory = "CMH_Woodland_Dark_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Ametrallador_Woodland_Dark_Buho: rhsusf_spcs_ocp_machinegunner
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ametrallador (Woodland Dark - Buho)";
        editorSubcategory = "CMH_Woodland_Dark_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        magazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        respawnMagazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Especialista_AA_Woodland_Dark_Buho: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AA (Woodland Dark - Buho)";
        editorSubcategory = "CMH_Woodland_Dark_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Especialista_AT_Woodland_Dark_Buho: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AT (Woodland Dark - Buho)";
        editorSubcategory = "CMH_Woodland_Dark_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Granadero_Woodland_Dark_Buho: rhsusf_spcs_ocp_grenadier
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Granadero (Woodland Dark - Buho)";
        editorSubcategory = "CMH_Woodland_Dark_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Operador_UAV_Woodland_Dark_Buho: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Operador UAV (Woodland Dark - Buho)";
        editorSubcategory = "CMH_Woodland_Dark_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        backpack = "B_UAV_01_backpack_F";
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Medico_Woodland_Dark_Buho: rhsusf_spcs_ocp_medic
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Medico (Woodland Dark - Buho)";
        editorSubcategory = "CMH_Woodland_Dark_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        attendant = 1;
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Ingeniero_Woodland_Dark_Buho: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ingeniero (Woodland Dark - Buho)";
        editorSubcategory = "CMH_Woodland_Dark_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        engineer = 1;
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Oficial_Woodland_Dark_Buho: rhsusf_spcs_ocp_squadleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Oficial (Woodland Dark - Buho)";
        editorSubcategory = "CMH_Woodland_Dark_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        respawnWeapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Suboficial_Woodland_Dark_Buho: rhsusf_spcs_ocp_teamleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Suboficial (Woodland Dark - Buho)";
        editorSubcategory = "CMH_Woodland_Dark_Buho";
        icon = "@CMH_VARIOS\Addons\icon\buho.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\buho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    // ----- Equipo: Carpincho -----
    class CMH_Fusilero_Woodland_Dark_Carpincho: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Fusilero (Woodland Dark - Carpincho)";
        editorSubcategory = "CMH_Woodland_Dark_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Ametrallador_Woodland_Dark_Carpincho: rhsusf_spcs_ocp_machinegunner
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ametrallador (Woodland Dark - Carpincho)";
        editorSubcategory = "CMH_Woodland_Dark_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        magazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
        respawnMagazines[] = {"rhs_200rnd_556x45_M855_box","rhsusf_mag_15Rnd_9x19_JHP","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Especialista_AA_Woodland_Dark_Carpincho: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AA (Woodland Dark - Carpincho)";
        editorSubcategory = "CMH_Woodland_Dark_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","rhs_weap_fim92","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Especialista_AT_Woodland_Dark_Carpincho: rhsusf_spcs_ocp_rifleman_alt
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Especialista AT (Woodland Dark - Carpincho)";
        editorSubcategory = "CMH_Woodland_Dark_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","rhs_weap_M136","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Granadero_Woodland_Dark_Carpincho: rhsusf_spcs_ocp_grenadier
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Granadero (Woodland Dark - Carpincho)";
        editorSubcategory = "CMH_Woodland_Dark_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1_m203","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Operador_UAV_Woodland_Dark_Carpincho: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Operador UAV (Woodland Dark - Carpincho)";
        editorSubcategory = "CMH_Woodland_Dark_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        backpack = "B_UAV_01_backpack_F";
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Medico_Woodland_Dark_Carpincho: rhsusf_spcs_ocp_medic
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Medico (Woodland Dark - Carpincho)";
        editorSubcategory = "CMH_Woodland_Dark_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        attendant = 1;
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellGreen"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Ingeniero_Woodland_Dark_Carpincho: rhsusf_spcs_ocp_rifleman
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Ingeniero (Woodland Dark - Carpincho)";
        editorSubcategory = "CMH_Woodland_Dark_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        engineer = 1;
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Oficial_Woodland_Dark_Carpincho: rhsusf_spcs_ocp_squadleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Oficial (Woodland Dark - Carpincho)";
        editorSubcategory = "CMH_Woodland_Dark_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        respawnWeapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

    class CMH_Suboficial_Woodland_Dark_Carpincho: rhsusf_spcs_ocp_teamleader
    {
        scope = 2;
        side = 1;
        faction = "CMH_Occidental";
        displayName = "Suboficial (Woodland Dark - Carpincho)";
        editorSubcategory = "CMH_Woodland_Dark_Carpincho";
        icon = "@CMH_VARIOS\Addons\icon\carpincho.paa";
        uniformClass = "CMH_Uniform_Woodland_Dark";
        hiddenSelectionsTextures[] = {"@CMH_VARIOS\Addons\icon\carpincho.paa"};
        linkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"CMH_SPCS_Woodland_Dark","CMH_Helmet_Woodland_Dark","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell"};
        items[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
        respawnItems[] = {"ACE_EarPlugs","ACE_fieldDressing","ACE_tourniquet"};
    };

};
