Route10_MapScripts::
	.byte 0

Route10_EventScript_Unused::
	end

Route10_EventScript_NorthRockTunnelSign::
	msgbox Route10_Text_RockTunnelDetourToLavender, MSGBOX_SIGN
	end

Route10_EventScript_SouthRockTunnelSign::
	msgbox Route10_Text_RockTunnel, MSGBOX_SIGN
	end

Route10_EventScript_PowerPlantSign::
	msgbox Route10_Text_PowerPlant, MSGBOX_SIGN
	end

Route10_EventScript_Lantern::
	lock
	faceplayer
	goto_if_set FLAG_GOT_LANTERN, Route10_EventScript_LanternPostGift
	textcolor NPC_TEXT_COLOR_MALE
	msgbox Route10_Text_LanternOffer, MSGBOX_DEFAULT
	giveitem ITEM_LANTERN
	setflag FLAG_GOT_LANTERN
	textcolor NPC_TEXT_COLOR_MALE
	msgbox Route10_Text_LanternFarewell, MSGBOX_DEFAULT
	release
	end

Route10_EventScript_LanternPostGift::
	textcolor NPC_TEXT_COLOR_MALE
	msgbox Route10_Text_LanternPostGift, MSGBOX_DEFAULT
	release
	end
