DiglettsCave_SouthEntrance_MapScripts::
	.byte 0

DiglettsCave_SouthEntrance_EventScript_OldMan::
	lock
    faceplayer
    goto_if_set FLAG_GOT_ROCKY_HELMET, DiglettsCave_SouthEntrance_EventScript_OldMan_Received
    msgbox DiglettsCave_SouthEntrance_Text_FoundSomethingHard
    checkitemspace ITEM_ROCKY_HELMET, 1
    goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
    giveitem ITEM_ROCKY_HELMET
    setflag FLAG_GOT_ROCKY_HELMET
    release
    end

DiglettsCave_SouthEntrance_EventScript_OldMan_Received::
    msgbox DiglettsCave_SouthEntrance_Text_DiglettDugThisTunnel
    release
    end
