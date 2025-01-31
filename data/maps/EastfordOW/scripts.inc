EastfordOW_MapScripts::
	.byte 0
Eastford_EventScript_TownSign::
	msgbox Eastford_Text_TownSign, MSGBOX_SIGN
	end
Eastford_Text_TownSign:
	.string "Eastford:\n"
	.string "The city east of Selenium!$"
Eastford_EventScript_TriSign::
	msgbox Eastford_Text_TriSign, MSGBOX_SIGN
	end
Eastford_Text_TriSign:
	.string "This grassy Triforce was\n"
	.string "trimmed in honor of Elowyn,\p"
	.string "Princess of Hyrule, who\n"
	.string "became Queen Zelda CDI.$"
Eastford_ES_FlowerGirl::
	MSGBOX Eastford_Text_FlowerGirl, MSGBOX_NPC
	end
Eastford_Text_FlowerGirl:
	.string "Do you like this flower patch?\p"
	.string "The first Empress of Selenia, Selene,\n"
	.string "was said to wear daisies in her hair.\p"
	.string "Many towns throughout Selenia grow\n"
	.string "daisies everywhere in her honor.$"