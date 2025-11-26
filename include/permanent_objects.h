#ifndef GUARD_PERMANENT_OBJECTS_H
#define GUARD_PERMANENT_OBJECTS_H

#include "global.h"

u16 GetPermanentObjectId(u16 mapGroup, u16 mapNum, u16 localId);
bool8 IsPermanentObjectDestroyed(u16 id);
void SetPermanentObjectDestroyed(u16 id);

#endif // GUARD_PERMANENT_OBJECTS_H