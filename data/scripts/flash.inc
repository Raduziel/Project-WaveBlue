EventScript_FldEffFlash::
	animateflash 0
	setflashlevel 0
	releaseall
	end

DarkCave_OnTransition::
	setvar VAR_DARKCAVE_OFFER, 0
	checkitem ITEM_LANTERN, 1
	goto_if_eq VAR_RESULT, FALSE, DarkCave_EventScript_TransitionEnd
	goto_if_set FLAG_SYS_FLASH_ACTIVE, DarkCave_EventScript_TransitionEnd
	setvar VAR_DARKCAVE_OFFER, 1

DarkCave_EventScript_TransitionEnd::
	return

DarkCave_EventScript_OfferLantern::
	lockall
	setvar VAR_DARKCAVE_OFFER, 2
	msgbox Text_DarkCaveOfferLantern, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, DarkCave_EventScript_DeclineLantern
	closemessage
	playse SE_M_REFLECT
	setflag FLAG_SYS_FLASH_ACTIVE
	goto EventScript_FldEffFlash

DarkCave_EventScript_DeclineLantern::
	closemessage
	releaseall
	end

Text_DarkCaveOfferLantern::
	.string "This cave is pitch black.\n"
	.string "Light up your Lantern?$"
