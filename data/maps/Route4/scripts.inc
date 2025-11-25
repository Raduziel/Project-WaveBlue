Route4_MapScripts::
	.byte 0

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

@ Escape Rope Delivery

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
	checkflag FLAG_DELIVERED_ESCAPE_ROPE
	goto_if_set VAR_RESULT, Route4_EventScript_CaveGuy_Trigger_End

	setvar VAR_TEMP_0, 1

	call Route4_EventScript_CaveGuy

Route4_EventScript_CaveGuy_Trigger_End::
	end

Route4_EventScript_CaveGuy::

	lock
	delay 15
	faceplayer
	
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH	
	waitmovement 0

	playse SE_PIN
	applymovement LOCALID_CAVEGUY, Common_Movement_ExclamationMark
	waitmovement 0
	delay 60

	applymovement LOCALID_CAVEGUY, Movement_CaveGuyApproach 
	waitmovement 0
    
	msgbox Route4_Text_CaveGuyDialogue1, MSGBOX_NPC
	giveitem ITEM_ESCAPE_ROPE, 1
	waitfanfare
	waitmessage

	msgbox Route4_Text_CaveGuyDialogue2, MSGBOX_NPC
	waitmessage

	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerStepAside
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
    waitmovement 0

	applymovement LOCALID_CAVEGUY, Movement_CaveGuyExit
	waitmovement 0
	removeobject LOCALID_CAVEGUY

	setflag FLAG_DELIVERED_ESCAPE_ROPE

Route4_EventScript_CaveGuy_End::
	release
	end
