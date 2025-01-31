.set LOCALID_NURSE, 1
EastfordPokeCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Eastford_PC_OnTransition
	.byte 0
Eastford_PC_OnTransition:
	setrespawn HEAL_LOCATION_EASTFORD
	end
OC_ES_PokeCenter_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end