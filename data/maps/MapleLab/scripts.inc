MapleLab_MapScripts::
	.byte 0
MapleLab_ES_Maple::
	lock
	faceplayer
	msgbox MapleLab_HiPlayer, MSGBOX_DEFAULT
	release
	end
MapleLab_HiPlayer:
	.string "Hi, {PLAYER}!\p"
	.string "Feel free to take a look around;\n"
	.string "my lab ain't much, but it's comfy!$"