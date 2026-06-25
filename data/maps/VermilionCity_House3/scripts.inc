VermilionCity_House3_MapScripts::
	.byte 0

VermilionCity_House3_EventScript_Boy::
	msgbox VermilionCity_House3_Text_PidgeyFlyLetterToSaffron, MSGBOX_NPC
	end

VermilionCity_House3_EventScript_Pidgey::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIDGEY, CRY_MODE_NORMAL
	msgbox VermilionCity_House3_Text_Pidgey
	waitmoncry
	release
	end

VermilionCity_House3_EventScript_Letter::
	msgbox VermilionCity_House3_Text_DearPippiLetter, MSGBOX_SIGN
	end

VermilionCity_House3_EventScript_LittleBoy::
	lock
	faceplayer
	goto_if_set FLAG_GOT_FLIGHT_TICKET, VermilionCity_House3_EventScript_BoyAlreadyGave
	msgbox VermilionCity_House3_Text_BoyGiveFlightTicket, MSGBOX_DEFAULT
	giveitem ITEM_FLIGHT_TICKET
	setflag FLAG_GOT_FLIGHT_TICKET
	release
	end

VermilionCity_House3_EventScript_BoyAlreadyGave::
	msgbox VermilionCity_House3_Text_BoyAlreadyGave, MSGBOX_DEFAULT
	release
	end
