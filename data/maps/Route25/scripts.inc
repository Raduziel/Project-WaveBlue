Route25_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route25_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route25_OnFrame
	.byte 0

Route25_OnTransition::
    setflag FLAG_HIDE_ROUTE25_BILL
    end

Route25_OnFrame:
    map_script_2 VAR_BOXLINK_BILL, 1, Route25_EventScript_BillStop_Trigger
    .2byte 0

Route25_EventScript_SeaCottageSign::
	msgbox Route25_Text_SeaCottageSign, MSGBOX_SIGN
	end

Route25_EventScript_Man::
	msgbox Route25_Text_AreYouHereAlone, MSGBOX_NPC
	end

Route25_EventScript_BillStop_Trigger::
    checkflag FLAG_HELPED_BILL_IN_SEA_COTTAGE 
	goto_if_eq VAR_RESULT, FALSE, Route25_EventScript_BillStop_End
    
	lockall

    playse SE_PIN
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
    waitmovement 0
    waitse
    
    msgbox Route25_Text_WaitAMoment, MSGBOX_DEFAULT
    closemessage
    
    applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerStepBack
    waitmovement 0
    
    playse SE_EXIT
    opendoor 51, 4
    waitdooranim
    
    addobject LOCALID_BILL_OUTSIDE
    applymovement LOCALID_BILL_OUTSIDE, Movement_BillStepsOut
    waitmovement 0
    
    closedoor 51, 4
    waitdooranim
    
    msgbox Route25_Text_BillIntro, MSGBOX_DEFAULT
    
    giveitem ITEM_POKEMON_BOX_LINK, 1
    waitfanfare
    
    msgbox Route25_Text_BillExplain, MSGBOX_DEFAULT
    closemessage
    
    playse SE_EXIT
    opendoor 51, 4
    waitdooranim
    
    applymovement LOCALID_BILL_OUTSIDE, Movement_BillReturns
    waitmovement 0
    
    removeobject LOCALID_BILL_OUTSIDE
    
    closedoor 51, 4
    waitdooranim
    
    setvar VAR_BOXLINK_BILL, 2
    setflag FLAG_HIDE_ROUTE25_BILL
    
    releaseall
    end

Route25_EventScript_BillStop_End::
    end

Movement_PlayerStepBack:
    walk_down
    face_up
    step_end

Movement_BillStepsOut:
    walk_down
    step_end

Movement_BillReturns:
    walk_up
    step_end
