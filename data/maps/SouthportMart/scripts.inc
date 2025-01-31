SouthportMart_MapScripts::
	.byte 0
OC_ES_Clerk_EarlyBerries::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart OC_Mart_EarlyBerries
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
OC_Mart_EarlyBerries:
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_PERSIM_BERRY
	pokemartlistend