Route19_MapScripts::
	.byte 0

Route19_EventScript_RouteSign::
	msgbox Route19_Text_RouteSign, MSGBOX_SIGN
	end

Route19_EventScript_RubberBoat::
	lock
	faceplayer
	goto_if_set FLAG_GOT_RUBBER_BOAT, Route19_EventScript_RubberBoatPostGift
	goto_if_unset FLAG_DEFEATED_KOGA, Route19_EventScript_RubberBoatGate
	textcolor NPC_TEXT_COLOR_FEMALE
	msgbox Route19_Text_RubberBoatOffer, MSGBOX_DEFAULT
	giveitem ITEM_RUBBER_BOAT
	setflag FLAG_GOT_RUBBER_BOAT
	textcolor NPC_TEXT_COLOR_FEMALE
	msgbox Route19_Text_RubberBoatFarewell, MSGBOX_DEFAULT
	release
	end

Route19_EventScript_RubberBoatGate::
	textcolor NPC_TEXT_COLOR_FEMALE
	msgbox Route19_Text_RubberBoatGate, MSGBOX_DEFAULT
	release
	end

Route19_EventScript_RubberBoatPostGift::
	textcolor NPC_TEXT_COLOR_FEMALE
	msgbox Route19_Text_RubberBoatPostGift, MSGBOX_DEFAULT
	release
	end
