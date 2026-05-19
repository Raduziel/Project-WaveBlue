SSAnne_Exterior_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, SSAnne_Exterior_OnTransition
    map_script MAP_SCRIPT_ON_FRAME_TABLE, SSAnne_Exterior_OnFrame
    map_script MAP_SCRIPT_ON_RESUME, SSAnne_Exterior_OnResume
    .byte 0

SSAnne_Exterior_OnTransition::
    setworldmapflag FLAG_WORLD_MAP_SSANNE_EXTERIOR
    
    setflag FLAG_HIDE_SSANNE_MEW

    goto_if_set FLAG_FOUGHT_MEW, SSAnne_Exterior_EventScript_EndTransition

    goto_if_unset FLAG_SYS_GAME_CLEAR, SSAnne_Exterior_EventScript_EndTransition
    goto_if_unset FLAG_FOUGHT_MEWTWO, SSAnne_Exterior_EventScript_EndTransition
    goto_if_unset FLAG_DEFEATED_OAK, SSAnne_Exterior_EventScript_EndTransition

    clearflag FLAG_HIDE_SSANNE_MEW
    end

SSAnne_Exterior_EventScript_EndTransition::
    end

SSAnne_Exterior_OnResume::
    call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, SSAnne_Exterior_EventScript_TryRemoveMew
    end

SSAnne_Exterior_EventScript_TryRemoveMew::
    specialvar VAR_RESULT, GetBattleOutcome
    goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, SSAnne_Exterior_EventScript_ResumeReturn
    removeobject VAR_LAST_TALKED
SSAnne_Exterior_EventScript_ResumeReturn::
    return

SSAnne_Exterior_EventScript_Mew::
    lock
    faceplayer
    playse SE_PIN
    applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
    waitmovement 0
    waitse
    delay 20
    playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
    msgbox SSAnne_Exterior_Text_Mew, MSGBOX_DEFAULT
    waitmoncry
    setwildbattle SPECIES_MEW, 70
    setflag FLAG_SYS_SPECIAL_WILD_BATTLE
    special BattleSetup_StartLegendaryBattle
    waitstate
    clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
    
    specialvar VAR_RESULT, GetBattleOutcome
    goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, SSAnne_Exterior_EventScript_MewCaught
    goto SSAnne_Exterior_EventScript_MewRan
    end

SSAnne_Exterior_EventScript_MewCaught::
    setflag FLAG_FOUGHT_MEW
    removeobject VAR_LAST_TALKED
    release
    end

SSAnne_Exterior_EventScript_MewRan::
    setflag FLAG_FOUGHT_MEW
    
    msgbox SSAnne_Exterior_Text_MewFled, MSGBOX_DEFAULT
    closemessage
    playse SE_WARP_IN
    applymovement VAR_LAST_TALKED, SSAnne_Exterior_Movement_MewTeleport
    waitmovement 0
    removeobject VAR_LAST_TALKED
    release
    end

SSAnne_Exterior_Movement_MewTeleport:
    set_invisible
    step_end    

SSAnne_Exterior_OnFrame::
    map_script_2 VAR_MAP_SCENE_VERMILION_CITY, 1, SSAnne_Exterior_ExitSSAnne
    .2byte 0

SSAnne_Exterior_ExitSSAnne::
    lockall
    getplayerxy VAR_0x8004, VAR_0x8005
    call_if_le VAR_0x8005, 6, SSAnne_Exterior_WalkDown
    call_if_ge VAR_0x8005, 7, SSAnne_Exterior_WalkInPlaceDown
    fadenewbgm MUS_SURF
    delay 50
    special DoSSAnneDepartureCutscene
    waitstate
    removeobject LOCALID_SS_ANNE
    applymovement LOCALID_PLAYER, SSAnne_Exterior_Movement_Exit
    waitmovement 0
    setvar VAR_MAP_SCENE_VERMILION_CITY, 2
    setvar VAR_VERMILION_CITY_TICKET_CHECK_TRIGGER, 0
    warp MAP_VERMILION_CITY, 23, 34
    waitstate
    releaseall
    end

SSAnne_Exterior_WalkDown::
    applymovement LOCALID_PLAYER, SSAnne_Exterior_Movement_WalkDown
    waitmovement 0
    return

SSAnne_Exterior_WalkInPlaceDown::
    applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
    waitmovement 0
    return

SSAnne_Exterior_Movement_Exit::
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    step_end

SSAnne_Exterior_Movement_WalkDown::
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    step_end
