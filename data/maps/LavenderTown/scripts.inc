LavenderTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_OnTransition
	.byte 0

LavenderTown_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_LAVENDER_TOWN
	setvar VAR_MAP_SCENE_S_S_ANNE_2F_CORRIDOR, 1
	setflag FLAG_HIDE_SS_ANNE_RIVAL
	end

LavenderTown_EventScript_LittleGirl::
	lock
	faceplayer
	msgbox LavenderTown_Text_DoYouBelieveInGhosts, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LavenderTown_EventScript_LittleGirlBelieve
	msgbox LavenderTown_Text_JustImaginingWhiteHand
	release
	end

LavenderTown_EventScript_LittleGirlBelieve::
	msgbox LavenderTown_Text_SoThereAreBelievers
	release
	end

LavenderTown_EventScript_WorkerM::
	msgbox LavenderTown_Text_TownKnownAsMonGraveSite, MSGBOX_NPC
	end

LavenderTown_EventScript_Boy::
	msgbox LavenderTown_Text_GhostsAppearedInTower, MSGBOX_NPC
	end

LavenderTown_EventScript_TownSign::
	msgbox LavenderTown_Text_TownSign, MSGBOX_SIGN
	end

LavenderTown_EventScript_SilphScopeNotice::
	msgbox LavenderTown_Text_SilphScopeNotice, MSGBOX_SIGN
	end

LavenderTown_EventScript_VolunteerHouseSign::
	msgbox LavenderTown_Text_VolunteerPokemonHouse, MSGBOX_SIGN
	end

LavenderTown_EventScript_PokemonTowerSign::
	msgbox LavenderTown_Text_PokemonTowerSign, MSGBOX_SIGN
	end

EVRemoverLady::
    lock
    faceplayer
    msgbox EVRemover_Greeting, MSGBOX_DEFAULT
    setvar VAR_TEMP_2, 0
    msgbox EVRemover_Ask, MSGBOX_YESNO
    compare VAR_RESULT, NO
    goto_if_eq Exit_NoService

ChooseMonLoop::
    special ChoosePartyMon
    waitstate
    compare VAR_0x8004, PARTY_SIZE
    goto_if_ge CheckUsage
    special IsSelectedMonEgg
    compare VAR_RESULT, TRUE
    goto_if_eq MonIsEggError

ChooseStatLoop::
    msgbox EVRemover_ChooseStatText, MSGBOX_DEFAULT
    multichoice 0, 0, MULTICHOICE_HYPER_STATS, FALSE
    
    compare VAR_RESULT, 6
    goto_if_eq AskAnotherMon
    compare VAR_RESULT, MULTI_B_PRESSED
    goto_if_eq AskAnotherMon

    switch VAR_RESULT
    case 0, Action_HP
    case 1, Action_Atk
    case 2, Action_Def
    case 3, Action_SpAtk
    case 4, Action_SpDef
    case 5, Action_Speed
    goto ChooseStatLoop

Action_HP:
    canremoveev 0, VAR_0x8004
    compare VAR_RESULT, TRUE
    goto_if_ne Common_EvAlreadyZero
    removeev 0, VAR_0x8004
    goto Common_Success

Action_Atk:
    canremoveev 1, VAR_0x8004
    compare VAR_RESULT, TRUE
    goto_if_ne Common_EvAlreadyZero
    removeev 1, VAR_0x8004
    goto Common_Success

Action_Def:
    canremoveev 2, VAR_0x8004
    compare VAR_RESULT, TRUE
    goto_if_ne Common_EvAlreadyZero
    removeev 2, VAR_0x8004
    goto Common_Success

Action_SpAtk:
    canremoveev 4, VAR_0x8004
    compare VAR_RESULT, TRUE
    goto_if_ne Common_EvAlreadyZero
    removeev 4, VAR_0x8004
    goto Common_Success

Action_SpDef:
    canremoveev 5, VAR_0x8004
    compare VAR_RESULT, TRUE
    goto_if_ne Common_EvAlreadyZero
    removeev 5, VAR_0x8004
    goto Common_Success

Action_Speed:
    canremoveev 3, VAR_0x8004
    compare VAR_RESULT, TRUE
    goto_if_ne Common_EvAlreadyZero
    removeev 3, VAR_0x8004
    goto Common_Success

Common_Success:
    setvar VAR_TEMP_2, 1
    playse SE_THUNDER
    waitse
    msgbox EVRemover_Success, MSGBOX_DEFAULT
    goto AskRepeat

Common_EvAlreadyZero:
    msgbox EVRemover_AlreadyZeroText, MSGBOX_DEFAULT
    goto AskRepeat

AskRepeat:
    msgbox EVRemover_AskAnotherStat, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_eq ChooseStatLoop
    goto AskAnotherMon

AskAnotherMon:
    msgbox EVRemover_AskAnotherPokemon, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_eq ChooseMonLoop

CheckUsage:
    compare VAR_TEMP_2, 1
    goto_if_eq Exit_ServiceUsed

Exit_NoService:
    msgbox EVRemover_Farewell_NotUsed, MSGBOX_DEFAULT
    release
    end

Exit_ServiceUsed:
    msgbox EVRemover_Farewell_Used, MSGBOX_DEFAULT
    release
    end

MonIsEggError:
    msgbox EVRemover_EggError, MSGBOX_DEFAULT
    goto ChooseMonLoop
