PokemonMansion_2F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_2F_OnLoad
	.byte 0

PokemonMansion_2F_OnLoad::
	call_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_EventScript_PressSwitch_2F
	end

PokemonMansion_2F_EventScript_Statue::
	lockall
	setvar VAR_0x8004, 1
	call PokemonMansion_EventScript_SecretSwitch
	playse SE_UNLOCK
	special DrawWholeMapView
	waitse
	releaseall
	end

PokemonMansion_2F_EventScript_DiaryJuly5th::
	msgbox PokemonMansion_1F_Text_NewMonDiscoveredInGuyanaJungle, MSGBOX_SIGN
	end

PokemonMansion_2F_EventScript_DiaryJuly10th::
	msgbox PokemonMansion_1F_Text_ChristenedDiscoveredMonMew, MSGBOX_SIGN
	end

PokemonMansion_2F_EventScript_Arnie::
	trainerbattle_single TRAINER_BURGLAR_ARNIE, PokemonMansion_1F_Text_ArnieIntro, PokemonMansion_1F_Text_ArnieDefeat
	msgbox PokemonMansion_1F_Text_ArniePostBattle, MSGBOX_AUTOCLOSE
	end

PokeMansion_EventScript_Porygon::
    lock
    faceplayer
    playse SE_PC_ON
    applymovement LOCALID_PORYGON, Movement_Porygon_Glitch
    waitmovement 0
    waitse
    faceplayer
    playmoncry SPECIES_PORYGON, CRY_MODE_ENCOUNTER
    msgbox Text_Porygon_Cry, MSGBOX_DEFAULT
    waitmoncry
    closemessage
    setwildbattle SPECIES_PORYGON, 30
    setflag FLAG_HIDE_PORYGON
    setflag FLAG_SYS_SPECIAL_WILD_BATTLE
    dowildbattle
    clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
    specialvar VAR_RESULT, GetBattleOutcome
    goto_if_eq VAR_RESULT, B_OUTCOME_WON, PokeMansion_EventScript_FoughtPorygon
    goto_if_eq VAR_RESULT, B_OUTCOME_RAN, PokeMansion_EventScript_FoughtPorygon
    goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, PokeMansion_EventScript_FoughtPorygon
    fadescreen FADE_TO_BLACK
    delay 60
    removeobject LOCALID_PORYGON
    fadescreen FADE_FROM_BLACK
    release
    end

PokeMansion_EventScript_FoughtPorygon::
    msgbox Text_Porygon_Disappears, MSGBOX_DEFAULT
    closemessage
    fadescreen FADE_TO_WHITE
    playse SE_PC_OFF
    removeobject LOCALID_PORYGON
    delay 60
    fadescreen FADE_FROM_WHITE
    release
    end

    Movement_Porygon_Glitch:
    spin_left
    delay_1
    spin_right
    delay_1
    jump_in_place_right_left
    delay_1
    jump_in_place_left_right
    step_end
