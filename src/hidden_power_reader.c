#include "global.h"
#include "event_data.h"
#include "pokemon.h"
#include "script.h"
#include "string_util.h"
#include "battle_main.h"
#include "constants/vars.h"
#include "constants/pokemon.h"

static u16 CalcHiddenPowerType(struct Pokemon *mon)
{
    u32 typeBits = ((GetMonData(mon, MON_DATA_HP_IV) & 1) << 0)
                |  ((GetMonData(mon, MON_DATA_ATK_IV) & 1) << 1)
                |  ((GetMonData(mon, MON_DATA_DEF_IV) & 1) << 2)
                |  ((GetMonData(mon, MON_DATA_SPEED_IV) & 1) << 3)
                |  ((GetMonData(mon, MON_DATA_SPATK_IV) & 1) << 4)
                |  ((GetMonData(mon, MON_DATA_SPDEF_IV) & 1) << 5);

    u32 hpTypes[NUMBER_OF_MON_TYPES] = {0};
    u32 i, hpTypeCount = 0;
    for (i = 0; i < NUMBER_OF_MON_TYPES; i++)
    {
        if (gTypesInfo[i].isHiddenPowerType)
            hpTypes[hpTypeCount++] = i;
    }

    u32 moveType = ((hpTypeCount - 1) * typeBits) / 63;
    return hpTypes[moveType];
}

void Special_CalcHiddenPowerType(void)
{
    struct Pokemon *mon = &gPlayerParty[gSpecialVar_0x8004];
    u16 hpType = CalcHiddenPowerType(mon);
    VarSet(VAR_HIDDEN_POWER_READER, hpType);
    StringCopy(gStringVar1, gTypesInfo[hpType].name);
}
