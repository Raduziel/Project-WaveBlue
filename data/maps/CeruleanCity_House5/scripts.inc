CeruleanCity_House5_MapScripts::
	.byte 0

CeruleanCity_House5_EventScript_BerryMartMan::
	lock
	faceplayer
	goto_if_set FLAG_MET_BERRY_MART_MAN, CeruleanCity_House5_EventScript_ShortGreeting
	msgbox CeruleanCity_House5_Text_Greeting, MSGBOX_DEFAULT
	setflag FLAG_MET_BERRY_MART_MAN
	pokemart CeruleanCity_Herb_Berry_Mart
	release
	end

CeruleanCity_House5_EventScript_ShortGreeting::
	msgbox CeruleanCity_House5_Text_ShortGreeting, MSGBOX_DEFAULT
	pokemart CeruleanCity_Herb_Berry_Mart
	release
	end

	.align 2
CeruleanCity_Herb_Berry_Mart::
    .2byte ITEM_HEAL_POWDER
    .2byte ITEM_ENERGY_POWDER
    .2byte ITEM_ENERGY_ROOT
    .2byte ITEM_REVIVAL_HERB
    .2byte ITEM_POMEG_BERRY
    .2byte ITEM_KELPSY_BERRY
    .2byte ITEM_QUALOT_BERRY
    .2byte ITEM_HONDEW_BERRY
    .2byte ITEM_GREPA_BERRY
    .2byte ITEM_TAMATO_BERRY
    .2byte ITEM_NONE	
