Route22_MapScripts::
	.byte 0

Route22_EventScript_EarlyRivalTriggerTop::
	lockall
	setvar VAR_TEMP_1, 0
	goto Route22_EventScript_EarlyRival
	end

Route22_EventScript_EarlyRivalTriggerMid::
	lockall
	setvar VAR_TEMP_1, 1
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
	goto Route22_EventScript_EarlyRival
	end

Route22_EventScript_EarlyRivalTriggerBottom::
	lockall
	setvar VAR_TEMP_1, 2
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
	goto Route22_EventScript_EarlyRival
	end

Route22_EventScript_EarlyRival::
	textcolor NPC_TEXT_COLOR_MALE
	playbgm MUS_ENCOUNTER_RIVAL, 0
	addobject LOCALID_ROUTE22_RIVAL
	call_if_eq VAR_TEMP_1, 0, Route22_EventScript_EarlyRivalApproach
	call_if_eq VAR_TEMP_1, 1, Route22_EventScript_EarlyRivalApproach
	call_if_eq VAR_TEMP_1, 2, Route22_EventScript_EarlyRivalApproachBottom
	delay 6
	msgbox Route22_Text_EarlyRivalIntro
	call_if_eq VAR_STARTER_MON, 2, Route22_EventScript_EarlyRivalSquirtle
	call_if_eq VAR_STARTER_MON, 1, Route22_EventScript_EarlyRivalBulbasaur
	call_if_eq VAR_STARTER_MON, 0, Route22_EventScript_EarlyRivalCharmander
	msgbox Route22_Text_EarlyRivalPostBattle
	closemessage
	delay 10
	playbgm MUS_RIVAL_EXIT, 0
	call_if_eq VAR_TEMP_1, 0, Route22_EventScript_EarlyRivalExit
	call_if_eq VAR_TEMP_1, 1, Route22_EventScript_EarlyRivalExit
	call_if_eq VAR_TEMP_1, 2, Route22_EventScript_EarlyRivalExitBottom
	fadedefaultbgm
	removeobject LOCALID_ROUTE22_RIVAL
	setvar VAR_MAP_SCENE_ROUTE22, 2
	releaseall
	end

Route22_EventScript_EarlyRivalApproach::
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproach
	waitmovement 0
	return

Route22_EventScript_EarlyRivalApproachBottom::
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproachBottom
	applymovement LOCALID_PLAYER, Route22_Movement_PlayerFaceRival
	waitmovement 0
	return

Route22_EventScript_EarlyRivalSquirtle::
	trainerbattle_earlyrival TRAINER_RIVAL_ROUTE22_EARLY_SQUIRTLE, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
	return

Route22_EventScript_EarlyRivalBulbasaur::
	trainerbattle_earlyrival TRAINER_RIVAL_ROUTE22_EARLY_BULBASAUR, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
	return

Route22_EventScript_EarlyRivalCharmander::
	trainerbattle_earlyrival TRAINER_RIVAL_ROUTE22_EARLY_CHARMANDER, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
	return

Route22_EventScript_EarlyRivalExit::
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_EarlyRivalExit
	waitmovement 0
	return

Route22_EventScript_EarlyRivalExitBottom::
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_EarlyRivalExitBottom
	waitmovement 0
	return

Route22_Movement_UnusedRivalExit:: @ 8
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route22_Movement_EarlyRivalExit::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route22_Movement_EarlyRivalExitBottom::
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route22_Movement_RivalApproach::
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route22_Movement_RivalApproachBottom::
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_down
	step_end

Route22_Movement_PlayerFaceRival::
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_8
	walk_in_place_faster_up
	step_end

Route22_EventScript_LateRivalTriggerTop::
	lockall
	setvar VAR_TEMP_1, 0
	goto Route22_EventScript_LateRival
	end

Route22_EventScript_LateRivalTriggerMid::
	lockall
	setvar VAR_TEMP_1, 1
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
	goto Route22_EventScript_LateRival
	end

Route22_EventScript_LateRivalTriggerBottom::
	lockall
	setvar VAR_TEMP_1, 2
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
	goto Route22_EventScript_LateRival
	end

Route22_EventScript_LateRival::
	textcolor NPC_TEXT_COLOR_MALE
	playbgm MUS_ENCOUNTER_RIVAL, 0
	addobject LOCALID_ROUTE22_RIVAL
	call_if_eq VAR_TEMP_1, 0, Route22_EventScript_LateRivalApproach
	call_if_eq VAR_TEMP_1, 1, Route22_EventScript_LateRivalApproach
	call_if_eq VAR_TEMP_1, 2, Route22_EventScript_LateRivalApproachBottom
	msgbox Route22_Text_LateRivalIntro
	setvar VAR_LAST_TALKED, LOCALID_ROUTE22_RIVAL
	call_if_eq VAR_STARTER_MON, 2, Route22_EventScript_LateRivalSquirtle
	call_if_eq VAR_STARTER_MON, 1, Route22_EventScript_LateRivalBulbasaur
	call_if_eq VAR_STARTER_MON, 0, Route22_EventScript_LateRivalCharmander
	msgbox Route22_Text_LateRivalPostBattle
	closemessage
	delay 10
	playbgm MUS_RIVAL_EXIT, 0
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_LateRivalExit
	waitmovement 0
	fadedefaultbgm
	removeobject LOCALID_ROUTE22_RIVAL
	setvar VAR_MAP_SCENE_ROUTE22, 4
	releaseall
	end

Route22_EventScript_LateRivalApproach::
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproach
	waitmovement 0
	return

Route22_EventScript_LateRivalApproachBottom::
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproachBottom
	applymovement LOCALID_PLAYER, Route22_Movement_PlayerFaceRival
	waitmovement 0
	return

Route22_EventScript_LateRivalSquirtle::
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_SQUIRTLE, Route22_Text_LateRivalDefeat
	return

Route22_EventScript_LateRivalBulbasaur::
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_BULBASAUR, Route22_Text_LateRivalDefeat
	return

Route22_EventScript_LateRivalCharmander::
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_CHARMANDER, Route22_Text_LateRivalDefeat
	return

Route22_Movement_LateRivalExit::
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route22_EventScript_LeagueGateSign::
	msgbox Route22_Text_LeagueGateSign, MSGBOX_SIGN
	end

HyperTrainingGuy::
    lock
    faceplayer
    textcolor NPC_TEXT_COLOR_MALE
    msgbox HyperTraining_Greeting, MSGBOX_DEFAULT
    checkitem ITEM_GOLD_BOTTLE_CAP, 1
    copyvar VAR_TEMP_5, VAR_RESULT
    checkitem ITEM_BOTTLE_CAP, 1
    copyvar VAR_TEMP_6, VAR_RESULT
    compare VAR_TEMP_5, 0
    goto_if_ne HT_CheckItems_HasSomething
    compare VAR_TEMP_6, 0
    goto_if_ne HT_CheckItems_HasSomething
    msgbox HyperTraining_NoItems, MSGBOX_DEFAULT
    release
    end

HT_CheckItems_HasSomething:
    compare VAR_TEMP_5, 1
    goto_if_ne HT_CheckSingleItem
    compare VAR_TEMP_6, 1
    goto_if_ne HT_CheckSingleItem
    goto HT_MenuDual

HT_CheckSingleItem:
    compare VAR_TEMP_5, 1
    goto_if_eq HT_AskGoldOnly
    goto HT_AskBottleOnly

HT_MenuDual:
    msgbox HyperTraining_ExplainCaps, MSGBOX_DEFAULT
    waitmessage
    multichoice 0, 0, MULTICHOICE_HYPER_CAP_CHOICE, FALSE
    switch VAR_RESULT
    case 0, HT_SetBottlePath
    case 1, HT_SetGoldPath
    case 2, HT_Exit
    case 127, HT_Exit
    goto HT_Exit

HT_AskGoldOnly:
    msgbox HyperTraining_ConfirmGoldCap, MSGBOX_YESNO
    compare VAR_RESULT, NO
    goto_if_eq HT_Exit
    goto HT_SetGoldPath

HT_AskBottleOnly:
    msgbox HyperTraining_ConfirmBottleCap, MSGBOX_YESNO
    compare VAR_RESULT, NO
    goto_if_eq HT_Exit
    goto HT_SetBottlePath

HT_SetBottlePath:
    setvar VAR_TEMP_4, 0
    goto HT_SelectPokemon

HT_SetGoldPath:
    setvar VAR_TEMP_4, 1
    goto HT_SelectPokemon

HT_SelectPokemon:
    special ChoosePartyMon
    waitstate
    compare VAR_0x8004, PARTY_SIZE
    goto_if_ge HT_Exit
    copyvar VAR_TEMP_1, VAR_0x8004
    setvar VAR_0x8006, 0
    canhypertrain 0, VAR_TEMP_1
    call_if_eq VAR_RESULT, TRUE, HT_IncCount
    canhypertrain 1, VAR_TEMP_1
    call_if_eq VAR_RESULT, TRUE, HT_IncCount
    canhypertrain 2, VAR_TEMP_1
    call_if_eq VAR_RESULT, TRUE, HT_IncCount
    canhypertrain 3, VAR_TEMP_1
    call_if_eq VAR_RESULT, TRUE, HT_IncCount
    canhypertrain 4, VAR_TEMP_1
    call_if_eq VAR_RESULT, TRUE, HT_IncCount
    canhypertrain 5, VAR_TEMP_1
    call_if_eq VAR_RESULT, TRUE, HT_IncCount
    compare VAR_0x8006, 0
    goto_if_eq HT_AllStatsMaxed
    compare VAR_TEMP_4, 1
    goto_if_eq HT_Exec_Gold
    goto HT_Menu_Bottle

HT_IncCount:
    addvar VAR_0x8006, 1
    return

HT_AllStatsMaxed:
    msgbox HyperTraining_NoTrainableStats, MSGBOX_DEFAULT
    goto HT_SelectPokemon

HT_Exec_Gold:
    checkitem ITEM_GOLD_BOTTLE_CAP, 1
    compare VAR_RESULT, FALSE
    goto_if_eq HT_NoItemError

HT_Exec_Gold_Direct:
    removeitem ITEM_GOLD_BOTTLE_CAP, 1
    playse SE_M_STAT_INCREASE
    waitse
    hypertrain 0, VAR_TEMP_1
    hypertrain 1, VAR_TEMP_1
    hypertrain 2, VAR_TEMP_1
    hypertrain 3, VAR_TEMP_1
    hypertrain 4, VAR_TEMP_1
    hypertrain 5, VAR_TEMP_1
    msgbox HyperTraining_SuccessAll, MSGBOX_DEFAULT
    checkitem ITEM_GOLD_BOTTLE_CAP, 1
    compare VAR_RESULT, TRUE
    goto_if_eq HT_AskNewMon
    checkitem ITEM_BOTTLE_CAP, 1
    compare VAR_RESULT, TRUE
    goto_if_eq HT_Suggest_Bottle_Swap
    goto HT_Farewell

HT_Suggest_Bottle_Swap:
    msgbox HyperTraining_NoGoldBottleCap_HaveBottleCap, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_eq HT_SwapToBottle_Action
    goto HT_Farewell

HT_Menu_Bottle:
    checkitem ITEM_BOTTLE_CAP, 1
    compare VAR_RESULT, FALSE
    goto_if_eq HT_NoItemError
    msgbox HyperTraining_ChooseStatText, MSGBOX_DEFAULT
    waitmessage
    multichoice 0, 0, MULTICHOICE_HYPER_STATS, FALSE
    compare VAR_RESULT, 6
    goto_if_eq HT_Exit
    compare VAR_RESULT, 127
    goto_if_eq HT_Exit
    switch VAR_RESULT
    case 0, HT_Try_HP
    case 1, HT_Try_Atk
    case 2, HT_Try_Def
    case 3, HT_Try_SpAtk
    case 4, HT_Try_SpDef
    case 5, HT_Try_Speed
    goto HT_Exit

HT_Try_HP:
    canhypertrain 0, VAR_TEMP_1
    compare VAR_RESULT, FALSE
    goto_if_eq HT_StatFull
    call HT_DoTrain_Bottle
    hypertrain 0, VAR_TEMP_1
    goto HT_Bottle_PostTrain

HT_Try_Atk:
    canhypertrain 1, VAR_TEMP_1
    compare VAR_RESULT, FALSE
    goto_if_eq HT_StatFull
    call HT_DoTrain_Bottle
    hypertrain 1, VAR_TEMP_1
    goto HT_Bottle_PostTrain

HT_Try_Def:
    canhypertrain 2, VAR_TEMP_1
    compare VAR_RESULT, FALSE
    goto_if_eq HT_StatFull
    call HT_DoTrain_Bottle
    hypertrain 2, VAR_TEMP_1
    goto HT_Bottle_PostTrain

HT_Try_Speed:
    canhypertrain 3, VAR_TEMP_1
    compare VAR_RESULT, FALSE
    goto_if_eq HT_StatFull
    call HT_DoTrain_Bottle
    hypertrain 3, VAR_TEMP_1
    goto HT_Bottle_PostTrain

HT_Try_SpAtk:
    canhypertrain 4, VAR_TEMP_1
    compare VAR_RESULT, FALSE
    goto_if_eq HT_StatFull
    call HT_DoTrain_Bottle
    hypertrain 4, VAR_TEMP_1
    goto HT_Bottle_PostTrain

HT_Try_SpDef:
    canhypertrain 5, VAR_TEMP_1
    compare VAR_RESULT, FALSE
    goto_if_eq HT_StatFull
    call HT_DoTrain_Bottle
    hypertrain 5, VAR_TEMP_1
    goto HT_Bottle_PostTrain

HT_DoTrain_Bottle:
    removeitem ITEM_BOTTLE_CAP, 1
    playse SE_M_STAT_INCREASE
    waitse
    return

HT_StatFull:
    msgbox HyperTraining_StatAlreadyMaxed, MSGBOX_DEFAULT
    goto HT_Menu_Bottle

HT_Bottle_PostTrain:
    msgbox HyperTraining_SuccessOne, MSGBOX_DEFAULT
    checkitem ITEM_BOTTLE_CAP, 1
    compare VAR_RESULT, TRUE
    goto_if_eq HT_Bottle_AskMore
    checkitem ITEM_GOLD_BOTTLE_CAP, 1
    compare VAR_RESULT, TRUE
    goto_if_eq HT_Suggest_Gold_Swap
    goto HT_Farewell

HT_Bottle_AskMore:
    msgbox HyperTraining_AskAnotherStat, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_eq HT_Menu_Bottle
    goto HT_AskNewMon

HT_Suggest_Gold_Swap:
    msgbox HyperTraining_NoBottleCap_HaveGoldBottleCap, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_eq HT_SwapToGold_Action
    goto HT_AskNewMon

HT_SwapToBottle_Action:
    setvar VAR_TEMP_4, 0
    goto HT_SelectPokemon

HT_SwapToGold_Action:
    setvar VAR_TEMP_4, 1
    goto HT_Exec_Gold_Direct

HT_AskNewMon:
    msgbox HyperTraining_AskAnotherPokemon, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_eq HT_SelectPokemon
    goto HT_Farewell

HT_NoItemError:
    msgbox HyperTraining_NoItems, MSGBOX_DEFAULT
    textcolor NPC_TEXT_COLOR_NEUTRAL
    release
    end

HT_Farewell:
    msgbox HyperTraining_Comeback, MSGBOX_DEFAULT
    textcolor NPC_TEXT_COLOR_NEUTRAL
    release
    end

HT_Exit:
    msgbox HyperTraining_CanceledText, MSGBOX_DEFAULT
    textcolor NPC_TEXT_COLOR_NEUTRAL
    release
    end
