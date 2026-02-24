VictoryRoad_2F_EventScript_DoubleEdgeTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_DOUBLE_EDGE, EventScript_DoubleEdgeTaught
	msgbox Text_DoubleEdgeTeach, MSGBOX_DEFAULT
	giveitem ITEM_TM143
    compare VAR_RESULT, FALSE
    goto_if_eq EventScript_BagIsFull
    setflag FLAG_TUTOR_DOUBLE_EDGE
    
    EventScript_DoubleEdgeTaught::
	msgbox Text_DoubleEdgeTaught, MSGBOX_DEFAULT
    release
    end

EventScript_WeatherBallTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_WEATHER_BALL, EventScript_WeatherBallTaught
	msgbox Text_WeatherBallTeach, MSGBOX_DEFAULT
	giveitem ITEM_TM141
    compare VAR_RESULT, FALSE
    goto_if_eq EventScript_BagIsFull
	setflag FLAG_TUTOR_WEATHER_BALL

EventScript_WeatherBallTaught::
	msgbox Text_WeatherBallTaught, MSGBOX_DEFAULT
	release
	end

RockTunnel_B1F_EventScript_RockSlideTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_ROCK_SLIDE, EventScript_RockSlideTaught
	msgbox Text_RockSlideTeach, MSGBOX_DEFAULT
	giveitem ITEM_TM155
    compare VAR_RESULT, FALSE
    goto_if_eq EventScript_BagIsFull
	setflag FLAG_TUTOR_ROCK_SLIDE

EventScript_RockSlideTaught::
	msgbox Text_RockSlideTaught, MSGBOX_DEFAULT
	release
	end

MtEmber_Exterior_EventScript_ExplosionTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_EXPLOSION, EventScript_ExplosionTaught
	msgbox Text_ExplosionTeach, MSGBOX_DEFAULT
	giveitem ITEM_TM144
    compare VAR_RESULT, FALSE
    goto_if_eq EventScript_BagIsFull
	setflag FLAG_TUTOR_EXPLOSION

EventScript_ExplosionTaught::
	msgbox Text_ExplosionTaught, MSGBOX_DEFAULT
	release
	end

Route4_EventScript_MegaPunchTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_MEGA_PUNCH, EventScript_MegaPunchTaught
	msgbox Text_MegaPunchTeach, MSGBOX_DEFAULT
	giveitem ITEM_TM146
    compare VAR_RESULT, FALSE
    goto_if_eq EventScript_BagIsFull
	setflag FLAG_TUTOR_MEGA_PUNCH

EventScript_MegaPunchTaught::
	msgbox Text_MegaPunchTaught, MSGBOX_DEFAULT
	release
	end

Route4_EventScript_MegaKickTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_MEGA_KICK, EventScript_MegaKickTaught
	msgbox Text_MegaKickTeach, MSGBOX_DEFAULT
	giveitem ITEM_TM145
    compare VAR_RESULT, FALSE
    goto_if_eq EventScript_BagIsFull
	setflag FLAG_TUTOR_MEGA_KICK

EventScript_MegaKickTaught::
	msgbox Text_MegaKickTaught, MSGBOX_DEFAULT
	release
	end

EventScript_DreamEaterTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_DREAM_EATER, EventScript_DreamEaterTaught
	msgbox Text_DreamEaterTeach, MSGBOX_DEFAULT
	giveitem ITEM_TM154
    compare VAR_RESULT, FALSE
    goto_if_eq EventScript_BagIsFull
	setflag FLAG_TUTOR_DREAM_EATER

EventScript_DreamEaterTaught::
	msgbox Text_DreamEaterTaught, MSGBOX_DEFAULT
	release
	end

EventScript_SoftboiledTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_SOFT_BOILED, EventScript_SoftboiledTaught
	msgbox Text_SoftboiledTeach, MSGBOX_DEFAULT
	giveitem ITEM_TM149
    compare VAR_RESULT, FALSE
    goto_if_eq EventScript_BagIsFull
	setflag FLAG_TUTOR_SOFT_BOILED

EventScript_SoftboiledTaught::
	msgbox Text_SoftboiledTaught, MSGBOX_DEFAULT
	release
	end

FuchsiaCity_EventScript_SubstituteTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_SUBSTITUTE, EventScript_SubstituteTaught
	msgbox Text_SubstituteTeach, MSGBOX_DEFAULT
	giveitem ITEM_TM150
    compare VAR_RESULT, FALSE
    goto_if_eq EventScript_BagIsFull
	setflag FLAG_TUTOR_SUBSTITUTE

EventScript_SubstituteTaught::
	msgbox Text_SubstituteTaught, MSGBOX_DEFAULT
	release
	end

SevenIsland_EventScript_SwordsDanceTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_SWORDS_DANCE, EventScript_SwordsDanceTaught
	msgbox Text_SwordsDanceTeach, MSGBOX_DEFAULT
	giveitem ITEM_TM151
    compare VAR_RESULT, FALSE
    goto_if_eq EventScript_BagIsFull
	setflag FLAG_TUTOR_SWORDS_DANCE

EventScript_SwordsDanceTaught::
	msgbox Text_SwordsDanceTaught, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_1F_EventScript_SeismicTossTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_SEISMIC_TOSS, EventScript_SeismicTossTaught
	msgbox Text_SeismicTossTeach, MSGBOX_DEFAULT
	giveitem ITEM_TM153
    compare VAR_RESULT, FALSE
    goto_if_eq EventScript_BagIsFull
	setflag FLAG_TUTOR_SEISMIC_TOSS

EventScript_SeismicTossTaught::
	msgbox Text_SeismicTossTaught, MSGBOX_DEFAULT
	release
	end

EventScript_CounterTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_COUNTER, EventScript_CounterTaught
	msgbox Text_CounterTeach, MSGBOX_DEFAULT
	giveitem ITEM_TM152
    compare VAR_RESULT, FALSE
    goto_if_eq EventScript_BagIsFull
	setflag FLAG_TUTOR_COUNTER

EventScript_CounterTaught::
	msgbox Text_CounterTaught, MSGBOX_DEFAULT
	release
	end

EventScript_MetronomeTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_METRONOME, EventScript_MetronomeTaught
	msgbox Text_MetronomeTeach, MSGBOX_DEFAULT
	giveitem ITEM_TM147
    compare VAR_RESULT, FALSE
    goto_if_eq EventScript_BagIsFull
	setflag FLAG_TUTOR_METRONOME

EventScript_MetronomeTaught::
	msgbox Text_MetronomeTaught, MSGBOX_DEFAULT
	release
	end

EventScript_MimicTutor::
    lock
    faceplayer
    goto_if_set FLAG_TUTOR_MIMIC, EventScript_MimicTaught
    checkitem ITEM_POKE_DOLL, 1
    compare VAR_RESULT, FALSE
    goto_if_eq EventScript_MimicNoDoll
    msgbox Text_MimicTeach, MSGBOX_YESNO
    compare VAR_RESULT, NO
    goto_if_eq EventScript_MimicDeclined
    giveitem ITEM_TM148
    compare VAR_RESULT, FALSE
    goto_if_eq EventScript_BagIsFull
    removeitem ITEM_POKE_DOLL
    setflag FLAG_TUTOR_MIMIC
    goto EventScript_MimicTaught
    end

EventScript_MimicNoDoll::
    msgbox Text_MimicNoDoll, MSGBOX_DEFAULT
    release
    end

EventScript_MimicDeclined::
    msgbox Text_MimicDeclined, MSGBOX_DEFAULT
    release
    end

EventScript_MimicTaught::
    checkplayergender
    call_if_eq VAR_RESULT, MALE, EventScript_MimicTaughtMale
    call_if_eq VAR_RESULT, FEMALE, EventScript_MimicTaughtFemale
    release
    end

EventScript_MimicTaughtMale::
    msgbox Text_MimicTaughtMale, MSGBOX_DEFAULT
    return

EventScript_MimicTaughtFemale::
    msgbox Text_MimicTaughtFemale, MSGBOX_DEFAULT
    return

FourIsland_House1_EventScript_BodySlamTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_BODY_SLAM, EventScript_BodySlamTaught
	msgbox Text_BodySlamTeach, MSGBOX_DEFAULT
	giveitem ITEM_TM142
    compare VAR_RESULT, FALSE
    goto_if_eq EventScript_BagIsFull
	setflag FLAG_TUTOR_BODY_SLAM

EventScript_BodySlamTaught::
	msgbox Text_BodySlamTaught, MSGBOX_DEFAULT
	release
	end

TwoIsland_CapeBrink_House_EventScript_StarterTutor::
	goto_if_questlog EventScript_ReleaseEnd
	special QuestLog_CutRecording
	lock
	faceplayer
	goto_if_set FLAG_LEARNED_ALL_MOVES_AT_CAPE_BRINK, CapeBrinkTutor_EventScript_TaughtAllMoves
	goto_if_set FLAG_TEMP_2, CapeBrinkTutor_EventScript_MoveJustTaught
	bufferleadmonspeciesname STR_VAR_1
	msgbox Text_UltimateMoveThatMon
	specialvar VAR_RESULT, CapeBrinkGetMoveToTeachLeadPokemon
	goto_if_eq VAR_RESULT, FALSE, CapeBrinkTutor_EventScript_NoLeadStarter
	copyvar VAR_0x8009, VAR_0x8005
	call_if_eq VAR_FACING, DIR_NORTH, CapeBrinkTutor_EventScript_JumpInPlaceDown
	call_if_eq VAR_FACING, DIR_SOUTH, CapeBrinkTutor_EventScript_JumpInPlaceUp
	call_if_eq VAR_FACING, DIR_EAST, CapeBrinkTutor_EventScript_JumpInPlaceLeft
	call_if_eq VAR_FACING, DIR_WEST, CapeBrinkTutor_EventScript_JumpInPlaceRight
	msgbox Text_AllowMeToTeachMonUltimateMove, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CapeBrinkTutor_EventScript_DeclineMove
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, CapeBrinkTutor_EventScript_DeclineMove
	msgbox Text_LetMeConferUltimateMove
	closemessage
	fadescreen FADE_TO_BLACK
	goto CapeBrinkTutor_EventScript_ChooseMon

CapeBrinkTutor_EventScript_MoveJustTaught::
	msgbox Text_MakeBestUseOfMove
	release
	end

CapeBrinkTutor_EventScript_TaughtAllMoves::
	msgbox Text_FeelRejuvenated
	release
	end

CapeBrinkTutor_EventScript_TaughtMove::
	copyvar VAR_0x8005, VAR_0x8009
	specialvar VAR_RESULT, HasLearnedAllMovesFromCapeBrinkTutor
	goto_if_eq VAR_RESULT, TRUE, CapeBrinkTutor_EventScript_LearnedAllMoves
	msgbox Text_TaughtMove
	setflag FLAG_TEMP_2
	release
	end

CapeBrinkTutor_EventScript_LearnedAllMoves::
	msgbox Text_PassedOnEverythingIKnow
	setflag FLAG_LEARNED_ALL_MOVES_AT_CAPE_BRINK
	release
	end

CapeBrinkTutor_EventScript_ChooseMon::
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, CapeBrinkTutor_EventScript_DeclineMove
	goto CapeBrinkTutor_EventScript_TaughtMove
	end

CapeBrinkTutor_EventScript_JumpInPlaceDown::
	applymovement LOCALID_CAPE_BRINK_TUTOR, Movement_JumpInPlaceDown
	waitmovement 0
	return

CapeBrinkTutor_EventScript_JumpInPlaceUp::
	applymovement LOCALID_CAPE_BRINK_TUTOR, Movement_JumpInPlaceUp
	waitmovement 0
	return

CapeBrinkTutor_EventScript_JumpInPlaceLeft::
	applymovement LOCALID_CAPE_BRINK_TUTOR, Movement_JumpInPlaceLeft
	waitmovement 0
	return

CapeBrinkTutor_EventScript_JumpInPlaceRight::
	applymovement LOCALID_CAPE_BRINK_TUTOR, Movement_JumpInPlaceRight
	waitmovement 0
	return

CapeBrinkTutor_EventScript_DeclineMove::
	msgbox Text_YouRejectIt
	release
	end

CapeBrinkTutor_EventScript_NoLeadStarter::
	msgbox Text_JustMistaken
	release
	end

EventScript_ChooseMoveTutorMon::
	special ChooseMonForMoveTutor
	waitstate
	lock
	faceplayer
	return

MoveTutor_EventScript_CanOnlyBeLearnedOnce::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	special DisableMsgBoxWalkaway
	signmsg
	msgbox Text_MoveCanOnlyBeLearnedOnce, MSGBOX_YESNO
	normalmsg
	call EventScript_RestorePrevTextColor
	return

MoveTutor_EventScript_OpenBox::
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
	waitstate
	lock
	faceplayer
	return

MoveTutor_AfterChooseBoxMon::
	waitstate
	special CanTeachMoveBoxMon
	waitstate
	return

Movement_JumpInPlaceDown:
	jump_in_place_down
	step_end

Movement_JumpInPlaceUp:
	jump_in_place_up
	step_end

Movement_JumpInPlaceLeft:
	jump_in_place_left
	step_end

Movement_JumpInPlaceRight:
	jump_in_place_right
	step_end
