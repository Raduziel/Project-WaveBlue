SaffronCity_Dojo_MapScripts::
	.byte 0

SaffronCity_Dojo_EventScript_TriggerMasterBattleLeft::
	lockall
	setvar VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 1
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	releaseall
	end

SaffronCity_Dojo_EventScript_TriggerMasterBattleRight::
	lockall
	setvar VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 1
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	releaseall
	end

SaffronCity_Dojo_EventScript_HitmonleeBall::
	lock
	faceplayer
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_AlreadyGotHitmon
	showmonpic SPECIES_HITMONLEE, 10, 3
	setvar VAR_TEMP_1, SPECIES_HITMONLEE
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	textcolor NPC_TEXT_COLOR_MALE
	msgbox SaffronCity_Dojo_Text_YouWantHitmonlee, MSGBOX_YESNO
	textcolor NPC_TEXT_COLOR_NEUTRAL
	goto_if_eq VAR_RESULT, YES, SaffronCity_Dojo_EventScript_GiveHitmon
	hidemonpic
	release
	end

SaffronCity_Dojo_EventScript_HitmontopBall::
	lock
	faceplayer
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_AlreadyGotHitmon
	showmonpic SPECIES_HITMONTOP, 10, 3
	setvar VAR_TEMP_1, SPECIES_HITMONTOP
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	textcolor NPC_TEXT_COLOR_MALE
	msgbox SaffronCity_Dojo_Text_YouWantHitmontop, MSGBOX_YESNO
	textcolor NPC_TEXT_COLOR_NEUTRAL
	goto_if_eq VAR_RESULT, YES, SaffronCity_Dojo_EventScript_GiveHitmon
	hidemonpic
	release
	end

SaffronCity_Dojo_EventScript_HitmonchanBall::
	lock
	faceplayer
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_AlreadyGotHitmon
	showmonpic SPECIES_HITMONCHAN, 10, 3
	setvar VAR_TEMP_1, SPECIES_HITMONCHAN
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	textcolor NPC_TEXT_COLOR_MALE
	msgbox SaffronCity_Dojo_Text_YouWantHitmonchan, MSGBOX_YESNO
	textcolor NPC_TEXT_COLOR_NEUTRAL
	goto_if_eq VAR_RESULT, YES, SaffronCity_Dojo_EventScript_GiveHitmon
	hidemonpic
	release
	end

SaffronCity_Dojo_EventScript_AlreadyGotHitmon::
	msgbox SaffronCity_Dojo_Text_BetterNotGetGreedy
	release
	end

SaffronCity_Dojo_EventScript_GiveHitmon::
	hidemonpic
	givemon VAR_TEMP_1, 25, ITEM_BLACK_BELT
	goto_if_eq VAR_RESULT, 0, SaffronCity_Dojo_EventScript_ReceivedHitmonParty
	goto_if_eq VAR_RESULT, 1, SaffronCity_Dojo_EventScript_ReceivedHitmonPC
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
	release
	end

SaffronCity_Dojo_EventScript_ReceivedHitmonParty::
	call SaffronCity_Dojo_EventScript_RemoveSelectedBall
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
	playfanfare MUS_LEVEL_UP
	message SaffronCity_Dojo_Text_ReceivedMonFromKarateMaster
	waitmessage
	waitfanfare
	setflag FLAG_GOT_HITMON_FROM_DOJO
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SaffronCity_Dojo_EventScript_EndGiveMon
	call EventScript_GetGiftMonPartySlot
	call EventScript_ChangePokemonNickname
	goto SaffronCity_Dojo_EventScript_EndGiveMon
	end

SaffronCity_Dojo_EventScript_ReceivedHitmonPC::
	call SaffronCity_Dojo_EventScript_RemoveSelectedBall
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
	playfanfare MUS_LEVEL_UP
	message SaffronCity_Dojo_Text_ReceivedMonFromKarateMaster
	waitmessage
	waitfanfare
	setflag FLAG_GOT_HITMON_FROM_DOJO
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SaffronCity_Dojo_EventScript_TransferredHitmonToPC
	call EventScript_NameReceivedBoxMon
	goto SaffronCity_Dojo_EventScript_TransferredHitmonToPC
	end

SaffronCity_Dojo_EventScript_RemoveSelectedBall::
    goto_if_eq VAR_TEMP_1, SPECIES_HITMONLEE, SaffronCity_Dojo_EventScript_RemoveLeeBall
    goto_if_eq VAR_TEMP_1, SPECIES_HITMONCHAN, SaffronCity_Dojo_EventScript_RemoveChanBall
    goto_if_eq VAR_TEMP_1, SPECIES_HITMONTOP, SaffronCity_Dojo_EventScript_RemoveTopBall
    return

SaffronCity_Dojo_EventScript_RemoveChanBall::
    removeobject LOCALID_HITMONCHAN_BALL
	setflag FLAG_HIDE_DOJO_HITMONCHAN_BALL
    return

SaffronCity_Dojo_EventScript_RemoveLeeBall::
    removeobject LOCALID_HITMONLEE_BALL
	setflag FLAG_HIDE_DOJO_HITMONLEE_BALL
    return

SaffronCity_Dojo_EventScript_RemoveTopBall::
    removeobject LOCALID_HITMONTOP_BALL
	setflag FLAG_HIDE_DOJO_HITMONTOP_BALL
    return

SaffronCity_Dojo_EventScript_TransferredHitmonToPC::
	call EventScript_TransferredToPC
	goto SaffronCity_Dojo_EventScript_EndGiveMon
	end

SaffronCity_Dojo_EventScript_EndGiveMon::
	release
	end

SaffronCity_Dojo_EventScript_Statue::
	msgbox SaffronCity_Dojo_Text_FightingDojo, MSGBOX_SIGN
	end

SaffronCity_Dojo_EventScript_LeftScroll::
	msgbox SaffronCity_Dojo_Text_EnemiesOnEverySide, MSGBOX_SIGN
	end

SaffronCity_Dojo_EventScript_RightScroll::
	msgbox SaffronCity_Dojo_Text_GoesAroundComesAround, MSGBOX_SIGN
	end

SaffronCity_Dojo_EventScript_Hitoshi::
	trainerbattle_single TRAINER_BLACK_BELT_HITOSHI, SaffronCity_Dojo_Text_HitoshiIntro, SaffronCity_Dojo_Text_HitoshiDefeat
	msgbox SaffronCity_Dojo_Text_HitoshiPostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Dojo_EventScript_Hideki::
	trainerbattle_single TRAINER_BLACK_BELT_HIDEKI, SaffronCity_Dojo_Text_HidekiIntro, SaffronCity_Dojo_Text_HidekiDefeat
	msgbox SaffronCity_Dojo_Text_HidekiPostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Dojo_EventScript_Aaron::
	trainerbattle_single TRAINER_BLACK_BELT_AARON, SaffronCity_Dojo_Text_AaronIntro, SaffronCity_Dojo_Text_AaronDefeat
	msgbox SaffronCity_Dojo_Text_AaronPostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Dojo_EventScript_Mike::
	trainerbattle_single TRAINER_BLACK_BELT_MIKE, SaffronCity_Dojo_Text_MikeIntro, SaffronCity_Dojo_Text_MikeDefeat
	msgbox SaffronCity_Dojo_Text_MikePostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Dojo_EventScript_MasterKoichi::
	trainerbattle_single TRAINER_BLACK_BELT_KOICHI, SaffronCity_Dojo_Text_MasterKoichiIntro, SaffronCity_Dojo_Text_MasterKoichiDefeat, SaffronCity_Dojo_EventScript_DefeatedMasterKoichi
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_MasterKoichiSellPowerItems
	goto SaffronCity_Dojo_EventScript_ChoosePrizedMon

SaffronCity_Dojo_EventScript_MasterKoichiSellPowerItems::
	message SaffronCity_Dojo_Text_MayHaveToolsToHelp
	waitmessage
	pokemart SaffronCity_Dojo_PowerItemsForSale
	msgbox SaffronCity_Dojo_Text_MasterKoichiComeAgain, MSGBOX_DEFAULT
	release
	end

SaffronCity_Dojo_EventScript_DefeatedMasterKoichi::
	setvar VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 1
	goto SaffronCity_Dojo_EventScript_ChoosePrizedMon
	end

SaffronCity_Dojo_EventScript_ChoosePrizedMon::
	msgbox SaffronCity_Dojo_Text_ChoosePrizedFightingMon, MSGBOX_AUTOCLOSE
	end

	.align 2
SaffronCity_Dojo_PowerItemsForSale:
	.2byte ITEM_POWER_WEIGHT
	.2byte ITEM_POWER_BRACER
	.2byte ITEM_POWER_BELT
	.2byte ITEM_POWER_LENS
	.2byte ITEM_POWER_BAND
	.2byte ITEM_POWER_ANKLET
	.2byte ITEM_NONE
