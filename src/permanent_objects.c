#include "global.h"
#include "permanent_objects.h"

static inline bool8 GetBit(const u8 *array, u16 bit)
{
    return (array[bit / 8] >> (bit % 8)) & 1;
}

static inline void SetBit(u8 *array, u16 bit)
{
    array[bit / 8] |= (1 << (bit % 8));
}


#define OBJECTS_PER_MAP 32

u16 GetPermanentObjectId(u16 mapGroup, u16 mapNum, u16 localId)
{
    u32 globalMapId = ((u32)mapGroup << 8) | (u32)mapNum;

    const u32 MAX_MAP_SLOTS = (PERMANENT_OBJECT_COUNT / OBJECTS_PER_MAP);

    u32 slot = globalMapId % MAX_MAP_SLOTS;
    u32 id = slot * OBJECTS_PER_MAP + (localId % OBJECTS_PER_MAP);

    return (u16)id;
}


bool8 IsPermanentObjectDestroyed(u16 id)
{
    if (id >= PERMANENT_OBJECT_COUNT)
        return FALSE;

    return GetBit(gSaveBlock2Ptr->permanentObjects.destroyed, id);
}


void SetPermanentObjectDestroyed(u16 id)
{
    if (id >= PERMANENT_OBJECT_COUNT)
        return;

    SetBit(gSaveBlock2Ptr->permanentObjects.destroyed, id);
}
