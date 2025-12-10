OneIsland_House2_MapScripts::
	.byte 0

OneIsland_House2_EventScript_TMMerchant::
	lock
	faceplayer
	textcolor NPC_TEXT_COLOR_MALE
	goto_if_set FLAG_TM_MERCHANT_INTRODUCED, OneIsland_House2_EventScript_ShortIntro
	msgbox OneIsland_House2_Text_TMMerchantIntro, MSGBOX_DEFAULT
	setflag FLAG_TM_MERCHANT_INTRODUCED
	goto OneIsland_House2_EventScript_ChooseType
	end

OneIsland_House2_EventScript_ShortIntro::
	msgbox OneIsland_House2_Text_TMMerchantPostIntro, MSGBOX_DEFAULT
	goto OneIsland_House2_EventScript_ChooseType
	end

OneIsland_House2_EventScript_ChooseType::
	multichoicegrid 0, 0, MULTI_TM_MERCHANT_TYPES, 3, 0

	compare VAR_RESULT, 17
	goto_if_eq OneIsland_House2_EventScript_Exit
	compare VAR_RESULT, 127
	goto_if_eq OneIsland_House2_EventScript_Exit

	compare VAR_RESULT, 0
	goto_if_eq OneIsland_House2_EventScript_SetBug
	compare VAR_RESULT, 1
	goto_if_eq OneIsland_House2_EventScript_SetDark
	compare VAR_RESULT, 2
	goto_if_eq OneIsland_House2_EventScript_SetDragon
	compare VAR_RESULT, 3
	goto_if_eq OneIsland_House2_EventScript_SetElectric
	compare VAR_RESULT, 4
	goto_if_eq OneIsland_House2_EventScript_SetFairy
	compare VAR_RESULT, 5
	goto_if_eq OneIsland_House2_EventScript_SetFighting
	compare VAR_RESULT, 6
	goto_if_eq OneIsland_House2_EventScript_SetFire
	compare VAR_RESULT, 7
	goto_if_eq OneIsland_House2_EventScript_SetFlying
	compare VAR_RESULT, 8
	goto_if_eq OneIsland_House2_EventScript_SetGhost
	compare VAR_RESULT, 9
	goto_if_eq OneIsland_House2_EventScript_SetGrass
	compare VAR_RESULT, 10
	goto_if_eq OneIsland_House2_EventScript_SetGround
	compare VAR_RESULT, 11
	goto_if_eq OneIsland_House2_EventScript_SetIce
	compare VAR_RESULT, 12
	goto_if_eq OneIsland_House2_EventScript_SetPoison
	compare VAR_RESULT, 13
	goto_if_eq OneIsland_House2_EventScript_SetPsychic
	compare VAR_RESULT, 14
	goto_if_eq OneIsland_House2_EventScript_SetRock
	compare VAR_RESULT, 15
	goto_if_eq OneIsland_House2_EventScript_SetSteel
	compare VAR_RESULT, 16
	goto_if_eq OneIsland_House2_EventScript_SetWater
	
	goto OneIsland_House2_EventScript_Exit

OneIsland_House2_EventScript_SetBug::
	setvar VAR_0x8004, TYPE_BUG
	goto OneIsland_House2_EventScript_OpenShop

OneIsland_House2_EventScript_SetDark::
	setvar VAR_0x8004, TYPE_DARK
	goto OneIsland_House2_EventScript_OpenShop

OneIsland_House2_EventScript_SetDragon::
	setvar VAR_0x8004, TYPE_DRAGON
	goto OneIsland_House2_EventScript_OpenShop

OneIsland_House2_EventScript_SetElectric::
	setvar VAR_0x8004, TYPE_ELECTRIC
	goto OneIsland_House2_EventScript_OpenShop

OneIsland_House2_EventScript_SetFairy::
	setvar VAR_0x8004, TYPE_FAIRY
	goto OneIsland_House2_EventScript_OpenShop

OneIsland_House2_EventScript_SetFighting::
	setvar VAR_0x8004, TYPE_FIGHTING
	goto OneIsland_House2_EventScript_OpenShop

OneIsland_House2_EventScript_SetFire::
	setvar VAR_0x8004, TYPE_FIRE
	goto OneIsland_House2_EventScript_OpenShop

OneIsland_House2_EventScript_SetFlying::
	setvar VAR_0x8004, TYPE_FLYING
	goto OneIsland_House2_EventScript_OpenShop

OneIsland_House2_EventScript_SetGhost::
	setvar VAR_0x8004, TYPE_GHOST
	goto OneIsland_House2_EventScript_OpenShop

OneIsland_House2_EventScript_SetGrass::
	setvar VAR_0x8004, TYPE_GRASS
	goto OneIsland_House2_EventScript_OpenShop

OneIsland_House2_EventScript_SetGround::
	setvar VAR_0x8004, TYPE_GROUND
	goto OneIsland_House2_EventScript_OpenShop

OneIsland_House2_EventScript_SetIce::
	setvar VAR_0x8004, TYPE_ICE
	goto OneIsland_House2_EventScript_OpenShop

OneIsland_House2_EventScript_SetPoison::
	setvar VAR_0x8004, TYPE_POISON
	goto OneIsland_House2_EventScript_OpenShop

OneIsland_House2_EventScript_SetPsychic::
	setvar VAR_0x8004, TYPE_PSYCHIC
	goto OneIsland_House2_EventScript_OpenShop

OneIsland_House2_EventScript_SetRock::
	setvar VAR_0x8004, TYPE_ROCK
	goto OneIsland_House2_EventScript_OpenShop

OneIsland_House2_EventScript_SetSteel::
	setvar VAR_0x8004, TYPE_STEEL
	goto OneIsland_House2_EventScript_OpenShop

OneIsland_House2_EventScript_SetWater::
	setvar VAR_0x8004, TYPE_WATER
	goto OneIsland_House2_EventScript_OpenShop

OneIsland_House2_EventScript_OpenShop::
	callnative SetupOneTimeTMMart
	compare VAR_RESULT, 0
	goto_if_eq OneIsland_House2_EventScript_ShopEmpty
	msgbox OneIsland_House2_Text_HereIsWhatIHave, MSGBOX_DEFAULT
	closemessage
	fadescreen 1
	callnative CreateOneTimeTMShopMenu
	waitstate
	goto OneIsland_House2_EventScript_ChooseType

OneIsland_House2_EventScript_ShopEmpty::
	msgbox OneIsland_House2_Text_NoStockForType, MSGBOX_DEFAULT
	closemessage
	goto OneIsland_House2_EventScript_ChooseType

OneIsland_House2_EventScript_Exit::
	msgbox OneIsland_House2_Text_ComeAgain, MSGBOX_DEFAULT
	release
	end
