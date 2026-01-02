PewterCity_Museum_2F_MapScripts::
	.byte 0

PewterCity_Museum_2F_EventScript_Man::
	msgbox PewterCity_Museum_1F_Text_WhatsSpecialAboutMoonStone, MSGBOX_NPC
	end

PewterCity_Museum_2F_EventScript_OldMan::
	msgbox PewterCity_Museum_1F_Text_BoughtColorTVForMoonLanding, MSGBOX_NPC
	end

PewterCity_Museum_2F_EventScript_Scientist::
	msgbox PewterCity_Museum_1F_Text_RunningSpaceExhibitThisMonth, MSGBOX_NPC
	end

PewterCity_Museum_2F_EventScript_LittleGirl::
	msgbox PewterCity_Museum_1F_Text_AskedDaddyToCatchPikachu, MSGBOX_NPC
	end

PewterCity_Museum_2F_EventScript_BaldingMan::
	msgbox PewterCity_Museum_1F_Text_PikachuSoonIPromise, MSGBOX_NPC
	end

PewterCity_Museum_2F_EventScript_SpaceShuttle::
	msgbox PewterCity_Museum_1F_Text_SpaceShuttle, MSGBOX_SIGN
	end

PewterCity_Museum_2F_EventScript_MoonStone::
	msgbox PewterCity_Museum_1F_Text_MeteoriteThatFellOnMtMoon, MSGBOX_SIGN
	end

PewterCity_Museum_2F_EventScript_FossilScientist::
    lock
    faceplayer
    textcolor NPC_TEXT_COLOR_MALE
    goto_if_set FLAG_GOT_MT_MOON_OTHER_FOSSIL, PewterCity_Museum_2F_EventScript_AlreadyGotFossil
    goto_if_set FLAG_REVIVED_DOME, PewterCity_Museum_2F_EventScript_RevivedDome_GiveHelix
    goto_if_set FLAG_REVIVED_HELIX, PewterCity_Museum_2F_EventScript_RevivedHelix_GiveDome
    goto_if_set FLAG_GOT_DOME_FOSSIL, PewterCity_Museum_2F_EventScript_GiveHelix
    goto_if_set FLAG_GOT_HELIX_FOSSIL, PewterCity_Museum_2F_EventScript_GiveDome
    msgbox PewterCity_Museum_2F_Text_RumorsOfFossils, MSGBOX_DEFAULT
    textcolor NPC_TEXT_COLOR_NEUTRAL
    release
    end

PewterCity_Museum_2F_EventScript_RevivedDome_GiveHelix::
    msgbox PewterCity_Museum_2F_Text_RevivedFossil_GiveHelix, MSGBOX_DEFAULT
    giveitem ITEM_HELIX_FOSSIL
    goto_if_eq VAR_RESULT, FALSE, PewterCity_Museum_2F_EventScript_BagIsFull
    setflag FLAG_GOT_MT_MOON_OTHER_FOSSIL
    textcolor NPC_TEXT_COLOR_NEUTRAL
    release
    end

PewterCity_Museum_2F_EventScript_RevivedHelix_GiveDome::
    msgbox PewterCity_Museum_2F_Text_RevivedFossil_GiveDome, MSGBOX_DEFAULT
    giveitem ITEM_DOME_FOSSIL
    goto_if_eq VAR_RESULT, FALSE, PewterCity_Museum_2F_EventScript_BagIsFull
    setflag FLAG_GOT_MT_MOON_OTHER_FOSSIL
    textcolor NPC_TEXT_COLOR_NEUTRAL
    release
    end    

PewterCity_Museum_2F_EventScript_GiveHelix::
    msgbox PewterCity_Museum_2F_Text_YouHaveDomeTakeHelix, MSGBOX_DEFAULT
    giveitem ITEM_HELIX_FOSSIL
    goto_if_eq VAR_RESULT, FALSE, PewterCity_Museum_2F_EventScript_BagIsFull
    setflag FLAG_GOT_MT_MOON_OTHER_FOSSIL
    textcolor NPC_TEXT_COLOR_NEUTRAL
    release
    end

PewterCity_Museum_2F_EventScript_GiveDome::
    msgbox PewterCity_Museum_2F_Text_YouHaveHelixTakeDome, MSGBOX_DEFAULT
    giveitem ITEM_DOME_FOSSIL
    goto_if_eq VAR_RESULT, FALSE, PewterCity_Museum_2F_EventScript_BagIsFull
    setflag FLAG_GOT_MT_MOON_OTHER_FOSSIL
    textcolor NPC_TEXT_COLOR_NEUTRAL
    release
    end

PewterCity_Museum_2F_EventScript_AlreadyGotFossil::
    msgbox PewterCity_Museum_2F_Text_PreserveFossils, MSGBOX_DEFAULT
    textcolor NPC_TEXT_COLOR_NEUTRAL
    release
    end

PewterCity_Museum_2F_EventScript_BagIsFull::
    msgbox PewterCity_Museum_2F_Text_BagFull, MSGBOX_DEFAULT
    textcolor NPC_TEXT_COLOR_NEUTRAL
    release
    end
