SeleniaRoute7_MapScripts::
	.byte 0
OC_R7_ES_RouteSign::
	msgbox OC_R7_Text_RouteSign, MSGBOX_SIGN
	end
OC_R7_Text_RouteSign:
	.string "Selenia Route 7:\n"
	.string "Right across the Power Plant!$"
OC_R7_ES_HouseSign::
	msgbox OC_R7_Text_HouseSign, MSGBOX_SIGN
	end
OC_ES_ThisIsASign::
	msgbox OC_Text_ThisIsASign, MSGBOX_SIGN
	end
OC_R7_Text_HouseSign:
	.string "Parker Residence$"
OC_Text_ThisIsASign:
	.string "This is a sign.$"
OC_R7_ES_Peter::
	trainerbattle_single TRAINER_OC_R7_SPIDEY, R7_PeterIntro, R7_PeterDefeat
	msgbox R7_PeterPostBattle, MSGBOX_AUTOCLOSE
	end
OC_R7_ES_Goblin::
	trainerbattle_single TRAINER_OC_R7_GOBLIN, R7_GoblinIntro, R7_GoblinDefeat
	msgbox R7_GoblinPostBattle, MSGBOX_AUTOCLOSE
	end
OC_R7_ES_Octopus::
	trainerbattle_single TRAINER_OC_R7_OCTOPUS, R7_OctopusIntro, R7_OctopusDefeat
	msgbox R7_OctopusPostBattle, MSGBOX_AUTOCLOSE
	end
OC_R7_ES_Electro::
	trainerbattle_single TRAINER_OC_R7_ELECTRO, R7_ElectroIntro, R7_ElectroDefeat
	msgbox R7_ElectroPostBattle, MSGBOX_AUTOCLOSE
	end
OC_R7_ES_Kappa::
	trainerbattle_single TRAINER_OC_R7_KAPPA, R7_KappaIntro, R7_KappaDefeat
	msgbox R7_KappaPostBattle, MSGBOX_AUTOCLOSE
	end
OC_R7_ES_Lesk::
	trainerbattle_single TRAINER_OC_R7_LESK, R7_LeskIntro, R7_LeskDefeat
	msgbox R7_LeskPostBattle, MSGBOX_AUTOCLOSE
	end
R7_PeterIntro:
	.string "Hi, um… I'm Peter Parker.\n"
	.string "You're {PLAYER}, right?\p"
	.string "I've heard a lot about you\n"
	.string "from Maple! You're so cool!\p"
	.string "Maple's been my best friend,\n"
	.string "even when I was still a kid…\p"
	.string "Anyway, uh- Wanna battle?$"
R7_PeterDefeat:
	.string "Darn, I lost.\n"
	.string "That was fun though!$"
R7_PeterPostBattle:
	.string "Peter: Thanks for battling me.\n"
	.string "You're good at this, {PLAYER}!\p"
	.string "I'm thinking of visiting the\n"
	.string "Spider Cavern to train my team…$"
R7_GoblinIntro:
	.string "You know, I'm something\n"
	.string "of a scientist myself.$"
R7_GoblinDefeat:
	.string "You can't do this to me…$"
R7_GoblinPostBattle:
	.string "Apologies. I'm Norman Osborn.\n"
	.string "I'm a Power Plant executive.$"
R7_OctopusIntro:
	.string "The power of the sun,\n"
	.string "in the palm of my hand…$"
R7_OctopusDefeat:
	.string "Butterfingers!$"
R7_OctopusPostBattle:
	.string "The Power Plant draws electricity\n"
	.string "from satellites orbiting the Sun.\p"
	.string "This array of energy-collecting\n"
	.string "satellites is called a Dyson swarm.$"
R7_ElectroIntro:
	.string "It's my birthday today! Now it's\n"
	.string "time for me to light up my candles!$"
R7_ElectroDefeat:
	.string "Out of power!$"
R7_ElectroPostBattle:
	.string "It's my job to monitor and feed\n"
	.string "the Electric types in the river.\p"
	.string "Their population is thriving\n"
	.string "from the Power Plant's output!$"
R7_KappaIntro:
	.string "A gulp of tea makes for\n"
	.string "a great picnic capper!$"
R7_KappaDefeat:
	.string "Gulp… My tea…$"
R7_KappaPostBattle:
	.string "I know it's raining hard,\n"
	.string "but it's still lovely weather!$"
R7_LeskIntro:
	.string "Soda Pop, Soda Pop!\n"
	.string "Can't get enough of Soda Pop!$"
R7_LeskDefeat:
	.string "Fizzled out…$"
R7_LeskPostBattle:
	.string "I drink tons of Soda Pop\n"
	.string "every day, 'round the clock!\p"
	.string "It makes me feel ALIVE!!!!!$"