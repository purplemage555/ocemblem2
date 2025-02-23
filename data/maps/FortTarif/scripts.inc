FortTarif_MapScripts::
	.byte 0
FT_ES_Sign::
	msgbox FT_Text_Sign, MSGBOX_SIGN
	end
FT_ES_Hiker::
	lock
	faceplayer
	msgbox FT_Text_Hiker, MSGBOX_NPC
	release
	end
FT_Text_Sign:
	.string "Fort Tarif:\p"
	.string "Once an intact structure, but was\n"
	.string "buried under several rock slides.$"
FT_Text_Hiker:
	.string "The view up here is pretty good!$"