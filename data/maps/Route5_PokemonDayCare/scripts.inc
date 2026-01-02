@ Handled by data/scripts/day_care.inc

Route5_PokemonDayCare_MapScripts::
	.byte 0

Route5_PokemonDayCare_EventScript_GiveLuckyEgg::
	lock
	faceplayer
	goto_if_set FLAG_GOT_LUCKY_EGG, EventScript_GiveLuckyEgg_AlreadyGave
	textcolor NPC_TEXT_COLOR_MALE
	msgbox Text_GiveLuckyEgg_Offer, MSGBOX_DEFAULT
	giveitem ITEM_LUCKY_EGG
	goto_if_eq VAR_RESULT, FALSE, EventScript_GiveLuckyEgg_BagFull
	setflag FLAG_GOT_LUCKY_EGG
	textcolor NPC_TEXT_COLOR_NEUTRAL
	release
	end

EventScript_GiveLuckyEgg_AlreadyGave::
	textcolor NPC_TEXT_COLOR_MALE
	msgbox Text_GiveLuckyEgg_AfterGiving, MSGBOX_DEFAULT
	textcolor NPC_TEXT_COLOR_NEUTRAL
	release
	end

EventScript_GiveLuckyEgg_BagFull::
	msgbox Text_GiveLuckyEgg_BagFull, MSGBOX_DEFAULT
	textcolor NPC_TEXT_COLOR_NEUTRAL
	release
	end
