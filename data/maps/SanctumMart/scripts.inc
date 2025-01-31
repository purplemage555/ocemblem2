SanctumMart_MapScripts::
	.byte 0
Sanctum_ES_SodaJunkie::
	lock
	faceplayer
	msgbox Sanctum_Text_SodaJunkie, MSGBOX_NPC
	release
	end
OC_ES_Clerk_Drinks::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart OC_Mart_Drinks
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
OC_Mart_Drinks:
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_MOOMOO_MILK
	pokemartlistend
Sanctum_Text_SodaJunkie:
	.string "We sorcerers always\n"
	.string "gotta stay hydrated!\p"
	.string "Good thing our local Poké Mart\n"
	.string "sells lots of different drinks!\p"
	.string "Fresh Water may be the healthiest,\n"
	.string "but Soda Pop's my favorite drink!$"