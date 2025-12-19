Route4_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, Route4_OnTransition
    map_script MAP_SCRIPT_ON_FRAME_TABLE, Route4_OnFrame
    .byte 0

Route4_OnTransition:
    goto_if_set FLAG_DELIVERED_ESCAPE_ROPE, Route4_EventScript_EndTransition
    getplayerxy VAR_TEMP_0, VAR_TEMP_1
    compare VAR_TEMP_0, 32
    goto_if_ne Route4_EventScript_EndTransition
    compare VAR_TEMP_1, 5
    goto_if_ne Route4_EventScript_EndTransition
    setvar VAR_TEMP_2, 1 
    end

Route4_EventScript_EndTransition:
    setvar VAR_TEMP_2, 0
    end

Route4_OnFrame:
    map_script_2 VAR_TEMP_2, 1, Route4_EventScript_CaveGuy_Trigger
    .2byte 0

Route4_EventScript_Unused::
	end

Route4_EventScript_Woman::
	msgbox Route4_Text_TrippedOverGeodude, MSGBOX_NPC
	end

Route4_EventScript_MtMoonSign::
	msgbox Route4_Text_MtMoonEntrance, MSGBOX_SIGN
	end

Route4_EventScript_RouteSign::
	msgbox Route4_Text_RouteSign, MSGBOX_SIGN
	end

.align 2
Movement_CaveGuyApproach:
	walk_slow_up
	walk_slow_up
	walk_slow_up
	delay_16
	step_end

.align 2
Movement_CaveGuyExit:
	walk_slow_up
	delay_16
	step_end 

.align 2
Movement_PlayerStepAside:
    walk_left
    step_end

Route4_EventScript_CaveGuy_Trigger::
    lockall
    setvar VAR_ROUTE4_CAVEGUY, 1
    goto Route4_EventScript_CaveGuy

Route4_EventScript_CaveGuy::
    textcolor NPC_TEXT_COLOR_MALE
    applymovement LOCALID_CAVEGUY, Common_Movement_FacePlayer
    waitmovement 0
    turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH   
    waitmovement 0
    playse SE_PIN
    applymovement LOCALID_CAVEGUY, Common_Movement_ExclamationMark
    waitmovement 0
    waitse
    delay 30
    msgbox Route4_Text_CaveGuyDialogue1, MSGBOX_DEFAULT
    closemessage
    applymovement LOCALID_CAVEGUY, Movement_CaveGuyApproach 
    waitmovement 0
    msgbox Route4_Text_CaveGuyDialogue2, MSGBOX_DEFAULT
	giveitem ITEM_ESCAPE_ROPE, 1
    waitfanfare
    textcolor NPC_TEXT_COLOR_MALE
    msgbox Route4_Text_CaveGuyDialogue3, MSGBOX_DEFAULT
    closemessage
    applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerStepAside
    waitmovement 0
    turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
    waitmovement 0
	applymovement LOCALID_CAVEGUY, Movement_CaveGuyExit
    waitmovement 0
	playse SE_EXIT
    removeobject LOCALID_CAVEGUY
	setflag FLAG_DELIVERED_ESCAPE_ROPE
    setvar VAR_TEMP_2, 0
    textcolor NPC_TEXT_COLOR_NEUTRAL
    releaseall
	end
