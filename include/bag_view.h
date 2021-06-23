#ifndef POKEDIAMOND_BAG_VIEW_H
#define POKEDIAMOND_BAG_VIEW_H

#include "player_data.h"
#include "save_block_2.h"

struct UnkStruct_0206F164;

struct BagView_UnkSub
{
    struct ItemSlot *slot;
    u8 padding[0x4];
    u8 pocket;
    u8 padding2[0x3];
}; // total size = 0xC

struct BagView
{
    struct SaveBlock2 *sav2;
    struct BagView_UnkSub slots[8];
    u8 padding;
    u8 unk65;
    u16 unk66;
    u16 unk68;
    u8 padding2[0x2];
    struct UnkStruct_0206F164 *unk6C;
    u32 unk70;
    u8 unk74;
    u8 unk75;
    u16 unk76 : 1;
    u16 unk76_2 : 15;
}; // total size = 0x78

struct BagView *BagView_New(u8 heap_id);
u32 BagView_sizeof();
void FUN_0206E30C(struct BagView *bag_view, u8 r1);
void FUN_0206E314(
    struct BagView *bag_view, struct SaveBlock2 *sav2, u8 r2, struct UnkStruct_0206F164 *r3);
void BagView_SetItem(struct BagView *bag_view, struct ItemSlot *slot, u8 pocket, u8 idx);
void FUN_0206E340(struct BagView *bag_view);
void FUN_0206E354(struct BagView *bag_view, u32 r1);
void FUN_0206E358(struct BagView *bag_view, u8 r1);
void FUN_0206E360(struct BagView *bag_view, u16 r1);
u16 FUN_0206E37C(struct BagView *bag_view);
u16 FUN_0206E384(struct BagView *bag_view);
u8 FUN_0206E38C(struct BagView *bag_view);
u8 FUN_0206E394(struct BagView *bag_view);
u32 FUN_0206E39C(struct SaveBlock2 *sav2);
u32 FUN_0206E3A8(struct SaveBlock2 *sav2);
u32 FUN_0206E3C8(struct SaveBlock2 *sav2);
u32 FUN_0206E3D8(struct SaveBlock2 *sav2);
u32 FUN_0206E3E8(struct SaveBlock2 *sav2);
BOOL FUN_0206E3F8(struct SaveBlock2 *sav2, struct String *dest, u32 item_id, u32 heap_id);
void FUN_0206E51C(struct PlayerData *playerData, struct String *dest, u32 r2, u32 r3, u32 heap_id);

#endif // POKEDIAMOND_BAG_VIEW_H
