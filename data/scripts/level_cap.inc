.global EventScript_ToggleLevelCap
EventScript_ToggleLevelCap::
	lockall
	checkflag FLAG_TOGGLE_LEVEL_CAP
	goto_if_eq EventScript_TurnSystemOn
	goto EventScript_TurnSystemOff

EventScript_TurnSystemOff::
	setflag FLAG_TOGGLE_LEVEL_CAP
	msgbox Text_LevelCapDisabled, MSGBOX_SIGN
	releaseall
	end

EventScript_TurnSystemOn::
	clearflag FLAG_TOGGLE_LEVEL_CAP
	msgbox Text_LevelCapEnabled, MSGBOX_SIGN
	releaseall
	end
