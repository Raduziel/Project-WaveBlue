Route24_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route24_OnTransition
	.byte 0

Route24_OnTransition::
	goto_if_set FLAG_HIDE_ROUTE24_ROCKET_DISGUISE, Route24_OnTransition_End
	setflag FLAG_HIDE_NUGGET_BRIDGE_ROCKET

Route24_OnTransition_End::
	end

Route24_EventScript_Rocket::
	lock
	faceplayer
	goto_if_eq VAR_MAP_SCENE_ROUTE24, 1, Route24_EventScript_RocketPostBattle
	msgbox Route24_Text_JustEarnedFabulousPrize
	checkitemspace ITEM_NUGGET
	goto_if_eq VAR_RESULT, FALSE, Route24_EventScript_NoRoomForNugget
	call Route24_EventScript_BattleRocket
	release
	end

Route24_EventScript_NoRoomForNugget::
	msgbox Route24_Text_YouDontHaveAnyRoom
	release
	end

Route24_EventScript_RocketPostBattle::
	msgbox Route24_Text_YoudBecomeTopRocketLeader
	release
	end

Route24_EventScript_RocketTriggerLeft::
	lockall
	setvar VAR_TEMP_1, 0
	goto Route24_EventScript_RocketTrigger
	end

Route24_EventScript_RocketTriggerRight::
	lockall
	setvar VAR_TEMP_1, 1
	goto Route24_EventScript_RocketTrigger
	end

Route24_EventScript_RocketDirectApproach::
	lockall
	setvar VAR_TEMP_1, 2
	goto Route24_EventScript_RocketTrigger
	end

Route24_EventScript_RocketTrigger::
	textcolor NPC_TEXT_COLOR_MALE
	call_if_eq VAR_TEMP_1, 0, Route24_EventScript_RocketApproachPlayer
	call_if_eq VAR_TEMP_1, 1, Route24_EventScript_RocketMotionToPlayer
	call_if_eq VAR_TEMP_1, 2, Route24_EventScript_RocketFacePlayer
	msgbox Route24_Text_JustEarnedFabulousPrize
	checkitemspace ITEM_NUGGET
	goto_if_eq VAR_RESULT, FALSE, Route24_EventScript_NoRoomForNuggetTrigger
	call Route24_EventScript_BattleRocket
	releaseall
	end

Route24_EventScript_BattleRocket::
	giveitem_msg Route24_Text_ReceivedNuggetFromMysteryTrainer, ITEM_NUGGET
	applymovement LOCALID_ROUTE24_ROCKET_DISGUISED, Route24_Movement_SpinReveal
	waitmovement 0
	removeobject LOCALID_ROUTE24_ROCKET_DISGUISED
	clearflag FLAG_HIDE_NUGGET_BRIDGE_ROCKET
	addobject LOCALID_ROUTE24_ROCKET_REVEALED
	call_if_eq VAR_TEMP_1, 2, Route24_EventScript_RevealedFaceSouth
	message Route24_Text_JoinTeamRocket
	waitmessage
	playbgm MUS_ENCOUNTER_ROCKET, 0
	waitbuttonpress
	setvar VAR_LAST_TALKED, LOCALID_ROUTE24_ROCKET_REVEALED
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_6, Route24_Text_RocketDefeat
	msgbox Route24_Text_YoudBecomeTopRocketLeader
	call_if_eq VAR_TEMP_1, 0, Route24_EventScript_RevealedWalkBack
	call_if_eq VAR_TEMP_1, 2, Route24_EventScript_RevealedFaceLeft
	setvar VAR_MAP_SCENE_ROUTE24, 1
	return

Route24_EventScript_RevealedWalkBack::
	applymovement LOCALID_ROUTE24_ROCKET_REVEALED, Route24_Movement_RocketWalkBackToPos
	waitmovement 0
	return

Route24_EventScript_RevealedFaceLeft::
	applymovement LOCALID_ROUTE24_ROCKET_REVEALED, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

Route24_EventScript_RocketApproachPlayer::
	applymovement LOCALID_ROUTE24_ROCKET_DISGUISED, Route24_Movement_RocketApproachPlayer
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	setobjectxyperm LOCALID_ROUTE24_ROCKET_REVEALED, 11, 15
	waitmovement 0
	return

Route24_EventScript_RocketMotionToPlayer::
	applymovement LOCALID_ROUTE24_ROCKET_DISGUISED, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	setobjectxyperm LOCALID_ROUTE24_ROCKET_REVEALED, 12, 15
	waitmovement 0
	return

Route24_EventScript_RocketFacePlayer::
	applymovement LOCALID_ROUTE24_ROCKET_DISGUISED, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	setobjectxyperm LOCALID_ROUTE24_ROCKET_REVEALED, 12, 15
	waitmovement 0
	return

Route24_EventScript_RevealedFaceSouth::
	applymovement LOCALID_ROUTE24_ROCKET_REVEALED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

Route24_EventScript_NoRoomForNuggetTrigger::
	msgbox Route24_Text_YouDontHaveAnyRoom
	closemessage
	applymovement LOCALID_PLAYER, Route24_Movement_WalkDown
	waitmovement 0
	call_if_eq VAR_TEMP_1, 0, Route24_EventScript_RocketWalkBackToPos
	release
	end

Route24_EventScript_RocketWalkBackToPos::
	applymovement LOCALID_ROUTE24_ROCKET_DISGUISED, Route24_Movement_RocketWalkBackToPos
	waitmovement 0
	return

Route24_Movement_RocketApproachPlayer::
	walk_left
	step_end

Route24_Movement_RocketWalkBackToPos::
	walk_right
	walk_in_place_faster_left
	step_end

Route24_Movement_WalkDown::
	walk_down
	step_end

Route24_Movement_SpinReveal::
	walk_in_place_faster_right
	walk_in_place_faster_down
	walk_in_place_faster_left
	step_end
