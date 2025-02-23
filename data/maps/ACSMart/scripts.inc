ACSMart_MapScripts::
	.byte 0
OC_ES_Clerk_SpaceShop::
	lock
	faceplayer
	message gText_SpaceShop
	waitmessage
	pokemart OC_Mart_SpaceShop
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
gText_SpaceShop:
	.string "Hello, hello!\p"
	.string "We sell Moon Stones gathered\n"
	.string "during monthly lunar missions.\p"
	.string "Both Masser and Secunda are rich\n"
	.string "in these stones and moonstone ore.$"
	.align 2
OC_Mart_SpaceShop:
	.2byte ITEM_MOON_BALL
	.2byte ITEM_MOON_STONE
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_X_SPECIAL
	pokemartlistend