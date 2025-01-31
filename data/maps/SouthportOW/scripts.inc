SouthportOW_MapScripts::
	.byte 0
Southport_EventScript_TownSign::
	msgbox Southport_Text_TownSign, MSGBOX_SIGN
	end
OC_ES_Badge1::
	trainerbattle_single TRAINER_OC_BADGE1, OC_Text_Badge1Intro, OC_Text_Badge1Defeat, OC_ES_Badge1Defeated, NO_MUSIC
	goto_if_unset FLAG_RECEIVED_TM_BADGE1, OC_ES_GiveTMBadge1
	msgbox OC_Text_Badge1PostBattle, MSGBOX_DEFAULT
	release
	end
OC_ES_Badge1Defeated::
	message OC_Text_ReceivedBadge1
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox OC_Text_Badge1InfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_RUSTBORO_GYM
	setflag FLAG_BADGE01_GET
	goto OC_ES_GiveTMBadge1
	end
OC_ES_GiveTMBadge1::
	giveitem ITEM_TM_WATER_PULSE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_BADGE1
	msgbox OC_ES_ExplainBadge1TM, MSGBOX_DEFAULT
	release
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
OC_Text_Badge1Intro:
	.string "Greetings, challenger.\p"
	.string "I heard from my sailors you dealt\n"
	.string "with that nuisance at the lodge.\p"
	.string "I thank you from\n"
	.string "the bottom of my heart.\p"
	.string "Now, you're here for your\n"
	.string "rite of passage, yes?\p"
	.string "Very well. We here in the duchy of\n"
	.string "Argent Coast are seafaring folk.\p"
	.string "Many of us are fishers and sailors;\n"
	.string "settling not soil, but sturdy ships.\p"
	.string "I, Duchess Erina Waterstone of the\n"
	.string "Argent Coast, accept your challenge.\p"
	.string "Let this battle display the beauty\n"
	.string "and bounty of the warm eastern sea!$"
OC_Text_Badge1Defeat:
	.string "Well met, {PLAYER}.\n"
	.string "You have braved the storm.$"
OC_Text_ReceivedBadge1:
	.string "{PLAYER} received the\n"
	.string "Pearl Badge from Erina!$"
OC_Text_Badge1InfoTakeThis:
	.string "The Pearl Badge boosts your\n"
	.string "Pokémon's physical Attack.\p"
	.string "It also enables them to use\n"
	.string "the HM Cut outside of battle.\p"
	.string "Please take this TM as well,\n"
	.string "as a token of my appreciation.$"
OC_ES_ExplainBadge1TM:
	.string "TM99 contains Water Pulse.\p"
	.string "You can teach it to more\n"
	.string "than just Water type Pokémon!$"
OC_Text_Badge1PostBattle:
	.string "I'd love for you to take a look\n"
	.string "around Southport for a moment.\p"
	.string "It might be worth your while!$"
Southport_Text_TownSign:
	.string "Southport:\p"
	.string "Where the sea is our livelihood;\n"
	.string "from treasure to tasty seafood!$"