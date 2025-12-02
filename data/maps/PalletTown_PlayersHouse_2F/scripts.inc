PalletTown_PlayersHouse_2F_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_PlayersHouse_2F_OnTransition
    map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_PlayersHouse_2F_OnWarp
    .byte 0

PalletTown_PlayersHouse_2F_OnTransition::
    call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 0, PalletTown_PlayersHouse_2F_EventScript_SetRespawn
    call_if_unset FLAG_SYS_GAME_CLEAR, PalletTown_PlayersHouse_2F_EventScript_HideBalls
    call_if_set FLAG_SYS_GAME_CLEAR, PalletTown_PlayersHouse_2F_EventScript_TryShowBalls
    end

PalletTown_PlayersHouse_2F_OnWarp::
    map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 0, PalletTown_PlayersHouse_2F_FirstWarpIn
    .2byte 0

PalletTown_PlayersHouse_2F_FirstWarpIn::
    turnobject LOCALID_PLAYER, DIR_NORTH
    setvar VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 1
    end

PalletTown_PlayersHouse_2F_EventScript_SetRespawn::
    setrespawn HEAL_LOCATION_PALLET_TOWN
    return

PalletTown_PlayersHouse_2F_EventScript_HideBalls::
    setflag FLAG_HIDE_POSTGAME_STARTER_1
    setflag FLAG_HIDE_POSTGAME_STARTER_2
    return

PalletTown_PlayersHouse_2F_EventScript_TryShowBalls::
    goto_if_set FLAG_POSTGAME_STARTERS_UNLOCKED, PalletTown_PlayersHouse_2F_EventScript_StopBallCheck
    clearflag FLAG_HIDE_POSTGAME_STARTER_1
    clearflag FLAG_HIDE_POSTGAME_STARTER_2
    setflag FLAG_POSTGAME_STARTERS_UNLOCKED
    return

PalletTown_PlayersHouse_2F_EventScript_StopBallCheck::
    return

PalletTown_PlayersHouse_2F_EventScript_StarterBall1::
    lock
    faceplayer
    goto_if_eq VAR_STARTER_MON, 0, PalletTown_PlayersHouse_2F_EventScript_Ball1_GiveCharmander
    goto_if_eq VAR_STARTER_MON, 1, PalletTown_PlayersHouse_2F_EventScript_Ball1_GiveBulbasaur
    goto_if_eq VAR_STARTER_MON, 2, PalletTown_PlayersHouse_2F_EventScript_Ball1_GiveSquirtle
    end

PalletTown_PlayersHouse_2F_EventScript_Ball1_GiveCharmander::
    setvar VAR_TEMP_1, SPECIES_CHARMANDER
    goto PalletTown_PlayersHouse_2F_EventScript_GiveStarter1
    end

PalletTown_PlayersHouse_2F_EventScript_Ball1_GiveBulbasaur::
    setvar VAR_TEMP_1, SPECIES_BULBASAUR
    goto PalletTown_PlayersHouse_2F_EventScript_GiveStarter1
    end

PalletTown_PlayersHouse_2F_EventScript_Ball1_GiveSquirtle::
    setvar VAR_TEMP_1, SPECIES_SQUIRTLE
    goto PalletTown_PlayersHouse_2F_EventScript_GiveStarter1
    end

PalletTown_PlayersHouse_2F_EventScript_GiveStarter1::
    call_if_unset FLAG_HIDE_POSTGAME_STARTER_2, PalletTown_PlayersHouse_2F_EventScript_PlayBillMessage
    bufferspeciesname STR_VAR_1, VAR_TEMP_1
    givemon VAR_TEMP_1, 5, ITEM_NONE
    
    goto_if_eq VAR_RESULT, 0, PalletTown_PlayersHouse_2F_EventScript_ReceivedStarter1
    goto_if_eq VAR_RESULT, 1, PalletTown_PlayersHouse_2F_EventScript_SendToPC1
    goto_if_eq VAR_RESULT, 2, PalletTown_PlayersHouse_2F_EventScript_NoRoom
    end

PalletTown_PlayersHouse_2F_EventScript_ReceivedStarter1::
    playfanfare MUS_OBTAIN_ITEM
    message PalletTown_PlayersHouse_2F_Text_ObtainedStarter
    waitmessage
    waitfanfare
    removeobject STARTER_BALL_1_ID
    setflag FLAG_HIDE_POSTGAME_STARTER_1
    msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, YES, PalletTown_PlayersHouse_2F_EventScript_NicknamePartyMon
    release
    end

PalletTown_PlayersHouse_2F_EventScript_SendToPC1::
    playfanfare MUS_OBTAIN_ITEM
    message PalletTown_PlayersHouse_2F_Text_ObtainedStarter
    waitmessage
    waitfanfare
    removeobject STARTER_BALL_1_ID
    setflag FLAG_HIDE_POSTGAME_STARTER_1
    msgbox PalletTown_PlayersHouse_2F_Text_TransferredToPC, MSGBOX_DEFAULT
    release
    end

PalletTown_PlayersHouse_2F_EventScript_StarterBall2::
    lock
    faceplayer
    goto_if_eq VAR_STARTER_MON, 0, PalletTown_PlayersHouse_2F_EventScript_Ball2_GiveSquirtle
    goto_if_eq VAR_STARTER_MON, 1, PalletTown_PlayersHouse_2F_EventScript_Ball2_GiveCharmander
    goto_if_eq VAR_STARTER_MON, 2, PalletTown_PlayersHouse_2F_EventScript_Ball2_GiveBulbasaur
    end

PalletTown_PlayersHouse_2F_EventScript_Ball2_GiveCharmander::
    setvar VAR_TEMP_1, SPECIES_CHARMANDER
    goto PalletTown_PlayersHouse_2F_EventScript_GiveStarter2
    end

PalletTown_PlayersHouse_2F_EventScript_Ball2_GiveBulbasaur::
    setvar VAR_TEMP_1, SPECIES_BULBASAUR
    goto PalletTown_PlayersHouse_2F_EventScript_GiveStarter2
    end

PalletTown_PlayersHouse_2F_EventScript_Ball2_GiveSquirtle::
    setvar VAR_TEMP_1, SPECIES_SQUIRTLE
    goto PalletTown_PlayersHouse_2F_EventScript_GiveStarter2
    end

PalletTown_PlayersHouse_2F_EventScript_GiveStarter2::
    call_if_unset FLAG_HIDE_POSTGAME_STARTER_1, PalletTown_PlayersHouse_2F_EventScript_PlayBillMessage
    bufferspeciesname STR_VAR_1, VAR_TEMP_1
    givemon VAR_TEMP_1, 5, ITEM_NONE
    
    goto_if_eq VAR_RESULT, 0, PalletTown_PlayersHouse_2F_EventScript_ReceivedStarter2
    goto_if_eq VAR_RESULT, 1, PalletTown_PlayersHouse_2F_EventScript_SendToPC2
    goto_if_eq VAR_RESULT, 2, PalletTown_PlayersHouse_2F_EventScript_NoRoom
    end

PalletTown_PlayersHouse_2F_EventScript_ReceivedStarter2::
    playfanfare MUS_OBTAIN_ITEM
    message PalletTown_PlayersHouse_2F_Text_ObtainedStarter
    waitmessage
    waitfanfare
    removeobject STARTER_BALL_2_ID
    setflag FLAG_HIDE_POSTGAME_STARTER_2
    msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, YES, PalletTown_PlayersHouse_2F_EventScript_NicknamePartyMon
    release
    end

PalletTown_PlayersHouse_2F_EventScript_SendToPC2::
    playfanfare MUS_OBTAIN_ITEM
    message PalletTown_PlayersHouse_2F_Text_ObtainedStarter
    waitmessage
    waitfanfare
    removeobject STARTER_BALL_2_ID
    setflag FLAG_HIDE_POSTGAME_STARTER_2
    msgbox PalletTown_PlayersHouse_2F_Text_TransferredToPC, MSGBOX_DEFAULT
    release
    end

PalletTown_PlayersHouse_2F_EventScript_PlayBillMessage::
    msgbox PalletTown_PlayersHouse_2F_Text_BillLetter, MSGBOX_DEFAULT
    return

PalletTown_PlayersHouse_2F_EventScript_NicknamePartyMon::
    call EventScript_GetGiftMonPartySlot
    special ChangePokemonNickname
    waitstate
    release
    end

PalletTown_PlayersHouse_2F_EventScript_NoRoom::
    msgbox PalletTown_PlayersHouse_2F_Text_NoRoom, MSGBOX_DEFAULT
    release
    end



PalletTown_PlayersHouse_2F_EventScript_NES::
    msgbox PalletTown_PlayersHouse_2F_Text_PlayedWithNES, MSGBOX_SIGN
    end

PalletTown_PlayersHouse_2F_EventScript_Sign::
    msgbox PalletTown_PlayersHouse_2F_Text_PressLRForHelp, MSGBOX_SIGN
    end

PalletTown_PlayersHouse_2F_EventScript_PC::
    goto_if_questlog EventScript_ReleaseEnd
    lockall
    setvar VAR_0x8004, HELPCONTEXT_BEDROOM_PC
    special Script_SetHelpContext
    setvar VAR_0x8004, 1
    special AnimatePcTurnOn
    playse SE_PC_ON
    msgbox Text_PlayerBootedUpPC
    special BedroomPC
    waitstate
    special SetHelpContextForMap
    releaseall
    end

EventScript_PalletTown_PlayersHouse_2F_ShutDownPC::
    setvar VAR_0x8004, 1
    playse SE_PC_OFF
    special AnimatePcTurnOff
    special SetHelpContextForMap
    releaseall
    end
