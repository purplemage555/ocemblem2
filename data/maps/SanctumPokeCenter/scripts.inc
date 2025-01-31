.set LOCALID_NURSE, 1
SanctumPokeCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Sanctum_PC_OnTransition
	.byte 0
Sanctum_PC_OnTransition:
	setrespawn HEAL_LOCATION_SANCTUM
	end