PokemonTower_7F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonTower_7F_OnTransition
	.byte 0

PokemonTower_7F_OnTransition::
    setflag FLAG_LAVENDER_TM10_CHANNELER
    end

PokemonTower_7F_EventScript_MrFuji::
	lock
	faceplayer
	famechecker FAMECHECKER_MRFUJI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
	setflag FLAG_HIDE_TOWER_FUJI
	clearflag FLAG_HIDE_POKEHOUSE_FUJI
	setflag FLAG_RESCUED_MR_FUJI
	msgbox PokemonTower_7F_Text_MrFujiThankYouFollowMe
	closemessage
	warp MAP_LAVENDER_TOWN_VOLUNTEER_POKEMON_HOUSE, 4, 7
	waitstate
	release
	end

PokemonTower_7F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_19, PokemonTower_7F_Text_Grunt1Intro, PokemonTower_7F_Text_Grunt1Defeat, PokemonTower_7F_EventScript_DefeatedGrunt1
	msgbox PokemonTower_7F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_7F_EventScript_DefeatedGrunt1::
	msgbox PokemonTower_7F_Text_Grunt1PostBattle
	closemessage
	getplayerxy VAR_0x8004, VAR_0x8005
	goto_if_eq VAR_0x8004, 10, PokemonTower_7F_EventScript_Grunt1ExitMid
	goto_if_eq VAR_0x8004, 11, PokemonTower_7F_EventScript_Grunt1ExitRight
	goto_if_eq VAR_0x8004, 9, PokemonTower_7F_EventScript_Grunt1ExitLeft
	applymovement LOCALID_POKEMON_TOWER_GRUNT1, PokemonTower_7F_Movement_Grunt1Exit
	waitmovement 0
	goto PokemonTower_7F_EventScript_RemoveGrunt1
	end

PokemonTower_7F_EventScript_Grunt1ExitMid::
	applymovement LOCALID_POKEMON_TOWER_GRUNT1, PokemonTower_7F_Movement_Grunt1ExitMid
	waitmovement 0
	goto PokemonTower_7F_EventScript_RemoveGrunt1
	end

PokemonTower_7F_EventScript_Grunt1ExitRight::
	applymovement LOCALID_POKEMON_TOWER_GRUNT1, PokemonTower_7F_Movement_Grunt1ExitRight
	waitmovement 0
	goto PokemonTower_7F_EventScript_RemoveGrunt1
	end

PokemonTower_7F_EventScript_Grunt1ExitLeft::
	applymovement LOCALID_POKEMON_TOWER_GRUNT1, PokemonTower_7F_Movement_Grunt1ExitLeft
	waitmovement 0
	playse SE_EXIT
	delay 25
	goto PokemonTower_7F_EventScript_RemoveGrunt1
	end

PokemonTower_7F_EventScript_RemoveGrunt1::
	removeobject LOCALID_POKEMON_TOWER_GRUNT1
	release
	end

PokemonTower_7F_Movement_Grunt1ExitMid::
	walk_down
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_down
	walk_down
	step_end

PokemonTower_7F_Movement_Grunt1ExitRight::
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_down
	walk_down
	step_end

PokemonTower_7F_Movement_Grunt1Exit::
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

PokemonTower_7F_Movement_Grunt1ExitLeft::
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_down
	walk_down
	walk_in_place_faster_left
	step_end

PokemonTower_7F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_20, PokemonTower_7F_Text_Grunt2Intro, PokemonTower_7F_Text_Grunt2Defeat, PokemonTower_7F_EventScript_DefeatedGrunt2
	msgbox PokemonTower_7F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_7F_EventScript_DefeatedGrunt2::
	famechecker FAMECHECKER_MRFUJI, 1
	msgbox PokemonTower_7F_Text_Grunt2PostBattle
	closemessage
	getplayerxy VAR_0x8004, VAR_0x8005
	goto_if_eq VAR_0x8004, 12, PokemonTower_7F_EventScript_Grunt2ExitLeft
	goto_if_eq VAR_0x8004, 13, PokemonTower_7F_EventScript_Grunt2ExitRight
	applymovement LOCALID_POKEMON_TOWER_GRUNT2, PokemonTower_7F_Movement_Grunt2Exit
	waitmovement 0
	goto PokemonTower_7F_EventScript_RemoveGrunt2
	end

PokemonTower_7F_EventScript_Grunt2ExitLeft::
	applymovement LOCALID_POKEMON_TOWER_GRUNT2, PokemonTower_7F_Movement_Grunt2ExitLeft
	waitmovement 0
	goto PokemonTower_7F_EventScript_RemoveGrunt2
	end

PokemonTower_7F_EventScript_Grunt2ExitRight::
	applymovement LOCALID_POKEMON_TOWER_GRUNT2, PokemonTower_7F_Movement_Grunt2ExitRight
	waitmovement 0
	goto PokemonTower_7F_EventScript_RemoveGrunt2
	end

PokemonTower_7F_EventScript_RemoveGrunt2::
	removeobject LOCALID_POKEMON_TOWER_GRUNT2
	release
	end

PokemonTower_7F_Movement_Grunt2ExitLeft::
	walk_down
	walk_down
	walk_down
	walk_left
	walk_down
	walk_down
	walk_down
	step_end

PokemonTower_7F_Movement_Grunt2Exit::
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

PokemonTower_7F_Movement_Grunt2ExitRight::
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

PokemonTower_7F_EventScript_Grunt3::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_21, PokemonTower_7F_Text_Grunt3Intro, PokemonTower_7F_Text_Grunt3Defeat, PokemonTower_7F_EventScript_DefeatedGrunt3
	msgbox PokemonTower_7F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_7F_EventScript_DefeatedGrunt3::
	msgbox PokemonTower_7F_Text_Grunt3PostBattle
	closemessage
	getplayerxy VAR_0x8004, VAR_0x8005
	goto_if_eq VAR_0x8004, 10, PokemonTower_7F_EventScript_Grunt3ExitRight
	goto_if_eq VAR_0x8004, 9, PokemonTower_7F_EventScript_Grunt3ExitLeft
	applymovement LOCALID_POKEMON_TOWER_GRUNT3, PokemonTower_7F_Movement_Grunt3Exit
	waitmovement 0
	goto PokemonTower_7F_EventScript_RemoveGrunt3
	end

PokemonTower_7F_EventScript_Grunt3ExitRight::
	applymovement LOCALID_POKEMON_TOWER_GRUNT3, PokemonTower_7F_Movement_Grunt3ExitRight
	waitmovement 0
	goto PokemonTower_7F_EventScript_RemoveGrunt3
	end

PokemonTower_7F_EventScript_Grunt3ExitLeft::
	applymovement LOCALID_POKEMON_TOWER_GRUNT3, PokemonTower_7F_Movement_Grunt3ExitLeft
	waitmovement 0
	goto PokemonTower_7F_EventScript_RemoveGrunt3
	end

PokemonTower_7F_EventScript_RemoveGrunt3::
	removeobject LOCALID_POKEMON_TOWER_GRUNT3
	release
	end

PokemonTower_7F_EventScript_Unused::
	release
	end

PokemonTower_7F_Movement_Grunt3ExitRight::
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_down
	step_end

PokemonTower_7F_Movement_Grunt3Exit::
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

PokemonTower_7F_Movement_Grunt3ExitLeft::
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

.set PATH_LEFT,   0
.set PATH_MIDDLE, 1
.set PATH_RIGHT,  2

PokemonTower_7F_EventScript_HiddenPower_Trigger_L::
    lockall
    setvar VAR_TEMP_1, PATH_LEFT
    goto PokemonTower_7F_EventScript_HiddenPower

PokemonTower_7F_EventScript_HiddenPower_Trigger_M::
    lockall
    setvar VAR_TEMP_1, PATH_MIDDLE
    goto PokemonTower_7F_EventScript_HiddenPower

PokemonTower_7F_EventScript_HiddenPower_Trigger_R::
    lockall
    setvar VAR_TEMP_1, PATH_RIGHT
    goto PokemonTower_7F_EventScript_HiddenPower

PokemonTower_7F_EventScript_HiddenPower::
    setvar VAR_POKETOWER_TM10, 1 
	clearflag FLAG_LAVENDER_TM10_CHANNELER
    addobject LOCALID_TM10_CHANNELER
    playse SE_EXIT
    waitse
    delay 10

    compare VAR_TEMP_1, PATH_LEFT
    call_if_eq EventScript_Move_Approach_L
    
    compare VAR_TEMP_1, PATH_MIDDLE
    call_if_eq EventScript_Move_Approach_M
    
    compare VAR_TEMP_1, PATH_RIGHT
    call_if_eq EventScript_Move_Approach_R

	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	waitmovement 0

    msgbox Text_Channeler_Intro, MSGBOX_DEFAULT
    
    giveitem ITEM_TM10, 1
    waitfanfare
    
    msgbox Text_Channeler_Farewell, MSGBOX_DEFAULT
    closemessage

    compare VAR_TEMP_1, PATH_LEFT
    call_if_eq EventScript_Move_Exit_L
    
    compare VAR_TEMP_1, PATH_MIDDLE
    call_if_eq EventScript_Move_Exit_M
    
    compare VAR_TEMP_1, PATH_RIGHT
    call_if_eq EventScript_Move_Exit_R

	applymovement LOCALID_TM10_CHANNELER, Common_Movement_FaceLeft
	waitmovement 0
	removeobject LOCALID_TM10_CHANNELER
    setflag FLAG_LAVENDER_TM10_CHANNELER
    playse SE_EXIT
	releaseall
	end

EventScript_Move_Approach_L::
    applymovement LOCALID_TM10_CHANNELER, Movement_Approach_L
    waitmovement 0
    return

EventScript_Move_Approach_M::
    applymovement LOCALID_TM10_CHANNELER, Movement_Approach_M
    waitmovement 0
    return

EventScript_Move_Approach_R::
    applymovement LOCALID_TM10_CHANNELER, Movement_Approach_R
    waitmovement 0
    return

EventScript_Move_Exit_L::
    applymovement LOCALID_TM10_CHANNELER, Movement_Exit_L
    waitmovement 0
    return

EventScript_Move_Exit_M::
    applymovement LOCALID_TM10_CHANNELER, Movement_Exit_M
    waitmovement 0
    return

EventScript_Move_Exit_R::
    applymovement LOCALID_TM10_CHANNELER, Movement_Exit_R
    waitmovement 0
    return


Movement_Approach_L:
    walk_in_place_fast_up
    walk_up
    walk_up
    walk_left
    walk_in_place_fast_up
    step_end

Movement_Approach_M:
    walk_in_place_fast_up
    walk_up
    walk_up
    step_end

Movement_Approach_R:
    walk_in_place_fast_up
    walk_up
    walk_up
    walk_right
    walk_in_place_fast_up
    step_end

Movement_Exit_L:
    walk_in_place_fast_down
    walk_right
    walk_down
    walk_down
    step_end

Movement_Exit_M:
    walk_in_place_fast_down
    walk_down
    walk_down
    step_end

Movement_Exit_R:
    walk_in_place_fast_down
    walk_left
    walk_down
    walk_down
    step_end
