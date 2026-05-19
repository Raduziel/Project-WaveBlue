CeruleanCity_House4_MapScripts::
	.byte 0

CeruleanCity_House4_EventScript_RumorLady::
	lock
	faceplayer
	switch VAR_RANDOM_SPEECH
	case 0, CeruleanCity_House4_EventScript_Hint0
	case 1, CeruleanCity_House4_EventScript_Hint1
	case 2, CeruleanCity_House4_EventScript_Hint2
	case 3, CeruleanCity_House4_EventScript_Hint3
	case 4, CeruleanCity_House4_EventScript_Hint4
	case 5, CeruleanCity_House4_EventScript_Hint5
	case 6, CeruleanCity_House4_EventScript_Hint6
	end

CeruleanCity_House4_EventScript_Hint0::
	msgbox CeruleanCity_House4_Text_Hint0, MSGBOX_DEFAULT
	goto CeruleanCity_House4_EventScript_AdvanceCounter
	end

CeruleanCity_House4_EventScript_Hint1::
	msgbox CeruleanCity_House4_Text_Hint1, MSGBOX_DEFAULT
	goto CeruleanCity_House4_EventScript_AdvanceCounter
	end

CeruleanCity_House4_EventScript_Hint2::
	msgbox CeruleanCity_House4_Text_Hint2, MSGBOX_DEFAULT
	goto CeruleanCity_House4_EventScript_AdvanceCounter
	end

CeruleanCity_House4_EventScript_Hint3::
	msgbox CeruleanCity_House4_Text_Hint3, MSGBOX_DEFAULT
	goto CeruleanCity_House4_EventScript_AdvanceCounter
	end

CeruleanCity_House4_EventScript_Hint4::
	msgbox CeruleanCity_House4_Text_Hint4, MSGBOX_DEFAULT
	goto CeruleanCity_House4_EventScript_AdvanceCounter
	end

CeruleanCity_House4_EventScript_Hint5::
	msgbox CeruleanCity_House4_Text_Hint5, MSGBOX_DEFAULT
	goto CeruleanCity_House4_EventScript_AdvanceCounter
	end

CeruleanCity_House4_EventScript_Hint6::
	msgbox CeruleanCity_House4_Text_Hint6, MSGBOX_DEFAULT
	goto CeruleanCity_House4_EventScript_AdvanceCounter
	end

CeruleanCity_House4_EventScript_AdvanceCounter::
	addvar VAR_RANDOM_SPEECH, 1
	compare VAR_RANDOM_SPEECH, 7
	goto_if_ge CeruleanCity_House4_EventScript_ResetCounter
	release
	end

CeruleanCity_House4_EventScript_ResetCounter::
	setvar VAR_RANDOM_SPEECH, 0
	release
	end
