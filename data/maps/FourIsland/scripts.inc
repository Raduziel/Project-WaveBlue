FourIsland_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FourIsland_OnFrame
	.byte 0

FourIsland_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_FOUR_ISLAND
	call_if_eq VAR_MAP_SCENE_FOUR_ISLAND, 0, FourIsland_EventScript_ShowRival
	call FourIsland_EventScript_TrySetDayCareManPos
	end

FourIsland_EventScript_ShowRival::
	clearflag FLAG_HIDE_FOUR_ISLAND_RIVAL
	return

FourIsland_EventScript_TrySetDayCareManPos::
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, FourIsland_EventScript_EndSetDayCareManPos
	setobjectxyperm LOCALID_FOUR_ISLAND_DAYCARE_MAN, 16, 14
FourIsland_EventScript_EndSetDayCareManPos::
	return

FourIsland_OnFrame::
	map_script_2 VAR_MAP_SCENE_FOUR_ISLAND, 0, FourIsland_EventScript_RivalScene
	.2byte 0

FourIsland_EventScript_RivalScene::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	applymovement LOCALID_FOUR_ISLAND_RIVAL, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playbgm MUS_ENCOUNTER_RIVAL, 0
	applymovement LOCALID_FOUR_ISLAND_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_FOUR_ISLAND_RIVAL, Common_Movement_Delay48
	waitmovement 0
	delay 25
	applymovement LOCALID_FOUR_ISLAND_RIVAL, FourIsland_Movement_RivalApproach
	waitmovement 0
	msgbox FourIsland_Text_RivalAlreadyGotEggBeSmellingYa
	closemessage
	applymovement LOCALID_PLAYER, FourIsland_Movement_PlayerWatchRivalExit
	applymovement LOCALID_FOUR_ISLAND_RIVAL, FourIsland_Movement_RivalExit
	waitmovement 0
	fadedefaultbgm
	playse SE_EXIT
	delay 35
	removeobject LOCALID_FOUR_ISLAND_RIVAL
	setvar VAR_MAP_SCENE_FOUR_ISLAND, 1
	releaseall
	end

FourIsland_Movement_RivalApproach::
	walk_right
	walk_right
	walk_down
	walk_down
	step_end

FourIsland_Movement_RivalExit::
	delay_16
	delay_4
	walk_down
	step_end

FourIsland_Movement_PlayerWatchRivalExit::
	walk_left
	walk_in_place_faster_right
	step_end

FourIsland_EventScript_DaycareMan::
	goto_if_questlog EventScript_ReleaseEnd
	special QuestLog_CutRecording
	lock
	faceplayer
	special GetDaycareMonNicknames
	specialvar VAR_RESULT, GetDaycareState
	goto_if_eq VAR_RESULT, DAYCARE_EGG_WAITING, FourIsland_EventScript_DaycareEggWaiting
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_EventScript_CheckOnOneMon
	goto_if_eq VAR_RESULT, DAYCARE_TWO_MONS, FourIsland_EventScript_CheckOnTwoMons
	msgbox DayCare_Text_ImDaycareManSpeakToMyWife
	release
	end

FourIsland_EventScript_DaycareEggWaiting::
	msgbox DayCare_Text_DoYouWantEgg, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FourIsland_EventScript_DaycareAcceptEgg
	msgbox DayCare_Text_IWillKeepDoYouWantIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FourIsland_EventScript_DaycareAcceptEgg
	msgbox DayCare_Text_IllKeepIt
	clearflag FLAG_PENDING_DAYCARE_EGG
	special RejectEggFromDayCare
	release
	end

FourIsland_EventScript_DaycareAcceptEgg::
	specialvar VAR_RESULT, CalculatePlayerPartyCount
	goto_if_ne VAR_RESULT, PARTY_SIZE, FourIsland_EventScript_DaycareReceivedEgg
	msgbox DayCare_Text_YouHaveNoRoomForIt
	release
	end

FourIsland_EventScript_DaycareReceivedEgg::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	message DayCare_Text_ReceivedEgg
	call EventScript_RestorePrevTextColor
	playfanfare MUS_LEVEL_UP
	waitfanfare
	waitbuttonpress
	msgbox DayCare_Text_TakeGoodCareOfIt
	special GiveEggFromDaycare
	clearflag FLAG_PENDING_DAYCARE_EGG
	release
	end

FourIsland_EventScript_CheckOnOneMon::
	special GetDaycareMonNicknames
	msgbox DayCare_Text_YourMonIsDoingFine
	release
	end

FourIsland_EventScript_CheckOnTwoMons::
	special GetDaycareMonNicknames
	msgbox DayCare_Text_YourMonsAreDoingFine
	special SetDaycareCompatibilityString
	special ShowFieldMessageStringVar4
	waitmessage
	waitbuttonpress
	release
	end

FourIsland_EventScript_OldWoman::
	lock
	faceplayer
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, FourIsland_EventScript_OldWomanLoreleiLeft
	msgbox FourIsland_Text_LoreleiHasReturned
	release
	end

FourIsland_EventScript_OldWomanLoreleiLeft::
	famechecker FAMECHECKER_LORELEI, 5
	msgbox FourIsland_Text_LoreleiMetLaprasAsChild
	release
	end

FourIsland_EventScript_LittleGirl::
	lock
	faceplayer
	famechecker FAMECHECKER_LORELEI, 4
	msgbox FourIsland_Text_LoreleiHasLotsOfStuffedDolls
	release
	end

FourIsland_EventScript_FatMan::
	msgbox FourIsland_Text_MadeSlushieUsingIcefallCaveIce, MSGBOX_NPC
	end

FourIsland_EventScript_IslandSign::
	msgbox FourIsland_Text_IslandSign, MSGBOX_SIGN
	end

FourIsland_EventScript_LoreleisHouseSign::
	msgbox FourIsland_Text_LoreleisHouse, MSGBOX_SIGN
	end

FourIsland_EventScript_BoatMotor::
	lockall
	goto_if_set FLAG_GOT_WATERFALL_MOTOR, FourIsland_EventScript_BoatMotorInstalled
	faceplayer
	setvar VAR_TEMP_1, 0
	goto FourIsland_EventScript_BoatMotorGive

FourIsland_EventScript_BoatMotorTrigger::
	lockall
	goto_if_set FLAG_GOT_WATERFALL_MOTOR, FourIsland_EventScript_BoatMotorEnd
	setvar VAR_BOAT_MOTOR_STATE, 1
	playse SE_PIN
	applymovement LOCALID_BOATMOTORGUY, Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	delay 30
	applymovement LOCALID_BOATMOTORGUY, Movement_BoatMotorGuyApproach
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_BoatMotorPlayerFaceLeft
	waitmovement 0
	setvar VAR_TEMP_1, 1
	goto FourIsland_EventScript_BoatMotorGive

FourIsland_EventScript_BoatMotorGive::
	textcolor NPC_TEXT_COLOR_MALE
	msgbox FourIsland_Text_BoatMotorPitch, MSGBOX_DEFAULT
	checkitem ITEM_RUBBER_BOAT
	goto_if_eq VAR_RESULT, FALSE, FourIsland_EventScript_BoatMotorNoBoat
	playfanfare MUS_OBTAIN_KEY_ITEM
	textcolor NPC_TEXT_COLOR_NEUTRAL
	message FourIsland_Text_BoatMotorEngineInstalled
	waitmessage
	waitfanfare
	setflag FLAG_GOT_WATERFALL_MOTOR
	textcolor NPC_TEXT_COLOR_MALE
	delay 30
	msgbox FourIsland_Text_BoatMotorInstall, MSGBOX_DEFAULT
	goto FourIsland_EventScript_BoatMotorFinish

FourIsland_EventScript_BoatMotorNoBoat::
	textcolor NPC_TEXT_COLOR_MALE
	msgbox FourIsland_Text_BoatMotorNoBoat, MSGBOX_DEFAULT
	goto FourIsland_EventScript_BoatMotorFinish

FourIsland_EventScript_BoatMotorInstalled::
	faceplayer
	textcolor NPC_TEXT_COLOR_MALE
	msgbox FourIsland_Text_BoatMotorInstalled, MSGBOX_DEFAULT
	goto FourIsland_EventScript_BoatMotorEnd

FourIsland_EventScript_BoatMotorFinish::
	compare VAR_TEMP_1, 1
	goto_if_eq FourIsland_EventScript_BoatMotorEndReturn
	goto FourIsland_EventScript_BoatMotorEnd

FourIsland_EventScript_BoatMotorEndReturn::
	applymovement LOCALID_BOATMOTORGUY, Movement_BoatMotorGuyReturn
	waitmovement 0
	releaseall
	end

FourIsland_EventScript_BoatMotorEnd::
	releaseall
	end

Movement_BoatMotorGuyApproach:
	walk_slow_right
	face_right
	step_end

Movement_BoatMotorPlayerFaceLeft:
	face_left
	step_end

Movement_BoatMotorGuyReturn:
	delay_16
	walk_slow_left
	face_down
	step_end
