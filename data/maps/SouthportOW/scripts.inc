SouthportOW_MapScripts::
	.byte 0
Southport_EventScript_TownSign::
	msgbox Southport_Text_TownSign, MSGBOX_SIGN
	end
OC_ES_HM1::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_CUT, RustboroCity_CuttersHouse_EventScript_ExplainCut
	msgbox RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse, MSGBOX_DEFAULT
	giveitem ITEM_HM_CUT
	setflag FLAG_RECEIVED_HM_CUT
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
	release
	end
OC_ES_Badge1TMSeller::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_BADGE1, OC_ES_Badge1TMShop
	msgbox OC_Text_ComeBackAfterBadge1, MSGBOX_DEFAULT
	release
	end
OC_ES_Badge1TMShop::
	message gText_Badge1TMShop
	waitmessage
	pokemart Badge1TMShop
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	.align 2
Badge1TMShop:
	.2byte ITEM_TM_WATER_PULSE
	pokemartlistend
Southport_Text_TownSign:
	.string "Southport:\p"
	.string "Where the sea is our livelihood;\n"
	.string "from treasure to tasty seafood!$"
OC_Text_ComeBackAfterBadge1:
	.string "Come back after you've bested\n"
	.string "Duchess Erina Waterstone, matey!$"
gText_Badge1TMShop:
	.string "You got the Pearl Badge!\n"
	.string "Take a look at me wares!$"