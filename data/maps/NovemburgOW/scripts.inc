NovemburgOW_MapScripts::
	.byte 0
OC_Novemburg_ES_TownSign::
	msgbox OC_Novemburg_Text_TownSign, MSGBOX_SIGN
	end
OC_Novemburg_ES_BadgeSign::
	msgbox OC_Novemburg_Text_BadgeSign, MSGBOX_SIGN
	end
Novemburg_ES_NPC1::
	lock
	faceplayer
	msgbox Novemburg_Text_NPC1, MSGBOX_NPC
	release
	end
Novemburg_ES_NPC2::
	lock
	faceplayer
	msgbox Novemburg_Text_NPC2, MSGBOX_NPC
	release
	end
Novemburg_ES_NPC3::
	lock
	faceplayer
	msgbox Novemburg_Text_NPC3, MSGBOX_NPC
	release
	end
OC_Novemburg_Text_TownSign:
	.string "Novemburg:\p"
	.string "A city of technological\n"
	.string "and cultural exchange,\p"
	.string "just above the Hylian border!$"
OC_Novemburg_Text_BadgeSign:
	.string "Office of Duke Thunderstone,\n"
	.string "governor of New Tabantha.$"
Novemburg_Text_NPC1:
	.string "Here in Novemburg, we often\n"
	.string "work alongside Hylian scholars.\p"
	.string "We stay up around the clock\n"
	.string "doing all kinds of research!$"
Novemburg_Text_NPC2:
	.string "Both Sheikah and Zonai tech\n"
	.string "are made of a special metal.\p"
	.string "They call it zonaite, but the\n"
	.string "scientific term is vibranium.\p"
	.string "Hyrule is full of vibranium from\n"
	.string "a 66 million year-old meteorite.$"
Novemburg_Text_NPC3:
	.string "It rains a lot on Route 7,\n"
	.string "but I really like the rain!\p"
	.string "The constant thunderstorm\n"
	.string "always scares me off though…$"