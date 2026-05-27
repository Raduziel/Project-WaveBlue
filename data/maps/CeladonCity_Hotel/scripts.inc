CeladonCity_Hotel_MapScripts::
	.byte 0

CeladonCity_Hotel_EventScript_Receptionist::
	lock
	faceplayer
	goto_if_set FLAG_GOT_CLEAR_AMULET, CeladonCity_Hotel_EventScript_ReceptionistPost
	msgbox CeladonCity_Hotel_Text_AmuletIntro, MSGBOX_DEFAULT
	giveitem ITEM_CLEAR_AMULET
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_Hotel_EventScript_BagFull
	setflag FLAG_GOT_CLEAR_AMULET
	release
	end

CeladonCity_Hotel_EventScript_BagFull::
	msgbox CeladonCity_Hotel_Text_BagFull, MSGBOX_NPC
	end

CeladonCity_Hotel_EventScript_ReceptionistPost::
	msgbox CeladonCity_Hotel_Text_AmuletPost, MSGBOX_NPC
	end

CeladonCity_Hotel_EventScript_Beauty::
	msgbox CeladonCity_Hotel_Text_OnVacationWithBrotherAndBoyfriend, MSGBOX_NPC
	end

CeladonCity_Hotel_EventScript_BeautyBoyfriend::
	msgbox CeladonCity_Hotel_Text_WhyDidSheBringBrother, MSGBOX_NPC
	end

CeladonCity_Hotel_EventScript_BeautyBrother::
	msgbox CeladonCity_Hotel_Text_SisBroughtMeOnVacation, MSGBOX_NPC
	end
