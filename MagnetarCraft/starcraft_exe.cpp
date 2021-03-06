#include "starcraft_exe_types.h"

#define DECL_FUNC(decl, func, offset) decl = (decltype(func)) offset;

DECL_FUNC(void (__cdecl*type_info_destructor_dealloc)(void *location), type_info_destructor_dealloc, 0x401000);
DECL_FUNC(int(*HiddenCtrl_Destructor)(), HiddenCtrl_Destructor, 0x401090);
void somePlayImageCrapThatCrashes(char a1, char a2, CImage *a3, CSprite *edi0, int a4) {
    int address = 0x4010e0;
    __asm {
        mov al, a1
        mov cl, a2
        mov ebx, a3
        mov edi, edi0
        push dword ptr a4
        call address
    }
}
int hideImage(CImage *a1) {
    int address = 0x401100;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(__int16 (__thiscall*showImage)(CImage *this_), showImage, 0x401120);
CUnit *setAllOverlayDirectionsGeneric(CUnit *result, unsigned int a2, unsigned __int8 a3) {
    int address = 0x401140;
    CUnit * result_;
    __asm {
        mov eax, result
        mov edx, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(BOOL (__stdcall*unitIsOwnerByCurrentPlayer)(CUnit *a1), unitIsOwnerByCurrentPlayer, 0x401170);
int unitSetRetreatPoint(unsigned __int8 a1, CUnit *a2) {
    int address = 0x4011a0;
    int result_;
    __asm {
        mov al, a1
        mov edx, a2
        call address
        mov result_, eax
    }
    return result_;
}
BOOL UnitIsGoliath(CUnit *a1) {
    int address = 0x4011f0;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
BOOL UnitCanCastSpells(CUnit *a1) {
    int address = 0x401210;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
BOOL isDistanceGreaterThanHaltDistance(int a1, CUnit *a2, unsigned int a3, int a4) {
    int address = 0x401240;
    BOOL result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        push dword ptr a4
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*Game_Hdr_Node_Destructor)(), Game_Hdr_Node_Destructor, 0x401270);
DECL_FUNC(int(*Saved_Game_Node_Destructor)(), Saved_Game_Node_Destructor, 0x4012c0);
DECL_FUNC(int (__stdcall*sub_401310)(int), sub_401310, 0x401310);
char RemoveUnitAirPathing(char a1, CUnit *a2) {
    int address = 0x401360;
    char result_;
    __asm {
        mov al, a1
        mov ecx, a2
        call address
        mov result_, al
    }
    return result_;
}
signed int SetUnitEnergy(CUnit *a1, unsigned __int8 a2) {
    int address = 0x4013b0;
    signed result_;
    __asm {
        mov edi, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(signed int (__thiscall*GetMaximumHP)(CUnit *this_), GetMaximumHP, 0x401400);
BOOL UnitIsInstallationTrap(CUnit *a1) {
    int address = 0x401430;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
BOOL UnitIsFighter(CUnit *a1) {
    int address = 0x401450;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
BOOL BWFXN_UnitIsCarrier(CUnit *a1) {
    int address = 0x401470;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
BOOL BWFXN_UnitIsReaver(CUnit *a1) {
    int address = 0x401490;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
BOOL UnitHasFighters(CUnit *a1) {
    int address = 0x4014b0;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
int UnitGetWorkerPowerup(CUnit *a1) {
    int address = 0x4014e0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__thiscall*UnitIsTrainingOrMorphing)(CUnit *this_), UnitIsTrainingOrMorphing, 0x401500);
BOOL UnitIsGhost(CUnit *a1) {
    int address = 0x401570;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*Streamed_SFX_Cleanup)(), Streamed_SFX_Cleanup, 0x4015a0);
DECL_FUNC(int(*Streamed_SFX_FullDestructor)(), Streamed_SFX_FullDestructor, 0x4015f0);
DECL_FUNC(int(*Provider_Destructor)(), Provider_Destructor, 0x4016a0);
DECL_FUNC(int(*_ID_Destructor)(), _ID_Destructor, 0x4016f0);
DECL_FUNC(int (__stdcall*vector_insert)(int, int), vector_insert, 0x4017b0);
DECL_FUNC(int(*GameNode_Destructor)(), GameNode_Destructor, 0x401860);
DECL_FUNC(int(*SaveGame_Destructor)(), SaveGame_Destructor, 0x401920);
void _list_unlink(int a1) {
    int address = 0x401970;
    __asm {
        mov ebx, a1
        call address
    }
}
DECL_FUNC(int(*Device_Destructor)(), Device_Destructor, 0x401a10);
DECL_FUNC(int(*PhoneNumber_Destructor)(), PhoneNumber_Destructor, 0x401a60);
DECL_FUNC(int(*DrawText_Destructor)(), DrawText_Destructor, 0x401b20);
DECL_FUNC(int(*Template_Destructor)(), Template_Destructor, 0x401be0);
DECL_FUNC(int(*vector_delete)(), vector_delete, 0x401ca0);
DECL_FUNC(int (__fastcall*unitIsActiveResourceDepot)(CUnit *a1, CUnit *a2), unitIsActiveResourceDepot, 0x401cf0);
BOOL unitIsSubunit(CUnit *a1) {
    int address = 0x401d40;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
BOOL unitCanSeeCloakedTarget(CUnit *a1, CUnit *a2) {
    int address = 0x401d60;
    BOOL result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
void UnitClearOrderTarget(CUnit *a1) {
    int address = 0x401da0;
    __asm {
        mov eax, a1
        call address
    }
}
int isUnitMovableAndAtDestination(CUnit *a1) {
    int address = 0x401dc0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
int getImageAttackFrame(int result, CSprite *a2, int a3, unsigned __int8 a4) {
    int address = 0x401df0;
    int result_;
    __asm {
        mov eax, result
        mov ecx, a2
        mov edi, a3
        push dword ptr a4
        call address
        mov result_, eax
    }
    return result_;
}
int setSpriteMainImgOffset(CSprite *a1, char a2, char a3) {
    int address = 0x401e40;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(BOOL (__fastcall*isQueueSlotActive)(CUnit *a1, int a2), isQueueSlotActive, 0x401e70);
int updateUnitTransportData(CUnit *a1) {
    int address = 0x401ea0;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*fixTargetLocation)(), fixTargetLocation, 0x401fa0);
__int16 getAbsoluteUnitBounds(CUnit *a1, int a2) {
    int address = 0x402020;
    __int16 result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, ax
    }
    return result_;
}
DECL_FUNC(int(*getAbsoluteUnitBoundsFromTarget)(), getAbsoluteUnitBoundsFromTarget, 0x402070);
BOOL UnitIsFrozenOrInAir(CUnit *a1) {
    int address = 0x4020b0;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*fixTargetPoint)(), fixTargetPoint, 0x4020f0);
DECL_FUNC(int (__stdcall*getUnitDistanceToHalt)(int), getUnitDistanceToHalt, 0x402140);
DECL_FUNC(int(*isUnitPositions2Equal)(), isUnitPositions2Equal, 0x402160);
DECL_FUNC(signed int (__fastcall*CC_CanBeInfested)(CUnit *a1, CUnit *a2), CC_CanBeInfested, 0x402210);
DECL_FUNC(int(*unitHPbetween33_66_percent)(), unitHPbetween33_66_percent, 0x402270);
DECL_FUNC(int(*unitHPbelow33_percent)(), unitHPbelow33_percent, 0x4022c0);
BOOL unitIsPerformingUnbreakableCode(CUnit *a1) {
    int address = 0x402310;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
void TriggerNode_Destructor(TriggerList *tirgger_list) {
    int address = 0x402330;
    __asm {
        mov ebx, tirgger_list
        call address
    }
}
DECL_FUNC(int (__stdcall*IsTargNotVisibleCB)(int, int), IsTargNotVisibleCB, 0x402380);
DECL_FUNC(int (__stdcall*isTargVisibleCB)(int, int), isTargVisibleCB, 0x402440);
DECL_FUNC(int (__stdcall*getVisibilityMaskFromPositionAndSize)(__int16, __int16, __int16), getVisibilityMaskFromPositionAndSize, 0x402500);
DECL_FUNC(int (__stdcall*getVisibilityMaskFromPositionAndSize_0)(__int16, __int16, __int16), getVisibilityMaskFromPositionAndSize_0, 0x402570);
DECL_FUNC(int(*BNetMessage_Destructor)(), BNetMessage_Destructor, 0x4025e0);
int setFlagHoldPosition(CUnit *a1) {
    int address = 0x4026a0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
int UnitGetShieldAndHitpoints(CUnit *a1) {
    int address = 0x4026d0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
int UnitGetMaxShieldAndHitpoints(CUnit *a1) {
    int address = 0x402710;
    int result_;
    __asm {
        mov edx, a1
        call address
        mov result_, eax
    }
    return result_;
}
BOOL BWFXN_UnitIsQueen(CUnit *a1) {
    int address = 0x402750;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*allTilesInRectAreVisibleFor)(__int16, char), allTilesInRectAreVisibleFor, 0x402770);
DECL_FUNC(int (__stdcall*allTilesInRectAreExploredFor)(__int16, char), allTilesInRectAreExploredFor, 0x4027f0);
DECL_FUNC(int (__stdcall*FileDownloadSession_Destructor)(int, int), FileDownloadSession_Destructor, 0x402870);
DECL_FUNC(int(*Ban_Destructor)(), Ban_Destructor, 0x4028e0);
DECL_FUNC(int(*_unk_Destructor_20)(), _unk_Destructor_20, 0x402930);
int sub_4029B0(CSprite *a1, int a2, int a3) {
    int address = 0x4029b0;
    int result_;
    __asm {
        mov eax, a1
        mov edx, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
int sub_402A00(int a1, int a2, CUnit *a3) {
    int address = 0x402a00;
    int result_;
    __asm {
        mov ebx, a1
        mov edi, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*isUnitBurrowed)(), isUnitBurrowed, 0x402a70);
int sub_402A90(CUnit *a1) {
    int address = 0x402a90;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
int getDoubleUnitBoundingBoxMashup(int result, CUnit *a2, CUnit *a3, __int16 a4, __int16 a5) {
    int address = 0x402b10;
    int result_;
    __asm {
        mov eax, result
        mov edx, a2
        mov ecx, a3
        mov di, a4
        push dword ptr a5
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_402BA0)(), sub_402BA0, 0x402ba0);
BOOL isUnitAtWPPosOrFacingDirection(CUnit *a1) {
    int address = 0x402be0;
    BOOL result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
BOOL Unit_IsZergMainBuilding(CUnit *a1) {
    int address = 0x402c20;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
int getHPGainForRepair(CUnit *a1) {
    int address = 0x402c40;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*unittracker_ctor)(), unittracker_ctor, 0x402c60);
DECL_FUNC(int (__stdcall*packDetailFinderData)(int), packDetailFinderData, 0x402d10);
DECL_FUNC(int(*unpackDetailFinderData)(), unpackDetailFinderData, 0x402fb0);
DECL_FUNC(int(*AITrack_Container_Erase)(), AITrack_Container_Erase, 0x403030);
DECL_FUNC(int(*SaveGame_Destructor_0)(), SaveGame_Destructor_0, 0x403080);
char toggleUnitPathingProperties(CUnit *a1) {
    int address = 0x4030d0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*resetAIThreadData)(), resetAIThreadData, 0x403130);
DECL_FUNC(int(*packAIThreadData)(), packAIThreadData, 0x403230);
DECL_FUNC(int(*unpackAIThreadData)(), unpackAIThreadData, 0x403310);
DECL_FUNC(int(*AI_Stop)(), AI_Stop, 0x403380);
DECL_FUNC(int(*isUnitUpgradeAvailable)(), isUnitUpgradeAvailable, 0x4033d0);
int unitIsCleanDetector(CUnit *a1) {
    int address = 0x403430;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*packAICaptainData)(), packAICaptainData, 0x403480);
DECL_FUNC(int(*unpackAICaptainData)(), unpackAICaptainData, 0x4035b0);
DECL_FUNC(int(*resetPathingData)(), resetPathingData, 0x403650);
DECL_FUNC(int(*packPathingData)(), packPathingData, 0x4036d0);
DECL_FUNC(int (__stdcall*unpackAllPathingData)(int), unpackAllPathingData, 0x403780);
DECL_FUNC(int(*packTownMgr_03_Unit_Data)(), packTownMgr_03_Unit_Data, 0x403ae0);
DECL_FUNC(int(*unpackTownMgr_03_Unit_Data)(), unpackTownMgr_03_Unit_Data, 0x403cb0);
DECL_FUNC(int(*sub_403DB0)(), sub_403DB0, 0x403db0);
DECL_FUNC(int (__stdcall*packTownMgr_01_Data)(int), packTownMgr_01_Data, 0x403e50);
DECL_FUNC(int(*unpackTownMgr_01_Data)(), unpackTownMgr_01_Data, 0x4041f0);
DECL_FUNC(int(*sub_404280)(), sub_404280, 0x404280);
DECL_FUNC(int(*packTownMgr_02_Data)(), packTownMgr_02_Data, 0x404350);
DECL_FUNC(int(*unpackTownMgr_02_Data)(), unpackTownMgr_02_Data, 0x404410);
DECL_FUNC(int(*removeAIWorkerController)(), removeAIWorkerController, 0x404470);
DECL_FUNC(int(*GetNewAITask)(), GetNewAITask, 0x4044c0);
DECL_FUNC(int(*RemoveAITaskController)(), RemoveAITaskController, 0x404500);
DECL_FUNC(int(*sub_404550)(), sub_404550, 0x404550);
DECL_FUNC(int(*packTownMgr_03_Data)(), packTownMgr_03_Data, 0x404620);
DECL_FUNC(int(*unpackTownMgr_03_Data)(), unpackTownMgr_03_Data, 0x4046d0);
DECL_FUNC(int(*contourcalc_upHeap)(), contourcalc_upHeap, 0x404750);
DECL_FUNC(int(*contourcalc_downHeap)(), contourcalc_downHeap, 0x404790);
int getDoubleUnitBoundingBoxMashup_0(int result, CUnit *a2, CUnit *a3) {
    int address = 0x404810;
    int result_;
    __asm {
        mov eax, result
        mov edx, a2
        mov ecx, a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*pathcalc_downHeap)(), pathcalc_downHeap, 0x404920);
DECL_FUNC(int(*sub_4049A0)(), sub_4049A0, 0x4049a0);
DECL_FUNC(int (__stdcall*setRect16)(int), setRect16, 0x4049d0);
DECL_FUNC(int(*BltMask_Destructor)(), BltMask_Destructor, 0x404a10);
DECL_FUNC(int(*DlgGrp_Destructor)(), DlgGrp_Destructor, 0x404ad0);
ChunkListItem *sub_404B20(ChunkNode *a1) {
    int address = 0x404b20;
    ChunkListItem * result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
void ChunkNode_Destructor(ChunkNode *a1) {
    int address = 0x404b70;
    __asm {
        mov ebx, a1
        call address
    }
}
int sub_404BC0(int a1, ChunkNode *a2) {
    int address = 0x404bc0;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_404BFA)(), sub_404BFA, 0x404bfa);
DECL_FUNC(int(*sub_404C1E)(), sub_404C1E, 0x404c1e);
DECL_FUNC(int(*__RTC_Initialize)(), __RTC_Initialize, 0x405923);
DECL_FUNC(void (__cdecl*__RTC_Terminate)(), __RTC_Terminate, 0x405967);
DECL_FUNC(int(*sub_405D74)(), sub_405D74, 0x405d74);
DECL_FUNC(void __noreturn(*sub_406504)(), sub_406504, 0x406504);
DECL_FUNC(int(*sub_40651C)(), sub_40651C, 0x40651c);
DECL_FUNC(int(*renderTerrainGRPToCache)(), renderTerrainGRPToCache, 0x40aae0);
char imageRenderFxn0_0(int a1, int a2, int a3, int a4, tagRECT *a5, int a6) {
    int address = 0x40abbe;
    char result_;
    __asm {
        mov edx, a1
        mov ecx, a2
        mov ebp, a3
        push dword ptr a6
        push dword ptr a5
        push dword ptr a4
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_40AD04)(int, int, int), sub_40AD04, 0x40ad04);
char sub_40AE63(int a1, int a2, int a3, grpFrame *a4, int a5, int a6) {
    int address = 0x40ae63;
    char result_;
    __asm {
        mov edx, a1
        mov ecx, a2
        mov ebp, a3
        push dword ptr a6
        push dword ptr a5
        push dword ptr a4
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_40AFD5)(int, int, int), sub_40AFD5, 0x40afd5);
DECL_FUNC(int (__stdcall*imageRenderFxn3_0)(int, int, int), imageRenderFxn3_0, 0x40b155);
DECL_FUNC(int (__stdcall*imageRenderFxn8_0)(int, int, int), imageRenderFxn8_0, 0x40b2d3);
DECL_FUNC(int (__stdcall*imageRenderFxn17_0_cntd)(int, int, int), imageRenderFxn17_0_cntd, 0x40b441);
DECL_FUNC(int (__stdcall*imageRenderFxn9_0)(int, int, int), imageRenderFxn9_0, 0x40b596);
DECL_FUNC(int (__stdcall*imageRenderFxn10_0)(int, int, int), imageRenderFxn10_0, 0x40b6f0);
DECL_FUNC(int (__stdcall*imageRenderFxn5_2__1_common)(int, int, int), imageRenderFxn5_2__1_common, 0x40b824);
DECL_FUNC(int (__stdcall*imageRenderFxn3_1)(int, int, int), imageRenderFxn3_1, 0x40b9a9);
DECL_FUNC(int (__stdcall*imageRenderFxn8_1)(int, int, int), imageRenderFxn8_1, 0x40bb2e);
DECL_FUNC(int (__stdcall*imageRenderFxn9_1)(int, int, int), imageRenderFxn9_1, 0x40bca3);
DECL_FUNC(int (__stdcall*imageRenderFxn17_1_cntd)(int, int, int), imageRenderFxn17_1_cntd, 0x40be04);
DECL_FUNC(int (__stdcall*imageRenderFxn0_1)(int, int, int), imageRenderFxn0_1, 0x40bf60);
DECL_FUNC(int (__stdcall*imageRenderFxn10_1)(int, int, int), imageRenderFxn10_1, 0x40c0ae);
DECL_FUNC(int(*BlitToBitmap)(), BlitToBitmap, 0x40c200);
DECL_FUNC(int(*sub_40C214)(), sub_40C214, 0x40c214);
DECL_FUNC(int(*BWFXN_blitMapTiles)(), BWFXN_blitMapTiles, 0x40c253);
DECL_FUNC(int (__stdcall*BlitTerrainCacheToGameBitmap)(int, int), BlitTerrainCacheToGameBitmap, 0x40c2bd);
DECL_FUNC(int (__stdcall*getDistancePrecise)(int, int), getDistancePrecise, 0x40c300);
DECL_FUNC(int (__stdcall*GetApproxDistance)(int, int), GetApproxDistance, 0x40c360);
DECL_FUNC(int(*drawMinitileImageData)(), drawMinitileImageData, 0x40c3b0);
DECL_FUNC(int (__stdcall*sub_40C4D2)(int, int), sub_40C4D2, 0x40c4d2);
DECL_FUNC(int(*type_info__szName)(), type_info__szName, 0x40c5bf);
DECL_FUNC(void __noreturn(*sub_40CCA6)(), sub_40CCA6, 0x40cca6);
DECL_FUNC(int (__cdecl*__flushall)(), __flushall, 0x40df5a);
DECL_FUNC(int(*sub_40FFCB)(), sub_40FFCB, 0x40ffcb);
DECL_FUNC(void *(__stdcall*SMemAlloc)(int amount, char *logfilename, int logline, int defaultValue), SMemAlloc, 0x41006a);
DECL_FUNC(BOOL (__stdcall*SMemFree)(void *location, char *logfilename, int logline, char defaultValue), SMemFree, 0x410070);
DECL_FUNC(BOOL (__stdcall*SRegLoadValue)(char *keyname, char *valuename, BYTE flags, int *value), SRegLoadValue, 0x410076);
DECL_FUNC(int (__stdcall*SStrNCat)(char *base, char *new_, int max_length), SStrNCat, 0x41007c);
DECL_FUNC(size_t(*SStrVPrintf)(char *dest, size_t size, const char *format, ...), SStrVPrintf, 0x410082);
DECL_FUNC(char *(__stdcall*SStrChrR)(const char *string, char c), SStrChrR, 0x410088);
DECL_FUNC(int (__stdcall*SStrCopy)(char *dest, const char *source, size_t size), SStrCopy, 0x41008e);
DECL_FUNC(int (__stdcall*SStrCmpI)(const char *string1, const char *string2, size_t size), SStrCmpI, 0x410094);
DECL_FUNC(char *(__stdcall*SStrChr)(const char *string, char c), SStrChr, 0x41009a);
DECL_FUNC(int (__stdcall*SStrLen)(const char *string), SStrLen, 0x4100a0);
DECL_FUNC(int (__stdcall*SNetSendReplayPath)(int a1, int a2, char *replayPath), SNetSendReplayPath, 0x4100a6);
DECL_FUNC(BOOL (__stdcall*SRegLoadString)(char *keyname, char *valuename, BYTE flags, char *buffer, size_t buffersize), SRegLoadString, 0x4100ac);
DECL_FUNC(BOOL (__stdcall*SFileOpenArchive)(char *archivename, DWORD dwPriority, DWORD dwFlags, HANDLE handle), SFileOpenArchive, 0x4100b2);
DECL_FUNC(BOOL (__stdcall*SFileCloseFile)(HANDLE hFile), SFileCloseFile, 0x4100b8);
DECL_FUNC(BOOL (__stdcall*SFileCloseArchive)(HANDLE hArchive), SFileCloseArchive, 0x4100be);
DECL_FUNC(BOOL (__stdcall*SFileOpenFileEx)(HANDLE hMpq, const char *szFileName, DWORD dwSearchScope, HANDLE *phFile), SFileOpenFileEx, 0x4100c4);
DECL_FUNC(void (__stdcall*SFileSetLocale)(LCID lcLocale), SFileSetLocale, 0x4100ca);
DECL_FUNC(DWORD (__stdcall*SStrHash)(const char *string, DWORD flags, DWORD Seed), SStrHash, 0x4100d0);
DECL_FUNC(int (__stdcall*SStrCmp)(const char *string1, const char *string2, size_t size), SStrCmp, 0x4100d6);
DECL_FUNC(BOOL (__stdcall*SNetGetProviderCaps)(char *caps), SNetGetProviderCaps, 0x4100dc);
DECL_FUNC(BOOL (__stdcall*storm_313)(int maxiterations, int lpSurface, int width, int height, int width2, int pitch, int a7, DWORD rop), storm_313, 0x4100e2);
DECL_FUNC(BOOL (__stdcall*SVidPlayContinueSingle)(HANDLE video, int a2, int a3), SVidPlayContinueSingle, 0x4100e8);
DECL_FUNC(BOOL (__stdcall*storm_458)(HANDLE video), storm_458, 0x4100ee);
DECL_FUNC(BOOL (__stdcall*storm_454)(char *filename, int arg4, int a3, int a4, int a5, int a6, HANDLE video), storm_454, 0x4100f4);
DECL_FUNC(DWORD (__cdecl*SErrGetLastError)(), SErrGetLastError, 0x4100fa);
DECL_FUNC(HANDLE (__stdcall*SNetRegisterEventHandler)(int type, void (__stdcall *event)(s_evt *evt)), SNetRegisterEventHandler, 0x410100);
DECL_FUNC(BOOL (__stdcall*SNetEnumGamesEx)(int a1, int a2, int (__fastcall *callback)(DWORD, DWORD, DWORD), int *hintnextcall), SNetEnumGamesEx, 0x410106);
DECL_FUNC(BOOL (__stdcall*SNetCreateGame)(char *Source, char *a2, char *a3, int a4, int a5, int a6, char *a7, char *a8, int *playerid), SNetCreateGame, 0x41010c);
DECL_FUNC(BOOL (__cdecl*SNetDestroy)(), SNetDestroy, 0x410112);
DECL_FUNC(BOOL (__stdcall*SNetCreateLadderGame)(char *gameName, char *gamePassword, char *gameDataString, int gameType, int a5, int a6, char *GameTemplateData, int GameTemplateSize, int playerCount, char *playerName, char *a11, int *playerID), SNetCreateLadderGame, 0x410118);
DECL_FUNC(BOOL (__stdcall*SNetJoinGame)(unsigned int a1, char *gameName, char *gamePassword, char *playerName, char *userStats, int *playerid), SNetJoinGame, 0x41011e);
DECL_FUNC(BOOL (__stdcall*SNetInitializeProvider)(DWORD providerName, int *providerData, int *userData, int *a4, int *a5), SNetInitializeProvider, 0x410124);
DECL_FUNC(BOOL (__stdcall*SNetPerformUpgrade)(DWORD *upgradestatus), SNetPerformUpgrade, 0x41012a);
DECL_FUNC(BOOL (__stdcall*SFileGetFileName)(HANDLE hFile, char *buffer, int length), SFileGetFileName, 0x410130);
DECL_FUNC(BOOL (__stdcall*SFileSetIoErrorMode)(int mode, void *callback), SFileSetIoErrorMode, 0x410136);
DECL_FUNC(BOOL (__stdcall*SFileOpenFile)(char *filename, HANDLE handle), SFileOpenFile, 0x41013c);
DECL_FUNC(LONG (__stdcall*SFileGetFileSize)(HANDLE hFile, LPDWORD lpFileSizeHigh), SFileGetFileSize, 0x410142);
DECL_FUNC(BOOL (__stdcall*SFileReadFile)(HANDLE hFile, void *buffer, DWORD nNumberOfBytesToRead, int *read, LONG lpDistanceToMoveHigh), SFileReadFile, 0x410148);
DECL_FUNC(HANDLE (__stdcall*SBmpAllocLoadImage)(const char *fileName, int *palette, void **buffer, int *width, int *height, int unused6, int unused7, void *(__stdcall *allocFunction)(DWORD)), SBmpAllocLoadImage, 0x41014e);
DECL_FUNC(BOOL (__stdcall*SBmpLoadImage)(const char *fileName, int size, void *buffer, int buffersize, int width, int height, int depth), SBmpLoadImage, 0x410154);
DECL_FUNC(int (__stdcall*SNetLeagueLogout)(char *bnetName), SNetLeagueLogout, 0x41015a);
DECL_FUNC(BOOL (__stdcall*SDrawCaptureScreen)(char *source), SDrawCaptureScreen, 0x410160);
DECL_FUNC(BOOL (__stdcall*STrans442)(int a1, int a2, int a3, char *a4, size_t a5), STrans442, 0x410166);
DECL_FUNC(void (__stdcall*SMemCopy)(void *dest, const void *source, size_t size), SMemCopy, 0x41016c);
DECL_FUNC(void (__stdcall*SErrSetLastError)(DWORD dwErrCode), SErrSetLastError, 0x410172);
DECL_FUNC(int (__stdcall*SMemZero)(void *location, size_t length), SMemZero, 0x410178);
DECL_FUNC(BOOL (__stdcall*SNetGetNumPlayers)(int *firstplayerid, int *lastplayerid, int *activeplayers), SNetGetNumPlayers, 0x41017e);
DECL_FUNC(BOOL (__stdcall*SNetGetPlayerName)(int playerid, char *buffer, size_t buffersize), SNetGetPlayerName, 0x410184);
DECL_FUNC(BOOL (__stdcall*SNetSetGameMode)(DWORD modeFlags, char a2), SNetSetGameMode, 0x41018a);
DECL_FUNC(BOOL (__stdcall*SNetLeaveGame)(int type), SNetLeaveGame, 0x410190);
DECL_FUNC(BOOL (__stdcall*SNetReportGameResult)(unsigned int a1, int size, int a3, int a4, int a5), SNetReportGameResult, 0x410196);
DECL_FUNC(BOOL (__stdcall*SNet144)(char *buffer), SNet144, 0x41019c);
DECL_FUNC(BOOL (__stdcall*SNetGetGameInfo)(int type, char *src, unsigned int length, int *byteswritten), SNetGetGameInfo, 0x4101a2);
DECL_FUNC(BOOL (__stdcall*SNetDropPlayer)(int playerid, DWORD flags), SNetDropPlayer, 0x4101a8);
DECL_FUNC(BOOL (__stdcall*SFileLoadFileEx)(void *hArchive, char *filename, int a3, int a4, int a5, DWORD searchScope, struct _OVERLAPPED *lpOverlapped), SFileLoadFileEx, 0x4101ae);
DECL_FUNC(BOOL (__stdcall*SFileUnloadFile)(HANDLE hFile), SFileUnloadFile, 0x4101b4);
DECL_FUNC(BOOL (__stdcall*SBmpDecodeImage)(int type, signed int *srcbuffer, unsigned int a3, int a4, void *dstbuffer, int size, int a7, int a8, int a9), SBmpDecodeImage, 0x4101ba);
DECL_FUNC(BOOL (__stdcall*SFileDdaInitialize)(HANDLE directsound), SFileDdaInitialize, 0x4101c0);
DECL_FUNC(BOOL (__stdcall*SVidInitialize)(HANDLE video), SVidInitialize, 0x4101c6);
DECL_FUNC(BOOL (__stdcall*SFileDdaBeginEx)(HANDLE directsound, DWORD flags, DWORD mask, unsigned __int32 lDistanceToMove, signed __int32 volume, signed int a6, int a7), SFileDdaBeginEx, 0x4101cc);
DECL_FUNC(BOOL (__cdecl*SVidDestroy)(), SVidDestroy, 0x4101d2);
DECL_FUNC(BOOL (__stdcall*SFileDdaEnd)(HANDLE directsound), SFileDdaEnd, 0x4101d8);
DECL_FUNC(BOOL (__cdecl*SFileDdaDestroy)(), SFileDdaDestroy, 0x4101de);
DECL_FUNC(BOOL (__stdcall*SFileDdaGetPos)(HANDLE directsound, int a2, int a3), SFileDdaGetPos, 0x4101e4);
DECL_FUNC(BOOL (__stdcall*SNetSendMessage)(unsigned int playerID, char *data, unsigned int databytes), SNetSendMessage, 0x4101ea);
DECL_FUNC(BOOL (__stdcall*SNetReceiveMessage)(int *senderplayerid, BYTE **data, int *databytes), SNetReceiveMessage, 0x4101f0);
DECL_FUNC(BOOL (__stdcall*SErrGetErrorStr)(DWORD dwErrCode, char *buffer, size_t bufferchars), SErrGetErrorStr, 0x4101f6);
DECL_FUNC(BOOL (__stdcall*SNetReceiveTurns)(int a1, int arraysize, char **arraydata, unsigned int *arraydatabytes, DWORD *arrayplayerstatus), SNetReceiveTurns, 0x4101fc);
DECL_FUNC(BOOL (__stdcall*SNetSendTurn)(char *data, unsigned int databytes), SNetSendTurn, 0x410202);
DECL_FUNC(BOOL (__stdcall*SNetEnumProviders)(int (__stdcall *callback)(DWORD, DWORD, DWORD)), SNetEnumProviders, 0x410208);
DECL_FUNC(int (__stdcall*SNetGetLeaguePlayerName)(int *curPlayerID, size_t nameSize), SNetGetLeaguePlayerName, 0x41020e);
DECL_FUNC(int (__stdcall*SNetGetLeagueName)(int leagueID), SNetGetLeagueName, 0x410214);
DECL_FUNC(BOOL (__stdcall*SNetInitializeDevice)(int a1, int a2, int a3, int a4, int *a5), SNetInitializeDevice, 0x41021a);
DECL_FUNC(BOOL (__stdcall*SNetEnumDevices)(int (__stdcall *callback)(DWORD, DWORD, DWORD, DWORD), int mincaps), SNetEnumDevices, 0x410220);
DECL_FUNC(BOOL (__stdcall*SRegSaveString)(char *keyname, char *valuename, BYTE flags, char *string), SRegSaveString, 0x410226);
DECL_FUNC(BOOL (__stdcall*SDlgSetBitmapE)(HWND hWnd, int a2, char *src, int mask1, int flags, int a6, int a7, int width, int a9, int mask2), SDlgSetBitmapE, 0x41022c);
DECL_FUNC(HANDLE (__stdcall*SDlgDialogBoxIndirectParam)(HMODULE hModule, LPCSTR lpName, HWND hWndParent, LPVOID lpParam, LPARAM lParam), SDlgDialogBoxIndirectParam, 0x410232);
DECL_FUNC(int (__stdcall*Ordinal224)(int a1), Ordinal224, 0x410238);
DECL_FUNC(HWND (__stdcall*SDrawGetFrameWindow)(HWND sdraw_framewindow), SDrawGetFrameWindow, 0x41023e);
DECL_FUNC(BOOL (__stdcall*SDrawUpdatePalette)(unsigned int firstentry, unsigned int numentries, PALETTEENTRY *pPalEntries, int a4), SDrawUpdatePalette, 0x410244);
DECL_FUNC(int (__stdcall*SNetSelectGame)(int a1, int a2, int a3, int a4, int a5, int *playerid), SNetSelectGame, 0x41024a);
DECL_FUNC(BOOL (__stdcall*SRegLoadData)(char *keyname, char *valuename, BYTE flags, LPBYTE lpData, int size, LPDWORD lpcbData), SRegLoadData, 0x410250);
DECL_FUNC(BOOL (__stdcall*SRegSaveData)(char *keyname, char *valuename, int size, BYTE *lpData, DWORD cbData), SRegSaveData, 0x410256);
DECL_FUNC(BOOL (__stdcall*SFileGetFileArchive)(HANDLE hFile, HANDLE archive), SFileGetFileArchive, 0x41025c);
DECL_FUNC(BOOL (__stdcall*SFileGetArchiveName)(HANDLE hArchive, char *name, int length), SFileGetArchiveName, 0x410262);
DECL_FUNC(BOOL (__stdcall*SFileDdaSetVolume)(HANDLE directsound, signed int bigvolume, signed int volume), SFileDdaSetVolume, 0x410268);
DECL_FUNC(BOOL (__stdcall*SNet137)(DWORD flags), SNet137, 0x41026e);
DECL_FUNC(BOOL (__stdcall*SNetGetTurnsInTransit)(int *turns), SNetGetTurnsInTransit, 0x410274);
DECL_FUNC(BOOL (__stdcall*SRegSaveValue)(char *keyname, char *valuename, BYTE flags, DWORD result), SRegSaveValue, 0x41027a);
DECL_FUNC(int (__stdcall*SNetSendServerChatCommand)(const char *command), SNetSendServerChatCommand, 0x410280);
DECL_FUNC(int (__stdcall*SNetSendLeagueCommand)(char *cmd, void *callback), SNetSendLeagueCommand, 0x410286);
DECL_FUNC(int (__stdcall*SBigPowMod)(void *buffer1, void *buffer2, int a3, int a4), SBigPowMod, 0x41028c);
DECL_FUNC(int (__stdcall*SBigDel)(void *buffer), SBigDel, 0x410292);
DECL_FUNC(int (__stdcall*SBigToBinaryBuffer)(void *buffer, int length, int a3, int a4), SBigToBinaryBuffer, 0x410298);
DECL_FUNC(char *(__stdcall*SStrUpper)(char *string), SStrUpper, 0x41029e);
DECL_FUNC(int (__stdcall*SMemFill)(void *location, size_t length, char fillWith), SMemFill, 0x4102a4);
DECL_FUNC(int (__stdcall*SMemCmp)(void *location1, void *location2, size_t size), SMemCmp, 0x4102aa);
DECL_FUNC(int (__stdcall*SBigFromBinary)(void *buffer, const void *str, size_t size), SBigFromBinary, 0x4102b0);
DECL_FUNC(int (__stdcall*SBigNew)(void **buffer), SBigNew, 0x4102b6);
DECL_FUNC(BOOL (__stdcall*SRegDeleteValue)(char *keyname, char *valuename, BYTE flags), SRegDeleteValue, 0x4102bc);
DECL_FUNC(BOOL (__stdcall*SFileLoadFile)(char *filename, void *buffer, int buffersize, int a4, int a5), SFileLoadFile, 0x4102c2);
DECL_FUNC(BOOL (__stdcall*SNetGetPlayerCaps)(char playerid, int *caps), SNetGetPlayerCaps, 0x4102c8);
DECL_FUNC(BOOL (__stdcall*SGdiSelectObject)(HANDLE hObject), SGdiSelectObject, 0x4102ce);
DECL_FUNC(HGDIOBJ (__stdcall*SDlgDefDialogProc)(HWND hDlg, signed int DlgType, HDC textLabel, HWND hWnd), SDlgDefDialogProc, 0x4102d4);
DECL_FUNC(BOOL (__stdcall*SDlgEndDialog)(HWND hDlg, HANDLE nResult), SDlgEndDialog, 0x4102da);
DECL_FUNC(BOOL (__stdcall*SGdiExtTextOut)(int a1, int a2, int a3, int a4, unsigned int a8, signed int a6, signed int a7, const char *string, unsigned int arg20), SGdiExtTextOut, 0x4102e0);
DECL_FUNC(BOOL (__stdcall*SGdiSetPitch)(int pitch), SGdiSetPitch, 0x4102e6);
DECL_FUNC(BOOL (__stdcall*SGdiDeleteObject)(HANDLE handle), SGdiDeleteObject, 0x4102ec);
DECL_FUNC(BOOL (__stdcall*SDlgSetControlBitmaps)(HWND parentwindow, int *id, int a3, char *buffer2, char *buffer, int flags, int mask), SDlgSetControlBitmaps, 0x4102f2);
DECL_FUNC(BOOL (__stdcall*SBltROP3Clipped)(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10), SBltROP3Clipped, 0x4102f8);
DECL_FUNC(BOOL (__stdcall*SGdiImportFont)(HGDIOBJ handle, HANDLE *windowsfont), SGdiImportFont, 0x4102fe);
DECL_FUNC(BOOL (__stdcall*Ordinal393)(char *string, int, int), Ordinal393, 0x410304);
DECL_FUNC(BOOL (__stdcall*SDlgBltToWindowE)(HWND hWnd, HRGN a2, char *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10), SDlgBltToWindowE, 0x41030a);
DECL_FUNC(BOOL (__stdcall*STransBlt)(int handle, int a2, int a3, int a4, int a5), STransBlt, 0x410310);
DECL_FUNC(BOOL (__stdcall*STransDelete)(int handle), STransDelete, 0x410316);
DECL_FUNC(BOOL (__stdcall*STransCreateE)(int a1, int a2, int a3, int bpp, int a5, int bufferSize, int a7), STransCreateE, 0x41031c);
DECL_FUNC(int(*scSpecialChars)(), scSpecialChars, 0x410330);
DECL_FUNC(int(*sub_4103A0)(), sub_4103A0, 0x4103a0);
DECL_FUNC(int(*restoreStackPartial)(), restoreStackPartial, 0x4103e7);
DECL_FUNC(int (__cdecl*crc32pk)(int, int, int), crc32pk, 0x410430);
DECL_FUNC(int (__cdecl*pk_explode)(int, int, int, int), pk_explode, 0x410470);
DECL_FUNC(int (__cdecl*pk_Expand)(int), pk_Expand, 0x4105f0);
DECL_FUNC(int (__cdecl*DecodeLit)(int), DecodeLit, 0x4106f0);
DECL_FUNC(int (__cdecl*DecodeDist)(int, int), DecodeDist, 0x4108a0);
DECL_FUNC(int (__cdecl*WasteBits)(int, int), WasteBits, 0x410920);
DECL_FUNC(int (__cdecl*GenDecodeTabs)(int, int, int, int), GenDecodeTabs, 0x4109b0);
DECL_FUNC(int (__cdecl*lmemcpy)(int, int, int), lmemcpy, 0x410af0);
DECL_FUNC(int (__cdecl*pk_implode)(int, int, int, int, int, int), pk_implode, 0x410b30);
DECL_FUNC(int (__cdecl*WriteCmpData)(int), WriteCmpData, 0x410cd0);
DECL_FUNC(int (__cdecl*FindRep)(int, int), FindRep, 0x411050);
DECL_FUNC(int (__cdecl*OutputBits)(int, int, int), OutputBits, 0x411390);
DECL_FUNC(int (__cdecl*lmemset)(int, char, int), lmemset, 0x411420);
DECL_FUNC(int (__cdecl*FlushBuf)(int), FlushBuf, 0x411490);
DECL_FUNC(int (__cdecl*SortBuffer)(int, int, int), SortBuffer, 0x411510);
DECL_FUNC(int (__cdecl*fread_locked)(void *, size_t, size_t, FILE *), fread_locked, 0x4117de);
DECL_FUNC(int (__cdecl*fwrite_locked)(void *, size_t, size_t, FILE *), fwrite_locked, 0x411931);
DECL_FUNC(void (__stdcall*SErrSuppressErrors)(bool suppressErrors), SErrSuppressErrors, 0x411e18);
DECL_FUNC(BOOL (__stdcall*STransIntersectDirtyArray)(int handle, int dirtyarraymask, unsigned __int8 dirtyarray, int sourcemask), STransIntersectDirtyArray, 0x411e1e);
DECL_FUNC(BOOL (__stdcall*SDrawManualInitialize)(HWND hWnd, IDirectDraw *ddInterface, IDirectDrawSurface *primarySurface, int a4, int a5, IDirectDrawSurface *backSurface, IDirectDrawPalette *palette, int a8), SDrawManualInitialize, 0x411e24);
DECL_FUNC(BOOL (__stdcall*STransSetDirtyArrayInfo)(int width, int height, int depth, int bits), STransSetDirtyArrayInfo, 0x411e2a);
DECL_FUNC(BOOL (__cdecl*SDrawRealizePalette)(), SDrawRealizePalette, 0x411e30);
DECL_FUNC(BOOL (__stdcall*STransInvertMask)(int handle, int sourcemask), STransInvertMask, 0x411e36);
DECL_FUNC(BOOL (__stdcall*STransDuplicate)(int handle, int source), STransDuplicate, 0x411e3c);
DECL_FUNC(BOOL (__stdcall*STransCombineMasks)(int handle, int a2, int a3, int a4, int depth, int a6), STransCombineMasks, 0x411e42);
DECL_FUNC(BOOL (__stdcall*SDrawUnlockSurface)(int surfacenumber, void *lpSurface, int a3, RECT *lpRect), SDrawUnlockSurface, 0x411e48);
DECL_FUNC(BOOL (__stdcall*SDrawLockSurface)(int surfacenumber, RECT *lpDestRect, void **lplpSurface, int *lpPitch, int arg_unused), SDrawLockSurface, 0x411e4e);
DECL_FUNC(BOOL (__stdcall*STransBltUsingMask)(int lpSurface, int a2, int pitch, int width, int handle), STransBltUsingMask, 0x411e54);
DECL_FUNC(void (__stdcall*SRgn523)(int handle, RECT *rect, int reserved, int a4), SRgn523, 0x411e5a);
DECL_FUNC(void (__stdcall*SRgn529i)(int handle, int a2, int a3), SRgn529i, 0x411e60);
DECL_FUNC(void (__stdcall*SRgnCreate)(int handle, int reserved), SRgnCreate, 0x411e66);
DECL_FUNC(void (__stdcall*SRgnDelete)(int handle), SRgnDelete, 0x411e6c);
DECL_FUNC(BOOL (__stdcall*SCodeCompile)(char *directives1, char *directives2, char *loopstring, unsigned int maxiterations, unsigned int flags, HANDLE handle), SCodeCompile, 0x411e72);
DECL_FUNC(int (__cdecl*SCodeExecute)(HANDLE handle, int a2), SCodeExecute, 0x411e78);
DECL_FUNC(BOOL (__stdcall*SCodeDelete)(HANDLE handle), SCodeDelete, 0x411e7e);
DECL_FUNC(BOOL (__stdcall*SVidGetSize)(HANDLE video, int width, int height, int zero), SVidGetSize, 0x411e84);
DECL_FUNC(int(*sub_411E90)(), sub_411E90, 0x411e90);
DECL_FUNC(int(*AES_Comp)(), AES_Comp, 0x411ec0);
DECL_FUNC(int (__stdcall*MD5_0)(int, int), MD5_0, 0x4132b0);
DECL_FUNC(int(*MD5_1)(), MD5_1, 0x413380);
signed int CopySectionData(SectionData *a1, void *a2) {
    int address = 0x413440;
    signed result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_413480)(), sub_413480, 0x413480);
DECL_FUNC(signed int (__stdcall*ChunkNode_Constructor)(int a1, int a2, ChunkNode *a3), ChunkNode_Constructor, 0x4134a0);
DECL_FUNC(signed int (__thiscall*sub_413550)(ChkSectionLoader *loader, ChunkNode *a2, int a3, MapChunks *map_chunks), sub_413550, 0x413550);
signed int sub_4135C0(ChkSectionLoader *a1, ChunkNode *a2, int a3) {
    int address = 0x4135c0;
    signed result_;
    __asm {
        mov ecx, a1
        mov edi, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_413610)(), sub_413610, 0x413610);
DECL_FUNC(int(*sub_413640)(), sub_413640, 0x413640);
signed int sub_413670(int a1, ChunkNode *a2, int a3, int (__stdcall *chunk_node_constructor)(_DWORD, _DWORD, ChunkNode *)) {
    int address = 0x413670;
    signed result_;
    __asm {
        mov eax, a1
        mov edi, a2
        push dword ptr chunk_node_constructor
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
signed int ReadChunkNodes(int a1, int a2, ChkSectionLoader *chk_section_loader, int a3, MapChunks *map_chunks) {
    int address = 0x413710;
    signed result_;
    __asm {
        mov eax, a1
        mov edx, a2
        mov ecx, chk_section_loader
        push dword ptr map_chunks
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*mapAuthProc)(int), mapAuthProc, 0x4137f0);
DECL_FUNC(int(*sub_413850)(), sub_413850, 0x413850);
DECL_FUNC(int (__stdcall*spreadsCreep)(int), spreadsCreep, 0x413870);
DECL_FUNC(int(*getMapCreepDataBeginAndEnd)(), getMapCreepDataBeginAndEnd, 0x4138c0);
DECL_FUNC(int(*sub_4138E0)(), sub_4138E0, 0x4138e0);
DECL_FUNC(int(*getMapCreepData2BeginAndEnd)(), getMapCreepData2BeginAndEnd, 0x413900);
DECL_FUNC(int(*sub_413920)(), sub_413920, 0x413920);
DECL_FUNC(int (__stdcall*sub_413940)(int, int), sub_413940, 0x413940);
DECL_FUNC(int(*sub_413980)(), sub_413980, 0x413980);
DECL_FUNC(int(*sub_4139D0)(), sub_4139D0, 0x4139d0);
DECL_FUNC(void (__thiscall*FreeCreepData)(bool exit_code), FreeCreepData, 0x413a10);
DECL_FUNC(signed int (__stdcall*getCreepValue)(TileID *a1, int a2, int a3, TileID *a4, unsigned __int8 a5), getCreepValue, 0x413a70);
DECL_FUNC(signed int (__stdcall*cb)(TileID *a1, int a2, int a3, TileID *a4, int a5), cb, 0x413aa0);
DECL_FUNC(int(*sub_413AE0)(), sub_413AE0, 0x413ae0);
DECL_FUNC(int(*sub_413B20)(), sub_413B20, 0x413b20);
DECL_FUNC(int (__stdcall*iterateDirectionalCreepData)(int, int), iterateDirectionalCreepData, 0x413b30);
DECL_FUNC(int(*sub_413BA0)(), sub_413BA0, 0x413ba0);
DECL_FUNC(int(*sub_413BD0)(), sub_413BD0, 0x413bd0);
DECL_FUNC(int(*sub_413C00)(), sub_413C00, 0x413c00);
DECL_FUNC(int(*sub_413C50)(), sub_413C50, 0x413c50);
DECL_FUNC(int(*nullsub_7)(), nullsub_7, 0x413d00);
DECL_FUNC(int (__stdcall*sub_413D10)(int), sub_413D10, 0x413d10);
DECL_FUNC(int (__stdcall*sub_413DB0)(int, int), sub_413DB0, 0x413db0);
DECL_FUNC(int (__stdcall*sub_413F20)(int), sub_413F20, 0x413f20);
DECL_FUNC(int(*sub_413F50)(), sub_413F50, 0x413f50);
DECL_FUNC(int(*sub_413F70)(), sub_413F70, 0x413f70);
DECL_FUNC(int (__stdcall*setCreepRelationalData)(int a1, int a2, int (__stdcall *a3)(TileID *, _DWORD, _DWORD, TileID *, _DWORD), int a4), setCreepRelationalData, 0x413fa0);
DECL_FUNC(signed int (__stdcall*runCreepRandomizer_notePossibleDesync)(TileID *a1, int a2, int a3, TileID *a4, int a5), runCreepRandomizer_notePossibleDesync, 0x4140a0);
DECL_FUNC(grpHead *(__thiscall*readCreepFile)(char *grpFile), readCreepFile, 0x414100);
int sub_414180(UnitType a1, int a2, int a3, int a4, int a5, int a6) {
    int address = 0x414180;
    int result_;
    __asm {
        mov dx, a1
        mov ebx, a2
        mov edi, a3
        mov esi, a4
        push dword ptr a6
        push dword ptr a5
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4141F0)(), sub_4141F0, 0x4141f0);
DECL_FUNC(int (__stdcall*getCreepAtAndSet)(int, int, int, int, int), getCreepAtAndSet, 0x414230);
DECL_FUNC(int (__stdcall*getNumSurroundingCreepTiles)(int, int), getNumSurroundingCreepTiles, 0x414290);
DECL_FUNC(bool (__stdcall*BWFXN_CreepManagementCB)(int, WORD *, int, int, int *), BWFXN_CreepManagementCB, 0x414440);
DECL_FUNC(int(*sub_4144C0)(), sub_4144C0, 0x4144c0);
DECL_FUNC(int(*sub_4144E0)(), sub_4144E0, 0x4144e0);
DECL_FUNC(int(*sub_414520)(), sub_414520, 0x414520);
DECL_FUNC(int (__stdcall*sub_414560)(int), sub_414560, 0x414560);
DECL_FUNC(int(*sub_414680)(), sub_414680, 0x414680);
DECL_FUNC(int (__stdcall*ApplyCreepAtLocationFromUnitType)(int, int, int), ApplyCreepAtLocationFromUnitType, 0x4148f0);
int InitTerrainGraphicsAndCreep(struct_a1 *a1, TileID *a2, int a3, int a4, void *a5) {
    int address = 0x414a30;
    int result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        push dword ptr a5
        push dword ptr a4
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_414B50)(), sub_414B50, 0x414b50);
DECL_FUNC(int(*sub_414B70)(), sub_414B70, 0x414b70);
DECL_FUNC(int(*sub_414B90)(), sub_414B90, 0x414b90);
DECL_FUNC(int(*sub_414BB0)(), sub_414BB0, 0x414bb0);
DECL_FUNC(int (__stdcall*sub_414BC0)(int), sub_414BC0, 0x414bc0);
dialog *scrollerInit(dialog *result) {
    int address = 0x414c00;
    dialog * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_414C90)(int, int, int), sub_414C90, 0x414c90);
DECL_FUNC(int(*sub_414D30)(), sub_414D30, 0x414d30);
DECL_FUNC(int(*sub_414DB0)(), sub_414DB0, 0x414db0);
DECL_FUNC(int(*sub_414DC0)(), sub_414DC0, 0x414dc0);
DECL_FUNC(int(*sub_414DD0)(), sub_414DD0, 0x414dd0);
signed int ScrollerKeyPress(dlgEvent *a1, dialog *a2) {
    int address = 0x414e30;
    signed result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_414F10)(), sub_414F10, 0x414f10);
DECL_FUNC(int(*sub_415090)(), sub_415090, 0x415090);
void scrollerMouseUpdate(dlgEvent *a1, dialog *a2) {
    int address = 0x415140;
    __asm {
        mov eax, a1
        mov esi, a2
        call address
    }
}
int scrollerUpdate(__int16 a1, dialog *a2) {
    int address = 0x4152f0;
    int result_;
    __asm {
        mov ax, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
void sub_415340(__int16 a1, __int16 a2, dialog *a3) {
    int address = 0x415340;
    __asm {
        mov dx, a1
        mov cx, a2
        mov esi, a3
        call address
    }
}
int sub_4153B0(dialog *a1, rect *a2) {
    int address = 0x4153b0;
    int result_;
    __asm {
        mov ebx, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(void (__fastcall*genericHScrollUpdate)(dialog *dlg, int x, int y, rect *dst), genericHScrollUpdate, 0x4155a0);
DECL_FUNC(void (__fastcall*genericVScrollUpdate)(dialog *dlg, int x, int y, rect *dst), genericVScrollUpdate, 0x415760);
dialog *updateScroller(dialog *result, dlgEvent *a2) {
    int address = 0x415910;
    dialog * result_;
    __asm {
        mov eax, result
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
int selectNextScrollerElement(dialog *a1, dlgEvent *a2, __int16 a3, int a4) {
    int address = 0x415980;
    int result_;
    __asm {
        mov esi, a1
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
char scrollerLBtnDown(dialog *a1, dlgEvent *a2) {
    int address = 0x415a90;
    char result_;
    __asm {
        mov eax, a1
        mov edi, a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*genericScrollerInteract)(dialog *dlg, struct dlgEvent *evt), genericScrollerInteract, 0x415af0);
DECL_FUNC(int(*sub_415C70)(), sub_415C70, 0x415c70);
DECL_FUNC(int (__stdcall*sub_415CA0)(int, int), sub_415CA0, 0x415ca0);
void *loadTBL(int a1, int a2, char *a3, char *a4, char **a5, FastFileRead a6) {
    int address = 0x415cc0;
    void * result_;
    __asm {
        mov eax, a1
        mov edx, a2
        mov ecx, a3
        push dword ptr a6
        push dword ptr a5
        push dword ptr a4
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_415D20)(int), sub_415D20, 0x415d20);
DECL_FUNC(int(*sub_415D60)(), sub_415D60, 0x415d60);
DECL_FUNC(BOOL (__thiscall*sub_415D70)(_DWORD this_), sub_415D70, 0x415d70);
DECL_FUNC(int(*sub_415D90)(), sub_415D90, 0x415d90);
DECL_FUNC(int(*iterateTimers)(), iterateTimers, 0x415dc0);
void freeTimers(dialog *a1) {
    int address = 0x415f30;
    __asm {
        mov edi, a1
        call address
    }
}
void *waitLoopCntd(__int16 a1, dialog *a2) {
    int address = 0x416000;
    void * result_;
    __asm {
        mov dx, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
int *SetCallbackTimer(__int16 a1, dialog *a2, int a3, int a4) {
    int address = 0x416090;
    int * result_;
    __asm {
        mov ax, a1
        mov ecx, a2
        push dword ptr a4
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4161B0)(), sub_4161B0, 0x4161b0);
DECL_FUNC(int(*koreanTextLeadByteCheck)(), koreanTextLeadByteCheck, 0x4161c0);
DECL_FUNC(int(*DlgDrawEditCharacters)(), DlgDrawEditCharacters, 0x416240);
DECL_FUNC(int(*setFontSizeFromFlags)(), setFontSizeFromFlags, 0x416450);
DECL_FUNC(int(*sub_4164D0)(), sub_4164D0, 0x4164d0);
char sub_416570(dialog *a1, char a2) {
    int address = 0x416570;
    char result_;
    __asm {
        mov eax, a1
        mov bl, a2
        call address
        mov result_, al
    }
    return result_;
}
char dlgEditDestroy(dialog *a1, dialog *a2) {
    int address = 0x4165c0;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__fastcall*sub_416600)(dialog *a1, __int16 a2), sub_416600, 0x416600);
void sub_416650(const char *a1, dialog *a2) {
    int address = 0x416650;
    __asm {
        mov edi, a1
        mov esi, a2
        call address
    }
}
void sub_416690(dialog *a1, char a2) {
    int address = 0x416690;
    __asm {
        mov esi, a1
        push dword ptr a2
        call address
    }
}
void sub_416710(dialog *a1, char a2) {
    int address = 0x416710;
    __asm {
        mov esi, a1
        push dword ptr a2
        call address
    }
}
DECL_FUNC(int (__thiscall*sub_416790)(dialog *a1), sub_416790, 0x416790);
void DlgDrawEditText(dialog *a1) {
    int address = 0x4167f0;
    __asm {
        mov edi, a1
        call address
    }
}
DECL_FUNC(bool (__fastcall*genericEditInteract)(dialog *dlg, struct dlgEvent *evt), genericEditInteract, 0x416980);
DECL_FUNC(int(*BWFXN_GameEndTarget)(), BWFXN_GameEndTarget, 0x416d90);
DECL_FUNC(int(*sub_416E40)(), sub_416E40, 0x416e40);
DECL_FUNC(int(*sub_416E80)(), sub_416E80, 0x416e80);
DECL_FUNC(int(*sub_416EB0)(), sub_416EB0, 0x416eb0);
DECL_FUNC(int(*sub_416EC0)(), sub_416EC0, 0x416ec0);
DECL_FUNC(int (__stdcall*ExecuteSCode)(int, int, int), ExecuteSCode, 0x416ed0);
DECL_FUNC(int (__stdcall*sub_416F30)(int, int, int, int, int, int), sub_416F30, 0x416f30);
DECL_FUNC(int (__stdcall*sub_417130)(int, int, int, int), sub_417130, 0x417130);
DECL_FUNC(int(*sub_4171F0)(), sub_4171F0, 0x4171f0);
DECL_FUNC(int(*sub_417210)(), sub_417210, 0x417210);
DECL_FUNC(int(*sub_417270)(), sub_417270, 0x417270);
DECL_FUNC(int(*sub_4172C0)(), sub_4172C0, 0x4172c0);
int DrawTransparencies(int a1, int a2, RECT *a3, int a4, int a5, int a6) {
    int address = 0x4172f0;
    int result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        mov edi, a3
        push dword ptr a6
        push dword ptr a5
        push dword ptr a4
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_4174A0)(int, int, int), sub_4174A0, 0x4174a0);
DECL_FUNC(int (__stdcall*sub_4178B0)(int), sub_4178B0, 0x4178b0);
int sub_417A10(unsigned __int8 a1, char *a2, int a3, int a4, int a5) {
    int address = 0x417a10;
    int result_;
    __asm {
        mov al, a1
        push dword ptr a5
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
void CompileSCode(int a1, int palette) {
    int address = 0x417c20;
    __asm {
        mov ebx, a1
        push dword ptr palette
        call address
    }
}
DECL_FUNC(int(*sub_417DF0)(), sub_417DF0, 0x417df0);
DECL_FUNC(int(*pDLGInteract)(), pDLGInteract, 0x417e20);
DECL_FUNC(int (__thiscall*canTextboxDlgAcceptEvents_CB)(dialog *this_), canTextboxDlgAcceptEvents_CB, 0x417e30);
DECL_FUNC(int(*setSelectedIndexDirect)(), setSelectedIndexDirect, 0x417e50);
int doUserEvent(unsigned __int16 a1, int a2, dialog *a3) {
    int address = 0x417e70;
    int result_;
    __asm {
        mov ax, a1
        mov edx, a2
        mov ecx, a3
        call address
        mov result_, eax
    }
    return result_;
}
int DLG_IterateChildren(dialog *a1, int (__fastcall *a2)(_DWORD, _DWORD), int a3) {
    int address = 0x417eb0;
    int result_;
    __asm {
        mov eax, a1
        mov ebx, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
int dlgUpdate1(dialog *a1, dlgEvent *a2, int (__fastcall *a3)(_DWORD, _DWORD)) {
    int address = 0x417f00;
    int result_;
    __asm {
        mov ecx, a1
        mov ebx, a2
        mov edi, a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_417F20)(), sub_417F20, 0x417f20);
DECL_FUNC(int(*sub_417F50)(), sub_417F50, 0x417f50);
DECL_FUNC(int(*sub_417F80)(), sub_417F80, 0x417f80);
DECL_FUNC(int(*sub_417FA0)(), sub_417FA0, 0x417fa0);
DECL_FUNC(int(*sub_417FB0)(), sub_417FB0, 0x417fb0);
DECL_FUNC(int(*sub_417FF0)(), sub_417FF0, 0x417ff0);
DECL_FUNC(signed int (__thiscall*isDlgVisible_CB)(dialog *this_), isDlgVisible_CB, 0x418010);
unsigned int dlgMouseOverGenericLabel(dialog *a1) {
    int address = 0x418030;
    unsigned result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_418060)(), sub_418060, 0x418060);
dialog *getControlFromIndex(dialog *a1, __int16 a2) {
    int address = 0x418080;
    dialog * result_;
    __asm {
        mov eax, a1
        mov cx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(dialog *(__thiscall*DLG_prevEntry)(dialog *a1), DLG_prevEntry, 0x4180a0);
DECL_FUNC(int (__thiscall*DLG_nextEntry)(dialog *this_), DLG_nextEntry, 0x4180c0);
dialog *sub_4180D0(dialog *result, int a2) {
    int address = 0x4180d0;
    dialog * result_;
    __asm {
        mov eax, result
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
dialog *registerUserDialogAction(dialog *result, unsigned int a2, FnInteract *a3) {
    int address = 0x418100;
    dialog * result_;
    __asm {
        mov eax, result
        mov ecx, a2
        mov edi, a3
        call address
        mov result_, eax
    }
    return result_;
}
unsigned int sub_418150(dialog *a1) {
    int address = 0x418150;
    unsigned result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__fastcall*dlgPassUpperKeyDwnEventToUserHotkey_CB)(dialog *a1, char *a2), dlgPassUpperKeyDwnEventToUserHotkey_CB, 0x418170);
DECL_FUNC(int (__fastcall*dlgPassLowerKeyDwnEventToUserHotkey_CB)(dialog *a1, char *a2), dlgPassLowerKeyDwnEventToUserHotkey_CB, 0x4181d0);
DECL_FUNC(int (__fastcall*SendLowercaseHotkeyEvent_CB)(dialog *a1, char *a2), SendLowercaseHotkeyEvent_CB, 0x418220);
DECL_FUNC(int(*dlgPassHotkeyEventToFlags)(), dlgPassHotkeyEventToFlags, 0x418270);
int dlgPassHotkeyEventToIndex(dialog *a1, __int16 a2) {
    int address = 0x4182f0;
    int result_;
    __asm {
        mov eax, a1
        mov cx, a2
        call address
        mov result_, eax
    }
    return result_;
}
dialog *dlgSetMouseOver(dialog *a2, struct dlgEvent *a1) {
    int address = 0x418340;
    dialog * result_;
    __asm {
        mov edi, a2
        mov ecx, a1
        call address
        mov result_, eax
    }
    return result_;
}
BOOL isDlgEventCursorInsideDlg(dialog *a1, dlgEvent *a2) {
    int address = 0x418410;
    BOOL result_;
    __asm {
        mov eax, a1
        mov edx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_418440)(), sub_418440, 0x418440);
int FreeDialogDestBuffer(dialog *a1) {
    int address = 0x418480;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
int passUppercaseKeyDwnToUserChrEvent(dlgEvent *a1, int a2, dialog *a3) {
    int address = 0x4184a0;
    int result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
int passLowercaseKeyDwnToUserChrEvent(dlgEvent *a1, dialog *a2) {
    int address = 0x4184e0;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
int sub_418510(dialog *a3, dlgEvent *a2) {
    int address = 0x418510;
    int result_;
    __asm {
        mov esi, a3
        mov edi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_418570)(), sub_418570, 0x418570);
void UpdateDlgOnFlag(dialog *a1) {
    int address = 0x418580;
    __asm {
        mov eax, a1
        call address
    }
}
int RefreshDlgForCursor(dialog *a1) {
    int address = 0x4185a0;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4185E0)(), sub_4185E0, 0x4185e0);
DECL_FUNC(void (__thiscall*sub_418600)(dialog *this_), sub_418600, 0x418600);
int disableDialog(dialog *a1) {
    int address = 0x418640;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
void showDialog(dialog *a1) {
    int address = 0x4186a0;
    __asm {
        mov esi, a1
        call address
    }
}
void HideDialog(dialog *a1) {
    int address = 0x418700;
    __asm {
        mov esi, a1
        call address
    }
}
int sub_418790(dialog *a1, dialog *a2) {
    int address = 0x418790;
    int result_;
    __asm {
        mov edi, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
void sub_418830(dialog *a1) {
    int address = 0x418830;
    __asm {
        mov edi, a1
        call address
    }
}
DECL_FUNC(int(*setDialogVisibility)(), setDialogVisibility, 0x4188e0);
int genericDlgMouseMoveEventHandler(dialog *a1, dlgEvent *a2) {
    int address = 0x418900;
    int result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
void ShowDialog(dlgEvent *a1, dialog *a2, dialog *a3) {
    int address = 0x418960;
    __asm {
        mov eax, a1
        mov edx, a2
        mov ecx, a3
        call address
    }
}
signed int sub_418A10(dialog *a1, dlgEvent *a2) {
    int address = 0x418a10;
    signed result_;
    __asm {
        mov eax, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
signed int SetNextActiveElement(dialog *a1, dialog *(__thiscall *a2)(dialog *a1)) {
    int address = 0x418a60;
    signed result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
u32 genericDlgCharEventHandler(dlgEvent *evt, dialog *dlg) {
    int address = 0x418ab0;
    u32 result_;
    __asm {
        mov eax, evt
        push dword ptr dlg
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_418C00)(int), sub_418C00, 0x418c00);
unsigned int genericCommonInteract(dlgEvent *a1, dialog *a2) {
    int address = 0x418c40;
    unsigned result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
int enableShowDialog(dialog *a1) {
    int address = 0x418e00;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*statRes_Text_Interact)(dialog *dlg, dlgEvent *evt), statRes_Text_Interact, 0x418e60);
DECL_FUNC(bool (__fastcall*genericDlgInteract)(dialog *dlg, struct dlgEvent *evt), genericDlgInteract, 0x418eb0);
DECL_FUNC(int(*sub_419170)(), sub_419170, 0x419170);
DECL_FUNC(bool (__fastcall*genericLabelInteract)(dialog *dlg, dlgEvent *evt), genericLabelInteract, 0x419190);
DECL_FUNC(bool (__fastcall*genericImageInteract)(dialog *dlg, struct dlgEvent *evt), genericImageInteract, 0x4191e0);
DECL_FUNC(int(*sub_419260)(), sub_419260, 0x419260);
DECL_FUNC(int(*sub_419290)(), sub_419290, 0x419290);
DECL_FUNC(int(*sub_419450)(), sub_419450, 0x419450);
DECL_FUNC(int(*sub_419460)(), sub_419460, 0x419460);
DECL_FUNC(int(*sub_419470)(), sub_419470, 0x419470);
DECL_FUNC(int(*sub_419480)(), sub_419480, 0x419480);
DECL_FUNC(int(*sub_4194B0)(), sub_4194B0, 0x4194b0);
void AllocInitDialogData(dialog *result, dialog *a2, FnAllocBackgroundImage a3, const char *source_filename, int source_line) {
    int address = 0x4194e0;
    __asm {
        mov eax, result
        mov ebx, a2
        push dword ptr source_line
        push dword ptr source_filename
        push dword ptr a3
        call address
    }
}
DECL_FUNC(int(*sub_4195E0)(), sub_4195E0, 0x4195e0);
DECL_FUNC(dialog **(__fastcall*removeDlgFromTimerTracking)(dialog *a1, dialog *a2), removeDlgFromTimerTracking, 0x419640);
DECL_FUNC(int(*assignNextActiveDlgElement)(), assignNextActiveDlgElement, 0x4196a0);
DECL_FUNC(void (__fastcall*sub_4196F0)(dialog *a1, dialog *a2), sub_4196F0, 0x4196f0);
DECL_FUNC(void (__cdecl*pressGlobalDlgHotkey)(), pressGlobalDlgHotkey, 0x419740);
DECL_FUNC(int (__stdcall*DlgGrp_Constructor)(int, int), DlgGrp_Constructor, 0x4197b0);
DECL_FUNC(void (__thiscall*DestroyScreenLayer)(bool exit_code), DestroyScreenLayer, 0x419cb0);
void InitializeDialog(dialog *a1, FnInteract a2) {
    int address = 0x419d20;
    __asm {
        mov esi, a1
        mov eax, a2
        call address
    }
}
void setFontHandleFromFlags(dialog *a1) {
    int address = 0x419e50;
    __asm {
        mov eax, a1
        call address
    }
}
void DestroyDialog(dialog *a1) {
    int address = 0x419ea0;
    __asm {
        mov esi, a1
        call address
    }
}
DECL_FUNC(int(*sub_419F80)(), sub_419F80, 0x419f80);
int sendInputToAllDialogs(dlgEvent *a1) {
    int address = 0x419fd0;
    int result_;
    __asm {
        mov ebx, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*InitializeScreenLayer)(), InitializeScreenLayer, 0x41a030);
int gluLoadBINDlg(dialog *a1, FnInteract fn_interact) {
    int address = 0x41a080;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr fn_interact
        call address
        mov result_, eax
    }
    return result_;
}
dialog *comboboxInit(dialog *result) {
    int address = 0x41a110;
    dialog * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
void comboboxSelNext(dialog *dlg) {
    int address = 0x41a140;
    __asm {
        mov eax, dlg
        call address
    }
}
DECL_FUNC(int(*sub_41A180)(), sub_41A180, 0x41a180);
DECL_FUNC(int(*sub_41A190)(), sub_41A190, 0x41a190);
DECL_FUNC(int(*sub_41A1A0)(), sub_41A1A0, 0x41a1a0);
BOOL isEventInDlgField(dialog *a1, dlgEvent *a2) {
    int address = 0x41a1b0;
    BOOL result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*isCursorInDlgControl)(), isCursorInDlgControl, 0x41a270);
DECL_FUNC(int(*listboxGetSelectedIndexFromMousePosition)(), listboxGetSelectedIndexFromMousePosition, 0x41a2c0);
DECL_FUNC(int(*sub_41A3C0)(), sub_41A3C0, 0x41a3c0);
DECL_FUNC(int(*sub_41A3F0)(), sub_41A3F0, 0x41a3f0);
DECL_FUNC(int(*sub_41A420)(), sub_41A420, 0x41a420);
DECL_FUNC(int (__stdcall*sub_41A430)(int), sub_41A430, 0x41a430);
DECL_FUNC(int(*sub_41A450)(), sub_41A450, 0x41a450);
int listboxLButtonUp(dialog *a1, dialog *a2) {
    int address = 0x41a490;
    int result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
void comboboxLButtonUp(dialog *a1) {
    int address = 0x41a4e0;
    __asm {
        mov esi, a1
        call address
    }
}
void sub_41A530(dialog *a1) {
    int address = 0x41a530;
    __asm {
        mov esi, a1
        call address
    }
}
void comboboxLButtonDown(dialog *a1) {
    int address = 0x41a580;
    __asm {
        mov esi, a1
        call address
    }
}
void DlgSetSelected_UpdateScrollbar(unsigned __int8 a1, dialog *a2) {
    int address = 0x41a600;
    __asm {
        mov bl, a1
        mov esi, a2
        call address
    }
}
DECL_FUNC(void (__thiscall*scrollerUpdateParent)(dialog *this_), scrollerUpdateParent, 0x41a6a0);
void dlgFontSize(dialog *a3) {
    int address = 0x41a6d0;
    __asm {
        mov esi, a3
        call address
    }
}
void dlgSetSelectedImmediate(unsigned __int8 a1, dialog *a2) {
    int address = 0x41a850;
    __asm {
        mov al, a1
        mov ecx, a2
        call address
    }
}
DECL_FUNC(char (__stdcall*sub_41A890)(dialog *a1, int *a2), sub_41A890, 0x41a890);
int dlgScrollKeyInteract(dialog *a1, dlgEvent *a2) {
    int address = 0x41a9d0;
    int result_;
    __asm {
        mov eax, a1
        mov edx, a2
        call address
        mov result_, eax
    }
    return result_;
}
bool listboxLButtonDown(dialog *a1, dlgEvent *a2) {
    int address = 0x41ab20;
    bool result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(void (__thiscall*sub_41AC20)(dialog *this_), sub_41AC20, 0x41ac20);
unsigned __int8 dlgComboboxUpdate(dialog *a1, rect *a2) {
    int address = 0x41ac50;
    unsigned result_;
    __asm {
        mov ebx, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
void listboxMouseMove(dialog *a1, dlgEvent *a2) {
    int address = 0x41ae90;
    __asm {
        mov eax, a1
        mov edi, a2
        call address
    }
}
DECL_FUNC(int (__stdcall*listboxEntryUpdate)(int, int, int), listboxEntryUpdate, 0x41af10);
DECL_FUNC(void (__fastcall*genericComboboxUpdate)(dialog *dlg, int x, int y, rect *dst), genericComboboxUpdate, 0x41b110);
__int16 listboxInit(dialog *a1) {
    int address = 0x41b140;
    __int16 result_;
    __asm {
        mov ebx, a1
        call address
        mov result_, ax
    }
    return result_;
}
void setScrollbarVisibility(dialog *a1, int a2) {
    int address = 0x41b300;
    __asm {
        mov eax, a1
        mov edi, a2
        call address
    }
}
int listboxHide(dialog *a1) {
    int address = 0x41b3d0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
int listboxShow(dialog *a1) {
    int address = 0x41b3f0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
void CreateDLGDropdown(dialog *a1) {
    int address = 0x41b410;
    __asm {
        mov eax, a1
        call address
    }
}
void *sub_41B550(unsigned __int8 a1, dialog *a2) {
    int address = 0x41b550;
    void * result_;
    __asm {
        mov al, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
void sub_41B620(const char *a1, dialog *dlg, unsigned __int8 a3, char a4) {
    int address = 0x41b620;
    __asm {
        mov eax, a1
        mov ecx, dlg
        push dword ptr a4
        push dword ptr a3
        call address
    }
}
char AddItemToListing(char *a1, dialog *a2, char a3) {
    int address = 0x41b760;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        push dword ptr a3
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*sub_41B860)(), sub_41B860, 0x41b860);
void genericListboxDropdown(dialog *a1) {
    int address = 0x41b890;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int(*sub_41B8E0)(), sub_41B8E0, 0x41b8e0);
DECL_FUNC(int(*genericListboxDestroy)(), genericListboxDestroy, 0x41b8f0);
DECL_FUNC(void (__fastcall*genericListboxUpdate)(dialog *dlg, int x, int y, rect *dst), genericListboxUpdate, 0x41b950);
DECL_FUNC(bool (__fastcall*genericListboxInteract)(dialog *dlg, dlgEvent *evt), genericListboxInteract, 0x41baa0);
DECL_FUNC(bool (__fastcall*genericComboboxInteract)(dialog *dlg, struct dlgEvent *evt), genericComboboxInteract, 0x41bc40);
DECL_FUNC(int(*sub_41BD00)(), sub_41BD00, 0x41bd00);
DECL_FUNC(int(*sub_41BD20)(), sub_41BD20, 0x41bd20);
DECL_FUNC(int(*sub_41BD30)(), sub_41BD30, 0x41bd30);
DECL_FUNC(int(*sub_41BD50)(), sub_41BD50, 0x41bd50);
DECL_FUNC(int(*isDialogInRect)(), isDialogInRect, 0x41bda0);
DECL_FUNC(int(*sub_41BDF0)(), sub_41BDF0, 0x41bdf0);
DECL_FUNC(int(*sub_41BE20)(), sub_41BE20, 0x41be20);
DECL_FUNC(int(*sub_41BE70)(), sub_41BE70, 0x41be70);
BOOL sub_41BED0(rect *a1) {
    int address = 0x41bed0;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_41BF30)(), sub_41BF30, 0x41bf30);
DECL_FUNC(int(*isRectBoundsInside_Assign_16)(), isRectBoundsInside_Assign_16, 0x41bf60);
DECL_FUNC(int(*isRectBoundsInside_Assign_32)(), isRectBoundsInside_Assign_32, 0x41bfc0);
DECL_FUNC(int(*sub_41C010)(), sub_41C010, 0x41c010);
DECL_FUNC(int(*sub_41C030)(), sub_41C030, 0x41c030);
DECL_FUNC(int (__stdcall*sub_41C050)(LPRECT lprc), sub_41C050, 0x41c050);
DECL_FUNC(int (__stdcall*sub_41C080)(int), sub_41C080, 0x41c080);
void _RgnUnk(tagRECT *a1) {
    int address = 0x41c200;
    __asm {
        mov eax, a1
        call address
    }
}
void sub_41C2A0(tagRECT *a1) {
    int address = 0x41c2a0;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int(*RefreshCursorRect)(), RefreshCursorRect, 0x41c2c0);
void updateDialog(dialog *a1) {
    int address = 0x41c400;
    __asm {
        mov eax, a1
        call address
    }
}
int sub_41C4F0(dialog *a1) {
    int address = 0x41c4f0;
    int result_;
    __asm {
        mov edi, a1
        call address
        mov result_, eax
    }
    return result_;
}
int sub_41C5A0(_DWORD a1, rect *a2) {
    int address = 0x41c5a0;
    int result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*CtrlNode_Constructor)(int, int), CtrlNode_Constructor, 0x41c5d0);
DECL_FUNC(int(*updateAllDlgs)(), updateAllDlgs, 0x41c780);
DECL_FUNC(int(*sub_41C7B0)(), sub_41C7B0, 0x41c7b0);
DECL_FUNC(int(*sub_41C810)(), sub_41C810, 0x41c810);
DECL_FUNC(int(*BWFXN_RedrawTarget)(), BWFXN_RedrawTarget, 0x41ca00);
DECL_FUNC(void (__stdcall*DialogUpdateProc)(Bitmap *, bounds *), DialogUpdateProc, 0x41cb50);
DECL_FUNC(int(*fixDrawBoundsWithin)(), fixDrawBoundsWithin, 0x41cf60);
int BWFXN_PrintIcon(int a1, Bitmap *a2, __int16 a3, __int16 a4) {
    int address = 0x41d090;
    int result_;
    __asm {
        mov eax, a1
        mov edi, a2
        push dword ptr a4
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_41D160)(int, int, int, int), sub_41D160, 0x41d160);
DECL_FUNC(int(*sub_41D1D0)(), sub_41D1D0, 0x41d1d0);
DECL_FUNC(int (__stdcall*sub_41D210)(int, int), sub_41D210, 0x41d210);
int BlitSurface(int a1, Bitmap *a2, __int16 a3, __int16 a4) {
    int address = 0x41d260;
    int result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        push dword ptr a4
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_41D310)(char), sub_41D310, 0x41d310);
DECL_FUNC(int(*sub_41D350)(), sub_41D350, 0x41d350);
DECL_FUNC(int (__thiscall*sub_41D360)(int a3), sub_41D360, 0x41d360);
DECL_FUNC(int(*sub_41D370)(), sub_41D370, 0x41d370);
DECL_FUNC(int(*DoBltUsingMask)(), DoBltUsingMask, 0x41d420);
DECL_FUNC(int(*BWFXN_UpdateBltMasks)(), BWFXN_UpdateBltMasks, 0x41d470);
DECL_FUNC(int(*TransDestroy)(), TransDestroy, 0x41d540);
DECL_FUNC(int(*updateConsoleImage)(), updateConsoleImage, 0x41d5a0);
DECL_FUNC(int (__stdcall*BltMask_Constructor)(int, int), BltMask_Constructor, 0x41d640);
DECL_FUNC(int(*realizePalette)(), realizePalette, 0x41d710);
DECL_FUNC(int (__stdcall*sub_41D780)(int, int), sub_41D780, 0x41d780);
DECL_FUNC(int (__stdcall*drawVertLine)(__int16, __int16), drawVertLine, 0x41d7d0);
DECL_FUNC(int (__stdcall*MinimapFill)(__int16, __int16), MinimapFill, 0x41d810);
DECL_FUNC(int(*sub_41D860)(), sub_41D860, 0x41d860);
DECL_FUNC(int (__thiscall*sub_41D880)(char *logfilename), sub_41D880, 0x41d880);
DECL_FUNC(int (__fastcall*sub_41D8A0)(unsigned int numentries, unsigned int firstentry), sub_41D8A0, 0x41d8a0);
DECL_FUNC(int(*BWFXN_DDrawDestroy)(), BWFXN_DDrawDestroy, 0x41d8b0);
DECL_FUNC(int(*BWFXN_DDrawInitialize)(), BWFXN_DDrawInitialize, 0x41d930);
DECL_FUNC(int(*sub_41DC20)(), sub_41DC20, 0x41dc20);
DECL_FUNC(int(*sub_41DCF0)(), sub_41DCF0, 0x41dcf0);
DECL_FUNC(int(*sub_41DD10)(), sub_41DD10, 0x41dd10);
DECL_FUNC(int(*sub_41DD20)(), sub_41DD20, 0x41dd20);
DECL_FUNC(int(*sub_41DD90)(), sub_41DD90, 0x41dd90);
DECL_FUNC(int(*sub_41DDD0)(), sub_41DDD0, 0x41ddd0);
DECL_FUNC(int (__stdcall*refreshRect)(int, int, int, int), refreshRect, 0x41de20);
DECL_FUNC(int (__stdcall*BlitBitmap)(int), BlitBitmap, 0x41deb0);
DECL_FUNC(int (__stdcall*BlitCursorSurface)(int, __int16), BlitCursorSurface, 0x41df40);
DECL_FUNC(int(*sub_41E000)(), sub_41E000, 0x41e000);
DECL_FUNC(int(*InitializeImage)(), InitializeImage, 0x41e050);
DECL_FUNC(void (__thiscall*DestroyImage)(bool exit_code), DestroyImage, 0x41e0a0);
DECL_FUNC(int (__stdcall*BWFXN_RefreshTarget)(int), BWFXN_RefreshTarget, 0x41e0d0);
DECL_FUNC(int(*sub_41E1A0)(), sub_41E1A0, 0x41e1a0);
DECL_FUNC(int(*RefreshCursorScreen)(), RefreshCursorScreen, 0x41e230);
DECL_FUNC(int(*DirtyArrayHandling)(), DirtyArrayHandling, 0x41e280);
DECL_FUNC(int(*sub_41E430)(), sub_41E430, 0x41e430);
int sub_41E450(int (__thiscall *a1)(int *, _DWORD), int *a2) {
    int address = 0x41e450;
    int result_;
    __asm {
        mov ebx, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*SetCurrentPaletteInfo)(char), SetCurrentPaletteInfo, 0x41e480);
DECL_FUNC(int(*sub_41E4B0)(), sub_41E4B0, 0x41e4b0);
DECL_FUNC(int(*sub_41E4F0)(), sub_41E4F0, 0x41e4f0);
DECL_FUNC(int (__stdcall*sub_41E550)(char, int, char), sub_41E550, 0x41e550);
DECL_FUNC(int(*sub_41E590)(), sub_41E590, 0x41e590);
DECL_FUNC(int(*sub_41E5A0)(), sub_41E5A0, 0x41e5a0);
DECL_FUNC(int(*setPaletteGamma)(), setPaletteGamma, 0x41e5c0);
DECL_FUNC(int (__stdcall*sub_41E7B0)(int, int), sub_41E7B0, 0x41e7b0);
DECL_FUNC(int(*updatePaletteEntries)(), updatePaletteEntries, 0x41e870);
void gluDlgFadePalette(unsigned int a1) {
    int address = 0x41e8b0;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int(*colorCycleInterval)(), colorCycleInterval, 0x41e900);
DECL_FUNC(int(*pauseSetPaletteToGreyscale)(), pauseSetPaletteToGreyscale, 0x41e930);
DECL_FUNC(int (__stdcall*sub_41E9E0)(unsigned int a1), sub_41E9E0, 0x41e9e0);
DECL_FUNC(int (__stdcall*TitlePaletteUpdate)(unsigned int a1), TitlePaletteUpdate, 0x41ea30);
DECL_FUNC(int (__stdcall*GetFileInfo)(int), GetFileInfo, 0x41eb80);
DECL_FUNC(int(*createErrFile)(), createErrFile, 0x41ecb0);
DECL_FUNC(int (__cdecl*ProcError)(int), ProcError, 0x41ee50);
DECL_FUNC(int (__cdecl*ErrorLog)(char *, char), ErrorLog, 0x41ef00);
DECL_FUNC(int(*ErrorLogSystemInfo)(), ErrorLogSystemInfo, 0x41efd0);
DECL_FUNC(int (__thiscall*___vsnprintf)(char *), ___vsnprintf, 0x41f0a0);
DECL_FUNC(int (__thiscall*localLoadResource)(LPCSTR lpName), localLoadResource, 0x41f0c0);
DECL_FUNC(int(*localFreeLibrary)(), localFreeLibrary, 0x41f170);
int __snprintf(char *buff, size_t size_, const char *format, ...) {
    int address = 0x41f1b0;
    int result_;
    __asm {
        mov edi, buff
        mov esi, size_
        push dword ptr format
        call address
        mov result_, eax
        add esp, 4
    }
    return result_;
}
DECL_FUNC(int(*LocalGetLang)(), LocalGetLang, 0x41f1d0);
DECL_FUNC(int (__thiscall*sub_41F230)(DLGPROC lpDialogFunc), sub_41F230, 0x41f230);
DECL_FUNC(int(*sub_41F270)(), sub_41F270, 0x41f270);
DECL_FUNC(int (__stdcall*WriteWindowText)(int), WriteWindowText, 0x41f2b0);
DECL_FUNC(int(*getColourHandle)(), getColourHandle, 0x41f610);
DECL_FUNC(int(*sub_41F7A0)(), sub_41F7A0, 0x41f7a0);
DECL_FUNC(int(*getCharacterWidth)(), getCharacterWidth, 0x41f7c0);
DECL_FUNC(int(*sub_41F8A0)(), sub_41F8A0, 0x41f8a0);
DECL_FUNC(int(*sub_41F8B0)(), sub_41F8B0, 0x41f8b0);
DECL_FUNC(int(*nullsub_8)(), nullsub_8, 0x41f8c0);
DECL_FUNC(int(*sub_41F8D0)(), sub_41F8D0, 0x41f8d0);
DECL_FUNC(int(*setTextAlignment)(), setTextAlignment, 0x41f920);
DECL_FUNC(void (__thiscall*BWFXN_SetFont)(Font *this_), BWFXN_SetFont, 0x41fb30);
DECL_FUNC(int (__stdcall*sub_41FC20)(int), sub_41FC20, 0x41fc20);
DECL_FUNC(int(*getMessageWidth)(), getMessageWidth, 0x41fc80);
DECL_FUNC(int(*sub_41FCC0)(), sub_41FCC0, 0x41fcc0);
Font *LoadFont(char *font_name, Font *(__fastcall *a2)(char *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD)) {
    int address = 0x41fd10;
    Font * result_;
    __asm {
        mov eax, font_name
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*writeFontApplyColour)(int, int), writeFontApplyColour, 0x41fd70);
DECL_FUNC(int (__stdcall*BWFXN_PrintXY)(int), BWFXN_PrintXY, 0x4200d0);
int BWFXN_DrawXY(char *a1, signed int a2, signed int a3) {
    int address = 0x4202b0;
    int result_;
    __asm {
        mov eax, a1
        mov esi, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__fastcall*__fwrite)(size_t, void *), __fwrite, 0x4204a0);
DECL_FUNC(int (__fastcall*__fread)(size_t, void *), __fread, 0x4204c0);
DECL_FUNC(int (__fastcall*__fseek)(__int32, FILE *), __fseek, 0x4204f0);
FILE *_pfopen(char *filename, __int16 flags) {
    int address = 0x420540;
    FILE * result_;
    __asm {
        mov ax, flags
        push dword ptr filename
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(void (__thiscall*saveRegOptions)(bool exit_code), saveRegOptions, 0x4205e0);
DECL_FUNC(int(*ApplyDefaultOptions)(), ApplyDefaultOptions, 0x420640);
DECL_FUNC(int(*LoadRegOptions)(), LoadRegOptions, 0x4206a0);
void AppExit(bool exit_code) {
    int address = 0x4207b0;
    __asm {
        mov bl, exit_code
        call address
    }
}
DECL_FUNC(void __noreturn(*sub_420830)(), sub_420830, 0x420830);
DECL_FUNC(int (__stdcall*ErrMessageBox)(LPCSTR lpText, LPCSTR lpCaption), ErrMessageBox, 0x4208e0);
DECL_FUNC(BOOL (__stdcall*DialogFunc)(HWND, UINT, WPARAM, LPARAM), DialogFunc, 0x420980);
DECL_FUNC(int(*sub_420A20)(), sub_420A20, 0x420a20);
DECL_FUNC(int (__fastcall*DSERR_GetString)(size_t size, char *dest), DSERR_GetString, 0x420a30);
DECL_FUNC(int (__fastcall*DDERR_GetString)(size_t size, char *dest), DDERR_GetString, 0x420b90);
char *GetErrorString(LPSTR lpBuffer, DWORD a2, unsigned int a3) {
    int address = 0x421140;
    char * result_;
    __asm {
        mov ecx, lpBuffer
        mov eax, a2
        mov ebx, a3
        call address
        mov result_, eax
    }
    return result_;
}
void ErrorDDrawInit(char *source_file, char *function_name, unsigned int last_error, WORD resource, int source_line) {
    int address = 0x4211f0;
    __asm {
        mov ecx, source_file
        mov eax, function_name
        mov ebx, last_error
        push dword ptr source_line
        push dword ptr resource
        call address
    }
}
void SysWarn_FileNotFound(const char *a1, int last_error) {
    int address = 0x4212c0;
    __asm {
        mov ebx, last_error
        push dword ptr a1
        call address
    }
}
DECL_FUNC(int(*SystemWarning_Configuration)(), SystemWarning_Configuration, 0x421360);
DECL_FUNC(int(*SystemWarning_PhysicalMemory)(), SystemWarning_PhysicalMemory, 0x4213a0);
DECL_FUNC(int(*SystemWarning_PentiumProcessor)(), SystemWarning_PentiumProcessor, 0x4213e0);
DECL_FUNC(int(*sub_421420)(), sub_421420, 0x421420);
DECL_FUNC(int(*SystemWarning_20MBDiskSpace)(), SystemWarning_20MBDiskSpace, 0x421460);
DECL_FUNC(int(*sub_4214C0)(), sub_4214C0, 0x4214c0);
DECL_FUNC(void __noreturn(*DLGErrFatal)(), DLGErrFatal, 0x4214d0);
DECL_FUNC(int(*sub_421510)(), sub_421510, 0x421510);
DECL_FUNC(void(*FatalError)(char *arg0, ...), FatalError, 0x4215d0);
DECL_FUNC(int(*SetCursorClipBounds)(), SetCursorClipBounds, 0x4215e0);
DECL_FUNC(int (__stdcall*sub_421640)(int, int), sub_421640, 0x421640);
DECL_FUNC(int(*_SetCursorPos)(), _SetCursorPos, 0x421670);
int _ClipCursor(RECT *a1) {
    int address = 0x421690;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4216F0)(), sub_4216F0, 0x4216f0);
DECL_FUNC(int(*doCursorClip)(), doCursorClip, 0x421730);
DECL_FUNC(int(*sub_421770)(), sub_421770, 0x421770);
DECL_FUNC(int (__stdcall*sub_4217E0)(__int16, char), sub_4217E0, 0x4217e0);
DECL_FUNC(int(*sub_4218E0)(), sub_4218E0, 0x4218e0);
DECL_FUNC(int (__stdcall*sub_421910)(int, int, int), sub_421910, 0x421910);
DECL_FUNC(int(*sub_421A60)(), sub_421A60, 0x421a60);
DECL_FUNC(int(*sub_421AA0)(), sub_421AA0, 0x421aa0);
DECL_FUNC(int(*sub_421AF0)(), sub_421AF0, 0x421af0);
DECL_FUNC(int (__stdcall*sub_421B40)(int, int), sub_421B40, 0x421b40);
DECL_FUNC(int(*sub_421BA0)(), sub_421BA0, 0x421ba0);
SaiContourHub *setContourSearchBounds(SaiContourHub *result, __int16 a2, __int16 a3, __int16 a4, __int16 a5) {
    int address = 0x421c60;
    SaiContourHub * result_;
    __asm {
        mov eax, result
        mov dx, a2
        mov cx, a3
        push dword ptr a5
        push dword ptr a4
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_421CB0)(), sub_421CB0, 0x421cb0);
DECL_FUNC(int(*sub_421CD0)(), sub_421CD0, 0x421cd0);
DECL_FUNC(int(*sub_422070)(), sub_422070, 0x422070);
SaiContourHub *setContourSearchVariablesFromUnitType(SaiContourHub *result, unsigned __int16 a2) {
    int address = 0x4220c0;
    SaiContourHub * result_;
    __asm {
        mov eax, result
        mov cx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_422160)(), sub_422160, 0x422160);
DECL_FUNC(int (__stdcall*sub_422600)(int, char), sub_422600, 0x422600);
DECL_FUNC(int (__stdcall*sub_4228E0)(int), sub_4228E0, 0x4228e0);
DECL_FUNC(int(*nullsub_9)(), nullsub_9, 0x422a40);
DECL_FUNC(int(*sub_422A50)(), sub_422A50, 0x422a50);
signed int sub_422A90(_DWORD a1, int a2) {
    int address = 0x422a90;
    signed result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_422C90)(int), sub_422C90, 0x422c90);
DECL_FUNC(signed int (__stdcall*sub_422FA0)(CUnit *a1, int a2), sub_422FA0, 0x422fa0);
DECL_FUNC(int(*nullsub_10)(), nullsub_10, 0x423180);
signed int getLarvaeUnitsFromList(CUnit *a1, int a2) {
    int address = 0x423190;
    signed result_;
    __asm {
        mov edx, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*CMDACT_CancelNuke)(), CMDACT_CancelNuke, 0x4231d0);
DECL_FUNC(int(*CMDACT_MergeDarkArchon)(), CMDACT_MergeDarkArchon, 0x4231f0);
DECL_FUNC(int(*CMDACT_MergeArchon)(), CMDACT_MergeArchon, 0x423210);
DECL_FUNC(int(*CMDACT_Lift)(), CMDACT_Lift, 0x423230);
DECL_FUNC(int(*CMDACT_Decloak)(), CMDACT_Decloak, 0x423270);
DECL_FUNC(int(*CMDACT_Unburrow)(), CMDACT_Unburrow, 0x423290);
DECL_FUNC(int(*CMDACT_Burrow)(), CMDACT_Burrow, 0x4232b0);
DECL_FUNC(int(*CMDACT_CancelAddon)(), CMDACT_CancelAddon, 0x4232d0);
DECL_FUNC(int(*CMDACT_CancelUpgrade)(), CMDACT_CancelUpgrade, 0x4232f0);
DECL_FUNC(int(*CMDACT_Upgrade)(), CMDACT_Upgrade, 0x423310);
DECL_FUNC(int(*CMDACT_CancelResearch)(), CMDACT_CancelResearch, 0x423330);
DECL_FUNC(int(*CMDACT_Research)(), CMDACT_Research, 0x423350);
DECL_FUNC(int(*CMDACT_HoldPosition)(), CMDACT_HoldPosition, 0x423370);
DECL_FUNC(int(*CMDACT_TrainFighter)(), CMDACT_TrainFighter, 0x423390);
DECL_FUNC(int(*CMDACT_ReaverStop)(), CMDACT_ReaverStop, 0x4233b0);
DECL_FUNC(int(*CMDACT_CarrierStop)(), CMDACT_CarrierStop, 0x4233d0);
DECL_FUNC(int(*CMDACT_Stop)(), CMDACT_Stop, 0x4233f0);
DECL_FUNC(int(*CMDACT_CancelUnitMorph)(), CMDACT_CancelUnitMorph, 0x423410);
DECL_FUNC(int(*CMDACT_CancelConstruction)(), CMDACT_CancelConstruction, 0x423430);
DECL_FUNC(int(*CMDACT_Siege)(), CMDACT_Siege, 0x423450);
DECL_FUNC(int(*CMDACT_Unsiege)(), CMDACT_Unsiege, 0x423470);
DECL_FUNC(int(*CMDACT_CancelTrain)(), CMDACT_CancelTrain, 0x423490);
DECL_FUNC(int(*CMDACT_Train)(), CMDACT_Train, 0x4234b0);
DECL_FUNC(int(*CMDACT_Stimpack)(), CMDACT_Stimpack, 0x4234d0);
DECL_FUNC(int(*unit_CanCloak)(), unit_CanCloak, 0x423540);
signed int TechUseCheckForGroupEnergyCost(Tech a1) {
    int address = 0x423660;
    signed result_;
    __asm {
        mov al, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*CMDACT_Cloak)(), CMDACT_Cloak, 0x423730);
DECL_FUNC(int(*CMDACT_ReturnCargo)(), CMDACT_ReturnCargo, 0x423760);
DECL_FUNC(int(*CMDACT_UnitMorph)(), CMDACT_UnitMorph, 0x423790);
DECL_FUNC(int(*CMDACT_BuildingMorph)(), CMDACT_BuildingMorph, 0x423860);
DECL_FUNC(int(*BTNSACT_SelectLarva)(), BTNSACT_SelectLarva, 0x423930);
DECL_FUNC(int(*BTNSACT_Heal)(), BTNSACT_Heal, 0x4239e0);
DECL_FUNC(int(*BTNSACT_UseNuke)(), BTNSACT_UseNuke, 0x423a40);
DECL_FUNC(int(*BTNSACT_RechargeShields)(), BTNSACT_RechargeShields, 0x423aa0);
DECL_FUNC(int(*CMDACT_UnloadAll)(), CMDACT_UnloadAll, 0x423b00);
DECL_FUNC(int(*BTNSACT_LoadUnit)(), BTNSACT_LoadUnit, 0x423b40);
DECL_FUNC(int(*BTNSACT_Harvest)(), BTNSACT_Harvest, 0x423b70);
DECL_FUNC(int(*BTNSACT_Repair)(), BTNSACT_Repair, 0x423bd0);
DECL_FUNC(int(*BTNSACT_BuildingLand)(), BTNSACT_BuildingLand, 0x423c30);
DECL_FUNC(int(*BTNSACT_PlaceNydusExit)(), BTNSACT_PlaceNydusExit, 0x423c40);
DECL_FUNC(void (__fastcall*BTNSACT_ZergBuild)(UnitType a1), BTNSACT_ZergBuild, 0x423c50);
DECL_FUNC(int(*BTNSACT_PlaceAddon)(), BTNSACT_PlaceAddon, 0x423d10);
DECL_FUNC(void (__fastcall*BTNSACT_BuildProtoss)(UnitType a1), BTNSACT_BuildProtoss, 0x423dd0);
DECL_FUNC(int(*BTNSACT_PlaceCOP)(), BTNSACT_PlaceCOP, 0x423e90);
DECL_FUNC(int(*BTNSACT_BuildTerran)(), BTNSACT_BuildTerran, 0x423eb0);
DECL_FUNC(int(*BTNSACT_UseTech)(), BTNSACT_UseTech, 0x423f70);
DECL_FUNC(int(*BTNSACT_Patrol)(), BTNSACT_Patrol, 0x424140);
DECL_FUNC(int(*BTNSACT_ReaverAttack)(), BTNSACT_ReaverAttack, 0x4241a0);
DECL_FUNC(int(*BTNSACT_CarrierAttack)(), BTNSACT_CarrierAttack, 0x424200);
DECL_FUNC(int(*BTNSACT_CarrierMove)(), BTNSACT_CarrierMove, 0x424260);
DECL_FUNC(int(*BTNSACT_TowerAttack)(), BTNSACT_TowerAttack, 0x4242c0);
DECL_FUNC(int(*BTNSACT_AttackUnit)(), BTNSACT_AttackUnit, 0x424320);
DECL_FUNC(int (__fastcall*BTNSACT_AttackMove)(StatusFlags statusFlags), BTNSACT_AttackMove, 0x424380);
DECL_FUNC(int(*BTNSACT_Move)(), BTNSACT_Move, 0x424440);
DECL_FUNC(int(*BTNSACT_RallyPoint)(), BTNSACT_RallyPoint, 0x4244a0);
DECL_FUNC(int(*UnitStatCond_Never)(), UnitStatCond_Never, 0x424500);
DECL_FUNC(int(*sub_424510)(), sub_424510, 0x424510);
DECL_FUNC(int(*UnitStatCond_Powerup)(), UnitStatCond_Powerup, 0x424520);
DECL_FUNC(void (__cdecl*storeSelectionGroupHPAndType)(), storeSelectionGroupHPAndType, 0x424540);
DECL_FUNC(int(*isSelGroupUpdated)(), isSelGroupUpdated, 0x424660);
DECL_FUNC(int(*sub_4246B0)(), sub_4246B0, 0x4246b0);
DECL_FUNC(int(*sub_4246D0)(), sub_4246D0, 0x4246d0);
DECL_FUNC(int(*sub_424780)(), sub_424780, 0x424780);
DECL_FUNC(int(*sub_4248F0)(), sub_4248F0, 0x4248f0);
DECL_FUNC(int(*UnitStatCond_Standard)(), UnitStatCond_Standard, 0x424980);
DECL_FUNC(int(*sub_4249E0)(), sub_4249E0, 0x4249e0);
DECL_FUNC(int(*sub_424A10)(), sub_424A10, 0x424a10);
DECL_FUNC(int(*UnitStatCond_Egg)(), UnitStatCond_Egg, 0x424ac0);
DECL_FUNC(int(*UnitStatCond_Archon)(), UnitStatCond_Archon, 0x424af0);
DECL_FUNC(int(*sub_424B10)(), sub_424B10, 0x424b10);
DECL_FUNC(int(*UnitStatCond_CarrierReaver)(), UnitStatCond_CarrierReaver, 0x424b50);
void setSpellSpecialBtnGraphic(dialog *a1) {
    int address = 0x424ba0;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int(*UnitStatCond_Dropship)(), UnitStatCond_Dropship, 0x424f10);
DECL_FUNC(int(*sub_424FC0)(), sub_424FC0, 0x424fc0);
DECL_FUNC(int(*UnitStatCond_Building)(), UnitStatCond_Building, 0x425180);
DECL_FUNC(int(*sub_4251F0)(), sub_4251F0, 0x4251f0);
DECL_FUNC(int(*sub_425230)(), sub_425230, 0x425230);
void sub_425310(dialog *a1, unsigned __int16 a2) {
    int address = 0x425310;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
    }
}
void StatHangerCount(dialog *a1, unsigned __int16 a2) {
    int address = 0x4253d0;
    __asm {
        mov ebx, a1
        push dword ptr a2
        call address
    }
}
void sub_425510(dialog *a1, unsigned __int16 a2) {
    int address = 0x425510;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
    }
}
void sub_425600(dialog *a1, int a2, int a3, unsigned __int16 a4) {
    int address = 0x425600;
    __asm {
        mov eax, a1
        mov edx, a2
        mov ecx, a3
        push dword ptr a4
        call address
    }
}
void sub_425790(dialog *a1, unsigned __int16 a2, WeaponType weapon_type) {
    int address = 0x425790;
    __asm {
        mov eax, a1
        push dword ptr weapon_type
        push dword ptr a2
        call address
    }
}
void AddTextToDialog(dialog *a1, __int16 a2, char *a3) {
    int address = 0x4258b0;
    __asm {
        mov eax, a1
        mov cx, a2
        push dword ptr a3
        call address
    }
}
DECL_FUNC(int(*UnitStatCond_overlord)(), UnitStatCond_overlord, 0x425900);
void sub_425960(dialog *a1, int a2) {
    int address = 0x425960;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
    }
}
void sub_425A30(dialog *a1) {
    int address = 0x425a30;
    __asm {
        mov ebx, a1
        call address
    }
}
DECL_FUNC(void (__stdcall*SetUnitStatusStrText)(dialog *a1), SetUnitStatusStrText, 0x425b50);
void SetKillsStrText(signed int a1, dialog *a2) {
    int address = 0x425dd0;
    __asm {
        mov ecx, a1
        mov ebx, a2
        call address
    }
}
DECL_FUNC(int (__stdcall*getActivePortraitUnitName)(int), getActivePortraitUnitName, 0x425ec0);
DECL_FUNC(void (__thiscall*UnitStatAct_Default)(dialog *this_), UnitStatAct_Default, 0x425ee0);
void sub_425F30(dialog *a1) {
    int address = 0x425f30;
    __asm {
        mov edi, a1
        call address
    }
}
void sub_4260C0(dialog *a1) {
    int address = 0x4260c0;
    __asm {
        mov edi, a1
        call address
    }
}
void sub_426190(dialog *a1) {
    int address = 0x426190;
    __asm {
        mov eax, a1
        call address
    }
}
signed int StatSpidermineCount(dialog *a1, unsigned __int16 a2) {
    int address = 0x426300;
    signed result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*setTextStr)(dialog *a1), setTextStr, 0x4263e0);
DECL_FUNC(void (__stdcall*sub_426500)(dialog *a1), sub_426500, 0x426500);
DECL_FUNC(void (__stdcall*sub_4266F0)(dialog *a1), sub_4266F0, 0x4266f0);
DECL_FUNC(void (__stdcall*sub_4268D0)(dialog *a1), sub_4268D0, 0x4268d0);
DECL_FUNC(void (__thiscall*sub_426C60)(void *this_, dialog *a1), sub_426C60, 0x426c60);
DECL_FUNC(void (__thiscall*UnitStatAct_Powerup)(dialog *this_), UnitStatAct_Powerup, 0x426ee0);
DECL_FUNC(void (__thiscall*UnitStatAct_Standard)(dialog *this_), UnitStatAct_Standard, 0x426f50);
DECL_FUNC(void (__stdcall*sub_426FF0)(dialog *a1), sub_426FF0, 0x426ff0);
DECL_FUNC(void (__thiscall*UnitStatAct_Egg)(dialog *this_), UnitStatAct_Egg, 0x427260);
DECL_FUNC(void (__thiscall*UnitStatAct_Archon)(dialog *this_), UnitStatAct_Archon, 0x4273e0);
DECL_FUNC(void (__thiscall*UnitStatAct_CarrierReaver)(dialog *this_), UnitStatAct_CarrierReaver, 0x4274a0);
void sub_427540(dialog *a1) {
    int address = 0x427540;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int(*UnitStatAct_Building)(), UnitStatAct_Building, 0x427890);
void replayStatBtns(dialog *a1) {
    int address = 0x427a80;
    __asm {
        mov ebx, a1
        call address
    }
}
DECL_FUNC(void (__thiscall*UnitStatAct_Dropship)(dialog *this_), UnitStatAct_Dropship, 0x427c90);
DECL_FUNC(void (__thiscall*UnitStatAct_Overlord)(dialog *this_), UnitStatAct_Overlord, 0x427d30);
DECL_FUNC(int(*BriefingActionsLoop)(), BriefingActionsLoop, 0x427da0);
DECL_FUNC(int(*sub_427E30)(), sub_427E30, 0x427e30);
DECL_FUNC(int(*BRFACT_NoAct)(), BRFACT_NoAct, 0x427e40);
DECL_FUNC(int(*BRFACT_Wait)(), BRFACT_Wait, 0x427e50);
DECL_FUNC(int(*BRFACT_SkipTutorial)(), BRFACT_SkipTutorial, 0x427ea0);
DECL_FUNC(int(*BRFACT_MissionObjectives)(), BRFACT_MissionObjectives, 0x427ec0);
DECL_FUNC(int(*BRFACT_HidePortrait)(), BRFACT_HidePortrait, 0x427ee0);
DECL_FUNC(int(*BRFACT_ShowPortrait)(), BRFACT_ShowPortrait, 0x427ef0);
DECL_FUNC(int(*BRFACT_TextMessage)(), BRFACT_TextMessage, 0x427f10);
DECL_FUNC(int(*BRFACT_DisplaySpeakingPortrait)(), BRFACT_DisplaySpeakingPortrait, 0x427f80);
DECL_FUNC(int(*BRFACT_PlayWAV)(), BRFACT_PlayWAV, 0x427fa0);
DECL_FUNC(int(*BRFACT_Transmission)(), BRFACT_Transmission, 0x4280e0);
DECL_FUNC(int(*isUpgradeInProgress)(), isUpgradeInProgress, 0x4281b0);
DECL_FUNC(int(*sub_4281E0)(), sub_4281E0, 0x4281e0);
DECL_FUNC(int(*sub_428210)(), sub_428210, 0x428210);
DECL_FUNC(int(*isResearchInProgress)(), isResearchInProgress, 0x428240);
DECL_FUNC(int(*sub_428270)(), sub_428270, 0x428270);
DECL_FUNC(int(*sub_4282A0)(), sub_4282A0, 0x4282a0);
DECL_FUNC(int (__stdcall*BTNSCOND_Always)(int), BTNSCOND_Always, 0x4282d0);
DECL_FUNC(int(*sub_4282E0)(), sub_4282E0, 0x4282e0);
DECL_FUNC(int (__stdcall*BTNSCOND_SCVisBuilding)(int), BTNSCOND_SCVisBuilding, 0x428310);
DECL_FUNC(int (__stdcall*BTNSCOND_NoNydusExit)(int), BTNSCOND_NoNydusExit, 0x428340);
DECL_FUNC(int (__stdcall*BTNSCOND_LurkerStop)(int), BTNSCOND_LurkerStop, 0x428360);
DECL_FUNC(int (__stdcall*BTNSCOND_Movement)(int), BTNSCOND_Movement, 0x4283c0);
DECL_FUNC(int (__stdcall*BTNSCOND_IsLifted)(int), BTNSCOND_IsLifted, 0x4283f0);
DECL_FUNC(int (__stdcall*BTNSCOND_IsLiftedCanMove)(int), BTNSCOND_IsLiftedCanMove, 0x428420);
DECL_FUNC(int (__stdcall*BTNSCOND_CanRechargeShields)(int), BTNSCOND_CanRechargeShields, 0x428440);
DECL_FUNC(int (__stdcall*BTNSCOND_HasCargo)(int), BTNSCOND_HasCargo, 0x428480);
DECL_FUNC(int (__stdcall*BTNSCOND_NoCargo)(int), BTNSCOND_NoCargo, 0x4284b0);
DECL_FUNC(int (__stdcall*BTNSCOND_IsConstructing)(int), BTNSCOND_IsConstructing, 0x4284e0);
DECL_FUNC(int (__stdcall*BTNSCOND_HatcheryLairHive)(int), BTNSCOND_HatcheryLairHive, 0x428500);
DECL_FUNC(int (__stdcall*BTNSCOND_IsTraining)(int), BTNSCOND_IsTraining, 0x428530);
DECL_FUNC(int (__stdcall*BTNSCOND_HasCargoTerran)(int), BTNSCOND_HasCargoTerran, 0x428560);
DECL_FUNC(int (__stdcall*BTNSCOND_NoCargoTerran)(int), BTNSCOND_NoCargoTerran, 0x4285a0);
DECL_FUNC(int (__stdcall*BTNSCOND_CanRepair)(int), BTNSCOND_CanRepair, 0x4285e0);
DECL_FUNC(int (__stdcall*BTNSCOND_SCVCanAttack)(int), BTNSCOND_SCVCanAttack, 0x428610);
DECL_FUNC(int (__stdcall*BTNSCOND_SCVCanStop)(int), BTNSCOND_SCVCanStop, 0x428640);
DECL_FUNC(int (__stdcall*BTNSCOND_SCVCanMove)(int), BTNSCOND_SCVCanMove, 0x428670);
DECL_FUNC(int (__stdcall*BTNSCOND_HasScarabs)(int), BTNSCOND_HasScarabs, 0x4286a0);
DECL_FUNC(int (__stdcall*BTNSCOND_HasInterceptors)(int), BTNSCOND_HasInterceptors, 0x4286e0);
DECL_FUNC(int (__stdcall*BTNSCOND_ZergHasCargo)(int), BTNSCOND_ZergHasCargo, 0x428730);
DECL_FUNC(int (__stdcall*BTNSCOND_ZergNoCargo)(int), BTNSCOND_ZergNoCargo, 0x428780);
DECL_FUNC(int (__stdcall*BTNSCOND_IsLanded)(int), BTNSCOND_IsLanded, 0x4287d0);
DECL_FUNC(int (__stdcall*BTNSCOND_HasNuke)(int), BTNSCOND_HasNuke, 0x428810);
DECL_FUNC(int (__stdcall*BTNSCOND_TankMove)(int), BTNSCOND_TankMove, 0x428860);
DECL_FUNC(int(*sub_4288A0)(), sub_4288A0, 0x4288a0);
DECL_FUNC(int(*sub_4288C0)(), sub_4288C0, 0x4288c0);
DECL_FUNC(int (__stdcall*BTNSCOND_IsResearching)(int), BTNSCOND_IsResearching, 0x4288e0);
DECL_FUNC(int (__stdcall*BTNSCOND_isUpgrading)(int), BTNSCOND_isUpgrading, 0x428900);
DECL_FUNC(int (__stdcall*BTNSCOND_IsBuildingAddon)(int), BTNSCOND_IsBuildingAddon, 0x428920);
DECL_FUNC(int (__fastcall*BTNSCOND_SiloHasNoNuke)(UnitType a1, int player_id, CUnit *a2), BTNSCOND_SiloHasNoNuke, 0x428960);
DECL_FUNC(int (__stdcall*BTNSCOND_CanMoveSpecialCase)(int), BTNSCOND_CanMoveSpecialCase, 0x428d40);
DECL_FUNC(int (__stdcall*BTNSCOND_CanMove)(int), BTNSCOND_CanMove, 0x428da0);
DECL_FUNC(int (__fastcall*BTNSCOND_CanBuildUnit)(UnitType a1, int player_id, CUnit *a2), BTNSCOND_CanBuildUnit, 0x428e60);
DECL_FUNC(int (__stdcall*BTNSCOND_HasUnit)(int), BTNSCOND_HasUnit, 0x428ea0);
DECL_FUNC(int (__stdcall*BTNSCOND_Stationary)(int), BTNSCOND_Stationary, 0x428ed0);
DECL_FUNC(int (__stdcall*BTNSCOND_CanAttack)(int), BTNSCOND_CanAttack, 0x428f30);
DECL_FUNC(int (__stdcall*BTNSCOND_BattleOrders)(int), BTNSCOND_BattleOrders, 0x428fa0);
DECL_FUNC(int (__stdcall*BTNSCOND_HasRoom)(int), BTNSCOND_HasRoom, 0x428ff0);
DECL_FUNC(int (__stdcall*BTNSCOND_CanBurrow)(int), BTNSCOND_CanBurrow, 0x4290f0);
DECL_FUNC(signed int (__fastcall*BTNSCOND_IsSieged)(int a1, int a2, CUnit *a3), BTNSCOND_IsSieged, 0x429170);
DECL_FUNC(char (__fastcall*BTNSCOND_IsUnsieged)(int a1, int a2, CUnit *a3), BTNSCOND_IsUnsieged, 0x4291c0);
DECL_FUNC(int (__stdcall*BTNSCOND_IsCloaked)(int), BTNSCOND_IsCloaked, 0x429210);
DECL_FUNC(int (__stdcall*BTNSCOND_CanCloak)(int), BTNSCOND_CanCloak, 0x4292c0);
DECL_FUNC(int (__stdcall*BTNSCOND_IsCloaked_0)(int), BTNSCOND_IsCloaked_0, 0x429370);
DECL_FUNC(int (__stdcall*BTNSCOND_CanCloak_0)(int), BTNSCOND_CanCloak_0, 0x4293e0);
DECL_FUNC(int (__stdcall*BTNSCOND_CanUpgrade)(int), BTNSCOND_CanUpgrade, 0x429450);
DECL_FUNC(int (__stdcall*BTNSCOND_HasSpidermines)(int), BTNSCOND_HasSpidermines, 0x429470);
DECL_FUNC(bool (__fastcall*BTNSCOND_HasTech)(Tech a1, int a2, CUnit *unit), BTNSCOND_HasTech, 0x4294e0);
DECL_FUNC(int (__fastcall*BTNSCOND_CanResearch)(Tech a1, int a2, CUnit *a3), BTNSCOND_CanResearch, 0x429500);
DECL_FUNC(signed int (__fastcall*BTNSCOND_Rally)(int a1, int a2, CUnit *a3), BTNSCOND_Rally, 0x429520);
DECL_FUNC(int (__fastcall*BTNSCOND_CanMergeDarkArchonOneSelected)(Tech a1, int a2, CUnit *unit), BTNSCOND_CanMergeDarkArchonOneSelected, 0x429680);
DECL_FUNC(int (__fastcall*BTNSCOND_CanMergeArchonOneSelected)(Tech a1, int a2, CUnit *unit), BTNSCOND_CanMergeArchonOneSelected, 0x4296f0);
DECL_FUNC(signed int (__fastcall*BTNSCOND_HatcheryLairHiveRally)(int a1, int a2, CUnit *a3), BTNSCOND_HatcheryLairHiveRally, 0x429740);
DECL_FUNC(int(*BTNSACT_TargetOrderCancel)(), BTNSACT_TargetOrderCancel, 0x429770);
DECL_FUNC(int(*BTNSACT_CancelPlacement)(), BTNSACT_CancelPlacement, 0x429780);
DECL_FUNC(int(*nullsub_11)(), nullsub_11, 0x4297a0);
DECL_FUNC(int (__stdcall*sub_4297B0)(int), sub_4297B0, 0x4297b0);
DECL_FUNC(int (__stdcall*findContourInWork_3)(int, int, int), findContourInWork_3, 0x429800);
DECL_FUNC(int (__stdcall*findContourInWork_2)(int, int, int), findContourInWork_2, 0x4298c0);
DECL_FUNC(int (__stdcall*findContourInWork_1)(int, int, int), findContourInWork_1, 0x429990);
DECL_FUNC(int (__stdcall*findContourInWork_0)(int, int, int), findContourInWork_0, 0x429a60);
DECL_FUNC(signed int (__thiscall*isContourSpaceAvailable)(SaiContourHub *this_, int a2, int a3), isContourSpaceAvailable, 0x429b20);
DECL_FUNC(int (__stdcall*sub_429D50)(__int16, __int16, int), sub_429D50, 0x429d50);
DECL_FUNC(int (__stdcall*sub_42A1B0)(int, int, int), sub_42A1B0, 0x42a1b0);
DECL_FUNC(int (__stdcall*sub_42A570)(int), sub_42A570, 0x42a570);
DECL_FUNC(int (__stdcall*sub_42A5C0)(int, int, int), sub_42A5C0, 0x42a5c0);
DECL_FUNC(int (__stdcall*sub_42A840)(int), sub_42A840, 0x42a840);
DECL_FUNC(int(*sub_42A860)(), sub_42A860, 0x42a860);
DECL_FUNC(int (__stdcall*sub_42A8A0)(int), sub_42A8A0, 0x42a8a0);
DECL_FUNC(int (__stdcall*sub_42A8D0)(int, int, int), sub_42A8D0, 0x42a8d0);
DECL_FUNC(int (__stdcall*sub_42AB50)(int, int), sub_42AB50, 0x42ab50);
DECL_FUNC(int (__stdcall*sub_42ACB0)(int), sub_42ACB0, 0x42acb0);
BOOL InitializeSightValues(int max_sight_range, SightStruct *sight_data, int map_tile_width) {
    int address = 0x42ad60;
    BOOL result_;
    __asm {
        mov eax, max_sight_range
        mov ecx, sight_data
        push dword ptr map_tile_width
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_42AE30)(), sub_42AE30, 0x42ae30);
DECL_FUNC(int(*sub_42AE70)(), sub_42AE70, 0x42ae70);
DECL_FUNC(int (__stdcall*MD5)(int), MD5, 0x42ae90);
DECL_FUNC(int(*sub_42B500)(), sub_42B500, 0x42b500);
DECL_FUNC(int(*sub_42B530)(), sub_42B530, 0x42b530);
DECL_FUNC(int (__stdcall*sub_42B570)(int), sub_42B570, 0x42b570);
DECL_FUNC(int(*sub_42B5D0)(), sub_42B5D0, 0x42b5d0);
DECL_FUNC(int(*SAI_PathCreate_Sub1_1)(), SAI_PathCreate_Sub1_1, 0x42b620);
DECL_FUNC(int (__stdcall*SAI_ContoursCreate_1)(int, int, int), SAI_ContoursCreate_1, 0x42b760);
DECL_FUNC(int (__cdecl*PtFuncCompare)(const void *, const void *), PtFuncCompare, 0x42b850);
DECL_FUNC(int(*SAI_ContoursRealloc)(), SAI_ContoursRealloc, 0x42b8a0);
DECL_FUNC(int(*SAI_ContoursCreate_2)(), SAI_ContoursCreate_2, 0x42b9f0);
DECL_FUNC(int(*sai_contoursCreate_Cleanup)(), sai_contoursCreate_Cleanup, 0x42bbd0);
DECL_FUNC(int(*SAI_PathCreate_Sub1_0)(), SAI_PathCreate_Sub1_0, 0x42bc30);
void SAI_ContoursCreate(SaiContourHub *a1) {
    int address = 0x42c060;
    __asm {
        mov esi, a1
        call address
    }
}
void SAI_PathCreate_Sub4(SAI_Paths *a1) {
    int address = 0x42c5c0;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int(*TRGCND_Switch)(), TRGCND_Switch, 0x42c610);
DECL_FUNC(int(*TRGCND_Never)(), TRGCND_Never, 0x42c670);
DECL_FUNC(int(*TRGCND_Always)(), TRGCND_Always, 0x42c680);
DECL_FUNC(int(*sub_42C690)(), sub_42C690, 0x42c690);
DECL_FUNC(int(*sub_42C6A0)(), sub_42C6A0, 0x42c6a0);
DECL_FUNC(int(*sub_42C6B0)(), sub_42C6B0, 0x42c6b0);
DECL_FUNC(int(*TRGCND_ElapsedTime)(), TRGCND_ElapsedTime, 0x42c6e0);
DECL_FUNC(int(*TRGCND_CountdownTimer)(), TRGCND_CountdownTimer, 0x42c720);
DECL_FUNC(int(*TRGCND_LeastResources)(), TRGCND_LeastResources, 0x42c760);
DECL_FUNC(int(*TRGCND_MostResources)(), TRGCND_MostResources, 0x42c7d0);
DECL_FUNC(int(*TRGCND_LowestScore)(), TRGCND_LowestScore, 0x42c840);
DECL_FUNC(int(*TRGCND_HighestScore)(), TRGCND_HighestScore, 0x42c8b0);
DECL_FUNC(int(*TRGCND_LeastKills)(), TRGCND_LeastKills, 0x42c920);
DECL_FUNC(int(*TRGCND_MostKills)(), TRGCND_MostKills, 0x42c990);
DECL_FUNC(int(*TRGCND_CommandTheLeast)(), TRGCND_CommandTheLeast, 0x42ca00);
DECL_FUNC(int(*TRGCND_CommandTheMost)(), TRGCND_CommandTheMost, 0x42ca70);
DECL_FUNC(int(*TRGCND_Score)(), TRGCND_Score, 0x42cae0);
DECL_FUNC(int(*TRGCND_Opponents)(), TRGCND_Opponents, 0x42cb20);
DECL_FUNC(int(*TRGCND_Deaths)(), TRGCND_Deaths, 0x42cb60);
DECL_FUNC(int(*TRGCND_Kill)(), TRGCND_Kill, 0x42cba0);
DECL_FUNC(int(*TRGCND_Accumulate)(), TRGCND_Accumulate, 0x42cbe0);
DECL_FUNC(int(*TRGCND_Command)(), TRGCND_Command, 0x42cc20);
DECL_FUNC(int(*TRGCND_CommandTheLeastAt)(), TRGCND_CommandTheLeastAt, 0x42cc70);
DECL_FUNC(int(*TRGCND_CommandTheMostAt)(), TRGCND_CommandTheMostAt, 0x42ccf0);
DECL_FUNC(int(*TRGCND_Bring)(), TRGCND_Bring, 0x42cd70);
int sub_42CDD0(int result, int tech, int a3) {
    int address = 0x42cdd0;
    int result_;
    __asm {
        mov eax, result
        mov edx, tech
        mov ecx, a3
        call address
        mov result_, eax
    }
    return result_;
}
char getUnitCostInfo(int *mineral_cost_ptr, int *supply_cost_ptr, UnitType unit_type, int *gas_cost_ptr) {
    int address = 0x42cdf0;
    char result_;
    __asm {
        mov eax, mineral_cost_ptr
        mov edx, supply_cost_ptr
        mov cx, unit_type
        push dword ptr gas_cost_ptr
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*subtractMorphCost)(), subtractMorphCost, 0x42ce40);
int refundBuildingCost(UnitType a1, unsigned __int8 a2) {
    int address = 0x42ce70;
    int result_;
    __asm {
        mov ax, a1
        mov cl, a2
        call address
        mov result_, eax
    }
    return result_;
}
int refundUnitTrainCost(unsigned __int8 playerID, UnitType unitType) {
    int address = 0x42cec0;
    int result_;
    __asm {
        mov al, playerID
        mov cx, unitType
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_42CEF0)(), sub_42CEF0, 0x42cef0);
DECL_FUNC(int(*sub_42CF00)(), sub_42CF00, 0x42cf00);
DECL_FUNC(int(*sub_42CF10)(), sub_42CF10, 0x42cf10);
DECL_FUNC(int (__stdcall*sub_42CF20)(char, char), sub_42CF20, 0x42cf20);
void j_ShowErrorMessageWithSfx(int playerId, __int16 statTxtId, SfxData sfxId) {
    int address = 0x42cf60;
    __asm {
        mov ebx, playerId
        mov di, statTxtId
        mov esi, sfxId
        call address
    }
}
DECL_FUNC(signed int (__stdcall*hasSuppliesForUnit)(u8 playerID, UnitType unit_type, int a3), hasSuppliesForUnit, 0x42cf70);
DECL_FUNC(int(*sub_42D0C0)(), sub_42D0C0, 0x42d0c0);
int sub_42D140(UnitType a1, u8 a2, int a3, int a4) {
    int address = 0x42d140;
    int result_;
    __asm {
        mov dx, a1
        mov bl, a2
        mov esi, a3
        push dword ptr a4
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_42D190)(int), sub_42D190, 0x42d190);
DECL_FUNC(int (__fastcall*sub_42D240)(int a1, Tech a2, int a3), sub_42D240, 0x42d240);
DECL_FUNC(int(*refreshImageData)(), refreshImageData, 0x42d280);
DECL_FUNC(int(*sub_42D330)(), sub_42D330, 0x42d330);
DECL_FUNC(int(*sub_42D350)(), sub_42D350, 0x42d350);
DECL_FUNC(int(*sub_42D370)(), sub_42D370, 0x42d370);
DECL_FUNC(int(*sub_42D400)(), sub_42D400, 0x42d400);
DECL_FUNC(int(*getFirstSprite)(), getFirstSprite, 0x42d460);
DECL_FUNC(int(*sub_42D4C0)(), sub_42D4C0, 0x42d4c0);
DECL_FUNC(int(*isVisible)(), isVisible, 0x42d560);
DECL_FUNC(int(*sub_42D600)(), sub_42D600, 0x42d600);
DECL_FUNC(int(*getUnitCollision_CB)(), getUnitCollision_CB, 0x42d650);
BOOL sub_42D6B0(CUnit *a1, __int16 a2, __int16 a3, unsigned __int16 a4, __int16 a5, __int16 a6) {
    int address = 0x42d6b0;
    BOOL result_;
    __asm {
        mov eax, a1
        mov cx, a2
        mov bx, a3
        push dword ptr a6
        push dword ptr a5
        push dword ptr a4
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*canDimensionsFitAt)(int, int, int, int), canDimensionsFitAt, 0x42d740);
int canUnitTypeFitAt(signed int a1, UnitType a2, __int16 a3) {
    int address = 0x42d810;
    int result_;
    __asm {
        mov eax, a1
        mov bx, a2
        mov di, a3
        call address
        mov result_, eax
    }
    return result_;
}
char sub_42D890(CUnit *a1, int a2, int a3) {
    int address = 0x42d890;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        mov ebx, a3
        call address
        mov result_, al
    }
    return result_;
}
void sub_42D8C0(CUnit *a1) {
    int address = 0x42d8c0;
    __asm {
        mov esi, a1
        call address
    }
}
int getUnitCollision(CUnit *a1) {
    int address = 0x42d9a0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(BOOL (__fastcall*sub_42DA00)(int a1, CUnit *a2, unsigned __int16 a3, __int16 a4, __int16 a5), sub_42DA00, 0x42da00);
DECL_FUNC(signed int (__fastcall*sub_42DA90)(int a1, CUnit *a2, CUnit *a3, int a4), sub_42DA90, 0x42da90);
signed int sub_42DB50(CUnit *a1, int a2, int a3, int a4) {
    int address = 0x42db50;
    signed result_;
    __asm {
        mov ebx, a1
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
signed int sub_42DEE0(CUnit *a1, CUnit *a2) {
    int address = 0x42dee0;
    signed result_;
    __asm {
        mov edx, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
int sub_42DF70(CUnit *a1, CUnit *a2) {
    int address = 0x42df70;
    int result_;
    __asm {
        mov eax, a1
        mov edx, a2
        call address
        mov result_, eax
    }
    return result_;
}
int sub_42E000(__int16 a1, CUnit *a2, int a3, int a4) {
    int address = 0x42e000;
    int result_;
    __asm {
        mov ax, a1
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
int sub_42E0E0(CUnit *a1, int a2) {
    int address = 0x42e0e0;
    int result_;
    __asm {
        mov eax, a1
        mov edi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_42E170)(int), sub_42E170, 0x42e170);
DECL_FUNC(int (__stdcall*sub_42E1D0)(CUnit *a1, int a2), sub_42E1D0, 0x42e1d0);
int orders_ResetCollision2(CUnit *a1) {
    int address = 0x42e320;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*nullsub_12)(), nullsub_12, 0x42e430);
DECL_FUNC(void (__thiscall*nullsub_1)(bool exit_code), nullsub_1, 0x42e440);
DECL_FUNC(int(*sub_42E450)(), sub_42E450, 0x42e450);
DECL_FUNC(int(*sub_42E460)(), sub_42E460, 0x42e460);
DECL_FUNC(int (__stdcall*sub_42E470)(int), sub_42E470, 0x42e470);
DECL_FUNC(int(*sub_42E4F0)(), sub_42E4F0, 0x42e4f0);
DECL_FUNC(BOOL (__stdcall*CreatePath_PullContours)(_DWORD a1, int a2, unsigned __int16 a3), CreatePath_PullContours, 0x42e600);
char GetClosestReachable(char a1, CUnit *a2) {
    int address = 0x42efa0;
    char result_;
    __asm {
        mov di, word ptr a1
        mov esi, a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*nullsub_13)(), nullsub_13, 0x42f340);
DECL_FUNC(int(*nullsub_14)(), nullsub_14, 0x42f350);
DECL_FUNC(int(*nullsub_15)(), nullsub_15, 0x42f360);
char *getUnitRankString(CUnit *a1) {
    int address = 0x42f370;
    char * result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_42F440)(), sub_42F440, 0x42f440);
DECL_FUNC(int(*sub_42F480)(), sub_42F480, 0x42f480);
DECL_FUNC(int(*sub_42F4C0)(), sub_42F4C0, 0x42f4c0);
DECL_FUNC(int(*AllocAIPathPool)(), AllocAIPathPool, 0x42f4f0);
DECL_FUNC(int(*nullsub_16)(), nullsub_16, 0x42f550);
DECL_FUNC(int(*createUnitPathFromPathCreate)(), createUnitPathFromPathCreate, 0x42f560);
DECL_FUNC(int(*sub_42F600)(), sub_42F600, 0x42f600);
DECL_FUNC(int (__stdcall*sub_42F650)(int, int, int), sub_42F650, 0x42f650);
signed int unitSubtractPathDelayAndCheck(CUnit *a1) {
    int address = 0x42f700;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*unitSetPathDelay)(char), unitSetPathDelay, 0x42f720);
int reAssignPath(CUnit *a1) {
    int address = 0x42f740;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*assignPathCreateFromUnitPath)(), assignPathCreateFromUnitPath, 0x42f790);
DECL_FUNC(int (__stdcall*getAllocatedPathSingleStep)(int, int), getAllocatedPathSingleStep, 0x42f830);
DECL_FUNC(int(*getUnitDistanceToPathEnd)(), getUnitDistanceToPathEnd, 0x42f8f0);
signed int isLargePath(CUnit *a1, int a2) {
    int address = 0x42f920;
    signed result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*unitHasPathToDestOnGround)(__int16), unitHasPathToDestOnGround, 0x42fa00);
DECL_FUNC(int (__stdcall*unitGetImaginaryPathDistanceToPosition)(int), unitGetImaginaryPathDistanceToPosition, 0x42fa30);
signed int sub_42FC10(CUnit *a1, int a2, int a3) {
    int address = 0x42fc10;
    signed result_;
    __asm {
        mov eax, a1
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*UMAnotherPath)(int), UMAnotherPath, 0x42fe00);
DECL_FUNC(int(*sub_42FE90)(), sub_42FE90, 0x42fe90);
DECL_FUNC(int(*sub_42FEC0)(), sub_42FEC0, 0x42fec0);
DECL_FUNC(int(*resetUnitBoundsLists_GetMaxUnitTypeSize)(), resetUnitBoundsLists_GetMaxUnitTypeSize, 0x42fee0);
DECL_FUNC(int(*getAllUnitsInBounds)(), getAllUnitsInBounds, 0x42ff80);
DECL_FUNC(int (__stdcall*getUnitsAtPoint)(int), getUnitsAtPoint, 0x4300e0);
DECL_FUNC(int (__stdcall*UnitRelManyFinderUMScoutPath)(int, int), UnitRelManyFinderUMScoutPath, 0x430190);
DECL_FUNC(int (__stdcall*unkUnitRelManyFinderEx)(int), unkUnitRelManyFinderEx, 0x4304d0);
DECL_FUNC(int (__stdcall*FindAllUnits)(int), FindAllUnits, 0x4308a0);
DECL_FUNC(int (__stdcall*findAllUnitsInBoundsUsing)(int, int), findAllUnitsInBoundsUsing, 0x430b00);
DECL_FUNC(int (__stdcall*getAllUnitsInRegion)(__int16), getAllUnitsInRegion, 0x430b50);
DECL_FUNC(int (__stdcall*getClosestReachableUnit)(CUnit *a1, signed __int16 a2, __int16 a3), getClosestReachableUnit, 0x430be0);
unsigned int sub_430D30(CUnit *a1, CUnit *a2) {
    int address = 0x430d30;
    unsigned result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__thiscall*sub_430E50)(CUnit *this_, __int16 a2, __int16 a3), sub_430E50, 0x430e50);
DECL_FUNC(BOOL (__thiscall*isTargetWithinMinRange)(CUnit *this_, unsigned int min_range, CUnit *target), isTargetWithinMinRange, 0x430f10);
DECL_FUNC(int (__stdcall*sub_431030)(int), sub_431030, 0x431030);
DECL_FUNC(int(*sub_4310F0)(), sub_4310F0, 0x4310f0);
DECL_FUNC(int(*sub_431100)(), sub_431100, 0x431100);
signed int sub_431110(signed int unitType) {
    int address = 0x431110;
    signed result_;
    __asm {
        mov eax, unitType
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*filterUnitStrength)(), filterUnitStrength, 0x431150);
int sub_431200(WeaponType weapon_type) {
    int address = 0x431200;
    int result_;
    __asm {
        mov al, weapon_type
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_431230)(), sub_431230, 0x431230);
DECL_FUNC(int(*sub_431240)(), sub_431240, 0x431240);
DECL_FUNC(int(*sub_431250)(), sub_431250, 0x431250);
int calcUnitStrength(int a1, WeaponType weapon_type) {
    int address = 0x431270;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr weapon_type
        call address
        mov result_, eax
    }
    return result_;
}
int sub_431320(signed int unitType) {
    int address = 0x431320;
    int result_;
    __asm {
        mov esi, unitType
        call address
        mov result_, eax
    }
    return result_;
}
int sub_431370(signed int unit_type) {
    int address = 0x431370;
    int result_;
    __asm {
        mov esi, unit_type
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(void(*calculateUnitStrengths)(void), calculateUnitStrengths, 0x4313c0);
int sub_4314F0(CUnit *a1, int a2) {
    int address = 0x4314f0;
    int result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
int sub_431550(int a1, CUnit *a2) {
    int address = 0x431550;
    int result_;
    __asm {
        mov ecx, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*BeefUnitStrength_AirOrGround)(), BeefUnitStrength_AirOrGround, 0x4315e0);
int getUnitStrength_AirOrGround(int a1, CUnit *a2) {
    int address = 0x4316d0;
    int result_;
    __asm {
        mov eax, a1
        mov edi, a2
        call address
        mov result_, eax
    }
    return result_;
}
int GetAlteredUnitStrength(int a1, CUnit *a2) {
    int address = 0x431730;
    int result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
unsigned int getUnitStrength(CUnit *a1, int a2) {
    int address = 0x431800;
    unsigned result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_4318E0)(int, int), sub_4318E0, 0x4318e0);
CUnit *GetStrongestUnitInX_AirOrGround(int *a1, int a2, CUnit *a3, int a4, int a5) {
    int address = 0x431990;
    CUnit * result_;
    __asm {
        mov eax, a1
        push dword ptr a5
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_431CE0)(int), sub_431CE0, 0x431ce0);
DECL_FUNC(int (__stdcall*sub_431D00)(int), sub_431D00, 0x431d00);
DECL_FUNC(int (__stdcall*sub_431DA0)(int), sub_431DA0, 0x431da0);
DECL_FUNC(int (__stdcall*sub_431DC0)(int), sub_431DC0, 0x431dc0);
CUnit *GetStrongestUnitInRegion_AirOrGround(CUnit *a1, int a2) {
    int address = 0x431de0;
    CUnit * result_;
    __asm {
        mov esi, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
int AI_GetStrongestGroundUnit(CUnit *a1) {
    int address = 0x431e90;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
int AI_GetStrongestAirUnit(CUnit *a1) {
    int address = 0x431ee0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_431F30)(), sub_431F30, 0x431f30);
DECL_FUNC(int(*AI_GetExpansionCount)(), AI_GetExpansionCount, 0x431f40);
DECL_FUNC(int (__stdcall*sub_431F60)(int), sub_431F60, 0x431f60);
int AI_BuildAndTechAndUpgrade(_DWORD a1, char a2, char a3, __int16 a4, char a5, char a6) {
    int address = 0x431f90;
    int result_;
    __asm {
        mov esi, a1
        push dword ptr a6
        push dword ptr a5
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_431FF0)(int), sub_431FF0, 0x431ff0);
DECL_FUNC(int (__stdcall*CreateTown)(__int16, __int16), CreateTown, 0x432020);
DECL_FUNC(int(*nullsub_17)(), nullsub_17, 0x4320c0);
int getPlayerDefaultRefineryUnitType(int playerID) {
    int address = 0x4320d0;
    int result_;
    __asm {
        mov eax, playerID
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_432100)(), sub_432100, 0x432100);
DECL_FUNC(int(*getDefaultWorkerUnitType)(), getDefaultWorkerUnitType, 0x432130);
DECL_FUNC(int(*sub_432150)(), sub_432150, 0x432150);
DECL_FUNC(int(*sub_432170)(), sub_432170, 0x432170);
DECL_FUNC(int(*AISomethingToID)(), AISomethingToID, 0x432180);
DECL_FUNC(int(*sub_4321A0)(), sub_4321A0, 0x4321a0);
DECL_FUNC(int(*sub_4321B0)(), sub_4321B0, 0x4321b0);
DECL_FUNC(int(*sub_4321D0)(), sub_4321D0, 0x4321d0);
DECL_FUNC(int(*sub_4321F0)(), sub_4321F0, 0x4321f0);
DECL_FUNC(int(*nullsub_18)(), nullsub_18, 0x432220);
DECL_FUNC(int(*nullsub_19)(), nullsub_19, 0x432230);
DECL_FUNC(int(*sub_432240)(), sub_432240, 0x432240);
DECL_FUNC(int (__stdcall*AI_RegionSize)(int, int), AI_RegionSize, 0x432260);
DECL_FUNC(int(*AI_getNumOwnedMineralClusters)(), AI_getNumOwnedMineralClusters, 0x432320);
DECL_FUNC(int(*playerHasAverageResources)(), playerHasAverageResources, 0x432360);
DECL_FUNC(int(*sub_4323B0)(), sub_4323B0, 0x4323b0);
DECL_FUNC(int(*sub_4323C0)(), sub_4323C0, 0x4323c0);
DECL_FUNC(int (__stdcall*AI_Build)(int), AI_Build, 0x4323d0);
DECL_FUNC(int (__stdcall*sub_432400)(char, int), sub_432400, 0x432400);
DECL_FUNC(int(*isUnitOwnedBy)(), isUnitOwnedBy, 0x432420);
DECL_FUNC(int(*sub_432430)(), sub_432430, 0x432430);
DECL_FUNC(int(*sub_432450)(), sub_432450, 0x432450);
signed int isUnitTypeRaceUnitRace(unsigned __int16 a1, CUnit *a2) {
    int address = 0x432480;
    signed result_;
    __asm {
        mov ax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4324E0)(), sub_4324E0, 0x4324e0);
DECL_FUNC(int(*sub_432500)(), sub_432500, 0x432500);
DECL_FUNC(int(*sub_432530)(), sub_432530, 0x432530);
DECL_FUNC(int(*sub_4325A0)(), sub_4325A0, 0x4325a0);
DECL_FUNC(int(*initAITownMgr)(), initAITownMgr, 0x432610);
DECL_FUNC(int (__stdcall*sub_4326A0)(int), sub_4326A0, 0x4326a0);
int AI_getVespeneType(CUnit *a1, int player) {
    int address = 0x4326e0;
    int result_;
    __asm {
        mov eax, a1
        mov edx, player
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__thiscall*AI_Unassign)(CUnit *this_), AI_Unassign, 0x432760);
BOOL sub_4327D0(CUnit *a1) {
    int address = 0x4327d0;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*unpackTownMgr_02_Unit_Data)(), unpackTownMgr_02_Unit_Data, 0x432810);
DECL_FUNC(int (__stdcall*sub_4328E0)(int), sub_4328E0, 0x4328e0);
DECL_FUNC(int(*sub_4329F0)(), sub_4329F0, 0x4329f0);
DECL_FUNC(int(*sub_432A30)(), sub_432A30, 0x432a30);
DECL_FUNC(int(*AI_getClosestEnemyRace)(), AI_getClosestEnemyRace, 0x432aa0);
DECL_FUNC(int(*RegionContainsWorkerOrBuilding)(), RegionContainsWorkerOrBuilding, 0x432ad0);
DECL_FUNC(int(*sub_432B30)(), sub_432B30, 0x432b30);
bool AI_CanBuild(CUnit *a1, UnitType unit_type) {
    int address = 0x432b60;
    bool result_;
    __asm {
        mov eax, a1
        mov bx, unit_type
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__stdcall*GetAIRefinery)(int, int), GetAIRefinery, 0x432b90);
DECL_FUNC(int (__stdcall*WriteAITownData)(FILE *), WriteAITownData, 0x432da0);
DECL_FUNC(int (__stdcall*isGroundMap)(int), isGroundMap, 0x433110);
DECL_FUNC(int(*getGuardXY)(), getGuardXY, 0x433190);
DECL_FUNC(int (__stdcall*AI_WaitBuild)(int, int), AI_WaitBuild, 0x433210);
DECL_FUNC(int(*sub_433410)(), sub_433410, 0x433410);
DECL_FUNC(int (__stdcall*sub_433470)(int), sub_433470, 0x433470);
DECL_FUNC(int (__stdcall*sub_4335F0)(int, int), sub_4335F0, 0x4335f0);
int AI_FinishUnit(_DWORD a1, CUnit *a2) {
    int address = 0x433640;
    int result_;
    __asm {
        mov edx, a1
        mov edi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_433660)(), sub_433660, 0x433660);
DECL_FUNC(int (__stdcall*sub_433730)(int), sub_433730, 0x433730);
DECL_FUNC(int (__stdcall*AI_UnitConstructionBehaviour)(int a1, CUnit *a2, int a3), AI_UnitConstructionBehaviour, 0x433890);
char AI_AutoHarvest(CUnit *a1, CUnit *a2, CUnit *a3) {
    int address = 0x433b90;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        push dword ptr a3
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__stdcall*AI_SCVRepairController)(CUnit *, int), AI_SCVRepairController, 0x433c70);
char AI_AddUnitToTown(CUnit *a1, int a2) {
    int address = 0x433dd0;
    char result_;
    __asm {
        mov ebx, a1
        mov edi, a2
        call address
        mov result_, al
    }
    return result_;
}
int sub_433FE0(CUnit *a1, int a2) {
    int address = 0x433fe0;
    int result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
char sub_434020(CUnit *a1, int a2) {
    int address = 0x434020;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__stdcall*AI_StartAreaTown)(int, int), AI_StartAreaTown, 0x434060);
DECL_FUNC(int (__stdcall*AI_StartTown)(int, int, int), AI_StartTown, 0x434220);
DECL_FUNC(int(*sub_434330)(), sub_434330, 0x434330);
char sub_434450(CUnit *a1) {
    int address = 0x434450;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_434480)(int, int, int), sub_434480, 0x434480);
void AI_ResearchBehaviour(CUnit *a1, int player_id) {
    int address = 0x4345c0;
    __asm {
        mov eax, a1
        mov ecx, player_id
        call address
    }
}
void AI_UpgradeBehaviour(CUnit *a1, int player_id) {
    int address = 0x434670;
    __asm {
        mov eax, a1
        mov ecx, player_id
        call address
    }
}
signed int AI_TrainBehaviour(CUnit *a1, int a2, int a3) {
    int address = 0x434720;
    signed result_;
    __asm {
        mov eax, a1
        mov edx, a2
        mov ebx, a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(signed int (__stdcall*AttendTownNeeds)(int a1, CUnit *a2), AttendTownNeeds, 0x4348c0);
signed int DetachUnitTaskFromTown(CUnit *a1, int a2) {
    int address = 0x434c90;
    signed result_;
    __asm {
        mov edi, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
void AI_NukeSiloBehaviour(CUnit *a1) {
    int address = 0x434d50;
    __asm {
        mov eax, a1
        call address
    }
}
void AI_OverlordBehaviour(CUnit *a1) {
    int address = 0x434df0;
    __asm {
        mov eax, a1
        call address
    }
}
int AI_ConstructAddonBehaviour(int a1, CUnit *a2, int a3) {
    int address = 0x434e70;
    int result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
signed int AI_MorphBehaviour(int a1, int a2, CUnit *a3, int a4) {
    int address = 0x434ff0;
    signed result_;
    __asm {
        mov edx, a1
        mov ebx, a2
        push dword ptr a4
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(void (__stdcall*AIWorkerController)(CUnit *a1), AIWorkerController, 0x435210);
DECL_FUNC(int (__stdcall*AI_GetOldPeons)(int, int), AI_GetOldPeons, 0x4355c0);
int AI_TrainingWorker(CUnit *a1, CUnit *a2) {
    int address = 0x435700;
    int result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
__int16 AI_TrainingOverlord(CUnit *a1, CUnit *a2) {
    int address = 0x435770;
    __int16 result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, ax
    }
    return result_;
}
char sub_4358D0(CUnit *result) {
    int address = 0x4358d0;
    char result_;
    __asm {
        mov eax, result
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*sub_435900)(), sub_435900, 0x435900);
DECL_FUNC(int(*AI_PanicControl)(), AI_PanicControl, 0x435bd0);
void AI_TrainingNormal(CUnit *a1, CUnit *a2) {
    int address = 0x435db0;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
    }
}
DECL_FUNC(int (__stdcall*AI_PlanDoMergeMorph)(int player_id, int, int), AI_PlanDoMergeMorph, 0x435f10);
DECL_FUNC(signed int (__thiscall*AI_PerformTask)(CUnit *this_), AI_PerformTask, 0x4361a0);
DECL_FUNC(int (__stdcall*AI_UpgradesFinished)(int), AI_UpgradesFinished, 0x436320);
DECL_FUNC(int(*sub_436880)(), sub_436880, 0x436880);
DECL_FUNC(int(*sub_4368B0)(), sub_4368B0, 0x4368b0);
DECL_FUNC(int (__stdcall*sub_4368C0)(int, int), sub_4368C0, 0x4368c0);
DECL_FUNC(int(*sub_4368F0)(), sub_4368F0, 0x4368f0);
BOOL OrderIsSpell(Order order) {
    int address = 0x436930;
    BOOL result_;
    __asm {
        mov al, order
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*DecCaptainScalerCounterValue)(), DecCaptainScalerCounterValue, 0x436980);
DECL_FUNC(int(*sub_4369D0)(), sub_4369D0, 0x4369d0);
BOOL sub_4369F0(AiCaptain *a1) {
    int address = 0x4369f0;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_436A10)(), sub_436A10, 0x436a10);
DECL_FUNC(int(*sub_436A20)(), sub_436A20, 0x436a20);
DECL_FUNC(int(*freeAICaptains)(), freeAICaptains, 0x436a40);
DECL_FUNC(int(*allocateAICaptains)(), allocateAICaptains, 0x436a80);
DECL_FUNC(int(*nullsub_20)(), nullsub_20, 0x436ad0);
int Unit__hasNoCaptainType(CUnit *a1) {
    int address = 0x436ae0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*AI_getZergAirScore)(char), AI_getZergAirScore, 0x436b10);
DECL_FUNC(int (__stdcall*AI_getZergGroundScore)(char), AI_getZergGroundScore, 0x436b40);
DECL_FUNC(int (__stdcall*AI_getTerranInfantryScore)(char), AI_getTerranInfantryScore, 0x436b60);
DECL_FUNC(int(*AI_WaitTurrets)(), AI_WaitTurrets, 0x436b90);
DECL_FUNC(int(*AI_WaitBunkers)(), AI_WaitBunkers, 0x436bd0);
DECL_FUNC(int (__stdcall*AISomethingHasOwnershipOfRegion)(int, __int16), AISomethingHasOwnershipOfRegion, 0x436c10);
DECL_FUNC(int(*AI_isAttacking)(), AI_isAttacking, 0x436c90);
DECL_FUNC(int(*PopulateRgnsWithSecondaryEnemyNeighbors)(), PopulateRgnsWithSecondaryEnemyNeighbors, 0x436cf0);
DECL_FUNC(int(*PopulateRgnsWithNeighbors)(), PopulateRgnsWithNeighbors, 0x436d80);
DECL_FUNC(int (__stdcall*sub_436E10)(int), sub_436E10, 0x436e10);
int UNIT_FinishedSummon(CUnit *a1) {
    int address = 0x436e40;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*IsMilitaryCaptain)(int), IsMilitaryCaptain, 0x436e70);
signed int sub_436EB0(AiCaptain *a1) {
    int address = 0x436eb0;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(BOOL (__thiscall*loadedProc_UnitIsFirebat)(CUnit *this_), loadedProc_UnitIsFirebat, 0x436ef0);
DECL_FUNC(int(*sub_436F00)(), sub_436F00, 0x436f00);
DECL_FUNC(int(*j_freeAICaptains)(), j_freeAICaptains, 0x436f60);
DECL_FUNC(int (__stdcall*AssignCaptainToSlowestUnit)(AiCaptain *a1), AssignCaptainToSlowestUnit, 0x436f70);
DECL_FUNC(int(*isUnknownSpellcaster)(), isUnknownSpellcaster, 0x437000);
DECL_FUNC(int (__stdcall*RecalcRegionPriorities)(int), RecalcRegionPriorities, 0x437070);
DECL_FUNC(int (__stdcall*IsRegionANeighborOfRegionB)(__int16), IsRegionANeighborOfRegionB, 0x437180);
int sub_4371D0(int result, AiCaptain *a2) {
    int address = 0x4371d0;
    int result_;
    __asm {
        mov eax, result
        mov edx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_437230)(), sub_437230, 0x437230);
DECL_FUNC(int(*playerHasTransports)(), playerHasTransports, 0x437250);
DECL_FUNC(int(*sub_437290)(), sub_437290, 0x437290);
DECL_FUNC(unsigned int (__thiscall*sub_4372E0)(_DWORD this_), sub_4372E0, 0x4372e0);
DECL_FUNC(int (__stdcall*AI_GetDarkTemplarsForSummon)(int), AI_GetDarkTemplarsForSummon, 0x437320);
DECL_FUNC(int (__stdcall*AI_GetHighTemplarsForSummon)(int, int, int), AI_GetHighTemplarsForSummon, 0x437410);
DECL_FUNC(int(*AI_GetHydraliskForMorph)(), AI_GetHydraliskForMorph, 0x437570);
DECL_FUNC(int(*AI_GetMutaliskForMorph)(), AI_GetMutaliskForMorph, 0x4375f0);
DECL_FUNC(int(*GetTurretPosition)(), GetTurretPosition, 0x437670);
DECL_FUNC(int(*GetBunkerPosition)(), GetBunkerPosition, 0x4376f0);
DECL_FUNC(int (__stdcall*populateAttackRegions)(int, int, int, int, int), populateAttackRegions, 0x437770);
DECL_FUNC(int (__stdcall*sub_4379B0)(int, int), sub_4379B0, 0x4379b0);
DECL_FUNC(int (__stdcall*InitRegionCaptains)(int), InitRegionCaptains, 0x437a70);
DECL_FUNC(int(*isCaptainTrackingNonCritter)(), isCaptainTrackingNonCritter, 0x437e00);
DECL_FUNC(int(*isImportantRegionAccessible)(), isImportantRegionAccessible, 0x437e70);
DECL_FUNC(int(*sub_437F20)(), sub_437F20, 0x437f20);
DECL_FUNC(unsigned int (__stdcall*sub_438050)(AiCaptain *a1, int a2, int a3), sub_438050, 0x438050);
DECL_FUNC(signed int (__thiscall*isAIControllerNotABuilding)(CUnit *this_), isAIControllerNotABuilding, 0x4381d0);
DECL_FUNC(int(*sub_438200)(), sub_438200, 0x438200);
DECL_FUNC(int(*packAIPathingData)(), packAIPathingData, 0x438240);
DECL_FUNC(int(*sub_4382C0)(), sub_4382C0, 0x4382c0);
DECL_FUNC(int (__thiscall*sub_4383B0)(CUnit *this_), sub_4383B0, 0x4383b0);
DECL_FUNC(int (__thiscall*sub_4383E0)(CUnit *this_), sub_4383E0, 0x4383e0);
DECL_FUNC(signed int (__fastcall*sub_438410)(int a1, CUnit *a2), sub_438410, 0x438410);
DECL_FUNC(int (__thiscall*sub_438470)(CUnit *this_), sub_438470, 0x438470);
DECL_FUNC(int(*isUnitTypeFoundInRegion)(), isUnitTypeFoundInRegion, 0x4384a0);
DECL_FUNC(u8 (__stdcall*AI_PatrolController)(CUnit *a1, int a2, int *a3), AI_PatrolController, 0x4384f0);
DECL_FUNC(int(*AI_BuildTurrets)(), AI_BuildTurrets, 0x4387e0);
DECL_FUNC(int(*AI_BuildBunkers)(), AI_BuildBunkers, 0x438870);
int sub_438910(CUnit *a1) {
    int address = 0x438910;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*getBestAttackRegion_LeastEnemyStrength)(int, int, int), getBestAttackRegion_LeastEnemyStrength, 0x438980);
DECL_FUNC(int (__stdcall*PopulateRgnsWithOwn)(int), PopulateRgnsWithOwn, 0x438b30);
int getAIRegionInfoFromUnitLocation(CUnit *a1) {
    int address = 0x438bf0;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_438C20)(CUnit *a1), sub_438C20, 0x438c20);
DECL_FUNC(int(*sub_438E10)(), sub_438E10, 0x438e10);
DECL_FUNC(int (__stdcall*sub_438E70)(signed int y, signed int x), sub_438E70, 0x438e70);
DECL_FUNC(int(*sub_438EF0)(), sub_438EF0, 0x438ef0);
DECL_FUNC(int (__fastcall*CB_AICaptainStrengthIterator)(CUnit *a1, CUnit *a2), CB_AICaptainStrengthIterator, 0x438f60);
void getAITownCapabilities(AiCaptain *a1, int a2, int a3, int a4) {
    int address = 0x438fc0;
    __asm {
        mov eax, a1
        mov ebx, a2
        mov edi, a3
        mov esi, a4
        call address
    }
}
DECL_FUNC(int(*sub_439050)(), sub_439050, 0x439050);
char AI_AssignCaptain(int a1, AiCaptain *a2) {
    int address = 0x4390a0;
    char result_;
    __asm {
        mov ebx, a1
        mov esi, a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__stdcall*WriteAIPathCaptainData)(FILE *), WriteAIPathCaptainData, 0x4392f0);
DECL_FUNC(int (__stdcall*AI_Implode)(int), AI_Implode, 0x4393e0);
DECL_FUNC(BOOL (__fastcall*AI_EnterTransportProc)(CUnit *a1, CUnit *a2), AI_EnterTransportProc, 0x4394a0);
DECL_FUNC(int (__stdcall*AI_AttackClear)(int), AI_AttackClear, 0x439500);
signed int sub_439550(CUnit *a1) {
    int address = 0x439550;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*AI_ClearCombatData)(int, int), AI_ClearCombatData, 0x439660);
DECL_FUNC(int (__stdcall*AI_ValueArea)(int), AI_ValueArea, 0x4396f0);
DECL_FUNC(signed int (__stdcall*AI_GetSpiderMineLocations)(CUnit *a1, int a2, int a3), AI_GetSpiderMineLocations, 0x439740);
DECL_FUNC(int (__stdcall*AssignMilitaryToRegion)(int, int, int, int, int), AssignMilitaryToRegion, 0x4399d0);
DECL_FUNC(int (__stdcall*PopulateRgnsWithEnemy)(int, int), PopulateRgnsWithEnemy, 0x439b50);
DECL_FUNC(int (__stdcall*AI_CaptExpand)(int, int), AI_CaptExpand, 0x439c00);
DECL_FUNC(int(*sub_439D50)(), sub_439D50, 0x439d50);
DECL_FUNC(signed int (__stdcall*ClearUnitFromGlobalAIEntry)(CUnit *a1, int a2), ClearUnitFromGlobalAIEntry, 0x439d60);
DECL_FUNC(int (__stdcall*AI_HelpIfTrouble)(int), AI_HelpIfTrouble, 0x439f50);
DECL_FUNC(char (__stdcall*AI_MakeGuard)(int a1, CUnit *a2), AI_MakeGuard, 0x43a010);
DECL_FUNC(int (__stdcall*sub_43A1D0)(int, int), sub_43A1D0, 0x43a1d0);
DECL_FUNC(int(*sub_43A250)(), sub_43A250, 0x43a250);
DECL_FUNC(int(*sub_43A2E0)(), sub_43A2E0, 0x43a2e0);
unsigned int sub_43A390(AiCaptain *a1) {
    int address = 0x43a390;
    unsigned result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(CUnit *(__stdcall*sub_43A510)(AiCaptain *a1), sub_43A510, 0x43a510);
DECL_FUNC(signed int (__stdcall*sub_43A790)(AiCaptain *a1, AiCaptain *a2), sub_43A790, 0x43a790);
DECL_FUNC(int (__stdcall*sub_43A8F0)(int, signed int y, signed int x), sub_43A8F0, 0x43a8f0);
signed int sub_43AA10(CUnit *a1) {
    int address = 0x43aa10;
    signed result_;
    __asm {
        mov ebx, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*AI_BuildTurret)(int, int), AI_BuildTurret, 0x43aae0);
DECL_FUNC(int (__stdcall*AI_AttackManager)(int, int, int, int, int), AI_AttackManager, 0x43abb0);
int sub_43AD60(CUnit *a1, CUnit *a2) {
    int address = 0x43ad60;
    int result_;
    __asm {
        mov edi, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_43ADA0)(CUnit *a1, CUnit *a2, int a3), sub_43ADA0, 0x43ada0);
DECL_FUNC(int (__stdcall*AI_Rush)(int, int), AI_Rush, 0x43b0b0);
DECL_FUNC(int (__stdcall*AI_EvalHarass)(int), AI_EvalHarass, 0x43b570);
signed int sub_43B6D0(int unit_type, CUnit *a2, int a3) {
    int address = 0x43b6d0;
    signed result_;
    __asm {
        mov ecx, unit_type
        mov esi, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *sub_43B790(CUnit *a1, CUnit *a2, CUnit *a3) {
    int address = 0x43b790;
    CUnit * result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
void AI_orderUnitCloaking(CUnit *a1) {
    int address = 0x43b970;
    __asm {
        mov esi, a1
        call address
    }
}
DECL_FUNC(int (__stdcall*sub_43B9E0)(int), sub_43B9E0, 0x43b9e0);
DECL_FUNC(void *(__stdcall*sub_43BAC0)(AiCaptain *a1, unsigned int a2, int a3, int a4, int a5, int a6), sub_43BAC0, 0x43bac0);
DECL_FUNC(void *(__stdcall*sub_43BC40)(AiCaptain *a1, int a2, int a3, int a4, int a5), sub_43BC40, 0x43bc40);
DECL_FUNC(int (__stdcall*AI_OrderAllUnitsInLocation)(int, int, int, char), AI_OrderAllUnitsInLocation, 0x43be50);
DECL_FUNC(int (__stdcall*AI_ExitTransport)(int), AI_ExitTransport, 0x43bf00);
int AI_EnterTransport(int a1, int playerID) {
    int address = 0x43c050;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr playerID
        call address
        mov result_, eax
    }
    return result_;
}
char sub_43C170(CUnit *a1) {
    int address = 0x43c170;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
void AI_orderLurkerBurrow(CUnit *a1) {
    int address = 0x43c230;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int (__stdcall*AI_EnterBunker)(int), AI_EnterBunker, 0x43c260);
DECL_FUNC(int (__stdcall*AI_MakePatrol)(int), AI_MakePatrol, 0x43c330);
signed int AI_Defender_Bunker_Behaviour(__int16 a1, CUnit *a2) {
    int address = 0x43c480;
    signed result_;
    __asm {
        mov ax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
char AI_RespondToCloaked(CUnit *a1, CUnit *a2) {
    int address = 0x43c580;
    char result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, al
    }
    return result_;
}
char IssueCaptainUnitOrder(int order_id, CUnit *a2, int a3) {
    int address = 0x43c980;
    char result_;
    __asm {
        mov eax, order_id
        mov ecx, a2
        mov edx, a3
        call address
        mov result_, al
    }
    return result_;
}
signed int sub_43CA30(CUnit *a1) {
    int address = 0x43ca30;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
signed int sub_43CB00(CUnit *a1) {
    int address = 0x43cb00;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
int sub_43CC40(AiCaptain *a1) {
    int address = 0x43cc40;
    int result_;
    __asm {
        mov edi, a1
        call address
        mov result_, eax
    }
    return result_;
}
void prepSuicide(CUnit *a1) {
    int address = 0x43cd40;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(char (__stdcall*AI_CaptainUpdate_Type3)(AiCaptain *a1), AI_CaptainUpdate_Type3, 0x43d350);
DECL_FUNC(void (__stdcall*AI_OrderToDestination)(CUnit *a1, signed int order, int a3, int a4), AI_OrderToDestination, 0x43d5d0);
char AI_ManageMilitaryController(CUnit *a1) {
    int address = 0x43d910;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
char sub_43DA20(AiCaptain *a1, CUnit *a2, int a3) {
    int address = 0x43da20;
    char result_;
    __asm {
        mov eax, a1
        mov ebx, a2
        push dword ptr a3
        call address
        mov result_, al
    }
    return result_;
}
int sub_43DB10(CUnit *a1, int a2) {
    int address = 0x43db10;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
signed int AI_TransportAction(CUnit *a1) {
    int address = 0x43db50;
    signed result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
int sub_43DD20(AiCaptain *a1) {
    int address = 0x43dd20;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__fastcall*sub_43DDE0)(CUnit *a1, AiCaptain *a2), sub_43DDE0, 0x43dde0);
signed int sub_43DE40(AiCaptain *a1) {
    int address = 0x43de40;
    signed result_;
    __asm {
        mov edi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*AIUnloading)(int), AIUnloading, 0x43df30);
DECL_FUNC(int (__stdcall*AI_SendSuicide)(int), AI_SendSuicide, 0x43e050);
DECL_FUNC(int (__stdcall*AI_TrainingBroodling)(CUnit *a1, CUnit *a2), AI_TrainingBroodling, 0x43e280);
signed int sub_43E2E0(AiCaptain *a1, int a2, unsigned int a3) {
    int address = 0x43e2e0;
    signed result_;
    __asm {
        mov eax, a1
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
signed int sub_43E400(CUnit *a1, CUnit *a2) {
    int address = 0x43e400;
    signed result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *sub_43E580(AiCaptain *a1, AiCaptain *a2, CUnit *a3, int a4, int a5) {
    int address = 0x43e580;
    CUnit * result_;
    __asm {
        mov edi, a1
        mov esi, a2
        push dword ptr a5
        push dword ptr a4
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
unsigned int sub_43E670(AiCaptain *a1) {
    int address = 0x43e670;
    unsigned result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
int sub_43E760(unsigned __int16 *a1, AiCaptain *a2, int a3) {
    int address = 0x43e760;
    int result_;
    __asm {
        mov eax, a1
        mov ebx, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*AI_SuicideControl)(), AI_SuicideControl, 0x43e7d0);
DECL_FUNC(int (__stdcall*AI_BuildBunker)(int, int), AI_BuildBunker, 0x43ebb0);
DECL_FUNC(char (__stdcall*AI_CaptainUpdate_Military12)(AiCaptain *a1), AI_CaptainUpdate_Military12, 0x43ee10);
DECL_FUNC(char (__stdcall*AI_CaptainUpdate_Military89)(AiCaptain *a1), AI_CaptainUpdate_Military89, 0x43eec0);
DECL_FUNC(char (__stdcall*AI_CaptainUpdate_Type7)(AiCaptain *a1), AI_CaptainUpdate_Type7, 0x43f020);
int sub_43F100(AiCaptain *a1, WORD *a2, int a3, unsigned int a4) {
    int address = 0x43f100;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(void (__fastcall*WpnHit)(CUnit *a1, CUnit *a2, int unknown_flag, int a4), WpnHit, 0x43f320);
DECL_FUNC(int (__stdcall*sub_43F990)(int), sub_43F990, 0x43f990);
void AI_CaptainTownUpdate(int a1, int player_id) {
    int address = 0x43fc60;
    __asm {
        mov eax, a1
        mov ecx, player_id
        call address
    }
}
DECL_FUNC(int (__fastcall*compareGeneralTarget)(CUnit *a1, CUnit *a2), compareGeneralTarget, 0x43fcf0);
DECL_FUNC(void (__cdecl*AIScriptLoopEnd)(), AIScriptLoopEnd, 0x43fd80);
CUnit *interceptorTargets(CUnit *a1) {
    int address = 0x43fe50;
    CUnit * result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *getMaelstromTarget(CUnit *result) {
    int address = 0x43ff00;
    CUnit * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
void getTargetSomething(CUnit *a1) {
    int address = 0x43ff90;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(void (__stdcall*AI_AttackUnit)(CUnit *a1), AI_AttackUnit, 0x43ffd0);
DECL_FUNC(int(*SetAttackPriorityUnit)(), SetAttackPriorityUnit, 0x440160);
DECL_FUNC(BOOL (__fastcall*isDisabledAndOwnedProc)(CUnit *a1, int unit_type), isDisabledAndOwnedProc, 0x440190);
DECL_FUNC(int(*RndGetAtkPriorityUnit)(), RndGetAtkPriorityUnit, 0x4401b0);
DECL_FUNC(BOOL (__fastcall*AIUnitCanEnterBunkerProc)(CUnit *a1, CUnit *a2), AIUnitCanEnterBunkerProc, 0x440220);
DECL_FUNC(int (__stdcall*sub_440240)(int, int, int), sub_440240, 0x440240);
CUnit *IterateAllScannerSweeps(int (__fastcall *a1)(CUnit *a1, int a2), int a2) {
    int address = 0x440270;
    CUnit * result_;
    __asm {
        mov ebx, a1
        mov edi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*compareUnitToUnitTypeProc)(), compareUnitToUnitTypeProc, 0x4402a0);
DECL_FUNC(int (__fastcall*GetBestSCVForRepairProc)(CUnit *a1, CUnit *a2), GetBestSCVForRepairProc, 0x4402b0);
DECL_FUNC(int (__fastcall*buildingCanConnectToAddonProc)(CUnit *a1, CUnit *a2), buildingCanConnectToAddonProc, 0x4402f0);
DECL_FUNC(int (__thiscall*sub_440410)(CUnit *this_), sub_440410, 0x440410);
DECL_FUNC(CUnit *(__stdcall*GetDisabledUnitInRange)(int unit_type, int a2), GetDisabledUnitInRange, 0x440420);
CImage *sub_440480(CUnit *a1) {
    int address = 0x440480;
    CImage * result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *connectAddonCheck(CUnit *a1) {
    int address = 0x4404a0;
    CUnit * result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
void GetStaticMinRange(CUnit *a1) {
    int address = 0x440520;
    __asm {
        mov esi, a1
        call address
    }
}
DECL_FUNC(CUnit *(__stdcall*GetAttackTargetFromPriority)(CUnit *a1, int a2), GetAttackTargetFromPriority, 0x4405e0);
DECL_FUNC(int(*sub_440720)(), sub_440720, 0x440720);
CUnit *sub_440740(CUnit *a1) {
    int address = 0x440740;
    CUnit * result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*AI_AssignBestUnitRepairSCV)(), AI_AssignBestUnitRepairSCV, 0x440770);
DECL_FUNC(bool (__fastcall*AI_RecallRequirementsProc)(CUnit *a1, CUnit *a2), AI_RecallRequirementsProc, 0x440790);
DECL_FUNC(int (__fastcall*AI_RestorationRequirementsProc)(CUnit *a1, CUnit *a2), AI_RestorationRequirementsProc, 0x4407e0);
DECL_FUNC(int (__fastcall*AI_RestorationRequirementsProc2)(CUnit *a1, CUnit *a2), AI_RestorationRequirementsProc2, 0x440870);
DECL_FUNC(int (__fastcall*IsUnitVisibleIteratorProc)(CUnit *a1, int a2), IsUnitVisibleIteratorProc, 0x4408a0);
DECL_FUNC(int (__fastcall*powerupCanBePickedUpProc)(CUnit *a1, CUnit *a2), powerupCanBePickedUpProc, 0x440930);
DECL_FUNC(int (__fastcall*isUnitTypeOwnerAllied)(CUnit *unit, UnitType unit_type), isUnitTypeOwnerAllied, 0x440980);
DECL_FUNC(int(*sub_4409D0)(), sub_4409D0, 0x4409d0);
DECL_FUNC(int (__fastcall*AI_targetEnemyProc)(CUnit *a1, CUnit *a2), AI_targetEnemyProc, 0x440a20);
DECL_FUNC(int (__fastcall*unitShieldsClumpInAreaAccumulatorProc)(CUnit *a1, CUnit *a2), unitShieldsClumpInAreaAccumulatorProc, 0x440a60);
DECL_FUNC(int (__fastcall*unitEnergyClumpInAreaAccumulatorProc)(CUnit *a1, CUnit *a2), unitEnergyClumpInAreaAccumulatorProc, 0x440ac0);
DECL_FUNC(int (__fastcall*getEnemyClumpValueProc)(CUnit *a1, CUnit *a2), getEnemyClumpValueProc, 0x440b20);
CUnit *IsUnitInUnsafeRegion(CUnit *a1) {
    int address = 0x440bb0;
    CUnit * result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*AI_AssignBestRestorationTarget2)(), AI_AssignBestRestorationTarget2, 0x440c10);
CUnit *AI_AssignBestRestorationTarget(CUnit *a1) {
    int address = 0x440c30;
    CUnit * result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*isCurrentOrderTargetUnitAllied)(int), isCurrentOrderTargetUnitAllied, 0x440c90);
DECL_FUNC(int (__fastcall*AIEnemyOrganicUnitHPAccumulatorProc)(CUnit *a1, CUnit *a2), AIEnemyOrganicUnitHPAccumulatorProc, 0x440cf0);
DECL_FUNC(int (__fastcall*AIAllyUnitHPAccumulatorProc)(CUnit *a1, CUnit *a2), AIAllyUnitHPAccumulatorProc, 0x440d60);
DECL_FUNC(int (__fastcall*AIEnemyUnitHPAccumulatorProc)(CUnit *a1, CUnit *a2), AIEnemyUnitHPAccumulatorProc, 0x440dc0);
signed int AI_TargetUnitIsWorthHitting(CUnit *a1, CUnit *a2) {
    int address = 0x440e30;
    signed result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__fastcall*SpiderMine_EnemyProc)(CUnit *a1, CUnit *a2), SpiderMine_EnemyProc, 0x440ec0);
DECL_FUNC(int(*sub_440F10)(), sub_440F10, 0x440f10);
DECL_FUNC(int(*sub_440F50)(), sub_440F50, 0x440f50);
DECL_FUNC(int (__thiscall*sub_440F80)(CUnit *this_), sub_440F80, 0x440f80);
DECL_FUNC(int (__fastcall*returnCargoToBestDepotProc)(CUnit *a1, CUnit *a2), returnCargoToBestDepotProc, 0x440fa0);
DECL_FUNC(int (__fastcall*FindNearestEnemyAndClumpProc)(CUnit *a1, CUnit *a2), FindNearestEnemyAndClumpProc, 0x440ff0);
bool *checkArbiterCloakingRange(CUnit *a1, unsigned __int16 a2) {
    int address = 0x4410c0;
    bool * result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
int RevealUnits(CUnit *a1) {
    int address = 0x441130;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__fastcall*Medic_HealTargetProc)(CUnit *a1, CUnit *a2), Medic_HealTargetProc, 0x441240);
DECL_FUNC(int (__fastcall*AIsiegeTankCheckUnitCanBeAttackedProc)(CUnit *a1, CUnit *a2), AIsiegeTankCheckUnitCanBeAttackedProc, 0x4412a0);
CUnit *FindBestReturnCargoTarget(CUnit *a1) {
    int address = 0x441310;
    CUnit * result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *AI_AcquireNearestEnemyTarget(CUnit *a1) {
    int address = 0x441370;
    CUnit * result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__fastcall*AI_EMPShieldRequirementsProc)(CUnit *a1, CUnit *a2), AI_EMPShieldRequirementsProc, 0x4413d0);
DECL_FUNC(int (__fastcall*AI_EMPEnergyRequirementsProc)(CUnit *a1, CUnit *a2), AI_EMPEnergyRequirementsProc, 0x441450);
DECL_FUNC(int(*AI_IrradiateRequirementsProc)(), AI_IrradiateRequirementsProc, 0x4414e0);
DECL_FUNC(int(*AI_LockdownRequirementsProc)(), AI_LockdownRequirementsProc, 0x441560);
DECL_FUNC(int (__fastcall*AI_NukeRequirementsProc)(CUnit *a1, CUnit *a2), AI_NukeRequirementsProc, 0x441600);
DECL_FUNC(int (__fastcall*AI_EnsnareRequirementsProc)(CUnit *a1, CUnit *a2), AI_EnsnareRequirementsProc, 0x4416c0);
DECL_FUNC(int (__fastcall*AI_PlagueRequirementsProc)(CUnit *a1, CUnit *a2), AI_PlagueRequirementsProc, 0x4417a0);
DECL_FUNC(int(*canHitUnit)(), canHitUnit, 0x441870);
DECL_FUNC(int (__fastcall*AI_PsiStormRequirementsProc)(CUnit *a1, CUnit *a2), AI_PsiStormRequirementsProc, 0x441950);
DECL_FUNC(int (__fastcall*AI_StasisRequirementsProc)(CUnit *a1, CUnit *a2), AI_StasisRequirementsProc, 0x441a50);
DECL_FUNC(signed int (__fastcall*AI_OpticalFlareRequirementsProc)(CUnit *a1, CUnit *a2), AI_OpticalFlareRequirementsProc, 0x441b50);
DECL_FUNC(int (__fastcall*AI_ParasiteRequirementsProc)(CUnit *a1, CUnit *a2), AI_ParasiteRequirementsProc, 0x441bb0);
DECL_FUNC(int(*AI_MindControlRequirementsProc)(), AI_MindControlRequirementsProc, 0x441c50);
DECL_FUNC(int(*AI_FeedbackRequirementsProc)(), AI_FeedbackRequirementsProc, 0x441d40);
DECL_FUNC(signed int (__fastcall*AI_MaelstromRequirementsProc)(CUnit *a1, CUnit *a2), AI_MaelstromRequirementsProc, 0x441da0);
DECL_FUNC(signed int (__fastcall*AI_DisruptionWebRequirementsProc)(CUnit *a1, CUnit *a2), AI_DisruptionWebRequirementsProc, 0x441f20);
DECL_FUNC(int(*AI_BroodlingRequirementsProc)(), AI_BroodlingRequirementsProc, 0x442050);
DECL_FUNC(int(*AI_YamatoRequirementsProc)(), AI_YamatoRequirementsProc, 0x4420e0);
int unitGetAttackPriorityFor(CUnit *a1, CUnit *a2) {
    int address = 0x442160;
    int result_;
    __asm {
        mov ebx, a1
        mov edi, a2
        call address
        mov result_, eax
    }
    return result_;
}
int sub_442210(CUnit *a1, CUnit *a2) {
    int address = 0x442210;
    int result_;
    __asm {
        mov edi, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*AI_FindBestEnemyClump)(int, int), AI_FindBestEnemyClump, 0x442260);
DECL_FUNC(bool *(__stdcall*MedicHeal_TargetAcquire)(CUnit *a1), MedicHeal_TargetAcquire, 0x4422a0);
DECL_FUNC(BOOL (__fastcall*AI_SiegedTankCanAttackUnitNear)(int a1, CUnit *a2), AI_SiegedTankCanAttackUnitNear, 0x442460);
DECL_FUNC(int (__fastcall*AI_SCVBestRepairProc)(CUnit *a1, CUnit *a2), AI_SCVBestRepairProc, 0x4424c0);
bool *AI_AssignBestEMPTarget(CUnit *a1, int a2) {
    int address = 0x442530;
    bool * result_;
    __asm {
        mov eax, a1
        mov ebx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__fastcall*AI_DefensiveMatrixRequirementsProc)(CUnit *a1, CUnit *a2), AI_DefensiveMatrixRequirementsProc, 0x4425a0);
CUnit *AI_AssignBestIrradiateTarget(int a1, CUnit *a2) {
    int address = 0x442660;
    CUnit * result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *AI_AssignBestLockdownTarget(int a1, CUnit *a2) {
    int address = 0x4426c0;
    CUnit * result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*AI_AssignBestNukeTarget)(), AI_AssignBestNukeTarget, 0x442740);
CUnit *AI_AssignBestEnsnareTarget(int a1, CUnit *a2) {
    int address = 0x442760;
    CUnit * result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *AI_AssignBestPlagueTarget(int a1, CUnit *a2) {
    int address = 0x4427e0;
    CUnit * result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *AI_AssignBestDarkSwarmTarget(int a1, CUnit *a2) {
    int address = 0x442840;
    CUnit * result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__fastcall*AI_HallucinationRequirementsProc)(CUnit *a1, CUnit *a2), AI_HallucinationRequirementsProc, 0x4428d0);
CUnit *AI_AssignBestPsiStormTarget(int a1, CUnit *a2) {
    int address = 0x442930;
    CUnit * result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *AI_AssignBestStasisTarget(int a1, CUnit *a2) {
    int address = 0x4429b0;
    CUnit * result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *AI_AssignBestOpticalFlareTarget(int a1, CUnit *a2) {
    int address = 0x442a30;
    CUnit * result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *AI_AssignBestParasiteTarget(int a1, CUnit *a2) {
    int address = 0x442a90;
    CUnit * result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *AI_AssignBestBroodlingTarget(int a1, CUnit *a2) {
    int address = 0x442af0;
    CUnit * result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *AI_AssignBestMindControlTarget(CUnit *a1) {
    int address = 0x442b50;
    CUnit * result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *AI_AssignBestFeedbackTarget(int a1, CUnit *a2) {
    int address = 0x442bb0;
    CUnit * result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *AI_AssignBestMaelstromTarget(int a1, CUnit *a2) {
    int address = 0x442c30;
    CUnit * result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *AI_AssignBestDisruptionWebTarget(int a1, CUnit *a2) {
    int address = 0x442cb0;
    CUnit * result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *AI_AssignBestYamatoTarget(int a1, CUnit *a2) {
    int address = 0x442d30;
    CUnit * result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__fastcall*getStandardAttackTargetProc)(CUnit *a1, CUnit *a2), getStandardAttackTargetProc, 0x442da0);
DECL_FUNC(int (__fastcall*findClosestMineralPatchproc)(CUnit *a1, CUnit *a2), findClosestMineralPatchproc, 0x442e80);
DECL_FUNC(CUnit *(__thiscall*getNextNearestResource)(CUnit *this_, int a2), getNextNearestResource, 0x442f70);
int getRandomAttackTarget(CUnit *a1, CUnit *a2) {
    int address = 0x442fc0;
    int result_;
    __asm {
        mov ecx, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *ChooseAttackTarget(CUnit *a1) {
    int address = 0x443080;
    CUnit * result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *AI_SCV_FindBestRepairUnit(CUnit *a1) {
    int address = 0x443160;
    CUnit * result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *AI_AssignBestDefensiveMatrixTarget(int a1, CUnit *a2) {
    int address = 0x4431c0;
    CUnit * result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *AI_AssignBestHallucinationProc(int a1, CUnit *a2) {
    int address = 0x443220;
    CUnit * result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__fastcall*findClosestMineralPatchprocEx)(CUnit *a1, CUnit *a2), findClosestMineralPatchprocEx, 0x443280);
DECL_FUNC(int (__stdcall*getNextNearestMineralsEx)(int, int), getNextNearestMineralsEx, 0x4432d0);
int j_getRandomAttackTarget(CUnit *a1, CUnit *a2) {
    int address = 0x443340;
    int result_;
    __asm {
        mov ecx, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
void CheckUnitVisibility(CUnit *a1) {
    int address = 0x443390;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int(*sub_443410)(), sub_443410, 0x443410);
DECL_FUNC(int(*sub_443440)(), sub_443440, 0x443440);
DECL_FUNC(int(*sub_443470)(), sub_443470, 0x443470);
DECL_FUNC(int(*sub_4434A0)(), sub_4434A0, 0x4434a0);
DECL_FUNC(int(*sub_4434E0)(), sub_4434E0, 0x4434e0);
DECL_FUNC(int(*sub_443500)(), sub_443500, 0x443500);
DECL_FUNC(int(*sub_443520)(), sub_443520, 0x443520);
DECL_FUNC(int(*sub_443530)(), sub_443530, 0x443530);
DECL_FUNC(int(*sub_443540)(), sub_443540, 0x443540);
DECL_FUNC(int(*sub_443550)(), sub_443550, 0x443550);
DECL_FUNC(int(*sub_443560)(), sub_443560, 0x443560);
DECL_FUNC(int(*sub_443570)(), sub_443570, 0x443570);
DECL_FUNC(int(*getNextEmptyBaseLocation)(), getNextEmptyBaseLocation, 0x443590);
DECL_FUNC(int(*sub_4435D0)(), sub_4435D0, 0x4435d0);
DECL_FUNC(int(*sub_4435E0)(), sub_4435E0, 0x4435e0);
DECL_FUNC(int(*nullsub_21)(), nullsub_21, 0x443600);
DECL_FUNC(int (__stdcall*trimPlacement)(int), trimPlacement, 0x443610);
DECL_FUNC(int (__stdcall*excludePlacementSpotsDifferentHeight)(int, signed int y), excludePlacementSpotsDifferentHeight, 0x4436c0);
DECL_FUNC(int (__stdcall*reserveOnPlacemap)(int, int, int, int, int, int), reserveOnPlacemap, 0x443790);
DECL_FUNC(int (__stdcall*excludeNonAIOwnedSpots)(int, int), excludeNonAIOwnedSpots, 0x443870);
DECL_FUNC(int (__stdcall*excludePlacementSpotsOutsideRegion)(int, signed int x), excludePlacementSpotsOutsideRegion, 0x443900);
DECL_FUNC(int(*AI_GetNumWorkersForMinerals)(), AI_GetNumWorkersForMinerals, 0x4439b0);
DECL_FUNC(int(*AI_AlliesWatchInit)(), AI_AlliesWatchInit, 0x443a00);
DECL_FUNC(int (__stdcall*getClosestBaseFromStartLocation)(int, int), getClosestBaseFromStartLocation, 0x443a20);
DECL_FUNC(int (__stdcall*reserveTurretPlacementPosition)(int, int, int, __int16, int), reserveTurretPlacementPosition, 0x443ac0);
DECL_FUNC(int (__stdcall*excludeAddonBuildLocations)(__int16, int, int, int), excludeAddonBuildLocations, 0x443cc0);
DECL_FUNC(int (__stdcall*reserveBuildingOnPlacemap)(int, int, int), reserveBuildingOnPlacemap, 0x443e30);
int reserveStaticBuildingOnPlacemap(CUnit *a1, int a2, int a3, __int16 a4, int a5) {
    int address = 0x443f40;
    int result_;
    __asm {
        mov eax, a1
        mov edx, a2
        push dword ptr a5
        push dword ptr a4
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*isRegionTraversable)(int), isRegionTraversable, 0x443fb0);
DECL_FUNC(int (__stdcall*BWFXN_getTileDistance)(int x, int y, int x2, int y2), BWFXN_getTileDistance, 0x444100);
DECL_FUNC(int (__stdcall*getBunkerPlacementRegion)(int, int), getBunkerPlacementRegion, 0x4442e0);
DECL_FUNC(int(*AI_GetNumDesiredWorkersForBase)(), AI_GetNumDesiredWorkersForBase, 0x444430);
DECL_FUNC(int (__stdcall*sub_444460)(int, int, int, int), sub_444460, 0x444460);
DECL_FUNC(int(*sub_4445E0)(), sub_4445E0, 0x4445e0);
DECL_FUNC(int (__stdcall*GetSecondHatcheryBuildLocation)(int, int, int), GetSecondHatcheryBuildLocation, 0x444630);
DECL_FUNC(int (__stdcall*sub_4447D0)(int, int x, int y), sub_4447D0, 0x4447d0);
DECL_FUNC(int (__stdcall*sub_444850)(int, int, int, int, int, int), sub_444850, 0x444850);
DECL_FUNC(int (__stdcall*reservePylonPlacementPosition)(int, int, int), reservePylonPlacementPosition, 0x4448d0);
DECL_FUNC(int (__stdcall*reservePlayerUnitsOnPlacement)(int, int, int), reservePlayerUnitsOnPlacement, 0x4449a0);
DECL_FUNC(int (__stdcall*reserveStructureSpacing)(int, int, int), reserveStructureSpacing, 0x444ce0);
DECL_FUNC(int (__stdcall*excludePlacementSpotsTooFar)(int, int), excludePlacementSpotsTooFar, 0x444e20);
DECL_FUNC(int (__stdcall*DoAreaFixupsForEnemy)(int, int, int), DoAreaFixupsForEnemy, 0x444eb0);
DECL_FUNC(int (__stdcall*compareBases)(int, int, int, int), compareBases, 0x444fd0);
DECL_FUNC(int (__stdcall*sub_4450E0)(int, int, int), sub_4450E0, 0x4450e0);
DECL_FUNC(int (__stdcall*ReassignAllCaptainsInRegions)(int, int, int), ReassignAllCaptainsInRegions, 0x445310);
DECL_FUNC(int (__stdcall*getNextBaseLocationID)(int, int), getNextBaseLocationID, 0x4453e0);
DECL_FUNC(int(*RecountBaseLocationStats)(), RecountBaseLocationStats, 0x445610);
int sub_445820(int a1, CUnit *a2, int x, int a4, int a5) {
    int address = 0x445820;
    int result_;
    __asm {
        mov edi, a1
        mov esi, a2
        push dword ptr a5
        push dword ptr a4
        push dword ptr x
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_445930)(), sub_445930, 0x445930);
DECL_FUNC(int (__stdcall*sub_445AA0)(int), sub_445AA0, 0x445aa0);
DECL_FUNC(int (__stdcall*sub_445B00)(int, int, int), sub_445B00, 0x445b00);
DECL_FUNC(int (__stdcall*sub_445BA0)(int, int, int), sub_445BA0, 0x445ba0);
DECL_FUNC(int (__stdcall*getBuildPlacementInfo)(int, int, int, int), getBuildPlacementInfo, 0x445d60);
DECL_FUNC(int (__stdcall*sub_445E80)(int, int), sub_445E80, 0x445e80);
DECL_FUNC(int (__stdcall*AIReservePlacementData)(int, int, int), AIReservePlacementData, 0x4461b0);
DECL_FUNC(int(*sub_446350)(), sub_446350, 0x446350);
DECL_FUNC(signed int (__thiscall*AIManageBuildingPlacement)(CUnit *this_, signed int a2, int a3, int a4, unsigned int a5), AIManageBuildingPlacement, 0x4465c0);
DECL_FUNC(int (__stdcall*AIBuildAtLocation)(int, int), AIBuildAtLocation, 0x446a40);
DECL_FUNC(int (__stdcall*_AIBuildAtLocation)(int, int), _AIBuildAtLocation, 0x446aa0);
DECL_FUNC(int(*sub_446AE0)(), sub_446AE0, 0x446ae0);
DECL_FUNC(int(*AI_SetGenCmd)(), AI_SetGenCmd, 0x446b10);
DECL_FUNC(int(*AI_GiveMoney)(), AI_GiveMoney, 0x446b40);
DECL_FUNC(int (__stdcall*sub_446B80)(char), sub_446B80, 0x446b80);
DECL_FUNC(int(*AI_SetTargetExpansion_Off_SubAttacks)(), AI_SetTargetExpansion_Off_SubAttacks, 0x446ba0);
DECL_FUNC(int(*sub_446BC0)(), sub_446BC0, 0x446bc0);
DECL_FUNC(int(*sub_446BE0)(), sub_446BE0, 0x446be0);
DECL_FUNC(int (__stdcall*sub_446C10)(char), sub_446C10, 0x446c10);
DECL_FUNC(int(*sub_446C30)(), sub_446C30, 0x446c30);
DECL_FUNC(int(*sub_446C50)(), sub_446C50, 0x446c50);
DECL_FUNC(int(*sub_446C70)(), sub_446C70, 0x446c70);
DECL_FUNC(int(*sub_446C90)(), sub_446C90, 0x446c90);
DECL_FUNC(int(*sub_446CB0)(), sub_446CB0, 0x446cb0);
DECL_FUNC(int(*sub_446CD0)(), sub_446CD0, 0x446cd0);
DECL_FUNC(int(*sub_446CF0)(), sub_446CF0, 0x446cf0);
DECL_FUNC(int (__stdcall*sub_446D00)(__int16), sub_446D00, 0x446d00);
DECL_FUNC(int(*sub_446D20)(), sub_446D20, 0x446d20);
DECL_FUNC(int(*AI_Creep)(), AI_Creep, 0x446d40);
DECL_FUNC(int(*sub_446D60)(), sub_446D60, 0x446d60);
DECL_FUNC(int(*sub_446D70)(), sub_446D70, 0x446d70);
DECL_FUNC(int(*sub_446DB0)(), sub_446DB0, 0x446db0);
DECL_FUNC(int(*sub_446DE0)(), sub_446DE0, 0x446de0);
DECL_FUNC(int(*sub_446DF0)(), sub_446DF0, 0x446df0);
DECL_FUNC(int(*sub_446E10)(), sub_446E10, 0x446e10);
DECL_FUNC(int(*sub_446E30)(), sub_446E30, 0x446e30);
bool IsNukeTimerReady(int player_id) {
    int address = 0x446e50;
    bool result_;
    __asm {
        mov eax, player_id
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*sub_446E80)(), sub_446E80, 0x446e80);
DECL_FUNC(int (__stdcall*sub_446EA0)(char), sub_446EA0, 0x446ea0);
DECL_FUNC(int(*sub_446EC0)(), sub_446EC0, 0x446ec0);
DECL_FUNC(int (__stdcall*sub_446ED0)(__int16), sub_446ED0, 0x446ed0);
DECL_FUNC(int(*sub_446EF0)(), sub_446EF0, 0x446ef0);
DECL_FUNC(int(*sub_446F10)(), sub_446F10, 0x446f10);
DECL_FUNC(int(*sub_446F30)(), sub_446F30, 0x446f30);
DECL_FUNC(int(*sub_446F50)(), sub_446F50, 0x446f50);
DECL_FUNC(int(*sub_446F70)(), sub_446F70, 0x446f70);
DECL_FUNC(int(*sub_446F90)(), sub_446F90, 0x446f90);
DECL_FUNC(int(*sub_446FA0)(), sub_446FA0, 0x446fa0);
DECL_FUNC(int(*sub_446FC0)(), sub_446FC0, 0x446fc0);
DECL_FUNC(int(*sub_446FE0)(), sub_446FE0, 0x446fe0);
DECL_FUNC(int(*sub_447000)(), sub_447000, 0x447000);
DECL_FUNC(int (__stdcall*sub_447010)(char), sub_447010, 0x447010);
DECL_FUNC(int(*sub_447030)(), sub_447030, 0x447030);
DECL_FUNC(int(*AIClearUnitTypeFromAttackGroup)(), AIClearUnitTypeFromAttackGroup, 0x447040);
DECL_FUNC(int(*AI_AttackTimerDecrement)(), AI_AttackTimerDecrement, 0x447090);
DECL_FUNC(int(*sub_4470D0)(), sub_4470D0, 0x4470d0);
DECL_FUNC(int(*sub_447100)(), sub_447100, 0x447100);
DECL_FUNC(int(*sub_447120)(), sub_447120, 0x447120);
DECL_FUNC(int(*sub_447130)(), sub_447130, 0x447130);
DECL_FUNC(int(*sub_447140)(), sub_447140, 0x447140);
DECL_FUNC(int(*sub_447150)(), sub_447150, 0x447150);
DECL_FUNC(int(*sub_447170)(), sub_447170, 0x447170);
DECL_FUNC(int(*sub_447180)(), sub_447180, 0x447180);
DECL_FUNC(int(*sub_4471A0)(), sub_4471A0, 0x4471a0);
DECL_FUNC(int(*sub_4471E0)(), sub_4471E0, 0x4471e0);
DECL_FUNC(int(*sub_447220)(), sub_447220, 0x447220);
DECL_FUNC(int(*AI_AttackAdd)(), AI_AttackAdd, 0x447230);
DECL_FUNC(int(*sub_4472A0)(), sub_4472A0, 0x4472a0);
DECL_FUNC(int(*sub_4472C0)(), sub_4472C0, 0x4472c0);
DECL_FUNC(int(*sub_4472F0)(), sub_4472F0, 0x4472f0);
DECL_FUNC(int(*sub_447300)(), sub_447300, 0x447300);
DECL_FUNC(int(*sub_447310)(), sub_447310, 0x447310);
DECL_FUNC(int(*sub_447320)(), sub_447320, 0x447320);
DECL_FUNC(int(*sub_447330)(), sub_447330, 0x447330);
DECL_FUNC(int(*sub_447340)(), sub_447340, 0x447340);
DECL_FUNC(int(*sub_447350)(), sub_447350, 0x447350);
DECL_FUNC(int(*sub_447360)(), sub_447360, 0x447360);
DECL_FUNC(int(*AI_HasNoDefenseBuild)(), AI_HasNoDefenseBuild, 0x447370);
DECL_FUNC(int(*AI_DefenseClear_aa)(), AI_DefenseClear_aa, 0x4473b0);
DECL_FUNC(int(*AI_DefenseClear_ga)(), AI_DefenseClear_ga, 0x447400);
DECL_FUNC(int(*AI_DefenseClear_ag)(), AI_DefenseClear_ag, 0x447450);
DECL_FUNC(int(*AI_DefenseClear_gg)(), AI_DefenseClear_gg, 0x4474a0);
DECL_FUNC(int(*AI_DefenseSet)(), AI_DefenseSet, 0x4474f0);
DECL_FUNC(int(*sub_447530)(), sub_447530, 0x447530);
DECL_FUNC(int(*sub_447570)(), sub_447570, 0x447570);
DECL_FUNC(int(*sub_447580)(), sub_447580, 0x447580);
DECL_FUNC(int(*getAIRequestedBuildType)(), getAIRequestedBuildType, 0x447590);
DECL_FUNC(int (__stdcall*sub_4475B0)(int), sub_4475B0, 0x4475b0);
DECL_FUNC(int(*sub_447650)(), sub_447650, 0x447650);
DECL_FUNC(int(*sub_447670)(), sub_447670, 0x447670);
DECL_FUNC(int(*initAIControllerData)(), initAIControllerData, 0x447680);
DECL_FUNC(int(*UpdateTownPriorities)(), UpdateTownPriorities, 0x4476d0);
DECL_FUNC(int (__stdcall*sub_447780)(int), sub_447780, 0x447780);
DECL_FUNC(int(*nullsub_22)(), nullsub_22, 0x4477b0);
DECL_FUNC(void (__fastcall*sub_4477C0)(int a1, CUnit *a2), sub_4477C0, 0x4477c0);
DECL_FUNC(int(*sub_447810)(), sub_447810, 0x447810);
bool isAIAllowedToBuild(int player_id, UnitType unit_type) {
    int address = 0x447830;
    bool result_;
    __asm {
        mov eax, player_id
        mov cx, unit_type
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*sub_447880)(), sub_447880, 0x447880);
DECL_FUNC(int(*sub_4478A0)(), sub_4478A0, 0x4478a0);
DECL_FUNC(int(*sub_4478C0)(), sub_4478C0, 0x4478c0);
DECL_FUNC(int(*sub_4478E0)(), sub_4478E0, 0x4478e0);
DECL_FUNC(int(*sub_447900)(), sub_447900, 0x447900);
DECL_FUNC(int(*sub_447920)(), sub_447920, 0x447920);
DECL_FUNC(int(*sub_447940)(), sub_447940, 0x447940);
DECL_FUNC(int(*sub_447960)(), sub_447960, 0x447960);
char AI_MergeMorph(UnitType unit_type, int a2, char a3, char a4, int a5) {
    int address = 0x447980;
    char result_;
    __asm {
        mov ax, unit_type
        mov edx, a2
        mov cl, a3
        push dword ptr a5
        push dword ptr a4
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*nullsub_23)(), nullsub_23, 0x447a60);
int sub_447A70(CUnit *a1) {
    int address = 0x447a70;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_447AF0)(), sub_447AF0, 0x447af0);
char AIGetMultiCost(int a1, int a2, int a3, int a4, char a5, int arg_4) {
    int address = 0x447b30;
    char result_;
    __asm {
        mov eax, a1
        mov edx, a2
        mov edi, a3
        mov esi, a4
        push dword ptr arg_4
        push dword ptr a5
        call address
        mov result_, al
    }
    return result_;
}
void AI_HarassFactor(int a1, int a2) {
    int address = 0x447bb0;
    __asm {
        mov eax, a1
        mov edx, a2
        call address
    }
}
DECL_FUNC(int (__stdcall*AI_Reserve)(int), AI_Reserve, 0x447d00);
DECL_FUNC(int (__stdcall*AI_ReserveCost)(int), AI_ReserveCost, 0x447dc0);
DECL_FUNC(int (__stdcall*ReadAIBankerData)(FILE *), ReadAIBankerData, 0x447e20);
DECL_FUNC(int (__stdcall*WriteAIControllerData)(FILE *), WriteAIControllerData, 0x447ed0);
DECL_FUNC(int (__stdcall*sub_448160)(int), sub_448160, 0x448160);
DECL_FUNC(int(*sub_4481A0)(), sub_4481A0, 0x4481a0);
DECL_FUNC(int(*sub_4481B0)(), sub_4481B0, 0x4481b0);
DECL_FUNC(int (__stdcall*sub_4481C0)(int, int, int), sub_4481C0, 0x4481c0);
DECL_FUNC(int(*sub_448220)(), sub_448220, 0x448220);
DECL_FUNC(int (__thiscall*ReadAIScriptControllerData)(FILE *), ReadAIScriptControllerData, 0x448230);
DECL_FUNC(int (__stdcall*sub_4483D0)(int), sub_4483D0, 0x4483d0);
DECL_FUNC(int (__stdcall*sub_448400)(int), sub_448400, 0x448400);
DECL_FUNC(int (__stdcall*AI_MergeMorphSwitch)(int), AI_MergeMorphSwitch, 0x4484a0);
DECL_FUNC(int (__stdcall*sub_4485B0)(int, int), sub_4485B0, 0x4485b0);
DECL_FUNC(int(*sub_448630)(), sub_448630, 0x448630);
int sub_4486C0(int a1, Tech a2) {
    int address = 0x4486c0;
    int result_;
    __asm {
        mov ebx, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_448750)(char), sub_448750, 0x448750);
DECL_FUNC(int (__fastcall*hasResourcesForUnit)(UnitType a1, int a2, int a3), hasResourcesForUnit, 0x4487b0);
DECL_FUNC(int(*sub_448890)(), sub_448890, 0x448890);
DECL_FUNC(int(*AI_UpdateControllerTimers)(), AI_UpdateControllerTimers, 0x448920);
DECL_FUNC(int (__thiscall*sub_4489E0)(HWND hDlg), sub_4489E0, 0x4489e0);
DECL_FUNC(int(*cleanBNImages)(), cleanBNImages, 0x448ad0);
DECL_FUNC(int (__stdcall*BattleErrorDialog)(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType), BattleErrorDialog, 0x448ec0);
DECL_FUNC(int(*sub_449030)(), sub_449030, 0x449030);
DECL_FUNC(int(*sub_449060)(), sub_449060, 0x449060);
DECL_FUNC(int(*GetBNIconImageRect)(), GetBNIconImageRect, 0x449070);
DECL_FUNC(int(*LoadBNIcons)(), LoadBNIcons, 0x4490e0);
DECL_FUNC(int (__stdcall*sub_449140)(HWND hWnd, char *a3, int a4), sub_449140, 0x449140);
DECL_FUNC(int (__stdcall*sub_449190)(int a1, int a2, int a3, int a4), sub_449190, 0x449190);
DECL_FUNC(int(*sub_4491E0)(), sub_4491E0, 0x4491e0);
DECL_FUNC(int (__stdcall*BNBlitToWindow)(int, int a5, int), BNBlitToWindow, 0x449240);
DECL_FUNC(int(*sub_449390)(), sub_449390, 0x449390);
DECL_FUNC(int (__stdcall*ParseSCIcon)(int, int, int), ParseSCIcon, 0x4494a0);
DECL_FUNC(int (__stdcall*sub_449650)(LPCSTR lpString, int, char, int), sub_449650, 0x449650);
DECL_FUNC(int (__stdcall*BattleGetErrorString)(int, int, int, int, int, char *dest, size_t size), BattleGetErrorString, 0x449810);
DECL_FUNC(int (__stdcall*BattleUpdateIcons)(int, int, LPCSTR lpString, int, int, char, int, int, int, COLORREF color), BattleUpdateIcons, 0x449f60);
DECL_FUNC(int (__stdcall*GetObjectHeight)(HGDIOBJ h), GetObjectHeight, 0x44a000);
DECL_FUNC(int (__stdcall*addItemProc)(LPARAM, LPARAM lParam, int), addItemProc, 0x44a210);
DECL_FUNC(int(*sub_44A250)(), sub_44A250, 0x44a250);
DECL_FUNC(int(*sub_44A2B0)(), sub_44A2B0, 0x44a2b0);
DECL_FUNC(int (__stdcall*sub_44A380)(HWND hWnd), sub_44A380, 0x44a380);
DECL_FUNC(int (__stdcall*sub_44A410)(HWND hWnd), sub_44A410, 0x44a410);
DECL_FUNC(int (__stdcall*sub_44A560)(LPARAM, LPARAM lParam, char), sub_44A560, 0x44a560);
DECL_FUNC(int (__stdcall*_ShowWindow)(int, HWND hWnd, int), _ShowWindow, 0x44a5d0);
DECL_FUNC(int (__stdcall*updateFont)(HWND hWnd), updateFont, 0x44a660);
DECL_FUNC(int(*sub_44A730)(), sub_44A730, 0x44a730);
DECL_FUNC(int(*sub_44A7E0)(), sub_44A7E0, 0x44a7e0);
DECL_FUNC(int(*sub_44A7F0)(), sub_44A7F0, 0x44a7f0);
DECL_FUNC(int(*sub_44A800)(), sub_44A800, 0x44a800);
DECL_FUNC(int(*sub_44A810)(), sub_44A810, 0x44a810);
DECL_FUNC(int (__stdcall*sub_44A820)(HWND hWnd), sub_44A820, 0x44a820);
DECL_FUNC(int (__stdcall*sub_44AB40)(int, int, int), sub_44AB40, 0x44ab40);
DECL_FUNC(int (__stdcall*sub_44ABB0)(LPARAM lParam, int, int, int), sub_44ABB0, 0x44abb0);
DECL_FUNC(int(*sub_44AC00)(), sub_44AC00, 0x44ac00);
DECL_FUNC(int(*sub_44AD80)(), sub_44AD80, 0x44ad80);
DECL_FUNC(int(*sub_44AF10)(), sub_44AF10, 0x44af10);
LRESULT sub_44B030(HWND a1) {
    int address = 0x44b030;
    LRESULT result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*BNET_GetLastGameSpeed)(HWND hWnd), BNET_GetLastGameSpeed, 0x44b0d0);
DECL_FUNC(int (__stdcall*sub_44B240)(int, int, int, int), sub_44B240, 0x44b240);
DECL_FUNC(int(*sub_44BA90)(), sub_44BA90, 0x44ba90);
DECL_FUNC(int (__stdcall*gluBN_CREATE_BROWSE_Proc)(HWND hDlg, UINT Msg, WPARAM wParam, LPARAM lParam), gluBN_CREATE_BROWSE_Proc, 0x44c170);
DECL_FUNC(int (__stdcall*gluBN_CREATE_GAME_Proc)(HWND hDlg, UINT Msg, WPARAM wParam, LPARAM lParam), gluBN_CREATE_GAME_Proc, 0x44c960);
DECL_FUNC(int (__stdcall*BattleMakeCreateGameDialog)(int, int, int, int, int, int), BattleMakeCreateGameDialog, 0x44cbe0);
DECL_FUNC(int(*BNProfileImageCleanup_0)(), BNProfileImageCleanup_0, 0x44cda0);
DECL_FUNC(int(*BNProfileImageCreate)(), BNProfileImageCreate, 0x44cdf0);
DECL_FUNC(int (__stdcall*sub_44CEB0)(HWND hWnd), sub_44CEB0, 0x44ceb0);
DECL_FUNC(int(*BNProfileImageCleanup)(), BNProfileImageCleanup, 0x44cf90);
DECL_FUNC(int(*CreateFontHandle)(), CreateFontHandle, 0x44cfe0);
DECL_FUNC(int (__thiscall*sub_44D050)(int a4), sub_44D050, 0x44d050);
DECL_FUNC(int (__stdcall*sub_44D0C0)(int), sub_44D0C0, 0x44d0c0);
DECL_FUNC(int(*sub_44D100)(), sub_44D100, 0x44d100);
DECL_FUNC(int(*sub_44D120)(), sub_44D120, 0x44d120);
DECL_FUNC(int (__stdcall*sub_44D140)(HWND hDlg), sub_44D140, 0x44d140);
DECL_FUNC(int (__stdcall*SaveProfileChanges)(HWND hDlg), SaveProfileChanges, 0x44d1e0);
DECL_FUNC(int (__thiscall*sub_44D540)(char *, int), sub_44D540, 0x44d540);
DECL_FUNC(int(*sub_44D5B0)(), sub_44D5B0, 0x44d5b0);
DECL_FUNC(int (__thiscall*gluBN_PROFILE_LinkHandler)(LPCSTR lpszString, int, int, int), gluBN_PROFILE_LinkHandler, 0x44d630);
DECL_FUNC(int(*sub_44D740)(), sub_44D740, 0x44d740);
DECL_FUNC(int(*gluBN_PROFILE_Description)(), gluBN_PROFILE_Description, 0x44d760);
DECL_FUNC(int (__stdcall*BattleDrawProfileInfo)(int, int, int, int, int, int, int, int, int, int, int), BattleDrawProfileInfo, 0x44e150);
DECL_FUNC(int (__stdcall*DLG_PROFILE_Proc)(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam), DLG_PROFILE_Proc, 0x44e1d0);
DECL_FUNC(int (__stdcall*BattleMakeProfileDialog)(int, int, int, int, int, int, int, int, int, int), BattleMakeProfileDialog, 0x44e390);
DECL_FUNC(int(*sub_44E400)(), sub_44E400, 0x44e400);
DECL_FUNC(int(*sub_44E420)(), sub_44E420, 0x44e420);
DECL_FUNC(int(*sub_44E4A0)(), sub_44E4A0, 0x44e4a0);
DECL_FUNC(int(*sub_44E510)(), sub_44E510, 0x44e510);
DECL_FUNC(int (__stdcall*makeHash)(int), makeHash, 0x44e550);
DECL_FUNC(int (__stdcall*sub_44E780)(int), sub_44E780, 0x44e780);
DECL_FUNC(int (__stdcall*sub_44E8D0)(int), sub_44E8D0, 0x44e8d0);
DECL_FUNC(int (__stdcall*sub_44E950)(int), sub_44E950, 0x44e950);
DECL_FUNC(int(*sub_44E970)(), sub_44E970, 0x44e970);
DECL_FUNC(int(*sub_44E9B0)(), sub_44E9B0, 0x44e9b0);
DECL_FUNC(bool (__fastcall*gluPortrait_Update)(dialog *dlg, struct dlgEvent *evt), gluPortrait_Update, 0x44e9e0);
DECL_FUNC(int(*sub_44EA80)(), sub_44EA80, 0x44ea80);
DECL_FUNC(int(*sub_44EAA0)(), sub_44EAA0, 0x44eaa0);
int gluRdy_Portrait_Destroy(dialog *a1, dialog *a2) {
    int address = 0x44eb20;
    int result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_44EB90)(dialog *a1), sub_44EB90, 0x44eb90);
DECL_FUNC(int (__stdcall*sub_44EC90)(dialog *a1), sub_44EC90, 0x44ec90);
void sub_44ED80(dialog *a1) {
    int address = 0x44ed80;
    __asm {
        mov eax, a1
        call address
    }
}
void StartUnitPortrait(dialog *a1) {
    int address = 0x44edb0;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int (__stdcall*sub_44EE40)(__int16), sub_44EE40, 0x44ee40);
DECL_FUNC(int(*videoSpeakingPortraitLoop)(), videoSpeakingPortraitLoop, 0x44ee80);
DECL_FUNC(int (__stdcall*sub_44EED0)(int), sub_44EED0, 0x44eed0);
void gluRdy_Portrait_InitChildren(dialog *a1) {
    int address = 0x44ef00;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(bool (__fastcall*gluRdy_Portrait)(dialog *dlg, dlgEvent *evt), gluRdy_Portrait, 0x44efe0);
DECL_FUNC(int (__stdcall*LoadBriefingFrameImages)(int), LoadBriefingFrameImages, 0x44f020);
DECL_FUNC(int(*loadPortdataDAT)(), loadPortdataDAT, 0x44f0f0);
DECL_FUNC(int(*sub_44F4C0)(), sub_44F4C0, 0x44f4c0);
DECL_FUNC(int(*getHumansOnTeam)(), getHumansOnTeam, 0x44f4e0);
DECL_FUNC(int(*sub_44F590)(), sub_44F590, 0x44f590);
DECL_FUNC(int (__thiscall*LeagueStats)(char *string2), LeagueStats, 0x44f5a0);
DECL_FUNC(int(*sub_44F600)(), sub_44F600, 0x44f600);
DECL_FUNC(int(*sub_44F640)(), sub_44F640, 0x44f640);
DECL_FUNC(int(*sub_44F680)(), sub_44F680, 0x44f680);
DECL_FUNC(int(*sub_44F6B0)(), sub_44F6B0, 0x44f6b0);
DECL_FUNC(int(*sub_44F6C0)(), sub_44F6C0, 0x44f6c0);
DECL_FUNC(int (__stdcall*sub_44F6D0)(char, char), sub_44F6D0, 0x44f6d0);
DECL_FUNC(int(*resetPlayerLobbySlotInfo)(), resetPlayerLobbySlotInfo, 0x44f730);
DECL_FUNC(int(*sub_44F7B0)(), sub_44F7B0, 0x44f7b0);
DECL_FUNC(int(*sub_44F860)(), sub_44F860, 0x44f860);
DECL_FUNC(int (__stdcall*slotUpdate)(int), slotUpdate, 0x44f890);
DECL_FUNC(int (__stdcall*sub_44F8D0)(int, int), sub_44F8D0, 0x44f8d0);
DECL_FUNC(int (__stdcall*sub_44FA60)(int), sub_44FA60, 0x44fa60);
DECL_FUNC(void (__fastcall*sub_44FAC0)(dialog *dlg, int x, int y, rect *dst), sub_44FAC0, 0x44fac0);
DECL_FUNC(int(*sub_44FC20)(), sub_44FC20, 0x44fc20);
DECL_FUNC(int (__stdcall*sub_44FCD0)(int, int), sub_44FCD0, 0x44fcd0);
DECL_FUNC(int (__stdcall*sub_44FD30)(int), sub_44FD30, 0x44fd30);
DECL_FUNC(void (__cdecl*sub_44FEE0)(), sub_44FEE0, 0x44fee0);
void sub_44FF20(dialog *a1) {
    int address = 0x44ff20;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int(*sub_44FF30)(), sub_44FF30, 0x44ff30);
DECL_FUNC(int(*sub_44FF50)(), sub_44FF50, 0x44ff50);
DECL_FUNC(int(*getPlayerCaps)(), getPlayerCaps, 0x450030);
DECL_FUNC(int(*sub_4500D0)(), sub_4500D0, 0x4500d0);
DECL_FUNC(int(*updateDownloadPercentages)(), updateDownloadPercentages, 0x450210);
DECL_FUNC(int(*sub_4502F0)(), sub_4502F0, 0x4502f0);
DECL_FUNC(void (__fastcall*sub_450330)(dialog *dlg, int x, int y, rect *dst), sub_450330, 0x450330);
DECL_FUNC(void (__thiscall*sub_4503A0)(dialog *this_, int a2, int a3), sub_4503A0, 0x4503a0);
DECL_FUNC(int(*sub_4503D0)(), sub_4503D0, 0x4503d0);
DECL_FUNC(bool (__fastcall*sub_4503F0)(dialog *dlg, dlgEvent *evt), sub_4503F0, 0x4503f0);
void sub_450420(dialog *a1) {
    int address = 0x450420;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(bool (__fastcall*sub_450470)(dialog *dlg, dlgEvent *evt), sub_450470, 0x450470);
DECL_FUNC(bool (__fastcall*sub_4504A0)(dialog *a1, dlgEvent *a2), sub_4504A0, 0x4504a0);
void sub_450560(dialog *a1, int a2) {
    int address = 0x450560;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
    }
}
DECL_FUNC(int (__stdcall*sub_450650)(int), sub_450650, 0x450650);
DECL_FUNC(int (__stdcall*createOwnerDropdown)(int, int), createOwnerDropdown, 0x450740);
DECL_FUNC(bool (__fastcall*sub_450A60)(dialog *dlg, dlgEvent *evt), sub_450A60, 0x450a60);
void CreateRaceDropdown(dialog *a1, Race race) {
    int address = 0x450ab0;
    __asm {
        mov eax, a1
        push dword ptr race
        call address
    }
}
DECL_FUNC(int(*sub_450C00)(), sub_450C00, 0x450c00);
signed int playerOwnerDropdownCommands(dialog *a1, unsigned __int8 a2) {
    int address = 0x450c50;
    signed result_;
    __asm {
        mov eax, a1
        mov cl, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*playerOwnerDropdownLoop)(dialog *dlg, dlgEvent *evt), playerOwnerDropdownLoop, 0x450d40);
DECL_FUNC(int (__stdcall*playerOwnerDropdownCreate)(dialog *a1, int, int, int, char, int), playerOwnerDropdownCreate, 0x450d90);
DECL_FUNC(int(*sub_451370)(), sub_451370, 0x451370);
DECL_FUNC(int(*sub_4513A0)(), sub_4513A0, 0x4513a0);
DECL_FUNC(void **(__stdcall*playerOwnerDropdownCreate2)(dialog *a1), playerOwnerDropdownCreate2, 0x4513f0);
DECL_FUNC(void (__stdcall*dropdownUpdate)(UnknownPlayerRelated *a1, int a2, int a3, char a4, int a5, int a6), dropdownUpdate, 0x451760);
void sub_451940(UnknownPlayerRelated *a1, int a2, int a3, char a4) {
    int address = 0x451940;
    __asm {
        mov ebx, a1
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
    }
}
void sub_451AA0(UnknownPlayerRelated *a1, int a2, int a3, int a4) {
    int address = 0x451aa0;
    __asm {
        mov eax, a1
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
    }
}
DECL_FUNC(int (__stdcall*sub_451D40)(int), sub_451D40, 0x451d40);
DECL_FUNC(int (__stdcall*sub_451FB0)(int), sub_451FB0, 0x451fb0);
DECL_FUNC(int (__stdcall*sub_452250)(int), sub_452250, 0x452250);
DECL_FUNC(int(*sub_452300)(), sub_452300, 0x452300);
DECL_FUNC(int(*sub_452310)(), sub_452310, 0x452310);
DECL_FUNC(int(*MakeGamePublic)(), MakeGamePublic, 0x452320);
DECL_FUNC(int(*_swapPlayers)(), _swapPlayers, 0x452350);
DECL_FUNC(int (__stdcall*sub_452370)(char), sub_452370, 0x452370);
DECL_FUNC(int(*sub_4523C0)(), sub_4523C0, 0x4523c0);
DECL_FUNC(int(*sub_452410)(), sub_452410, 0x452410);
DECL_FUNC(int(*_startGame)(), _startGame, 0x452460);
BOOL sub_452530(char *a1) {
    int address = 0x452530;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_452570)(), sub_452570, 0x452570);
DECL_FUNC(int(*sub_452590)(), sub_452590, 0x452590);
DECL_FUNC(int(*sub_4525A0)(), sub_4525A0, 0x4525a0);
DECL_FUNC(int (__stdcall*sub_4525C0)(int), sub_4525C0, 0x4525c0);
DECL_FUNC(int(*BanPlayerSlot)(), BanPlayerSlot, 0x4525e0);
DECL_FUNC(int(*CloseSlot)(), CloseSlot, 0x452680);
DECL_FUNC(int(*OpenSlot)(), OpenSlot, 0x4526d0);
DECL_FUNC(int (__stdcall*MakeComputerSlot)(int), MakeComputerSlot, 0x452720);
DECL_FUNC(int(*sub_452900)(), sub_452900, 0x452900);
signed int j_JoinNetworkGame(int a1, int a2, struct_game_140 *a3) {
    int address = 0x452a20;
    signed result_;
    __asm {
        mov edx, a1
        mov ecx, a2
        mov ebx, a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*Begin_BNET)(), Begin_BNET, 0x452a30);
DECL_FUNC(int(*sub_452A70)(), sub_452A70, 0x452a70);
DECL_FUNC(int(*sub_452A90)(), sub_452A90, 0x452a90);
DECL_FUNC(int (__stdcall*sub_452AB0)(int), sub_452AB0, 0x452ab0);
DECL_FUNC(int(*sub_452BA0)(), sub_452BA0, 0x452ba0);
DECL_FUNC(int (__stdcall*sub_452BD0)(int), sub_452BD0, 0x452bd0);
DECL_FUNC(int(*OverwriteBNGatewayList)(), OverwriteBNGatewayList, 0x452c40);
DECL_FUNC(int (__stdcall*LoadDefaultGatewayList)(int), LoadDefaultGatewayList, 0x452ce0);
DECL_FUNC(int(*sub_452EC0)(), sub_452EC0, 0x452ec0);
DECL_FUNC(int (__stdcall*sub_452F00)(int), sub_452F00, 0x452f00);
DECL_FUNC(int (__stdcall*sub_452F40)(char *), sub_452F40, 0x452f40);
DECL_FUNC(int (__stdcall*sub_452F80)(int, int), sub_452F80, 0x452f80);
DECL_FUNC(int(*LoadBNGatewayList)(), LoadBNGatewayList, 0x453020);
DECL_FUNC(int(*sub_453150)(), sub_453150, 0x453150);
DECL_FUNC(int(*sub_453170)(), sub_453170, 0x453170);
DECL_FUNC(int(*sub_4531A0)(), sub_4531A0, 0x4531a0);
char sub_4531F0(CUnit *a1) {
    int address = 0x4531f0;
    char result_;
    __asm {
        mov esi, a1
        call address
        mov result_, al
    }
    return result_;
}
void setRepulseAngle(int a1, CUnit *a2) {
    int address = 0x453300;
    __asm {
        mov edx, a1
        mov esi, a2
        call address
    }
}
CUnit *removeRepulseTile(CUnit *result) {
    int address = 0x4533d0;
    CUnit * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
signed int sub_453420(CUnit *a1) {
    int address = 0x453420;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
void sub_4535A0(CUnit *a1, int a2) {
    int address = 0x4535a0;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
    }
}
DECL_FUNC(int (__cdecl*sub_453680)(const void *, const void *), sub_453680, 0x453680);
DECL_FUNC(int (__cdecl*sortRules)(const void *, const void *), sortRules, 0x4536c0);
DECL_FUNC(int(*sub_453700)(), sub_453700, 0x453700);
DECL_FUNC(int (__stdcall*sub_453710)(int), sub_453710, 0x453710);
DECL_FUNC(int(*LeaderBoardSorting)(), LeaderBoardSorting, 0x453790);
DECL_FUNC(int(*sub_453800)(), sub_453800, 0x453800);
DECL_FUNC(int(*sub_453890)(), sub_453890, 0x453890);
DECL_FUNC(int(*updateLeaderboardSorting)(), updateLeaderboardSorting, 0x4538b0);
DECL_FUNC(int (__stdcall*sub_453AE0)(int, int), sub_453AE0, 0x453ae0);
int sub_453BA0(const void *a1, size_t a2, const void *a3, size_t size_) {
    int address = 0x453ba0;
    int result_;
    __asm {
        mov ecx, a1
        mov eax, a2
        push dword ptr size_
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sha1)(char *source, int), sha1, 0x453bd0);
DECL_FUNC(int (__stdcall*parseLocalSBigBuffer)(int, int, int, void *str, size_t size, void *, size_t), parseLocalSBigBuffer, 0x453c60);
DECL_FUNC(int (__fastcall*refundTech75percent)(unsigned __int8 a1, int a2, Tech a3), refundTech75percent, 0x453d30);
int sub_453D90(unsigned __int8 a1, Tech tech) {
    int address = 0x453d90;
    int result_;
    __asm {
        mov al, a1
        mov cl, tech
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*UnitIsOfType)(CUnit *unit, UnitType unit_type), UnitIsOfType, 0x453dc0);
u8 *Unit_RefundPartialTechnology(CUnit *a1) {
    int address = 0x453dd0;
    u8 * result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
void Unit_RefundFullTechnology(int a1, CUnit *a2, int a3) {
    int address = 0x453e30;
    __asm {
        mov ecx, a1
        mov edx, a2
        mov ebx, a3
        call address
    }
}
DECL_FUNC(int(*getUpgradeGasCost)(), getUpgradeGasCost, 0x453ed0);
DECL_FUNC(int(*getUpgradeOreCost)(), getUpgradeOreCost, 0x453f20);
DECL_FUNC(int(*getUpgradeTimeCost)(), getUpgradeTimeCost, 0x453f70);
u8 getArmorCount(CUnit *a1) {
    int address = 0x453fc0;
    u8 result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*UnitIsUltralisk)(CUnit *unit, UnitType unit_type), UnitIsUltralisk, 0x454070);
DECL_FUNC(bool (__fastcall*UnitIsVulture)(CUnit *unit, UnitType unit_type), UnitIsVulture, 0x454090);
DECL_FUNC(int (__stdcall*refundUpgrade75percent)(char), refundUpgrade75percent, 0x4540b0);
DECL_FUNC(int (__stdcall*refundUpgradeFull)(char), refundUpgradeFull, 0x454170);
void Unit_RefundPartialUpgrade(CUnit *a1) {
    int address = 0x454220;
    __asm {
        mov esi, a1
        call address
    }
}
void Unit_RefundFullUpgrade(CUnit *a1) {
    int address = 0x454280;
    __asm {
        mov eax, a1
        call address
    }
}
int UpdateSpeed(CUnit *a1) {
    int address = 0x454310;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_454360)(), sub_454360, 0x454360);
int ApplySpeedUpgradeFromUnitType(CUnit *a1) {
    int address = 0x454370;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
void ApplySpeedUpgradeFromUpgradeType(__int16 a1, CUnit *unit) {
    int address = 0x454540;
    __asm {
        mov ax, a1
        push dword ptr unit
        call address
    }
}
u8 orders_Upgrade(CUnit *a1) {
    int address = 0x4546a0;
    u8 result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
u8 orders_ResearchTech(CUnit *a1) {
    int address = 0x4548b0;
    u8 result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*BeginUpgrade)(), BeginUpgrade, 0x454a80);
signed int BeginResearch(Tech tech, CUnit *a2) {
    int address = 0x454b70;
    signed result_;
    __asm {
        mov al, tech
        mov edx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_454C80)(), sub_454C80, 0x454c80);
BOOL UnitIsIrradiatable(CUnit *a1) {
    int address = 0x454c90;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_454D00)(), sub_454D00, 0x454d00);
char RemoveMaelstrom(CUnit *a1) {
    int address = 0x454d20;
    char result_;
    __asm {
        mov esi, a1
        call address
        mov result_, al
    }
    return result_;
}
char RemoveLockdown(CUnit *a1) {
    int address = 0x454d90;
    char result_;
    __asm {
        mov esi, a1
        call address
        mov result_, al
    }
    return result_;
}
char IrradiateHit(CUnit *a1, CUnit *a2, char a3) {
    int address = 0x454e00;
    char result_;
    __asm {
        mov edi, a1
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, al
    }
    return result_;
}
void ApplyIrradiate(CUnit *unit) {
    int address = 0x454e80;
    __asm {
        mov eax, unit
        call address
    }
}
u8 RemoveMatrixFrom(CUnit *a1, signed int a2) {
    int address = 0x454ed0;
    u8 result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, al
    }
    return result_;
}
char CreateDefensiveMatrix(CUnit *a1) {
    int address = 0x454f90;
    char result_;
    __asm {
        mov edi, a1
        call address
        mov result_, al
    }
    return result_;
}
u8 ApplyDefensiveMatrix(CUnit *a1) {
    int address = 0x455010;
    u8 result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(char (__stdcall*orders_DefensiveMatrix)(CUnit *a1), orders_DefensiveMatrix, 0x4550a0);
int OpticalFlareHit(CUnit *a1, char a2) {
    int address = 0x455170;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
int RestoreHit(CUnit *a1) {
    int address = 0x455230;
    int result_;
    __asm {
        mov ebx, a1
        call address
        mov result_, eax
    }
    return result_;
}
int LockdownHit(CUnit *a1, unsigned __int8 a2) {
    int address = 0x455380;
    int result_;
    __asm {
        mov edi, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
int SetMaelstromTimer(CUnit *a1, unsigned __int8 a2) {
    int address = 0x4553f0;
    int result_;
    __asm {
        mov edi, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
u8 sub_455460(CUnit *a1) {
    int address = 0x455460;
    u8 result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
int sub_455480(CUnit *a1) {
    int address = 0x455480;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
void StimpackSFXRand(CUnit *unit) {
    int address = 0x4554a0;
    __asm {
        mov eax, unit
        call address
    }
}
DECL_FUNC(int(*sub_455500)(), sub_455500, 0x455500);
DECL_FUNC(int (__fastcall*irradiateUnitDamageProc)(CUnit *a1, CUnit *a2), irradiateUnitDamageProc, 0x455530);
DECL_FUNC(int (__thiscall*IrradiateDamageLoop)(CUnit *this_), IrradiateDamageLoop, 0x4555c0);
DECL_FUNC(int (__stdcall*OrderAcquire_Nothing)(int, int, int), OrderAcquire_Nothing, 0x455650);
signed int sub_455660(CUnit *a1) {
    int address = 0x455660;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
int sub_4556D0(CUnit *a1) {
    int address = 0x4556d0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(char (__fastcall*getGenericUnitIdleOrder)(int a1, CUnit *a2), getGenericUnitIdleOrder, 0x455760);
signed int OrderAcquire_genericRighClickHarvestProc(CUnit *a1, CUnit *a2) {
    int address = 0x4557c0;
    signed result_;
    __asm {
        mov edi, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*OrderAcquire_genericReturnToIdleProc)(int, int, int), OrderAcquire_genericReturnToIdleProc, 0x455890);
DECL_FUNC(signed int (__thiscall*OrderAcquire_genericIdleUnitProc)(CUnit *this_, int a2, int *a3, __int16 a4), OrderAcquire_genericIdleUnitProc, 0x455900);
DECL_FUNC(int (__stdcall*OrderAcquire_genericRighClickHarvestIdleProc)(int, int, int), OrderAcquire_genericRighClickHarvestIdleProc, 0x4559c0);
DECL_FUNC(signed int (__stdcall*sub_455A00)(CUnit *a1), sub_455A00, 0x455a00);
DECL_FUNC(int (__thiscall*OrderAcquire_genericRightClickUnitProc)(CUnit *this_, int a2, CUnit **a3, __int16 a4), OrderAcquire_genericRightClickUnitProc, 0x455cc0);
DECL_FUNC(int (__thiscall*OrderAcquire_genericRightClickUnitProc2)(CUnit *this_, int a2, int a3, __int16 a4), OrderAcquire_genericRightClickUnitProc2, 0x455e00);
bool sub_455F20(CUnit *a1, int a2, __int16 a3, __int16 a4, unsigned __int16 a5) {
    int address = 0x455f20;
    bool result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        mov di, a3
        push dword ptr a5
        push dword ptr a4
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(void (__stdcall*sub_4560D0)(signed int a1, signed int a2, int a3, signed int a4, char a5), sub_4560D0, 0x4560d0);
void CMDACT_RightClick(dlgEvent *a1) {
    int address = 0x4563a0;
    __asm {
        mov eax, a1
        call address
    }
}
int sub_456490(int a1, __int16 a2, CUnit *a3) {
    int address = 0x456490;
    int result_;
    __asm {
        mov eax, a1
        mov di, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(void (__thiscall*input_Game_RightMouseClick)(dlgEvent *this_), input_Game_RightMouseClick, 0x4564e0);
DECL_FUNC(int(*sub_456630)(), sub_456630, 0x456630);
DECL_FUNC(int(*sub_456680)(), sub_456680, 0x456680);
DECL_FUNC(char (__fastcall*sub_4566B0)(int a1, CUnit *a2), sub_4566B0, 0x4566b0);
DECL_FUNC(int (__thiscall*sub_456730)(CUnit *this_), sub_456730, 0x456730);
int sub_4567C0(CUnit *a1) {
    int address = 0x4567c0;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4568B0)(), sub_4568B0, 0x4568b0);
DECL_FUNC(void (__fastcall*statdata_UnitWireframeUpdate)(dialog *dlg, int x, int y, rect *dst), statdata_UnitWireframeUpdate, 0x4568f0);
dialog *sub_456A30(dialog *result) {
    int address = 0x456a30;
    dialog * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(signed int (__fastcall*statdata_UnitWireframeInteract)(dialog *a1, dlgEvent *a2), statdata_UnitWireframeInteract, 0x456a50);
DECL_FUNC(int(*load_WireframeGRP)(), load_WireframeGRP, 0x456a90);
DECL_FUNC(int(*sub_456AE0)(), sub_456AE0, 0x456ae0);
DECL_FUNC(int(*ProgressBar_Destroy)(), ProgressBar_Destroy, 0x456b00);
DECL_FUNC(bool (__fastcall*statdata_ProgressBarUpdate)(dialog *dlg, struct dlgEvent *evt), statdata_ProgressBarUpdate, 0x456b40);
DECL_FUNC(int(*sub_456C10)(), sub_456C10, 0x456c10);
DECL_FUNC(int(*sub_456C20)(), sub_456C20, 0x456c20);
signed int sub_456C30(dialog *a1) {
    int address = 0x456c30;
    signed result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
char sub_456D30(dialog *a1) {
    int address = 0x456d30;
    char result_;
    __asm {
        mov edi, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__stdcall*statdata_LabelUnknownUpdate)(int, int), statdata_LabelUnknownUpdate, 0x456e00);
DECL_FUNC(void (__fastcall*statdata_Unknown)(dialog *a1, dlgEvent *a2), statdata_Unknown, 0x456ec0);
DECL_FUNC(int(*sub_456EF0)(), sub_456EF0, 0x456ef0);
DECL_FUNC(char (__thiscall*statdata_UnitWireframeSelectUpdate)(dialog *this_, int a2, int a3), statdata_UnitWireframeSelectUpdate, 0x456f50);
DECL_FUNC(void (__fastcall*statdata_UnitWireframeTransUpdate)(dialog *dlg, int x, int y, rect *dst), statdata_UnitWireframeTransUpdate, 0x4570a0);
DECL_FUNC(int(*sub_4571B0)(), sub_4571B0, 0x4571b0);
void DLGsetProgressBarValue(dialog *a1, __int16 a2, __int16 a3) {
    int address = 0x457200;
    __asm {
        mov eax, a1
        mov cx, a2
        push dword ptr a3
        call address
    }
}
void sub_457250(dialog *a1, __int16 a2, __int16 a3) {
    int address = 0x457250;
    __asm {
        mov eax, a1
        mov cx, a2
        push dword ptr a3
        call address
    }
}
void sub_4572F0(dialog *a1) {
    int address = 0x4572f0;
    __asm {
        mov eax, a1
        call address
    }
}
void sub_457310(dialog *a1) {
    int address = 0x457310;
    __asm {
        mov eax, a1
        call address
    }
}
int CreateContextHelpFromDialog(dialog *a1, char *a2) {
    int address = 0x457350;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_457390)(), sub_457390, 0x457390);
DECL_FUNC(unsigned int (__stdcall*CMDACT_CancelGeneric)(dialog *a1), CMDACT_CancelGeneric, 0x4573a0);
DECL_FUNC(void (__fastcall*statdata_buttonUpdate)(dialog *dlg, int x, int y, rect *dst), statdata_buttonUpdate, 0x457480);
DECL_FUNC(void (__fastcall*statdata_iconOverlayUpdate)(dialog *dlg, int x, int y, rect *dst), statdata_iconOverlayUpdate, 0x4574e0);
DECL_FUNC(int(*sub_457540)(), sub_457540, 0x457540);
DECL_FUNC(int(*sub_457550)(), sub_457550, 0x457550);
DECL_FUNC(int(*sub_457560)(), sub_457560, 0x457560);
DECL_FUNC(int(*sub_457570)(), sub_457570, 0x457570);
DECL_FUNC(int(*sub_457580)(), sub_457580, 0x457580);
DECL_FUNC(int(*sub_457590)(), sub_457590, 0x457590);
int drawCancelUpgradeContextHelp(dialog *a1) {
    int address = 0x4575a0;
    int result_;
    __asm {
        mov ebx, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(void (__stdcall*statdatalUserInteract)(dialog *a1), statdatalUserInteract, 0x4576a0);
char drawCancelUnitContextHelp(dialog *a1) {
    int address = 0x457b10;
    char result_;
    __asm {
        mov ebx, a1
        call address
        mov result_, al
    }
    return result_;
}
int drawUnloadUnitContextHelp(dialog *a1) {
    int address = 0x457c20;
    int result_;
    __asm {
        mov ebx, a1
        call address
        mov result_, eax
    }
    return result_;
}
void *DlgButton_Create(dialog *a1) {
    int address = 0x457ca0;
    void * result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
void statdataMouseOverInteract(dialog *a1, dialog *a2) {
    int address = 0x457ce0;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
    }
}
void sub_457DE0(dialog *a1, struct dlgEvent *a2) {
    int address = 0x457de0;
    __asm {
        mov esi, a1
        push dword ptr a2
        call address
    }
}
void statdata_Destroy(dialog *a1, struct dlgEvent *a2) {
    int address = 0x457e40;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
    }
}
DECL_FUNC(signed int (__fastcall*statdata_UnitWireframeTransit)(dialog *a1, dlgEvent *a2), statdata_UnitWireframeTransit, 0x457e90);
DECL_FUNC(signed int (__fastcall*statdata_buttonInteract)(dialog *a1, dlgEvent *a2), statdata_buttonInteract, 0x457f30);
DECL_FUNC(void (__cdecl*sub_457FE0)(), sub_457FE0, 0x457fe0);
void ProgressBar_Create(dialog *a1) {
    int address = 0x458050;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int(*sub_458120)(), sub_458120, 0x458120);
DECL_FUNC(bool (__fastcall*statdata_ProgressBarInteract)(dialog *dlg, dlgEvent *evt), statdata_ProgressBarInteract, 0x4581e0);
DECL_FUNC(int (__fastcall*sub_458220)(dialog *a1, dialog *a2), sub_458220, 0x458220);
DECL_FUNC(bool (__fastcall*statdata_UnitWireframeSelection)(dialog *dlg, dlgEvent *evt), statdata_UnitWireframeSelection, 0x4583e0);
int statdata_extendedCtrlID(dialog *a1) {
    int address = 0x4584c0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*statdata_dlg_Interact)(dialog *dlg, dlgEvent *evt), statdata_dlg_Interact, 0x4584f0);
DECL_FUNC(int(*load_Statdata_BIN)(), load_Statdata_BIN, 0x458570);
DECL_FUNC(int(*sub_4586E0)(), sub_4586E0, 0x4586e0);
DECL_FUNC(int(*sub_4586F0)(), sub_4586F0, 0x4586f0);
DECL_FUNC(void (__fastcall*ConsoleDlgUpdateCB)(dialog *dlg, int x, int y, rect *dst), ConsoleDlgUpdateCB, 0x458730);
DECL_FUNC(int (__stdcall*setDefaultTooltipInfo)(__int16, __int16, __int16, __int16, __int16), setDefaultTooltipInfo, 0x458800);
DECL_FUNC(int(*sub_458850)(), sub_458850, 0x458850);
DECL_FUNC(int (__thiscall*sub_4588C0)(dialog *this_), sub_4588C0, 0x4588c0);
DECL_FUNC(void (__fastcall*statbtn_Btn_Update)(dialog *dlg, int x, int y, rect *dst), statbtn_Btn_Update, 0x458900);
int statBtn_dlg_CharPress(dlgEvent *a1) {
    int address = 0x458b30;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_458BB0)(), sub_458BB0, 0x458bb0);
DECL_FUNC(int(*updateButtonSetEx)(), updateButtonSetEx, 0x458bc0);
DECL_FUNC(int(*free_cmdIcons)(), free_cmdIcons, 0x458cf0);
DECL_FUNC(int(*sub_458D50)(), sub_458D50, 0x458d50);
DECL_FUNC(int(*updateButtonSet)(), updateButtonSet, 0x458de0);
void sub_458E70(dialog *a1) {
    int address = 0x458e70;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int (__stdcall*sub_458E90)(int), sub_458E90, 0x458e90);
DECL_FUNC(int (__stdcall*sub_458EF0)(int), sub_458EF0, 0x458ef0);
DECL_FUNC(int (__stdcall*CreateTooltip)(char *a1), CreateTooltip, 0x459030);
DECL_FUNC(int(*CreateUpgradeLevelTooltip)(), CreateUpgradeLevelTooltip, 0x459150);
DECL_FUNC(int(*sub_4591D0)(), sub_4591D0, 0x4591d0);
DECL_FUNC(int(*resetTooltipInfo)(), resetTooltipInfo, 0x459360);
void getTooltipInfo(dialog *a1, dialog *a2) {
    int address = 0x4593a0;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
    }
}
void sub_4596A0(dialog *a1) {
    int address = 0x4596a0;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(void (__cdecl*sub_459770)(), sub_459770, 0x459770);
void sub_4597C0(dialog *a1, struct dlgEvent *a2) {
    int address = 0x4597c0;
    __asm {
        mov esi, a1
        push dword ptr a2
        call address
    }
}
void statBtn_dlg_MouseMove(dialog *a1, struct dlgEvent *a2) {
    int address = 0x459860;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
    }
}
DECL_FUNC(bool (__fastcall*statbtn_BIN_ReplayProgressbar)(dialog *dlg, dlgEvent *evt), statbtn_BIN_ReplayProgressbar, 0x459890);
DECL_FUNC(bool (__fastcall*statbtn_Btn_Interact)(dialog *dlg, dlgEvent *evt), statbtn_Btn_Interact, 0x4598d0);
DECL_FUNC(int(*updateCurrentButtonset)(), updateCurrentButtonset, 0x4599a0);
DECL_FUNC(int(*statbtn_BIN_CustomCtrlID)(), statbtn_BIN_CustomCtrlID, 0x459ad0);
DECL_FUNC(int(*BTNSACT_ChangeButtons)(), BTNSACT_ChangeButtons, 0x459af0);
DECL_FUNC(bool (__fastcall*statbtn_DLG_Interact)(dialog *dlg, dlgEvent *evt), statbtn_DLG_Interact, 0x459b00);
DECL_FUNC(int(*load_statbtn_BIN)(), load_statbtn_BIN, 0x459b90);
DECL_FUNC(int (__stdcall*sub_459D90)(int), sub_459D90, 0x459d90);
DECL_FUNC(int(*sub_459DC0)(), sub_459DC0, 0x459dc0);
DECL_FUNC(int(*sub_459E00)(), sub_459E00, 0x459e00);
DECL_FUNC(int(*sub_459EC0)(), sub_459EC0, 0x459ec0);
DECL_FUNC(int (__stdcall*sub_459EF0)(int), sub_459EF0, 0x459ef0);
DECL_FUNC(int (__stdcall*SendMapNameData)(int), SendMapNameData, 0x459f30);
DECL_FUNC(int (__stdcall*sub_45A010)(char), sub_45A010, 0x45a010);
DECL_FUNC(int(*sub_45A050)(), sub_45A050, 0x45a050);
DECL_FUNC(int(*sub_45A0B0)(), sub_45A0B0, 0x45a0b0);
DECL_FUNC(int(*dataXFer_0x05)(), dataXFer_0x05, 0x45a190);
DECL_FUNC(int (__stdcall*dataXFer_0x03)(int), dataXFer_0x03, 0x45a1f0);
DECL_FUNC(int(*dataXFer_0x02)(), dataXFer_0x02, 0x45a230);
DECL_FUNC(int(*openMapFile)(), openMapFile, 0x45a290);
DECL_FUNC(int (__stdcall*dataXFer_0x04)(int, int), dataXFer_0x04, 0x45a390);
DECL_FUNC(int (__stdcall*fd_user)(int), fd_user, 0x45a4a0);
DECL_FUNC(int (__stdcall*sub_45A520)(int, int), sub_45A520, 0x45a520);
DECL_FUNC(int (__stdcall*dataXFer_0x01)(int, int a1), dataXFer_0x01, 0x45a600);
DECL_FUNC(int(*sub_45A840)(), sub_45A840, 0x45a840);
DECL_FUNC(int(*sub_45A860)(), sub_45A860, 0x45a860);
DECL_FUNC(int(*sub_45A890)(), sub_45A890, 0x45a890);
DECL_FUNC(int(*sub_45A8B0)(), sub_45A8B0, 0x45a8b0);
DECL_FUNC(int(*sub_45A900)(), sub_45A900, 0x45a900);
DECL_FUNC(int(*sub_45A920)(), sub_45A920, 0x45a920);
DECL_FUNC(int (__fastcall*sub_45A950)(size_t size, char *dest), sub_45A950, 0x45a950);
DECL_FUNC(int (__thiscall*sub_45A970)(char *source), sub_45A970, 0x45a970);
DECL_FUNC(int(*sub_45A990)(), sub_45A990, 0x45a990);
DECL_FUNC(int (__stdcall*sub_45A9B0)(char), sub_45A9B0, 0x45a9b0);
DECL_FUNC(int (__stdcall*sub_45AB20)(char, char), sub_45AB20, 0x45ab20);
DECL_FUNC(int(*sub_45ABA0)(), sub_45ABA0, 0x45aba0);
DECL_FUNC(int (__fastcall*sub_45ABE0)(size_t size, char *dest), sub_45ABE0, 0x45abe0);
DECL_FUNC(signed int (__thiscall*sub_45AC10)(int *this_), sub_45AC10, 0x45ac10);
DECL_FUNC(int(*sub_45AD20)(), sub_45AD20, 0x45ad20);
DECL_FUNC(int(*updatePlayerForce)(), updatePlayerForce, 0x45ad90);
DECL_FUNC(int(*sub_45ADE0)(), sub_45ADE0, 0x45ade0);
void sub_45AE20(int a1) {
    int address = 0x45ae20;
    __asm {
        mov ebx, a1
        call address
    }
}
DECL_FUNC(int(*isAIScriptNameValid)(), isAIScriptNameValid, 0x45aea0);
DECL_FUNC(int (__stdcall*AI_RunAIScript)(int, int, int), AI_RunAIScript, 0x45aef0);
DECL_FUNC(int(*AISCRIPT_Get_u32)(), AISCRIPT_Get_u32, 0x45aff0);
DECL_FUNC(int(*AISCRIPT_Get_u16)(), AISCRIPT_Get_u16, 0x45b010);
DECL_FUNC(int(*AISCRIPT_Get_u8)(), AISCRIPT_Get_u8, 0x45b030);
DECL_FUNC(int(*sub_45B050)(), sub_45B050, 0x45b050);
DECL_FUNC(int(*nullsub_24)(), nullsub_24, 0x45b070);
DECL_FUNC(int(*sub_45B080)(), sub_45B080, 0x45b080);
DECL_FUNC(int(*AI_GetNuclearSilo)(), AI_GetNuclearSilo, 0x45b0d0);
DECL_FUNC(int (__stdcall*getStandardUnitCount)(char), getStandardUnitCount, 0x45b100);
DECL_FUNC(int(*parseAIScriptName)(), parseAIScriptName, 0x45b170);
DECL_FUNC(int (__stdcall*sub_45B1D0)(int), sub_45B1D0, 0x45b1d0);
DECL_FUNC(int(*AI_FindSuitableUnit)(), AI_FindSuitableUnit, 0x45b210);
DECL_FUNC(int (__stdcall*AI_GuardResources)(int, int), AI_GuardResources, 0x45b260);
DECL_FUNC(int (__stdcall*AI_ExpandAt)(int, int, int), AI_ExpandAt, 0x45b440);
DECL_FUNC(int (__stdcall*AI_Expand)(int, int), AI_Expand, 0x45b530);
DECL_FUNC(int (__stdcall*AIScript_CreatePanicThread)(int, int, int), AIScript_CreatePanicThread, 0x45b590);
DECL_FUNC(int(*load_AIScript_BIN)(), load_AIScript_BIN, 0x45b5f0);
void AI_CreateNuke(CUnit *a1) {
    int address = 0x45b7a0;
    __asm {
        mov edi, a1
        call address
    }
}
void AI_StartShareTown(int player_id) {
    int address = 0x45b810;
    __asm {
        mov ebx, player_id
        call address
    }
}
DECL_FUNC(int (__stdcall*AIScript_RunScriptOpcodes)(_DWORD a1), AIScript_RunScriptOpcodes, 0x45b850);
DECL_FUNC(void(*AIScriptLoop)(void), AIScriptLoop, 0x45cbd0);
DECL_FUNC(int(*isValidMorph)(), isValidMorph, 0x45cc60);
DECL_FUNC(int(*isRectOutOfScreen_fixup)(), isRectOutOfScreen_fixup, 0x45cc90);
int isMorphing(CUnit *a1) {
    int address = 0x45cd00;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_45CD50)(int, int, int, int, int), sub_45CD50, 0x45cd50);
void updateNewUnitVision(UnitType a0, int pos_x, int pos_y) {
    int address = 0x45ce90;
    __asm {
        mov cx, a0
        push dword ptr pos_y
        push dword ptr pos_x
        call address
    }
}
char orders_DroneStartBuild(CUnit *a1) {
    int address = 0x45cf80;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(signed int (__stdcall*sub_45D040)(CUnit *a1), sub_45D040, 0x45d040);
DECL_FUNC(char (__stdcall*orders_Morph2)(CUnit *a1), orders_Morph2, 0x45d0d0);
void ZergPlaceBuildingCntd(CUnit *a1) {
    int address = 0x45d410;
    __asm {
        mov eax, a1
        call address
    }
}
char orders_ZergBuildSelf(CUnit *a1, int a2) {
    int address = 0x45d500;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, al
    }
    return result_;
}
CImage *DroneMorphExtractor(CUnit *a1) {
    int address = 0x45d790;
    CImage * result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*DroneMorphStandard)(int), DroneMorphStandard, 0x45d890);
DECL_FUNC(CUnit *(__stdcall*ZergUnitBirth)(CUnit *a1), ZergUnitBirth, 0x45d910);
DECL_FUNC(char (__fastcall*ZergPlaceBuilding)(__int16 a1, int a2, CUnit *a3), ZergPlaceBuilding, 0x45da40);
char orders_Build5(CUnit *a1) {
    int address = 0x45dc20;
    char result_;
    __asm {
        mov ebx, a1
        call address
        mov result_, al
    }
    return result_;
}
char orders_ZergBirth(CUnit *a1) {
    int address = 0x45dd60;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
char orders_Morph1(CUnit *a1) {
    int address = 0x45dea0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__stdcall*orders_DroneBuild)(CUnit *a1), orders_DroneBuild, 0x45e090);
DECL_FUNC(int(*sub_45E310)(), sub_45E310, 0x45e310);
u16 setBuildingSelPortrait(UnitType a1) {
    int address = 0x45e320;
    u16 result_;
    __asm {
        mov ax, a1
        call address
        mov result_, ax
    }
    return result_;
}
DECL_FUNC(int(*statport_alloc)(), statport_alloc, 0x45e360);
DECL_FUNC(int (__stdcall*setLastEventPosition)(int), setLastEventPosition, 0x45e3a0);
DECL_FUNC(int(*sub_45E3E0)(), sub_45E3E0, 0x45e3e0);
__int16 sub_45E400(Bitmap *a1, int a2, char a3) {
    int address = 0x45e400;
    __int16 result_;
    __asm {
        mov edx, a1
        mov ebx, a2
        push dword ptr a3
        call address
        mov result_, ax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*rgbValue)(int), rgbValue, 0x45e450);
DECL_FUNC(int (__thiscall*sub_45E4C0)(HANDLE video, int a2), sub_45E4C0, 0x45e4c0);
DECL_FUNC(int(*sub_45E560)(), sub_45E560, 0x45e560);
DECL_FUNC(int (__stdcall*sub_45E570)(char), sub_45E570, 0x45e570);
DECL_FUNC(int(*GameTalkingPortrait_CB)(), GameTalkingPortrait_CB, 0x45e610);
DECL_FUNC(int (__stdcall*statPortBtnUpdate)(int, int), statPortBtnUpdate, 0x45e650);
DECL_FUNC(int(*clearSelectionPortrait)(), clearSelectionPortrait, 0x45e710);
DECL_FUNC(int(*sub_45E770)(), sub_45E770, 0x45e770);
DECL_FUNC(int (__stdcall*displayIdlePortrait)(__int16), displayIdlePortrait, 0x45e7a0);
DECL_FUNC(int (__stdcall*displayTalkingPortrait)(__int16), displayTalkingPortrait, 0x45e8a0);
DECL_FUNC(int(*sub_45E9A0)(), sub_45E9A0, 0x45e9a0);
DECL_FUNC(int(*sub_45E9C0)(), sub_45E9C0, 0x45e9c0);
signed int sub_45E9F0(dlgEvent *a1) {
    int address = 0x45e9f0;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
void displayUpdatePortrait(int a1, int a2, CUnit *a3, __int16 a4) {
    int address = 0x45ea30;
    __asm {
        mov eax, a1
        mov ecx, a2
        push dword ptr a4
        push dword ptr a3
        call address
    }
}
DECL_FUNC(int(*sub_45EB80)(), sub_45EB80, 0x45eb80);
DECL_FUNC(int(*updateSelectedUnitPortrait)(), updateSelectedUnitPortrait, 0x45ebc0);
DECL_FUNC(int (__thiscall*sub_45EC40)(dialog *a1), sub_45EC40, 0x45ec40);
DECL_FUNC(int(*sub_45ED90)(), sub_45ED90, 0x45ed90);
DECL_FUNC(int (__stdcall*DisplayTalkingPortrait_maybe)(__int16, int), DisplayTalkingPortrait_maybe, 0x45edd0);
DECL_FUNC(bool (__fastcall*statPortBtnInteract)(dialog *dlg, dlgEvent *evt), statPortBtnInteract, 0x45ee90);
DECL_FUNC(int(*sub_45EF50)(), sub_45EF50, 0x45ef50);
int *DoUnitEventNotify(CUnit *a1, int a2, char a3, int a4, int *a5, unsigned int a6) {
    int address = 0x45efe0;
    int * result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        mov bl, a3
        mov edi, a4
        push dword ptr a6
        push dword ptr a5
        call address
        mov result_, eax
    }
    return result_;
}
dialog *statport_Buttonpress(dialog *a1) {
    int address = 0x45f0b0;
    dialog * result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*statport_Dlg_Interact)(dialog *dlg, struct dlgEvent *evt), statport_Dlg_Interact, 0x45f290);
DECL_FUNC(int(*loadPortdata_BINDLG)(), loadPortdata_BINDLG, 0x45f320);
DECL_FUNC(int(*CommandAt)(), CommandAt, 0x45f7a0);
DECL_FUNC(int(*sub_45F7F0)(), sub_45F7F0, 0x45f7f0);
void IncreaseUnitCountsAtLocation(CUnit *result) {
    int address = 0x45f800;
    __asm {
        mov eax, result
        call address
    }
}
__int16 IncrementUnitCountForAllLoadedUnits(CUnit *a1) {
    int address = 0x45f870;
    __int16 result_;
    __asm {
        mov eax, a1
        call address
        mov result_, ax
    }
    return result_;
}
int isUnitAtHeight(CUnit *a1, char a2) {
    int address = 0x45f8d0;
    int result_;
    __asm {
        mov eax, a1
        mov si, word ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*KillRemoveUnits_Force)(int, int, int), KillRemoveUnits_Force, 0x45f930);
DECL_FUNC(int (__stdcall*KillRemoveUnits_AllPlayers)(int, int, int), KillRemoveUnits_AllPlayers, 0x45f9a0);
DECL_FUNC(int (__stdcall*KillRemoveUnits_NeutralPlayers)(int, int, int), KillRemoveUnits_NeutralPlayers, 0x45fa10);
DECL_FUNC(int (__stdcall*KillRemoveUnits_Allies)(int, int, int), KillRemoveUnits_Allies, 0x45fa80);
DECL_FUNC(int (__stdcall*KillRemoveUnits_Foes)(int, int, int), KillRemoveUnits_Foes, 0x45faf0);
DECL_FUNC(int (__stdcall*KillRemoveUnits_NonAlliedVictoryPlayers)(int, int, int, int), KillRemoveUnits_NonAlliedVictoryPlayers, 0x45fb60);
DECL_FUNC(int (__stdcall*getForcePlayers)(int, int), getForcePlayers, 0x45fbe0);
DECL_FUNC(int (__stdcall*GetAllPlayers)(int, int, int), GetAllPlayers, 0x45fc40);
DECL_FUNC(int (__stdcall*GetNeutralPlayers)(int, int, int), GetNeutralPlayers, 0x45fca0);
DECL_FUNC(int (__stdcall*GetAllies)(int, int, int), GetAllies, 0x45fd00);
DECL_FUNC(int (__stdcall*GetFoes)(int, int, int), GetFoes, 0x45fd60);
DECL_FUNC(int (__stdcall*GetNonAlliedVictoryPlayers)(int, int, int), GetNonAlliedVictoryPlayers, 0x45fdd0);
DECL_FUNC(__int16 (__fastcall*sub_45FE40)(int a1, CUnit *a2), sub_45FE40, 0x45fe40);
DECL_FUNC(int(*increaseHangerCountsAtLocation)(), increaseHangerCountsAtLocation, 0x45fe80);
DECL_FUNC(int (__thiscall*isUnitOwnedByPlayerEx)(void *this_, CUnit *a2), isUnitOwnedByPlayerEx, 0x45fef0);
DECL_FUNC(int (__stdcall*Score)(int), Score, 0x45ffe0);
DECL_FUNC(int (__stdcall*Opponents)(int), Opponents, 0x460160);
DECL_FUNC(int (__stdcall*Deaths)(int), Deaths, 0x460380);
DECL_FUNC(int (__stdcall*Kill)(int), Kill, 0x4604a0);
DECL_FUNC(int (__stdcall*Accumulate)(int), Accumulate, 0x4605c0);
DECL_FUNC(int (__stdcall*Command)(int), Command, 0x4606b0);
DECL_FUNC(__int16 (__thiscall*IncreaseCompletedUnitCountsAtLocation)(CUnit *this_), IncreaseCompletedUnitCountsAtLocation, 0x460860);
DECL_FUNC(int (__fastcall*TrgBringProc)(CUnit *a1, int a2), TrgBringProc, 0x460980);
DECL_FUNC(int(*Bring)(), Bring, 0x4609d0);
DECL_FUNC(int(*sub_460A80)(), sub_460A80, 0x460a80);
DECL_FUNC(int(*sub_460A90)(), sub_460A90, 0x460a90);
DECL_FUNC(int(*sub_460B00)(), sub_460B00, 0x460b00);
int sub_460B20(dialog *a1) {
    int address = 0x460b20;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
int sub_460BB0(dialog *a1, dialog *a2) {
    int address = 0x460bb0;
    int result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
bool spdDlgDestroy(dialog *a1, dlgEvent *a2) {
    int address = 0x460c30;
    bool result_;
    __asm {
        mov eax, a1
        mov edi, a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*sub_460C80)(), sub_460C80, 0x460c80);
DECL_FUNC(bool (__fastcall*snd_SoundCheckbox)(dialog *dlg, dlgEvent *evt), snd_SoundCheckbox, 0x460cb0);
DECL_FUNC(bool (__fastcall*snd_SoundSlider)(dialog *dlg, dlgEvent *evt), snd_SoundSlider, 0x460d00);
DECL_FUNC(int(*snd_dlg_UserCTRLID)(), snd_dlg_UserCTRLID, 0x460d40);
DECL_FUNC(int(*spdDlgCreate)(), spdDlgCreate, 0x460d60);
DECL_FUNC(bool (__fastcall*snd_dlg_BINDLG_Main)(dialog *dlg, dlgEvent *evt), snd_dlg_BINDLG_Main, 0x460e20);
DECL_FUNC(int(*sub_460F10)(), sub_460F10, 0x460f10);
DECL_FUNC(int(*sub_460F20)(), sub_460F20, 0x460f20);
DECL_FUNC(int(*lmissionDlgActivate)(), lmissionDlgActivate, 0x460f30);
DECL_FUNC(int(*sub_460F70)(), sub_460F70, 0x460f70);
DECL_FUNC(int(*sub_460FA0)(), sub_460FA0, 0x460fa0);
int *lmissionDlgCreate(dialog *a1) {
    int address = 0x461020;
    int * result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_461160)(), sub_461160, 0x461160);
DECL_FUNC(bool (__fastcall*lmission_DLG_Interact)(dialog *dlg, dlgEvent *evt), lmission_DLG_Interact, 0x461430);
DECL_FUNC(bool (__fastcall*wmission_BINDLG_Main)(dialog *dlg, dlgEvent *evt), wmission_BINDLG_Main, 0x461510);
DECL_FUNC(int(*nullsub_25)(), nullsub_25, 0x4616d0);
DECL_FUNC(int(*sub_4616E0)(), sub_4616E0, 0x4616e0);
DECL_FUNC(int(*sub_4616F0)(), sub_4616F0, 0x4616f0);
DECL_FUNC(int(*isSaveGameTimerReady)(), isSaveGameTimerReady, 0x461720);
DECL_FUNC(int(*sub_461750)(), sub_461750, 0x461750);
DECL_FUNC(int (__stdcall*sub_461760)(int), sub_461760, 0x461760);
DECL_FUNC(int (__stdcall*SaveGame_Constructor_0)(int), SaveGame_Constructor_0, 0x461800);
dialog *sub_4618F0(dialog *result) {
    int address = 0x4618f0;
    dialog * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__thiscall*sub_461940)(char *source), sub_461940, 0x461940);
DECL_FUNC(int(*sub_461980)(), sub_461980, 0x461980);
DECL_FUNC(int (__thiscall*sub_461A90)(dialog *this_), sub_461A90, 0x461a90);
bool DLG_loadsave_Destroy(dialog *a1, char *a2, dlgEvent *a3) {
    int address = 0x461ae0;
    bool result_;
    __asm {
        mov eax, a1
        mov edx, a2
        push dword ptr a3
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*loadSave_Delete)(dialog *dlg, dlgEvent *evt), loadSave_Delete, 0x461bb0);
char loadsave_editbox_onCharEvt(dlgEvent *a1, dialog *a2) {
    int address = 0x461c20;
    char result_;
    __asm {
        mov eax, a1
        mov edi, a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*loadsave_EditBoxInteract)(dialog *dlg, dlgEvent *evt), loadsave_EditBoxInteract, 0x461d40);
int sub_461D80(dialog *a1) {
    int address = 0x461d80;
    int result_;
    __asm {
        mov edi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*loadsave_ListBox)(dialog *dlg, dlgEvent *evt), loadsave_ListBox, 0x461e80);
char DLG_loadsave_Create(dialog *dlg, dlgEvent *a2) {
    int address = 0x461ed0;
    char result_;
    __asm {
        mov ecx, dlg
        mov eax, a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*DLG_LoadGame_Interact)(dialog *a1, dlgEvent *a2), DLG_LoadGame_Interact, 0x462060);
DECL_FUNC(int(*loadSaveGameBIN)(), loadSaveGameBIN, 0x4620e0);
DECL_FUNC(int(*LoadGame_DlgCreate)(), LoadGame_DlgCreate, 0x462100);
DECL_FUNC(int(*okBIN)(), okBIN, 0x462150);
DECL_FUNC(int(*savegameBIN)(), savegameBIN, 0x4621f0);
DECL_FUNC(int (__stdcall*sub_4622A0)(int, int), sub_4622A0, 0x4622a0);
void sub_462310(dialog *a1) {
    int address = 0x462310;
    __asm {
        mov eax, a1
        call address
    }
}
dialog **sub_4623C0(dialog *dlg) {
    int address = 0x4623c0;
    dialog ** result_;
    __asm {
        mov eax, dlg
        call address
        mov result_, eax
    }
    return result_;
}
void DLG_Loadsave_Activate(dialog *dlg) {
    int address = 0x462510;
    __asm {
        mov eax, dlg
        call address
    }
}
DECL_FUNC(bool (__fastcall*savegameBIN_DLG_Interact)(dialog *a1, dlgEvent *a2), savegameBIN_DLG_Interact, 0x462580);
DECL_FUNC(void (__cdecl*savegameMenu)(), savegameMenu, 0x462600);
DECL_FUNC(int (__stdcall*AI_CreateGuard)(__int16, int), AI_CreateGuard, 0x462670);
DECL_FUNC(int(*RemoveAllGuards)(), RemoveAllGuards, 0x4626e0);
DECL_FUNC(int(*sub_462760)(), sub_462760, 0x462760);
DECL_FUNC(int(*nullsub_26)(), nullsub_26, 0x4627b0);
DECL_FUNC(int(*sub_4627C0)(), sub_4627C0, 0x4627c0);
DECL_FUNC(int(*sub_4627D0)(), sub_4627D0, 0x4627d0);
DECL_FUNC(int(*nullsub_27)(), nullsub_27, 0x4627e0);
DECL_FUNC(int(*sub_4627F0)(), sub_4627F0, 0x4627f0);
DECL_FUNC(int (__stdcall*SetDesiredAIControllerDestination)(__int16, __int16), SetDesiredAIControllerDestination, 0x462830);
DECL_FUNC(int(*sub_462860)(), sub_462860, 0x462860);
DECL_FUNC(int (__stdcall*sub_462880)(int), sub_462880, 0x462880);
DECL_FUNC(int(*sub_462900)(), sub_462900, 0x462900);
DECL_FUNC(int (__thiscall*sub_462930)(CUnit *this_), sub_462930, 0x462930);
DECL_FUNC(int (__stdcall*sub_462960)(CUnit *a1), sub_462960, 0x462960);
DECL_FUNC(int(*initDetailFinder)(), initDetailFinder, 0x462a50);
DECL_FUNC(int (__stdcall*AI_PlaceGuard)(int), AI_PlaceGuard, 0x462e70);
signed int AI_Guard_AttackTarget_Proc(CUnit *a1, int a2) {
    int address = 0x462ea0;
    signed result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
void sub_463040(CUnit *unit) {
    int address = 0x463040;
    __asm {
        mov eax, unit
        call address
    }
}
DECL_FUNC(int (__stdcall*sub_4630C0)(int), sub_4630C0, 0x4630c0);
DECL_FUNC(int(*sub_4632F0)(), sub_4632F0, 0x4632f0);
DECL_FUNC(int(*getSiegeModeUnitType)(), getSiegeModeUnitType, 0x463310);
DECL_FUNC(int(*findAddonOwner)(), findAddonOwner, 0x463330);
CUnit *GetLoadedSilo(CUnit *ghost, int a2, CUnit *ghost_) {
    int address = 0x463360;
    CUnit * result_;
    __asm {
        mov eax, ghost
        mov edi, a2
        mov esi, ghost_
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4633B0)(), sub_4633B0, 0x4633b0);
void sub_4633D0(CUnit *a1) {
    int address = 0x4633d0;
    __asm {
        mov eax, a1
        call address
    }
}
CUnit *j_secondaryOrd_Cloak(CUnit *result) {
    int address = 0x463410;
    CUnit * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_463420)(), sub_463420, 0x463420);
char setPathingFromUnitElevation(CUnit *a1) {
    int address = 0x463470;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*setGroundBuildingPathing)(), setGroundBuildingPathing, 0x4634e0);
int AI_OrderHeal(CUnit *a1, CUnit *a2) {
    int address = 0x463530;
    int result_;
    __asm {
        mov ebx, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(signed int (__fastcall*liftoffCheck)(CUnit *a1, CUnit *a2), liftoffCheck, 0x4635b0);
int orders_MedicHeal2(CUnit *a1) {
    int address = 0x463740;
    int result_;
    __asm {
        mov edi, a1
        call address
        mov result_, eax
    }
    return result_;
}
int orderReturnToIdle(CUnit *a1) {
    int address = 0x463770;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(char (__stdcall*orders_HealMove)(CUnit *a1), orders_HealMove, 0x4637b0);
int orders_Medic(CUnit *a1) {
    int address = 0x463900;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
BOOL sub_463A10(UnitType a1, CUnit *a2) {
    int address = 0x463a10;
    BOOL result_;
    __asm {
        mov bx, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
char doMedicHeal(CUnit *a1, CUnit *a2) {
    int address = 0x463c40;
    char result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, al
    }
    return result_;
}
void completeAddon(CUnit *a1, CUnit *a2) {
    int address = 0x463d50;
    __asm {
        mov eax, a1
        mov edi, a2
        call address
    }
}
char CheckCreateAddon(CUnit *a1) {
    int address = 0x463dd0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(signed int (__fastcall*SiegeTank_SelfDestructProc)(CUnit *a1, CUnit *a2), SiegeTank_SelfDestructProc, 0x463f90);
DECL_FUNC(int (__fastcall*Proc_UnitSelfDestructingCB)(CUnit *a1, CUnit *a2), Proc_UnitSelfDestructingCB, 0x463fc0);
char orders_MedicHoldPosition(CUnit *a1) {
    int address = 0x464050;
    char result_;
    __asm {
        mov esi, a1
        call address
        mov result_, al
    }
    return result_;
}
char orders_MedicHeal1(CUnit *a1) {
    int address = 0x464180;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
BOOL SiegeTank_UnderBuilding_GlitchPrevention(CUnit *a1) {
    int address = 0x464290;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(CUnit *(__thiscall*DestroyUnitsUnderLandingSite)(CUnit *this_), DestroyUnitsUnderLandingSite, 0x464300);
char orders_BuildingLand(CUnit *a1) {
    int address = 0x464360;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*bldgLiftoff)(), bldgLiftoff, 0x464930);
int orders_BuildingLiftoff(CUnit *a1) {
    int address = 0x4649b0;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
char orders_TankMode(CUnit *a1) {
    int address = 0x464ae0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
char orders_SiegeMode(CUnit *a1) {
    int address = 0x464bd0;
    char result_;
    __asm {
        mov edi, a1
        call address
        mov result_, al
    }
    return result_;
}
char orders_NukeTrack(CUnit *a1) {
    int address = 0x464d10;
    char result_;
    __asm {
        mov ebx, a1
        call address
        mov result_, al
    }
    return result_;
}
char orders_PlaceScanner(CUnit *a1) {
    int address = 0x464e40;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
char orders_PlaceMine(CUnit *a1, int a2) {
    int address = 0x464fd0;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_465200)(int, int), sub_465200, 0x465200);
DECL_FUNC(int(*getHangerTrainCount)(), getHangerTrainCount, 0x465270);
DECL_FUNC(int(*Unit__GetHangerUnitType)(), Unit__GetHangerUnitType, 0x465330);
DECL_FUNC(int(*convertCurrentOrderToCarrierReaverFightOrder)(), convertCurrentOrderToCarrierReaverFightOrder, 0x465360);
DECL_FUNC(Order (__thiscall*convertCurrentOrderToCarrierReaverIdleOrder)(CUnit *this_), convertCurrentOrderToCarrierReaverIdleOrder, 0x465390);
DECL_FUNC(char (__thiscall*getMaxHangerSpace)(CUnit *this_), getMaxHangerSpace, 0x4653d0);
DECL_FUNC(int (__thiscall*unitIsCarrierReaverSecondaryOrderState2)(CUnit *this_), unitIsCarrierReaverSecondaryOrderState2, 0x465450);
DECL_FUNC(int (__stdcall*isDistanceGreaterThanPathDistanceToOrderTarget)(int), isDistanceGreaterThanPathDistanceToOrderTarget, 0x465480);
DECL_FUNC(int (__stdcall*orders_ReaverStop)(CUnit *), orders_ReaverStop, 0x4654b0);
char returnAllInterceptors(CUnit *a1) {
    int address = 0x4655f0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
char orders_ReaverAttack1(CUnit *a1) {
    int address = 0x465690;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
void setInterceptorsOnStandby(CUnit *a1) {
    int address = 0x465780;
    __asm {
        mov edi, a1
        call address
    }
}
char orders_CarrierAttack1(CUnit *a1) {
    int address = 0x465950;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
signed int carrierReaverIdle(CUnit *a1, CUnit *a2, int a3, int a4) {
    int address = 0x465a60;
    signed result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        push dword ptr a4
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*getNextStrafePosition)(int), getNextStrafePosition, 0x465d30);
char orders_StrafeUnit2(CUnit *a1) {
    int address = 0x465e00;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
char orders_StrafeUnit(CUnit *a1) {
    int address = 0x465f60;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
char killAllHangerUnits(CUnit *a1) {
    int address = 0x466170;
    char result_;
    __asm {
        mov esi, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*sub_466270)(), sub_466270, 0x466270);
DECL_FUNC(int(*addHangerUnit)(), addHangerUnit, 0x466300);
int sub_466440(CUnit *a1) {
    int address = 0x466440;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
char orders_Reaver(CUnit *a1, CUnit *a2) {
    int address = 0x4665d0;
    char result_;
    __asm {
        mov ecx, a1
        mov edi, a2
        call address
        mov result_, al
    }
    return result_;
}
char secondaryOrd_TrainFighter(CUnit *a1) {
    int address = 0x466790;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__stdcall*setRallyPosition)(__int16, __int16), setRallyPosition, 0x466910);
DECL_FUNC(int(*decrementRemainingBuildTime)(), decrementRemainingBuildTime, 0x466940);
DECL_FUNC(int(*sub_466990)(), sub_466990, 0x466990);
DECL_FUNC(signed int (__fastcall*getQueuedUnitCount)(int a1, CUnit *a2), getQueuedUnitCount, 0x4669b0);
int getRemainingBuildTimePercentage(CUnit *a1) {
    int address = 0x4669e0;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__thiscall*sub_466A30)(CUnit *this_), sub_466A30, 0x466a30);
char refundQueueSlot(signed int a1, CUnit *a2) {
    int address = 0x466a70;
    char result_;
    __asm {
        mov eax, a1
        mov edi, a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*setRallyUnit)(), setRallyUnit, 0x466b40);
signed int AIGetQueuedCount(CUnit *a1, int a2) {
    int address = 0x466b70;
    signed result_;
    __asm {
        mov ecx, a1
        mov edi, a2
        call address
        mov result_, eax
    }
    return result_;
}
int getRepairInfo(CUnit *a1, int a2, int a3, int a4) {
    int address = 0x466d10;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*refundLastSlot)(), refundLastSlot, 0x466e40);
int refundAllQueueSlots(CUnit *a1) {
    int address = 0x466e80;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*verifyResources)(int), verifyResources, 0x466ee0);
DECL_FUNC(int (__stdcall*ord_repair_subtract)(__int16), ord_repair_subtract, 0x466fb0);
signed int sub_467030(CUnit *a1) {
    int address = 0x467030;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
int orders_ResetCollision1(CUnit *a1) {
    int address = 0x4671b0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
signed int HasMoneyCanMake(int a1, CUnit *a2, UnitType a3) {
    int address = 0x467250;
    signed result_;
    __asm {
        mov ecx, a1
        mov edi, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_4672F0)(int, char, int), sub_4672F0, 0x4672f0);
char SetUnitHp(CUnit *a1, signed int a2) {
    int address = 0x467340;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, al
    }
    return result_;
}
char sub_4673C0(CUnit *a1, int a2) {
    int address = 0x4673c0;
    char result_;
    __asm {
        mov eax, a1
        mov edx, a2
        call address
        mov result_, al
    }
    return result_;
}
char orders_Repair1(CUnit *a1) {
    int address = 0x4673d0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
char orders_TerranBuildSelf(CUnit *a1) {
    int address = 0x467760;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
CUnit *CreateUnitOnGeyser(CUnit *a1, unsigned __int8 a2) {
    int address = 0x4678a0;
    CUnit * result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
int buildingAddon(CUnit *a1, int a2, int a3) {
    int address = 0x4679a0;
    int result_;
    __asm {
        mov eax, a1
        mov edx, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
char orders_SCVBuild2(CUnit *a1) {
    int address = 0x467a70;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(__int16 (__stdcall*orders_SCVBuild)(CUnit *a1), orders_SCVBuild, 0x467fd0);
CUnit *attemptTrainHatchUnit(UnitType unit_type, CUnit *a2, int a3) {
    int address = 0x468200;
    CUnit * result_;
    __asm {
        mov di, unit_type
        mov esi, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__fastcall*Base_CancelStructure)(CUnit *a1, int a2), Base_CancelStructure, 0x468280);
void sub_468670(CUnit *a1) {
    int address = 0x468670;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int (__stdcall*sub_4686D0)(int), sub_4686D0, 0x4686d0);
DECL_FUNC(int(*sub_468730)(), sub_468730, 0x468730);
DECL_FUNC(int(*sub_468770)(), sub_468770, 0x468770);
DECL_FUNC(int(*sub_4687F0)(), sub_4687F0, 0x4687f0);
DECL_FUNC(int(*sub_468800)(), sub_468800, 0x468800);
void setResourceCount(CUnit *this_) {
    int address = 0x468830;
    __asm {
        mov ecx, this_
        call address
    }
}
DECL_FUNC(int(*unit_isMineralField)(), unit_isMineralField, 0x468890);
int UnitIsGasBuilding(CUnit *a1) {
    int address = 0x4688b0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
BOOL UnitIsResource(CUnit *unit) {
    int address = 0x4688e0;
    BOOL result_;
    __asm {
        mov eax, unit
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_468910)(), sub_468910, 0x468910);
DECL_FUNC(BOOL (__thiscall*unit_isGeyserUnitEx)(CUnit *this_, CUnit *a2), unit_isGeyserUnitEx, 0x468930);
DECL_FUNC(int(*sub_468970)(), sub_468970, 0x468970);
DECL_FUNC(int(*sub_468A20)(), sub_468A20, 0x468a20);
DECL_FUNC(CUnit *(__thiscall*sub_468A60)(CUnit *this_), sub_468A60, 0x468a60);
char *setGatheringFlags(CUnit *a1) {
    int address = 0x468aa0;
    char * result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(signed int (__stdcall*sub_468B00)(CUnit *a1, CUnit *a2, Position *a3, Position a4), sub_468B00, 0x468b00);
signed int sub_468C70(CUnit *a1, CUnit *a2) {
    int address = 0x468c70;
    signed result_;
    __asm {
        mov eax, a1
        mov edi, a2
        call address
        mov result_, eax
    }
    return result_;
}
signed int sub_468D10(CUnit *a1, CUnit *a2) {
    int address = 0x468d10;
    signed result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
char sub_468DB0(CUnit *a1) {
    int address = 0x468db0;
    char result_;
    __asm {
        mov esi, a1
        call address
        mov result_, al
    }
    return result_;
}
CUnit *sub_468E40(CUnit *result, int a2) {
    int address = 0x468e40;
    CUnit * result_;
    __asm {
        mov eax, result
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
int orders_HarvestOreInterrupted(CUnit *a1) {
    int address = 0x468e80;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
int orders_HarvestWTF(CUnit *a1) {
    int address = 0x468ed0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_468EF0)(), sub_468EF0, 0x468ef0);
char orders_CanHarvestMinerals(CUnit *a1) {
    int address = 0x468f60;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
char orders_MoveToHarvestMinerals(CUnit *a1) {
    int address = 0x469240;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
char CheckDepletedGas(CUnit *a1, char a2) {
    int address = 0x469650;
    char result_;
    __asm {
        mov eax, a1
        mov cl, a2
        call address
        mov result_, al
    }
    return result_;
}
char sub_4696D0(CUnit *a1, CUnit *a2) {
    int address = 0x4696d0;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, al
    }
    return result_;
}
void orders_HarvestingMinerals(CUnit *a1) {
    int address = 0x4697c0;
    __asm {
        mov eax, a1
        call address
    }
}
char orders_EnterExitGas(CUnit *a1) {
    int address = 0x469980;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
unsigned int finderIdxFromValue_binary_search(int a1, UnitFinderData *a2, int a3) {
    int address = 0x469b00;
    unsigned result_;
    __asm {
        mov edx, a1
        mov edi, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*isUnitInBoundsOfOtherUnit)(), isUnitInBoundsOfOtherUnit, 0x469b60);
DECL_FUNC(int(*nullsub_28)(), nullsub_28, 0x469be0);
DECL_FUNC(int(*sub_469BF0)(), sub_469BF0, 0x469bf0);
DECL_FUNC(int(*assignUnitSorting_Y)(), assignUnitSorting_Y, 0x469c20);
DECL_FUNC(int(*assignUnitSorting_X)(), assignUnitSorting_X, 0x469c90);
DECL_FUNC(int(*SortTopBottom)(), SortTopBottom, 0x469d00);
void *sortLeftRight(void *result, signed int a2, UnitFinderData *a3) {
    int address = 0x469d70;
    void * result_;
    __asm {
        mov eax, result
        mov ebx, a2
        mov edi, a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*setUnitSorting_Y)(), setUnitSorting_Y, 0x469de0);
void *setUnitSorting_X(void *result, UnitFinderData *a2, int a3) {
    int address = 0x469e50;
    void * result_;
    __asm {
        mov eax, result
        mov ebx, a2
        mov edi, a3
        call address
        mov result_, eax
    }
    return result_;
}
void updateBuildingLandFog2(CUnit *unit, __int16 x, __int16 y) {
    int address = 0x469ec0;
    __asm {
        mov eax, unit
        push dword ptr y
        push dword ptr x
        call address
    }
}
int sub_469F40(CUnit *a1) {
    int address = 0x469f40;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
void updateBuildingLandFog(CUnit *a1, __int16 x, __int16 y) {
    int address = 0x469f60;
    __asm {
        mov eax, a1
        push dword ptr y
        push dword ptr x
        call address
    }
}
void sub_469FE0(CUnit *a1) {
    int address = 0x469fe0;
    __asm {
        mov eax, a1
        call address
    }
}
int updateUnitSortingInfo(int result, CUnit *a2, int a3) {
    int address = 0x46a000;
    int result_;
    __asm {
        mov eax, result
        mov esi, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
signed int sortUnit(CUnit *a1) {
    int address = 0x46a300;
    signed result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
unsigned int updateUnitOrderFinder(CUnit *a1) {
    int address = 0x46a3a0;
    unsigned result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
void updateUnitSorting(CUnit *a1) {
    int address = 0x46a560;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int(*sub_46A5E0)(), sub_46A5E0, 0x46a5e0);
DECL_FUNC(int(*sub_46A5F0)(), sub_46A5F0, 0x46a5f0);
DECL_FUNC(int(*sub_46A600)(), sub_46A600, 0x46a600);
DECL_FUNC(int (__stdcall*sub_46A620)(char), sub_46A620, 0x46a620);
DECL_FUNC(int(*sub_46A630)(), sub_46A630, 0x46a630);
signed int UMAtMoveTarget(CUnit *a1, int a2) {
    int address = 0x46a640;
    signed result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_46A690)(), sub_46A690, 0x46a690);
void UMFailedPath(CUnit *this_) {
    int address = 0x46a6b0;
    __asm {
        mov ecx, this_
        call address
    }
}
DECL_FUNC(int(*sub_46A700)(), sub_46A700, 0x46a700);
int sub_46A720(int a1, CUnit *a2) {
    int address = 0x46a720;
    int result_;
    __asm {
        mov ebx, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(char (__thiscall*sub_46A740)(CUnit *this_), sub_46A740, 0x46a740);
DECL_FUNC(int(*setArchonWarpPathing)(), setArchonWarpPathing, 0x46a820);
signed int UMForceMoveFree(CUnit *a1) {
    int address = 0x46a850;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
signed int UMDormant(CUnit *a1) {
    int address = 0x46a8d0;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*DestinationAndCollisionCheck)(int), DestinationAndCollisionCheck, 0x46a940);
signed int UMSlidePrep(CUnit *a1) {
    int address = 0x46aa20;
    signed result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
signed int UMNewMoveTarget(CUnit *a1) {
    int address = 0x46aab0;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
signed int UMUIOrderDelay(CUnit *a1) {
    int address = 0x46aae0;
    signed result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*UMScoutPath)(int), UMScoutPath, 0x46ab10);
signed int UMFaceTarget(CUnit *a1) {
    int address = 0x46ac60;
    signed result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*UMBunker)(), UMBunker, 0x46acf0);
DECL_FUNC(int(*UMBldgTurret)(), UMBldgTurret, 0x46ad40);
DECL_FUNC(int(*sub_46AD90)(), sub_46AD90, 0x46ad90);
signed int UMTerrainSlide(CUnit *a1) {
    int address = 0x46ae20;
    signed result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
signed int UMFixTerrain(CUnit *a1) {
    int address = 0x46af00;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
signed int UMSlideFree(CUnit *a1) {
    int address = 0x46b000;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
signed int UMWaitFree(CUnit *a1) {
    int address = 0x46b220;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
int UMMoveToLegal(CUnit *a1) {
    int address = 0x46b360;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
int UMFlyer(CUnit *a1) {
    int address = 0x46b400;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
void sub_46B500(CUnit *a1) {
    int address = 0x46b500;
    __asm {
        mov eax, a1
        call address
    }
}
signed int UMGetFree(CUnit *a1) {
    int address = 0x46b5b0;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
signed int UMLumpWannabe(CUnit *a1) {
    int address = 0x46b700;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
signed int UMAtRest(CUnit *a1) {
    int address = 0x46b790;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
signed int UMFollowPath(CUnit *a1) {
    int address = 0x46b950;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_46BBA0)(), sub_46BBA0, 0x46bba0);
signed int UMRepathMovers(CUnit *a1, int a2) {
    int address = 0x46bbc0;
    signed result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
signed int UMRepath(CUnit *a1) {
    int address = 0x46bc30;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
signed int UMTurnAndStart(CUnit *a1) {
    int address = 0x46bcc0;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
signed int UMStartPath(CUnit *a1) {
    int address = 0x46bd90;
    signed result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
signed int UMCheckIllegal(CUnit *a1) {
    int address = 0x46bdf0;
    signed result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
int UMTurret(CUnit *a1, int a2) {
    int address = 0x46be80;
    int result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
char _SetMoveTarget_xy(CUnit *a1) {
    int address = 0x46bf00;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
signed int UMFixCollision(CUnit *a1) {
    int address = 0x46bf60;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
signed int UMRetryPath(CUnit *a1) {
    int address = 0x46c2d0;
    signed result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
signed int UMInitialize(CUnit *a1) {
    int address = 0x46c320;
    signed result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
void Unit_ExecPathingState(CUnit *a1) {
    int address = 0x46c480;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int (__stdcall*sub_46C6E0)(int, int), sub_46C6E0, 0x46c6e0);
DECL_FUNC(int(*waitLoop)(), waitLoop, 0x46c750);
DECL_FUNC(int(*sub_46C770)(), sub_46C770, 0x46c770);
DECL_FUNC(int (__stdcall*AddBriefingTrigger)(int), AddBriefingTrigger, 0x46c790);
DECL_FUNC(int (__thiscall*BRF_RectLoop2)(dialog *a1), BRF_RectLoop2, 0x46c940);
DECL_FUNC(int(*BRF_RectLoop1)(), BRF_RectLoop1, 0x46c960);
DECL_FUNC(int(*textScrollLoop)(), textScrollLoop, 0x46c990);
DECL_FUNC(int(*CreateSkipTutorialButton)(), CreateSkipTutorialButton, 0x46c9c0);
DECL_FUNC(int(*HidePortrait)(), HidePortrait, 0x46ca30);
DECL_FUNC(void (__thiscall*sub_46CA90)(void *this_, dialog *a2), sub_46CA90, 0x46ca90);
DECL_FUNC(signed int (__stdcall*sub_46CBC0)(dialog *a1), sub_46CBC0, 0x46cbc0);
DECL_FUNC(int(*updateMissionObjectives)(), updateMissionObjectives, 0x46cd30);
void BRF_displayText(char *a1, unsigned int a2) {
    int address = 0x46cdd0;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
    }
}
DECL_FUNC(int (__stdcall*ShowPortrait)(__int16), ShowPortrait, 0x46cf30);
void briefingFramesCleanup(dialog *a1) {
    int address = 0x46cfd0;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int (__stdcall*SpeakingPortrait)(int), SpeakingPortrait, 0x46d040);
char BriefingStart(dialog *a1, int a2) {
    int address = 0x46d090;
    char result_;
    __asm {
        mov edi, a1
        push dword ptr a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*sub_46D160)(), sub_46D160, 0x46d160);
DECL_FUNC(void (__thiscall*MissionBriefingLoop)(dialog *this_), MissionBriefingLoop, 0x46d1b0);
DECL_FUNC(int(*sub_46D1F0)(), sub_46D1F0, 0x46d1f0);
DECL_FUNC(int (__stdcall*sub_46D200)(int a1), sub_46D200, 0x46d200);
u32 sub_46D220(dialog *a1) {
    int address = 0x46d220;
    u32 result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_46D340)(), sub_46D340, 0x46d340);
signed int sub_46D3C0(dialog *a1) {
    int address = 0x46d3c0;
    signed result_;
    __asm {
        mov edi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*parseOrdersDatReqs)(), parseOrdersDatReqs, 0x46d450);
DECL_FUNC(void (__cdecl*parseTechUseData)(), parseTechUseData, 0x46d4c0);
DECL_FUNC(int(*parseTechResearchData)(), parseTechResearchData, 0x46d530);
DECL_FUNC(int(*parseUpgradeData)(), parseUpgradeData, 0x46d5a0);
signed int parseRequirementOpcodes(int a1, int a2, CUnit *a3, Tech2 a4, int a5, int a6) {
    int address = 0x46d610;
    signed result_;
    __asm {
        mov eax, a1
        mov edx, a2
        mov esi, a3
        push dword ptr a6
        push dword ptr a5
        push dword ptr a4
        call address
        mov result_, eax
    }
    return result_;
}
int OrderAllowed(CUnit *a1, unsigned __int16 order, int a3) {
    int address = 0x46dc20;
    int result_;
    __asm {
        mov eax, a1
        mov bx, order
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
bool CanUseTech(CUnit *unit, Tech2 tech_id, int player_id) {
    int address = 0x46dd80;
    bool result_;
    __asm {
        mov eax, unit
        mov di, tech_id
        push dword ptr player_id
        call address
        mov result_, al
    }
    return result_;
}
int ReasearchAllowed(Tech2 a1, int a2, CUnit *a3) {
    int address = 0x46de90;
    int result_;
    __asm {
        mov bx, a1
        mov edi, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
int UpgradeAllowed(unsigned __int16 a1, int player_id, CUnit *a3) {
    int address = 0x46dfc0;
    int result_;
    __asm {
        mov bx, a1
        mov edi, player_id
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_46E0E0)(), sub_46E0E0, 0x46e0e0);
DECL_FUNC(int(*sub_46E0F0)(), sub_46E0F0, 0x46e0f0);
DECL_FUNC(int(*parseUnitsDatReqs)(), parseUnitsDatReqs, 0x46e100);
DECL_FUNC(int(*TTBaseUnitType)(), TTBaseUnitType, 0x46e170);
signed int TTAllowed(UnitType unit_type, CUnit *a2, int player_id) {
    int address = 0x46e1c0;
    signed result_;
    __asm {
        mov ax, unit_type
        mov esi, a2
        push dword ptr player_id
        call address
        mov result_, eax
    }
    return result_;
}
int CHK_PerformVCODcheck(PlayerInfo *lobby_players, unsigned int a2, int a3, signed int a4) {
    int address = 0x46e740;
    int result_;
    __asm {
        mov edx, lobby_players
        mov ecx, a2
        mov ebx, a3
        push dword ptr a4
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*nullsub_29)(), nullsub_29, 0x46e900);
DECL_FUNC(int(*nullsub_30)(), nullsub_30, 0x46e910);
DECL_FUNC(int(*sub_46E920)(), sub_46E920, 0x46e920);
DECL_FUNC(int(*sub_46E990)(), sub_46E990, 0x46e990);
DECL_FUNC(int(*nullsub_31)(), nullsub_31, 0x46ea10);
DECL_FUNC(int(*sub_46EA20)(), sub_46EA20, 0x46ea20);
DECL_FUNC(int(*nullsub_32)(), nullsub_32, 0x46ea60);
DECL_FUNC(int (__stdcall*loadSaiPaths)(int), loadSaiPaths, 0x46ea70);
DECL_FUNC(int(*prepContourInfoForSaving)(), prepContourInfoForSaving, 0x46ec40);
DECL_FUNC(int(*sub_46ED60)(), sub_46ED60, 0x46ed60);
DECL_FUNC(int(*unit_isUnselectable)(), unit_isUnselectable, 0x46ed80);
DECL_FUNC(int(*sub_46EE70)(), sub_46EE70, 0x46ee70);
DECL_FUNC(int(*refreshDragSelectBox)(), refreshDragSelectBox, 0x46eeb0);
DECL_FUNC(void (__thiscall*input_dragSelect_MouseMove)(dlgEvent *this_), input_dragSelect_MouseMove, 0x46eef0);
DECL_FUNC(void (__cdecl*DisableDragSelect)(), DisableDragSelect, 0x46efa0);
void getTargettingErrorString(int a1, int a2, CUnit *a3) {
    int address = 0x46efe0;
    __asm {
        mov eax, a1
        mov edx, a2
        mov ecx, a3
        call address
    }
}
DECL_FUNC(int (__stdcall*sub_46F040)(int, int), sub_46F040, 0x46f040);
DECL_FUNC(int (__stdcall*SortAllUnits)(int, int, int), SortAllUnits, 0x46f0f0);
DECL_FUNC(int (__stdcall*sub_46F290)(int, int, int), sub_46F290, 0x46f290);
DECL_FUNC(int(*sub_46F380)(), sub_46F380, 0x46f380);
DECL_FUNC(int (__stdcall*sub_46F3A0)(int, int), sub_46F3A0, 0x46f3a0);
void sub_46F5B0(int esi0, int a1, int a2, CUnit *a3, signed int a4) {
    int address = 0x46f5b0;
    __asm {
        mov esi, esi0
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        push dword ptr a1
        call address
    }
}
DECL_FUNC(int (__stdcall*UI_doSelectUnits_IfAltNotHeld)(int, int), UI_doSelectUnits_IfAltNotHeld, 0x46fa00);
DECL_FUNC(void (__stdcall*getSelectedUnitsInBox)(int a1), getSelectedUnitsInBox, 0x46fa40);
DECL_FUNC(void (__fastcall*getSelectedUnitsAtPoint)(int a1, int a2), getSelectedUnitsAtPoint, 0x46fb40);
DECL_FUNC(void (__thiscall*input_dragSelect_MouseBtnUp)(dlgEvent *), input_dragSelect_MouseBtnUp, 0x46fea0);
DECL_FUNC(void (__thiscall*input_Game_LeftMouseClick)(dlgEvent *), input_Game_LeftMouseClick, 0x46ff70);
DECL_FUNC(void (__cdecl*BWFXN_drawDragSelBox)(), BWFXN_drawDragSelBox, 0x470040);
DECL_FUNC(int(*sub_4700A0)(), sub_4700A0, 0x4700a0);
DECL_FUNC(int(*sub_4700B0)(), sub_4700B0, 0x4700b0);
DECL_FUNC(int(*sub_4700C0)(), sub_4700C0, 0x4700c0);
DECL_FUNC(int(*sub_470100)(), sub_470100, 0x470100);
DECL_FUNC(int(*sub_470120)(), sub_470120, 0x470120);
DECL_FUNC(int(*updatePlayerOwnerInternal)(), updatePlayerOwnerInternal, 0x470150);
DECL_FUNC(int (__stdcall*bootPlayer)(int), bootPlayer, 0x470180);
DECL_FUNC(int (__stdcall*ForceNameTransfer)(int), ForceNameTransfer, 0x4701a0);
DECL_FUNC(int (__thiscall*LOBSEND_0x50)(unsigned int playerID), LOBSEND_0x50, 0x470210);
DECL_FUNC(int(*LOBSEND_DataRequest)(), LOBSEND_DataRequest, 0x470250);
DECL_FUNC(int (__stdcall*LOBSEND_ForceNames)(unsigned int playerID), LOBSEND_ForceNames, 0x470290);
DECL_FUNC(int (__stdcall*LOBSEND_SendMapData)(int, int, char), LOBSEND_SendMapData, 0x470400);
DECL_FUNC(int (__stdcall*lobbyChat_4D)(int), lobbyChat_4D, 0x470520);
DECL_FUNC(int (__stdcall*lobbyChat_4C)(int), lobbyChat_4C, 0x4706d0);
DECL_FUNC(int (__stdcall*onPlayerJoin)(int), onPlayerJoin, 0x470720);
DECL_FUNC(int (__stdcall*playerForceDataTransfer)(int, int), playerForceDataTransfer, 0x470840);
DECL_FUNC(int(*LobbyRecv)(), LobbyRecv, 0x470a30);
DECL_FUNC(int(*sub_470BB0)(), sub_470BB0, 0x470bb0);
DECL_FUNC(int(*sub_470BC0)(), sub_470BC0, 0x470bc0);
DECL_FUNC(int(*sub_470BD0)(), sub_470BD0, 0x470bd0);
DECL_FUNC(int(*getPlayerName)(), getPlayerName, 0x470be0);
DECL_FUNC(int(*getPlayerFlags)(), getPlayerFlags, 0x470c00);
DECL_FUNC(int(*sub_470C30)(), sub_470C30, 0x470c30);
DECL_FUNC(int (__stdcall*sub_470C40)(int, int), sub_470C40, 0x470c40);
DECL_FUNC(int(*sub_470C90)(), sub_470C90, 0x470c90);
DECL_FUNC(int(*isValidSlot)(), isValidSlot, 0x470cb0);
DECL_FUNC(int(*sub_470CE0)(), sub_470CE0, 0x470ce0);
DECL_FUNC(int(*sub_470CF0)(), sub_470CF0, 0x470cf0);
DECL_FUNC(int (__stdcall*SetPlayerData)(char, __int16, __int16, __int16), SetPlayerData, 0x470d10);
DECL_FUNC(int(*sub_470D80)(), sub_470D80, 0x470d80);
DECL_FUNC(int (__stdcall*swapPlayers)(char, char), swapPlayers, 0x470db0);
DECL_FUNC(int (__stdcall*SetSlotOwner)(char, char), SetSlotOwner, 0x470df0);
DECL_FUNC(int(*sub_470E30)(), sub_470E30, 0x470e30);
DECL_FUNC(int(*sub_470E60)(), sub_470E60, 0x470e60);
DECL_FUNC(int (__stdcall*sub_470EA0)(char), sub_470EA0, 0x470ea0);
DECL_FUNC(int(*createUnknownConfirmationBuffer)(), createUnknownConfirmationBuffer, 0x470ef0);
int createGameSlotModBuffer(PlayerInfo *a1) {
    int address = 0x470f90;
    int result_;
    __asm {
        mov edi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*createMapDownloadPercentBuffer)(), createMapDownloadPercentBuffer, 0x471010);
DECL_FUNC(int(*sub_471050)(), sub_471050, 0x471050);
DECL_FUNC(int(*sub_471080)(), sub_471080, 0x471080);
DECL_FUNC(int(*sub_471090)(), sub_471090, 0x471090);
DECL_FUNC(int(*clearGameNextMenu)(), clearGameNextMenu, 0x4710b0);
DECL_FUNC(int(*sub_471260)(), sub_471260, 0x471260);
DECL_FUNC(int(*CreateGameInitBuffer)(), CreateGameInitBuffer, 0x471270);
DECL_FUNC(int (__stdcall*RECV_raceChange)(int, int), RECV_raceChange, 0x471300);
DECL_FUNC(int (__stdcall*RECV_PlayerVersion)(int), RECV_PlayerVersion, 0x4713e0);
DECL_FUNC(int(*RECV_GameSlotMod)(), RECV_GameSlotMod, 0x471460);
DECL_FUNC(int (__stdcall*RECV_SlotChange)(int), RECV_SlotChange, 0x471570);
DECL_FUNC(int (__stdcall*RECV_ForceChangeUMS)(int, int), RECV_ForceChangeUMS, 0x471670);
DECL_FUNC(int (__stdcall*RECV_ForceChangeMelee)(int), RECV_ForceChangeMelee, 0x471750);
DECL_FUNC(int(*sub_471840)(), sub_471840, 0x471840);
DECL_FUNC(int (__stdcall*RECV_SwapPlayers)(int), RECV_SwapPlayers, 0x471860);
DECL_FUNC(int(*sub_4719D0)(), sub_4719D0, 0x4719d0);
DECL_FUNC(int(*JoinGame)(), JoinGame, 0x471a50);
DECL_FUNC(int(*sub_471CD0)(), sub_471CD0, 0x471cd0);
DECL_FUNC(int (__stdcall*versionCheck)(int, int playerid, int), versionCheck, 0x471d00);
DECL_FUNC(int (__stdcall*createVersionBuffer)(__int16, __int16, __int16, char, char, int, int), createVersionBuffer, 0x471fb0);
DECL_FUNC(int (__stdcall*RECV_StartGame)(int), RECV_StartGame, 0x472060);
DECL_FUNC(int(*RECV_SetRandomSeed)(), RECV_SetRandomSeed, 0x472110);
DECL_FUNC(int(*sub_4721E0)(), sub_4721E0, 0x4721e0);
DECL_FUNC(int(*replaceNewlines)(), replaceNewlines, 0x472210);
DECL_FUNC(int(*hex_to_int)(), hex_to_int, 0x472260);
DECL_FUNC(int (__stdcall*sub_4722C0)(char *buff), sub_4722C0, 0x4722c0);
DECL_FUNC(int(*sub_472500)(), sub_472500, 0x472500);
DECL_FUNC(int(*sub_472570)(), sub_472570, 0x472570);
DECL_FUNC(int(*sub_472720)(), sub_472720, 0x472720);
DECL_FUNC(int(*sub_472750)(), sub_472750, 0x472750);
DECL_FUNC(int(*initializeProviderVersion)(), initializeProviderVersion, 0x472770);
DECL_FUNC(int (__stdcall*Ban_Constructor)(char *source), Ban_Constructor, 0x472840);
DECL_FUNC(int(*sub_4728E0)(), sub_4728E0, 0x4728e0);
DECL_FUNC(int(*sub_4728F0)(), sub_4728F0, 0x4728f0);
DECL_FUNC(int(*dataXFer_0x06)(), dataXFer_0x06, 0x472900);
DECL_FUNC(int(*sub_472940)(), sub_472940, 0x472940);
DECL_FUNC(int(*sub_4729E0)(), sub_4729E0, 0x4729e0);
DECL_FUNC(int(*sub_4729F0)(), sub_4729F0, 0x4729f0);
DECL_FUNC(int(*dataXFer_0x00)(), dataXFer_0x00, 0x472a00);
DECL_FUNC(int(*sub_472A70)(), sub_472A70, 0x472a70);
DECL_FUNC(int (__stdcall*UserInfo_Constructor)(int, int), UserInfo_Constructor, 0x472ab0);
DECL_FUNC(int(*sub_472BA0)(), sub_472BA0, 0x472ba0);
DECL_FUNC(int (__stdcall*sub_472C10)(int), sub_472C10, 0x472c10);
DECL_FUNC(int(*sub_472D50)(), sub_472D50, 0x472d50);
DECL_FUNC(int(*killTimerFunc)(), killTimerFunc, 0x472d60);
DECL_FUNC(void (__stdcall*TimerFunc)(HWND, UINT, UINT, DWORD), TimerFunc, 0x472db0);
DECL_FUNC(int(*SetTimerFunc)(), SetTimerFunc, 0x472e00);
void SetFogMask(int a1, int a2, int a3, int x, int y) {
    int address = 0x472e50;
    __asm {
        mov eax, a1
        mov ecx, a2
        mov edi, a3
        push dword ptr y
        push dword ptr x
        call address
    }
}
void AddFogMask(int a1, int a2, int some_flags_maybe, int x, int y) {
    int address = 0x472eb0;
    __asm {
        mov edx, a1
        mov edi, a2
        mov esi, some_flags_maybe
        push dword ptr y
        push dword ptr x
        call address
    }
}
DECL_FUNC(int(*sub_472F00)(), sub_472F00, 0x472f00);
DECL_FUNC(int(*sub_472F20)(), sub_472F20, 0x472f20);
DECL_FUNC(int (__stdcall*sub_472F40)(int, int), sub_472F40, 0x472f40);
DECL_FUNC(int (__stdcall*getActiveTileFlag)(__int16, int, int), getActiveTileFlag, 0x472f80);
DECL_FUNC(int(*sub_472FD0)(), sub_472FD0, 0x472fd0);
DECL_FUNC(int(*sub_472FF0)(), sub_472FF0, 0x472ff0);
DECL_FUNC(int (__stdcall*canPlaceCreepBuildingAt)(int, int, int, int, int, int), canPlaceCreepBuildingAt, 0x473010);
DECL_FUNC(int (__stdcall*canPlaceNydusBuildingAt)(int, int, int, int, int), canPlaceNydusBuildingAt, 0x473150);
DECL_FUNC(int (__stdcall*sub_473290)(int, int, int), sub_473290, 0x473290);
DECL_FUNC(int (__stdcall*sub_4732C0)(int, int, int), sub_4732C0, 0x4732c0);
int j_canUnitTypeFitAt(signed int a1, UnitType a2, __int16 a3) {
    int address = 0x4732f0;
    int result_;
    __asm {
        mov eax, a1
        mov bx, a2
        mov di, a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_473300)(int, int, int, char, char), sub_473300, 0x473300);
DECL_FUNC(int(*sub_473410)(), sub_473410, 0x473410);
DECL_FUNC(unsigned __int32 (__thiscall*UnitIsResourceContainer)(CUnit *this_), UnitIsResourceContainer, 0x473490);
DECL_FUNC(int (__stdcall*sub_4734B0)(__int16), sub_4734B0, 0x4734b0);
DECL_FUNC(signed int (__thiscall*IsAccessibleForHarvest)(CUnit *this_), IsAccessibleForHarvest, 0x473560);
DECL_FUNC(int (__stdcall*sub_473720)(int, int, int, int, int, int, int, int, int), sub_473720, 0x473720);
DECL_FUNC(int (__stdcall*canPlacePoweredBuildingAt)(__int16, __int16), canPlacePoweredBuildingAt, 0x473920);
DECL_FUNC(int(*sub_473970)(), sub_473970, 0x473970);
DECL_FUNC(int(*PlaceBuildingResourceRestrictionCheck)(), PlaceBuildingResourceRestrictionCheck, 0x473990);
DECL_FUNC(int (__stdcall*canPlaceStandardBuildingAt)(int, int, int, int, int, int), canPlaceStandardBuildingAt, 0x473a10);
DECL_FUNC(int (__stdcall*sub_473BD0)(int, int, int), sub_473BD0, 0x473bd0);
DECL_FUNC(int (__stdcall*vespeneGeyserPlacebox)(int, int, int, int), vespeneGeyserPlacebox, 0x473db0);
DECL_FUNC(int (__stdcall*sub_473EF0)(int, int, int), sub_473EF0, 0x473ef0);
DECL_FUNC(signed int (__stdcall*canBuildOnTileLocation)(CUnit *a1, int a2, int a3, __int16 a4, int a5, int a6, int a7, int a8, int a9), canBuildOnTileLocation, 0x473fb0);
DECL_FUNC(int (__stdcall*sub_4741A0)(int, int, int, int), sub_4741A0, 0x4741a0);
DECL_FUNC(int(*AssignSecondaryOrderNoParam)(), AssignSecondaryOrderNoParam, 0x474280);
DECL_FUNC(int(*sub_4742B0)(), sub_4742B0, 0x4742b0);
COrder *removeOrderFromUnitQueue(COrder *result, CUnit *a2) {
    int address = 0x4742d0;
    COrder * result_;
    __asm {
        mov eax, result
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
char playSubunitIscript(CUnit *a1, Anims a2) {
    int address = 0x474380;
    char result_;
    __asm {
        mov ebx, a1
        push dword ptr a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*sub_4743C0)(), sub_4743C0, 0x4743c0);
DECL_FUNC(int(*setSecondaryOrder)(), setSecondaryOrder, 0x4743d0);
DECL_FUNC(COrder *(__fastcall*sub_474400)(CUnit *a1, Order order), sub_474400, 0x474400);
COrder *j_removeOrderFromUnitQueue(COrder *result, CUnit *a2) {
    int address = 0x4744c0;
    COrder * result_;
    __asm {
        mov eax, result
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4744D0)(), sub_4744D0, 0x4744d0);
DECL_FUNC(int(*sub_4744F0)(), sub_4744F0, 0x4744f0);
signed int sub_474500(CUnit *a1, UnitType unit_type) {
    int address = 0x474500;
    signed result_;
    __asm {
        mov eax, a1
        mov cx, unit_type
        call address
        mov result_, eax
    }
    return result_;
}
void *unknownSpecialOrder(u16 a1, Order a2, COrder *a3, CUnit *a4, Position a5, CUnit *a6) {
    int address = 0x474540;
    void * result_;
    __asm {
        mov dx, a1
        mov bl, a2
        mov edi, a3
        mov esi, a4
        push dword ptr a6
        push dword ptr a5
        call address
        mov result_, eax
    }
    return result_;
}
COrder *QueueOrderEx(Order a1, COrder *a2, CUnit *a3, u16 dx0, Position a4, CUnit *a5) {
    int address = 0x4745f0;
    COrder * result_;
    __asm {
        mov bl, a1
        mov edi, a2
        mov esi, a3
        mov dx, dx0
        push dword ptr a5
        push dword ptr a4
        call address
        mov result_, eax
    }
    return result_;
}
signed int sub_4746D0(CUnit *a1, char a2, UnitType a3, int a4) {
    int address = 0x4746d0;
    signed result_;
    __asm {
        mov eax, a1
        mov dl, a2
        mov cx, a3
        mov edi, a4
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*_orderSelfSpecial)(), _orderSelfSpecial, 0x474760);
DECL_FUNC(int (__stdcall*sub_474790)(__int16, __int16), sub_474790, 0x474790);
DECL_FUNC(int (__stdcall*sub_4747C0)(Position a5, CUnit *a6), sub_4747C0, 0x4747c0);
char *sub_4747E0(CUnit *a1, Order a2, COrder *a3, CUnit *a4) {
    int address = 0x4747e0;
    char * result_;
    __asm {
        mov ecx, a1
        mov bl, a2
        mov edi, a3
        mov esi, a4
        call address
        mov result_, eax
    }
    return result_;
}
Order order(int a1, CUnit *a2, Order a3, Position a4, CUnit *a5, u16 a6) {
    int address = 0x474810;
    Order result_;
    __asm {
        mov eax, a1
        mov edx, a2
        mov cl, a3
        push dword ptr a6
        push dword ptr a5
        push dword ptr a4
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_4748E0)(__int16, __int16), sub_4748E0, 0x4748e0);
DECL_FUNC(int (__stdcall*sub_474910)(int, __int16, __int16), sub_474910, 0x474910);
DECL_FUNC(int(*sub_474940)(), sub_474940, 0x474940);
DECL_FUNC(int (__stdcall*sub_474980)(int, int), sub_474980, 0x474980);
DECL_FUNC(int(*QueueOrder)(), QueueOrder, 0x4749a0);
char *sub_4749D0(Order a1, CUnit *a2) {
    int address = 0x4749d0;
    char * result_;
    __asm {
        mov al, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
char *sub_474A20(Order a1, __int16 a2, __int16 a3, CUnit *a4) {
    int address = 0x474a20;
    char * result_;
    __asm {
        mov al, a1
        mov dx, a2
        mov cx, a3
        push dword ptr a4
        call address
        mov result_, eax
    }
    return result_;
}
int moreOrdersFML(CUnit *a1, CUnit *a2) {
    int address = 0x474a70;
    int result_;
    __asm {
        mov eax, a1
        mov edx, a2
        call address
        mov result_, eax
    }
    return result_;
}
COrder *sub_474AF0(Order a1, CUnit *a2, Position a3, CUnit *a4) {
    int address = 0x474af0;
    COrder * result_;
    __asm {
        mov al, a1
        mov ecx, a2
        push dword ptr a4
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__thiscall*orderImmediate)(CUnit *this_), orderImmediate, 0x474b40);
DECL_FUNC(int (__stdcall*queueNewOrder)(int, char, int, int, int, int), queueNewOrder, 0x474b90);
void orderInterrupt(CUnit *unit, Order order_id, Position a3, CUnit *a4) {
    int address = 0x474c30;
    __asm {
        mov esi, unit
        push dword ptr a4
        push dword ptr a3
        push dword ptr order_id
        call address
    }
}
DECL_FUNC(Order (__stdcall*_doOrder)(CUnit *a1, Order order_id, __int16 a3, __int16 a4, int a5), _doOrder, 0x474c70);
DECL_FUNC(Order (__stdcall*sub_474CB0)(CUnit *a1, Order order_id, u16 a3, __int16 pos_x, __int16 pos_y, int a6), sub_474CB0, 0x474cb0);
DECL_FUNC(Order (__fastcall*_order)(int a1, CUnit *a2, Order order_id, Position a4, CUnit *a5, int a6), _order, 0x474cf0);
Order issueQueuedOrderTarget(CUnit *a1, CUnit *a2, Order order_id, int a4) {
    int address = 0x474d10;
    Order result_;
    __asm {
        mov eax, a1
        push dword ptr a4
        push dword ptr order_id
        push dword ptr a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(Order (__fastcall*__order)(Order order_id, CUnit *a2, int a3), __order, 0x474d60);
signed int isOrderValid(char a1, CUnit *a2, CUnit *a3, int a4) {
    int address = 0x474d90;
    signed result_;
    __asm {
        mov al, a1
        mov ebx, a2
        mov esi, a3
        push dword ptr a4
        call address
        mov result_, eax
    }
    return result_;
}
void sub_474FB0(CUnit *a1, Order order_id, u16 a3, __int16 pos_x, __int16 pos_y) {
    int address = 0x474fb0;
    __asm {
        mov esi, a1
        push dword ptr pos_y
        push dword ptr pos_x
        push dword ptr a3
        push dword ptr order_id
        call address
    }
}
DECL_FUNC(void (__thiscall*PrepareForNextOrderFunc)(CUnit *this_), PrepareForNextOrderFunc, 0x475000);
void sub_475220(CUnit *a1, Order order_id, Position position, CUnit *a4, u16 a5) {
    int address = 0x475220;
    __asm {
        mov esi, a1
        push dword ptr a5
        push dword ptr a4
        push dword ptr position
        push dword ptr order_id
        call address
    }
}
void OrderToPos(CUnit *a1, Order order_id, __int16 pos_x, __int16 pos_y) {
    int address = 0x475260;
    __asm {
        mov esi, a1
        push dword ptr pos_y
        push dword ptr pos_x
        push dword ptr order_id
        call address
    }
}
void UnitOrderTo(CUnit *unit, CUnit *target, Order order_id) {
    int address = 0x4752b0;
    __asm {
        mov esi, unit
        mov eax, target
        push dword ptr order_id
        call address
    }
}
void orderComputer_cl(CUnit *a1, Order order_id) {
    int address = 0x475310;
    __asm {
        mov esi, a1
        mov cl, order_id
        call address
    }
}
char sub_475350(CUnit *a1, __int16 a2, __int16 a3) {
    int address = 0x475350;
    char result_;
    __asm {
        mov eax, a1
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(char (__thiscall*toIdle)(CUnit *this_), toIdle, 0x4753a0);
void ISCRIPT_NoBrkCodeEnd(CUnit *a1, int a2) {
    int address = 0x4753e0;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
    }
}
char actUnitReturnToIdle(CUnit *a1) {
    int address = 0x475420;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
void OrderQueuedCommand(__int16 a1, __int16 a2, Order a3, COrder *a4, CUnit *a5, CUnit *a6, u16 a7, Position a8, CUnit *a9) {
    int address = 0x475470;
    __asm {
        mov ax, a1
        mov dx, a2
        mov cl, a3
        mov edi, a4
        push dword ptr a9
        push dword ptr a8
        push dword ptr a7
        push dword ptr a6
        push dword ptr a5
        call address
    }
}
void ExecuteQueuedOrder(__int16 a1, __int16 a2, u16 a3, CUnit *a4, _DWORD a5, int a6, Order order, CUnit *a8, Position a9, CUnit *a10) {
    int address = 0x4754f0;
    __asm {
        mov ax, a1
        mov dx, a2
        mov bx, a3
        mov esi, a4
        push dword ptr a10
        push dword ptr a9
        push dword ptr a8
        push dword ptr order
        push dword ptr a6
        push dword ptr a5
        call address
    }
}
DECL_FUNC(int (__stdcall*sub_4756B0)(int, int, int), sub_4756B0, 0x4756b0);
DECL_FUNC(int (__stdcall*sub_4756E0)(int, int), sub_4756E0, 0x4756e0);
void RemoveUnit(CUnit *a1) {
    int address = 0x475710;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int(*nullsub_33)(), nullsub_33, 0x475800);
DECL_FUNC(int(*nullsub_34)(), nullsub_34, 0x475810);
int UnitIsInvincible(UnitType unit_type) {
    int address = 0x475820;
    int result_;
    __asm {
        mov ax, unit_type
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(u8 (__thiscall*UnitGetAirWeapon)(CUnit *this_), UnitGetAirWeapon, 0x475840);
int getUnitMaxWpnRange(CUnit *a1, WeaponType weapon_type) {
    int address = 0x475870;
    int result_;
    __asm {
        mov eax, a1
        mov bl, weapon_type
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(unsigned __int8 (__fastcall*incrementUnitKillCount)(CUnit *a1), incrementUnitKillCount, 0x4759c0);
int sub_4759F0(CUnit *a1) {
    int address = 0x4759f0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_475A00)(), sub_475A00, 0x475a00);
signed int hasGrndWeaponGraphic(CUnit *a1) {
    int address = 0x475a10;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
signed int unitHasNoMainOrderType(CUnit *a1) {
    int address = 0x475a50;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_475A70)(), sub_475A70, 0x475a70);
DECL_FUNC(WeaponType (__thiscall*getGroundWeaponType)(CUnit *this_), getGroundWeaponType, 0x475a90);
DECL_FUNC(char (__thiscall*UnitGetGrndWeapon)(CUnit *this_), UnitGetGrndWeapon, 0x475ad0);
DECL_FUNC(int(*sub_475AF0)(), sub_475AF0, 0x475af0);
DECL_FUNC(int(*sub_475B40)(), sub_475B40, 0x475b40);
int orders_Guard(CUnit *a1) {
    int address = 0x475b90;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
signed int unitIsPositionInAttackAngle(int a1, int a2, CUnit *a3, unsigned __int8 a4) {
    int address = 0x475be0;
    signed result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        mov esi, a3
        push dword ptr a4
        call address
        mov result_, eax
    }
    return result_;
}
int unitCanAttackGroundType(UnitType unit_type, CUnit *a2) {
    int address = 0x475c80;
    int result_;
    __asm {
        mov ax, unit_type
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
int CanWeaponTargetUnit(WeaponType weaponId, CUnit *target, CUnit *attacker) {
    int address = 0x475ce0;
    int result_;
    __asm {
        mov al, weaponId
        mov edx, target
        push dword ptr attacker
        call address
        mov result_, eax
    }
    return result_;
}
unsigned int getUpgradedWpnCooldown(WeaponType a1, CUnit *a2) {
    int address = 0x475dc0;
    unsigned result_;
    __asm {
        mov al, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
int getUpgradedDamageAmtForGUI(int weapon_type, CUnit *a2) {
    int address = 0x475e40;
    int result_;
    __asm {
        mov edx, weapon_type
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
int getUnitDamageBonus(CUnit *a1, int weapon_type) {
    int address = 0x475ec0;
    int result_;
    __asm {
        mov eax, a1
        mov edx, weapon_type
        call address
        mov result_, eax
    }
    return result_;
}
int getDamageAmtForGUI(CUnit *a1, int weapon_type) {
    int address = 0x475f10;
    int result_;
    __asm {
        mov eax, a1
        mov ecx, weapon_type
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_475F50)(int, int), sub_475F50, 0x475f50);
char GetUnitAckRangeUpgrade(CUnit *a1) {
    int address = 0x476000;
    char result_;
    __asm {
        mov edx, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(signed int (__thiscall*AI_UnitCanAttack)(CUnit *this_), AI_UnitCanAttack, 0x476180);
int getUnitMissChance(CUnit *a1) {
    int address = 0x476210;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_4762C0)(int, int, int), sub_4762C0, 0x4762c0);
DECL_FUNC(int(*isTargetWithinMinMovementRange)(), isTargetWithinMinMovementRange, 0x4763d0);
signed int isUnitTargetOutOfMaxRange(CUnit *a1, CUnit *a2) {
    int address = 0x476430;
    signed result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
int isUnitTargetInsideMinRange(CUnit *unit, CUnit *target) {
    int address = 0x4764d0;
    int result_;
    __asm {
        mov eax, unit
        mov esi, target
        call address
        mov result_, eax
    }
    return result_;
}
void IgnoreAllScriptAndGotoIdle(CUnit *a1) {
    int address = 0x476550;
    __asm {
        mov esi, a1
        call address
    }
}
signed int weaponBehaviourCanHitTargetCheck(CUnit *a1, CUnit *a2) {
    int address = 0x4765b0;
    signed result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_476610)(), sub_476610, 0x476610);
signed int sub_476640(CUnit *a1, WeaponType weapon_type) {
    int address = 0x476640;
    signed result_;
    __asm {
        mov eax, a1
        push dword ptr weapon_type
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4766F0)(), sub_4766F0, 0x4766f0);
signed int unitCanAttackTarget(CUnit *a1, CUnit *a2, int a3) {
    int address = 0x476730;
    signed result_;
    __asm {
        mov ebx, a1
        mov esi, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
int isUnitInWeaponRange(CUnit *a1, CUnit *a2) {
    int address = 0x476870;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
signed int isBunkerBusy(int a1, CUnit *a2) {
    int address = 0x476930;
    signed result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4769D0)(), sub_4769D0, 0x4769d0);
__int64 sub_476A50(CUnit *a1, CUnit *a2){ throw "not implemented"; }
BOOL sub_476C50(CUnit *a1, CUnit *a2) {
    int address = 0x476c50;
    BOOL result_;
    __asm {
        mov eax, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
signed int doWeaponIscript(CUnit *a1, WeaponType a2, int a3, Anims a4) {
    int address = 0x476c90;
    signed result_;
    __asm {
        mov eax, a1
        mov bl, a2
        mov edi, a3
        push dword ptr a4
        call address
        mov result_, eax
    }
    return result_;
}
void sub_476D30(CUnit *a1) {
    int address = 0x476d30;
    __asm {
        mov edi, a1
        call address
    }
}
void sub_476E60(CUnit *a1, CUnit *a2) {
    int address = 0x476e60;
    __asm {
        mov eax, a1
        mov esi, a2
        call address
    }
}
CUnit *getWeaponBeginIscript(CUnit *result, Anims a2) {
    int address = 0x476ed0;
    CUnit * result_;
    __asm {
        mov eax, result
        mov dl, a2
        call address
        mov result_, eax
    }
    return result_;
}
int SetAttackTarget(CUnit *a1, CUnit *a2, int a3, int a4) {
    int address = 0x476fc0;
    int result_;
    __asm {
        mov eax, a1
        mov edi, a2
        push dword ptr a4
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4770E0)(), sub_4770E0, 0x4770e0);
DECL_FUNC(signed int (__thiscall*AI_AggressiveUnitTask)(CUnit *this_, int a2, int a3, signed int a4), AI_AggressiveUnitTask, 0x477160);
DECL_FUNC(void (__thiscall*holdPositionProc)(CUnit *this_, CUnit *a2), holdPositionProc, 0x477510);
void sub_4776C0(CUnit *a1, int a2, CUnit *a3) {
    int address = 0x4776c0;
    __asm {
        mov eax, a1
        mov edx, a2
        mov ecx, a3
        call address
    }
}
int orders_TurretGuard(CUnit *a1) {
    int address = 0x4777f0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
char orders_TurretAttack(CUnit *a1) {
    int address = 0x477980;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
char orders_AttackFixedRange(CUnit *a1, int a2) {
    int address = 0x477d00;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_477F10)(int), sub_477F10, 0x477f10);
void appyBunkerWeaponAnimation(CUnit *a1) {
    int address = 0x477fd0;
    __asm {
        mov eax, a1
        call address
    }
}
char orders_Patrol(CUnit *a1, CUnit *a2) {
    int address = 0x4780f0;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_478370)(char), sub_478370, 0x478370);
signed int OrderAttackBehaviour(CUnit *unit) {
    int address = 0x478540;
    signed result_;
    __asm {
        mov eax, unit
        call address
        mov result_, eax
    }
    return result_;
}
char orders_SapUnit(CUnit *a1) {
    int address = 0x4788e0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
char orders_SapLocation(CUnit *a1, int a2) {
    int address = 0x478a40;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, al
    }
    return result_;
}
bool attackApplyCooldown(CUnit *a1) {
    int address = 0x478b40;
    bool result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
char orders_AttackMoveEP(CUnit *a1) {
    int address = 0x478de0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
char orders_HarassMove(CUnit *a1, int a2) {
    int address = 0x478ec0;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, al
    }
    return result_;
}
char orders_AttackMove(CUnit *a1) {
    int address = 0x479040;
    char result_;
    __asm {
        mov esi, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(char (__stdcall*orders_NukeGround)(CUnit *a1), orders_NukeGround, 0x479200);
DECL_FUNC(int (__stdcall*BWFXN_KillUnitTarget)(CUnit *a1), BWFXN_KillUnitTarget, 0x479480);
void DoWeaponHit(CUnit *a1, CUnit *a2, int a3) {
    int address = 0x4795d0;
    __asm {
        mov ebx, a1
        push dword ptr a3
        push dword ptr a2
        call address
    }
}
char attackOverlayAndNotify(CUnit *a1, CUnit *a2, unsigned __int8 weapon_type, char a4) {
    int address = 0x479730;
    char result_;
    __asm {
        mov eax, a1
        mov esi, a2
        push dword ptr a4
        push dword ptr weapon_type
        call address
        mov result_, al
    }
    return result_;
}
char DamageUnitHp(s32 a1, CUnit *a2, CUnit *a3, int a4, int a5) {
    int address = 0x4797b0;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        push dword ptr a5
        push dword ptr a4
        push dword ptr a3
        call address
        mov result_, al
    }
    return result_;
}
unsigned int DoWeaponDamage(unsigned int result, CUnit *a2, WeaponType weapon_type, unsigned int a4, char a5, CUnit *a6, int a7) {
    int address = 0x479930;
    unsigned result_;
    __asm {
        mov eax, result
        mov edi, a2
        push dword ptr a7
        push dword ptr a6
        push dword ptr a5
        push dword ptr a4
        push dword ptr weapon_type
        call address
        mov result_, eax
    }
    return result_;
}
char WeaponBulletShot(CUnit *a1, CBullet *a2, unsigned int a3) {
    int address = 0x479ae0;
    char result_;
    __asm {
        mov eax, a1
        mov edx, a2
        push dword ptr a3
        call address
        mov result_, al
    }
    return result_;
}
void ISCRIPT_AttackMelee(CUnit *a1) {
    int address = 0x479b40;
    __asm {
        mov eax, a1
        call address
    }
}
int orders_AttackUnit(CUnit *a1) {
    int address = 0x479bd0;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
void ISCRIPT_UseWeapon(CUnit *a1, WeaponType weapon_type) {
    int address = 0x479c30;
    __asm {
        mov esi, a1
        push dword ptr weapon_type
        call address
    }
}
void FireUnitWeapon(CUnit *unit, u8 weapon_id) {
    int address = 0x479c90;
    __asm {
        mov esi, unit
        push dword ptr weapon_id
        call address
    }
}
void ISCRIPT_CastSpell(CUnit *a1, int weapon_id) {
    int address = 0x479d40;
    __asm {
        mov eax, a1
        mov ebx, weapon_id
        call address
    }
}
void ISCRIPT_AttackWith(CUnit *attacker, bool is_ground_weapon) {
    int address = 0x479d60;
    __asm {
        mov eax, attacker
        push dword ptr is_ground_weapon
        call address
    }
}
DECL_FUNC(int (__stdcall*sub_479DD0)(__int16, __int16), sub_479DD0, 0x479dd0);
DECL_FUNC(int (__stdcall*sub_479E00)(__int16, __int16), sub_479E00, 0x479e00);
DECL_FUNC(int(*sub_479E30)(), sub_479E30, 0x479e30);
DECL_FUNC(int(*nullsub_35)(), nullsub_35, 0x479e50);
DECL_FUNC(int(*minorUnpackSharedSaveData)(), minorUnpackSharedSaveData, 0x479e60);
int minorPackSharedSaveData(CBullet *a1) {
    int address = 0x479ec0;
    int result_;
    __asm {
        mov edi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_479F70)(int, int), sub_479F70, 0x479f70);
DECL_FUNC(int(*unitOrderMoveToTargetUnitResetOrderState)(), unitOrderMoveToTargetUnitResetOrderState, 0x479fa0);
DECL_FUNC(int(*unitOrderMoveToTargetUnit)(), unitOrderMoveToTargetUnit, 0x479fe0);
CSprite *sub_47A010(char a1, __int16 a2, char player_id, CUnit *unit, FlingyID flingy_id, int a6) {
    int address = 0x47a010;
    CSprite * result_;
    __asm {
        mov al, a1
        mov dx, a2
        mov bl, player_id
        mov esi, unit
        push dword ptr a6
        push dword ptr flingy_id
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*nullsub_36)(), nullsub_36, 0x47a060);
DECL_FUNC(int(*image_Insert)(), image_Insert, 0x47a070);
DECL_FUNC(int(*sub_47A090)(), sub_47A090, 0x47a090);
DECL_FUNC(int(*sub_47A0B0)(), sub_47A0B0, 0x47a0b0);
DECL_FUNC(int(*sub_47A0F0)(), sub_47A0F0, 0x47a0f0);
DECL_FUNC(int (__stdcall*sub_47A120)(int, int, int), sub_47A120, 0x47a120);
DECL_FUNC(int (__stdcall*sub_47A350)(int, int, int, int, int), sub_47A350, 0x47a350);
DECL_FUNC(int (__stdcall*sub_47A4E0)(int, int, int, int, int), sub_47A4E0, 0x47a4e0);
DECL_FUNC(int (__stdcall*sub_47A670)(int), sub_47A670, 0x47a670);
DECL_FUNC(int (__stdcall*sub_47A6E0)(int), sub_47A6E0, 0x47a6e0);
DECL_FUNC(int (__stdcall*sub_47A750)(int), sub_47A750, 0x47a750);
DECL_FUNC(int(*sub_47A7C0)(), sub_47A7C0, 0x47a7c0);
DECL_FUNC(int(*sub_47A7E0)(), sub_47A7E0, 0x47a7e0);
DECL_FUNC(int(*sub_47A800)(), sub_47A800, 0x47a800);
DECL_FUNC(__int16 (__fastcall*imageRenderFxn11_0)(int a1, int a2, int a3, int a4, CUnit *a5), imageRenderFxn11_0, 0x47a820);
DECL_FUNC(int(*sub_47AAC0)(), sub_47AAC0, 0x47aac0);
DECL_FUNC(int (__stdcall*sub_47AAF0)(int), sub_47AAF0, 0x47aaf0);
void sub_47AB40(LO_Overlays *a1, signed int a2) {
    int address = 0x47ab40;
    __asm {
        mov edi, a1
        push dword ptr a2
        call address
    }
}
DECL_FUNC(int(*sub_47ABB0)(), sub_47ABB0, 0x47abb0);
DECL_FUNC(int (__stdcall*readImageFile_lowMem)(int, int, int), readImageFile_lowMem, 0x47abe0);
DECL_FUNC(int (__stdcall*readImageFile)(HANDLE hFile, int, int), readImageFile, 0x47acf0);
DECL_FUNC(int (__stdcall*loadImagesData_lowMem)(int, int, int, int, int, int), loadImagesData_lowMem, 0x47ae30);
DECL_FUNC(int (__stdcall*loadImagesData)(int, int, int, int, int, int), loadImagesData, 0x47af30);
DECL_FUNC(int(*unit_isRefineryUnit)(), unit_isRefineryUnit, 0x47afe0);
DECL_FUNC(int(*sub_47B000)(), sub_47B000, 0x47b000);
DECL_FUNC(int(*sub_47B030)(), sub_47B030, 0x47b030);
DECL_FUNC(int(*unitIsFloorTrap)(), unitIsFloorTrap, 0x47b070);
DECL_FUNC(char *(__fastcall*getUnitNameStatString)(UnitType unit_type), getUnitNameStatString, 0x47b090);
DECL_FUNC(int(*sub_47B0F0)(), sub_47B0F0, 0x47b0f0);
DECL_FUNC(int(*sub_47B120)(), sub_47B120, 0x47b120);
char unitGetRace(CUnit *a1) {
    int address = 0x47b150;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
u32 UpdateHPGain(CUnit *a1) {
    int address = 0x47b180;
    u32 result_;
    __asm {
        mov edi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*CUnitToUnitID)(), CUnitToUnitID, 0x47b1d0);
CUnit *unitIDtoUnitMemFast(CUnit *a1) {
    int address = 0x47b210;
    CUnit * result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*unitIDtoCUnit)(), unitIDtoCUnit, 0x47b230);
UnitType getLastQueueSlotType(CUnit *a1) {
    int address = 0x47b270;
    UnitType result_;
    __asm {
        mov edx, a1
        call address
        mov result_, ax
    }
    return result_;
}
DECL_FUNC(int(*sub_47B2C0)(), sub_47B2C0, 0x47b2c0);
BOOL Unit_IsFactoryBuilding(CUnit *a1) {
    int address = 0x47b2e0;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*increaseUpgradeLevel)(int, __int16, char, char), increaseUpgradeLevel, 0x47b340);
DECL_FUNC(int (__stdcall*researchTech)(int, __int16, char, char), researchTech, 0x47b3c0);
BOOL BWFXN_IsCritter(CUnit *a1) {
    int address = 0x47b450;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
BOOL UnitIsRescuableOrUnknown0(CUnit *a1) {
    int address = 0x47b490;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
__int16 Thg2SpecialDIsableUnit(CUnit *a1) {
    int address = 0x47b4b0;
    __int16 result_;
    __asm {
        mov edi, a1
        call address
        mov result_, ax
    }
    return result_;
}
DECL_FUNC(const char *(__thiscall*UnitGetName)(CUnit *this_), UnitGetName, 0x47b5a0);
unsigned int GetModifiedUnitSpeed(unsigned int result, CUnit *a2) {
    int address = 0x47b5f0;
    unsigned result_;
    __asm {
        mov eax, result
        mov edx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_47B660)(), sub_47B660, 0x47b660);
char updateBuildingConstructShieldsAmount(CUnit *a1) {
    int address = 0x47b6a0;
    char result_;
    __asm {
        mov ebx, a1
        call address
        mov result_, al
    }
    return result_;
}
char hasOverlay(CUnit *a1) {
    int address = 0x47b720;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*unitIsEnemy)(), unitIsEnemy, 0x47b740);
DECL_FUNC(BOOL (__thiscall*unit_IsStandardAndMovable)(CUnit *this_), unit_IsStandardAndMovable, 0x47b770);
int unitLurkerIsNotIdle(CUnit *a1) {
    int address = 0x47b810;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(unsigned int (__thiscall*getModifiedUnitTurnRadius)(CUnit *this_), getModifiedUnitTurnRadius, 0x47b850);
DECL_FUNC(unsigned int (__thiscall*getModifiedUnitAcceleration)(CUnit *this_), getModifiedUnitAcceleration, 0x47b8a0);
DECL_FUNC(int (__fastcall*GetUnitSpeed)(int a1, CUnit *a2), GetUnitSpeed, 0x47b8f0);
DECL_FUNC(int(*isUnitEnemyOf)(), isUnitEnemyOf, 0x47b910);
DECL_FUNC(int (__stdcall*ApplyAllUnitSpeedUpgradesProc)(CUnit *unit, UnitType unit_type, char, int), ApplyAllUnitSpeedUpgradesProc, 0x47b940);
void DisableDoodadState(CUnit *a1) {
    int address = 0x47b960;
    __asm {
        mov eax, a1
        call address
    }
}
void EnableDoodadState(CUnit *a1) {
    int address = 0x47ba00;
    __asm {
        mov eax, a1
        call address
    }
}
int orders_WatchTarget(CUnit *a1) {
    int address = 0x47bab0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*ToggleDoodadState)(), ToggleDoodadState, 0x47bc10);
char orders_CloseDoor(CUnit *a1) {
    int address = 0x47bc50;
    char result_;
    __asm {
        mov esi, a1
        call address
        mov result_, al
    }
    return result_;
}
char orders_OpenDoor(CUnit *a1) {
    int address = 0x47bcd0;
    char result_;
    __asm {
        mov esi, a1
        call address
        mov result_, al
    }
    return result_;
}
char orders_HideTrap(CUnit *a1, int a2) {
    int address = 0x47c0a0;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, al
    }
    return result_;
}
char orders_JunkYardDog(CUnit *a1) {
    int address = 0x47c210;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
int orders_Critter(CUnit *a1) {
    int address = 0x47c3c0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
char orders_StayInRange(CUnit *a1) {
    int address = 0x47c4f0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
void GiveAllUnitPropertiesToPlayerAndMakeIdle(CUnit *a1, int a2) {
    int address = 0x47c9f0;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
    }
}
char GiveUnitToNeutral(CUnit *a1, int a2) {
    int address = 0x47cb90;
    char result_;
    __asm {
        mov esi, a1
        mov edx, a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*nullsub_37)(), nullsub_37, 0x47cc10);
DECL_FUNC(int(*sub_47CC20)(), sub_47CC20, 0x47cc20);
DECL_FUNC(int(*sub_47CC30)(), sub_47CC30, 0x47cc30);
DECL_FUNC(int(*sub_47CC40)(), sub_47CC40, 0x47cc40);
DECL_FUNC(int(*CMDACT_GameHash)(), CMDACT_GameHash, 0x47cc50);
DECL_FUNC(int(*saveMinimapCounts)(), saveMinimapCounts, 0x47ccb0);
DECL_FUNC(int (__stdcall*GameHash)(int), GameHash, 0x47ccd0);
DECL_FUNC(int(*CreateResourcesHash)(), CreateResourcesHash, 0x47cd70);
DECL_FUNC(int(*sub_47CDA0)(), sub_47CDA0, 0x47cda0);
DECL_FUNC(int(*CMD_GameHash)(), CMD_GameHash, 0x47cdd0);
DECL_FUNC(int(*CreateMaskHash)(), CreateMaskHash, 0x47ce20);
DECL_FUNC(int(*sub_47CE90)(), sub_47CE90, 0x47ce90);
DECL_FUNC(int(*CreateUnitsHash)(), CreateUnitsHash, 0x47ced0);
DECL_FUNC(int(*CreateHash)(), CreateHash, 0x47cf10);
DECL_FUNC(int(*UpdateGameHash)(), UpdateGameHash, 0x47cfc0);
DECL_FUNC(int(*resetGameValues)(), resetGameValues, 0x47d070);
DECL_FUNC(int(*nullsub_38)(), nullsub_38, 0x47d100);
DECL_FUNC(int(*nullsub_39)(), nullsub_39, 0x47d110);
DECL_FUNC(int(*nullsub_40)(), nullsub_40, 0x47d120);
DECL_FUNC(int(*nullsub_41)(), nullsub_41, 0x47d130);
DECL_FUNC(int(*nullsub_42)(), nullsub_42, 0x47d140);
DECL_FUNC(int(*nullsub_43)(), nullsub_43, 0x47d150);
DECL_FUNC(int(*nullsub_2)(), nullsub_2, 0x47d160);
DECL_FUNC(int(*sub_47D180)(), sub_47D180, 0x47d180);
DECL_FUNC(int(*sub_47D190)(), sub_47D190, 0x47d190);
DECL_FUNC(int(*sub_47D1B0)(), sub_47D1B0, 0x47d1b0);
DECL_FUNC(int(*sub_47D1E0)(), sub_47D1E0, 0x47d1e0);
DECL_FUNC(int (__stdcall*isTileVisible)(int, int), isTileVisible, 0x47d230);
DECL_FUNC(int (__stdcall*isCreepCovered)(int, int), isCreepCovered, 0x47d290);
DECL_FUNC(int(*sub_47D2C0)(), sub_47D2C0, 0x47d2c0);
DECL_FUNC(int(*sub_47D300)(), sub_47D300, 0x47d300);
DECL_FUNC(int(*sub_47D320)(), sub_47D320, 0x47d320);
DECL_FUNC(int(*sub_47D370)(), sub_47D370, 0x47d370);
DECL_FUNC(int(*sub_47D3C0)(), sub_47D3C0, 0x47d3c0);
DECL_FUNC(int(*sub_47D400)(), sub_47D400, 0x47d400);
DECL_FUNC(int(*sub_47D460)(), sub_47D460, 0x47d460);
DECL_FUNC(int(*sub_47D500)(), sub_47D500, 0x47d500);
DECL_FUNC(int(*sub_47D540)(), sub_47D540, 0x47d540);
DECL_FUNC(int(*sub_47D5F0)(), sub_47D5F0, 0x47d5f0);
DECL_FUNC(int(*sub_47D660)(), sub_47D660, 0x47d660);
DECL_FUNC(int(*sub_47D730)(), sub_47D730, 0x47d730);
DECL_FUNC(int (__stdcall*sub_47D770)(int), sub_47D770, 0x47d770);
DECL_FUNC(int (__stdcall*sub_47D860)(int, int, CUnit *), sub_47D860, 0x47d860);
DECL_FUNC(int(*sub_47D920)(), sub_47D920, 0x47d920);
DECL_FUNC(int (__stdcall*sub_47DC10)(int, int), sub_47DC10, 0x47dc10);
DECL_FUNC(int (__stdcall*sub_47DD60)(int), sub_47DD60, 0x47dd60);
DECL_FUNC(int (__stdcall*sub_47DE40)(int), sub_47DE40, 0x47de40);
DECL_FUNC(signed int (__stdcall*sub_47DF90)(CUnit *a1), sub_47DF90, 0x47df90);
DECL_FUNC(int (__stdcall*sub_47E100)(int), sub_47E100, 0x47e100);
DECL_FUNC(int (__stdcall*sub_47E2D0)(int, int, int, int, int), sub_47E2D0, 0x47e2d0);
DECL_FUNC(int(*InitializeRandomizerInfo)(), InitializeRandomizerInfo, 0x47e410);
DECL_FUNC(int (__thiscall*sub_47E440)(dialog *this_), sub_47E440, 0x47e440);
DECL_FUNC(void (__fastcall*sub_47E480)(dialog *a1, int a2), sub_47E480, 0x47e480);
DECL_FUNC(void (__fastcall*sub_47E590)(dialog *dlg, int x, int y, rect *dst), sub_47E590, 0x47e590);
void *sub_47E630(dialog *a1, dlgEvent *a2) {
    int address = 0x47e630;
    void * result_;
    __asm {
        mov eax, a1
        mov edi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(unsigned int (__fastcall*tips_PrevNext)(dialog *a1, dlgEvent *a2), tips_PrevNext, 0x47e6d0);
DECL_FUNC(bool (__fastcall*tips_ShowAtStartup)(dialog *dlg, dlgEvent *evt), tips_ShowAtStartup, 0x47e770);
char tips_BinDLG_CustomCtrlID(dialog *a1) {
    int address = 0x47e7b0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*TIPS_BINDLG)(dialog *dlg, dlgEvent *evt), TIPS_BINDLG, 0x47e9a0);
void loadTips_BINDLG(int a1) {
    int address = 0x47ea30;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int(*sub_47EA50)(), sub_47EA50, 0x47ea50);
DECL_FUNC(int (__stdcall*sub_47EA60)(int, int), sub_47EA60, 0x47ea60);
DECL_FUNC(int(*GetScrollSpeed)(), GetScrollSpeed, 0x47eab0);
DECL_FUNC(int(*CenterCursorGameScreen)(), CenterCursorGameScreen, 0x47eb30);
DECL_FUNC(int (__stdcall*assignCenterViewProc)(int), assignCenterViewProc, 0x47eb70);
DECL_FUNC(int(*sub_47EBB0)(), sub_47EBB0, 0x47ebb0);
DECL_FUNC(int(*sub_47EBC0)(), sub_47EBC0, 0x47ebc0);
DECL_FUNC(int(*refreshStars)(), refreshStars, 0x47ebf0);
DECL_FUNC(int(*drawStars)(), drawStars, 0x47ee20);
DECL_FUNC(int(*getScreenMoveState)(), getScreenMoveState, 0x47ef80);
DECL_FUNC(int(*PollInput)(), PollInput, 0x47f0e0);
DECL_FUNC(int(*loadParallaxStarGfx)(), loadParallaxStarGfx, 0x47f2c0);
DECL_FUNC(int (__thiscall*getLastWhisperPlayerIDIfStrEqual)(size_t, char *, int), getLastWhisperPlayerIDIfStrEqual, 0x47f440);
DECL_FUNC(int (__fastcall*verifyChatCommand)(size_t, char *, int, int), verifyChatCommand, 0x47f4d0);
DECL_FUNC(int(*sub_47F580)(), sub_47F580, 0x47f580);
DECL_FUNC(int(*LeagueChatFilter)(), LeagueChatFilter, 0x47f590);
DECL_FUNC(int (__stdcall*AUTBNETMESSAGE)(int), AUTBNETMESSAGE, 0x47f670);
DECL_FUNC(void (__stdcall*BWFXN_GlobalPrintText)(s_evt *evt), BWFXN_GlobalPrintText, 0x47f750);
DECL_FUNC(int (__stdcall*sendWhisper)(char *source), sendWhisper, 0x47f7a0);
DECL_FUNC(int (__stdcall*chatCommandFilter)(int), chatCommandFilter, 0x47f8f0);
DECL_FUNC(int(*maskSomething0)(), maskSomething0, 0x47fc50);
DECL_FUNC(int(*maskSomething2)(), maskSomething2, 0x47fe10);
DECL_FUNC(int (__stdcall*fogGraphicSomething)(int, int, int), fogGraphicSomething, 0x47ff10);
DECL_FUNC(int(*fogGraphicSomething_0)(), fogGraphicSomething_0, 0x480000);
DECL_FUNC(int(*ResetFogSomething)(), ResetFogSomething, 0x4800a0);
DECL_FUNC(int (__stdcall*gndSightCB_Edge)(int, int, int, int), gndSightCB_Edge, 0x480110);
DECL_FUNC(int (__stdcall*gndSightCB_Inside)(int, int, int, int), gndSightCB_Inside, 0x480200);
DECL_FUNC(int (__stdcall*airSightCB_Edge)(int, int, int, int), airSightCB_Edge, 0x4802a0);
DECL_FUNC(int (__stdcall*airSightCB_Inside)(int, int, int, int), airSightCB_Inside, 0x480310);
DECL_FUNC(int(*DestroyFogSightData)(), DestroyFogSightData, 0x480350);
DECL_FUNC(int(*sub_480410)(), sub_480410, 0x480410);
DECL_FUNC(int(*sub_480430)(), sub_480430, 0x480430);
DECL_FUNC(int(*j_maskSomething2)(), j_maskSomething2, 0x4804c0);
DECL_FUNC(int(*maskSomething1)(), maskSomething1, 0x4804d0);
DECL_FUNC(int(*sub_4805D0)(), sub_4805D0, 0x4805d0);
DECL_FUNC(int (__stdcall*updateFog)(int, int), updateFog, 0x4805f0);
DECL_FUNC(int (__stdcall*revealSightAtLocation)(signed int x, signed int y, int), revealSightAtLocation, 0x4806f0);
DECL_FUNC(int(*sub_4807F0)(), sub_4807F0, 0x4807f0);
DECL_FUNC(int(*RemoveFoWCheat)(), RemoveFoWCheat, 0x480880);
DECL_FUNC(int(*updateAllFog)(), updateAllFog, 0x4808e0);
DECL_FUNC(int(*sub_480960)(), sub_480960, 0x480960);
DECL_FUNC(int (__stdcall*GetKeyRandomizerSequence)(int), GetKeyRandomizerSequence, 0x480a40);
DECL_FUNC(void (__thiscall*saveColorSettings)(bool exit_code), saveColorSettings, 0x480a90);
DECL_FUNC(int (__thiscall*sub_480AE0)(dialog *this_), sub_480AE0, 0x480ae0);
DECL_FUNC(int(*sub_480B20)(), sub_480B20, 0x480b20);
DECL_FUNC(int(*sub_480B30)(), sub_480B30, 0x480b30);
void sub_480B90(dialog *a1) {
    int address = 0x480b90;
    __asm {
        mov eax, a1
        call address
    }
}
int sub_480BD0(dialog *a1) {
    int address = 0x480bd0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*loadColorSettings)(), loadColorSettings, 0x480c20);
void video_Cancel(dialog *a1, dlgEvent *a2) {
    int address = 0x480d00;
    __asm {
        mov eax, a1
        mov edi, a2
        call address
    }
}
DECL_FUNC(bool (__fastcall*video_PortraitRadioBtns)(dialog *dlg, dlgEvent *evt), video_PortraitRadioBtns, 0x480d50);
DECL_FUNC(bool (__fastcall*video_CCyclingCheckbox)(dialog *dlg, dlgEvent *evt), video_CCyclingCheckbox, 0x480d90);
DECL_FUNC(bool (__fastcall*video_GammaSlider)(dialog *dlg, dlgEvent *evt), video_GammaSlider, 0x480e10);
void video_CustomCTRLID(dialog *a1) {
    int address = 0x480e50;
    __asm {
        mov eax, a1
        call address
    }
}
void video_Main(dialog *a1) {
    int address = 0x480e70;
    __asm {
        mov eax, a1
        call address
    }
}
void video_OK(dialog *a1) {
    int address = 0x480ee0;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(bool (__fastcall*video_BINDLG_Main)(dialog *dlg, dlgEvent *evt), video_BINDLG_Main, 0x480f90);
DECL_FUNC(void (__cdecl*sub_481060)(), sub_481060, 0x481060);
DECL_FUNC(void (__thiscall*DestroyHelpContext)(bool exit_code), DestroyHelpContext, 0x4810a0);
DECL_FUNC(int (__stdcall*ContextHelpUpdateProc)(int, int), ContextHelpUpdateProc, 0x4810f0);
DECL_FUNC(int (__stdcall*sub_481160)(Bitmap *a1), sub_481160, 0x481160);
DECL_FUNC(int (__stdcall*BitContextHelpSurface)(int), BitContextHelpSurface, 0x4811e0);
DECL_FUNC(int (__stdcall*sub_481260)(int, __int16), sub_481260, 0x481260);
DECL_FUNC(int(*sub_481310)(), sub_481310, 0x481310);
DECL_FUNC(int(*sub_481320)(), sub_481320, 0x481320);
DECL_FUNC(int(*CreateHelpContext)(), CreateHelpContext, 0x481330);
DECL_FUNC(int(*refreshSelectionScreenEx)(), refreshSelectionScreenEx, 0x4813d0);
DECL_FUNC(int(*refreshSelectionScreen)(), refreshSelectionScreen, 0x481480);
int CreateContextHelp(int a1, int a2, char *a3) {
    int address = 0x481510;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_481690)(), sub_481690, 0x481690);
DECL_FUNC(int (__stdcall*md5_ctx_init)(int), md5_ctx_init, 0x4816b0);
DECL_FUNC(int (__stdcall*DecryptKey)(int), DecryptKey, 0x4818c0);
DECL_FUNC(void (__thiscall*SaveCPUThrottleOption)(bool exit_code), SaveCPUThrottleOption, 0x481ae0);
DECL_FUNC(int(*speedOptnsScreenScrollSliders)(), speedOptnsScreenScrollSliders, 0x481b00);
u32 createUpdateSpdOptionsScrollers(dialog *a1) {
    int address = 0x481b80;
    u32 result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_481CF0)(), sub_481CF0, 0x481cf0);
bool destroySpdDlg(dialog *a1, dlgEvent *a2) {
    int address = 0x481d30;
    bool result_;
    __asm {
        mov eax, a1
        mov edi, a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*spd_speedSlider)(dialog *dlg, struct dlgEvent *evt), spd_speedSlider, 0x481d80);
DECL_FUNC(bool (__fastcall*spd_CPUThrottleCheckbox)(dialog *dlg, dlgEvent *evt), spd_CPUThrottleCheckbox, 0x481de0);
DECL_FUNC(int(*sub_481E60)(), sub_481E60, 0x481e60);
DECL_FUNC(int(*copyOptionsInfoToDialog)(), copyOptionsInfoToDialog, 0x481e80);
int *CMDACT_GameSpeed(dialog *a1) {
    int address = 0x481ef0;
    int * result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*spd_dlg_Interact)(dialog *dlg, dlgEvent *evt), spd_dlg_Interact, 0x481fa0);
DECL_FUNC(int(*sub_482070)(), sub_482070, 0x482070);
DECL_FUNC(int (__stdcall*SAI_PathCreate_Sub3_1_1_0_0)(int), SAI_PathCreate_Sub3_1_1_0_0, 0x482090);
char *SAI_PathCreate_Sub3_1_1_1(SAI_Paths *a1, SaiRegion *a2) {
    int address = 0x4821a0;
    char * result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(signed int (__stdcall*SAI_PathCreate_Sub3_1_1_0)(SAI_Paths *a1, int a2, SaiRegion *a3), SAI_PathCreate_Sub3_1_1_0, 0x482290);
int SAI_PathCreate_Sub3_1_1(SAI_Paths *a1) {
    int address = 0x482850;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_482890)(int), sub_482890, 0x482890);
int SAI_PathCreate_Sub3_1_0(SAI_Paths *a1) {
    int address = 0x482900;
    int result_;
    __asm {
        mov edi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_482A80)(), sub_482A80, 0x482a80);
DECL_FUNC(int (__stdcall*SAI_PathCreate_Sub3_0_2)(int, int, __int16), SAI_PathCreate_Sub3_0_2, 0x482ae0);
DECL_FUNC(int (__stdcall*SAI_PathCreate_Sub3_0_1)(int), SAI_PathCreate_Sub3_0_1, 0x482c60);
DECL_FUNC(int(*sub_482CC0)(), sub_482CC0, 0x482cc0);
DECL_FUNC(int (__fastcall*SAI_PathCreate_Sub3_1_2_0)(SAI_Paths *a1, int a2, int a3), SAI_PathCreate_Sub3_1_2_0, 0x482d30);
int SAI_CreateRegionGroupings(SAI_Paths *a1) {
    int address = 0x482da0;
    int result_;
    __asm {
        mov ebx, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(void (__stdcall*SAI_PathCreate_Sub3_2)(SAI_Paths *a1), SAI_PathCreate_Sub3_2, 0x482e10);
DECL_FUNC(void (__stdcall*SAI_PathCreate_Sub3_3)(SAI_Paths *a1), SAI_PathCreate_Sub3_3, 0x483030);
int SAI_PathCreate_Sub5(SaiRegion *a1) {
    int address = 0x483160;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_483200)(), sub_483200, 0x483200);
DECL_FUNC(int(*sub_483230)(), sub_483230, 0x483230);
DECL_FUNC(int(*SAI_PathCreate_Sub3_4)(), SAI_PathCreate_Sub3_4, 0x483260);
DECL_FUNC(int (__stdcall*SAI_PathCreate_Sub3_0_0)(int, int, __int16), SAI_PathCreate_Sub3_0_0, 0x483960);
int SAI_PathCreate_Sub3_1(int a1, SAI_Paths *a2) {
    int address = 0x483b50;
    int result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_483BD0)(), sub_483BD0, 0x483bd0);
DECL_FUNC(__int16 (__thiscall*CreateUIUnreachableRegion)(SAI_Paths *this_), CreateUIUnreachableRegion, 0x483c00);
int SAI_PathCreate_Sub1(ActiveTile *a1) {
    int address = 0x483d20;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(void (__cdecl*freeSaiPaths)(), freeSaiPaths, 0x483dd0);
int SAI_PathCreate_Sub3_0(SAI_Paths *a1, int a2, DWORD dwProcessId) {
    int address = 0x483e30;
    int result_;
    __asm {
        mov edi, a1
        push dword ptr dwProcessId
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
int SAI_PathCreate_Sub3(PathCreateRelated *a1, SAI_Paths *a2) {
    int address = 0x484210;
    int result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*SAI_PathCreate)(ActiveTile *a1), SAI_PathCreate, 0x484290);
DECL_FUNC(void (__thiscall*nullsub_3)(dlgEvent *), nullsub_3, 0x484350);
DECL_FUNC(int(*saveScreenLocation)(), saveScreenLocation, 0x484360);
DECL_FUNC(void (__thiscall*input_Game_LeftMouseBtnDwn)(dlgEvent *), input_Game_LeftMouseBtnDwn, 0x484380);
DECL_FUNC(void (__thiscall*_input_Game_Idle)(dlgEvent *), _input_Game_Idle, 0x484390);
DECL_FUNC(void (__thiscall*input_Game_MiddleMouseBtnUp)(dlgEvent *), input_Game_MiddleMouseBtnUp, 0x4843a0);
DECL_FUNC(int (__stdcall*resetGameInputProcs)(__int16), resetGameInputProcs, 0x4843f0);
DECL_FUNC(void (__thiscall*input_MiddleBtnScreenMove_MouseMove)(dlgEvent *), input_MiddleBtnScreenMove_MouseMove, 0x484460);
DECL_FUNC(int(*recallScreenLocation)(), recallScreenLocation, 0x484500);
DECL_FUNC(void (__thiscall*input_Game_MiddleMouseBtnDwn)(dlgEvent *), input_Game_MiddleMouseBtnDwn, 0x484520);
DECL_FUNC(void (__thiscall*input_standardSysHotkeys)(dlgEvent *this_), input_standardSysHotkeys, 0x484590);
DECL_FUNC(void (__thiscall*input_targetOrder_RightMouseClick)(dlgEvent *), input_targetOrder_RightMouseClick, 0x4845f0);
DECL_FUNC(void (__thiscall*input_placeBuilding_RightMouseClick)(dlgEvent *), input_placeBuilding_RightMouseClick, 0x484600);
DECL_FUNC(void (__thiscall*input_Game_RightMouseBtnDwn)(dlgEvent *), input_Game_RightMouseBtnDwn, 0x484620);
DECL_FUNC(void (__thiscall*input_Game_UserKeyPress)(dlgEvent *), input_Game_UserKeyPress, 0x4846b0);
DECL_FUNC(void (__thiscall*CMDACT_Hotkey)(dlgEvent *), CMDACT_Hotkey, 0x4846e0);
DECL_FUNC(void (__thiscall*SetInGameInputProcs)(dlgEvent *), SetInGameInputProcs, 0x484cc0);
DECL_FUNC(int(*sub_484D90)(), sub_484D90, 0x484d90);
DECL_FUNC(int(*getPlayerCountInForce)(), getPlayerCountInForce, 0x484dc0);
DECL_FUNC(int(*sub_484DF0)(), sub_484DF0, 0x484df0);
DECL_FUNC(int(*sub_484E20)(), sub_484E20, 0x484e20);
DECL_FUNC(int(*sub_484E50)(), sub_484E50, 0x484e50);
DECL_FUNC(int(*sub_484E80)(), sub_484E80, 0x484e80);
DECL_FUNC(int(*sub_484E90)(), sub_484E90, 0x484e90);
DECL_FUNC(int(*sub_484EF0)(), sub_484EF0, 0x484ef0);
DECL_FUNC(int(*sub_484F20)(), sub_484F20, 0x484f20);
DECL_FUNC(int(*gameIsTeamGame)(), gameIsTeamGame, 0x484f50);
DECL_FUNC(int (__stdcall*sub_484F70)(char), sub_484F70, 0x484f70);
DECL_FUNC(int(*getOpenObsPlayerCount)(), getOpenObsPlayerCount, 0x484fc0);
DECL_FUNC(int(*getNextActivePlayer)(), getNextActivePlayer, 0x484ff0);
DECL_FUNC(int(*getTeamString)(), getTeamString, 0x4850f0);
DECL_FUNC(int(*sub_485130)(), sub_485130, 0x485130);
DECL_FUNC(int(*sub_485150)(), sub_485150, 0x485150);
DECL_FUNC(int(*randomizeTeamGame)(), randomizeTeamGame, 0x485160);
DECL_FUNC(int(*sub_4855E0)(), sub_4855E0, 0x4855e0);
DECL_FUNC(int(*illegalTeamCheck)(), illegalTeamCheck, 0x485710);
DECL_FUNC(int (__stdcall*sub_4857B0)(char), sub_4857B0, 0x4857b0);
DECL_FUNC(int(*sub_485820)(), sub_485820, 0x485820);
DECL_FUNC(int(*sub_485860)(), sub_485860, 0x485860);
DECL_FUNC(int(*sub_4858B0)(), sub_4858B0, 0x4858b0);
DECL_FUNC(int(*sub_485900)(), sub_485900, 0x485900);
DECL_FUNC(int(*sub_485920)(), sub_485920, 0x485920);
DECL_FUNC(int(*sub_485930)(), sub_485930, 0x485930);
DECL_FUNC(int (__stdcall*isStringValid)(int, int), isStringValid, 0x485980);
DECL_FUNC(void (__cdecl*BWFXN_sendTurn)(), BWFXN_sendTurn, 0x485a40);
DECL_FUNC(int(*GameKeepAlive)(), GameKeepAlive, 0x485aa0);
DECL_FUNC(int(*newGame)(), newGame, 0x485bb0);
DECL_FUNC(int(*BWFXN_QueueCommand)(), BWFXN_QueueCommand, 0x485bd0);
DECL_FUNC(int(*sub_485C70)(), sub_485C70, 0x485c70);
DECL_FUNC(int(*sub_485CC0)(), sub_485CC0, 0x485cc0);
DECL_FUNC(int (__stdcall*sub_485CE0)(char), sub_485CE0, 0x485ce0);
DECL_FUNC(int (__stdcall*SendTextMessage)(int, int a2, int), SendTextMessage, 0x485d10);
DECL_FUNC(int(*CMDRECV_SetLatency)(), CMDRECV_SetLatency, 0x485e60);
DECL_FUNC(int (__stdcall*SendTextMessagePrivate)(int), SendTextMessagePrivate, 0x485f30);
DECL_FUNC(int (__stdcall*SendTextMessagePublic)(int), SendTextMessagePublic, 0x485f50);
DECL_FUNC(void (__cdecl*RecvMessage)(), RecvMessage, 0x485f70);
DECL_FUNC(int (__stdcall*LOBBYCLASS2_RECV)(int, int playerid), LOBBYCLASS2_RECV, 0x486040);
DECL_FUNC(int(*Cls2RecvFrom)(), Cls2RecvFrom, 0x486530);
DECL_FUNC(int(*RecvSaveTurns)(), RecvSaveTurns, 0x486580);
DECL_FUNC(int(*ParseGameRecvInfo)(), ParseGameRecvInfo, 0x486f50);
DECL_FUNC(int(*gameLoopTurns)(), gameLoopTurns, 0x487070);
DECL_FUNC(int(*replayLoop)(), replayLoop, 0x487100);
DECL_FUNC(int(*BriefingLoopTurns)(), BriefingLoopTurns, 0x487250);
DECL_FUNC(int(*nullsub_44)(), nullsub_44, 0x4872a0);
DECL_FUNC(int(*sub_4872B0)(), sub_4872B0, 0x4872b0);
DECL_FUNC(int(*sub_4872C0)(), sub_4872C0, 0x4872c0);
DECL_FUNC(int(*isValid)(), isValid, 0x4872d0);
DECL_FUNC(int(*isNull)(), isNull, 0x4872e0);
DECL_FUNC(int(*sub_4872F0)(), sub_4872F0, 0x4872f0);
DECL_FUNC(int(*sub_487310)(), sub_487310, 0x487310);
int sub_487320(int result) {
    int address = 0x487320;
    int result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_487330)(), sub_487330, 0x487330);
DECL_FUNC(int(*sub_487340)(), sub_487340, 0x487340);
DECL_FUNC(int (__stdcall*sub_487350)(int), sub_487350, 0x487350);
DECL_FUNC(int (__stdcall*sub_4873E0)(int), sub_4873E0, 0x4873e0);
int *initializeThingyArray(unsigned __int16 count, CThingy **a2, CThingy **a3, CThingy *a4, int (__thiscall *a5)(void *)) {
    int address = 0x487470;
    int * result_;
    __asm {
        mov ax, count
        push dword ptr a5
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*packThingyData)(), packThingyData, 0x487540);
DECL_FUNC(int(*unpackThingyData)(), unpackThingyData, 0x4875f0);
DECL_FUNC(int (__stdcall*sub_487690)(CThingy *a1), sub_487690, 0x487690);
bool isThingyOnMap(signed int a1, signed int a2, CThingy *a3) {
    int address = 0x4877b0;
    bool result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        push dword ptr a3
        call address
        mov result_, al
    }
    return result_;
}
void sub_4878F0(CThingy *a1) {
    int address = 0x4878f0;
    __asm {
        mov esi, a1
        call address
    }
}
DECL_FUNC(void (__cdecl*initializeThingyArrays)(), initializeThingyArrays, 0x487990);
DECL_FUNC(int (__stdcall*sub_487A10)(int), sub_487A10, 0x487a10);
DECL_FUNC(int (__fastcall*sub_487A90)(CUnit *a1, __int16 a2), sub_487A90, 0x487a90);
DECL_FUNC(int (__stdcall*getPlacementRestrictionsFromSpriteID)(int, int, int), getPlacementRestrictionsFromSpriteID, 0x487b00);
DECL_FUNC(int (__stdcall*sub_487C70)(int, int, int, int), sub_487C70, 0x487c70);
DECL_FUNC(int(*CThingyIsVisible)(), CThingyIsVisible, 0x487cf0);
DECL_FUNC(int(*sub_487D90)(), sub_487D90, 0x487d90);
DECL_FUNC(int (__fastcall*readThingyArray)(int a1, int a2, FILE *a3, CThingy *a4, int a5), readThingyArray, 0x487db0);
DECL_FUNC(int (__stdcall*writeThingys)(FILE *a1, CThingy *a2, __int16 a3), writeThingys, 0x487ec0);
DECL_FUNC(int (__stdcall*sub_487FD0)(__int16), sub_487FD0, 0x487fd0);
void sub_488020(CThingy *a1, MenuPosition a2) {
    int address = 0x488020;
    __asm {
        mov edi, a1
        mov ebx, a2
        call address
    }
}
DECL_FUNC(void (__cdecl*BWFXN_drawAllThingys)(), BWFXN_drawAllThingys, 0x488180);
BOOL sub_4881E0(char player_id, int a2, int position_x, int a4, unsigned __int16 position_y) {
    int address = 0x4881e0;
    BOOL result_;
    __asm {
        mov al, player_id
        mov edx, a2
        mov ecx, position_x
        mov esi, a4
        push dword ptr position_y
        call address
        mov result_, eax
    }
    return result_;
}
CThingy *CreateThingy(int sprite_id, int position_x, unsigned __int16 position_y, char playerID) {
    int address = 0x488210;
    CThingy * result_;
    __asm {
        mov di, position_y
        push dword ptr playerID
        push dword ptr position_x
        push dword ptr sprite_id
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_488310)(), sub_488310, 0x488310);
int sub_488350(_DWORD a1) {
    int address = 0x488350;
    int result_;
    __asm {
        mov ebx, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_488410)(__int16 a1, CSprite *a2), sub_488410, 0x488410);
void updateThingys(MenuPosition a1) {
    int address = 0x488510;
    __asm {
        mov ebx, a1
        call address
    }
}
DECL_FUNC(void (__cdecl*InitializeThingyArray)(), InitializeThingyArray, 0x488550);
void GroundAttackInit(__int16 a1, __int16 a2) {
    int address = 0x488660;
    __asm {
        mov ax, a1
        mov cx, a2
        call address
    }
}
DECL_FUNC(int(*sub_4886E0)(), sub_4886E0, 0x4886e0);
DECL_FUNC(int(*sub_4886F0)(), sub_4886F0, 0x4886f0);
DECL_FUNC(int(*sub_488710)(), sub_488710, 0x488710);
DECL_FUNC(int(*sub_488750)(), sub_488750, 0x488750);
DECL_FUNC(int(*isSinglePaused)(), isSinglePaused, 0x488760);
DECL_FUNC(int(*BWFXN_IsPaused)(), BWFXN_IsPaused, 0x488780);
DECL_FUNC(void (__stdcall*TickCountSomething)(int a1), TickCountSomething, 0x488790);
DECL_FUNC(void(*PauseGame_maybe)(void), PauseGame_maybe, 0x488800);
DECL_FUNC(int(*sub_488880)(), sub_488880, 0x488880);
DECL_FUNC(int(*sub_4888A0)(), sub_4888A0, 0x4888a0);
DECL_FUNC(int(*getSuppliesUsed)(), getSuppliesUsed, 0x4888c0);
DECL_FUNC(int(*getSuppliesAvailable)(), getSuppliesAvailable, 0x488900);
DECL_FUNC(int(*sub_488960)(), sub_488960, 0x488960);
DECL_FUNC(int(*getSuppliesMax)(), getSuppliesMax, 0x488990);
DECL_FUNC(int(*getSuppliesRemaining)(), getSuppliesRemaining, 0x4889d0);
int incrementUnitDeathScores(unsigned int a1, CUnit *a2) {
    int address = 0x488af0;
    int result_;
    __asm {
        mov edx, a1
        mov edi, a2
        call address
        mov result_, eax
    }
    return result_;
}
void incrementUnitScores(CUnit *a1, int a2) {
    int address = 0x488bf0;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
    }
}
void incrementUnitScoresEx(int a1, CUnit *a2, int a3) {
    int address = 0x488d50;
    __asm {
        mov ecx, a1
        mov edi, a2
        push dword ptr a3
        call address
    }
}
DECL_FUNC(int(*sub_488F50)(), sub_488F50, 0x488f50);
DECL_FUNC(int(*sub_488F60)(), sub_488F60, 0x488f60);
DECL_FUNC(int(*sub_488F70)(), sub_488F70, 0x488f70);
DECL_FUNC(int(*sub_488F80)(), sub_488F80, 0x488f80);
DECL_FUNC(void (__cdecl*InitializeUnitCounts)(), InitializeUnitCounts, 0x488f90);
DECL_FUNC(int(*nullsub_45)(), nullsub_45, 0x4890d0);
DECL_FUNC(int(*nullsub_46)(), nullsub_46, 0x4890e0);
DECL_FUNC(int(*sub_4890F0)(), sub_4890F0, 0x4890f0);
DECL_FUNC(int(*sub_489100)(), sub_489100, 0x489100);
DECL_FUNC(int(*sub_489110)(), sub_489110, 0x489110);
DECL_FUNC(int(*sub_489120)(), sub_489120, 0x489120);
char ExecuteTriggerActions(TriggerListEntry *a1) {
    int address = 0x489130;
    char result_;
    __asm {
        mov esi, a1
        call address
        mov result_, al
    }
    return result_;
}
signed int ExecuteTriggerConditions(TriggerListEntry *a1) {
    int address = 0x489200;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_489250)(), sub_489250, 0x489250);
DECL_FUNC(int(*sub_489270)(), sub_489270, 0x489270);
DECL_FUNC(int(*sub_489280)(), sub_489280, 0x489280);
DECL_FUNC(int(*sub_489290)(), sub_489290, 0x489290);
DECL_FUNC(int(*sub_4892A0)(), sub_4892A0, 0x4892a0);
DECL_FUNC(int(*sub_4892B0)(), sub_4892B0, 0x4892b0);
DECL_FUNC(int(*sub_4892C0)(), sub_4892C0, 0x4892c0);
DECL_FUNC(int(*sub_4892D0)(), sub_4892D0, 0x4892d0);
DECL_FUNC(int(*sub_4892E0)(), sub_4892E0, 0x4892e0);
DECL_FUNC(int(*sub_4892F0)(), sub_4892F0, 0x4892f0);
char get_player_victory(int player) {
    int address = 0x489300;
    char result_;
    __asm {
        mov eax, player
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*sub_489310)(), sub_489310, 0x489310);
DECL_FUNC(int(*sub_489330)(), sub_489330, 0x489330);
DECL_FUNC(int(*isPlayerIDValidForScoreChange)(), isPlayerIDValidForScoreChange, 0x489350);
DECL_FUNC(int(*nullsub_47)(), nullsub_47, 0x489390);
DECL_FUNC(int(*sub_4893A0)(), sub_4893A0, 0x4893a0);
DECL_FUNC(int(*resetTriggerProperties)(), resetTriggerProperties, 0x4893c0);
DECL_FUNC(int(*sub_489410)(), sub_489410, 0x489410);
DECL_FUNC(int(*TimerTick)(), TimerTick, 0x489430);
void executeGameTrigger(TriggerList *a1) {
    int address = 0x489450;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int(*defCenterViewProc)(), defCenterViewProc, 0x4894a0);
DECL_FUNC(signed int (__stdcall*AddGameTrigger)(Trigger *a1), AddGameTrigger, 0x4894c0);
DECL_FUNC(int(*setTriggerPlayerActivityState)(), setTriggerPlayerActivityState, 0x489790);
DECL_FUNC(int (__stdcall*ReadTriggerNodeData)(FILE *), ReadTriggerNodeData, 0x4897e0);
DECL_FUNC(int (__stdcall*WriteTriggerData)(FILE *), WriteTriggerData, 0x4899d0);
DECL_FUNC(int(*initializeTriggerInfo)(), initializeTriggerInfo, 0x489b30);
DECL_FUNC(int(*UpdateCountdownTimer)(), UpdateCountdownTimer, 0x489c30);
DECL_FUNC(int(*countdownTimersExecute)(), countdownTimersExecute, 0x489cc0);
DECL_FUNC(int(*keyPress_Escape)(), keyPress_Escape, 0x489da0);
DECL_FUNC(int(*AnnouncePlayerEliminated)(), AnnouncePlayerEliminated, 0x489e80);
DECL_FUNC(int(*ApplyPlayerLeftRoutine)(), ApplyPlayerLeftRoutine, 0x489fc0);
DECL_FUNC(int (__stdcall*Game_PlayerDropped)(int), Game_PlayerDropped, 0x48a180);
DECL_FUNC(int (__stdcall*Game_PlayerLeft)(int), Game_PlayerLeft, 0x48a1c0);
DECL_FUNC(int(*endgameCheck)(), endgameCheck, 0x48a200);
DECL_FUNC(void (__cdecl*load_endmission)(), load_endmission, 0x48a410);
DECL_FUNC(char (__stdcall*BWFXN_ExecuteGameTriggers)(signed int dwMillisecondsPerFrame), BWFXN_ExecuteGameTriggers, 0x48a460);
CBullet *sub_48A530(CBullet *result) {
    int address = 0x48a530;
    CBullet * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_48A550)(), sub_48A550, 0x48a550);
void BulletBehaviour_Instant(CBullet *bullet) {
    int address = 0x48a560;
    __asm {
        mov eax, bullet
        call address
    }
}
void j_BulletBehaviour_ReAssign(CBullet *a1, CUnit *a2, int a3) {
    int address = 0x48a600;
    __asm {
        mov ecx, a1
        mov edi, a2
        mov ebx, a3
        call address
    }
}
DECL_FUNC(int(*sub_48A610)(), sub_48A610, 0x48a610);
DECL_FUNC(int(*sub_48A650)(), sub_48A650, 0x48a650);
DECL_FUNC(int(*sub_48A670)(), sub_48A670, 0x48a670);
DECL_FUNC(int(*nullsub_48)(), nullsub_48, 0x48a680);
DECL_FUNC(void (__cdecl*InitializeBulletArray)(), InitializeBulletArray, 0x48a690);
DECL_FUNC(int(*nullsub_49)(), nullsub_49, 0x48a710);
DECL_FUNC(int(*reorderBulletArrayReferences)(), reorderBulletArrayReferences, 0x48a720);
DECL_FUNC(int (__stdcall*unpackBulletData)(int), unpackBulletData, 0x48a8d0);
int packBulletData(CBullet *a1, int a2) {
    int address = 0x48a9a0;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *assignWpnData(CUnit *result, char a2) {
    int address = 0x48aa80;
    CUnit * result_;
    __asm {
        mov eax, result
        mov dl, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(CBullet *(__thiscall*BWFXN_clearUnitTarget)(CUnit *this_), BWFXN_clearUnitTarget, 0x48aac0);
DECL_FUNC(int(*sub_48ACA0)(), sub_48ACA0, 0x48aca0);
int GetUnitBulletDamage(CUnit *a1, CBullet *a2) {
    int address = 0x48acd0;
    int result_;
    __asm {
        mov eax, a1
        mov edx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(BOOL (__thiscall*isUnitDistanceWithin)(CUnit *this_, CBullet *a2, unsigned int a3), isUnitDistanceWithin, 0x48adb0);
DECL_FUNC(int (__stdcall*ReadBulletsArray)(__int16), ReadBulletsArray, 0x48ae40);
DECL_FUNC(int (__stdcall*WriteBullets)(FILE *), WriteBullets, 0x48aeb0);
DECL_FUNC(int (__thiscall*FindNextBounceTargetProc)(CUnit *this_), FindNextBounceTargetProc, 0x48afd0);
DECL_FUNC(signed int (__fastcall*AirSplashProc)(CUnit *a1, CBullet *a2), AirSplashProc, 0x48b150);
DECL_FUNC(int(*FindNextBounceTarget)(), FindNextBounceTarget, 0x48b1e0);
int sub_48B250(CBullet *a1) {
    int address = 0x48b250;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
void BulletBehaviour_Bounce(CBullet *a1) {
    int address = 0x48b2d0;
    __asm {
        mov edi, a1
        call address
    }
}
void BulletBehaviour_Fly(CBullet *a1) {
    int address = 0x48b3b0;
    __asm {
        mov eax, a1
        call address
    }
}
char BulletBehaviour_Area(CBullet *a1) {
    int address = 0x48b440;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
void BulletBehaviour_Follow(CBullet *a1) {
    int address = 0x48b500;
    __asm {
        mov eax, a1
        call address
    }
}
int sub_48B570(CBullet *a1, CUnit *a2) {
    int address = 0x48b570;
    int result_;
    __asm {
        mov edi, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__fastcall*SplashProc)(CUnit *a1, CBullet *a2), SplashProc, 0x48b680);
DECL_FUNC(int(*AirSplashProc2)(), AirSplashProc2, 0x48b730);
DECL_FUNC(int(*LurkerSplashProc)(), LurkerSplashProc, 0x48b750);
DECL_FUNC(void (__stdcall*CBullet_Damage)(CBullet *a1), CBullet_Damage, 0x48b770);
DECL_FUNC(void (__thiscall*BulletBehaviour_Persist)(CBullet *this_), BulletBehaviour_Persist, 0x48bc70);
void BulletBehaviour_ReAssign(CBullet *a1, CUnit *a2, int a3) {
    int address = 0x48bd50;
    __asm {
        mov ecx, a1
        mov edi, a2
        mov ebx, a3
        call address
    }
}
signed int InitializeBullet(CUnit *a1, __int16 a2, char player_id, CBullet *a4, int weapon_type, int a6, int a7) {
    int address = 0x48bec0;
    signed result_;
    __asm {
        mov eax, a1
        mov dx, a2
        mov cl, player_id
        push dword ptr a7
        push dword ptr a6
        push dword ptr weapon_type
        push dword ptr a4
        call address
        mov result_, eax
    }
    return result_;
}
CBullet *CreateBullet(CUnit *a1, int weapon_id, int a3, __int16 a4, char a5, int a6) {
    int address = 0x48c260;
    CBullet * result_;
    __asm {
        mov eax, a1
        mov ecx, weapon_id
        push dword ptr a6
        push dword ptr a5
        push dword ptr a4
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*ImageDrawingBulletDrawing)(), ImageDrawingBulletDrawing, 0x48c3d0);
DECL_FUNC(int(*sub_48C4A0)(), sub_48C4A0, 0x48c4a0);
DECL_FUNC(int(*sub_48C4B0)(), sub_48C4B0, 0x48c4b0);
DECL_FUNC(int(*sub_48C4D0)(), sub_48C4D0, 0x48c4d0);
DECL_FUNC(COrder *(__fastcall*createOrder)(Order a1, u16 a2, Position a3, struct CUnit *a4), createOrder, 0x48c510);
DECL_FUNC(void (__cdecl*InitializeOrderArray)(), InitializeOrderArray, 0x48c590);
DECL_FUNC(int(*sub_48C720)(), sub_48C720, 0x48c720);
DECL_FUNC(int(*nullsub_50)(), nullsub_50, 0x48c730);
DECL_FUNC(int(*sub_48C740)(), sub_48C740, 0x48c740);
DECL_FUNC(int(*unpackOrderData)(), unpackOrderData, 0x48c770);
DECL_FUNC(int(*packOrderData)(), packOrderData, 0x48c7d0);
DECL_FUNC(int(*sub_48C9F0)(), sub_48C9F0, 0x48c9f0);
DECL_FUNC(int(*sub_48CA00)(), sub_48CA00, 0x48ca00);
DECL_FUNC(void (__cdecl*CancelTargetOrder)(), CancelTargetOrder, 0x48ca10);
DECL_FUNC(int (__stdcall*sub_48CA90)(int, __int16), sub_48CA90, 0x48ca90);
DECL_FUNC(int (__stdcall*sub_48CAC0)(int), sub_48CAC0, 0x48cac0);
DECL_FUNC(void (__cdecl*j_CancelTargetOrder)(), j_CancelTargetOrder, 0x48cae0);
DECL_FUNC(int(*issueTriTargetOrder)(), issueTriTargetOrder, 0x48caf0);
DECL_FUNC(int(*sub_48CB50)(), sub_48CB50, 0x48cb50);
DECL_FUNC(int(*nullsub_51)(), nullsub_51, 0x48cb70);
DECL_FUNC(int(*updateTextDisplay)(), updateTextDisplay, 0x48cb80);
DECL_FUNC(int(*refreshGameTextIfCounterActive)(), refreshGameTextIfCounterActive, 0x48cc70);
DECL_FUNC(int(*refreshGameTextIfFlagIsSet)(), refreshGameTextIfFlagIsSet, 0x48ccf0);
void PrintText(const char *text, u8 color, int tick_count, char a4) {
    int address = 0x48cd30;
    __asm {
        mov eax, text
        push dword ptr a4
        push dword ptr tick_count
        push dword ptr color
        call address
    }
}
DECL_FUNC(int(*resetTextAndLineData)(), resetTextAndLineData, 0x48ce90);
DECL_FUNC(int(*showStatTxtToPlayer)(), showStatTxtToPlayer, 0x48cf00);
DECL_FUNC(int (__stdcall*createTextMessageWithTimer)(int), createTextMessageWithTimer, 0x48cf20);
DECL_FUNC(int(*sub_48CF40)(), sub_48CF40, 0x48cf40);
DECL_FUNC(int(*BWFXN_DrawHighTarget)(), BWFXN_DrawHighTarget, 0x48cf60);
int PrintText_(int result, char *a2) {
    int address = 0x48d0c0;
    int result_;
    __asm {
        mov eax, result
        mov edi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*UnitPlacementError)(int), UnitPlacementError, 0x48d140);
DECL_FUNC(int (__stdcall*BWFXN_PrintText)(char *source, int), BWFXN_PrintText, 0x48d1c0);
DECL_FUNC(int(*freePlaceboxBuffer)(), freePlaceboxBuffer, 0x48d560);
DECL_FUNC(int(*sub_48D5A0)(), sub_48D5A0, 0x48d5a0);
DECL_FUNC(int(*sub_48D5B0)(), sub_48D5B0, 0x48d5b0);
DECL_FUNC(int (__stdcall*placebuildingUpdateProc)(int, int), placebuildingUpdateProc, 0x48d5c0);
DECL_FUNC(int(*sub_48D660)(), sub_48D660, 0x48d660);
DECL_FUNC(int(*sub_48D700)(), sub_48D700, 0x48d700);
int getUnitPlaceboxSize(UnitType a1, int a2, int a3) {
    int address = 0x48d750;
    int result_;
    __asm {
        mov ax, a1
        mov edi, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_48D7B0)(), sub_48D7B0, 0x48d7b0);
DECL_FUNC(int (__stdcall*sub_48D7F0)(int), sub_48D7F0, 0x48d7f0);
DECL_FUNC(int(*sub_48D910)(), sub_48D910, 0x48d910);
DECL_FUNC(int(*placeBuildingMsg)(), placeBuildingMsg, 0x48d930);
DECL_FUNC(int(*refreshLayer3And4)(), refreshLayer3And4, 0x48d9a0);
char sub_48DA30(UnitType a1) {
    int address = 0x48da30;
    char result_;
    __asm {
        mov ax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_48DAF0)(int a1, UnitType a2), sub_48DAF0, 0x48daf0);
DECL_FUNC(int (__thiscall*CMDRECV_PlaceBuildingAllowed)(CUnit *a2), CMDRECV_PlaceBuildingAllowed, 0x48dbd0);
DECL_FUNC(int (__stdcall*sub_48DCD0)(int), sub_48DCD0, 0x48dcd0);
DECL_FUNC(int(*sub_48DCE0)(), sub_48DCE0, 0x48dce0);
DECL_FUNC(int(*_PlaceBuildingAllowed)(), _PlaceBuildingAllowed, 0x48dda0);
DECL_FUNC(int(*refreshScreen)(), refreshScreen, 0x48ddc0);
void sub_48DE70(CUnit *a1, Order a2, int a3, UnitType a4) {
    int address = 0x48de70;
    __asm {
        mov eax, a1
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
    }
}
DECL_FUNC(int(*sub_48DFF0)(), sub_48DFF0, 0x48dff0);
DECL_FUNC(void (__stdcall*cmdRECV_PlaceBuildingNormal)(int a1, Order a2, int unit_type), cmdRECV_PlaceBuildingNormal, 0x48e010);
DECL_FUNC(int (__stdcall*cmdRECV_PlaceBuildingAddon)(int, int, int), cmdRECV_PlaceBuildingAddon, 0x48e0a0);
DECL_FUNC(int (__stdcall*cmdRECV_PlaceBuilding)(int), cmdRECV_PlaceBuilding, 0x48e190);
DECL_FUNC(int(*placebuildingRefineryCheck)(), placebuildingRefineryCheck, 0x48e1e0);
DECL_FUNC(void (__stdcall*doPlacebuildingChecking)(CUnit *a1), doPlacebuildingChecking, 0x48e210);
DECL_FUNC(int(*refreshPlaceBuildingLocation)(), refreshPlaceBuildingLocation, 0x48e310);
DECL_FUNC(int(*placebuildingRefineryProc)(), placebuildingRefineryProc, 0x48e430);
DECL_FUNC(void (__cdecl*placebuildingNormalProc)(), placebuildingNormalProc, 0x48e490);
DECL_FUNC(int (__stdcall*input_placeBuilding_Click_Notify)(char), input_placeBuilding_Click_Notify, 0x48e4e0);
DECL_FUNC(int(*sub_48E5A0)(), sub_48E5A0, 0x48e5a0);
DECL_FUNC(void (__thiscall*input_placeBuilding_LeftMouseClick)(dlgEvent *), input_placeBuilding_LeftMouseClick, 0x48e5d0);
DECL_FUNC(int (__stdcall*sub_48E640)(char), sub_48E640, 0x48e640);
DECL_FUNC(int(*pracebuildingProc)(), pracebuildingProc, 0x48e6e0);
DECL_FUNC(int (__stdcall*issuePlacebuildingOrder)(char), issuePlacebuildingOrder, 0x48e730);
DECL_FUNC(int(*getSfxPanFromXDistance)(), getSfxPanFromXDistance, 0x48e850);
DECL_FUNC(int(*sub_48E8C0)(), sub_48E8C0, 0x48e8c0);
DECL_FUNC(int(*getSfxVolumeFromScreenDistance)(), getSfxVolumeFromScreenDistance, 0x48e8d0);
int rndGetSfxBetween(SfxData a1, SfxData a2) {
    int address = 0x48e940;
    int result_;
    __asm {
        mov edi, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*input_Game_Idle)(), input_Game_Idle, 0x48e980);
DECL_FUNC(int(*resetUnitAttackNotifyTimer)(), resetUnitAttackNotifyTimer, 0x48e9f0);
DECL_FUNC(unsigned int (__fastcall*sub_48EA00)(SfxData a1), sub_48EA00, 0x48ea00);
SfxData getUnitPissSfxOrBldgWhatSfx(UnitType unit_type, int a2) {
    int address = 0x48ea20;
    SfxData result_;
    __asm {
        mov ax, unit_type
        mov edx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(SfxData (__fastcall*GetRndYesSfx)(UnitType a1), GetRndYesSfx, 0x48eab0);
DECL_FUNC(int(*resetAllUnitAttackNotifyTimersInRange)(), resetAllUnitAttackNotifyTimersInRange, 0x48eae0);
DECL_FUNC(int(*unitCanPlaySFX)(), unitCanPlaySFX, 0x48eb30);
DECL_FUNC(int(*sub_48EB90)(), sub_48EB90, 0x48eb90);
DECL_FUNC(int(*MuteUnitSpeech_maybe)(), MuteUnitSpeech_maybe, 0x48ebc0);
DECL_FUNC(int (__stdcall*playUnitSFX)(int, int, int), playUnitSFX, 0x48ec10);
int PlaySound(SfxData sfxId, CUnit *sourceUnit, int a3, signed int a4) {
    int address = 0x48ed50;
    int result_;
    __asm {
        mov ebx, sfxId
        mov esi, sourceUnit
        push dword ptr a4
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
void ShowErrorMessageWithSfx(int playerId, __int16 statTxtId, SfxData sfxId) {
    int address = 0x48ee30;
    __asm {
        mov ebx, playerId
        mov di, statTxtId
        mov esi, sfxId
        call address
    }
}
DECL_FUNC(int(*sub_48EEF0)(), sub_48EEF0, 0x48eef0);
DECL_FUNC(int(*get_statTxt_Str_0)(), get_statTxt_Str_0, 0x48ef30);
DECL_FUNC(int(*playBuildPlacementSound_0)(), playBuildPlacementSound_0, 0x48eff0);
void playUpgradeCompleteSound(CUnit *a1) {
    int address = 0x48f070;
    __asm {
        mov esi, a1
        call address
    }
}
void playResearchCompleteSound(CUnit *a1) {
    int address = 0x48f150;
    __asm {
        mov esi, a1
        call address
    }
}
DECL_FUNC(void (__stdcall*doAttackNotifyEvent)(CUnit *a1), doAttackNotifyEvent, 0x48f230);
void PlayBuildingCompleteSound(CUnit *a1) {
    int address = 0x48f310;
    __asm {
        mov eax, a1
        call address
    }
}
void playMorphingCompleteSound(CUnit *a1) {
    int address = 0x48f440;
    __asm {
        mov eax, a1
        call address
    }
}
void PlayWorkerActionSound(CUnit *a1) {
    int address = 0x48f4d0;
    __asm {
        mov eax, a1
        call address
    }
}
int *playBuildingLandSound(CUnit *a1) {
    int address = 0x48f5a0;
    int * result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
void playBuildPlacementSound(CUnit *a1) {
    int address = 0x48f630;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int (__stdcall*PlayWorkerErrorSound)(int), PlayWorkerErrorSound, 0x48f6c0);
DECL_FUNC(int (__stdcall*SetWorkerError)(int), SetWorkerError, 0x48f7b0);
void PlayBuildingLiftoffSound(CUnit *a1) {
    int address = 0x48f8a0;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(char (__stdcall*selectBuildingSFX)(CUnit *a1), selectBuildingSFX, 0x48f910);
DECL_FUNC(void (__stdcall*LoadRaceSFX)(char a1), LoadRaceSFX, 0x48fb40);
DECL_FUNC(int(*prepareMessageTeamFilter)(), prepareMessageTeamFilter, 0x48fc70);
DECL_FUNC(int(*prepareMessageAllyFilter)(), prepareMessageAllyFilter, 0x48fdb0);
void msgfltr_OK(dialog *result) {
    int address = 0x48ff10;
    __asm {
        mov eax, result
        call address
    }
}
DECL_FUNC(int (__stdcall*sub_490000)(int), sub_490000, 0x490000);
DECL_FUNC(int(*sub_4900A0)(), sub_4900A0, 0x4900a0);
u32 sub_4900C0(dialog *a1, int player_id) {
    int address = 0x4900c0;
    u32 result_;
    __asm {
        mov eax, a1
        mov edi, player_id
        call address
        mov result_, eax
    }
    return result_;
}
char sub_490110(dialog *a1) {
    int address = 0x490110;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
void sub_4901A0(dialog *a1, int player_id) {
    int address = 0x4901a0;
    __asm {
        mov eax, a1
        mov edi, player_id
        call address
    }
}
DECL_FUNC(void (__fastcall*cbForceEntryUpdateFxn)(dialog *dlg, int x, int y, rect *dst), cbForceEntryUpdateFxn, 0x4901f0);
void updateForceNamesAndCallbacks(dialog *a1, int player_id) {
    int address = 0x490250;
    __asm {
        mov eax, a1
        mov edx, player_id
        call address
    }
}
DECL_FUNC(int (__thiscall*sub_490300)(dialog *this_), sub_490300, 0x490300);
DECL_FUNC(void (__thiscall*sub_490570)(dialog *this_), sub_490570, 0x490570);
DECL_FUNC(bool (__fastcall*allyfltr_VisionBox)(dialog *dlg, dlgEvent *evt), allyfltr_VisionBox, 0x490850);
char sub_4908E0(struct dlgEvent *a1, dialog *a2) {
    int address = 0x4908e0;
    char result_;
    __asm {
        mov edx, a1
        mov esi, a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*allyfltr_AllianceBox)(dialog *dlg, dlgEvent *evt), allyfltr_AllianceBox, 0x490960);
DECL_FUNC(int (__fastcall*msgfltr_SendToText)(dialog *dlg, struct dlgEvent *evt), msgfltr_SendToText, 0x490a10);
char sub_490A50(dialog *a1) {
    int address = 0x490a50;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*allyfltr_AllyVictoryBox)(dialog *dlg, dlgEvent *evt), allyfltr_AllyVictoryBox, 0x490c40);
void AllyFltr_CustomCtrlID(dialog *a1) {
    int address = 0x490d70;
    __asm {
        mov ebx, a1
        call address
    }
}
DECL_FUNC(int (__fastcall*msgfltr_EditBox)(dialog *dlg, struct dlgEvent *evt), msgfltr_EditBox, 0x490e10);
void msgfltr_MainBox(dialog *a1) {
    int address = 0x490e40;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int(*sub_490E70)(), sub_490E70, 0x490e70);
void sub_490E90(dialog *a1) {
    int address = 0x490e90;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(bool (__fastcall*msgfltr_Main)(dialog *dlg, dlgEvent *evt), msgfltr_Main, 0x490ef0);
DECL_FUNC(int(*sub_490FC0)(), sub_490FC0, 0x490fc0);
void CMDACT_AllyVisionPair(int a1, dialog *a2) {
    int address = 0x490fe0;
    __asm {
        mov ecx, a1
        mov ebx, a2
        call address
    }
}
DECL_FUNC(bool (__fastcall*allyFltr_Main)(dialog *dlg, dlgEvent *evt), allyFltr_Main, 0x491310);
DECL_FUNC(int(*sub_491450)(), sub_491450, 0x491450);
CUnit *Unit__SpendEnergy(CUnit *result, __int16 a2) {
    int address = 0x491460;
    CUnit * result_;
    __asm {
        mov eax, result
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*Unit__HasEnergy)(int, __int16), Unit__HasEnergy, 0x491480);
signed __int16 getSpecialOrderErrorStatstring(int tech, UnitType unit_type) {
    int address = 0x4914b0;
    signed result_;
    __asm {
        mov eax, tech
        push dword ptr unit_type
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_491520)(), sub_491520, 0x491520);
DECL_FUNC(int (__stdcall*writeBurrowedUnitIndex)(FILE *), writeBurrowedUnitIndex, 0x4915c0);
DECL_FUNC(int(*sub_491670)(), sub_491670, 0x491670);
DECL_FUNC(int(*sub_4916A0)(), sub_4916A0, 0x4916a0);
DECL_FUNC(signed int (__thiscall*IsUnitCloaking)(CUnit *this_), IsUnitCloaking, 0x4916e0);
void secondaryOrd_Cloak(CUnit *result) {
    int address = 0x491790;
    __asm {
        mov eax, result
        call address
    }
}
BOOL unitHasStatusEffect(CUnit *a1) {
    int address = 0x491810;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
signed int BWFXN_GetMaxEnergy(CUnit *a1) {
    int address = 0x491870;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
CImage *sub_491A30(CUnit *a1) {
    int address = 0x491a30;
    CImage * result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
char getCloakingTech(CUnit *a1) {
    int address = 0x491a50;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
signed __int16 getCloakingSomething(CUnit *a1) {
    int address = 0x491a90;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__fastcall*sub_491AE0)(int a1, CUnit *a2), sub_491AE0, 0x491ae0);
void ApplyCloakingOrder(CUnit *result) {
    int address = 0x491b30;
    __asm {
        mov eax, result
        call address
    }
}
DECL_FUNC(int(*sub_491BF0)(), sub_491BF0, 0x491bf0);
DECL_FUNC(int(*GetDarkArchonEnergy)(), GetDarkArchonEnergy, 0x491c00);
void secondaryOrd_CloakNearbyUnits(CUnit *a1) {
    int address = 0x491c20;
    __asm {
        mov edi, a1
        call address
    }
}
DECL_FUNC(int(*sub_491DB0)(), sub_491DB0, 0x491db0);
__int16 getTargetUnitAbilityErrorStatString(CUnit *a1, char a2, int tech) {
    int address = 0x491e80;
    __int16 result_;
    __asm {
        mov eax, a1
        mov bl, a2
        push dword ptr tech
        call address
        mov result_, ax
    }
    return result_;
}
signed int getOrderTargetErrorString(Tech2 tech, CUnit *a2, UnitType a3, CUnit *a4, __int16 a5, int a6, int a7) {
    int address = 0x492020;
    signed result_;
    __asm {
        mov dx, tech
        mov edi, a2
        mov si, a3
        push dword ptr a7
        push dword ptr a6
        push dword ptr a5
        push dword ptr a4
        call address
        mov result_, eax
    }
    return result_;
}
signed int canCastSpell_0(CUnit *a1) {
    int address = 0x492140;
    signed result_;
    __asm {
        mov edi, a1
        call address
        mov result_, eax
    }
    return result_;
}
int RemoveOverlaysBetween(unsigned int a1, CUnit *a2, unsigned int a3) {
    int address = 0x492370;
    int result_;
    __asm {
        mov eax, a1
        mov ebx, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
signed int sub_492450(int a1, CUnit *a2) {
    int address = 0x492450;
    signed result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_492620)(int), sub_492620, 0x492620);
signed int sub_4926D0(int a1, CUnit *a2, Tech2 tech, int a4, int a5) {
    int address = 0x4926d0;
    signed result_;
    __asm {
        mov eax, a1
        mov ebx, a2
        push dword ptr a5
        push dword ptr a4
        push dword ptr tech
        call address
        mov result_, eax
    }
    return result_;
}
char orders_Spell(CUnit *a1) {
    int address = 0x492850;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
int EMPShockwaveHit(__int16 a1, __int16 a2, CUnit *a3) {
    int address = 0x492ba0;
    int result_;
    __asm {
        mov ax, a1
        mov cx, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
int FreezeUnit(CUnit *a1) {
    int address = 0x492cc0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
u8 ApplyUnitEffects(CUnit *a1) {
    int address = 0x492da0;
    u8 result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*sub_492E80)(), sub_492E80, 0x492e80);
DECL_FUNC(int(*updateBurrowingCloakingUnits)(), updateBurrowingCloakingUnits, 0x492eb0);
char updateUnitStatusTimers(CUnit *a1, int a2) {
    int address = 0x492f70;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, al
    }
    return result_;
}
CUnit *removeFromPsiProviderList(CUnit *result) {
    int address = 0x493100;
    CUnit * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_493160)(), sub_493160, 0x493160);
DECL_FUNC(int(*MergeUnitStatusEffects)(), MergeUnitStatusEffects, 0x493180);
DECL_FUNC(int(*sub_493290)(), sub_493290, 0x493290);
DECL_FUNC(int(*sub_4932C0)(), sub_4932C0, 0x4932c0);
void secondaryOrd_ShieldBatteryRecharging(CUnit *a1) {
    int address = 0x4932d0;
    __asm {
        mov edi, a1
        call address
    }
}
DECL_FUNC(void(*initializePsiFieldData)(void), initializePsiFieldData, 0x493360);
DECL_FUNC(int(*ApplyRechargeShields)(), ApplyRechargeShields, 0x4934b0);
signed int unitCanRechargeShields(CUnit *a1, CUnit *a2) {
    int address = 0x493520;
    signed result_;
    __asm {
        mov eax, a1
        mov edi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*RemoveAllPylonAuras)(), RemoveAllPylonAuras, 0x4935f0);
DECL_FUNC(int(*createPylonAura)(), createPylonAura, 0x493640);
DECL_FUNC(int (__stdcall*unitHasPower)(int, int, char), unitHasPower, 0x4936b0);
DECL_FUNC(void (__cdecl*updateUnitPower)(), updateUnitPower, 0x493790);
DECL_FUNC(int (__fastcall*orderAllMoveToRechargeShieldsProc)(CUnit *unit, CUnit *target), orderAllMoveToRechargeShieldsProc, 0x493900);
char Orders_HarvestInterrupt(int a1, int a2, CUnit *a3) {
    int address = 0x493920;
    char result_;
    __asm {
        mov edx, a1
        mov ecx, a2
        mov edi, a3
        call address
        mov result_, al
    }
    return result_;
}
char orders_RechargeShields2(CUnit *a1) {
    int address = 0x493990;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
int orders_cloakNearbyUnits(CUnit *a1) {
    int address = 0x493a80;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
char orders_CompletingArchonSummon(CUnit *a1) {
    int address = 0x493b10;
    char result_;
    __asm {
        mov esi, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(signed int (__thiscall*sub_493BF0)(CUnit *this_), sub_493BF0, 0x493bf0);
char PrepareUnitMoveClearRefs(CUnit *unit, bool hideUnit) {
    int address = 0x493ca0;
    char result_;
    __asm {
        mov edi, unit
        push dword ptr hideUnit
        call address
        mov result_, al
    }
    return result_;
}
char orders_RechargeShields1(CUnit *a1) {
    int address = 0x493dd0;
    char result_;
    __asm {
        mov edi, a1
        call address
        mov result_, al
    }
    return result_;
}
char orders_InitPsiProvider(CUnit *a1) {
    int address = 0x493f70;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*CreateAllPylonAuras)(), CreateAllPylonAuras, 0x494030);
DECL_FUNC(int(*hideAllPsiFields)(), hideAllPsiFields, 0x494100);
void RefreshRevealUnitAfterMove(CUnit *unit) {
    int address = 0x494160;
    __asm {
        mov eax, unit
        call address
    }
}
void doRecallMoveUnit(CUnit *unit, CUnit *a2) {
    int address = 0x4942d0;
    __asm {
        mov ebx, unit
        push dword ptr a2
        call address
    }
}
DECL_FUNC(int (__fastcall*recallUnitsCB)(CUnit *a1, CUnit *a2), recallUnitsCB, 0x494400);
DECL_FUNC(void (__stdcall*orders_Recall)(CUnit *a1), orders_Recall, 0x494470);
char orders_WarpingDarkArchon(CUnit *a1) {
    int address = 0x494690;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
char orders_WarpingArchon(CUnit *a1) {
    int address = 0x4948b0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*nullsub_52)(), nullsub_52, 0x494ab0);
DECL_FUNC(int(*sub_494AC0)(), sub_494AC0, 0x494ac0);
DECL_FUNC(int(*sub_494AE0)(), sub_494AE0, 0x494ae0);
DECL_FUNC(int (__stdcall*sub_494B10)(int), sub_494B10, 0x494b10);
DECL_FUNC(int(*sub_494B40)(), sub_494B40, 0x494b40);
DECL_FUNC(int(*AttackFlyToTarget)(), AttackFlyToTarget, 0x494b70);
DECL_FUNC(int(*setSecondaryWaypoint)(), setSecondaryWaypoint, 0x494bb0);
DECL_FUNC(int(*sub_494BD0)(), sub_494BD0, 0x494bd0);
DECL_FUNC(int(*sub_494BF0)(), sub_494BF0, 0x494bf0);
int arctangent(int slope) {
    int address = 0x494c10;
    int result_;
    __asm {
        mov eax, slope
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_494C60)(), sub_494C60, 0x494c60);
DECL_FUNC(int (__stdcall*sub_494C70)(int), sub_494C70, 0x494c70);
DECL_FUNC(int (__stdcall*packFlingyData)(int), packFlingyData, 0x494ce0);
DECL_FUNC(int(*initializeFlingyArray)(), initializeFlingyArray, 0x494da0);
DECL_FUNC(int(*sub_494ED0)(), sub_494ED0, 0x494ed0);
DECL_FUNC(int(*sub_494F20)(), sub_494F20, 0x494f20);
DECL_FUNC(int(*getFlingyHaltDistance)(), getFlingyHaltDistance, 0x494f90);
DECL_FUNC(int(*sub_494FE0)(), sub_494FE0, 0x494fe0);
CUnit *sub_495080(CUnit *result) {
    int address = 0x495080;
    CUnit * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *Unit_MatchVelocityWithDirection(CUnit *result) {
    int address = 0x495100;
    CUnit * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*SetUnitMovementSpeed)(), SetUnitMovementSpeed, 0x4951c0);
DECL_FUNC(int(*sub_495200)(), sub_495200, 0x495200);
DECL_FUNC(int(*sub_495240)(), sub_495240, 0x495240);
DECL_FUNC(int(*sub_495290)(), sub_495290, 0x495290);
DECL_FUNC(int(*sub_4952C0)(), sub_4952C0, 0x4952c0);
signed int GetAngle(int x_start, int y_start, int x_end, int y_end) {
    int address = 0x495300;
    signed result_;
    __asm {
        mov edx, x_start
        mov ecx, x_end
        mov eax, y_end
        push dword ptr y_start
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_495350)(), sub_495350, 0x495350);
DECL_FUNC(int(*packUnpackFlingyData)(), packUnpackFlingyData, 0x495370);
DECL_FUNC(int(*sub_495400)(), sub_495400, 0x495400);
char sub_495580(CUnit *a1) {
    int address = 0x495580;
    char result_;
    __asm {
        mov esi, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*sub_495590)(), sub_495590, 0x495590);
DECL_FUNC(int(*AppearOnTarget)(), AppearOnTarget, 0x4955c0);
CUnit *uflunstableRandomize(CUnit *result) {
    int address = 0x4955f0;
    CUnit * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
int sub_4956C0(CUnit *a1) {
    int address = 0x4956c0;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*setResourceGatheringFlags)(), setResourceGatheringFlags, 0x4957a0);
int Unit_AssignNextWP(CUnit *a1) {
    int address = 0x495840;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
void sub_4958C0(CBullet *a1) {
    int address = 0x4958c0;
    __asm {
        mov esi, a1
        call address
    }
}
DECL_FUNC(int(*sub_495980)(), sub_495980, 0x495980);
DECL_FUNC(int(*sub_495A10)(), sub_495A10, 0x495a10);
DECL_FUNC(int (__stdcall*ReadFlingyArray)(FILE *), ReadFlingyArray, 0x495a50);
DECL_FUNC(int (__stdcall*WriteFlingys)(FILE *), WriteFlingys, 0x495b50);
char sub_495CB0(CUnit *a1) {
    int address = 0x495cb0;
    char result_;
    __asm {
        mov esi, a1
        call address
        mov result_, al
    }
    return result_;
}
int sub_495E80(unsigned __int8 a1, CUnit *a2) {
    int address = 0x495e80;
    int result_;
    __asm {
        mov al, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
int sub_495EE0(CUnit *a1) {
    int address = 0x495ee0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *turnUnit(CUnit *result, char a2) {
    int address = 0x495f20;
    CUnit * result_;
    __asm {
        mov eax, result
        mov bl, a2
        call address
        mov result_, eax
    }
    return result_;
}
void sub_495F90(CUnit *a1) {
    int address = 0x495f90;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(signed int (__stdcall*sub_496030)(CUnit *a1), sub_496030, 0x496030);
DECL_FUNC(int(*sub_496140)(), sub_496140, 0x496140);
DECL_FUNC(int(*_turnGraphic)(), _turnGraphic, 0x496170);
DECL_FUNC(int(*sub_496190)(), sub_496190, 0x496190);
signed int sub_4961B0(CUnit *a1) {
    int address = 0x4961b0;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
void UpdateImage(CUnit *a1, int a2) {
    int address = 0x4961f0;
    __asm {
        mov edi, a1
        mov ebx, a2
        call address
    }
}
void UpdateImages(int a1) {
    int address = 0x496330;
    __asm {
        mov ebx, a1
        call address
    }
}
CSprite *sub_496360(int flingyID, __int16 a2, int position_y, CUnit *a4, char a5, char a6) {
    int address = 0x496360;
    CSprite * result_;
    __asm {
        mov eax, flingyID
        mov dx, a2
        mov ecx, position_y
        push dword ptr a6
        push dword ptr a5
        push dword ptr a4
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *ISCRIPT_CreateFlingy(char a1, __int16 a2, int a3, FlingyID flingy_id) {
    int address = 0x496460;
    CUnit * result_;
    __asm {
        mov al, a1
        mov dx, a2
        mov ecx, a3
        push dword ptr flingy_id
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_496520)(), sub_496520, 0x496520);
DECL_FUNC(int(*sub_496560)(), sub_496560, 0x496560);
DECL_FUNC(int(*sub_4965A0)(), sub_4965A0, 0x4965a0);
DECL_FUNC(int (__stdcall*sub_4965D0)(int), sub_4965D0, 0x4965d0);
DECL_FUNC(int(*sub_4967A0)(), sub_4967A0, 0x4967a0);
DECL_FUNC(int(*centerviewUnitGroup)(), centerviewUnitGroup, 0x4967e0);
DECL_FUNC(int (__stdcall*sub_496940)(char), sub_496940, 0x496940);
DECL_FUNC(int (__stdcall*selectUnitGroup)(char), selectUnitGroup, 0x496b40);
DECL_FUNC(int (__stdcall*selectSingleUnitFromID)(int), selectSingleUnitFromID, 0x496d30);
DECL_FUNC(int(*sub_496E90)(), sub_496E90, 0x496e90);
DECL_FUNC(int(*nullsub_53)(), nullsub_53, 0x496ea0);
DECL_FUNC(int(*sub_496EB0)(), sub_496EB0, 0x496eb0);
DECL_FUNC(int(*sub_496ED0)(), sub_496ED0, 0x496ed0);
DECL_FUNC(int (__stdcall*sub_496EE0)(int, int), sub_496EE0, 0x496ee0);
DECL_FUNC(int(*clearUnitSprites)(), clearUnitSprites, 0x496f00);
DECL_FUNC(int(*sub_496F80)(), sub_496F80, 0x496f80);
DECL_FUNC(int(*sub_496FB0)(), sub_496FB0, 0x496fb0);
DECL_FUNC(int (__stdcall*sub_496FC0)(int, int), sub_496FC0, 0x496fc0);
DECL_FUNC(int(*EnableVisibilityHashUpdate)(), EnableVisibilityHashUpdate, 0x496ff0);
DECL_FUNC(int(*isImageRefreshable)(), isImageRefreshable, 0x497000);
DECL_FUNC(int(*refreshImage)(), refreshImage, 0x4970a0);
DECL_FUNC(int (__stdcall*sub_4970F0)(int), sub_4970F0, 0x4970f0);
DECL_FUNC(void (__cdecl*createUnitBuildingSpriteValidityArray)(), createUnitBuildingSpriteValidityArray, 0x497110);
DECL_FUNC(int(*initializeSpriteArray)(), initializeSpriteArray, 0x497230);
DECL_FUNC(int(*unpackSpriteData)(), unpackSpriteData, 0x497310);
DECL_FUNC(void (__thiscall*packSpriteData)(CSprite *this_), packSpriteData, 0x497380);
DECL_FUNC(int(*sub_497400)(), sub_497400, 0x497400);
void setAllImageGroupFlagsPal11(CSprite *a1) {
    int address = 0x497430;
    __asm {
        mov eax, a1
        call address
    }
}
CImage *getSpriteUnderlay(CSprite *a1, unsigned int a2, unsigned int a3) {
    int address = 0x497460;
    CImage * result_;
    __asm {
        mov eax, a1
        mov edx, a2
        mov esi, a3
        call address
        mov result_, eax
    }
    return result_;
}
char refreshAllVisibleImagesAtScreenPosition(CSprite *a1, char a2) {
    int address = 0x497480;
    char result_;
    __asm {
        mov ebx, a1
        push dword ptr a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*refreshGrpImage)(), refreshGrpImage, 0x497530);
char removeSelectionCircleFromSprite(CSprite *a1) {
    int address = 0x497590;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(char (__thiscall*removeSelectionCircle)(CSprite *this_), removeSelectionCircle, 0x4975d0);
char removeSelectionCircleAndHPBar(CSprite *a1) {
    int address = 0x497620;
    char result_;
    __asm {
        mov edi, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*sub_497690)(), sub_497690, 0x497690);
DECL_FUNC(int(*sub_4976A0)(), sub_4976A0, 0x4976a0);
DECL_FUNC(int(*sub_4976B0)(), sub_4976B0, 0x4976b0);
char refreshAllVisibleSprites(CSprite *a1) {
    int address = 0x4976c0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*refreshCarryableSprite)(), refreshCarryableSprite, 0x497750);
DECL_FUNC(int(*getSpriteRect)(), getSpriteRect, 0x4977c0);
void playIdleIscript(CSprite *a1) {
    int address = 0x497880;
    __asm {
        mov eax, a1
        call address
    }
}
void spriteToIscriptLoop(CSprite *a1) {
    int address = 0x497920;
    __asm {
        mov esi, a1
        call address
    }
}
void sub_497A10(CSprite *a1, __int16 a2, signed __int16 a3) {
    int address = 0x497a10;
    __asm {
        mov ecx, a1
        mov bx, a2
        mov di, a3
        call address
    }
}
DECL_FUNC(int(*sub_497B20)(), sub_497B20, 0x497b20);
int SpriteDestructor(CSprite *a1) {
    int address = 0x497b40;
    int result_;
    __asm {
        mov edi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_497C10)(), sub_497C10, 0x497c10);
DECL_FUNC(int(*UpdateVisibilityHash)(), UpdateVisibilityHash, 0x497c30);
DECL_FUNC(int(*drawImage)(), drawImage, 0x497ce0);
DECL_FUNC(int(*sub_497D60)(), sub_497D60, 0x497d60);
DECL_FUNC(int(*sub_497D80)(), sub_497D80, 0x497d80);
DECL_FUNC(int(*sub_497DA0)(), sub_497DA0, 0x497da0);
int setSpriteColoringData(CSprite *a1, unsigned __int8 a2) {
    int address = 0x497dc0;
    int result_;
    __asm {
        mov eax, a1
        mov bl, a2
        call address
        mov result_, eax
    }
    return result_;
}
signed int sub_497E10(CSprite *a1, int a2, int a3) {
    int address = 0x497e10;
    signed result_;
    __asm {
        mov eax, a1
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
int updateSpriteFlagOnPalette(CSprite *a1) {
    int address = 0x497e80;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
void makeSpriteVisible(CSprite *a1) {
    int address = 0x497ed0;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int(*sub_497F80)(), sub_497F80, 0x497f80);
DECL_FUNC(int(*sub_497FA0)(), sub_497FA0, 0x497fa0);
int sub_497FD0(char a1, CSprite *a2, unsigned __int8 a3, char a4) {
    int address = 0x497fd0;
    int result_;
    __asm {
        mov al, a1
        mov esi, a2
        push dword ptr a4
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
int sub_4980F0(CSprite *a1) {
    int address = 0x4980f0;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*Sprite_SetVerticalOffset)(), Sprite_SetVerticalOffset, 0x498150);
char sub_498170(CSprite *a1) {
    int address = 0x498170;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*updateCarryableSpriteFlag)(), updateCarryableSpriteFlag, 0x4981b0);
DECL_FUNC(int (__stdcall*sub_498220)(int, int), sub_498220, 0x498220);
DECL_FUNC(int (__stdcall*sub_498260)(int), sub_498260, 0x498260);
DECL_FUNC(int (__stdcall*DoVisibilityUpdate)(int, int), DoVisibilityUpdate, 0x4982d0);
CSprite *refreshSpriteData(CSprite *result) {
    int address = 0x4983a0;
    CSprite * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_498450)(), sub_498450, 0x498450);
DECL_FUNC(int (__stdcall*unknownColorShiftSomething)(char), unknownColorShiftSomething, 0x498470);
DECL_FUNC(int (__stdcall*ReadSpritesArray)(FILE *), ReadSpritesArray, 0x498570);
DECL_FUNC(int (__stdcall*writeSprites)(FILE *), writeSprites, 0x498740);
DECL_FUNC(int(*RemoveAllSelectionCircles)(), RemoveAllSelectionCircles, 0x4989a0);
void sub_498A10(CSprite *a1) {
    int address = 0x498a10;
    __asm {
        mov eax, a1
        call address
    }
}
void UpdateSpriteImagesForCloak(CSprite *a1) {
    int address = 0x498a90;
    __asm {
        mov edi, a1
        call address
    }
}
CSprite *sub_498B20(CSprite *result, char a2) {
    int address = 0x498b20;
    CSprite * result_;
    __asm {
        mov eax, result
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
void sub_498B50(CSprite *a1, unsigned __int8 a2) {
    int address = 0x498b50;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
    }
}
DECL_FUNC(int(*SetAllSpriteImageOverlaysDirection)(), SetAllSpriteImageOverlaysDirection, 0x498c30);
int drawSprite(CSprite *a1) {
    int address = 0x498c50;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
void refreshImageRange(int result, unsigned int a2) {
    int address = 0x498cb0;
    __asm {
        mov eax, result
        mov ebx, a2
        call address
    }
}
DECL_FUNC(int(*BWFXN_updateImageData)(), BWFXN_updateImageData, 0x498cf0);
DECL_FUNC(void (__cdecl*BWFXN_drawAllSprites)(), BWFXN_drawAllSprites, 0x498d40);
CImage *sub_498D70(CSprite *a1, char a2, char a3, char a4) {
    int address = 0x498d70;
    CImage * result_;
    __asm {
        mov eax, a1
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
CImage *CreateImageOverlay(CSprite *a1, char a2, char a3, char a4) {
    int address = 0x498e00;
    CImage * result_;
    __asm {
        mov eax, a1
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
CImage *CreateOverlay(CSprite *a1, char a2, char a3, char a4) {
    int address = 0x498ea0;
    CImage * result_;
    __asm {
        mov eax, a1
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
CImage *sub_498F40(CSprite *a1, int a2, char a3, char a4, unsigned int a5) {
    int address = 0x498f40;
    CImage * result_;
    __asm {
        mov eax, a1
        push dword ptr a5
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
signed int initSpriteData(unsigned __int16 a1, int a2, char a3, unsigned __int16 a4, CSprite *a5) {
    int address = 0x499030;
    signed result_;
    __asm {
        mov ax, a1
        mov edx, a2
        mov cl, a3
        mov di, a4
        push dword ptr a5
        call address
        mov result_, eax
    }
    return result_;
}
CSprite *createSprite(int a1, int position_x, unsigned __int16 position_y, char player_id) {
    int address = 0x4990f0;
    CSprite * result_;
    __asm {
        mov di, position_y
        push dword ptr player_id
        push dword ptr position_x
        push dword ptr a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(CSprite *(__stdcall*sub_499210)(CSprite *a1), sub_499210, 0x499210);
CImage *sub_499380(CSprite *a1, int a2) {
    int address = 0x499380;
    CImage * result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(CImage *(__stdcall*CreateDamageOverlay)(CSprite *a1), CreateDamageOverlay, 0x4993c0);
DECL_FUNC(unsigned __int16 (__stdcall*CreateBuildingFlames)(CSprite *a1), CreateBuildingFlames, 0x499580);
int CreateSpriteEx(int result, CSprite *a2, unsigned __int8 a3, int a4, int a5, char a6) {
    int address = 0x499660;
    int result_;
    __asm {
        mov eax, result
        mov ebx, a2
        push dword ptr a6
        push dword ptr a5
        push dword ptr a4
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
void sub_499730(CSprite *a1) {
    int address = 0x499730;
    __asm {
        mov esi, a1
        call address
    }
}
DECL_FUNC(int (__stdcall*sub_499770)(int), sub_499770, 0x499770);
char sub_4997A0(int a1, CSprite *a2, int a3) {
    int address = 0x4997a0;
    char result_;
    __asm {
        mov ecx, a1
        mov esi, a2
        push dword ptr a3
        call address
        mov result_, al
    }
    return result_;
}
int CreateLandingDustOverlays(CSprite *a1) {
    int address = 0x4997e0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
int CreateLiftoffDustOverlays(CSprite *a1) {
    int address = 0x499820;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
char sub_499860(CImage *a1, CSprite *a2) {
    int address = 0x499860;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(void (__cdecl*InitializeSpriteArray)(), InitializeSpriteArray, 0x499900);
DECL_FUNC(int (__stdcall*CreateDashedSelection)(int), CreateDashedSelection, 0x499a10);
DECL_FUNC(void (__cdecl*CreateAllSelectionCircles)(), CreateAllSelectionCircles, 0x499a60);
char ReplaceSpriteOverlayImage(CSprite *a1, int a2, char a3) {
    int address = 0x499bb0;
    char result_;
    __asm {
        mov eax, a1
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(void (__thiscall*playSpriteIscript)(CSprite *this_, Anims a2, int a3), playSpriteIscript, 0x499d00);
DECL_FUNC(int(*sub_499D40)(), sub_499D40, 0x499d40);
DECL_FUNC(int (__stdcall*GameResultText)(int, int, int), GameResultText, 0x499d50);
DECL_FUNC(int(*sub_499E00)(), sub_499E00, 0x499e00);
DECL_FUNC(int(*sub_499E20)(), sub_499E20, 0x499e20);
DECL_FUNC(int (__stdcall*StoreString)(char *source), StoreString, 0x49a040);
DECL_FUNC(int(*sub_49A060)(), sub_49A060, 0x49a060);
DECL_FUNC(int(*IsHumanPlayerOnSameTeam)(), IsHumanPlayerOnSameTeam, 0x49a110);
DECL_FUNC(int (__stdcall*sub_49A170)(int), sub_49A170, 0x49a170);
DECL_FUNC(int(*nullsub_54)(), nullsub_54, 0x49a260);
DECL_FUNC(int(*isRgnIdNeighbor)(), isRgnIdNeighbor, 0x49a270);
DECL_FUNC(int(*isSelectedUnitGroupEnabled)(), isSelectedUnitGroupEnabled, 0x49a2c0);
DECL_FUNC(int(*sub_49A320)(), sub_49A320, 0x49a320);
signed int compareUnitRank(int a1, CUnit *a2, CUnit *a3) {
    int address = 0x49a350;
    signed result_;
    __asm {
        mov ecx, a1
        mov edi, a2
        mov esi, a3
        call address
        mov result_, eax
    }
    return result_;
}
signed int sub_49A410(CUnit *a1, Order a2) {
    int address = 0x49a410;
    signed result_;
    __asm {
        mov eax, a1
        mov dl, a2
        call address
        mov result_, eax
    }
    return result_;
}
signed int sub_49A480(Order a1, CUnit *a2) {
    int address = 0x49a480;
    signed result_;
    __asm {
        mov dl, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_49A500)(int, int), sub_49A500, 0x49a500);
DECL_FUNC(int(*sub_49A740)(), sub_49A740, 0x49a740);
DECL_FUNC(int(*sub_49A7C0)(), sub_49A7C0, 0x49a7c0);
signed int sub_49A7F0(CUnit *a1) {
    int address = 0x49a7f0;
    signed result_;
    __asm {
        mov edi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(CUnit *(__cdecl*GetActivePlayerNextSelectionFunc)(), GetActivePlayerNextSelectionFunc, 0x49a850);
DECL_FUNC(int(*sub_49A8B0)(), sub_49A8B0, 0x49a8b0);
DECL_FUNC(int (__stdcall*sub_49A8C0)(int), sub_49A8C0, 0x49a8c0);
DECL_FUNC(char (__stdcall*sub_49AB00)(__int16 a1, __int16 a2, CUnit *a3, __int16 a4, Order a5, char a6), sub_49AB00, 0x49ab00);
void CreateNewUnitSelectionsFromList(CUnit **a1, int unit_count) {
    int address = 0x49ae40;
    __asm {
        mov eax, a1
        push dword ptr unit_count
        call address
    }
}
DECL_FUNC(signed int (__stdcall*selectMultipleUnitsFromUnitList)(int a1, CUnit *a2, char a3, int a4), selectMultipleUnitsFromUnitList, 0x49aef0);
DECL_FUNC(int(*sub_49AF80)(), sub_49AF80, 0x49af80);
DECL_FUNC(int (__stdcall*sub_49AFE0)(char), sub_49AFE0, 0x49afe0);
DECL_FUNC(int(*sub_49B010)(), sub_49B010, 0x49b010);
DECL_FUNC(int(*sub_49B020)(), sub_49B020, 0x49b020);
DECL_FUNC(int(*sub_49B030)(), sub_49B030, 0x49b030);
DECL_FUNC(int(*sub_49B050)(), sub_49B050, 0x49b050);
DECL_FUNC(int(*sub_49B060)(), sub_49B060, 0x49b060);
DECL_FUNC(int(*getColourID)(), getColourID, 0x49b0e0);
DECL_FUNC(int (__stdcall*setPlayerColours)(int), setPlayerColours, 0x49b130);
DECL_FUNC(int(*sub_49B1C0)(), sub_49B1C0, 0x49b1c0);
char sub_49B1E0(CUnit *a1) {
    int address = 0x49b1e0;
    char result_;
    __asm {
        mov edi, a1
        call address
        mov result_, al
    }
    return result_;
}
unsigned int sub_49B280(CUnit *a1) {
    int address = 0x49b280;
    unsigned result_;
    __asm {
        mov edi, a1
        call address
        mov result_, eax
    }
    return result_;
}
char AI_CloakUnit(CUnit *a1) {
    int address = 0x49b2b0;
    char result_;
    __asm {
        mov edi, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_49B320)(char), sub_49B320, 0x49b320);
DECL_FUNC(int (__stdcall*RandomizePlayerColours)(int), RandomizePlayerColours, 0x49b360);
unsigned int sub_49B410(CUnit *a1) {
    int address = 0x49b410;
    unsigned result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
void DoCloak(CUnit *a1, SfxData sfx_id) {
    int address = 0x49b440;
    __asm {
        mov eax, a1
        mov ebx, sfx_id
        call address
    }
}
DECL_FUNC(int(*initializePlayerColours)(), initializePlayerColours, 0x49b500);
void PlaySoundFromDirect(CUnit *a1, SfxData sfx_id) {
    int address = 0x49b5b0;
    __asm {
        mov eax, a1
        mov ecx, sfx_id
        call address
    }
}
DECL_FUNC(int(*sub_49B690)(), sub_49B690, 0x49b690);
DECL_FUNC(int(*setAlliance)(), setAlliance, 0x49b870);
DECL_FUNC(int (__stdcall*sub_49B8D0)(int, int), sub_49B8D0, 0x49b8d0);
DECL_FUNC(int (__stdcall*drawMegatileImageData)(int, int), drawMegatileImageData, 0x49b9f0);
DECL_FUNC(int(*sub_49BB50)(), sub_49BB50, 0x49bb50);
DECL_FUNC(int(*sub_49BB90)(), sub_49BB90, 0x49bb90);
DECL_FUNC(int (__stdcall*sub_49BC20)(int, int, int, int), sub_49BC20, 0x49bc20);
DECL_FUNC(int (__stdcall*UpdateTileCacheOnXScreenMovement)(int, int), UpdateTileCacheOnXScreenMovement, 0x49bd40);
DECL_FUNC(int (__stdcall*UpdateTileCacheOnYScreenMovement)(int, int), UpdateTileCacheOnYScreenMovement, 0x49be20);
DECL_FUNC(int(*sub_49BF20)(), sub_49BF20, 0x49bf20);
DECL_FUNC(int(*sub_49BF70)(), sub_49BF70, 0x49bf70);
DECL_FUNC(int(*sub_49BFA0)(), sub_49BFA0, 0x49bfa0);
DECL_FUNC(int(*BWFXN_UpdateScreenPosition)(), BWFXN_UpdateScreenPosition, 0x49bfd0);
DECL_FUNC(int(*moveToXScrIncrease)(), moveToXScrIncrease, 0x49c0c0);
DECL_FUNC(int(*moveToXScrDecrease)(), moveToXScrDecrease, 0x49c1a0);
DECL_FUNC(int(*moveToYScrIncrease)(), moveToYScrIncrease, 0x49c280);
DECL_FUNC(int(*moveToYScrDecrease)(), moveToYScrDecrease, 0x49c360);
DECL_FUNC(int(*BWFXN_MoveScreen)(), BWFXN_MoveScreen, 0x49c440);
DECL_FUNC(int(*updateActiveTileInfo)(), updateActiveTileInfo, 0x49c4c0);
int drawScreenRowTiles(int a1, TileID *a2, int a3, int a4, int a5) {
    int address = 0x49c620;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a5
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*BWFXN_drawMapTiles)(), BWFXN_drawMapTiles, 0x49c780);
DECL_FUNC(int(*sub_49C870)(), sub_49C870, 0x49c870);
DECL_FUNC(int (__stdcall*sub_49C890)(int), sub_49C890, 0x49c890);
DECL_FUNC(int (__stdcall*getRegionNeighborsFromId)(int), getRegionNeighborsFromId, 0x49c8c0);
DECL_FUNC(int(*sub_49C8F0)(), sub_49C8F0, 0x49c8f0);
DECL_FUNC(int(*sub_49C900)(), sub_49C900, 0x49c900);
DECL_FUNC(int(*sub_49C930)(), sub_49C930, 0x49c930);
DECL_FUNC(int(*sub_49C950)(), sub_49C950, 0x49c950);
DECL_FUNC(int(*sub_49C980)(), sub_49C980, 0x49c980);
DECL_FUNC(int (__stdcall*SAI_GetRegionIdFromPx)(int), SAI_GetRegionIdFromPx, 0x49c9a0);
unsigned __int16 GetRegionIdAtPosEx(signed int x, signed int y) {
    int address = 0x49c9f0;
    unsigned result_;
    __asm {
        mov ecx, x
        mov edi, y
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*getRegionCenterFromId)(), getRegionCenterFromId, 0x49ca70);
DECL_FUNC(int (__stdcall*getRegionCenterFromId2)(int, int), getRegionCenterFromId2, 0x49caa0);
DECL_FUNC(int(*sub_49CAE0)(), sub_49CAE0, 0x49cae0);
DECL_FUNC(int(*sub_49CB10)(), sub_49CB10, 0x49cb10);
unsigned __int16 getRegionIdFromUnit(CUnit *a1) {
    int address = 0x49cb40;
    unsigned result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
BOOL HasPathToPos(CUnit *a1, signed int y, signed int x) {
    int address = 0x49cb60;
    BOOL result_;
    __asm {
        mov eax, a1
        push dword ptr x
        push dword ptr y
        call address
        mov result_, eax
    }
    return result_;
}
BOOL HasPathToTarget(CUnit *a1, CUnit *a2) {
    int address = 0x49cbb0;
    BOOL result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_49CC10)(), sub_49CC10, 0x49cc10);
DECL_FUNC(int(*sub_49CC30)(), sub_49CC30, 0x49cc30);
DECL_FUNC(void (__cdecl*savePlayerSlotTypesAndRace)(), savePlayerSlotTypesAndRace, 0x49cc40);
DECL_FUNC(int(*sub_49CCA0)(), sub_49CCA0, 0x49cca0);
DECL_FUNC(int (__fastcall*airTrainingProc)(CUnit *a1, CUnit *a2), airTrainingProc, 0x49cce0);
signed int sub_49CDC0(__int16 a1, __int16 a2, CUnit *a3, int a4, __int16 a5, __int16 a6, int a7) {
    int address = 0x49cdc0;
    signed result_;
    __asm {
        mov ax, a1
        mov dx, a2
        push dword ptr a7
        push dword ptr a6
        push dword ptr a5
        push dword ptr a4
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
bool CheckUnitCollisionPos(__int16 *move_area, CUnit *unit, Position *inPos, Position *outPos, bool hideErrorMsg, int flags) {
    int address = 0x49d3e0;
    bool result_;
    __asm {
        mov eax, move_area
        push dword ptr flags
        push dword ptr hideErrorMsg
        push dword ptr outPos
        push dword ptr inPos
        push dword ptr unit
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__thiscall*SelfDestructCB)(CUnit *this_), SelfDestructCB, 0x49d640);
int sub_49D660(CUnit *a1) {
    int address = 0x49d660;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(void (__stdcall*CreateInitialOverlord)(unsigned __int8 player_index), CreateInitialOverlord, 0x49d6c0);
DECL_FUNC(int (__stdcall*sub_49D760)(char), sub_49D760, 0x49d760);
void CreateInitialMeleeBuildings(int race, unsigned __int8 player_index) {
    int address = 0x49d7c0;
    __asm {
        mov eax, race
        push dword ptr player_index
        call address
    }
}
DECL_FUNC(int(*CreateInitialTeamMeleeUnits)(), CreateInitialTeamMeleeUnits, 0x49d8e0);
DECL_FUNC(void (__cdecl*CreateInitialMeleeUnits)(), CreateInitialMeleeUnits, 0x49da40);
CUnit *sub_49DC20(CUnit *result) {
    int address = 0x49dc20;
    CUnit * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *sub_49DC60(CUnit *result) {
    int address = 0x49dc60;
    CUnit * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *CListPushBackUsedUnitEntry(CUnit *result) {
    int address = 0x49dca0;
    CUnit * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *CListPushBackHiddenUnitEntry(CUnit *result) {
    int address = 0x49dce0;
    CUnit * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *sub_49DD20(CUnit *result) {
    int address = 0x49dd20;
    CUnit * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *sub_49DD60(CUnit *result) {
    int address = 0x49dd60;
    CUnit * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *sub_49DDB0(CUnit *result) {
    int address = 0x49ddb0;
    CUnit * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *CListRemoveEmptyUnitEntry(CUnit *result) {
    int address = 0x49de00;
    CUnit * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *CListRemoveHiddenUnitEntry(CUnit *result) {
    int address = 0x49de50;
    CUnit * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *CListRemoveUsedUnitEntry(CUnit *result) {
    int address = 0x49dea0;
    CUnit * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*get_zero)(int, int, int), get_zero, 0x49def0);
CUnit *GetFirstPlayerUnit(int player_id) {
    int address = 0x49df00;
    CUnit * result_;
    __asm {
        mov eax, player_id
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*isUnitTypeAtPositionInBounds)(), isUnitTypeAtPositionInBounds, 0x49df10);
DECL_FUNC(int(*sub_49DF70)(), sub_49DF70, 0x49df70);
DECL_FUNC(int(*sub_49DF80)(), sub_49DF80, 0x49df80);
DECL_FUNC(int(*sub_49DF90)(), sub_49DF90, 0x49df90);
DECL_FUNC(int(*sub_49DFA0)(), sub_49DFA0, 0x49dfa0);
DECL_FUNC(int(*sub_49DFB0)(), sub_49DFB0, 0x49dfb0);
DECL_FUNC(int(*sub_49DFC0)(), sub_49DFC0, 0x49dfc0);
DECL_FUNC(int(*sub_49DFD0)(), sub_49DFD0, 0x49dfd0);
DECL_FUNC(int(*sub_49DFE0)(), sub_49DFE0, 0x49dfe0);
DECL_FUNC(int(*sub_49DFF0)(), sub_49DFF0, 0x49dff0);
DECL_FUNC(int(*sub_49E000)(), sub_49E000, 0x49e000);
DECL_FUNC(int(*ReassignTargetAcquisitionRange)(), ReassignTargetAcquisitionRange, 0x49e010);
u16 GetOrderEnergyCost(Order order) {
    int address = 0x49e1c0;
    u16 result_;
    __asm {
        mov al, order
        call address
        mov result_, ax
    }
    return result_;
}
DECL_FUNC(int(*sub_49E1E0)(), sub_49E1E0, 0x49e1e0);
DECL_FUNC(int(*InitializeEmptyUnitsLinkedListRef)(), InitializeEmptyUnitsLinkedListRef, 0x49e1f0);
DECL_FUNC(int(*sub_49E260)(), sub_49E260, 0x49e260);
CUnit *sub_49E290(CUnit *result) {
    int address = 0x49e290;
    CUnit * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *sub_49E2D0(CUnit *result) {
    int address = 0x49e2d0;
    CUnit * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*uselessIterateUnitsAndOrdersDatLoadTables)(), uselessIterateUnitsAndOrdersDatLoadTables, 0x49e300);
CUnit *removeUnitFromList(CUnit *a1) {
    int address = 0x49e340;
    CUnit * result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *sub_49E3F0(CUnit *result) {
    int address = 0x49e3f0;
    CUnit * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(void (__fastcall*sub_49E4E0)(CUnit *a1, char player_id), sub_49E4E0, 0x49e4e0);
DECL_FUNC(int (__stdcall*displayLastNetErrForPlayer)(char), displayLastNetErrForPlayer, 0x49e530);
DECL_FUNC(COrder *(__thiscall*sub_49E590)(CUnit *this_, CUnit *a2), sub_49E590, 0x49e590);
DECL_FUNC(int (__stdcall*ReadUnitDataInfo)(FILE *, int), ReadUnitDataInfo, 0x49e6c0);
DECL_FUNC(int (__stdcall*ReadUnitDataInfoEx)(FILE *, int), ReadUnitDataInfoEx, 0x49e790);
DECL_FUNC(int (__stdcall*sub_49E8A0)(int), sub_49E8A0, 0x49e8a0);
CSprite *selectNewGUIUnitPortrait(int a1, CUnit *a2, CSprite *a3) {
    int address = 0x49eb70;
    CSprite * result_;
    __asm {
        mov ecx, a1
        mov edi, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
signed int sub_49EC30(CUnit *a1) {
    int address = 0x49ec30;
    signed result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
signed int sub_49ECF0(CUnit *a1, __int16 a2, UnitType unit_type, int a4, char a5) {
    int address = 0x49ecf0;
    signed result_;
    __asm {
        mov eax, a1
        mov dx, a2
        push dword ptr a5
        push dword ptr a4
        push dword ptr unit_type
        call address
        mov result_, eax
    }
    return result_;
}
int sub_49EF90(CUnit *a1) {
    int address = 0x49ef90;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(char (__thiscall*sub_49EFA0)(CUnit *this_, int player_id, int a3), sub_49EFA0, 0x49efa0);
int sub_49F170(CUnit *a1, UnitType a2) {
    int address = 0x49f170;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(void (__cdecl*resetOrdersUnitsDAT)(), resetOrdersUnitsDAT, 0x49f380);
char UnitDestructor_SpecialCases(CUnit *a1) {
    int address = 0x49f4a0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
int sub_49F6A0(CUnit *a1, UnitType a2) {
    int address = 0x49f6a0;
    int result_;
    __asm {
        mov edi, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
char sub_49F7A0(CUnit *a1) {
    int address = 0x49f7a0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
int sub_49F860(CUnit *a1, UnitType a2) {
    int address = 0x49f860;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
int updateUnitStrengthAndApplyDefaultOrders(CUnit *a1) {
    int address = 0x49fa40;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
void sub_49FD00(CUnit *result, CSprite *a2, int a3) {
    int address = 0x49fd00;
    __asm {
        mov eax, result
        mov edx, a2
        mov ebx, a3
        call address
    }
}
__int16 killAllLoadedUnits(CUnit *a1) {
    int address = 0x49fdd0;
    __int16 result_;
    __asm {
        mov ebx, a1
        call address
        mov result_, ax
    }
    return result_;
}
u8 replaceUnitWithType(CUnit *a1, UnitType a2) {
    int address = 0x49fed0;
    u8 result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, al
    }
    return result_;
}
signed int sub_4A0080(CUnit *a1) {
    int address = 0x4a0080;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
void updateUnitStatsFinishBuilding(CUnit *a1) {
    int address = 0x4a01f0;
    __asm {
        mov eax, a1
        call address
    }
}
signed int sub_4A0320(UnitType a1, CUnit *a2, int a3, __int16 a4, int a5) {
    int address = 0x4a0320;
    signed result_;
    __asm {
        mov ax, a1
        mov ecx, a2
        push dword ptr a5
        push dword ptr a4
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *UnitConstructor(UnitType unit_type, int position_x, int position_y, int player_id) {
    int address = 0x4a06c0;
    CUnit * result_;
    __asm {
        mov di, unit_type
        mov esi, position_x
        mov edx, position_y
        push dword ptr player_id
        call address
        mov result_, eax
    }
    return result_;
}
int _UnitDestructor(CUnit *a1) {
    int address = 0x4a0740;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*Init_AI_UnitData)(), Init_AI_UnitData, 0x4a0960);
DECL_FUNC(int (__thiscall*UnitDestructor)(CUnit *this_), UnitDestructor, 0x4a0990);
CUnit *CreateUnit(UnitType unit_type, int position_x, int position_y, int player_id) {
    int address = 0x4a09d0;
    CUnit * result_;
    __asm {
        mov cx, unit_type
        mov eax, position_x
        push dword ptr player_id
        push dword ptr position_y
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*AI_CreateUnit)(UnitType a0, int a4), AI_CreateUnit, 0x4a0ad0);
DECL_FUNC(int(*sub_4A0E10)(), sub_4A0E10, 0x4a0e10);
DECL_FUNC(int (__stdcall*AI_Alliance)(char), AI_Alliance, 0x4a0e20);
DECL_FUNC(int(*sub_4A0EB0)(), sub_4A0EB0, 0x4a0eb0);
DECL_FUNC(int (__stdcall*getClosestEnemyUnitToRegionPlayer)(int, int, int), getClosestEnemyUnitToRegionPlayer, 0x4a0ec0);
DECL_FUNC(int (__stdcall*sub_4A1060)(__int16), sub_4A1060, 0x4a1060);
DECL_FUNC(int(*sub_4A10A0)(), sub_4A10A0, 0x4a10a0);
DECL_FUNC(int(*sub_4A10B0)(), sub_4A10B0, 0x4a10b0);
signed int sub_4A10C0(CUnit *a1) {
    int address = 0x4a10c0;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(void(*j_calculateUnitStrengths)(void), j_calculateUnitStrengths, 0x4a10e0);
DECL_FUNC(int(*SaveWriteAIData)(), SaveWriteAIData, 0x4a10f0);
int isTargetAIControlled(CUnit *a1, CUnit *a2) {
    int address = 0x4a1140;
    int result_;
    __asm {
        mov ecx, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*LoadGameAI)(), LoadGameAI, 0x4a1180);
bool CanCastSpellOrder(CUnit *unit, Tech2 tech_id, Order order_id) {
    int address = 0x4a11e0;
    bool result_;
    __asm {
        mov eax, unit
        mov di, tech_id
        push dword ptr order_id
        call address
        mov result_, al
    }
    return result_;
}
void AI_DecloakAfterNuke(CUnit *a1) {
    int address = 0x4a1240;
    __asm {
        mov esi, a1
        call address
    }
}
bool AiCastSpellOrder(CUnit *unit, CUnit *target, Order order, u8 aiActionFlag) {
    int address = 0x4a1290;
    bool result_;
    __asm {
        mov ecx, unit
        mov edi, target
        mov al, order
        mov bl, aiActionFlag
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*sub_4A13B0)(), sub_4A13B0, 0x4a13b0);
signed int AI_CastSpellBehaviour(CUnit *a1, int unknown_flag) {
    int address = 0x4a13c0;
    signed result_;
    __asm {
        mov eax, a1
        push dword ptr unknown_flag
        call address
        mov result_, eax
    }
    return result_;
}
void orders_Neutral(CUnit *a1) {
    int address = 0x4a1c20;
    __asm {
        mov edi, a1
        call address
    }
}
char orders_AIPatrol(CUnit *a1) {
    int address = 0x4a1d80;
    char result_;
    __asm {
        mov esi, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*RemoveAIControl)(), RemoveAIControl, 0x4a1e50);
DECL_FUNC(int(*sub_4A1EA0)(), sub_4A1EA0, 0x4a1ea0);
char orders_RescuePassive(CUnit *a1) {
    int address = 0x4a1ef0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*AI_SwitchRescue)(), AI_SwitchRescue, 0x4a2130);
DECL_FUNC(int(*sub_4A2370)(), sub_4A2370, 0x4a2370);
DECL_FUNC(int (__stdcall*AI_Move_DT)(signed int y, signed int x), AI_Move_DT, 0x4a2380);
signed int AI_UnitBehaviour(CUnit *a1) {
    int address = 0x4a2450;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
void AI_TrainingUnit(CUnit *a1, CUnit *a2) {
    int address = 0x4a2830;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
    }
}
DECL_FUNC(int(*sub_4A2AF0)(), sub_4A2AF0, 0x4a2af0);
DECL_FUNC(int(*AI_Loop)(), AI_Loop, 0x4a2b00);
DECL_FUNC(int(*sub_4A2B20)(), sub_4A2B20, 0x4a2b20);
DECL_FUNC(int(*sub_4A2B60)(), sub_4A2B60, 0x4a2b60);
DECL_FUNC(int (__stdcall*sub_4A2B90)(int), sub_4A2B90, 0x4a2b90);
DECL_FUNC(int(*sub_4A2BC0)(), sub_4A2BC0, 0x4a2bc0);
DECL_FUNC(int(*sub_4A2BD0)(), sub_4A2BD0, 0x4a2bd0);
DECL_FUNC(void(*TickCounterInit)(void), TickCounterInit, 0x4a2bf0);
DECL_FUNC(int (__stdcall*randomizePlayerValues)(int), randomizePlayerValues, 0x4a2c20);
DECL_FUNC(int(*getElapsedGameTimeSeconds)(), getElapsedGameTimeSeconds, 0x4a2ca0);
void updateDropCountdownTimerTxt(dialog *a1) {
    int address = 0x4a2cf0;
    __asm {
        mov ebx, a1
        call address
    }
}
DECL_FUNC(int(*sub_4A2D40)(), sub_4A2D40, 0x4a2d40);
DECL_FUNC(int(*sub_4A2D60)(), sub_4A2D60, 0x4a2d60);
DECL_FUNC(int(*updateCountdownDropTimer)(), updateCountdownDropTimer, 0x4a2f80);
DECL_FUNC(int(*GetPlayerNames)(), GetPlayerNames, 0x4a3010);
DECL_FUNC(int(*j_GetPlayerNames)(), j_GetPlayerNames, 0x4a3130);
DECL_FUNC(int(*sub_4A3140)(), sub_4A3140, 0x4a3140);
DECL_FUNC(int(*dropTimerProc)(), dropTimerProc, 0x4a3150);
DECL_FUNC(bool (__fastcall*Timeout_BINDLG)(dialog *dlg, struct dlgEvent *evt), Timeout_BINDLG, 0x4a3250);
DECL_FUNC(int(*loadTimeoutDlg)(), loadTimeoutDlg, 0x4a3320);
DECL_FUNC(int(*timeoutProcDropdown)(), timeoutProcDropdown, 0x4a3380);
DECL_FUNC(void (__stdcall*MinimapPing_maybe)(unsigned __int16 pos_x, unsigned __int16 pos_y, char a3), MinimapPing_maybe, 0x4a34c0);
DECL_FUNC(void (__fastcall*MiniMapUpdate)(dialog *dlg, int x, int y, rect *dst), MiniMapUpdate, 0x4a3570);
DECL_FUNC(int(*CreateMinimapSurface)(), CreateMinimapSurface, 0x4a3720);
DECL_FUNC(int(*sub_4A3790)(), sub_4A3790, 0x4a3790);
DECL_FUNC(int (__stdcall*sub_4A37A0)(int, int), sub_4A37A0, 0x4a37a0);
DECL_FUNC(int(*sub_4A3870)(), sub_4A3870, 0x4a3870);
DECL_FUNC(int(*sub_4A39D0)(), sub_4A39D0, 0x4a39d0);
DECL_FUNC(int (__stdcall*sub_4A39E0)(int), sub_4A39E0, 0x4a39e0);
DECL_FUNC(int(*sub_4A3A00)(), sub_4A3A00, 0x4a3a00);
DECL_FUNC(int(*minimapVisionUpdate_192_256)(), minimapVisionUpdate_192_256, 0x4a3a40);
DECL_FUNC(int(*minimapVisionUpdate_96_128)(), minimapVisionUpdate_96_128, 0x4a3b30);
DECL_FUNC(int(*minimapVisionUpdate_64)(), minimapVisionUpdate_64, 0x4a3c00);
DECL_FUNC(int(*sub_4A3D40)(), sub_4A3D40, 0x4a3d40);
DECL_FUNC(int(*getMinimapCursorPos)(), getMinimapCursorPos, 0x4a3d70);
DECL_FUNC(int(*sub_4A3E00)(), sub_4A3E00, 0x4a3e00);
void killMinimapPreviewDlg(dialog *a1) {
    int address = 0x4a3e20;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int(*minimapGameResetMouseInput)(), minimapGameResetMouseInput, 0x4a3eb0);
DECL_FUNC(void (__fastcall*MinimapImageUpdate)(dialog *dlg, int x, int y, rect *dst), MinimapImageUpdate, 0x4a3ee0);
DECL_FUNC(int (__stdcall*drawUnitBox)(int, char, char, char), drawUnitBox, 0x4a3fd0);
DECL_FUNC(int(*sub_4A4150)(), sub_4A4150, 0x4a4150);
DECL_FUNC(int(*minimapSurfaceUpdate_192_256)(), minimapSurfaceUpdate_192_256, 0x4a41b0);
DECL_FUNC(int(*minimapSurfaceUpdate_96_128)(), minimapSurfaceUpdate_96_128, 0x4a4240);
DECL_FUNC(int(*minimapSurfaceUpdate_64)(), minimapSurfaceUpdate_64, 0x4a42b0);
DECL_FUNC(int(*setMapSizeConstants)(), setMapSizeConstants, 0x4a4400);
DECL_FUNC(void (__fastcall*drawMinimapUnitBox)(int player_id), drawMinimapUnitBox, 0x4a4650);
DECL_FUNC(int(*drawMinimapUnitBox2)(), drawMinimapUnitBox2, 0x4a47b0);
DECL_FUNC(int(*drawAllMinimapUnitBoxes)(), drawAllMinimapUnitBoxes, 0x4a48e0);
DECL_FUNC(int(*sub_4A49F0)(), sub_4A49F0, 0x4a49f0);
DECL_FUNC(int(*updateMinimapPositioninfoProc)(), updateMinimapPositioninfoProc, 0x4a4a70);
DECL_FUNC(int(*drawAllMinimapBoxes)(), drawAllMinimapBoxes, 0x4a4ac0);
DECL_FUNC(int (__thiscall*drawShowHideTerrainContextHelp)(dialog *this_), drawShowHideTerrainContextHelp, 0x4a4c40);
DECL_FUNC(int(*sub_4A4CA0)(), sub_4A4CA0, 0x4a4ca0);
int minimapGameUpdate(dialog *a1) {
    int address = 0x4a4ce0;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
void minimapGameMouseUpdate(dialog *a1, dialog *a2) {
    int address = 0x4a4d20;
    __asm {
        mov ecx, a1
        mov edi, a2
        call address
    }
}
DECL_FUNC(int(*updateMinimapBoxesWithVisionProc)(), updateMinimapBoxesWithVisionProc, 0x4a4e00);
DECL_FUNC(int(*updateMinimapSurfaceInfoProc)(), updateMinimapSurfaceInfoProc, 0x4a4e40);
DECL_FUNC(int(*updateMinimapSurfaceInfo2Proc)(), updateMinimapSurfaceInfo2Proc, 0x4a4f10);
DECL_FUNC(int(*playerInfoSomethingTvBProc)(), playerInfoSomethingTvBProc, 0x4a4fe0);
DECL_FUNC(char (__thiscall*drawStatLBBtnsContextHelp)(dialog *this_), drawStatLBBtnsContextHelp, 0x4a5110);
DECL_FUNC(int(*sub_4A51D0)(), sub_4A51D0, 0x4a51d0);
DECL_FUNC(int(*minimapPreviewUpdateState)(), minimapPreviewUpdateState, 0x4a5200);
void minimap_dlg_Create(dialog *a1) {
    int address = 0x4a5230;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int (__stdcall*MinimapGameRightclickEventMoveto)(int), MinimapGameRightclickEventMoveto, 0x4a5310);
void MinimapGameClickEvent(dlgEvent *a1, dialog *a2) {
    int address = 0x4a53c0;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
    }
}
void minimapPreviewMouseUpdate(dialog *a1, struct dlgEvent *a2) {
    int address = 0x4a5440;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
    }
}
char minimap_dlg_MouseMove(dialog *a1, struct dlgEvent *a2) {
    int address = 0x4a5490;
    char result_;
    __asm {
        mov esi, a1
        push dword ptr a2
        call address
        mov result_, al
    }
    return result_;
}
void minimap_dlg_Activate(dialog *a1) {
    int address = 0x4a54f0;
    __asm {
        mov esi, a1
        call address
    }
}
DECL_FUNC(unsigned int (__fastcall*MinimapButtonInteract)(dialog *a1, dlgEvent *a2), MinimapButtonInteract, 0x4a5570);
void MinimapGameTargetOrder(dlgEvent *a1) {
    int address = 0x4a55f0;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(signed int (__fastcall*MinimapImageInteract)(dialog *dlg, dlgEvent *evt), MinimapImageInteract, 0x4a5650);
dialog *updateMinimapPreviewDlg(dialog *a1) {
    int address = 0x4a5770;
    dialog * result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*MiniMapPreviewInteract)(dialog *dlg, dlgEvent *evt), MiniMapPreviewInteract, 0x4a5900);
DECL_FUNC(int(*load_gluMinimap)(), load_gluMinimap, 0x4a5a80);
DECL_FUNC(int(*load_MinimapPreview)(), load_MinimapPreview, 0x4a5d10);
DECL_FUNC(int(*sub_4A5E30)(), sub_4A5E30, 0x4a5e30);
DECL_FUNC(int(*getMusicVolume)(), getMusicVolume, 0x4a5ef0);
DECL_FUNC(int(*stopMusic)(), stopMusic, 0x4a5f50);
DECL_FUNC(void (__stdcall*FadeMusicProc)(HWND, UINT, UINT, DWORD), FadeMusicProc, 0x4a6030);
DECL_FUNC(int(*sub_4A60D0)(), sub_4A60D0, 0x4a60d0);
DECL_FUNC(int(*sub_4A6100)(), sub_4A6100, 0x4a6100);
DECL_FUNC(int(*PlayMusic)(), PlayMusic, 0x4a6140);
DECL_FUNC(int(*playNextMusic)(), playNextMusic, 0x4a6250);
DECL_FUNC(int(*playRadioFreeZerg)(), playRadioFreeZerg, 0x4a62b0);
void DLGMusicFade(int a1) {
    int address = 0x4a6310;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int(*sub_4A6390)(), sub_4A6390, 0x4a6390);
DECL_FUNC(int (__stdcall*sub_4A63A0)(int, int, int), sub_4A63A0, 0x4a63a0);
DECL_FUNC(int(*sub_4A6580)(), sub_4A6580, 0x4a6580);
DECL_FUNC(int(*mapEntry_Append)(), mapEntry_Append, 0x4a6660);
DECL_FUNC(int (__stdcall*mapEntryAdd)(int), mapEntryAdd, 0x4a66c0);
DECL_FUNC(int(*cleanupBNListboxData)(), cleanupBNListboxData, 0x4a6770);
signed int sub_4A68D0(struct_game_140 *a1, unsigned __int8 game_speed) {
    int address = 0x4a68d0;
    signed result_;
    __asm {
        mov eax, a1
        push dword ptr game_speed
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4A6A00)(), sub_4A6A00, 0x4a6a00);
DECL_FUNC(int(*sub_4A6DD0)(), sub_4A6DD0, 0x4a6dd0);
DECL_FUNC(int(*LoadRecentMapsCombobox)(), LoadRecentMapsCombobox, 0x4a6ee0);
DECL_FUNC(int (__stdcall*fileExt)(char), fileExt, 0x4a7050);
MapRelatedUnknown *save_Recent_Map_Data(MapRelatedUnknown *result) {
    int address = 0x4a7210;
    MapRelatedUnknown * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*getMapListEntryCount)(int, int, char *), getMapListEntryCount, 0x4a73c0);
DECL_FUNC(int (__stdcall*sub_4A7540)(int), sub_4A7540, 0x4a7540);
DECL_FUNC(int(*sub_4A7740)(), sub_4A7740, 0x4a7740);
DECL_FUNC(int(*sub_4A79D0)(), sub_4A79D0, 0x4a79d0);
DECL_FUNC(int(*scenarioError)(), scenarioError, 0x4a7c30);
DECL_FUNC(void (__stdcall*sub_4A7F50)(HWND, UINT, UINT, DWORD), sub_4A7F50, 0x4a7f50);
DECL_FUNC(int(*sub_4A7FC0)(), sub_4A7FC0, 0x4a7fc0);
DECL_FUNC(int (__stdcall*sub_4A8050)(char *source, int a2, int, unsigned __int8 game_speed, char *dest), sub_4A8050, 0x4a8050);
signed int LoadScenarioSingle(char *a1, int a2, const char *a3, unsigned __int8 game_speed) {
    int address = 0x4a8590;
    signed result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        mov esi, a3
        push dword ptr game_speed
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_4A8710)(char *source), sub_4A8710, 0x4a8710);
int sub_4A8790(DWORD a1, CHAR *esi0, char *a2) {
    int address = 0x4a8790;
    int result_;
    __asm {
        mov edi, a1
        mov esi, esi0
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
BOOL sub_4A8850(char *a1) {
    int address = 0x4a8850;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
FILE *CreateCharacterFile(CharacterData *a1) {
    int address = 0x4a8880;
    FILE * result_;
    __asm {
        mov ebx, a1
        call address
        mov result_, eax
    }
    return result_;
}
int LoadCharacterData(CharacterData *character_data, char *source) {
    int address = 0x4a8940;
    int result_;
    __asm {
        mov ebx, character_data
        push dword ptr source
        call address
        mov result_, eax
    }
    return result_;
}
FILE *verifyCharacterFile(CharacterData *a1, const char *player_name) {
    int address = 0x4a8a40;
    FILE * result_;
    __asm {
        mov eax, a1
        mov esi, player_name
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*enumFiles)(int), enumFiles, 0x4a8ab0);
DECL_FUNC(int(*sub_4A8B70)(), sub_4A8B70, 0x4a8b70);
DECL_FUNC(int(*getPlayerForce)(), getPlayerForce, 0x4a8b90);
DECL_FUNC(int(*sub_4A8BB0)(), sub_4A8BB0, 0x4a8bb0);
DECL_FUNC(int(*sub_4A8BC0)(), sub_4A8BC0, 0x4a8bc0);
DECL_FUNC(int(*sub_4A8BD0)(), sub_4A8BD0, 0x4a8bd0);
DECL_FUNC(int(*sub_4A8BF0)(), sub_4A8BF0, 0x4a8bf0);
DECL_FUNC(int(*sub_4A8C10)(), sub_4A8C10, 0x4a8c10);
DECL_FUNC(int(*sub_4A8C20)(), sub_4A8C20, 0x4a8c20);
DECL_FUNC(int(*sub_4A8C40)(), sub_4A8C40, 0x4a8c40);
DECL_FUNC(int(*sub_4A8C60)(), sub_4A8C60, 0x4a8c60);
DECL_FUNC(int(*sub_4A8C70)(), sub_4A8C70, 0x4a8c70);
DECL_FUNC(int(*sub_4A8CA0)(), sub_4A8CA0, 0x4a8ca0);
DECL_FUNC(int(*getOpenSlotCount)(), getOpenSlotCount, 0x4a8cd0);
DECL_FUNC(int(*getNumOpenSlots)(), getNumOpenSlots, 0x4a8cf0);
DECL_FUNC(int(*getComputerSlotCount)(), getComputerSlotCount, 0x4a8d10);
DECL_FUNC(int(*initializeSlots)(), initializeSlots, 0x4a8d40);
DECL_FUNC(int(*sub_4A8DB0)(), sub_4A8DB0, 0x4a8db0);
DECL_FUNC(int(*setAllValidPlayerOwnersToOpen)(), setAllValidPlayerOwnersToOpen, 0x4a8de0);
DECL_FUNC(int(*sub_4A8E10)(), sub_4A8E10, 0x4a8e10);
DECL_FUNC(int(*sub_4A8E30)(), sub_4A8E30, 0x4a8e30);
DECL_FUNC(int (__stdcall*sub_4A8E50)(int), sub_4A8E50, 0x4a8e50);
DECL_FUNC(int (__stdcall*sub_4A8F30)(int), sub_4A8F30, 0x4a8f30);
DECL_FUNC(int(*sub_4A9010)(), sub_4A9010, 0x4a9010);
DECL_FUNC(int (__stdcall*sub_4A9130)(char), sub_4A9130, 0x4a9130);
DECL_FUNC(int(*sub_4A91E0)(), sub_4A91E0, 0x4a91e0);
DECL_FUNC(int(*getTotalValidSlotCount)(), getTotalValidSlotCount, 0x4a9210);
DECL_FUNC(void (__cdecl*InitializeLoadedGameSlots)(), InitializeLoadedGameSlots, 0x4a9250);
DECL_FUNC(int (__stdcall*GetRandomRace)(int), GetRandomRace, 0x4a94c0);
DECL_FUNC(int(*randomizePlayerPositions)(), randomizePlayerPositions, 0x4a95d0);
DECL_FUNC(int(*sub_4A99C0)(), sub_4A99C0, 0x4a99c0);
DECL_FUNC(int(*sub_4A9A10)(), sub_4A9A10, 0x4a9a10);
DECL_FUNC(void (__cdecl*BWFXN_RandomizePlayerRaces)(), BWFXN_RandomizePlayerRaces, 0x4a9a30);
DECL_FUNC(int(*randomizeForces)(), randomizeForces, 0x4a9c90);
DECL_FUNC(void (__cdecl*RandomizeSlotsForcesColors)(), RandomizeSlotsForcesColors, 0x4a9d80);
DECL_FUNC(int(*sub_4AA190)(), sub_4AA190, 0x4aa190);
DECL_FUNC(int(*sub_4AA4B0)(), sub_4AA4B0, 0x4aa4b0);
DECL_FUNC(int(*sub_4AA620)(), sub_4AA620, 0x4aa620);
DECL_FUNC(int(*sub_4AA880)(), sub_4AA880, 0x4aa880);
DECL_FUNC(int(*sub_4AA890)(), sub_4AA890, 0x4aa890);
DECL_FUNC(int(*sub_4AA8A0)(), sub_4AA8A0, 0x4aa8a0);
DECL_FUNC(int(*sub_4AA8B0)(), sub_4AA8B0, 0x4aa8b0);
DECL_FUNC(int(*sub_4AA8C0)(), sub_4AA8C0, 0x4aa8c0);
DECL_FUNC(int(*sub_4AA8D0)(), sub_4AA8D0, 0x4aa8d0);
DECL_FUNC(int(*sub_4AA8E0)(), sub_4AA8E0, 0x4aa8e0);
DECL_FUNC(int(*sub_4AA900)(), sub_4AA900, 0x4aa900);
DECL_FUNC(int(*sub_4AA910)(), sub_4AA910, 0x4aa910);
DECL_FUNC(int(*sub_4AA920)(), sub_4AA920, 0x4aa920);
DECL_FUNC(int(*sub_4AA930)(), sub_4AA930, 0x4aa930);
DECL_FUNC(int(*sub_4AA960)(), sub_4AA960, 0x4aa960);
DECL_FUNC(int(*sub_4AA990)(), sub_4AA990, 0x4aa990);
DECL_FUNC(int(*isGameTypeSpecial)(), isGameTypeSpecial, 0x4aa9b0);
DECL_FUNC(int(*IsLeagueGametype)(), IsLeagueGametype, 0x4aa9d0);
DECL_FUNC(int (__stdcall*sub_4AA9F0)(char), sub_4AA9F0, 0x4aa9f0);
BOOL IsScenarioGame(struct_game_140 *a1) {
    int address = 0x4aaa10;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4AAA40)(), sub_4AAA40, 0x4aaa40);
DECL_FUNC(int(*sub_4AAA50)(), sub_4AAA50, 0x4aaa50);
DECL_FUNC(int(*sub_4AAA60)(), sub_4AAA60, 0x4aaa60);
DECL_FUNC(int(*sub_4AAA70)(), sub_4AAA70, 0x4aaa70);
DECL_FUNC(int(*sub_4AAA80)(), sub_4AAA80, 0x4aaa80);
DECL_FUNC(int(*sub_4AAA90)(), sub_4AAA90, 0x4aaa90);
DECL_FUNC(int(*sub_4AAAA0)(), sub_4AAAA0, 0x4aaaa0);
DECL_FUNC(int(*sub_4AAAB0)(), sub_4AAAB0, 0x4aaab0);
DECL_FUNC(int(*sub_4AABA0)(), sub_4AABA0, 0x4aaba0);
DECL_FUNC(int(*sub_4AABB0)(), sub_4AABB0, 0x4aabb0);
DECL_FUNC(int(*sub_4AABD0)(), sub_4AABD0, 0x4aabd0);
DECL_FUNC(int(*sub_4AABF0)(), sub_4AABF0, 0x4aabf0);
DECL_FUNC(int(*sub_4AAC60)(), sub_4AAC60, 0x4aac60);
DECL_FUNC(int(*sub_4AAC90)(), sub_4AAC90, 0x4aac90);
DECL_FUNC(int (__stdcall*sub_4AACC0)(char), sub_4AACC0, 0x4aacc0);
DECL_FUNC(int(*sub_4AAD00)(), sub_4AAD00, 0x4aad00);
DECL_FUNC(int(*getGameTypeString)(), getGameTypeString, 0x4aad40);
DECL_FUNC(int(*sub_4AAD80)(), sub_4AAD80, 0x4aad80);
DECL_FUNC(int(*sub_4AADA0)(), sub_4AADA0, 0x4aada0);
signed int sub_4AADF0(GotFileValues *got_template_values, char *template_label, char a3, TemplateConstructor template_constructor, char *template_name, int a6) {
    int address = 0x4aadf0;
    signed result_;
    __asm {
        mov eax, got_template_values
        mov edx, template_label
        mov cl, a3
        push dword ptr a6
        push dword ptr template_name
        push dword ptr template_constructor
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_4AAE20)(int, int), sub_4AAE20, 0x4aae20);
DECL_FUNC(void (__stdcall*eventSetGameType)(s_evt *evt), eventSetGameType, 0x4aaea0);
DECL_FUNC(int(*sub_4AAF30)(), sub_4AAF30, 0x4aaf30);
DECL_FUNC(int(*sub_4AAF50)(), sub_4AAF50, 0x4aaf50);
DECL_FUNC(int(*sub_4AAFA0)(), sub_4AAFA0, 0x4aafa0);
DECL_FUNC(int(*sub_4AAFF0)(), sub_4AAFF0, 0x4aaff0);
DECL_FUNC(int(*sub_4AB050)(), sub_4AB050, 0x4ab050);
DECL_FUNC(void (__thiscall*DestroyGameTemplates)(bool exit_code), DestroyGameTemplates, 0x4ab0a0);
DECL_FUNC(int(*sub_4AB0B0)(), sub_4AB0B0, 0x4ab0b0);
DECL_FUNC(int(*sub_4AB0E0)(), sub_4AB0E0, 0x4ab0e0);
DECL_FUNC(int(*sub_4AB110)(), sub_4AB110, 0x4ab110);
DECL_FUNC(void (__stdcall*Template_Constructor)(char *template_name, char *template_label, GotFileValues *a3, void *a4), Template_Constructor, 0x4ab150);
DECL_FUNC(int(*beginComputerAIScriptExecution)(), beginComputerAIScriptExecution, 0x4ab230);
DECL_FUNC(int (__stdcall*sub_4AB310)(int, int), sub_4AB310, 0x4ab310);
DECL_FUNC(int (__stdcall*IsBNetGame)(int), IsBNetGame, 0x4ab5b0);
DECL_FUNC(Trigger *(__stdcall*loadTRGFile)(const char *a1), loadTRGFile, 0x4ab620);
GotFileValues *readTemplate(char *template_name, char *got_template_name, char *got_template_label) {
    int address = 0x4ab750;
    GotFileValues * result_;
    __asm {
        mov eax, template_name
        push dword ptr got_template_label
        push dword ptr got_template_name
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*InitUseMapSettingsTemplate)(), InitUseMapSettingsTemplate, 0x4ab840);
DECL_FUNC(signed int (__stdcall*LoadGameTemplates)(TemplateConstructor template_constructor), LoadGameTemplates, 0x4ab860);
DECL_FUNC(int(*sub_4AB970)(), sub_4AB970, 0x4ab970);
DECL_FUNC(int(*sub_4ABA20)(), sub_4ABA20, 0x4aba20);
DECL_FUNC(int(*chooseTRGTemplate)(), chooseTRGTemplate, 0x4abaf0);
DECL_FUNC(int (__stdcall*sub_4ABC90)(LPCSTR lpszString, int nFit, int), sub_4ABC90, 0x4abc90);
DECL_FUNC(int (__stdcall*sub_4ABF50)(HGDIOBJ h), sub_4ABF50, 0x4abf50);
DECL_FUNC(int (__thiscall*BNLoadImage)(char *fileName, HWND hWnd, HRGN a2, int a4, int a5, int, int), BNLoadImage, 0x4abfe0);
DECL_FUNC(int (__stdcall*sub_4AC250)(int, wchar_t *), sub_4AC250, 0x4ac250);
DECL_FUNC(int(*sub_4AC2E0)(), sub_4AC2E0, 0x4ac2e0);
DECL_FUNC(int (__stdcall*BattleGetCursor)(int, int, int, int, int), BattleGetCursor, 0x4ac300);
DECL_FUNC(int (__stdcall*BattleGetResource)(int, int, int size, void *buffer, int buffersize, int width, int height, int depth), BattleGetResource, 0x4ac380);
DECL_FUNC(int(*sub_4ACD30)(), sub_4ACD30, 0x4acd30);
DECL_FUNC(int (__stdcall*DrawTextConstructor)(HDC hdc), DrawTextConstructor, 0x4acd50);
DECL_FUNC(int(*sub_4ACE20)(), sub_4ACE20, 0x4ace20);
DECL_FUNC(int(*sub_4ACF20)(), sub_4ACF20, 0x4acf20);
DECL_FUNC(int (__stdcall*sub_4AD040)(int), sub_4AD040, 0x4ad040);
DECL_FUNC(int (__stdcall*BattlePlaySound)(int, int, int), BattlePlaySound, 0x4ad0b0);
DECL_FUNC(int (__stdcall*sub_4AD0E0)(LPCSTR lpText, LPCSTR lpCaption), sub_4AD0E0, 0x4ad0e0);
DECL_FUNC(int(*sub_4AD110)(), sub_4AD110, 0x4ad110);
DECL_FUNC(int(*sub_4AD140)(), sub_4AD140, 0x4ad140);
DECL_FUNC(int(*initializeProviderStruct)(), initializeProviderStruct, 0x4ad190);
DECL_FUNC(int(*SelectGame)(), SelectGame, 0x4ad230);
DECL_FUNC(int(*loadMenu_gluBNRes)(), loadMenu_gluBNRes, 0x4ad330);
DECL_FUNC(int (__thiscall*sub_4AD390)(dialog *this_), sub_4AD390, 0x4ad390);
DECL_FUNC(int(*sub_4AD3E0)(), sub_4AD3E0, 0x4ad3e0);
DECL_FUNC(int(*sub_4AD400)(), sub_4AD400, 0x4ad400);
dialog *sub_4AD440(dialog *result) {
    int address = 0x4ad440;
    dialog * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
signed int sub_4AD460(dialog *dlg) {
    int address = 0x4ad460;
    signed result_;
    __asm {
        mov eax, dlg
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4AD560)(), sub_4AD560, 0x4ad560);
signed int sub_4AD5B0(dialog *a1) {
    int address = 0x4ad5b0;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
void sub_4AD640(dialog *a1) {
    int address = 0x4ad640;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(void (__fastcall*gluCustm_ListboxEntryUpdate)(struct dialog *dlg, u8 selectedIndex, rect *dstRect, int x, int y), gluCustm_ListboxEntryUpdate, 0x4ad6b0);
DECL_FUNC(int(*sub_4AD850)(), sub_4AD850, 0x4ad850);
DECL_FUNC(int (__stdcall*HideShowDlgCallback)(int, int, int), HideShowDlgCallback, 0x4ad950);
DECL_FUNC(void (__fastcall*gluCustm_UpdateCB)(dialog *dlg, int x, int y, rect *dst), gluCustm_UpdateCB, 0x4ad980);
int gluCustm_initSwish(dialog *a1) {
    int address = 0x4adac0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4ADB10)(), sub_4ADB10, 0x4adb10);
void sub_4ADD90(int a1, dialog *a2) {
    int address = 0x4add90;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
    }
}
DECL_FUNC(int (__stdcall*sub_4ADEA0)(int, int, int, int), sub_4ADEA0, 0x4adea0);
DECL_FUNC(int (__stdcall*AddMapToList_CB)(int, int, int), AddMapToList_CB, 0x4adee0);
void gluCustm_raceDropdown(dialog *a1) {
    int address = 0x4adf20;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(void (__fastcall*sub_4ADFE0)(dialog *dlg, __int16 a2), sub_4ADFE0, 0x4adfe0);
DECL_FUNC(int(*sub_4AE1E0)(), sub_4AE1E0, 0x4ae1e0);
DECL_FUNC(int (__stdcall*sub_4AE1F0)(int, int, int, int), sub_4AE1F0, 0x4ae1f0);
dialog *sub_4AE250(dialog *result) {
    int address = 0x4ae250;
    dialog * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4AE320)(), sub_4AE320, 0x4ae320);
BOOL sub_4AE3C0(dialog *a1) {
    int address = 0x4ae3c0;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_4AE420)(int, dialog *a1, char *string), sub_4AE420, 0x4ae420);
void gluCustm_typeDropdown(dialog *a1) {
    int address = 0x4ae660;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(bool (__fastcall*gluCustm_SubType)(dialog *dlg, dlgEvent *evt), gluCustm_SubType, 0x4ae710);
void sub_4AE790(dialog *a1) {
    int address = 0x4ae790;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int (__stdcall*sub_4AE830)(int), sub_4AE830, 0x4ae830);
DECL_FUNC(bool (__fastcall*gluCreate_GameSpeed_Slider)(dialog *dlg, dlgEvent *evt), gluCreate_GameSpeed_Slider, 0x4ae860);
void *SingleMakeCreateGameDialog(dialog *a1) {
    int address = 0x4ae920;
    void * result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*gluCustm_RaceSlot)(dialog *dlg, dlgEvent *evt), gluCustm_RaceSlot, 0x4aed40);
DECL_FUNC(bool (__fastcall*gluCustm_PlayerSlot)(dialog *dlg, dlgEvent *evt), gluCustm_PlayerSlot, 0x4aed80);
DECL_FUNC(bool (__fastcall*gluCustm_Player1)(dialog *dlg, dlgEvent *evt), gluCustm_Player1, 0x4aede0);
DECL_FUNC(int(*sub_4AEE40)(), sub_4AEE40, 0x4aee40);
DECL_FUNC(int(*sub_4AEEB0)(), sub_4AEEB0, 0x4aeeb0);
DECL_FUNC(void (__stdcall*sub_4AEED0)(dialog *a1), sub_4AEED0, 0x4aeed0);
DECL_FUNC(bool (__fastcall*gluCustm_GameListboxUpdate)(dialog *dlg, dlgEvent *evt), gluCustm_GameListboxUpdate, 0x4af020);
DECL_FUNC(void (__cdecl*sub_4AF100)(), sub_4AF100, 0x4af100);
DECL_FUNC(int(*gluCustmLoadMapFromList)(), gluCustmLoadMapFromList, 0x4af1b0);
void sub_4AF400(dialog *a1) {
    int address = 0x4af400;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(bool (__fastcall*gluCustm_GameType)(dialog *dlg, dlgEvent *evt), gluCustm_GameType, 0x4af490);
char gluCustm_CustomCtrl_InitializeChildren(dialog *a1) {
    int address = 0x4af510;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*gluCustm_Interact)(dialog *dlg, struct dlgEvent *evt), gluCustm_Interact, 0x4af5c0);
int loadMenu_gluCustm(int is_multiplayer) {
    int address = 0x4af6d0;
    int result_;
    __asm {
        mov eax, is_multiplayer
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_4AF8E0)(char *source, int, int, int, int), sub_4AF8E0, 0x4af8e0);
DECL_FUNC(int (__stdcall*joinModemGame)(char *gameName), joinModemGame, 0x4af920);
DECL_FUNC(int (__stdcall*Device_Constructor)(DWORD, DWORD, DWORD, DWORD), Device_Constructor, 0x4af970);
DECL_FUNC(int (__fastcall*callback)(DWORD, DWORD, DWORD), callback, 0x4afa90);
DECL_FUNC(void (__thiscall*sub_4AFAD0)(dialog *this_), sub_4AFAD0, 0x4afad0);
int sub_4AFB60(dialog *a1) {
    int address = 0x4afb60;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(void (__fastcall*sub_4AFBF0)(dialog *dlg, int x, int y, rect *dst), sub_4AFBF0, 0x4afbf0);
DECL_FUNC(void (__thiscall*sub_4AFC60)(dialog *this_, dialog *a2), sub_4AFC60, 0x4afc60);
int sub_4AFD80(dialog *a1) {
    int address = 0x4afd80;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
int sub_4AFE30(dialog *a1) {
    int address = 0x4afe30;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
void sub_4AFEA0(dialog *a1, dialog *a2) {
    int address = 0x4afea0;
    __asm {
        mov eax, a1
        mov edi, a2
        call address
    }
}
__int16 sub_4AFF50(dlgEvent *a1, dialog *a2) {
    int address = 0x4aff50;
    __int16 result_;
    __asm {
        mov ebx, a1
        mov esi, a2
        call address
        mov result_, ax
    }
    return result_;
}
int sub_4B0010(dialog *a1) {
    int address = 0x4b0010;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
int sub_4B0070(dialog *a1) {
    int address = 0x4b0070;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(DWORD (__fastcall*sub_4B0140)(dialog *a1, int a2), sub_4B0140, 0x4b0140);
int sub_4B01F0(dialog *a1) {
    int address = 0x4b01f0;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
int sub_4B02F0(dialog *a1) {
    int address = 0x4b02f0;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*sub_4B03C0)(dialog *dlg, dlgEvent *a2), sub_4B03C0, 0x4b03c0);
void gluModem_CustomCtrlID(dialog *a1) {
    int address = 0x4b0410;
    __asm {
        mov esi, a1
        call address
    }
}
DECL_FUNC(bool (__fastcall*glumodemlist_loop)(dialog *dlg, struct dlgEvent *evt), glumodemlist_loop, 0x4b0440);
DECL_FUNC(bool (__fastcall*gluModemStatusDlgProc)(dialog *dlg, dlgEvent *evt), gluModemStatusDlgProc, 0x4b04d0);
DECL_FUNC(void (__stdcall*PhoneNumber_Constructor)(dialog *a1), PhoneNumber_Constructor, 0x4b0560);
int sub_4B07C0(dialog *a1) {
    int address = 0x4b07c0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
u32 sub_4B0970(dialog *a1) {
    int address = 0x4b0970;
    u32 result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4B0AC0)(), sub_4B0AC0, 0x4b0ac0);
void sub_4B0AE0(dialog *a1) {
    int address = 0x4b0ae0;
    __asm {
        mov edi, a1
        call address
    }
}
DECL_FUNC(int(*load_gluATZoneList)(), load_gluATZoneList, 0x4b0c60);
DECL_FUNC(int(*load_gluModemList)(), load_gluModemList, 0x4b0dc0);
DECL_FUNC(bool (__fastcall*gluModemEntry_loop)(dialog *dlg, dlgEvent *evt), gluModemEntry_loop, 0x4b0f20);
DECL_FUNC(int (__stdcall*load_gluModemStatus)(dialog *a1), load_gluModemStatus, 0x4b1060);
void DeleteGluModemEntry(dialog *a1) {
    int address = 0x4b1310;
    __asm {
        mov edi, a1
        call address
    }
}
DECL_FUNC(int (__stdcall*load_gluModemEntry)(int), load_gluModemEntry, 0x4b13a0);
DECL_FUNC(void (__stdcall*AU_PHONENUMBER)(dialog *arg0), AU_PHONENUMBER, 0x4b14d0);
DECL_FUNC(bool (__fastcall*gluModem_Main)(dialog *dlg, struct dlgEvent *evt), gluModem_Main, 0x4b1820);
DECL_FUNC(int(*loadMenu_gluModem)(), loadMenu_gluModem, 0x4b19c0);
DECL_FUNC(int(*sub_4B1B30)(), sub_4B1B30, 0x4b1b30);
signed int verifyCheatCode(const void *a1, CheatFlags *game_cheats) {
    int address = 0x4b1b50;
    signed result_;
    __asm {
        mov eax, a1
        mov edx, game_cheats
        call address
        mov result_, eax
    }
    return result_;
}
signed int campaignTypeCheatStrings(int a2) {
    int address = 0x4b1dc0;
    signed result_;
    __asm {
        mov edi, a2
        call address
        mov result_, eax
    }
    return result_;
}
int makeCheatHash(const char *cheat, __int64 *a2) {
    int address = 0x4b1ee0;
    int result_;
    __asm {
        mov edx, cheat
        mov edi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*cheatActivation)(int), cheatActivation, 0x4b1fa0);
DECL_FUNC(signed int (__fastcall*_radioFreeZergCheat)(int a1, const void *a2, CheatFlags *cheat_flags), _radioFreeZergCheat, 0x4b2350);
signed int CommandLineCheatCompare(CheatFlags *game_cheats, const char *a2) {
    int address = 0x4b23e0;
    signed result_;
    __asm {
        mov ebx, game_cheats
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(unsigned int (__fastcall*sub_4B24B0)(dialog *a1, dlgEvent *a2), sub_4B24B0, 0x4b24b0);
DECL_FUNC(int(*gluCmpgnBtn_UpdateTimer)(), gluCmpgnBtn_UpdateTimer, 0x4b2500);
DECL_FUNC(void (__thiscall*gluCmpgnBtn_InitTimer)(dialog *this_), gluCmpgnBtn_InitTimer, 0x4b2570);
DECL_FUNC(void (__fastcall*gluCmpgnBtn_BtnLightupUpdate)(dialog *dlg, int x, int y, rect *dst), gluCmpgnBtn_BtnLightupUpdate, 0x4b25a0);
DECL_FUNC(bool (__fastcall*gluCmpgn_CampaignButton)(dialog *dlg, dlgEvent *evt), gluCmpgn_CampaignButton, 0x4b25e0);
int sub_4B26B0(dialog *a1) {
    int address = 0x4b26b0;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4B26E0)(), sub_4B26E0, 0x4b26e0);
DECL_FUNC(int (__stdcall*sub_4B2810)(int), sub_4B2810, 0x4b2810);
DECL_FUNC(int (__fastcall*gluCmpgn_Main)(dialog *a3, struct dlgEvent *evt), gluCmpgn_Main, 0x4b28b0);
DECL_FUNC(int(*loadMenu_gluCmpgn)(), loadMenu_gluCmpgn, 0x4b2930);
DECL_FUNC(int(*sub_4B2A50)(), sub_4B2A50, 0x4b2a50);
DECL_FUNC(int(*resourceScoreCalc)(), resourceScoreCalc, 0x4b2a90);
DECL_FUNC(int(*structureScoreCalc)(), structureScoreCalc, 0x4b2af0);
DECL_FUNC(int(*unitScoreCalc)(), unitScoreCalc, 0x4b2b30);
DECL_FUNC(int(*overallScoreCalc)(), overallScoreCalc, 0x4b2b70);
DECL_FUNC(int(*sub_4B2BD0)(), sub_4B2BD0, 0x4b2bd0);
DECL_FUNC(int(*sub_4B2D10)(), sub_4B2D10, 0x4b2d10);
DECL_FUNC(int (__stdcall*sub_4B2D20)(__int16, __int16), sub_4B2D20, 0x4b2d20);
DECL_FUNC(int(*sub_4B2D50)(), sub_4B2D50, 0x4b2d50);
DECL_FUNC(int(*sub_4B2DA0)(), sub_4B2DA0, 0x4b2da0);
DECL_FUNC(int (__stdcall*sub_4B2DE0)(char), sub_4B2DE0, 0x4b2de0);
DECL_FUNC(int(*sub_4B2DF0)(), sub_4B2DF0, 0x4b2df0);
BOOL sub_4B30A0(dialog *dlg) {
    int address = 0x4b30a0;
    BOOL result_;
    __asm {
        mov edi, dlg
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_4B3140)(int), sub_4B3140, 0x4b3140);
DECL_FUNC(int (__stdcall*sub_4B31C0)(int, int), sub_4B31C0, 0x4b31c0);
DECL_FUNC(int (__stdcall*endgameData)(char *, size_t, char *buff, size_t size), endgameData, 0x4b3220);
DECL_FUNC(int (__stdcall*sub_4B34D0)(int, int), sub_4B34D0, 0x4b34d0);
int sub_4B3600(dialog *a1, int a2, int a3, int a4) {
    int address = 0x4b3600;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__thiscall*DLG_GlueScoreFillEnd)(dialog *this_), DLG_GlueScoreFillEnd, 0x4b3670);
DECL_FUNC(void (__thiscall*sub_4B3820)(dialog *this_, int a2, int a3), sub_4B3820, 0x4b3820);
DECL_FUNC(void (__fastcall*sub_4B38A0)(dialog *dlg, int x, int y, rect *dst), sub_4B38A0, 0x4b38a0);
DECL_FUNC(void (__fastcall*sub_4B3A40)(dialog *dlg, int x, int y, rect *dst), sub_4B3A40, 0x4b3a40);
DECL_FUNC(void (__fastcall*sub_4B3B80)(dialog *dlg, int x, int y, rect *dst), sub_4B3B80, 0x4b3b80);
DECL_FUNC(void (__stdcall*sub_4B3BC0)(dialog *a1), sub_4B3BC0, 0x4b3bc0);
DECL_FUNC(bool (__fastcall*gluScore_PlayerRaceIcon)(dialog *dlg, dlgEvent *evt), gluScore_PlayerRaceIcon, 0x4b3fd0);
DECL_FUNC(bool (__fastcall*gluScore_PlayerScoreTotal)(dialog *dlg, dlgEvent *evt), gluScore_PlayerScoreTotal, 0x4b4160);
DECL_FUNC(int(*sub_4B42D0)(), sub_4B42D0, 0x4b42d0);
int DLG_GlueScoreFill(dialog *a1) {
    int address = 0x4b43f0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
int sub_4B4520(dialog *a1) {
    int address = 0x4b4520;
    int result_;
    __asm {
        mov edi, a1
        call address
        mov result_, eax
    }
    return result_;
}
int sub_4B4600(dialog *a1) {
    int address = 0x4b4600;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*gluScore_Tab)(dialog *dlg, dlgEvent *evt), gluScore_Tab, 0x4b47c0);
DECL_FUNC(bool (__fastcall*gluScore_SaveReplay)(dialog *dlg, dlgEvent *evt), gluScore_SaveReplay, 0x4b4960);
int gluScore_CustomCtrlID(dialog *a1) {
    int address = 0x4b4a00;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*gluScore_Main)(dialog *dlg, struct dlgEvent *evt), gluScore_Main, 0x4b4a30);
DECL_FUNC(int(*loadMenu_gluScore)(), loadMenu_gluScore, 0x4b4af0);
DECL_FUNC(bool (__fastcall*sub_4B4E20)(dialog *dlg, struct dlgEvent *evt), sub_4B4E20, 0x4b4e20);
DECL_FUNC(int(*sub_4B4E70)(), sub_4B4E70, 0x4b4e70);
DECL_FUNC(int(*sub_4B4EE0)(), sub_4B4EE0, 0x4b4ee0);
DECL_FUNC(int (__thiscall*sub_4B4F10)(dialog *dlg, int y, rect *dst), sub_4B4F10, 0x4b4f10);
DECL_FUNC(bool (__fastcall*gluExpCmpgn_CampaignButton)(dialog *dlg, dlgEvent *evt), gluExpCmpgn_CampaignButton, 0x4b4f50);
DECL_FUNC(int(*sub_4B5050)(), sub_4B5050, 0x4b5050);
int sub_4B5110(int a1) {
    int address = 0x4b5110;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(signed int (__stdcall*sub_4B5180)(dialog *a1), sub_4B5180, 0x4b5180);
DECL_FUNC(bool (__fastcall*gluExpCmpgn_CustomCtrlID)(dialog *dlg, struct dlgEvent *evt), gluExpCmpgn_CustomCtrlID, 0x4b5220);
DECL_FUNC(void(*loadMenu_gluExpCmpgn)(void), loadMenu_gluExpCmpgn, 0x4b52a0);
DECL_FUNC(int(*sub_4B53C0)(), sub_4B53C0, 0x4b53c0);
DECL_FUNC(int(*sub_4B53D0)(), sub_4B53D0, 0x4b53d0);
DECL_FUNC(int (__thiscall*LoadPCXFromResource)(LPCSTR lpName, int, int, int), LoadPCXFromResource, 0x4b5450);
DECL_FUNC(int (__thiscall*sub_4B5500)(LPCSTR lpName, int amount, int, int), sub_4B5500, 0x4b5500);
DECL_FUNC(int (__stdcall*sub_4B55A0)(int), sub_4B55A0, 0x4b55a0);
void sub_4B5640(dialog *a1) {
    int address = 0x4b5640;
    __asm {
        mov esi, a1
        call address
    }
}
DECL_FUNC(int(*sub_4B5770)(), sub_4B5770, 0x4b5770);
DECL_FUNC(void (__fastcall*sub_4B5790)(dialog *dlg, int x, int y, rect *dst), sub_4B5790, 0x4b5790);
int sub_4B57B0(dialog *a1) {
    int address = 0x4b57b0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*gluOK_Dlg_Interact_CB)(dialog *dlg, struct dlgEvent *evt), gluOK_Dlg_Interact_CB, 0x4b5920);
DECL_FUNC(int(*sub_4B59A0)(), sub_4B59A0, 0x4b59a0);
bool sub_4B5B20(const char *a1) {
    int address = 0x4b5b20;
    bool result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*sub_4B5CC0)(), sub_4B5CC0, 0x4b5cc0);
DECL_FUNC(int(*sub_4B5E80)(), sub_4B5E80, 0x4b5e80);
DECL_FUNC(int(*sub_4B5EB0)(), sub_4B5EB0, 0x4b5eb0);
DECL_FUNC(int(*sub_4B5EC0)(), sub_4B5EC0, 0x4b5ec0);
DECL_FUNC(u32 (__thiscall*sub_4B5EF0)(dialog *this_), sub_4B5EF0, 0x4b5ef0);
DECL_FUNC(int (__stdcall*SaveGame_Constructor)(int), SaveGame_Constructor, 0x4b6010);
int sub_4B6180(dialog *a1) {
    int address = 0x4b6180;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
u32 sub_4B61C0(dialog *a1) {
    int address = 0x4b61c0;
    u32 result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*DeleteSavedGame)(), DeleteSavedGame, 0x4b62a0);
DECL_FUNC(bool (__fastcall*gluLoad_List)(dialog *dlg, dlgEvent *evt), gluLoad_List, 0x4b6340);
DECL_FUNC(bool (__fastcall*gluLoad_Main)(dialog *dlg, struct dlgEvent *evt), gluLoad_Main, 0x4b6410);
DECL_FUNC(int(*loadMenu_gluLoad)(), loadMenu_gluLoad, 0x4b6490);
DECL_FUNC(int(*sub_4B6530)(), sub_4B6530, 0x4b6530);
dialog *sub_4B6570(dialog *result) {
    int address = 0x4b6570;
    dialog * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
int sub_4B65D0(dialog *a1) {
    int address = 0x4b65d0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4B6610)(), sub_4B6610, 0x4b6610);
DECL_FUNC(int(*sub_4B6640)(), sub_4B6640, 0x4b6640);
DECL_FUNC(int(*sub_4B6650)(), sub_4B6650, 0x4b6650);
void sub_4B6660(dialog *a1) {
    int address = 0x4b6660;
    __asm {
        mov esi, a1
        call address
    }
}
DECL_FUNC(int(*sub_4B67A0)(), sub_4B67A0, 0x4b67a0);
DECL_FUNC(int(*sub_4B67D0)(), sub_4B67D0, 0x4b67d0);
DECL_FUNC(void (__fastcall*sub_4B67F0)(dialog *dlg, int x, int y, rect *dst), sub_4B67F0, 0x4b67f0);
void sub_4B6810(dialog *a1) {
    int address = 0x4b6810;
    __asm {
        mov edi, a1
        call address
    }
}
void sub_4B68C0(dialog *a1) {
    int address = 0x4b68c0;
    __asm {
        mov eax, a1
        call address
    }
}
unsigned __int8 sub_4B6930(dialog *a1) {
    int address = 0x4b6930;
    unsigned result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
void sub_4B6A20(dialog *a1) {
    int address = 0x4b6a20;
    __asm {
        mov esi, a1
        call address
    }
}
__int16 sub_4B6B10(dialog *a1, struct dlgEvent *evt) {
    int address = 0x4b6b10;
    __int16 result_;
    __asm {
        mov esi, a1
        push dword ptr evt
        call address
        mov result_, ax
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*sub_4B6C30)(dialog *dlg, dlgEvent *a2), sub_4B6C30, 0x4b6c30);
int sub_4B6C70(dialog *a1) {
    int address = 0x4b6c70;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*fn_interact)(dialog *dlg, struct dlgEvent *evt), fn_interact, 0x4b6cc0);
DECL_FUNC(bool (__fastcall*sub_4B6D60)(dialog *dlg, struct dlgEvent *evt), sub_4B6D60, 0x4b6d60);
DECL_FUNC(bool (__fastcall*sub_4B6E10)(dialog *dlg, struct dlgEvent *evt), sub_4B6E10, 0x4b6e10);
DECL_FUNC(bool (__stdcall*BWFXN_gluPEdit_MBox)(char *text, char *dest, size_t size, char *restricted), BWFXN_gluPEdit_MBox, 0x4b6e50);
DECL_FUNC(int(*BWFXN_gluPOK_MBox)(), BWFXN_gluPOK_MBox, 0x4b7180);
DECL_FUNC(int(*BWFXN_gluPOKCancel_MBox)(), BWFXN_gluPOKCancel_MBox, 0x4b73b0);
DECL_FUNC(int(*load_gluGameMode_BINDLG)(), load_gluGameMode_BINDLG, 0x4b75e0);
int loadmenu_GluHist(int a1, int a2) {
    int address = 0x4b7820;
    int result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*load_gluPOKSplitBINDLG)(), load_gluPOKSplitBINDLG, 0x4b7a70);
DECL_FUNC(int(*sub_4B7C90)(), sub_4B7C90, 0x4b7c90);
DECL_FUNC(int(*sub_4B7CB0)(), sub_4B7CB0, 0x4b7cb0);
DECL_FUNC(int(*sub_4B7D10)(), sub_4B7D10, 0x4b7d10);
DECL_FUNC(int (__thiscall*sub_4B7DA0)(dialog *this_), sub_4B7DA0, 0x4b7da0);
DECL_FUNC(int(*sub_4B7DE0)(), sub_4B7DE0, 0x4b7de0);
DECL_FUNC(int(*DestroyGameNodes)(), DestroyGameNodes, 0x4b7df0);
DECL_FUNC(int(*sub_4B7E10)(), sub_4B7E10, 0x4b7e10);
char sub_4B7E60(dialog *a1, int a2) {
    int address = 0x4b7e60;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(unsigned int (__fastcall*gluJoin_MapStatsLabel)(dialog *a1, int a2), gluJoin_MapStatsLabel, 0x4b7ef0);
DECL_FUNC(int (__stdcall*GameNode_Destructor_0)(int, int), GameNode_Destructor_0, 0x4b7f50);
DECL_FUNC(int (__stdcall*updateDLGSpeedSetting)(int), updateDLGSpeedSetting, 0x4b8090);
int sub_4B8340(dialog *a1) {
    int address = 0x4b8340;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
void **sub_4B8460(dialog *a1) {
    int address = 0x4b8460;
    void ** result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*gluJoin_Listbox)(dialog *dlg, dlgEvent *evt), gluJoin_Listbox, 0x4b84a0);
DECL_FUNC(bool (__fastcall*gluJoin_Main)(dialog *dlg, struct dlgEvent *evt), gluJoin_Main, 0x4b8590);
DECL_FUNC(int(*loadMenu_gluJoin)(), loadMenu_gluJoin, 0x4b86c0);
DECL_FUNC(int(*bootReason)(), bootReason, 0x4b8870);
DECL_FUNC(int(*sub_4B8920)(), sub_4B8920, 0x4b8920);
DECL_FUNC(int(*sub_4B8930)(), sub_4B8930, 0x4b8930);
DECL_FUNC(signed int (__fastcall*gluChat_Button)(dialog *a1, dlgEvent *a2), gluChat_Button, 0x4b8940);
DECL_FUNC(int(*sub_4B8970)(), sub_4B8970, 0x4b8970);
DECL_FUNC(int(*sub_4B8990)(), sub_4B8990, 0x4b8990);
DECL_FUNC(int(*sub_4B89A0)(), sub_4B89A0, 0x4b89a0);
void updateMinimapPreviewDisplayOffOn(int a1, dialog *a2, int a3) {
    int address = 0x4b89f0;
    __asm {
        mov ebx, a1
        mov edi, a2
        push dword ptr a3
        call address
    }
}
DECL_FUNC(int(*updatePasswordDisplay)(), updatePasswordDisplay, 0x4b8c80);
void *sub_4B8D70(dialog *a1) {
    int address = 0x4b8d70;
    void * result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
void sub_4B8D90(dialog *a1) {
    int address = 0x4b8d90;
    __asm {
        mov edi, a1
        call address
    }
}
char gluChat_Textbox_onCharEvent(dlgEvent *a1, dialog *a2) {
    int address = 0x4b8de0;
    char result_;
    __asm {
        mov ebx, a1
        mov edi, a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(unsigned int (__fastcall*gluChat_GameStatsLabel)(dialog *dlg, dlgEvent *evt), gluChat_GameStatsLabel, 0x4b8e70);
DECL_FUNC(bool (__fastcall*gluChat_Textbox_Interact)(dialog *a1, dlgEvent *a2), gluChat_Textbox_Interact, 0x4b8ed0);
DECL_FUNC(int (__stdcall*sub_4B8F10)(int), sub_4B8F10, 0x4b8f10);
void gluChat_Listbox_Create(dialog *a1) {
    int address = 0x4b9170;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int (__stdcall*printLobbyString)(char *source), printLobbyString, 0x4b91c0);
DECL_FUNC(int(*sub_4B92F0)(), sub_4B92F0, 0x4b92f0);
DECL_FUNC(int (__stdcall*DLG_GlueCountdown)(char), DLG_GlueCountdown, 0x4b9300);
DECL_FUNC(int (__stdcall*sub_4B9480)(int), sub_4B9480, 0x4b9480);
DECL_FUNC(bool (__fastcall*gluChat_Listbox_Interact)(dialog *dlg, dlgEvent *evt), gluChat_Listbox_Interact, 0x4b96a0);
DECL_FUNC(int(*BootPlayerMessageBox)(), BootPlayerMessageBox, 0x4b9730);
int gluChat_init(dialog *a1) {
    int address = 0x4b9770;
    int result_;
    __asm {
        mov edi, a1
        call address
        mov result_, eax
    }
    return result_;
}
int gluChat_CustomCtrlID(dialog *a1) {
    int address = 0x4b9810;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
int getErrorStringPair(GluAllTblEntry a1, int a2) {
    int address = 0x4b9830;
    int result_;
    __asm {
        mov ax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*SendLobbyMessage)(), SendLobbyMessage, 0x4b98d0);
signed int gluChat_controlActivation(signed int a1, dialog *a2) {
    int address = 0x4b9910;
    signed result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*MinimapPreviewProc)(), MinimapPreviewProc, 0x4b9a50);
DECL_FUNC(void (__stdcall*gluChat_HoverMinimapPreview)(dialog *a1), gluChat_HoverMinimapPreview, 0x4b9ac0);
DECL_FUNC(int(*sub_4B9B10)(), sub_4B9B10, 0x4b9b10);
DECL_FUNC(int (__stdcall*sub_4B9BF0)(int), sub_4B9BF0, 0x4b9bf0);
DECL_FUNC(bool (__fastcall*gluChat_Main)(dialog *dlg, struct dlgEvent *evt), gluChat_Main, 0x4b9c20);
DECL_FUNC(int(*loadMenu_gluChat)(), loadMenu_gluChat, 0x4b9e70);
DECL_FUNC(int(*sub_4BA0A0)(), sub_4BA0A0, 0x4ba0a0);
DECL_FUNC(int(*sub_4BA0C0)(), sub_4BA0C0, 0x4ba0c0);
DECL_FUNC(int(*get_tFontGam_PCX_0)(), get_tFontGam_PCX_0, 0x4ba120);
DECL_FUNC(int(*get_tFontGam_PCX)(), get_tFontGam_PCX, 0x4ba160);
DECL_FUNC(int(*DlgPszTextMemFree)(), DlgPszTextMemFree, 0x4ba1a0);
DECL_FUNC(int (__stdcall*sub_4BA1F0)(int amount), sub_4BA1F0, 0x4ba1f0);
DECL_FUNC(int(*sub_4BA240)(), sub_4BA240, 0x4ba240);
DECL_FUNC(int(*sub_4BA290)(), sub_4BA290, 0x4ba290);
DECL_FUNC(int(*sub_4BA320)(), sub_4BA320, 0x4ba320);
DECL_FUNC(int(*DestroyProviderList)(), DestroyProviderList, 0x4ba330);
void sub_4BA370(dialog *a1, size_t a2, __int16 a3, const char *a4) {
    int address = 0x4ba370;
    __asm {
        mov eax, a1
        mov edx, a2
        mov cx, a3
        mov edi, a4
        call address
    }
}
DECL_FUNC(int (__stdcall*sub_4BA3C0)(int, int, int), sub_4BA3C0, 0x4ba3c0);
unsigned __int8 ListBNGateways(dialog *a1) {
    int address = 0x4ba530;
    unsigned result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4BA600)(), sub_4BA600, 0x4ba600);
DECL_FUNC(int (__stdcall*Provider_Constructor)(int, char *, char *source, int), Provider_Constructor, 0x4ba610);
DECL_FUNC(bool (__fastcall*GatewayListProc)(dialog *dlg, dlgEvent *evt), GatewayListProc, 0x4ba740);
void selConn_connectionList_setSelection(dialog *a1) {
    int address = 0x4ba7e0;
    __asm {
        mov ebx, a1
        call address
    }
}
DECL_FUNC(int(*sub_4BAA80)(), sub_4BAA80, 0x4baa80);
signed int getGameList(dialog *dlg) {
    int address = 0x4bab10;
    signed result_;
    __asm {
        mov eax, dlg
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*selConn_connectionList_Create)(int), selConn_connectionList_Create, 0x4bacb0);
DECL_FUNC(bool (__fastcall*selConn_ConnectionList_Interact)(dialog *dlg, dlgEvent *evt), selConn_ConnectionList_Interact, 0x4bad10);
int ConnSel_InitChildren(dialog *a1) {
    int address = 0x4bad70;
    int result_;
    __asm {
        mov edi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*_BeginBNET)(), _BeginBNET, 0x4bade0);
DECL_FUNC(bool (__fastcall*ConnSel_Interact)(dialog *dlg, struct dlgEvent *evt), ConnSel_Interact, 0x4bae20);
DECL_FUNC(int(*loadMenu_gluConn)(), loadMenu_gluConn, 0x4baf30);
DECL_FUNC(int(*sub_4BB0A0)(), sub_4BB0A0, 0x4bb0a0);
char packetErrHandle(DWORD a1, int a2, char *a3, int a4, int a5) {
    int address = 0x4bb0b0;
    char result_;
    __asm {
        mov eax, a1
        push dword ptr a5
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*sub_4BB110)(), sub_4BB110, 0x4bb110);
DECL_FUNC(int (__stdcall*sub_4BB170)(int, int), sub_4BB170, 0x4bb170);
DECL_FUNC(int (__thiscall*sub_4BB1A0)(char *string, int), sub_4BB1A0, 0x4bb1a0);
DECL_FUNC(int (__fastcall*sub_4BB260)(BYTE **data, int *senderplayerid), sub_4BB260, 0x4bb260);
DECL_FUNC(int (__thiscall*sub_4BB2A0)(char *data), sub_4BB2A0, 0x4bb2a0);
DECL_FUNC(int (__fastcall*sendMessage_Fast)(char *data, unsigned int playerID), sendMessage_Fast, 0x4bb2d0);
char doNetTBLError(int a1, const CHAR *error_message, char *file_name, int a4) {
    int address = 0x4bb300;
    char result_;
    __asm {
        mov eax, a1
        mov edx, error_message
        mov ecx, file_name
        push dword ptr a4
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(char (__fastcall*BigPacketError)(int a1, const CHAR *a2, char *a3, int a4, int a5), BigPacketError, 0x4bb430);
DECL_FUNC(int(*sub_4BB4B0)(), sub_4BB4B0, 0x4bb4b0);
DECL_FUNC(int (__fastcall*ReceiveTurns)(unsigned int *arraydatabytes, char **arraydata, int a1, int arraysize), ReceiveTurns, 0x4bb530);
DECL_FUNC(int(*CreateSoundBuffer)(), CreateSoundBuffer, 0x4bb5a0);
signed int SetCooperativeLevel(HWND a1, AudioVideoInitializationError *a2) {
    int address = 0x4bb600;
    signed result_;
    __asm {
        mov edi, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
signed int DSoundCreate(AudioVideoInitializationError *a1) {
    int address = 0x4bb640;
    signed result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4BB6E0)(), sub_4BB6E0, 0x4bb6e0);
int sub_4BB720(SfxData a1) {
    int address = 0x4bb720;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4BB730)(), sub_4BB730, 0x4bb730);
DECL_FUNC(int (__stdcall*sub_4BB740)(char), sub_4BB740, 0x4bb740);
unsigned int sub_4BB890(struct_5 *a1) {
    int address = 0x4bb890;
    unsigned result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
void sub_4BB8E0(SfxData a1) {
    int address = 0x4bb8e0;
    __asm {
        mov ebx, a1
        call address
    }
}
DECL_FUNC(int(*sub_4BB990)(), sub_4BB990, 0x4bb990);
DECL_FUNC(int (__stdcall*parseSection)(int), parseSection, 0x4bb9b0);
DECL_FUNC(int(*sub_4BBA00)(), sub_4BBA00, 0x4bba00);
DECL_FUNC(int (__stdcall*sub_4BBA20)(int), sub_4BBA20, 0x4bba20);
DECL_FUNC(void (__thiscall*sfxdata_cleanup)(bool exit_code), sfxdata_cleanup, 0x4bba50);
DECL_FUNC(int(*sub_4BBA90)(), sub_4BBA90, 0x4bba90);
signed int sub_4BBAF0(struct_5 *a1, int a2, int a3, SfxData sfx_id, UnitType unit_type, char sfxdata_flags_2, char a7, char sfxdata_flags_1) {
    int address = 0x4bbaf0;
    signed result_;
    __asm {
        mov ebx, a1
        push dword ptr sfxdata_flags_1
        push dword ptr a7
        push dword ptr sfxdata_flags_2
        push dword ptr unit_type
        push dword ptr sfx_id
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4BBC00)(), sub_4BBC00, 0x4bbc00);
DECL_FUNC(int(*sub_4BBCF0)(), sub_4BBCF0, 0x4bbcf0);
DECL_FUNC(int(*parseWaveFile)(), parseWaveFile, 0x4bbd80);
DECL_FUNC(int(*sub_4BBE40)(), sub_4BBE40, 0x4bbe40);
DECL_FUNC(int(*PlayBriefingWAVBegin)(), PlayBriefingWAVBegin, 0x4bbe50);
signed int sub_4BBEB0(SfxData a1, int a2, int a3, UnitType a4) {
    int address = 0x4bbeb0;
    signed result_;
    __asm {
        mov esi, a1
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(void (__cdecl*stopSounds)(), stopSounds, 0x4bbf50);
signed int PlayTransmissionLocation(SfxData a1, int a2, int a3, CUnit *a4) {
    int address = 0x4bbfd0;
    signed result_;
    __asm {
        mov eax, a1
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(void(*stopAllSound)(void), stopAllSound, 0x4bc100);
DECL_FUNC(int(*muteSfx)(), muteSfx, 0x4bc110);
DECL_FUNC(void (__cdecl*BWFXN_DSoundDestroy)(), BWFXN_DSoundDestroy, 0x4bc180);
DECL_FUNC(signed int (__stdcall*_PlayTransmissionLocation)(SfxData a1, int a2, int a3, CUnit *a4), _PlayTransmissionLocation, 0x4bc270);
DECL_FUNC(int (__stdcall*playSoundId)(int), playSoundId, 0x4bc2c0);
void j_DLGMusicFade(int a1) {
    int address = 0x4bc310;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int(*muteBgm)(), muteBgm, 0x4bc320);
DECL_FUNC(int(*sub_4BC410)(), sub_4BC410, 0x4bc410);
DECL_FUNC(int(*initVolume)(), initVolume, 0x4bc450);
void PlayWavByFilename_maybe(char *a1) {
    int address = 0x4bc490;
    __asm {
        mov eax, a1
        call address
    }
}
HANDLE sub_4BC5E0(SfxData a1) {
    int address = 0x4bc5e0;
    HANDLE result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*DSoundThread)(int), DSoundThread, 0x4bc620);
IDirectSoundBuffer *LoadSoundProc(char *a1, int a2, struct_5 *a3) {
    int address = 0x4bc8c0;
    IDirectSoundBuffer * result_;
    __asm {
        mov eax, a1
        mov edi, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4BC9F0)(), sub_4BC9F0, 0x4bc9f0);
IDirectSoundBuffer *sub_4BCA30(SfxData a1, struct_5 *a2) {
    int address = 0x4bca30;
    IDirectSoundBuffer * result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
void sub_4BCA80(SfxData a1) {
    int address = 0x4bca80;
    __asm {
        mov edi, a1
        call address
    }
}
DECL_FUNC(void (__cdecl*LoadBtnSfxFile)(), LoadBtnSfxFile, 0x4bcb20);
signed int DSoundInit(AudioVideoInitializationError *a1, HWND a2) {
    int address = 0x4bcb70;
    signed result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
void playsound_init_UI(int a1) {
    int address = 0x4bccf0;
    __asm {
        mov eax, a1
        call address
    }
}
void sub_4BCD70(int *a1) {
    int address = 0x4bcd70;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int(*blitTileCacheOnRefresh)(), blitTileCacheOnRefresh, 0x4bcdc0);
DECL_FUNC(int(*sub_4BCEA0)(), sub_4BCEA0, 0x4bcea0);
DECL_FUNC(int(*sub_4BCF50)(), sub_4BCF50, 0x4bcf50);
DECL_FUNC(int(*nullsub_55)(), nullsub_55, 0x4bd0b0);
DECL_FUNC(int(*get_chk_String)(), get_chk_String, 0x4bd0c0);
unsigned int GetGroundHeightAtPos(signed int x, signed int y) {
    int address = 0x4bd0f0;
    unsigned result_;
    __asm {
        mov ecx, x
        mov eax, y
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*DestroyMapData)(), DestroyMapData, 0x4bd190);
DECL_FUNC(int(*RefreshLayer5)(), RefreshLayer5, 0x4bd350);
DECL_FUNC(int(*sub_4BD3A0)(), sub_4BD3A0, 0x4bd3a0);
DECL_FUNC(int(*InitialSetScreenToStartLocation)(), InitialSetScreenToStartLocation, 0x4bd3f0);
DECL_FUNC(int(*sub_4BD4B0)(), sub_4BD4B0, 0x4bd4b0);
DECL_FUNC(void (__thiscall*input_targetOrder_LeftMouseClick)(dlgEvent *), input_targetOrder_LeftMouseClick, 0x4bd500);
DECL_FUNC(void (__stdcall*DrawGameProc)(Bitmap *, bounds *), DrawGameProc, 0x4bd580);
DECL_FUNC(int(*InitializeGameLayer)(), InitializeGameLayer, 0x4bd630);
DECL_FUNC(int(*initMapData)(), initMapData, 0x4bd6f0);
DECL_FUNC(int(*sub_4BDB00)(), sub_4BDB00, 0x4bdb00);
DECL_FUNC(int (__thiscall*sub_4BDB30)(int *this_, int a2), sub_4BDB30, 0x4bdb30);
DECL_FUNC(int(*sub_4BDD40)(), sub_4BDD40, 0x4bdd40);
DECL_FUNC(int(*sub_4BDD60)(), sub_4BDD60, 0x4bdd60);
DECL_FUNC(void (__stdcall*sub_4BDDD0)(char *tileset_name), sub_4BDDD0, 0x4bddd0);
DECL_FUNC(void (__stdcall*loadColorShiftTilesetImages)(char *tileset_name), loadColorShiftTilesetImages, 0x4bde60);
DECL_FUNC(int(*sub_4BDF70)(), sub_4BDF70, 0x4bdf70);
DECL_FUNC(int(*sub_4BDF80)(), sub_4BDF80, 0x4bdf80);
DECL_FUNC(void (__stdcall*cursorUpdateProc)(Bitmap *, bounds *), cursorUpdateProc, 0x4bdfa0);
DECL_FUNC(int(*cursorRefresh)(), cursorRefresh, 0x4be060);
DECL_FUNC(int(*RefreshCursor_0)(), RefreshCursor_0, 0x4be0b0);
DECL_FUNC(int(*sub_4BE100)(), sub_4BE100, 0x4be100);
DECL_FUNC(int(*drawCursor)(), drawCursor, 0x4be120);
DECL_FUNC(int (__stdcall*updateCursorImage)(int), updateCursorImage, 0x4be1a0);
DECL_FUNC(int(*sub_4BE1E0)(), sub_4BE1E0, 0x4be1e0);
DECL_FUNC(int(*sub_4BE200)(), sub_4BE200, 0x4be200);
DECL_FUNC(int(*sub_4BE240)(), sub_4BE240, 0x4be240);
DECL_FUNC(int (__stdcall*statLb_Static_Update3)(int, int), statLb_Static_Update3, 0x4be280);
DECL_FUNC(int(*sub_4BE330)(), sub_4BE330, 0x4be330);
DECL_FUNC(int (__stdcall*StatLb_Static_Update)(int, int), StatLb_Static_Update, 0x4be370);
DECL_FUNC(int(*sub_4BE3B0)(), sub_4BE3B0, 0x4be3b0);
DECL_FUNC(int (__stdcall*statLb_Static_Update2)(int, int), statLb_Static_Update2, 0x4be3d0);
void sub_4BE430(dialog *a1, signed int a2) {
    int address = 0x4be430;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
    }
}
DECL_FUNC(void (__thiscall*sub_4BE5B0)(dialog *this_), sub_4BE5B0, 0x4be5b0);
DECL_FUNC(void (__thiscall*sub_4BE5D0)(dialog *this_), sub_4BE5D0, 0x4be5d0);
DECL_FUNC(void (__thiscall*sub_4BE5F0)(dialog *this_), sub_4BE5F0, 0x4be5f0);
DECL_FUNC(int(*sub_4BE610)(), sub_4BE610, 0x4be610);
DECL_FUNC(char (__stdcall*sub_4BE670)(dialog *a1), sub_4BE670, 0x4be670);
DECL_FUNC(int (__stdcall*hideLeaderboard)(dialog *a1), hideLeaderboard, 0x4be860);
DECL_FUNC(int(*hideLeaderboardCmd)(), hideLeaderboardCmd, 0x4beb40);
DECL_FUNC(int(*leaderboardUpdateProc)(), leaderboardUpdateProc, 0x4beb90);
DECL_FUNC(int(*sub_4BEBC0)(), sub_4BEBC0, 0x4bebc0);
DECL_FUNC(int(*ToggleLeaderboardList)(), ToggleLeaderboardList, 0x4bec00);
DECL_FUNC(int (__stdcall*statlb_Dlg_Create)(int), statlb_Dlg_Create, 0x4bec40);
DECL_FUNC(bool (__fastcall*statlb_Dlg_Interact)(dialog *dlg, dlgEvent *evt), statlb_Dlg_Interact, 0x4becf0);
DECL_FUNC(int(*load_statlb)(), load_statlb, 0x4bed70);
DECL_FUNC(int(*sub_4BEF20)(), sub_4BEF20, 0x4bef20);
signed int LoadFileToSBigBuf(char *filename, int a2) {
    int address = 0x4bef80;
    signed result_;
    __asm {
        mov eax, filename
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__thiscall*sub_4BF370)(FILE *, int, int), sub_4BF370, 0x4bf370);
DECL_FUNC(int (__fastcall*LoadMap)(int loader_index_), LoadMap, 0x4bf520);
DECL_FUNC(int (__stdcall*ReadMapData)(char *source, MapChunks *a4, bool is_capmaign), ReadMapData, 0x4bf5d0);
BOOL sub_4BF780(MapChunks *a1) {
    int address = 0x4bf780;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*CMDRECV_MinimapPing)(), CMDRECV_MinimapPing, 0x4bf7a0);
DECL_FUNC(int(*sub_4BF7F0)(), sub_4BF7F0, 0x4bf7f0);
DECL_FUNC(int(*nullsub_56)(), nullsub_56, 0x4bf810);
DECL_FUNC(int(*CMDRECV_VoiceEnable)(), CMDRECV_VoiceEnable, 0x4bf820);
DECL_FUNC(int(*sub_4BF870)(), sub_4BF870, 0x4bf870);
DECL_FUNC(int(*sub_4BF8A0)(), sub_4BF8A0, 0x4bf8a0);
DECL_FUNC(int(*sub_4BF960)(), sub_4BF960, 0x4bf960);
BOOL PositionIsInsideMap(Position *a1) {
    int address = 0x4bf970;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4BF9A0)(), sub_4BF9A0, 0x4bf9a0);
DECL_FUNC(int(*CMDRECV_Vision)(), CMDRECV_Vision, 0x4bf9c0);
DECL_FUNC(int(*sub_4BFA40)(), sub_4BFA40, 0x4bfa40);
DECL_FUNC(int(*nullsub_57)(), nullsub_57, 0x4bfa50);
DECL_FUNC(int(*sub_4BFA60)(), sub_4BFA60, 0x4bfa60);
int templarMergePartner(int a1, CUnit *a2, int a3) {
    int address = 0x4bfa80;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*CMDRECV_restartGame)(), CMDRECV_restartGame, 0x4bfb10);
DECL_FUNC(int (__stdcall*CMDRECV_ShiftDeselect)(int), CMDRECV_ShiftDeselect, 0x4bfb40);
DECL_FUNC(int (__stdcall*sub_4BFC50)(__int16, __int16), sub_4BFC50, 0x4bfc50);
DECL_FUNC(int(*sub_4BFC80)(), sub_4BFC80, 0x4bfc80);
DECL_FUNC(int(*sub_4BFCB0)(), sub_4BFCB0, 0x4bfcb0);
DECL_FUNC(int(*CMDRECV_CancelNuke)(), CMDRECV_CancelNuke, 0x4bfcd0);
DECL_FUNC(int(*sub_4BFD30)(), sub_4BFD30, 0x4bfd30);
DECL_FUNC(int(*sub_4BFD50)(), sub_4BFD50, 0x4bfd50);
DECL_FUNC(int(*sub_4BFD70)(), sub_4BFD70, 0x4bfd70);
DECL_FUNC(int(*sub_4BFD90)(), sub_4BFD90, 0x4bfd90);
DECL_FUNC(int(*CMDACT_Unload)(), CMDACT_Unload, 0x4bfdb0);
DECL_FUNC(int(*sub_4BFE10)(), sub_4BFE10, 0x4bfe10);
DECL_FUNC(int(*sub_4BFE30)(), sub_4BFE30, 0x4bfe30);
DECL_FUNC(int(*sub_4BFE50)(), sub_4BFE50, 0x4bfe50);
DECL_FUNC(int(*sub_4BFE70)(), sub_4BFE70, 0x4bfe70);
DECL_FUNC(int(*sub_4BFE90)(), sub_4BFE90, 0x4bfe90);
DECL_FUNC(int(*sub_4BFEB0)(), sub_4BFEB0, 0x4bfeb0);
DECL_FUNC(int(*sub_4BFED0)(), sub_4BFED0, 0x4bfed0);
DECL_FUNC(int(*sub_4BFEF0)(), sub_4BFEF0, 0x4bfef0);
DECL_FUNC(int(*sub_4BFF10)(), sub_4BFF10, 0x4bff10);
DECL_FUNC(int(*CMDRECV_CancelAddon)(), CMDRECV_CancelAddon, 0x4bff30);
DECL_FUNC(int(*sub_4BFFA0)(), sub_4BFFA0, 0x4bffa0);
DECL_FUNC(int(*CMDRECV_CancelUpgrade)(), CMDRECV_CancelUpgrade, 0x4bffc0);
DECL_FUNC(int(*sub_4C0030)(), sub_4C0030, 0x4c0030);
DECL_FUNC(int(*sub_4C0050)(), sub_4C0050, 0x4c0050);
DECL_FUNC(void(*CMDRECV_CancelResearch)(void), CMDRECV_CancelResearch, 0x4c0070);
DECL_FUNC(int(*sub_4C00C0)(), sub_4C00C0, 0x4c00c0);
DECL_FUNC(int(*sub_4C00E0)(), sub_4C00E0, 0x4c00e0);
DECL_FUNC(int (__stdcall*CMDRECV_CancelTrain)(int), CMDRECV_CancelTrain, 0x4c0100);
DECL_FUNC(int(*sub_4C01A0)(), sub_4C01A0, 0x4c01a0);
DECL_FUNC(int(*sub_4C01C0)(), sub_4C01C0, 0x4c01c0);
DECL_FUNC(int(*sub_4C01E0)(), sub_4C01E0, 0x4c01e0);
DECL_FUNC(int(*sub_4C0200)(), sub_4C0200, 0x4c0200);
DECL_FUNC(int(*sub_4C0220)(), sub_4C0220, 0x4c0220);
DECL_FUNC(int(*sub_4C0240)(), sub_4C0240, 0x4c0240);
DECL_FUNC(int(*sub_4C0260)(), sub_4C0260, 0x4c0260);
DECL_FUNC(int(*sub_4C0280)(), sub_4C0280, 0x4c0280);
DECL_FUNC(int(*sub_4C02A0)(), sub_4C02A0, 0x4c02a0);
DECL_FUNC(int(*sub_4C02C0)(), sub_4C02C0, 0x4c02c0);
DECL_FUNC(int (__stdcall*CMDACT_TargetOrder)(__int16, __int16, __int16, char), CMDACT_TargetOrder, 0x4c0300);
DECL_FUNC(int (__stdcall*CMDACT_RightClickOrder)(__int16, __int16, __int16, char), CMDACT_RightClickOrder, 0x4c0380);
DECL_FUNC(int(*CMDACT_UseCheat)(), CMDACT_UseCheat, 0x4c0400);
DECL_FUNC(int(*CMDACT_ResumeGame)(), CMDACT_ResumeGame, 0x4c0420);
DECL_FUNC(int(*CMDACT_PauseGame)(), CMDACT_PauseGame, 0x4c0450);
DECL_FUNC(int (__stdcall*CMDACT_ChangeGameSpeed)(char), CMDACT_ChangeGameSpeed, 0x4c0480);
DECL_FUNC(int(*sub_4C04B0)(), sub_4C04B0, 0x4c04b0);
CUnit *StopAttackingAllies_maybe(int player_id) {
    int address = 0x4c04d0;
    CUnit * result_;
    __asm {
        mov esi, player_id
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4C0540)(), sub_4C0540, 0x4c0540);
DECL_FUNC(int (__stdcall*sub_4C0560)(int), sub_4C0560, 0x4c0560);
DECL_FUNC(int(*sub_4C0590)(), sub_4C0590, 0x4c0590);
DECL_FUNC(int(*sub_4C05A0)(), sub_4C05A0, 0x4c05a0);
DECL_FUNC(int (__thiscall*sub_4C05C0)(char *source), sub_4C05C0, 0x4c05c0);
DECL_FUNC(int (__stdcall*CMDACT_SaveGame)(char *source), CMDACT_SaveGame, 0x4c0600);
DECL_FUNC(int(*CMDRECV_Decloak)(), CMDRECV_Decloak, 0x4c0660);
DECL_FUNC(int(*CMRECV_Cloak)(), CMRECV_Cloak, 0x4c0720);
DECL_FUNC(int (__stdcall*CMDACT_HotkeyUnit)(char, int, char), CMDACT_HotkeyUnit, 0x4c07b0);
DECL_FUNC(int (__stdcall*selectUnits)(int count, CUnit **unitsToSelect), selectUnits, 0x4c0860);
DECL_FUNC(int(*CMDRECV_UseCheat)(), CMDRECV_UseCheat, 0x4c0ad0);
DECL_FUNC(int(*CMDRECV_ResumeGame)(), CMDRECV_ResumeGame, 0x4c0b00);
DECL_FUNC(int(*CMDRECV_PauseGame)(), CMDRECV_PauseGame, 0x4c0bc0);
DECL_FUNC(int(*CMDRECV_MergeDarkArchon)(), CMDRECV_MergeDarkArchon, 0x4c0cd0);
DECL_FUNC(int(*CMDRECV_MergeArchon)(), CMDRECV_MergeArchon, 0x4c0e90);
DECL_FUNC(int(*CMDRECV_Nothing)(), CMDRECV_Nothing, 0x4c1050);
DECL_FUNC(int(*CMDRECV_ReaverStop)(), CMDRECV_ReaverStop, 0x4c1240);
DECL_FUNC(int(*CMDRECV_CarrierStop)(), CMDRECV_CarrierStop, 0x4c1430);
DECL_FUNC(int (__stdcall*CMDRECV_Liftoff)(int), CMDRECV_Liftoff, 0x4c1620);
DECL_FUNC(int(*CMDRECV_TrainFighter)(), CMDRECV_TrainFighter, 0x4c1800);
DECL_FUNC(int(*CMDRECV_BuildingMorph)(), CMDRECV_BuildingMorph, 0x4c1910);
DECL_FUNC(int (__stdcall*CMDRECV_UnitMorph)(int), CMDRECV_UnitMorph, 0x4c1990);
DECL_FUNC(int(*CMDRECV_Unburrow)(), CMDRECV_Unburrow, 0x4c1ac0);
DECL_FUNC(int (__stdcall*CMDRECV_Upgrade)(int), CMDRECV_Upgrade, 0x4c1b20);
DECL_FUNC(int (__stdcall*CMDRECV_Research)(int), CMDRECV_Research, 0x4c1ba0);
DECL_FUNC(int(*CMDRECV_Train)(), CMDRECV_Train, 0x4c1c20);
DECL_FUNC(int(*sub_4C1CA0)(), sub_4C1CA0, 0x4c1ca0);
DECL_FUNC(int(*CMDRECV_UnloadAll)(), CMDRECV_UnloadAll, 0x4c1cc0);
DECL_FUNC(int (__stdcall*CMDRECV_Siege)(int), CMDRECV_Siege, 0x4c1e80);
DECL_FUNC(int (__stdcall*CMDRECV_Unsiege)(int), CMDRECV_Unsiege, 0x4c1f10);
DECL_FUNC(int (__stdcall*CMDRECV_Burrow)(int), CMDRECV_Burrow, 0x4c1fa0);
DECL_FUNC(int(*CMRECV_ReturnCargo)(), CMRECV_ReturnCargo, 0x4c2040);
DECL_FUNC(int(*CMDRECV_HoldPosition)(), CMDRECV_HoldPosition, 0x4c20c0);
DECL_FUNC(int(*CMDRECV_Stop)(), CMDRECV_Stop, 0x4c2190);
DECL_FUNC(int(*CMDRECV_TargetCmd)(), CMDRECV_TargetCmd, 0x4c2320);
void CMDRECV_RightClick(int result) {
    int address = 0x4c2370;
    __asm {
        mov eax, result
        call address
    }
}
DECL_FUNC(int(*CMDRECV_Build)(), CMDRECV_Build, 0x4c23c0);
DECL_FUNC(int(*CMDRECV_Unload)(), CMDRECV_Unload, 0x4c24f0);
DECL_FUNC(int (__stdcall*CMDRECV_ShiftSelect)(int), CMDRECV_ShiftSelect, 0x4c2560);
DECL_FUNC(int (__stdcall*CMDRECV_Select)(int), CMDRECV_Select, 0x4c2750);
DECL_FUNC(int(*CMDRECV_Hotkey)(), CMDRECV_Hotkey, 0x4c2870);
DECL_FUNC(int (__stdcall*CMDRECV_Ally)(int), CMDRECV_Ally, 0x4c28a0);
DECL_FUNC(int(*CMDRECV_SaveGame)(), CMDRECV_SaveGame, 0x4c2910);
DECL_FUNC(int (__stdcall*CMDRECV_LeaveGame)(int), CMDRECV_LeaveGame, 0x4c2e90);
DECL_FUNC(int(*CMDRECV_CancelUnitMorph)(), CMDRECV_CancelUnitMorph, 0x4c2ec0);
DECL_FUNC(int(*CMDRECV_CancelConstruction)(), CMDRECV_CancelConstruction, 0x4c2ef0);
DECL_FUNC(int(*CMDRECV_StimPack)(), CMDRECV_StimPack, 0x4c2f30);
DECL_FUNC(int (__stdcall*_CRC32)(char), _CRC32, 0x4c3010);
DECL_FUNC(int (__cdecl*write_buf)(int, int, int), write_buf, 0x4c3040);
DECL_FUNC(int (__cdecl*read_buf)(int, int, int), read_buf, 0x4c3090);
DECL_FUNC(int(*decompressCleanup)(), decompressCleanup, 0x4c30d0);
DECL_FUNC(int(*sub_4C3130)(), sub_4C3130, 0x4c3130);
DECL_FUNC(int (__stdcall*DecompressData)(int, int), DecompressData, 0x4c3190);
DECL_FUNC(int(*CompressOutput)(), CompressOutput, 0x4c3200);
DECL_FUNC(int (__stdcall*DecompressRead)(void *, int, FILE *), DecompressRead, 0x4c3280);
int CompressWrite(_DWORD a1, int a2, FILE *a3) {
    int address = 0x4c3450;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4C35C0)(), sub_4C35C0, 0x4c35c0);
int BINDLG_BlitSurface(dialog *a1) {
    int address = 0x4c35f0;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4C3690)(), sub_4C3690, 0x4c3690);
DECL_FUNC(int(*RefreshConsole)(), RefreshConsole, 0x4c36c0);
DECL_FUNC(char *(__fastcall*TblGetString)(__int16 index), TblGetString, 0x4c36f0);
DECL_FUNC(int(*sub_4C3720)(), sub_4C3720, 0x4c3720);
DECL_FUNC(int(*sub_4C3750)(), sub_4C3750, 0x4c3750);
DECL_FUNC(int(*destroyGameHUD)(), destroyGameHUD, 0x4c3780);
DECL_FUNC(int(*updateSelectedUnitData)(), updateSelectedUnitData, 0x4c38b0);
DECL_FUNC(int(*sub_4C3930)(), sub_4C3930, 0x4c3930);
DECL_FUNC(int(*LoadConsoleImage)(), LoadConsoleImage, 0x4c3950);
DECL_FUNC(int(*load_Stat_txt)(), load_Stat_txt, 0x4c3a20);
DECL_FUNC(int(*sub_4C3B10)(), sub_4C3B10, 0x4c3b10);
DECL_FUNC(signed int (__fastcall*updateBuildingLandUnitSelection)(int a1, CUnit *a2), updateBuildingLandUnitSelection, 0x4c3b40);
DECL_FUNC(int(*setup_HUD)(), setup_HUD, 0x4c3bb0);
DECL_FUNC(int(*sub_4C3C80)(), sub_4C3C80, 0x4c3c80);
DECL_FUNC(void (__stdcall*eventSetPlayerFlag)(s_evt *evt), eventSetPlayerFlag, 0x4c3c90);
DECL_FUNC(int(*clearPlayerFlags)(), clearPlayerFlags, 0x4c3cd0);
DECL_FUNC(int(*nullsub_58)(), nullsub_58, 0x4c3d00);
DECL_FUNC(int(*nullsub_59)(), nullsub_59, 0x4c3d10);
DECL_FUNC(int (__stdcall*leaveGame)(int), leaveGame, 0x4c3d20);
DECL_FUNC(int (__thiscall*sub_4C3DA0)(int playerid), sub_4C3DA0, 0x4c3da0);
DECL_FUNC(int(*getActivePlayerId)(), getActivePlayerId, 0x4c3db0);
DECL_FUNC(int(*sub_4C3EA0)(), sub_4C3EA0, 0x4c3ea0);
DECL_FUNC(int(*sub_4C3EB0)(), sub_4C3EB0, 0x4c3eb0);
DECL_FUNC(int(*sub_4C3ED0)(), sub_4C3ED0, 0x4c3ed0);
DECL_FUNC(int(*GetActivePlayerCount)(), GetActivePlayerCount, 0x4c40f0);
DECL_FUNC(int(*sub_4C4140)(), sub_4C4140, 0x4c4140);
DECL_FUNC(int (__stdcall*UpdateGameMode)(int), UpdateGameMode, 0x4c4160);
DECL_FUNC(int(*sub_4C41E0)(), sub_4C41E0, 0x4c41e0);
DECL_FUNC(int(*isMultiplayerModeBNET)(), isMultiplayerModeBNET, 0x4c4200);
DECL_FUNC(int (__stdcall*ApplyGameVictoryStatus)(int), ApplyGameVictoryStatus, 0x4c4220);
DECL_FUNC(void (__thiscall*leaveOnQuit)(bool exit_code), leaveOnQuit, 0x4c4680);
DECL_FUNC(int(*RECV_MakeGamePublic)(), RECV_MakeGamePublic, 0x4c46e0);
DECL_FUNC(int(*ReportGameResult)(), ReportGameResult, 0x4c4790);
DECL_FUNC(int(*sub_4C4870)(), sub_4C4870, 0x4c4870);
DECL_FUNC(int (__thiscall*sub_4C4950)(DWORD flags), sub_4C4950, 0x4c4950);
DECL_FUNC(int (__stdcall*eventPlayerDropped)(int), eventPlayerDropped, 0x4c4980);
DECL_FUNC(int (__stdcall*sub_4C4A80)(int, int), sub_4C4A80, 0x4c4a80);
DECL_FUNC(int(*userHasMap)(), userHasMap, 0x4c4c50);
DECL_FUNC(int (__stdcall*playerLeaveGame)(int, int, int), playerLeaveGame, 0x4c4d60);
DECL_FUNC(int(*sub_4C4F80)(), sub_4C4F80, 0x4c4f80);
DECL_FUNC(int(*sub_4C4FA0)(), sub_4C4FA0, 0x4c4fa0);
DECL_FUNC(int (__fastcall*TriggerAction_EnableDebugMode)(Action *), TriggerAction_EnableDebugMode, 0x4c5000);
DECL_FUNC(int (__fastcall*TriggerAction_DisableDebugMode)(Action *), TriggerAction_DisableDebugMode, 0x4c5020);
DECL_FUNC(int(*sub_4C5040)(), sub_4C5040, 0x4c5040);
DECL_FUNC(int(*sub_4C5060)(), sub_4C5060, 0x4c5060);
DECL_FUNC(int (__fastcall*TriggerAction_Draw)(Action *), TriggerAction_Draw, 0x4c5070);
DECL_FUNC(int (__fastcall*TriggerAction_UnpauseTimer)(Action *), TriggerAction_UnpauseTimer, 0x4c50c0);
DECL_FUNC(int (__fastcall*TriggerAction_PauseTimer)(Action *), TriggerAction_PauseTimer, 0x4c50d0);
DECL_FUNC(int (__fastcall*TriggerAction_SetNextScenario)(Action *), TriggerAction_SetNextScenario, 0x4c50e0);
DECL_FUNC(int (__fastcall*TriggerAction_SetCountdownTimer)(Action *), TriggerAction_SetCountdownTimer, 0x4c5160);
DECL_FUNC(int (__fastcall*TriggerAction_SetMissionObjectives)(Action *), TriggerAction_SetMissionObjectives, 0x4c51b0);
DECL_FUNC(int(*getTextDisplayTime)(), getTextDisplayTime, 0x4c51d0);
DECL_FUNC(int (__fastcall*TriggerAction_LeaderBoardComputerPlayers)(Action *), TriggerAction_LeaderBoardComputerPlayers, 0x4c5210);
DECL_FUNC(int (__fastcall*TriggerAction_Wait)(Action *), TriggerAction_Wait, 0x4c5250);
DECL_FUNC(int (__fastcall*TriggerAction_PreserveTrigger)(Action *), TriggerAction_PreserveTrigger, 0x4c52a0);
DECL_FUNC(int (__fastcall*TriggerAction_Defeat)(Action *), TriggerAction_Defeat, 0x4c52c0);
DECL_FUNC(int (__fastcall*TriggerAction_Victory)(Action *), TriggerAction_Victory, 0x4c5310);
DECL_FUNC(int (__fastcall*TriggerAction_NoAction)(Action *), TriggerAction_NoAction, 0x4c5350);
DECL_FUNC(int(*sub_4C5360)(), sub_4C5360, 0x4c5360);
DECL_FUNC(int(*sub_4C5370)(), sub_4C5370, 0x4c5370);
DECL_FUNC(int(*sub_4C5390)(), sub_4C5390, 0x4c5390);
DECL_FUNC(int (__stdcall*KillRemoveUnits_Unit)(int), KillRemoveUnits_Unit, 0x4c53d0);
DECL_FUNC(BOOL (__thiscall*killRemoveUnits_Factories)(void *this_, CUnit *a2), killRemoveUnits_Factories, 0x4c5400);
DECL_FUNC(BOOL (__thiscall*KillRemoveUnits_Buildings)(void *this_, CUnit *a2), KillRemoveUnits_Buildings, 0x4c5430);
DECL_FUNC(BOOL (__thiscall*KillRemoveUnits_Men)(void *this_, CUnit *a2), KillRemoveUnits_Men, 0x4c5460);
DECL_FUNC(int (__stdcall*KillRemoveUnits_Anyunit)(int), KillRemoveUnits_Anyunit, 0x4c5490);
DECL_FUNC(int (__fastcall*TriggerAction_MinimapPing)(Action *), TriggerAction_MinimapPing, 0x4c54b0);
DECL_FUNC(int (__fastcall*TriggerAction_LeaderBoard)(Action *), TriggerAction_LeaderBoard, 0x4c5520);
DECL_FUNC(int (__fastcall*TriggerAction_SetSwitch)(Action *), TriggerAction_SetSwitch, 0x4c5590);
DECL_FUNC(signed int (__stdcall*ModifyUnitResources)(CUnit *a1, __int16 a2), ModifyUnitResources, 0x4c5670);
DECL_FUNC(int (__fastcall*TriggerAction_RunAiScriptAtLocation)(Action *), TriggerAction_RunAiScriptAtLocation, 0x4c56c0);
DECL_FUNC(int (__fastcall*TriggerAction_RunAiScript)(Action *), TriggerAction_RunAiScript, 0x4c5720);
DECL_FUNC(int (__fastcall*TriggerAction_DisplayTextMessage)(Action *), TriggerAction_DisplayTextMessage, 0x4c5770);
DECL_FUNC(int (__fastcall*TriggerAction_UnpauseGame)(Action *), TriggerAction_UnpauseGame, 0x4c5810);
DECL_FUNC(int (__stdcall*SetAlliance_maybe)(int), SetAlliance_maybe, 0x4c58f0);
DECL_FUNC(signed int (__stdcall*ModifyUnitShields)(CUnit *a1, int a2), ModifyUnitShields, 0x4c5a20);
DECL_FUNC(int (__stdcall*SubtractDeaths)(int), SubtractDeaths, 0x4c5a80);
DECL_FUNC(int (__stdcall*AddDeaths)(int), AddDeaths, 0x4c5c60);
DECL_FUNC(int (__stdcall*SetDeaths)(int), SetDeaths, 0x4c5dd0);
DECL_FUNC(int (__fastcall*SubtractScore)(unsigned int a1, __int16 a2, int amount), SubtractScore, 0x4c5f20);
DECL_FUNC(int (__fastcall*AddScore)(unsigned int a1, __int16 a2, int amount), AddScore, 0x4c61e0);
DECL_FUNC(int (__stdcall*SetScore)(int), SetScore, 0x4c6400);
DECL_FUNC(int (__fastcall*SubtractResource)(unsigned int a1, __int16 a2, int amount), SubtractResource, 0x4c65c0);
DECL_FUNC(int (__fastcall*AddResource)(unsigned int a1, __int16 a2, int amount), AddResource, 0x4c6700);
DECL_FUNC(int (__fastcall*SetResource)(unsigned int a1, __int16 a2, int amount), SetResource, 0x4c6830);
DECL_FUNC(int (__fastcall*TriggerAction_UnmuteUnitSpeech)(Action *), TriggerAction_UnmuteUnitSpeech, 0x4c6940);
DECL_FUNC(int (__fastcall*TriggerAction_MuteUnitSpeech)(Action *), TriggerAction_MuteUnitSpeech, 0x4c6990);
DECL_FUNC(int (__fastcall*FindUnitType)(CUnit *a1, int a2), FindUnitType, 0x4c69c0);
DECL_FUNC(signed int (__stdcall*ModifyUnitEnergy)(CUnit *a1, int a2), ModifyUnitEnergy, 0x4c6aa0);
DECL_FUNC(int (__fastcall*setInvincibility)(CUnit *a1, int a2), setInvincibility, 0x4c6b00);
DECL_FUNC(int (__fastcall*TriggerAction_SetDeaths)(Action *), TriggerAction_SetDeaths, 0x4c6cc0);
DECL_FUNC(int (__fastcall*TriggerAction_SetScore)(Action *), TriggerAction_SetScore, 0x4c6d20);
DECL_FUNC(int (__fastcall*TriggerAction_SetResources)(Action *), TriggerAction_SetResources, 0x4c6d80);
DECL_FUNC(int (__fastcall*TriggerAction_CenterView)(Action *), TriggerAction_CenterView, 0x4c6de0);
DECL_FUNC(signed int (__fastcall*getDoodadStateUnit)(CUnit *a1, int a2), getDoodadStateUnit, 0x4c6f70);
DECL_FUNC(int (__fastcall*TriggerAction_ModifyUnitResourceAmount)(Action *), TriggerAction_ModifyUnitResourceAmount, 0x4c70b0);
DECL_FUNC(int (__fastcall*TriggerAction_ModifyUnitShieldPoints)(Action *), TriggerAction_ModifyUnitShieldPoints, 0x4c7170);
DECL_FUNC(int (__fastcall*TriggerAction_ModifyUnitEnergy)(Action *), TriggerAction_ModifyUnitEnergy, 0x4c7230);
DECL_FUNC(int (__fastcall*TriggerAction_SetInvincibility)(Action *), TriggerAction_SetInvincibility, 0x4c72f0);
DECL_FUNC(int (__stdcall*getUnitForDoodadState)(__int16, int), getUnitForDoodadState, 0x4c7380);
DECL_FUNC(int(*sub_4C7400)(), sub_4C7400, 0x4c7400);
DECL_FUNC(int (__fastcall*TriggerAction_MoveLocation)(Action *), TriggerAction_MoveLocation, 0x4c7460);
DECL_FUNC(int (__fastcall*TriggerAction_TalkingPortrait)(Action *), TriggerAction_TalkingPortrait, 0x4c7570);
DECL_FUNC(int (__fastcall*TriggerAction_SetDoodadState)(Action *), TriggerAction_SetDoodadState, 0x4c75b0);
DECL_FUNC(int (__fastcall*TrgOrder)(CUnit *a1, int a2), TrgOrder, 0x4c7630);
DECL_FUNC(int (__fastcall*TriggerAction_PlayWav)(Action *), TriggerAction_PlayWav, 0x4c77d0);
DECL_FUNC(int (__fastcall*TriggerAction_Transmission)(Action *), TriggerAction_Transmission, 0x4c7890);
DECL_FUNC(int (__fastcall*TriggerAction_Order)(Action *), TriggerAction_Order, 0x4c79f0);
DECL_FUNC(int (__fastcall*TriggerAction_PauseGame)(Action *), TriggerAction_PauseGame, 0x4c7ac0);
DECL_FUNC(signed int (__stdcall*ModifyUnitHP)(CUnit *a1, int a2), ModifyUnitHP, 0x4c7b60);
DECL_FUNC(int (__fastcall*TriggerAction_ModifyUnitHitPoints)(Action *), TriggerAction_ModifyUnitHitPoints, 0x4c7c20);
DECL_FUNC(int(*giveUnitsProc)(), giveUnitsProc, 0x4c7ce0);
char trigMoveUnit(CUnit *unit, __int16 pos_x, int pos_y) {
    int address = 0x4c7cf0;
    char result_;
    __asm {
        mov eax, unit
        mov bx, pos_x
        mov esi, pos_y
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__stdcall*TriggerKillAllUnits)(int, int, int), TriggerKillAllUnits, 0x4c7d80);
DECL_FUNC(int(*killUnitsAtLocationProc)(), killUnitsAtLocationProc, 0x4c7e20);
DECL_FUNC(signed int (__stdcall*GiveUnits)(CUnit *a1, int a2), GiveUnits, 0x4c8040);
DECL_FUNC(int (__stdcall*TriggerKillUnitsAtLocation)(int, __int16, int, int), TriggerKillUnitsAtLocation, 0x4c8170);
DECL_FUNC(int (__fastcall*TriggerAction_GiveUnitsToPlayer)(Action *), TriggerAction_GiveUnitsToPlayer, 0x4c8200);
signed int sub_4C82C0(int a1, CUnit *a2) {
    int address = 0x4c82c0;
    signed result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__fastcall*DestroyUnit_maybe)(int player_id, __int16 a2, int a3, int a4), DestroyUnit_maybe, 0x4c8570);
DECL_FUNC(int (__fastcall*TriggerAction_SetAllianceStatus)(Action *), TriggerAction_SetAllianceStatus, 0x4c86d0);
DECL_FUNC(int (__fastcall*moveUnitCB)(CUnit *unit, int a2), moveUnitCB, 0x4c8700);
DECL_FUNC(int (__fastcall*TriggerAction_RemoveUnitAtLocation)(Action *), TriggerAction_RemoveUnitAtLocation, 0x4c8870);
DECL_FUNC(int (__fastcall*TriggerAction_RemoveUnit)(Action *), TriggerAction_RemoveUnit, 0x4c88c0);
DECL_FUNC(int (__fastcall*TriggerAction_KillUnitAtLocation)(Action *), TriggerAction_KillUnitAtLocation, 0x4c88f0);
DECL_FUNC(int (__fastcall*TriggerAction_KillUnit)(Action *), TriggerAction_KillUnit, 0x4c8940);
DECL_FUNC(int (__fastcall*TriggerAction_MoveUnit)(Action *), TriggerAction_MoveUnit, 0x4c8970);
DECL_FUNC(int (__stdcall*ModifyUnitHangerCount)(CUnit *a1, int a2), ModifyUnitHangerCount, 0x4c8a30);
DECL_FUNC(int (__fastcall*TriggerAction_ModifyUnitHangarCount)(Action *), TriggerAction_ModifyUnitHangarCount, 0x4c8b60);
DECL_FUNC(int (__fastcall*CreateUnit_maybe)(signed int player_id, int unit_type, int a3), CreateUnit_maybe, 0x4c8c20);
DECL_FUNC(int (__fastcall*TriggerAction_CreateUnitWithProperties)(Action *), TriggerAction_CreateUnitWithProperties, 0x4c8d90);
DECL_FUNC(int(*sub_4C8E10)(), sub_4C8E10, 0x4c8e10);
DECL_FUNC(int(*sub_4C8E30)(), sub_4C8E30, 0x4c8e30);
DECL_FUNC(int(*sub_4C8E60)(), sub_4C8E60, 0x4c8e60);
DECL_FUNC(int (__stdcall*sub_4C8E80)(int), sub_4C8E80, 0x4c8e80);
DECL_FUNC(int (__stdcall*sub_4C8F10)(int, int), sub_4C8F10, 0x4c8f10);
DECL_FUNC(int(*sub_4C9020)(), sub_4C9020, 0x4c9020);
DECL_FUNC(int(*sub_4C9030)(), sub_4C9030, 0x4c9030);
int sub_4C90C0(dialog *a1) {
    int address = 0x4c90c0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(void (__thiscall*sub_4C9120)(bool exit_code), sub_4C9120, 0x4c9120);
DECL_FUNC(void (__thiscall*sub_4C9150)(dialog *this_), sub_4C9150, 0x4c9150);
DECL_FUNC(int (__thiscall*BWFXN_QuitReplay_maybe)(dialog *a1), BWFXN_QuitReplay_maybe, 0x4c9280);
DECL_FUNC(int(*options_OK)(), options_OK, 0x4c9360);
int sub_4C93A0(dialog *a1) {
    int address = 0x4c93a0;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
void sub_4C9410(dialog *a1) {
    int address = 0x4c9410;
    __asm {
        mov eax, a1
        call address
    }
}
char sub_4C9440(dialog *a1) {
    int address = 0x4c9440;
    char result_;
    __asm {
        mov edi, a1
        call address
        mov result_, al
    }
    return result_;
}
void sub_4C94F0(dialog *a1) {
    int address = 0x4c94f0;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int (__thiscall*CMDACT_RestartGame)(dialog *a1), CMDACT_RestartGame, 0x4c9530);
DECL_FUNC(int (__thiscall*BWFXN_QuitMission)(dialog *a1), BWFXN_QuitMission, 0x4c95a0);
DECL_FUNC(int (__thiscall*quit_lastBINDLG)(dialog *a1), quit_lastBINDLG, 0x4c96d0);
DECL_FUNC(int (__stdcall*sub_4C9780)(dialog *a1), sub_4C9780, 0x4c9780);
bool options_Cancel(dialog *a1, dlgEvent *a2) {
    int address = 0x4c9800;
    bool result_;
    __asm {
        mov edi, a1
        mov esi, a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(void (__thiscall*saveGameCBProc)(dialog *this_), saveGameCBProc, 0x4c9890);
bool j_options_Cancel(dialog *a1, dlgEvent *a2) {
    int address = 0x4c99b0;
    bool result_;
    __asm {
        mov edi, a1
        mov esi, a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*sub_4C99C0)(), sub_4C99C0, 0x4c99c0);
void **checkSaveGameDialog(dialog *a1) {
    int address = 0x4c9a90;
    void ** result_;
    __asm {
        mov edi, a1
        call address
        mov result_, eax
    }
    return result_;
}
int sub_4C9CC0(dialog *a1) {
    int address = 0x4c9cc0;
    int result_;
    __asm {
        mov ebx, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*setObjctDlgBtnString)(), setObjctDlgBtnString, 0x4c9de0);
DECL_FUNC(void (__cdecl*loadoptionsMenu)(), loadoptionsMenu, 0x4c9f60);
DECL_FUNC(bool (__fastcall*objctdlg_BINDLG)(dialog *dlg, dlgEvent *evt), objctdlg_BINDLG, 0x4c9f80);
DECL_FUNC(int (__thiscall*helpmenu_lastBINDLG)(dialog *a1), helpmenu_lastBINDLG, 0x4ca010);
DECL_FUNC(int(*sub_4CA090)(), sub_4CA090, 0x4ca090);
DECL_FUNC(int (__thiscall*MainMenuOptionsCustomInteract)(dialog *a1), MainMenuOptionsCustomInteract, 0x4ca0a0);
char gamemenu_CustomCtrlID(dialog *a1) {
    int address = 0x4ca160;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*gamemenu_Dlg_Interact)(dialog *dlg, dlgEvent *evt), gamemenu_Dlg_Interact, 0x4ca240);
DECL_FUNC(int(*sub_4CA2D0)(), sub_4CA2D0, 0x4ca2d0);
DECL_FUNC(void (__cdecl*QuitMissionMenu)(), QuitMissionMenu, 0x4ca2f0);
DECL_FUNC(void (__cdecl*ExitGameMenu)(), ExitGameMenu, 0x4ca330);
DECL_FUNC(void (__cdecl*HelpMenu)(), HelpMenu, 0x4ca350);
DECL_FUNC(int (__thiscall*gameMenu_BINDLG)(dialog *a1), gameMenu_BINDLG, 0x4ca370);
DECL_FUNC(void (__cdecl*sub_4CA430)(), sub_4CA430, 0x4ca430);
DECL_FUNC(int (__thiscall*sub_4CA450)(dialog *a1), sub_4CA450, 0x4ca450);
DECL_FUNC(void (__cdecl*gameMenu)(), gameMenu, 0x4ca500);
DECL_FUNC(int(*mapHandleDestroy)(), mapHandleDestroy, 0x4ca520);
DECL_FUNC(int (__stdcall*mapAuthCallback)(char *szFileName, int, int), mapAuthCallback, 0x4ca540);
DECL_FUNC(int (__stdcall*ChkLoader_PUNI)(int, int, int), ChkLoader_PUNI, 0x4ca600);
DECL_FUNC(int (__stdcall*ChkLoader_TECS)(int, int, int), ChkLoader_TECS, 0x4ca6d0);
DECL_FUNC(int (__stdcall*ChkLoader_TECx)(int, int, int), ChkLoader_TECx, 0x4ca7d0);
DECL_FUNC(int (__stdcall*ChkLoader_UPGS)(int, int, int), ChkLoader_UPGS, 0x4ca8d0);
DECL_FUNC(int (__stdcall*ChkLoader_UPGx)(int, int, int), ChkLoader_UPGx, 0x4ca9f0);
DECL_FUNC(int (__stdcall*ChkLoader_UNIS)(int, int, int), ChkLoader_UNIS, 0x4cab10);
DECL_FUNC(int (__stdcall*ChkLoader_UNIx)(int, int, int), ChkLoader_UNIx, 0x4cacd0);
DECL_FUNC(int(*sub_4CAE90)(), sub_4CAE90, 0x4cae90);
DECL_FUNC(bool (__stdcall*ChkLoader_FORC)(SectionData *, int, MapChunks *), ChkLoader_FORC, 0x4caee0);
DECL_FUNC(bool (__stdcall*ChkLoader_SPRP)(SectionData *, int, MapChunks *), ChkLoader_SPRP, 0x4caf40);
DECL_FUNC(int (__stdcall*ChkLoader_MASK)(int, int amount, int), ChkLoader_MASK, 0x4caf90);
DECL_FUNC(bool (__stdcall*ChkLoader_DIM)(SectionData *, int, MapChunks *), ChkLoader_DIM, 0x4cb040);
DECL_FUNC(int(*sub_4CB120)(), sub_4CB120, 0x4cb120);
DECL_FUNC(int (__stdcall*sub_4CB140)(int, int), sub_4CB140, 0x4cb140);
DECL_FUNC(int(*CHK_UNIT_StartLocationSub)(), CHK_UNIT_StartLocationSub, 0x4cb190);
DECL_FUNC(int(*sub_4CB220)(), sub_4CB220, 0x4cb220);
DECL_FUNC(int (__stdcall*ChkLoader_UPRP)(int, int, int), ChkLoader_UPRP, 0x4cb250);
DECL_FUNC(int (__stdcall*ChkLoader_MRGN_)(int, int, int), ChkLoader_MRGN_, 0x4cb2a0);
DECL_FUNC(int (__stdcall*ChkLoader_MRGN)(int, int, int), ChkLoader_MRGN, 0x4cb2f0);
DECL_FUNC(int(*sub_4CB340)(), sub_4CB340, 0x4cb340);
DECL_FUNC(void (__thiscall*freeCHKStringHandle)(bool exit_code), freeCHKStringHandle, 0x4cb370);
DECL_FUNC(bool (__stdcall*ChkLoader_ERA)(SectionData *section_data, int section_size, MapChunks *a3), ChkLoader_ERA, 0x4cb3a0);
DECL_FUNC(bool (__stdcall*ChkLoader_OWNR)(SectionData *, int, MapChunks *), ChkLoader_OWNR, 0x4cb420);
DECL_FUNC(bool (__stdcall*ChkLoader_SIDE)(SectionData *, int, MapChunks *), ChkLoader_SIDE, 0x4cb490);
DECL_FUNC(bool (__stdcall*ChkLoader_VER)(SectionData *, int, MapChunks *), ChkLoader_VER, 0x4cb500);
DECL_FUNC(int (__fastcall*sub_4CB560)(int a1), sub_4CB560, 0x4cb560);
DECL_FUNC(char (__fastcall*sub_4CB5B0)(int a1, UnknownTilesetRelated2 *a2), sub_4CB5B0, 0x4cb5b0);
DECL_FUNC(int(*sub_4CB650)(), sub_4CB650, 0x4cb650);
DECL_FUNC(int (__stdcall*ChkLoader_PTEC)(int, int, int), ChkLoader_PTEC, 0x4cb670);
DECL_FUNC(int (__stdcall*ChkLoader_PTEx)(int, int, int), ChkLoader_PTEx, 0x4cb7d0);
DECL_FUNC(int (__stdcall*ChkLoader_UPGR)(int, int, int), ChkLoader_UPGR, 0x4cb940);
DECL_FUNC(int (__stdcall*ChkLoader_PUPx)(int, int, int), ChkLoader_PUPx, 0x4cbac0);
DECL_FUNC(bool (__stdcall*ChkLoader_VCOD)(SectionData *sectionData, int sectionSize, MapChunks *map_chunks), ChkLoader_VCOD, 0x4cbc40);
DECL_FUNC(int (__fastcall*CHK_UNIT_Addon)(int a1, CUnit *a2, int a3), CHK_UNIT_Addon, 0x4cbdc0);
DECL_FUNC(int (__stdcall*sub_4CBE00)(char, int), sub_4CBE00, 0x4cbe00);
DECL_FUNC(int(*unitNotNeutral)(), unitNotNeutral, 0x4cbe20);
DECL_FUNC(int (__stdcall*ChkLoader_COLR)(int, int, int), ChkLoader_COLR, 0x4cbe70);
DECL_FUNC(int(*sub_4CBED0)(), sub_4CBED0, 0x4cbed0);
DECL_FUNC(int (__stdcall*CHK_UNIT_Nydus)(int), CHK_UNIT_Nydus, 0x4cbef0);
DECL_FUNC(int(*sub_4CBF40)(), sub_4CBF40, 0x4cbf40);
char sub_4CBF60(int a1, CUnit *a2, __int16 a3) {
    int address = 0x4cbf60;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        push dword ptr a3
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__stdcall*ChkLoader_TRIG)(int, int amount, int), ChkLoader_TRIG, 0x4cbfa0);
signed int ReadMapChunks(MapChunks *a1, int a2, int *out_version_loader_index, int a4) {
    int address = 0x4cc060;
    signed result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        mov ebx, out_version_loader_index
        push dword ptr a4
        call address
        mov result_, eax
    }
    return result_;
}
BOOL LoadFileArchiveToSBigBuf(char *filename, int *a2, int a3, HANDLE *a4) {
    int address = 0x4cc110;
    BOOL result_;
    __asm {
        mov esi, filename
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_4CC1B0)(int), sub_4CC1B0, 0x4cc1b0);
DECL_FUNC(bool (__stdcall*ChkLoader_MBRF)(SectionData *, int, MapChunks *), ChkLoader_MBRF, 0x4cc1f0);
signed int sub_4CC2A0(int a1, int a2, int a3, MapChunks *a4) {
    int address = 0x4cc2a0;
    signed result_;
    __asm {
        mov edi, a1
        mov esi, a2
        push dword ptr a4
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
signed int sub_4CC350(char *a1, char *a2, int a3, size_t a4) {
    int address = 0x4cc350;
    signed result_;
    __asm {
        mov eax, a1
        mov edx, a2
        mov edi, a3
        mov ecx, a4
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*setUnitEnergyEx)(int, char), setUnitEnergyEx, 0x4cc3b0);
DECL_FUNC(int (__thiscall*sub_4CC420)(size_t size), sub_4CC420, 0x4cc420);
char CHK_UNIT_ApplyOtherFlags(CUnit *a1, char a2, int a3) {
    int address = 0x4cc470;
    char result_;
    __asm {
        mov eax, a1
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, al
    }
    return result_;
}
void sub_4CC610(CUnit *a1, char a2, int a3) {
    int address = 0x4cc610;
    __asm {
        mov esi, a1
        push dword ptr a3
        push dword ptr a2
        call address
    }
}
DECL_FUNC(bool (__stdcall*ChkLoader_STR)(SectionData *, int, MapChunks *), ChkLoader_STR, 0x4cc650);
int getFullMapChunk(char *filename, int *a3) {
    int address = 0x4cc6e0;
    int result_;
    __asm {
        mov eax, filename
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
int sub_4CC7F0(char *a1) {
    int address = 0x4cc7f0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(void (__cdecl*sub_4CC990)(), sub_4CC990, 0x4cc990);
signed int sub_4CCAC0(char *a1, MapChunks *a2) {
    int address = 0x4ccac0;
    signed result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
char sub_4CCC40(int a1, unsigned __int8 a2, CUnit *a3) {
    int address = 0x4ccc40;
    char result_;
    __asm {
        mov eax, a1
        mov cl, a2
        mov esi, a3
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(void (__cdecl*ResetDATFiles)(), ResetDATFiles, 0x4ccc80);
CUnit *CHK_UNIT_ApplyBurrowFlag(CUnit *result, char a2, CUnit *a3) {
    int address = 0x4ccf20;
    CUnit * result_;
    __asm {
        mov eax, result
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(CUnit *(__stdcall*sub_4CCF90)(_DWORD a1), sub_4CCF90, 0x4ccf90);
DECL_FUNC(int (__stdcall*sub_4CD070)(char, int), sub_4CD070, 0x4cd070);
DECL_FUNC(int(*sub_4CD090)(), sub_4CD090, 0x4cd090);
DECL_FUNC(bool (__stdcall*ChkLoader_MTXM)(SectionData *, int, MapChunks *), ChkLoader_MTXM, 0x4cd0b0);
char setHangerCount(CUnit *a1, CUnit *a2, unsigned __int8 a3) {
    int address = 0x4cd260;
    char result_;
    __asm {
        mov eax, a1
        mov edi, a2
        push dword ptr a3
        call address
        mov result_, al
    }
    return result_;
}
CUnit *CreateUnitAtPos(__int16 player_id, unsigned int unit_type, __int16 x, __int16 y) {
    int address = 0x4cd360;
    CUnit * result_;
    __asm {
        mov ax, player_id
        mov ecx, unit_type
        push dword ptr y
        push dword ptr x
        call address
        mov result_, eax
    }
    return result_;
}
char editUnitFlags(CUnit *a1, int a2) {
    int address = 0x4cd480;
    char result_;
    __asm {
        mov eax, a1
        mov ebx, a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(bool (__stdcall*ChkLoader_THG2)(SectionData *, int, MapChunks *), ChkLoader_THG2, 0x4cd600);
DECL_FUNC(int(*sub_4CD740)(), sub_4CD740, 0x4cd740);
DECL_FUNC(int(*sub_4CD770)(), sub_4CD770, 0x4cd770);
DECL_FUNC(int (__stdcall*ChkLoader_UNIT)(int, int amount, int), ChkLoader_UNIT, 0x4cd7a0);
DECL_FUNC(int (__thiscall*sub_4CD9C0)(dialog *this_), sub_4CD9C0, 0x4cd9c0);
DECL_FUNC(int (__stdcall*sub_4CDA00)(int), sub_4CDA00, 0x4cda00);
DECL_FUNC(int(*sub_4CDA20)(), sub_4CDA20, 0x4cda20);
int UpdateCancelButton(dialog *a1, unsigned __int16 a2, int a3) {
    int address = 0x4cda30;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
int UpdateOKButton(dialog *a1, unsigned __int16 a2, int a3) {
    int address = 0x4cda80;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*sub_4CDAD0)(dialog *dlg, dlgEvent *evt), sub_4CDAD0, 0x4cdad0);
DECL_FUNC(signed int (__fastcall*gameMenu_DLG)(dialog *a1, dlgEvent *a2), gameMenu_DLG, 0x4cdb40);
DECL_FUNC(int(*getRaceName)(), getRaceName, 0x4cdb70);
DECL_FUNC(void (__thiscall*FreeNetworkTBLHandle)(bool exit_code), FreeNetworkTBLHandle, 0x4cdba0);
DECL_FUNC(int(*LoadNetworkTBL)(), LoadNetworkTBL, 0x4cdbd0);
DECL_FUNC(int(*sub_4CDCC0)(), sub_4CDCC0, 0x4cdcc0);
DECL_FUNC(int(*sub_4CDCE0)(), sub_4CDCE0, 0x4cdce0);
DECL_FUNC(int(*sub_4CDD30)(), sub_4CDD30, 0x4cdd30);
DECL_FUNC(int(*sub_4CDDC0)(), sub_4CDDC0, 0x4cddc0);
DECL_FUNC(int (__stdcall*sub_4CDE10)(void *dest), sub_4CDE10, 0x4cde10);
DECL_FUNC(int(*sub_4CDF00)(), sub_4CDF00, 0x4cdf00);
DECL_FUNC(int(*sub_4CDF10)(), sub_4CDF10, 0x4cdf10);
DECL_FUNC(int(*sub_4CDF20)(), sub_4CDF20, 0x4cdf20);
DECL_FUNC(int(*sub_4CDF30)(), sub_4CDF30, 0x4cdf30);
DECL_FUNC(int(*allocateRepGameActionMemory)(), allocateRepGameActionMemory, 0x4cdf50);
DECL_FUNC(int(*sub_4CDFA0)(), sub_4CDFA0, 0x4cdfa0);
DECL_FUNC(int(*sub_4CDFC0)(), sub_4CDFC0, 0x4cdfc0);
DECL_FUNC(int(*sub_4CDFD0)(), sub_4CDFD0, 0x4cdfd0);
DECL_FUNC(int (__stdcall*sub_4CDFF0)(int, int, void *dest, int), sub_4CDFF0, 0x4cdff0);
DECL_FUNC(int (__stdcall*sub_4CE110)(int), sub_4CE110, 0x4ce110);
DECL_FUNC(void (__thiscall*FreeGameActionData)(bool exit_code), FreeGameActionData, 0x4ce130);
DECL_FUNC(int(*sub_4CE270)(), sub_4CE270, 0x4ce270);
DECL_FUNC(void (__cdecl*createNewGameActionDataBlock)(), createNewGameActionDataBlock, 0x4ce280);
DECL_FUNC(int(*closeLoadGameFile)(), closeLoadGameFile, 0x4ce440);
DECL_FUNC(int(*nullsub_60)(), nullsub_60, 0x4ce460);
DECL_FUNC(int(*sub_4CE4A0)(), sub_4CE4A0, 0x4ce4a0);
signed int getSaveDirectory(char *a1, unsigned int esi0, char *a2, int a4) {
    int address = 0x4ce5b0;
    signed result_;
    __asm {
        mov edi, a1
        mov esi, esi0
        push dword ptr a4
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*SetMapStartStatus)(), SetMapStartStatus, 0x4ce6b0);
DECL_FUNC(int(*getMapStartStatus)(), getMapStartStatus, 0x4ce6c0);
DECL_FUNC(int(*sub_4CE700)(), sub_4CE700, 0x4ce700);
DECL_FUNC(int(*sub_4CE720)(), sub_4CE720, 0x4ce720);
DECL_FUNC(int(*sub_4CE730)(), sub_4CE730, 0x4ce730);
DECL_FUNC(int(*sub_4CE740)(), sub_4CE740, 0x4ce740);
DECL_FUNC(int(*sub_4CE750)(), sub_4CE750, 0x4ce750);
DECL_FUNC(int(*sub_4CE760)(), sub_4CE760, 0x4ce760);
DECL_FUNC(int(*setUpgradeLevel)(), setUpgradeLevel, 0x4ce770);
DECL_FUNC(int(*getUpgradesLevel)(), getUpgradesLevel, 0x4ce7a0);
DECL_FUNC(int(*sub_4CE7D0)(), sub_4CE7D0, 0x4ce7d0);
DECL_FUNC(int(*getUpgradesAvailable)(), getUpgradesAvailable, 0x4ce7f0);
DECL_FUNC(int(*sub_4CE820)(), sub_4CE820, 0x4ce820);
u8 isTechResearched(int a1, Tech2 tech) {
    int address = 0x4ce850;
    u8 result_;
    __asm {
        mov eax, a1
        mov cx, tech
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*sub_4CE880)(), sub_4CE880, 0x4ce880);
u8 techIsResearchedSCBW(int a1, Tech2 a2) {
    int address = 0x4ce8a0;
    u8 result_;
    __asm {
        mov eax, a1
        mov cx, a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__thiscall*sub_4CE8D0)(char *source, int, int), sub_4CE8D0, 0x4ce8d0);
DECL_FUNC(int(*unpackAllPlayerSelectionGroups)(), unpackAllPlayerSelectionGroups, 0x4ceda0);
DECL_FUNC(int(*packAllPlayerSelectionGroups)(), packAllPlayerSelectionGroups, 0x4cee00);
DECL_FUNC(int(*getSaveExtension)(), getSaveExtension, 0x4cee60);
DECL_FUNC(int (__stdcall*sub_4CEEF0)(int, int), sub_4CEEF0, 0x4ceef0);
DECL_FUNC(int (__stdcall*sub_4CEFF0)(int, int), sub_4CEFF0, 0x4ceff0);
DECL_FUNC(int (__stdcall*WriteSaveVersion)(int, FILE *), WriteSaveVersion, 0x4cf160);
DECL_FUNC(int (__thiscall*getSavePath)(char *base, int a2), getSavePath, 0x4cf2a0);
DECL_FUNC(int (__stdcall*enumSaveLoadFiles)(int, int, int, int, int), enumSaveLoadFiles, 0x4cf330);
DECL_FUNC(int (__stdcall*createSaveLoadList)(int, int), createSaveLoadList, 0x4cf5a0);
DECL_FUNC(int(*sub_4CF5F0)(), sub_4CF5F0, 0x4cf5f0);
signed int sub_4CF7B0(char *a1) {
    int address = 0x4cf7b0;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_4CF820)(int a2), sub_4CF820, 0x4cf820);
int LoadGameInit_Mode(char *a1) {
    int address = 0x4cf8e0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__thiscall*Saved_Game_Node_Constructor)(char *source, int, int), Saved_Game_Node_Constructor, 0x4cfb00);
DECL_FUNC(int (__thiscall*sub_4CFCC0)(char *source, int, int), sub_4CFCC0, 0x4cfcc0);
DECL_FUNC(int (__stdcall*sub_4CFD90)(int), sub_4CFD90, 0x4cfd90);
DECL_FUNC(int (__stdcall*sub_4CFE40)(int, char *dest, size_t size), sub_4CFE40, 0x4cfe40);
DECL_FUNC(int(*loadGameFull)(), loadGameFull, 0x4cfef0);
DECL_FUNC(int(*loseSightSelection)(), loseSightSelection, 0x4d0820);
DECL_FUNC(int(*getTopLevelExceptionFilter)(), getTopLevelExceptionFilter, 0x4d0910);
DECL_FUNC(int(*ExceptionFilterDestructor)(), ExceptionFilterDestructor, 0x4d0920);
DECL_FUNC(int (__thiscall*GetModuleInfo)(LPCVOID lpAddress, LPSTR lpString1, int, int), GetModuleInfo, 0x4d0cb0);
DECL_FUNC(int (__fastcall*LogCallStack)(char), LogCallStack, 0x4d0db0);
DECL_FUNC(LONG (__stdcall*TopLevelExceptionFilter)(struct _EXCEPTION_POINTERS *ExceptionInfo), TopLevelExceptionFilter, 0x4d0f70);
DECL_FUNC(int (__stdcall*CreateExceptionFilter)(int), CreateExceptionFilter, 0x4d1120);
DECL_FUNC(int (__thiscall*_STrans442_)(int a2), _STrans442_, 0x4d1140);
DECL_FUNC(int(*setHudBeginY)(), setHudBeginY, 0x4d11a0);
DECL_FUNC(int(*sub_4D1210)(), sub_4D1210, 0x4d1210);
DECL_FUNC(int(*sub_4D1220)(), sub_4D1220, 0x4d1220);
DECL_FUNC(int(*sub_4D1230)(), sub_4D1230, 0x4d1230);
DECL_FUNC(int(*sub_4D1240)(), sub_4D1240, 0x4d1240);
DECL_FUNC(void (__thiscall*DestroyCursors)(bool exit_code), DestroyCursors, 0x4d1250);
DECL_FUNC(int(*getScrollCursorType)(), getScrollCursorType, 0x4d12a0);
DECL_FUNC(int(*UnitIsEnemy)(), UnitIsEnemy, 0x4d1380);
DECL_FUNC(int(*_drawCursor)(), _drawCursor, 0x4d13b0);
DECL_FUNC(int(*getCursorType)(), getCursorType, 0x4d1460);
DECL_FUNC(int(*BWFXN_NextFrameHelperFunctionTarget)(), BWFXN_NextFrameHelperFunctionTarget, 0x4d14d0);
DECL_FUNC(int(*LoadCursors)(), LoadCursors, 0x4d1560);
DECL_FUNC(int (__stdcall*sub_4D16F0)(int), sub_4D16F0, 0x4d16f0);
DECL_FUNC(int(*Game_NumLockInit)(), Game_NumLockInit, 0x4d17b0);
DECL_FUNC(int(*BWFXN_Game_KeyState)(), BWFXN_Game_KeyState, 0x4d1810);
DECL_FUNC(int(*Game_Close)(), Game_Close, 0x4d1880);
void Game_MouseWheel(__int16 a1, int a2, void (__thiscall *a3)(dlgEvent *)) {
    int address = 0x4d1900;
    __asm {
        mov ax, a1
        mov ecx, a2
        mov edi, a3
        call address
    }
}
void BWFXN_Game_ButtonUp(int a1, void (__thiscall *a2)(dlgEvent *), unsigned int a3, __int16 a4) {
    int address = 0x4d1940;
    __asm {
        mov eax, a1
        mov edi, a2
        mov esi, a3
        push dword ptr a4
        call address
    }
}
void BWFXN_Game_ButtonDown(int result, void (__thiscall *a2)(dlgEvent *), unsigned int a3, __int16 a4) {
    int address = 0x4d19c0;
    __asm {
        mov eax, result
        mov edi, a2
        mov esi, a3
        push dword ptr a4
        call address
    }
}
void Game_BtnDoubleClick(int result, void (__thiscall *a2)(dlgEvent *), unsigned int a3, __int16 a4) {
    int address = 0x4d1a50;
    __asm {
        mov eax, result
        mov edi, a2
        mov esi, a3
        push dword ptr a4
        call address
    }
}
DECL_FUNC(void(*UpdateDlgMousePosition)(void), UpdateDlgMousePosition, 0x4d1ae0);
DECL_FUNC(int(*TakeScreenshot)(), TakeScreenshot, 0x4d1b40);
DECL_FUNC(DWORD (__stdcall*BWFXN_videoLoop)(int flag), BWFXN_videoLoop, 0x4d1bf0);
DECL_FUNC(int(*sub_4D1D30)(), sub_4D1D30, 0x4d1d30);
DECL_FUNC(int(*Game_Capturechanged)(), Game_Capturechanged, 0x4d1d40);
DECL_FUNC(int (__stdcall*MainWindowProc)(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam), MainWindowProc, 0x4d1d70);
DECL_FUNC(void *(__stdcall*allocFunction)(DWORD), allocFunction, 0x4d26b0);
DECL_FUNC(int(*sub_4D26D0)(), sub_4D26D0, 0x4d26d0);
DECL_FUNC(int (__fastcall*sub_4D26E0)(int logline, char *logfilename), sub_4D26E0, 0x4d26e0);
DECL_FUNC(int (__stdcall*FileIOErrProc)(char *source, int, int), FileIOErrProc, 0x4d2700);
DECL_FUNC(int(*sub_4D2760)(), sub_4D2760, 0x4d2760);
DECL_FUNC(int (__fastcall*sub_4D2770)(int height, int width, int size, void *buffer, int buffersize), sub_4D2770, 0x4d2770);
DECL_FUNC(void (__fastcall*AllocBackgroundImage)(char *fileName, Bitmap *a2, int *palette, char *source_filename, int source_line), AllocBackgroundImage, 0x4d27a0);
DECL_FUNC(int (__fastcall*sub_4D2840)(DWORD dwSearchScope, HANDLE hMpq, int), sub_4D2840, 0x4d2840);
void FileFatal(HANDLE this_, int a2) {
    int address = 0x4d2880;
    __asm {
        mov ecx, this_
        mov ebx, a2
        call address
    }
}
DECL_FUNC(int(*checkLastFileError)(), checkLastFileError, 0x4d28d0);
DECL_FUNC(int (__stdcall*waitForImageLoadObjects)(int, int, int), waitForImageLoadObjects, 0x4d29d0);
DECL_FUNC(int (__fastcall*_ReadFile)(void *buffer, DWORD nNumberOfBytesToRead), _ReadFile, 0x4d2aa0);
DECL_FUNC(int (__fastcall*LoadGraphic)(char *grp_path, int unused_zero, char *logfilename, int logline), LoadGraphic, 0x4d2b30);
DECL_FUNC(int (__stdcall*sub_4D2BF0)(char *a1, int, int, char *logfilename, int logline), sub_4D2BF0, 0x4d2bf0);
DECL_FUNC(int (__stdcall*sub_4D2C70)(char *filename, int last_error, int, char *logfilename, int logline), sub_4D2C70, 0x4d2c70);
void *fastFileRead(int *bytes_read, int searchScope, char *filename, int defaultValue, int bytes_to_read, char *logfilename, int logline) {
    int address = 0x4d2d10;
    void * result_;
    __asm {
        mov eax, bytes_read
        mov ecx, searchScope
        push dword ptr logline
        push dword ptr logfilename
        push dword ptr bytes_to_read
        push dword ptr defaultValue
        push dword ptr filename
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(void *(__fastcall*_fastFileRead)(char *filename, int default_value, int *bytes_read, char *, int), _fastFileRead, 0x4d2e40);
DECL_FUNC(int(*sub_4D2E60)(), sub_4D2E60, 0x4d2e60);
void LoadGameData(DatLoad *a1, char *a2) {
    int address = 0x4d2e80;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
    }
}
DECL_FUNC(void (__thiscall*DestroyAccelerators)(bool exit_code), DestroyAccelerators, 0x4d2f30);
DECL_FUNC(int(*sub_4D2F90)(), sub_4D2F90, 0x4d2f90);
DECL_FUNC(int(*sub_4D2FB0)(), sub_4D2FB0, 0x4d2fb0);
DECL_FUNC(int(*sub_4D2FD0)(), sub_4D2FD0, 0x4d2fd0);
DECL_FUNC(int(*InitializeInputProcs)(), InitializeInputProcs, 0x4d2ff0);
DECL_FUNC(int(*LoadAccelerators_)(), LoadAccelerators_, 0x4d3070);
DECL_FUNC(int(*j_InitializeInputProcs)(), j_InitializeInputProcs, 0x4d31f0);
DECL_FUNC(int(*sub_4D3200)(), sub_4D3200, 0x4d3200);
DECL_FUNC(int(*sub_4D3220)(), sub_4D3220, 0x4d3220);
DECL_FUNC(int(*cleanBufferCounts)(), cleanBufferCounts, 0x4d3240);
DECL_FUNC(int (__stdcall*sub_4D32E0)(char), sub_4D32E0, 0x4d32e0);
DECL_FUNC(int(*nullsub_61)(), nullsub_61, 0x4d3330);
DECL_FUNC(int(*sub_4D3340)(), sub_4D3340, 0x4d3340);
DECL_FUNC(int(*sub_4D3350)(), sub_4D3350, 0x4d3350);
DECL_FUNC(int(*sub_4D3360)(), sub_4D3360, 0x4d3360);
signed int sub_4D3370(struct_game_140 *a1) {
    int address = 0x4d3370;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4D3400)(), sub_4D3400, 0x4d3400);
DECL_FUNC(int(*nullsub_62)(), nullsub_62, 0x4d3430);
DECL_FUNC(int(*nullsub_63)(), nullsub_63, 0x4d3440);
DECL_FUNC(int(*nullsub_64)(), nullsub_64, 0x4d3450);
DECL_FUNC(int(*sub_4D3460)(), sub_4D3460, 0x4d3460);
DECL_FUNC(int(*sub_4D3470)(), sub_4D3470, 0x4d3470);
DECL_FUNC(int (__stdcall*GameUpgrade)(int), GameUpgrade, 0x4d34a0);
DECL_FUNC(int(*ResetLeagueEvent)(), ResetLeagueEvent, 0x4d3510);
DECL_FUNC(int(*sub_4D3540)(), sub_4D3540, 0x4d3540);
DECL_FUNC(int(*sub_4D3570)(), sub_4D3570, 0x4d3570);
DECL_FUNC(int(*sub_4D3580)(), sub_4D3580, 0x4d3580);
DECL_FUNC(int(*sub_4D35A0)(), sub_4D35A0, 0x4d35a0);
DECL_FUNC(int (__fastcall*Game_Hdr_Node_Constructor)(DWORD, DWORD, DWORD), Game_Hdr_Node_Constructor, 0x4d35e0);
int sub_4D37C0(dialog *a1, int (__stdcall *a2)(_DWORD, _DWORD)) {
    int address = 0x4d37c0;
    int result_;
    __asm {
        mov edi, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4D3810)(), sub_4D3810, 0x4d3810);
DECL_FUNC(int(*sub_4D3860)(), sub_4D3860, 0x4d3860);
DECL_FUNC(signed int (__stdcall*CreateLadderGame)(struct_game_140 *a1, int a2), CreateLadderGame, 0x4d3910);
signed int JoinNetworkGame(int a1, int a2, struct_game_140 *a3) {
    int address = 0x4d3b50;
    signed result_;
    __asm {
        mov edx, a1
        mov ecx, a2
        mov ebx, a3
        call address
        mov result_, eax
    }
    return result_;
}
signed int CreateGame(struct_game_140 *a1) {
    int address = 0x4d3fc0;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4D4130)(), sub_4D4130, 0x4d4130);
DECL_FUNC(int (__stdcall*LobbyLoopCnt)(int), LobbyLoopCnt, 0x4d4340);
DECL_FUNC(int(*sub_4D4400)(), sub_4D4400, 0x4d4400);
DECL_FUNC(void (__thiscall*endVideoProc)(dlgEvent *), endVideoProc, 0x4d4410);
DECL_FUNC(void (__cdecl*sub_4D4440)(), sub_4D4440, 0x4d4440);
void PlayMovie(unsigned int a1) {
    int address = 0x4d4470;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int(*sub_4D4540)(), sub_4D4540, 0x4d4540);
DECL_FUNC(void (__fastcall*TitleLoopUpdate)(dialog *dlg, int x, int y, rect *dst), TitleLoopUpdate, 0x4d4550);
void sub_4D45A0(dialog *a1) {
    int address = 0x4d45a0;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int(*sub_4D4620)(), sub_4D4620, 0x4d4620);
DECL_FUNC(dialog *(__thiscall*TitleLoopTimer)(dialog *this_), TitleLoopTimer, 0x4d4640);
void DrawBINDialog(dialog *a1) {
    int address = 0x4d46a0;
    __asm {
        mov eax, a1
        call address
    }
}
int *TitleBlitAndLoop(dialog *dlg) {
    int address = 0x4d46f0;
    int * result_;
    __asm {
        mov eax, dlg
        call address
        mov result_, eax
    }
    return result_;
}
int *titleInit(dialog *dlg) {
    int address = 0x4d4870;
    int * result_;
    __asm {
        mov eax, dlg
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*TitleDlgProc)(dialog *dlg, struct dlgEvent *evt), TitleDlgProc, 0x4d4960);
DECL_FUNC(void (__cdecl*LoadTitle)(), LoadTitle, 0x4d49a0);
DECL_FUNC(int(*initializePlayerValues)(), initializePlayerValues, 0x4d4ac0);
DECL_FUNC(int(*nullsub_65)(), nullsub_65, 0x4d4b10);
DECL_FUNC(int(*packColorShifts)(), packColorShifts, 0x4d4b20);
DECL_FUNC(int(*sub_4D4B50)(), sub_4D4B50, 0x4d4b50);
DECL_FUNC(int(*sub_4D4B60)(), sub_4D4B60, 0x4d4b60);
DECL_FUNC(int(*sub_4D4B80)(), sub_4D4B80, 0x4d4b80);
DECL_FUNC(void (__cdecl*initializeImageArray)(), initializeImageArray, 0x4d4ba0);
DECL_FUNC(int(*sub_4D4C70)(), sub_4D4C70, 0x4d4c70);
DECL_FUNC(int(*sub_4D4CB0)(), sub_4D4CB0, 0x4d4cb0);
DECL_FUNC(int(*sub_4D4CC0)(), sub_4D4CC0, 0x4d4cc0);
DECL_FUNC(int(*sub_4D4CD0)(), sub_4D4CD0, 0x4d4cd0);
int ImageDestructor(CImage *a1) {
    int address = 0x4d4ce0;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4D4D70)(), sub_4D4D70, 0x4d4d70);
DECL_FUNC(int(*sub_4D4D80)(), sub_4D4D80, 0x4d4d80);
DECL_FUNC(int(*sub_4D4DA0)(), sub_4D4DA0, 0x4d4da0);
DECL_FUNC(int(*sub_4D4DB0)(), sub_4D4DB0, 0x4d4db0);
DECL_FUNC(int(*sub_4D4E10)(), sub_4D4E10, 0x4d4e10);
DECL_FUNC(int(*sub_4D4E20)(), sub_4D4E20, 0x4d4e20);
DECL_FUNC(int(*sub_4D4E30)(), sub_4D4E30, 0x4d4e30);
DECL_FUNC(int(*sub_4D4E80)(), sub_4D4E80, 0x4d4e80);
CImage *sub_4D4F10(CImage *a1) {
    int address = 0x4d4f10;
    CImage * result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
int removeSelectionCircleImage(CImage *a1) {
    int address = 0x4d4fa0;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
int removeHPBar(CImage *a1) {
    int address = 0x4d5030;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(void (__thiscall*CleanupIscriptBINHandle)(bool exit_code), CleanupIscriptBINHandle, 0x4d50c0);
DECL_FUNC(int(*nullsub_66)(), nullsub_66, 0x4d5150);
DECL_FUNC(int(*nullsub_67)(), nullsub_67, 0x4d5160);
DECL_FUNC(int (__stdcall*sub_4D5170)(int, int), sub_4D5170, 0x4d5170);
DECL_FUNC(int (__stdcall*imageRenderFxn16_1)(int, int, int), imageRenderFxn16_1, 0x4d51a0);
DECL_FUNC(int (__stdcall*imageRenderFxn16_0)(int, int, int), imageRenderFxn16_0, 0x4d5210);
DECL_FUNC(int (__stdcall*imageRenderFxn15_0)(int, int, int), imageRenderFxn15_0, 0x4d5280);
DECL_FUNC(int (__stdcall*imageRenderFxn13_0)(int, int, char), imageRenderFxn13_0, 0x4d5390);
char imageRenderFxn12_Main(rect *a1, int a2, int a3) {
    int address = 0x4d53f0;
    char result_;
    __asm {
        mov eax, a1
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__stdcall*imageRenderFxn17_1)(int, int, char), imageRenderFxn17_1, 0x4d5450);
DECL_FUNC(int (__stdcall*imageRenderFxn17_0)(int, int, char), imageRenderFxn17_0, 0x4d5480);
DECL_FUNC(int (__stdcall*imageRenderFxn6_1)(int, int, int), imageRenderFxn6_1, 0x4d54b0);
DECL_FUNC(int (__stdcall*imageRenderFxn6_0)(int, int, int), imageRenderFxn6_0, 0x4d54d0);
DECL_FUNC(int (__stdcall*imageRenderFxn5_1)(int, int, int), imageRenderFxn5_1, 0x4d54f0);
DECL_FUNC(int (__stdcall*imageRenderFxn5_0)(int, int, int), imageRenderFxn5_0, 0x4d5530);
DECL_FUNC(int (__stdcall*imageRenderFxn2_1)(int, int, int), imageRenderFxn2_1, 0x4d5570);
DECL_FUNC(int (__stdcall*imageRenderFxn2_0)(int, int, int), imageRenderFxn2_0, 0x4d55b0);
DECL_FUNC(int(*nullsub_6)(), nullsub_6, 0x4d55f0);
CImage *unpackImageGrpData(CImage *result) {
    int address = 0x4d5600;
    CImage * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_4D56F0)(int), sub_4D56F0, 0x4d56f0);
int sub_4D5740(int result, _DWORD a2, int a3) {
    int address = 0x4d5740;
    int result_;
    __asm {
        mov eax, result
        mov edx, a2
        mov esi, a3
        call address
        mov result_, eax
    }
    return result_;
}
int ISCRIPT_UseLOFile(int result, CImage *a2, unsigned __int8 a3, int a4) {
    int address = 0x4d5770;
    int result_;
    __asm {
        mov eax, result
        mov edx, a2
        mov cl, a3
        mov edi, a4
        call address
        mov result_, eax
    }
    return result_;
}
CImage *CImage__updateGraphicData(CImage *result) {
    int address = 0x4d57b0;
    CImage * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
CImage *setImagePaletteType(CImage *result, unsigned __int8 a2) {
    int address = 0x4d58b0;
    CImage * result_;
    __asm {
        mov eax, result
        mov bl, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*ISCRIPT_setPosition)(), ISCRIPT_setPosition, 0x4d5900);
DECL_FUNC(int(*sub_4D5920)(), sub_4D5920, 0x4d5920);
DECL_FUNC(int(*sub_4D5930)(), sub_4D5930, 0x4d5930);
DECL_FUNC(int(*updateImageFrameIndex)(), updateImageFrameIndex, 0x4d5940);
CImage *sub_4D5960(CImage *result) {
    int address = 0x4d5960;
    CImage * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4D59C0)(), sub_4D59C0, 0x4d59c0);
DECL_FUNC(int(*updateImagePositionOffset)(), updateImagePositionOffset, 0x4d5a00);
int InitializeImageData(CImage *a1, CSprite *a2, int a3, char a4, char a5) {
    int address = 0x4d5a50;
    int result_;
    __asm {
        mov eax, a1
        mov edi, a2
        mov esi, a3
        push dword ptr a5
        push dword ptr a4
        call address
        mov result_, eax
    }
    return result_;
}
CImage *sub_4D5B00(CImage *result, int a2) {
    int address = 0x4d5b00;
    CImage * result_;
    __asm {
        mov eax, result
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4D5B60)(), sub_4D5B60, 0x4d5b60);
void sub_4D5BB0(CSprite *a1) {
    int address = 0x4d5bb0;
    __asm {
        mov edi, a1
        call address
    }
}
DECL_FUNC(int(*sub_4D5C20)(), sub_4D5C20, 0x4d5c20);
DECL_FUNC(void (__fastcall*imageRenderFxn12_1)(int, int, grpFrame *, rect *, int), imageRenderFxn12_1, 0x4d5c90);
DECL_FUNC(int (__stdcall*imageRenderFxn12_0)(int, int, int), imageRenderFxn12_0, 0x4d5cd0);
DECL_FUNC(void (__thiscall*iscriptDecloaking)(CImage *this_), iscriptDecloaking, 0x4d5d10);
DECL_FUNC(int(*iscriptCloaking)(), iscriptCloaking, 0x4d5d70);
DECL_FUNC(int(*sub_4D5DC0)(), sub_4D5DC0, 0x4d5dc0);
DECL_FUNC(int(*sub_4D5DE0)(), sub_4D5DE0, 0x4d5de0);
DECL_FUNC(int(*sub_4D5E00)(), sub_4D5E00, 0x4d5e00);
CImage *CopyImagePaletteType(CImage *result, CImage *a2) {
    int address = 0x4d5e40;
    CImage * result_;
    __asm {
        mov eax, result
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*ISCRIPT_PlayFrame)(), ISCRIPT_PlayFrame, 0x4d5e70);
CImage *updateImageDirection(CImage *result, unsigned int a2, unsigned __int8 a3) {
    int address = 0x4d5ea0;
    CImage * result_;
    __asm {
        mov eax, result
        mov edx, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
void flipImage(CImage *result, char a2) {
    int address = 0x4d5f30;
    __asm {
        mov eax, result
        mov cl, a2
        call address
    }
}
char setImageDirection(unsigned int a1, CImage *a2, unsigned __int8 a3) {
    int address = 0x4d5f80;
    char result_;
    __asm {
        mov edx, a1
        mov esi, a2
        push dword ptr a3
        call address
        mov result_, al
    }
    return result_;
}
void compileHealthBar(CImage *a1, CSprite *a2) {
    int address = 0x4d6010;
    __asm {
        mov esi, a1
        push dword ptr a2
        call address
    }
}
DECL_FUNC(int (__stdcall*imageRenderFxn14_1)(int, int, char), imageRenderFxn14_1, 0x4d6120);
DECL_FUNC(int (__stdcall*imageRenderFxn14_0)(int, int, char), imageRenderFxn14_0, 0x4d61a0);
DECL_FUNC(int (__stdcall*ReadImagesArray)(FILE *), ReadImagesArray, 0x4d6220);
unsigned int packImageData(unsigned int a1, CImage *a2) {
    int address = 0x4d6330;
    unsigned result_;
    __asm {
        mov ecx, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(CImage *(__fastcall*CreateHealthBar)(int a1, CSprite *a2), CreateHealthBar, 0x4d6420);
DECL_FUNC(int(*sub_4D64A0)(), sub_4D64A0, 0x4d64a0);
DECL_FUNC(int (__stdcall*writeImages)(FILE *), writeImages, 0x4d64c0);
void ISCRIPT_PlaySnd(int a1) {
    int address = 0x4d6610;
    __asm {
        mov eax, a1
        call address
    }
}
unsigned __int16 isValidScript(CImage *a1, int a2) {
    int address = 0x4d6640;
    unsigned result_;
    __asm {
        mov ebx, a1
        mov edi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4D6690)(), sub_4D6690, 0x4d6690);
void sub_4D66B0(CImage *a1) {
    int address = 0x4d66b0;
    __asm {
        mov eax, a1
        call address
    }
}
void sub_4D6740(CImage *a1, CSprite *a2, unsigned int a3, unsigned int a4) {
    int address = 0x4d6740;
    __asm {
        mov eax, a1
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
    }
}
int sub_4D67D0(CImage *a1, unsigned __int16 a2, int a3) {
    int address = 0x4d67d0;
    int result_;
    __asm {
        mov ebx, a1
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
void createSelectionCircleImage(CSprite *a1, CImage *a2, unsigned __int8 a3, __int16 a4) {
    int address = 0x4d6810;
    __asm {
        mov eax, a1
        mov ecx, a2
        push dword ptr a4
        push dword ptr a3
        call address
    }
}
unsigned __int16 InitializeHealthBarImage(int a1, CImage *a2) {
    int address = 0x4d68c0;
    unsigned result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*InitializePresetImageArrays)(), InitializePresetImageArrays, 0x4d6930);
DECL_FUNC(CImage *(__stdcall*ISCRIPT_CreateImage)(CImage *a1, int a2, char a3, char a4, int a5), ISCRIPT_CreateImage, 0x4d6d90);
DECL_FUNC(CImage *(__fastcall*sub_4D6F00)(int a1, CSprite *a2, unsigned int a3, unsigned int a4), sub_4D6F00, 0x4d6f00);
CImage *sub_4D6F90(CSprite *a1, unsigned __int16 a2, unsigned int a3, unsigned __int16 a4) {
    int address = 0x4d6f90;
    CImage * result_;
    __asm {
        mov eax, a1
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
CImage **CreateSelectionCircle(CSprite *a1, unsigned __int8 a2, __int16 a3) {
    int address = 0x4d7070;
    CImage ** result_;
    __asm {
        mov eax, a1
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
CThingy *ISCRIPT_CreateSprite(CImage *a1, unsigned __int16 a2, int a3, int a4, char a5) {
    int address = 0x4d7120;
    CThingy * result_;
    __asm {
        mov eax, a1
        push dword ptr a5
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*LoadImageData)(), LoadImageData, 0x4d7180);
DECL_FUNC(int(*LoadInitIscriptBIN)(), LoadInitIscriptBIN, 0x4d7390);
void BWFXN_PlayIscript(CImage *a1, StatusFlags a2, int a3, int a4, int a5) {
    int address = 0x4d74c0;
    __asm {
        mov ecx, a1
        mov edx, a2
        push dword ptr a5
        push dword ptr a4
        push dword ptr a3
        call address
    }
}
void PlayIscriptAnim(CImage *this_, Anims anim) {
    int address = 0x4d8470;
    __asm {
        mov ecx, this_
        push dword ptr anim
        call address
    }
}
void PlayWarpInOverlay(CImage *a1) {
    int address = 0x4d8500;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int (__thiscall*iscriptSomething_Death)(CImage *a1), iscriptSomething_Death, 0x4d8590);
DECL_FUNC(int(*sub_4D8600)(), sub_4D8600, 0x4d8600);
DECL_FUNC(int(*sub_4D86A0)(), sub_4D86A0, 0x4d86a0);
DECL_FUNC(int(*sub_4D8780)(), sub_4D8780, 0x4d8780);
void creditsDlgDestroy(dialog *a1) {
    int address = 0x4d8790;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int (__stdcall*sub_4D8840)(char *source), sub_4D8840, 0x4d8840);
char creditsEndPage(dialog *a1) {
    int address = 0x4d88d0;
    char result_;
    __asm {
        mov ebx, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(void (__fastcall*sub_4D8930)(dialog *dlg, int x, int y, rect *dst), sub_4D8930, 0x4d8930);
HANDLE creditsSetBackgroundImageFromFile(const char *a1, dialog *a2) {
    int address = 0x4d8970;
    HANDLE result_;
    __asm {
        mov eax, a1
        mov edi, a2
        call address
        mov result_, eax
    }
    return result_;
}
int runCreditsScriptCommands(char *tag, unsigned int a2, dialog *a3) {
    int address = 0x4d8a80;
    int result_;
    __asm {
        mov ecx, tag
        mov eax, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
signed int creditsDlgInit(dialog *a1) {
    int address = 0x4d8c60;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
signed int credits_keyDwn(dialog *a1, dlgEvent *a2) {
    int address = 0x4d8d20;
    signed result_;
    __asm {
        mov ecx, a1
        mov eax, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*creditsDlgInteract)(dialog *dlg, struct dlgEvent *evt), creditsDlgInteract, 0x4d8d60);
void *loadInitCreditsBIN(char *a1) {
    int address = 0x4d8df0;
    void * result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
int sub_4D8F90(int result, CampaignMission *a2) {
    int address = 0x4d8f90;
    int result_;
    __asm {
        mov eax, result
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(void(*BeginCredits)(void), BeginCredits, 0x4d8fd0);
DECL_FUNC(void(*BeginEpilog)(void), BeginEpilog, 0x4d90c0);
DECL_FUNC(void (__cdecl*sub_4D91B0)(), sub_4D91B0, 0x4d91b0);
DECL_FUNC(void (__cdecl*sub_4D9200)(), sub_4D9200, 0x4d9200);
DECL_FUNC(int(*sub_4D9250)(), sub_4D9250, 0x4d9250);
DECL_FUNC(int(*sub_4D9260)(), sub_4D9260, 0x4d9260);
DECL_FUNC(int(*lmissionInitSelf)(), lmissionInitSelf, 0x4d9270);
DECL_FUNC(int(*resetLastInputFrameCounts)(), resetLastInputFrameCounts, 0x4d92a0);
DECL_FUNC(int(*sub_4D9360)(), sub_4D9360, 0x4d9360);
DECL_FUNC(int(*sub_4D93B0)(), sub_4D93B0, 0x4d93b0);
DECL_FUNC(void (__cdecl*updateHUDInformation)(), updateHUDInformation, 0x4d93f0);
DECL_FUNC(int(*RefreshAllUnits)(), RefreshAllUnits, 0x4d9460);
int GameLoop(MenuPosition a1) {
    int address = 0x4d94b0;
    int result_;
    __asm {
        mov ebx, a1
        call address
        mov result_, eax
    }
    return result_;
}
void DoGameLoop(MenuPosition a1) {
    int address = 0x4d9530;
    __asm {
        mov ebx, a1
        call address
    }
}
DECL_FUNC(int(*GameLoopWaitSendTurn)(), GameLoopWaitSendTurn, 0x4d9550);
DECL_FUNC(int(*GameLoop_State)(), GameLoop_State, 0x4d9670);
DECL_FUNC(int(*GameLoop_Top)(), GameLoop_Top, 0x4d9840);
GamePosition BeginGame(MenuPosition a1) {
    int address = 0x4d9950;
    GamePosition result_;
    __asm {
        mov ebx, a1
        call address
        mov result_, ax
    }
    return result_;
}
DECL_FUNC(int(*sub_4D9AA0)(), sub_4D9AA0, 0x4d9aa0);
DECL_FUNC(int(*sub_4D9AB0)(), sub_4D9AB0, 0x4d9ab0);
DECL_FUNC(void (__thiscall*DestroyFontKey)(bool exit_code), DestroyFontKey, 0x4d9ac0);
DECL_FUNC(int(*sub_4D9B10)(), sub_4D9B10, 0x4d9b10);
DECL_FUNC(int(*KeyIsValid)(), KeyIsValid, 0x4d9ba0);
DECL_FUNC(int (__stdcall*getCDKeyInfo)(int), getCDKeyInfo, 0x4d9bf0);
DECL_FUNC(int(*makeStringHash)(), makeStringHash, 0x4d9cd0);
int KeyVerification(char *a1, char *a2) {
    int address = 0x4d9d60;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4D9E70)(), sub_4D9E70, 0x4d9e70);
DECL_FUNC(void(*InitializeFontKey)(void), InitializeFontKey, 0x4d9eb0);
DECL_FUNC(void (__thiscall*FreeLocalDLL)(bool exit_code), FreeLocalDLL, 0x4d9fc0);
DECL_FUNC(void (__thiscall*FreeMapdataTable)(bool exit_code), FreeMapdataTable, 0x4da060);
DECL_FUNC(int(*sub_4DA120)(), sub_4DA120, 0x4da120);
DECL_FUNC(int(*sub_4DA230)(), sub_4DA230, 0x4da230);
DECL_FUNC(int(*sub_4DA240)(), sub_4DA240, 0x4da240);
DECL_FUNC(int(*sub_4DA250)(), sub_4DA250, 0x4da250);
DECL_FUNC(int (__fastcall*SFileExists)(char *szFileName, HANDLE hMpq), SFileExists, 0x4da260);
DECL_FUNC(int(*sub_4DA290)(), sub_4DA290, 0x4da290);
DECL_FUNC(void (__thiscall*CloseAllArchives)(bool exit_code), CloseAllArchives, 0x4da2b0);
DECL_FUNC(void (__thiscall*vidinimoDestroy)(bool exit_code), vidinimoDestroy, 0x4da310);
DECL_FUNC(BOOL (__stdcall*LocalErrProc)(HWND, UINT, WPARAM, LPARAM), LocalErrProc, 0x4da350);
DECL_FUNC(int(*LoadMainModuleStringInfo)(), LoadMainModuleStringInfo, 0x4da440);
DECL_FUNC(void (__thiscall*DestroyFonts)(bool exit_code), DestroyFonts, 0x4da510);
HANDLE LoadInstallArchiveCD(DWORD a1, char *a2, char *filename) {
    int address = 0x4da6d0;
    HANDLE result_;
    __asm {
        mov eax, a1
        mov ebx, a2
        mov esi, filename
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(void (__thiscall*j_BWFXN_DSoundDestroy)(bool exit_code), j_BWFXN_DSoundDestroy, 0x4da780);
DECL_FUNC(int(*sub_4DA790)(), sub_4DA790, 0x4da790);
void localDll_Init(HINSTANCE a1) {
    int address = 0x4da7d0;
    __asm {
        mov esi, a1
        call address
    }
}
DECL_FUNC(void (__cdecl*CommandLineCheck)(), CommandLineCheck, 0x4da8a0);
signed int InitializeCDArchives(const char *filename, int a2) {
    int address = 0x4da950;
    signed result_;
    __asm {
        mov eax, filename
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
void DataVersionCheck(char *data_file_version) {
    int address = 0x4daa60;
    __asm {
        mov ebx, data_file_version
        call address
    }
}
DECL_FUNC(Font *(__fastcall*AllocateFont)(char *font_path, int default_value, int a3, int a4, int search_scope, char *logfilename, int logline), AllocateFont, 0x4dab00);
DECL_FUNC(int(*InitializeArchiveHandles)(), InitializeArchiveHandles, 0x4dabd0);
DECL_FUNC(int(*LoadGameFonts)(), LoadGameFonts, 0x4dae50);
DECL_FUNC(int(*LoadMenuFonts)(), LoadMenuFonts, 0x4daec0);
DECL_FUNC(void (__cdecl*PreInitData)(), PreInitData, 0x4daf30);
DECL_FUNC(void (__cdecl*audioVideoInit)(), audioVideoInit, 0x4db060);
DECL_FUNC(int(*gluMainDestroy)(), gluMainDestroy, 0x4db140);
DECL_FUNC(int(*sub_4DB180)(), sub_4DB180, 0x4db180);
DECL_FUNC(int(*sub_4DB1C0)(), sub_4DB1C0, 0x4db1c0);
DECL_FUNC(signed int (__thiscall*loadCampaignBIN)(HANDLE file), loadCampaignBIN, 0x4db200);
DECL_FUNC(int (__stdcall*sub_4DB260)(int, int, int), sub_4DB260, 0x4db260);
void gluMainCreate(dialog *a1) {
    int address = 0x4db280;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int(*sub_4DB480)(), sub_4DB480, 0x4db480);
signed int loadStareditProcess(dialog *a1) {
    int address = 0x4db490;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
signed int cmpgn_WaitForCDRom(void *a1, __int16 a2, char *filename) {
    int address = 0x4db5c0;
    signed result_;
    __asm {
        mov ecx, a1
        mov di, a2
        mov esi, filename
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4DB6A0)(), sub_4DB6A0, 0x4db6a0);
DECL_FUNC(int(*sub_4DB6C0)(), sub_4DB6C0, 0x4db6c0);
DECL_FUNC(int (__stdcall*SelGameMode)(int), SelGameMode, 0x4db6e0);
DECL_FUNC(int(*gluMain_DisplayCDRomErrorBinDlg)(), gluMain_DisplayCDRomErrorBinDlg, 0x4db770);
DECL_FUNC(bool (__fastcall*gluMain_Dlg_Interact)(dialog *dlg, struct dlgEvent *evt), gluMain_Dlg_Interact, 0x4db7a0);
DECL_FUNC(int(*loadMenu_gluMain)(), loadMenu_gluMain, 0x4db930);
DECL_FUNC(int (__stdcall*setLastOpenSlotToComputer)(char), setLastOpenSlotToComputer, 0x4dbb70);
DECL_FUNC(int(*sub_4DBBC0)(), sub_4DBBC0, 0x4dbbc0);
DECL_FUNC(int(*switchAllAvailableComputerSlotsToOpen)(), switchAllAvailableComputerSlotsToOpen, 0x4dbbe0);
DECL_FUNC(int(*setSinglePlayerValue)(), setSinglePlayerValue, 0x4dbc00);
int getCampaignIndex(MapData a1, int a2) {
    int address = 0x4dbc20;
    int result_;
    __asm {
        mov di, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__thiscall*parseCmpgnCheatTypeString)(char *this_, int a2, int a3, int a4, MapData4 *a5), parseCmpgnCheatTypeString, 0x4dbc60);
DECL_FUNC(void (__cdecl*sub_4DBD60)(), sub_4DBD60, 0x4dbd60);
DECL_FUNC(int(*sub_4DBE50)(), sub_4DBE50, 0x4dbe50);
DECL_FUNC(int(*initSingle)(), initSingle, 0x4dbea0);
DECL_FUNC(int(*sub_4DBEC0)(), sub_4DBEC0, 0x4dbec0);
DECL_FUNC(int(*sub_4DBEE0)(), sub_4DBEE0, 0x4dbee0);
DECL_FUNC(int(*sub_4DBF80)(), sub_4DBF80, 0x4dbf80);
int CreateCampaignGame(MapData a1) {
    int address = 0x4dbfc0;
    int result_;
    __asm {
        mov ax, a1
        call address
        mov result_, eax
    }
    return result_;
}
int LoadCampaignWithCharacter(int a1) {
    int address = 0x4dc0b0;
    int result_;
    __asm {
        mov edi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*_CreateNextCampaignGame)(), _CreateNextCampaignGame, 0x4dc1c0);
DECL_FUNC(int (__stdcall*ContinueCampaign)(int), ContinueCampaign, 0x4dc320);
DECL_FUNC(int(*RandomizeShort)(), RandomizeShort, 0x4dc4a0);
DECL_FUNC(int (__stdcall*sub_4DC4E0)(int), sub_4DC4E0, 0x4dc4e0);
DECL_FUNC(int(*sub_4DC510)(), sub_4DC510, 0x4dc510);
DECL_FUNC(int(*sub_4DC520)(), sub_4DC520, 0x4dc520);
DECL_FUNC(int(*sub_4DC530)(), sub_4DC530, 0x4dc530);
DECL_FUNC(int(*SetInGameLoop)(), SetInGameLoop, 0x4dc540);
DECL_FUNC(int (__stdcall*RandBetween)(int), RandBetween, 0x4dc550);
DECL_FUNC(int(*BWFXN_NetSelectReturnMenu)(), BWFXN_NetSelectReturnMenu, 0x4dc5b0);
MapData4 sub_4DC630(MapData4 result, int a2, int a3) {
    int address = 0x4dc630;
    MapData4 result_;
    __asm {
        mov eax, result
        mov edx, a2
        mov ecx, a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4DC650)(), sub_4DC650, 0x4dc650);
DECL_FUNC(int(*sub_4DC660)(), sub_4DC660, 0x4dc660);
DECL_FUNC(BOOL (__stdcall*EnumFunc)(HWND, LPARAM), EnumFunc, 0x4dc6d0);
DECL_FUNC(void (__thiscall*DestroyGluAllStrings)(bool exit_code), DestroyGluAllStrings, 0x4dc720);
DECL_FUNC(int(*getBGPalInfo)(), getBGPalInfo, 0x4dc750);
DECL_FUNC(int(*sub_4DC7D0)(), sub_4DC7D0, 0x4dc7d0);
DECL_FUNC(int(*sub_4DC800)(), sub_4DC800, 0x4dc800);
DECL_FUNC(int (__stdcall*sub_4DC840)(int), sub_4DC840, 0x4dc840);
DECL_FUNC(int(*sub_4DC870)(), sub_4DC870, 0x4dc870);
DECL_FUNC(int(*sub_4DC8D0)(), sub_4DC8D0, 0x4dc8d0);
DECL_FUNC(int(*sub_4DC8F0)(), sub_4DC8F0, 0x4dc8f0);
DECL_FUNC(int(*sub_4DC940)(), sub_4DC940, 0x4dc940);
DECL_FUNC(int (__thiscall*cleanUpFileNameString)(char *), cleanUpFileNameString, 0x4dca20);
DECL_FUNC(int (__thiscall*sub_4DCB00)(void *), sub_4DCB00, 0x4dcb00);
DECL_FUNC(int(*sub_4DCBD0)(), sub_4DCBD0, 0x4dcbd0);
int sub_4DCC00(dialog *a1) {
    int address = 0x4dcc00;
    int result_;
    __asm {
        mov ebx, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(void (__thiscall*nextLeaveGameMenu)(DWORD this_), nextLeaveGameMenu, 0x4dcc50);
DECL_FUNC(int(*loadMenu_None)(), loadMenu_None, 0x4dcc90);
DECL_FUNC(int (__thiscall*DLGSwishOutProc)(dialog *a1), DLGSwishOutProc, 0x4dcd00);
DECL_FUNC(int(*sub_4DCEA0)(), sub_4DCEA0, 0x4dcea0);
DECL_FUNC(int(*sub_4DCEE0)(), sub_4DCEE0, 0x4dcee0);
void setDialogString(dialog *a1, __int16 a2, const char *a3) {
    int address = 0x4dcf30;
    __asm {
        mov eax, a1
        mov cx, a2
        mov edi, a3
        call address
    }
}
DECL_FUNC(int(*changeMenu)(), changeMenu, 0x4dcfa0);
DECL_FUNC(char (__stdcall*DLG_SwishOut)(dialog *a1), DLG_SwishOut, 0x4dd040);
DECL_FUNC(int(*jmpNoMenu)(), jmpNoMenu, 0x4dd1c0);
DECL_FUNC(int (__stdcall*buttonMouseOver)(int), buttonMouseOver, 0x4dd1d0);
DECL_FUNC(int (__thiscall*DLG_SwishInLock)(dialog *this_), DLG_SwishInLock, 0x4dd220);
void **DLG_ServerMenuSwishBegin(int a1, dialog *a2, int a3) {
    int address = 0x4dd540;
    void ** result_;
    __asm {
        mov edx, a1
        mov esi, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
void DlgSwooshin(__int16 a1, swishTimer *a2, dialog *a3, signed __int16 a4) {
    int address = 0x4dd5e0;
    __asm {
        mov ax, a1
        mov ecx, a2
        push dword ptr a4
        push dword ptr a3
        call address
    }
}
DECL_FUNC(void(*loadTFontPcx)(void), loadTFontPcx, 0x4dd850);
DECL_FUNC(void(*loadtEffectPcx)(void), loadtEffectPcx, 0x4dd910);
int registerMenuFunctions(FnInteract *a1, dialog *a2, int a3, int a4) {
    int address = 0x4dd9e0;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__fastcall*loadFullMenuDLG)(char *szFileName, void *buffer, int read, char *logfilename, int logline), loadFullMenuDLG, 0x4ddbe0);
DECL_FUNC(int(*sub_4DDCF0)(), sub_4DDCF0, 0x4ddcf0);
DECL_FUNC(const char *(__stdcall*get_GluAll_String)(GluAllTblEntry tbl_entry), get_GluAll_String, 0x4ddd30);
DECL_FUNC(int(*sub_4DDE70)(), sub_4DDE70, 0x4dde70);
DECL_FUNC(void (__cdecl*loadDlgGrp)(), loadDlgGrp, 0x4ddf00);
DECL_FUNC(void(*loadCursor)(void), loadCursor, 0x4ddf90);
DECL_FUNC(int (__fastcall*sub_4DE040)(dialog *dlg, struct dlgEvent *evt), sub_4DE040, 0x4de040);
DECL_FUNC(void(*init_gluesounds)(void), init_gluesounds, 0x4de0b0);
DECL_FUNC(int(*sub_4DE130)(), sub_4DE130, 0x4de130);
DECL_FUNC(int(*DLGSwishInProc)(), DLGSwishInProc, 0x4de140);
int *DLG_SwishIn(dialog *a1) {
    int address = 0x4de150;
    int * result_;
    __asm {
        mov ebx, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*SwitchMenu)(), SwitchMenu, 0x4de200);
DECL_FUNC(int (__stdcall*sub_4DE740)(int), sub_4DE740, 0x4de740);
DECL_FUNC(int(*sub_4DE770)(), sub_4DE770, 0x4de770);
DECL_FUNC(int(*sub_4DE790)(), sub_4DE790, 0x4de790);
DECL_FUNC(int(*freeChkFileMem)(), freeChkFileMem, 0x4de7a0);
DECL_FUNC(int(*trimTrailingSpaces)(), trimTrailingSpaces, 0x4de7e0);
DECL_FUNC(int(*sub_4DE840)(), sub_4DE840, 0x4de840);
DECL_FUNC(int(*sub_4DE860)(), sub_4DE860, 0x4de860);
DECL_FUNC(int(*sub_4DE880)(), sub_4DE880, 0x4de880);
DECL_FUNC(int(*sub_4DE890)(), sub_4DE890, 0x4de890);
DECL_FUNC(int(*sub_4DE8A0)(), sub_4DE8A0, 0x4de8a0);
DECL_FUNC(int(*sub_4DE8B0)(), sub_4DE8B0, 0x4de8b0);
DECL_FUNC(int(*sub_4DE8C0)(), sub_4DE8C0, 0x4de8c0);
DECL_FUNC(int(*sub_4DE8D0)(), sub_4DE8D0, 0x4de8d0);
DECL_FUNC(int(*sub_4DE8E0)(), sub_4DE8E0, 0x4de8e0);
DECL_FUNC(int(*sub_4DE8F0)(), sub_4DE8F0, 0x4de8f0);
DECL_FUNC(int(*sub_4DE920)(), sub_4DE920, 0x4de920);
void getReplPlayerColors(int result) {
    int address = 0x4de950;
    __asm {
        mov eax, result
        call address
    }
}
void getReplPlayerStructs(PlayerInfo *a1) {
    int address = 0x4de9a0;
    __asm {
        mov eax, a1
        call address
    }
}
void copyPlayerStructsToReplayPlayerStructs(void *result, void *a2) {
    int address = 0x4de9d0;
    __asm {
        mov eax, result
        mov edx, a2
        call address
    }
}
void SetReplayData(struct_game_140 *a1, PlayerInfo *a2, int *a3) {
    int address = 0x4dea10;
    __asm {
        mov eax, a1
        mov edx, a2
        mov ebx, a3
        call address
    }
}
DECL_FUNC(int(*sub_4DEA90)(), sub_4DEA90, 0x4dea90);
DECL_FUNC(int (__stdcall*BTNSCOND_ReplayPlayPause)(int), BTNSCOND_ReplayPlayPause, 0x4deac0);
DECL_FUNC(int (__stdcall*BTNSCOND_ReplaySpeedUp)(int), BTNSCOND_ReplaySpeedUp, 0x4deaf0);
DECL_FUNC(int (__stdcall*BTNSCOND_ReplaySlowDown)(int), BTNSCOND_ReplaySlowDown, 0x4deb40);
void SetGameSpeed_maybe(int game_speed, unsigned __int8 a2, unsigned int a3) {
    int address = 0x4deb90;
    __asm {
        mov eax, game_speed
        mov dl, a2
        mov ecx, a3
        call address
    }
}
DECL_FUNC(int (__stdcall*sub_4DECF0)(unsigned __int8 a2), sub_4DECF0, 0x4decf0);
DECL_FUNC(int(*sub_4DED10)(), sub_4DED10, 0x4ded10);
DECL_FUNC(int (__stdcall*CopyLastreplay)(int), CopyLastreplay, 0x4ded30);
DECL_FUNC(int(*replayFrameComputation)(), replayFrameComputation, 0x4deed0);
int saveGame_Destroy(dialog *a1) {
    int address = 0x4df000;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*GetReplayFileList)(int), GetReplayFileList, 0x4df0b0);
DECL_FUNC(int(*sub_4DF1E0)(), sub_4DF1E0, 0x4df1e0);
DECL_FUNC(int(*DeleteFileIfExists)(), DeleteFileIfExists, 0x4df220);
DECL_FUNC(int(*CMDACT_IncreaseReplaySpeed)(), CMDACT_IncreaseReplaySpeed, 0x4df260);
DECL_FUNC(int(*CMDACT_SetReplaySpeed)(), CMDACT_SetReplaySpeed, 0x4df2c0);
DECL_FUNC(int(*CMDACT_DecreaseReplaySpeed)(), CMDACT_DecreaseReplaySpeed, 0x4df300);
DECL_FUNC(int(*replay_leaderboard_Hide)(), replay_leaderboard_Hide, 0x4df360);
DECL_FUNC(int(*replay_leaderboard_Show)(), replay_leaderboard_Show, 0x4df3b0);
void sub_4DF4A0(dialog *a1) {
    int address = 0x4df4a0;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(void (__thiscall*sub_4DF520)(dialog *this_), sub_4DF520, 0x4df520);
int LoadReplayFile(char *a1, int a2, int a3) {
    int address = 0x4df570;
    int result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        mov edi, a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(signed int (__fastcall*savegame_Delete)(dialog *a1, dlgEvent *a2), savegame_Delete, 0x4df6d0);
char sub_4DF740(dialog *a1, struct dlgEvent *evt) {
    int address = 0x4df740;
    char result_;
    __asm {
        mov edi, a1
        push dword ptr evt
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__stdcall*ReplayFileListIterateItemProc)(int), ReplayFileListIterateItemProc, 0x4df880);
DECL_FUNC(bool (__fastcall*savegame_TextBox)(dialog *dlg, dlgEvent *evt), savegame_TextBox, 0x4df8a0);
void createReplayListbox(dialog *a1) {
    int address = 0x4df950;
    __asm {
        mov edi, a1
        call address
    }
}
DECL_FUNC(bool (__fastcall*savegame_Listbox)(dialog *dlg, dlgEvent *evt), savegame_Listbox, 0x4df9e0);
DECL_FUNC(int(*saveGame_InitChildren)(), saveGame_InitChildren, 0x4dfa30);
DECL_FUNC(int(*sub_4DFA90)(), sub_4DFA90, 0x4dfa90);
DECL_FUNC(int (__stdcall*SaveReplay)(int), SaveReplay, 0x4dfab0);
DECL_FUNC(int(*CopyLastReplayTo)(), CopyLastReplayTo, 0x4dfd70);
DECL_FUNC(int(*saveGame_Create)(), saveGame_Create, 0x4dfdd0);
DECL_FUNC(bool (__fastcall*savegameBIN_Main)(dialog *dlg, struct dlgEvent *evt), savegameBIN_Main, 0x4dfef0);
DECL_FUNC(int(*LoadSaveGameBIN_Main)(), LoadSaveGameBIN_Main, 0x4dffc0);
DECL_FUNC(int(*BWSetSecurityInfo)(), BWSetSecurityInfo, 0x4e0200);
DECL_FUNC(int (__stdcall*CheckForOtherInstances)(LPCSTR lpClassName), CheckForOtherInstances, 0x4e0380);
DECL_FUNC(int(*VerifySystemMemory)(), VerifySystemMemory, 0x4e0440);
DECL_FUNC(void (__cdecl*CreateMainWindow)(), CreateMainWindow, 0x4e05b0);
void GameRun(MenuPosition a1) {
    int address = 0x4e0710;
    __asm {
        mov ebx, a1
        call address
    }
}
DECL_FUNC(int(*GameMainLoop)(), GameMainLoop, 0x4e0820);
DECL_FUNC(unsigned int (__fastcall*sub_4E0B30)(dialog *a1, dlgEvent *a2), sub_4E0B30, 0x4e0b30);
__int16 genericLightupBtnUserDestroyEventHandler(dialog *a1) {
    int address = 0x4e0b80;
    __int16 result_;
    __asm {
        mov edi, a1
        call address
        mov result_, ax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_4E0BE0)(int, int), sub_4E0BE0, 0x4e0be0);
DECL_FUNC(int(*sub_4E0D10)(), sub_4E0D10, 0x4e0d10);
void genericLightupBtnMouseUpdate(dlgEvent *a1, rect *a2, dialog *a3) {
    int address = 0x4e0d40;
    __asm {
        mov eax, a1
        mov ebx, a2
        mov esi, a3
        call address
    }
}
int activateDialog(dialog *a1, dialog *a2) {
    int address = 0x4e0dd0;
    int result_;
    __asm {
        mov ecx, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4E0E40)(), sub_4E0E40, 0x4e0e40);
DECL_FUNC(void (__thiscall*sub_4E0F50)(dialog *this_), sub_4E0F50, 0x4e0f50);
void sub_4E1020(dialog *a1, char a2) {
    int address = 0x4e1020;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
    }
}
void sub_4E10F0(dialog *result) {
    int address = 0x4e10f0;
    __asm {
        mov eax, result
        call address
    }
}
DECL_FUNC(void (__fastcall*sub_4E1120)(dialog *dlg, int x, int y, rect *dst), sub_4E1120, 0x4e1120);
DECL_FUNC(void (__fastcall*genericLightupBtnUpdate)(dialog *dlg, int x, int y, rect *dst), genericLightupBtnUpdate, 0x4e1180);
void MenuGenericBtnInitChildren(dialog *dlg) {
    int address = 0x4e1220;
    __asm {
        mov eax, dlg
        call address
    }
}
DECL_FUNC(int(*PlayVidInRect)(), PlayVidInRect, 0x4e1260);
unsigned int MenuGenericBtnUserEventHandler(dialog *a1, dlgEvent *a2, dialog *a3) {
    int address = 0x4e1390;
    unsigned result_;
    __asm {
        mov eax, a1
        mov edx, a2
        mov ecx, a3
        call address
        mov result_, eax
    }
    return result_;
}
int ButtonVideo(dialog *a1) {
    int address = 0x4e14a0;
    int result_;
    __asm {
        mov edi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*Menu_Generic_Button)(dialog *dlg, dlgEvent *evt), Menu_Generic_Button, 0x4e1560);
unsigned int sub_4E1640(dialog *a1, dlgEvent *a2) {
    int address = 0x4e1640;
    unsigned result_;
    __asm {
        mov eax, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
unsigned int genericLightupBtnUserEventHandler(dlgEvent *a1, dialog *a2) {
    int address = 0x4e1670;
    unsigned result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*gluRdyZ_Secret)(dialog *dlg, dlgEvent *evt), gluRdyZ_Secret, 0x4e17a0);
DECL_FUNC(bool (__fastcall*genericLightupBtnInteract)(dialog *dlg, struct dlgEvent *evt), genericLightupBtnInteract, 0x4e17e0);
int sub_4E18C0(dialog *a1) {
    int address = 0x4e18c0;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
int sub_4E1900(dialog *a1) {
    int address = 0x4e1900;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
void GenericControlMouseEvt(int a1, dialog *a2) {
    int address = 0x4e1970;
    __asm {
        mov ecx, a1
        mov esi, a2
        call address
    }
}
int sub_4E19F0(dialog *a1, dialog *a2) {
    int address = 0x4e19f0;
    int result_;
    __asm {
        mov ecx, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
unsigned int GenericControlInteract(dialog *a1, dlgEvent *a2) {
    int address = 0x4e1a70;
    unsigned result_;
    __asm {
        mov eax, a1
        mov ebx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*genericCheckboxInteract)(dialog *dlg, struct dlgEvent *evt), genericCheckboxInteract, 0x4e1b50);
DECL_FUNC(bool (__fastcall*genericOptionInteract)(dialog *dlg, struct dlgEvent *evt), genericOptionInteract, 0x4e1bc0);
DECL_FUNC(bool (__fastcall*genericBtnInteract)(dialog *dlg, struct dlgEvent *evt), genericBtnInteract, 0x4e1c20);
DECL_FUNC(int (__stdcall*BWFXN_Draw)(int, int, int), BWFXN_Draw, 0x4e1c70);
DECL_FUNC(void (__stdcall*BWFXN_DrawBox)(s16 x, s16 y, u16 w, u16 h), BWFXN_DrawBox, 0x4e1d20);
DECL_FUNC(int (__stdcall*CreatePath_PopulatePathAreas)(int), CreatePath_PopulatePathAreas, 0x4e1d90);
char sub_4E2510(_DWORD a1) {
    int address = 0x4e2510;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*sub_4E25F0)(), sub_4E25F0, 0x4e25f0);
DECL_FUNC(int (__stdcall*sub_4E2700)(int), sub_4E2700, 0x4e2700);
DECL_FUNC(int(*EndAreaFixup)(), EndAreaFixup, 0x4e27a0);
DECL_FUNC(int (__stdcall*AreaFixup_Constructor)(__int16), AreaFixup_Constructor, 0x4e2820);
DECL_FUNC(int (__stdcall*DoAreaFixup)(int, int, int), DoAreaFixup, 0x4e29b0);
DECL_FUNC(int (__stdcall*upgradeAllUpgradesFromUnit)(int, int), upgradeAllUpgradesFromUnit, 0x4e2b50);
DECL_FUNC(int (__stdcall*researchAllTechsFromUnit)(int, int), researchAllTechsFromUnit, 0x4e2c00);
DECL_FUNC(int(*sub_4E2CB0)(), sub_4E2CB0, 0x4e2cb0);
DECL_FUNC(int(*somethingAIType)(), somethingAIType, 0x4e2d30);
int CreateUnitHash(CUnit *a1) {
    int address = 0x4e2da0;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
bool *unpackUnitData(CUnit *a1, bool *a2) {
    int address = 0x4e2e20;
    bool * result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
int packUnitData(CUnit *a1, int a2) {
    int address = 0x4e3410;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4E3DC0)(), sub_4E3DC0, 0x4e3dc0);
DECL_FUNC(int(*networkTBLPlayerMessage)(), networkTBLPlayerMessage, 0x4e3de0);
DECL_FUNC(int (__stdcall*CTF_FinishedCaptureFlagEvent)(int), CTF_FinishedCaptureFlagEvent, 0x4e3e90);
DECL_FUNC(int (__stdcall*sub_4E3F10)(int), sub_4E3F10, 0x4e3f10);
DECL_FUNC(int (__stdcall*CTF_TakeFlagEvent)(int), CTF_TakeFlagEvent, 0x4e3f30);
char orders_CTFCOP2(CUnit *unit) {
    int address = 0x4e3fb0;
    char result_;
    __asm {
        mov eax, unit
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__fastcall*CTFCOP_CheckForFlagCapture)(CUnit *unit, CUnit *a2), CTFCOP_CheckForFlagCapture, 0x4e4130);
CUnit *orders_CTFCOP1(CUnit *a1) {
    int address = 0x4e41a0;
    CUnit * result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
int toggleUnitPath(CUnit *a1) {
    int address = 0x4e42a0;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*getAllocatedPath)(), getAllocatedPath, 0x4e42f0);
DECL_FUNC(int (__stdcall*sub_4E4380)(int), sub_4E4380, 0x4e4380);
DECL_FUNC(int (__stdcall*sub_4E44B0)(int), sub_4E44B0, 0x4e44b0);
DECL_FUNC(int (__stdcall*sub_4E4520)(int), sub_4E4520, 0x4e4520);
int sub_4E4590(dialog *a1) {
    int address = 0x4e4590;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
int sub_4E4670(dialog *a1) {
    int address = 0x4e4670;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_4E46A0)(int, int), sub_4E46A0, 0x4e46a0);
DECL_FUNC(void (__fastcall*sub_4E4750)(dialog *dlg, int x, int y, rect *dst), sub_4E4750, 0x4e4750);
DECL_FUNC(void (__fastcall*sub_4E4770)(dialog *dlg, int x, int y, rect *dst), sub_4E4770, 0x4e4770);
DECL_FUNC(int(*j_BWFXN_NextFrameHelperFunctionTarget)(), j_BWFXN_NextFrameHelperFunctionTarget, 0x4e4810);
DECL_FUNC(char (__fastcall*sub_4E4820)(dialog *a1), sub_4E4820, 0x4e4820);
DECL_FUNC(bool (__fastcall*dlgfatal_loop)(dialog *dlg, struct dlgEvent *evt), dlgfatal_loop, 0x4e4980);
DECL_FUNC(int(*load_DLGFatal_BIN)(), load_DLGFatal_BIN, 0x4e4a10);
int isAttemptingProtossBuild(CUnit *a1) {
    int address = 0x4e4c40;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
char orders_Warpin(CUnit *a1) {
    int address = 0x4e4c70;
    char result_;
    __asm {
        mov edi, a1
        call address
        mov result_, al
    }
    return result_;
}
char orders_ProbeBuild(CUnit *a1) {
    int address = 0x4e4d00;
    char result_;
    __asm {
        mov edi, a1
        call address
        mov result_, al
    }
    return result_;
}
void orders_bldgUnderConstruction_Protoss(CUnit *a1, __int16 a2) {
    int address = 0x4e4f40;
    __asm {
        mov eax, a1
        mov bx, a2
        call address
    }
}
DECL_FUNC(void (__stdcall*sub_4E51C0)(dialog *dlg, __int16 a2, unsigned __int16 a3), sub_4E51C0, 0x4e51c0);
DECL_FUNC(int(*sub_4E5290)(), sub_4E5290, 0x4e5290);
void printStatresInfo(dialog *a1, __int16 a2, int a3, int a4, int a5) {
    int address = 0x4e52e0;
    __asm {
        mov ebx, a1
        push dword ptr a5
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
    }
}
void showSupplyInfo(dialog *a1, __int16 a2, unsigned __int16 a3, unsigned __int16 a4) {
    int address = 0x4e53b0;
    __asm {
        mov ebx, a1
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
    }
}
DECL_FUNC(void (__fastcall*statRes_Text_Update)(dialog *dlg, int x, int y, rect *dst), statRes_Text_Update, 0x4e5460);
DECL_FUNC(int (__stdcall*setCountdownTimerString)(char *source), setCountdownTimerString, 0x4e5590);
DECL_FUNC(int(*DisableCountdownTimer)(), DisableCountdownTimer, 0x4e5600);
DECL_FUNC(void (__fastcall*StatRes_MainProc)(dialog *a1), StatRes_MainProc, 0x4e5640);
DECL_FUNC(void (__stdcall*sub_4E57D0)(int a1), sub_4E57D0, 0x4e57d0);
DECL_FUNC(bool (__fastcall*StatRes_CustomCtrl)(dialog *dlg, dlgEvent *evt), StatRes_CustomCtrl, 0x4e5850);
void StatRes_RegisterCustomProcs(dialog *a1) {
    int address = 0x4e58d0;
    __asm {
        mov esi, a1
        call address
    }
}
DECL_FUNC(bool (__fastcall*StatRes_DialogInteract)(dialog *dlg, dlgEvent *evt), StatRes_DialogInteract, 0x4e5910);
DECL_FUNC(int(*load_StatRes_BIN)(), load_StatRes_BIN, 0x4e5990);
BOOL sub_4E5AD0(CUnit *a1) {
    int address = 0x4e5ad0;
    BOOL result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4E5B30)(), sub_4E5B30, 0x4e5b30);
DECL_FUNC(signed int (__fastcall*getUpdatedSightRange)(int a1, CUnit *a2, int a3), getUpdatedSightRange, 0x4e5b40);
unsigned __int32 UnitIsInvincible_(CUnit *a1) {
    int address = 0x4e5c70;
    unsigned result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4E5C90)(), sub_4E5C90, 0x4e5c90);
void RemoveOverlays(CUnit *a1, unsigned int a2, unsigned int a3) {
    int address = 0x4e5cf0;
    __asm {
        mov eax, a1
        mov edx, a2
        mov edi, a3
        call address
    }
}
DECL_FUNC(int(*sub_4E5D50)(), sub_4E5D50, 0x4e5d50);
void sub_4E5D60(CUnit *result, UnitType a2) {
    int address = 0x4e5d60;
    __asm {
        mov eax, result
        mov cx, a2
        call address
    }
}
int isUnitVisible(CUnit *a1) {
    int address = 0x4e5db0;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
int isTargetVisible(CUnit *a1, CUnit *a2) {
    int address = 0x4e5e30;
    int result_;
    __asm {
        mov eax, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
char getRightClickActionOrder(CUnit *a1) {
    int address = 0x4e5ea0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*sub_4E5EE0)(), sub_4E5EE0, 0x4e5ee0);
DECL_FUNC(int(*sub_4E5F00)(), sub_4E5F00, 0x4e5f00);
DECL_FUNC(void (__stdcall*refreshUnitVision)(CUnit *a1), refreshUnitVision, 0x4e5f30);
DECL_FUNC(int(*moveScreenToUnit)(), moveScreenToUnit, 0x4e6020);
DECL_FUNC(CImage *(__fastcall*sub_4E6060)(CUnit *a1, char a2, char a3, char a4), sub_4E6060, 0x4e6060);
char UpdateUnitDamageOverlay(CUnit *a1) {
    int address = 0x4e6090;
    char result_;
    __asm {
        mov esi, a1
        call address
        mov result_, al
    }
    return result_;
}
CImage *CreateShieldOverlay(int a1, CUnit *a2) {
    int address = 0x4e6140;
    CImage * result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
char CreateUnitSelection(CUnit *a1, char a2) {
    int address = 0x4e6180;
    char result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, al
    }
    return result_;
}
char sub_4E6260(char a1, CUnit *a2) {
    int address = 0x4e6260;
    char result_;
    __asm {
        mov bl, a1
        mov esi, a2
        call address
        mov result_, al
    }
    return result_;
}
char DestroyUnitSelection(CUnit *a1) {
    int address = 0x4e6290;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
char sub_4E62F0(CUnit *a1) {
    int address = 0x4e62f0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*sub_4E6310)(), sub_4E6310, 0x4e6310);
int unitDeathSomething_0(CUnit *a1) {
    int address = 0x4e6340;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *initUnitTrapDoodad(CUnit *a1) {
    int address = 0x4e6490;
    CUnit * result_;
    __asm {
        mov edi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*_CreateDashedSelection)(), _CreateDashedSelection, 0x4e65c0);
int SetConstructionGraphic(CUnit *a1, int a2) {
    int address = 0x4e65e0;
    int result_;
    __asm {
        mov edi, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
int isConstructingAddon(CUnit *a1) {
    int address = 0x4e66b0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*CancelAddon_Direct)(), CancelAddon_Direct, 0x4e66e0);
int orders_NukeTrain(CUnit *a1) {
    int address = 0x4e6700;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(char (__stdcall*orders_PlaceAddon)(CUnit *a1), orders_PlaceAddon, 0x4e6880);
DECL_FUNC(int (__thiscall*unitIsActiveTransport)(CUnit *this_), unitIsActiveTransport, 0x4e6ba0);
BOOL sub_4E6BE0(CUnit *a1, CUnit *a2) {
    int address = 0x4e6be0;
    BOOL result_;
    __asm {
        mov eax, a1
        mov edx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4E6C00)(), sub_4E6C00, 0x4e6c00);
DECL_FUNC(int (__stdcall*sub_4E6C10)(signed int x, signed int y), sub_4E6C10, 0x4e6c10);
bool *getLoadedUnitFromIndex(CUnit *a1, int a2) {
    int address = 0x4e6c40;
    bool * result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
bool *getFirstLoadedUnit(CUnit *a1) {
    int address = 0x4e6c90;
    bool * result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
signed int iterateLoadedUnits(CUnit *a1, int (__fastcall *a2)(_DWORD, _DWORD), int a3) {
    int address = 0x4e6d00;
    signed result_;
    __asm {
        mov eax, a1
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*getFirstLoadedWorker)(), getFirstLoadedWorker, 0x4e6d90);
int CanBeEnteredBy(CUnit *transport, CUnit *unit) {
    int address = 0x4e6e00;
    int result_;
    __asm {
        mov eax, transport
        push dword ptr unit
        call address
        mov result_, eax
    }
    return result_;
}
signed int sub_4E6EF0(CUnit *a1, int a2) {
    int address = 0x4e6ef0;
    signed result_;
    __asm {
        mov ebx, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
signed int isUnitLoaded(CUnit *a1) {
    int address = 0x4e7110;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__thiscall*getLoadedSpaceAmount)(CUnit *this_), getLoadedSpaceAmount, 0x4e7170);
BOOL sub_4E72E0(CUnit *a1) {
    int address = 0x4e72e0;
    BOOL result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
char orders_TransportIdle(CUnit *a1) {
    int address = 0x4e7300;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
char orders_Pickup3_0(CUnit *a1) {
    int address = 0x4e73b0;
    char result_;
    __asm {
        mov edi, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(signed int (__stdcall*AI_GetTransportAssist)(CUnit *a1, int a2, int a3), AI_GetTransportAssist, 0x4e7420);
char transportIdleOpen(CUnit *a1) {
    int address = 0x4e75d0;
    char result_;
    __asm {
        mov edi, a1
        call address
        mov result_, al
    }
    return result_;
}
BOOL canUnload(int a1, CUnit *unit, Position *outPos) {
    int address = 0x4e76c0;
    BOOL result_;
    __asm {
        mov eax, a1
        mov esi, unit
        push dword ptr outPos
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(char (__stdcall*orders_MoveUnload)(CUnit *a1), orders_MoveUnload, 0x4e7700);
char sub_4E78E0(CUnit *a1, CUnit *a2) {
    int address = 0x4e78e0;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, al
    }
    return result_;
}
char orders_Pickup4_0(CUnit *a1) {
    int address = 0x4e7b70;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
char orders_EnterTransport(CUnit *a1) {
    int address = 0x4e7cf0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
int sub_4E7E10(CUnit *a1, int a2) {
    int address = 0x4e7e10;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
signed int Unload_(CUnit *a1) {
    int address = 0x4e7f70;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
char orders_Unload(CUnit *a1) {
    int address = 0x4e80d0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
CUnit *IterateUnitsAtLocationTargetProc(int (__fastcall *a1)(CUnit *, CUnit *), int eax0, CUnit *a2) {
    int address = 0x4e8280;
    CUnit * result_;
    __asm {
        mov ebx, a1
        mov eax, eax0
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *_CreateSplashWeaponProc(__int16 a1, __int16 a2, __int16 a3, int (__fastcall *a4)(CUnit *, CUnit *), CUnit *a5) {
    int address = 0x4e82e0;
    CUnit * result_;
    __asm {
        mov ax, a1
        mov dx, a2
        mov cx, a3
        push dword ptr a5
        push dword ptr a4
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *GetNearest(int a1, CUnit *a2, __int16 a3, __int16 a4, signed int a5, signed int a6, int a7, int a8, int (__fastcall *a9)(CUnit *, UnitType), void *data) {
    int address = 0x4e8320;
    CUnit * result_;
    __asm {
        mov eax, a1
        push dword ptr data
        push dword ptr a9
        push dword ptr a8
        push dword ptr a7
        push dword ptr a6
        push dword ptr a5
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *sub_4E8660(__int16 a1, __int16 a2, int a3, int (__fastcall *a4)(_DWORD, _DWORD), int unit_type) {
    int address = 0x4e8660;
    CUnit * result_;
    __asm {
        mov bx, a1
        push dword ptr unit_type
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *GetNearestUnitFrom(__int16 a1, __int16 a2, __int16 a3, int (__fastcall *a4)(_DWORD, _DWORD), int unit_type) {
    int address = 0x4e86c0;
    CUnit * result_;
    __asm {
        mov ax, a1
        mov bx, a2
        mov si, a3
        push dword ptr unit_type
        push dword ptr a4
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *AI_ClosestUnit(CUnit *a1, int a2, int (__fastcall *a3)(CUnit *, CUnit *), CUnit *unit_type) {
    int address = 0x4e8740;
    CUnit * result_;
    __asm {
        mov esi, a1
        push dword ptr unit_type
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *AI_BestUnit_InBox(__int16 a1, CUnit *a2, int (__fastcall *a3)(CUnit *, CUnit *), CUnit *a4) {
    int address = 0x4e87e0;
    CUnit * result_;
    __asm {
        mov ax, a1
        mov ecx, a2
        push dword ptr a4
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
int ModifyUnit_maybe(int a1, CUnit *a2, int (__fastcall *a3)(_DWORD, _DWORD)) {
    int address = 0x4e8830;
    int result_;
    __asm {
        mov eax, a1
        mov ebx, a2
        mov edi, a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*DlgLatency)(), DlgLatency, 0x4e88b0);
bool sub_4E8920(dialog *a1, dlgEvent *a2) {
    int address = 0x4e8920;
    bool result_;
    __asm {
        mov eax, a1
        mov edi, a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*network_latencyRadioBtn)(dialog *dlg, dlgEvent *evt), network_latencyRadioBtn, 0x4e8970);
DECL_FUNC(int(*sub_4E89A0)(), sub_4E89A0, 0x4e89a0);
DECL_FUNC(int(*sub_4E89C0)(), sub_4E89C0, 0x4e89c0);
void CMDACT_SetLatency(dialog *a1) {
    int address = 0x4e8a30;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(bool (__fastcall*netdlg_BINDLG_Main)(dialog *dlg, dlgEvent *evt), netdlg_BINDLG_Main, 0x4e8ae0);
DECL_FUNC(int(*sub_4E8BB0)(), sub_4E8BB0, 0x4e8bb0);
DECL_FUNC(int (__stdcall*pixelPosHasCreep)(__int16), pixelPosHasCreep, 0x4e8bc0);
DECL_FUNC(int(*sub_4E8C00)(), sub_4E8C00, 0x4e8c00);
DECL_FUNC(int(*sub_4E8C20)(), sub_4E8C20, 0x4e8c20);
DECL_FUNC(int(*sub_4E8C60)(), sub_4E8C60, 0x4e8c60);
DECL_FUNC(int(*larvaCounterProc)(), larvaCounterProc, 0x4e8c80);
DECL_FUNC(int (__stdcall*sub_4E8CB0)(int, int), sub_4E8CB0, 0x4e8cb0);
DECL_FUNC(int(*UpdateLarvaOrderState_TooFar)(), UpdateLarvaOrderState_TooFar, 0x4e8da0);
signed int sub_4E8E10(CUnit *a1, int a2) {
    int address = 0x4e8e10;
    signed result_;
    __asm {
        mov eax, a1
        mov edi, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*UpdateHarvestValues)(int), UpdateHarvestValues, 0x4e92b0);
signed int ChkLarvaStray(CUnit *a1, unsigned int a2, unsigned int a3) {
    int address = 0x4e93e0;
    signed result_;
    __asm {
        mov ebx, a1
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(void (__stdcall*ChkLarvaStray_0)(CUnit *a1, int a2, int a3), ChkLarvaStray_0, 0x4e94b0);
char orders_StopCreepGrowth(CUnit *a1) {
    int address = 0x4e95e0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
char orders_InitCreepGrowth(CUnit *a1) {
    int address = 0x4e96d0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
void sub_4E97C0(CUnit *a1) {
    int address = 0x4e97c0;
    __asm {
        mov eax, a1
        call address
    }
}
char sub_4E99D0(CUnit *a1) {
    int address = 0x4e99d0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int(*sub_4E9A30)(), sub_4E9A30, 0x4e9a30);
char orders_DroneLand(CUnit *a1, int a2) {
    int address = 0x4e9aa0;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, al
    }
    return result_;
}
int orders_Larva(CUnit *a1) {
    int address = 0x4e9f90;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
char performNydusCanalMove(CUnit *a1, CUnit *a2) {
    int address = 0x4ea180;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, al
    }
    return result_;
}
char orders_InfestMine4(CUnit *a1, CUnit *a2) {
    int address = 0x4ea290;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, al
    }
    return result_;
}
void orders_EnterNydusCanal(CUnit *a1) {
    int address = 0x4ea3e0;
    __asm {
        mov eax, a1
        call address
    }
}
char orders_InfestMine1(CUnit *a1, CUnit *a2) {
    int address = 0x4ea4c0;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, al
    }
    return result_;
}
void secondaryOrd_SpawningLarva(CUnit *a1) {
    int address = 0x4ea780;
    __asm {
        mov esi, a1
        call address
    }
}
void secondaryOrd_SpreadCreepSpawningLarva(CUnit *a1) {
    int address = 0x4ea880;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(int (__stdcall*sub_4EA940)(int), sub_4EA940, 0x4ea940);
BOOL writeUnitPointer(int a1, CUnit *a2, FILE *a3) {
    int address = 0x4ea970;
    BOOL result_;
    __asm {
        mov ecx, a1
        mov esi, a2
        push dword ptr a3
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4EA9D0)(), sub_4EA9D0, 0x4ea9d0);
DECL_FUNC(int (__stdcall*sub_4EAA80)(int), sub_4EAA80, 0x4eaa80);
DECL_FUNC(int (__stdcall*WriteUnits)(FILE *), WriteUnits, 0x4eaaf0);
DECL_FUNC(int(*initializeGlobUnitCount)(), initializeGlobUnitCount, 0x4ead50);
DECL_FUNC(int(*mapTransferVector_clear)(), mapTransferVector_clear, 0x4eadf0);
DECL_FUNC(int(*sub_4EAF30)(), sub_4EAF30, 0x4eaf30);
DECL_FUNC(int(*sub_4EAF50)(), sub_4EAF50, 0x4eaf50);
DECL_FUNC(int (__stdcall*mapStringCreate)(char, int, int, char *source, char *), mapStringCreate, 0x4eaf70);
DECL_FUNC(int(*mapDataTransfer)(), mapDataTransfer, 0x4eafe0);
DECL_FUNC(int (__thiscall*sub_4EB070)(CUnit *this_), sub_4EB070, 0x4eb070);
DECL_FUNC(int(*sub_4EB090)(), sub_4EB090, 0x4eb090);
DECL_FUNC(int(*sub_4EB0C0)(), sub_4EB0C0, 0x4eb0c0);
DECL_FUNC(int (__thiscall*sub_4EB0F0)(CUnit *this_), sub_4EB0F0, 0x4eb0f0);
DECL_FUNC(int(*setNextWaypoint)(), setNextWaypoint, 0x4eb130);
DECL_FUNC(int (__thiscall*SetUnitUnderDisruptionWeb)(CUnit *this_), SetUnitUnderDisruptionWeb, 0x4eb170);
DECL_FUNC(int(*sub_4EB240)(), sub_4EB240, 0x4eb240);
int setResourceTarget(CUnit *a1) {
    int address = 0x4eb290;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4EB2E0)(), sub_4EB2E0, 0x4eb2e0);
DECL_FUNC(int(*sub_4EB2F0)(), sub_4EB2F0, 0x4eb2f0);
void UpdateEnergyTimer(CUnit *a1) {
    int address = 0x4eb4b0;
    __asm {
        mov esi, a1
        call address
    }
}
int orders_HoldPositionSuicidal(CUnit *a1) {
    int address = 0x4eb5b0;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
int sub_4EB5E0(CUnit *a1) {
    int address = 0x4eb5e0;
    int result_;
    __asm {
        mov ebx, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_4EB660)(char), sub_4EB660, 0x4eb660);
signed int moveToTarget(CUnit *a1, CUnit *a2) {
    int address = 0x4eb720;
    signed result_;
    __asm {
        mov edi, a1
        mov esi, a2
        call address
        mov result_, eax
    }
    return result_;
}
signed int SetMoveTarget_xy(int a1, int a2, int a3, CUnit *a4) {
    int address = 0x4eb820;
    signed result_;
    __asm {
        mov ecx, a1
        mov ebx, a2
        mov edi, a3
        mov esi, a4
        call address
        mov result_, eax
    }
    return result_;
}
signed int sub_4EB900(CUnit *a1, CUnit *a2) {
    int address = 0x4eb900;
    signed result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*Warping_SetMoveTarget)(), Warping_SetMoveTarget, 0x4eb960);
int _moveToTarget(CUnit *a1, CUnit *a2) {
    int address = 0x4eb980;
    int result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, eax
    }
    return result_;
}
CSprite *UnitBeginAcquireMoveTarget(int a1, CUnit *a2, int a3) {
    int address = 0x4eb9c0;
    CSprite * result_;
    __asm {
        mov eax, a1
        mov edx, a2
        mov ecx, a3
        call address
        mov result_, eax
    }
    return result_;
}
void SetUnitPosition(CUnit *unit, __int16 pos_x, __int16 pos_y) {
    int address = 0x4eb9f0;
    __asm {
        mov edx, unit
        mov ax, pos_x
        mov cx, pos_y
        call address
    }
}
__int16 sub_4EBAE0(CUnit *unit, __int16 pos_x, __int16 pos_y) {
    int address = 0x4ebae0;
    __int16 result_;
    __asm {
        mov edx, unit
        mov ax, pos_x
        mov cx, pos_y
        call address
        mov result_, ax
    }
    return result_;
}
char RefreshSprite(CSprite *a1, unsigned __int8 a2) {
    int address = 0x4ebbd0;
    char result_;
    __asm {
        mov esi, a1
        push dword ptr a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(void (__thiscall*sub_4EBC30)(CUnit *this_), sub_4EBC30, 0x4ebc30);
char sub_4EBDB0(CUnit *a1) {
    int address = 0x4ebdb0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
CUnit *sub_4EBDE0(CUnit *result) {
    int address = 0x4ebde0;
    CUnit * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
void UpdateUnitSpriteInfo(CUnit *a1) {
    int address = 0x4ebe10;
    __asm {
        mov esi, a1
        call address
    }
}
char ordersIDCases(CUnit *a1) {
    int address = 0x4ebed0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
char sub_4EC120(CUnit *a1) {
    int address = 0x4ec120;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
char performSecondaryOrders(CUnit *a1) {
    int address = 0x4ec170;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
char updateUnitTimers(CUnit *a1) {
    int address = 0x4ec290;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(void (__thiscall*unitUpdate)(CUnit *this_), unitUpdate, 0x4ec420);
char ordersEntries(CUnit *a1, int ecx0) {
    int address = 0x4ec4d0;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, ecx0
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__thiscall*UpdateUnitOrderData)(CUnit *this_), UpdateUnitOrderData, 0x4ecf70);
DECL_FUNC(int(*UpdateUnits)(), UpdateUnits, 0x4ed000);
DECL_FUNC(void (__cdecl*initializeDefaultPlayerNames)(), initializeDefaultPlayerNames, 0x4ed2b0);
signed int gluLogin_CharacterCreate_CheckDuplicate(char *a1) {
    int address = 0x4ed3a0;
    signed result_;
    __asm {
        mov edi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4ED3E0)(), sub_4ED3E0, 0x4ed3e0);
signed int gluLogin_Activate(dialog *a1) {
    int address = 0x4ed3f0;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4ED440)(), sub_4ED440, 0x4ed440);
DECL_FUNC(void (__stdcall*ID_Constructor)(CharacterData *a1), ID_Constructor, 0x4ed490);
DECL_FUNC(int(*sub_4ED500)(), sub_4ED500, 0x4ed500);
DECL_FUNC(int(*sub_4ED530)(), sub_4ED530, 0x4ed530);
u32 gluLogin_SetSelect_Evt(dialog *a1) {
    int address = 0x4ed560;
    u32 result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4ED620)(), sub_4ED620, 0x4ed620);
void gluLogin_Listbox_Init_Evt(dialog *a1) {
    int address = 0x4ed640;
    __asm {
        mov edi, a1
        call address
    }
}
DECL_FUNC(int (__stdcall*gluLogin_Init)(int), gluLogin_Init, 0x4ed720);
void j_genericListboxDropdown(dialog *a1) {
    int address = 0x4ed760;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(bool (__fastcall*gluLogin_Listbox)(dialog *dlg, dlgEvent *evt), gluLogin_Listbox, 0x4ed770);
DECL_FUNC(char (__stdcall*gluLogin_Exit)(dialog *a1), gluLogin_Exit, 0x4ed840);
DECL_FUNC(char (__stdcall*gluLogin_CharacterCreation)(dialog *a1), gluLogin_CharacterCreation, 0x4ed940);
DECL_FUNC(bool (__fastcall*gluLogin_Main)(dialog *dlg, struct dlgEvent *evt), gluLogin_Main, 0x4edaa0);
DECL_FUNC(int(*loadMenu_gluLogin)(), loadMenu_gluLogin, 0x4edc30);
DECL_FUNC(int (__stdcall*GetClassWindow)(unsigned __int8 *), GetClassWindow, 0x4eddf0);
DECL_FUNC(int (__thiscall*openDlg)(LPCSTR lpDirectory, unsigned __int8 *, int), openDlg, 0x4ede60);
DECL_FUNC(int (__stdcall*sub_4EDEF0)(int), sub_4EDEF0, 0x4edef0);
DECL_FUNC(int (__stdcall*sub_4EDF20)(int csidl, int), sub_4EDF20, 0x4edf20);
DECL_FUNC(void (__thiscall*destroyFileFindIndexer)(bool exit_code), destroyFileFindIndexer, 0x4edfe0);
DECL_FUNC(int(*FastIndexInit)(), FastIndexInit, 0x4ee070);
DECL_FUNC(int (__stdcall*mouseOver_Loading_CB)(int), mouseOver_Loading_CB, 0x4ee0f0);
DECL_FUNC(int(*sub_4EE110)(), sub_4EE110, 0x4ee110);
DECL_FUNC(void (__cdecl*BWFXN_InitializePlayerConsole)(), BWFXN_InitializePlayerConsole, 0x4ee180);
DECL_FUNC(int(*sub_4EE210)(), sub_4EE210, 0x4ee210);
DECL_FUNC(void (__cdecl*LoadRaceUI)(), LoadRaceUI, 0x4ee2d0);
DECL_FUNC(int(*sub_4EE3D0)(), sub_4EE3D0, 0x4ee3d0);
DECL_FUNC(int(*LoadGameCreate)(), LoadGameCreate, 0x4ee520);
DECL_FUNC(int(*sub_4EE5B0)(), sub_4EE5B0, 0x4ee5b0);
DECL_FUNC(int(*DestroyGame)(), DestroyGame, 0x4ee8c0);
DECL_FUNC(void (__cdecl*hotkeyRemapping)(), hotkeyRemapping, 0x4eec30);
DECL_FUNC(int(*LoadGameCore)(), LoadGameCore, 0x4eed10);
DECL_FUNC(int(*GameInit)(), GameInit, 0x4eee00);
DECL_FUNC(int(*sub_4EEFD0)(), sub_4EEFD0, 0x4eefd0);
DECL_FUNC(int(*LoadGameInit)(), LoadGameInit, 0x4ef100);
DECL_FUNC(int (__thiscall*DrawDialogImage)(rect *this_, Bitmap *a2, int a3, int a4, int a5), DrawDialogImage, 0x4ef440);
DECL_FUNC(int(*sub_4EF530)(), sub_4EF530, 0x4ef530);
DECL_FUNC(void (__fastcall*genericImageUpdate)(dialog *dlg, int x, int y, rect *dst), genericImageUpdate, 0x4ef560);
DECL_FUNC(void (__fastcall*genericDlgUpdate)(dialog *dlg, int x, int y, rect *dst), genericDlgUpdate, 0x4ef590);
int sub_4EF600(rect *a1, unsigned int a2, __int16 a3, __int16 a4, int a5) {
    int address = 0x4ef600;
    int result_;
    __asm {
        mov esi, a1
        push dword ptr a5
        push dword ptr a4
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_4EF6D0)(char), sub_4EF6D0, 0x4ef6d0);
DECL_FUNC(int (__stdcall*sub_4EF710)(int, int, int, int), sub_4EF710, 0x4ef710);
DECL_FUNC(int(*sub_4EF7E0)(), sub_4EF7E0, 0x4ef7e0);
DECL_FUNC(int(*sub_4EF7F0)(), sub_4EF7F0, 0x4ef7f0);
void DlgDrawText(rect *a1, dialog *a2, int a3, int a4) {
    int address = 0x4ef870;
    __asm {
        mov eax, a1
        mov ecx, a2
        push dword ptr a4
        push dword ptr a3
        call address
    }
}
DECL_FUNC(void (__fastcall*genericCStaticUpdate)(dialog *dlg, int x, int y, rect *dst), genericCStaticUpdate, 0x4ef9a0);
DECL_FUNC(void (__fastcall*genericRStaticUpdate)(dialog *dlg, int x, int y, rect *dst), genericRStaticUpdate, 0x4ef9c0);
DECL_FUNC(void (__fastcall*genericLStaticUpdate)(dialog *dlg, int x, int y, rect *dst), genericLStaticUpdate, 0x4ef9e0);
DECL_FUNC(void (__fastcall*genericEditUpdate)(dialog *dlg, int x, int y, rect *dst), genericEditUpdate, 0x4efa00);
DECL_FUNC(void (__fastcall*genericCheckboxUpdate)(dialog *dlg, int x, int y, rect *dst), genericCheckboxUpdate, 0x4efa80);
DECL_FUNC(void (__fastcall*genericOptionUpdate)(dialog *dlg, int x, int y, rect *dst), genericOptionUpdate, 0x4efc30);
void DrawStandardButtonGraphic(dialog *a2, rect *a3) {
    int address = 0x4efd90;
    __asm {
        mov edi, a2
        push dword ptr a3
        call address
    }
}
void DrawAlternateButtonGraphic(dialog *a1, rect *a2) {
    int address = 0x4efeb0;
    __asm {
        mov ebx, a1
        push dword ptr a2
        call address
    }
}
void DrawButtonImage(dialog *a1, rect *a2) {
    int address = 0x4f0050;
    __asm {
        mov edi, a1
        push dword ptr a2
        call address
    }
}
DECL_FUNC(int(*sub_4F02C0)(), sub_4F02C0, 0x4f02c0);
DECL_FUNC(void (__fastcall*genericBtnUpdate)(dialog *dlg, int x, int y, rect *dst), genericBtnUpdate, 0x4f0390);
DECL_FUNC(int(*contour_gen_bottomRight)(), contour_gen_bottomRight, 0x4f03e0);
DECL_FUNC(int(*contour_gen_topRight)(), contour_gen_topRight, 0x4f08c0);
DECL_FUNC(int(*contour_gen_leftTop)(), contour_gen_leftTop, 0x4f0d50);
DECL_FUNC(int(*contour_gen_bottomLeft)(), contour_gen_bottomLeft, 0x4f1200);
DECL_FUNC(int(*sub_4F1680)(), sub_4F1680, 0x4f1680);
DECL_FUNC(int (__stdcall*sub_4F16C0)(int, int, int), sub_4F16C0, 0x4f16c0);
DECL_FUNC(int(*sub_4F17C0)(), sub_4F17C0, 0x4f17c0);
int sub_4F1870(CUnit *a1, __int16 a2, __int16 a3) {
    int address = 0x4f1870;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
signed int sub_4F1980(CUnit *a1) {
    int address = 0x4f1980;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_4F1A20)(int), sub_4F1A20, 0x4f1a20);
signed int sub_4F1B70(CUnit *a1) {
    int address = 0x4f1b70;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
int sub_4F1C70(CUnit *a1, int a2) {
    int address = 0x4f1c70;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
int sub_4F20D0(CUnit *a1) {
    int address = 0x4f20d0;
    int result_;
    __asm {
        mov ebx, a1
        call address
        mov result_, eax
    }
    return result_;
}
signed int sub_4F2160(CUnit *a1) {
    int address = 0x4f2160;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4F2240)(), sub_4F2240, 0x4f2240);
int sub_4F2260(CUnit *a1, int a2, CUnit *a3) {
    int address = 0x4f2260;
    int result_;
    __asm {
        mov eax, a1
        push dword ptr a3
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
int sub_4F29E0(CUnit *a1, int a2) {
    int address = 0x4f29e0;
    int result_;
    __asm {
        mov esi, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
signed int sub_4F2A70(CUnit *a1, CUnit *a2) {
    int address = 0x4f2a70;
    signed result_;
    __asm {
        mov ebx, a1
        mov edi, a2
        call address
        mov result_, eax
    }
    return result_;
}
signed int sub_4F2DE0(CUnit *a1) {
    int address = 0x4f2de0;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
void sub_4F2F00(dialog *a1) {
    int address = 0x4f2f00;
    __asm {
        mov ebx, a1
        call address
    }
}
DECL_FUNC(int(*sub_4F3020)(), sub_4F3020, 0x4f3020);
void sub_4F3040(dialog *a1) {
    int address = 0x4f3040;
    __asm {
        mov eax, a1
        call address
    }
}
DECL_FUNC(LONG (__fastcall*SetTargetDlgText)(StatusFlags a1, int a2), SetTargetDlgText, 0x4f31d0);
DECL_FUNC(bool (__fastcall*textBox_ctrl_charEvent)(dialog *a1, dlgEvent *a2), textBox_ctrl_charEvent, 0x4f3240);
DECL_FUNC(int(*sendChatMessage)(), sendChatMessage, 0x4f3280);
void onSendText(dialog *a1, dlgEvent *a2, int a3) {
    int address = 0x4f32d0;
    __asm {
        mov edi, a1
        push dword ptr a3
        push dword ptr a2
        call address
    }
}
DECL_FUNC(int (__fastcall*textbox_CtrlInteract)(dialog *dlg, struct dlgEvent *evt), textbox_CtrlInteract, 0x4f3540);
signed int textbox_DLG_Init_Evt(dialog *a1) {
    int address = 0x4f35d0;
    signed result_;
    __asm {
        mov edi, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*textbox_DLG_Interact)(dialog *dlg, dlgEvent *evt), textbox_DLG_Interact, 0x4f36c0);
DECL_FUNC(int(*ctextbox_BIN)(), ctextbox_BIN, 0x4f37c0);
void destroyPowerupImageOverlay(CUnit *a1) {
    int address = 0x4f3900;
    __asm {
        mov eax, a1
        call address
    }
}
int sub_4F39A0(int a1, int a2, CUnit *a3) {
    int address = 0x4f39a0;
    int result_;
    __asm {
        mov edx, a1
        mov ecx, a2
        mov esi, a3
        call address
        mov result_, eax
    }
    return result_;
}
signed int sub_4F3A80(CUnit *a1) {
    int address = 0x4f3a80;
    signed result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__stdcall*sub_4F3AF0)(char), sub_4F3AF0, 0x4f3af0);
DECL_FUNC(char (__stdcall*ResetUnitPowerup)(CUnit *a1), ResetUnitPowerup, 0x4f3b70);
void killPowerup(CUnit *a3) {
    int address = 0x4f3c60;
    __asm {
        mov esi, a3
        call address
    }
}
DECL_FUNC(char (__stdcall*sub_4F3CA0)(CUnit *a3, CUnit *a4), sub_4F3CA0, 0x4f3ca0);
CUnit *orders_Powerup2(CUnit *a1) {
    int address = 0x4f3e10;
    CUnit * result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*sub_4F4080)(), sub_4F4080, 0x4f4080);
DECL_FUNC(int(*sub_4F40C0)(), sub_4F40C0, 0x4f40c0);
DECL_FUNC(int(*sub_4F40D0)(), sub_4F40D0, 0x4f40d0);
DECL_FUNC(int(*LobbyLoopTurns)(), LobbyLoopTurns, 0x4f40f0);
DECL_FUNC(char (__fastcall*RemoveAcidSpores)(int a1, CUnit *a2), RemoveAcidSpores, 0x4f4160);
DECL_FUNC(int (__thiscall*GetAcidSporeImage)(CUnit *this_), GetAcidSporeImage, 0x4f41f0);
void sub_4F4240(CUnit *a1) {
    int address = 0x4f4240;
    __asm {
        mov esi, a1
        call address
    }
}
int sub_4F4260(CUnit *a1) {
    int address = 0x4f4260;
    int result_;
    __asm {
        mov esi, a1
        call address
        mov result_, eax
    }
    return result_;
}
char sub_4F4290(CUnit *a1) {
    int address = 0x4f4290;
    char result_;
    __asm {
        mov edi, a1
        call address
        mov result_, al
    }
    return result_;
}
unsigned int UpdateAcidSporeOverlays(CUnit *a1) {
    int address = 0x4f4480;
    unsigned result_;
    __asm {
        mov ebx, a1
        call address
        mov result_, eax
    }
    return result_;
}
char CreatePlagueOverlay(CUnit *a1) {
    int address = 0x4f4550;
    char result_;
    __asm {
        mov edi, a1
        call address
        mov result_, al
    }
    return result_;
}
char sub_4F45B0(CUnit *a1) {
    int address = 0x4f45b0;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
int CreateEnsnareOverlay(CUnit *a1) {
    int address = 0x4f45e0;
    int result_;
    __asm {
        mov edi, a1
        call address
        mov result_, eax
    }
    return result_;
}
CUnit *sub_4F4640(CUnit *result) {
    int address = 0x4f4640;
    CUnit * result_;
    __asm {
        mov eax, result
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int (__fastcall*CorrosiveAcidProc)(CUnit *a1, int a2), CorrosiveAcidProc, 0x4f4670);
DECL_FUNC(int (__fastcall*EnsnareProc)(CUnit *a1, CUnit *a2), EnsnareProc, 0x4f46c0);
void CloakProc(CUnit *a1) {
    int address = 0x4f46f0;
    __asm {
        mov esi, a1
        call address
    }
}
DECL_FUNC(int (__stdcall*CorrosiveAcidHit)(int), CorrosiveAcidHit, 0x4f4770);
void ConsumeHit(CUnit *result, CUnit *a2) {
    int address = 0x4f47b0;
    __asm {
        mov eax, result
        mov esi, a2
        call address
    }
}
DECL_FUNC(int (__thiscall*EnsnareHit)(int position_x, int), EnsnareHit, 0x4f4830);
DECL_FUNC(int (__stdcall*DarkSwarmHit)(int, __int16, int), DarkSwarmHit, 0x4f48a0);
DECL_FUNC(unsigned __int8 (__thiscall*BroodlingHit)(void *this_, CUnit *a2, CUnit *a3), BroodlingHit, 0x4f4940);
DECL_FUNC(int (__fastcall*PlagueProc)(CUnit *a1, CUnit *a2), PlagueProc, 0x4f4af0);
DECL_FUNC(int (__stdcall*PlagueHit)(int), PlagueHit, 0x4f4b30);
DECL_FUNC(void (__thiscall*sub_4F4B70)(CUnit *this_), sub_4F4B70, 0x4f4b70);
DECL_FUNC(int(*nullsub_68)(), nullsub_68, 0x4f4bb0);
DECL_FUNC(int (__stdcall*sub_4F4BC0)(int, int, int, int), sub_4F4BC0, 0x4f4bc0);
DECL_FUNC(int (__stdcall*sub_4F4C00)(int, int), sub_4F4C00, 0x4f4c00);
DECL_FUNC(int(*sub_4F4CF0)(), sub_4F4CF0, 0x4f4cf0);
DECL_FUNC(bool (__fastcall*statfluf_DLG_Interact)(dialog *dlg, dlgEvent *evt), statfluf_DLG_Interact, 0x4f4d60);
DECL_FUNC(int(*load_statfluf_BIN)(), load_statfluf_BIN, 0x4f4dc0);
DECL_FUNC(int(*sub_4F4F50)(), sub_4F4F50, 0x4f4f50);
DECL_FUNC(int(*drawGameMenuContextHelp)(), drawGameMenuContextHelp, 0x4f4f70);
DECL_FUNC(void (__fastcall*statf10_ButtonUpdate)(dialog *dlg, int x, int y, rect *dst), statf10_ButtonUpdate, 0x4f4fb0);
DECL_FUNC(int(*sub_4F50D0)(), sub_4F50D0, 0x4f50d0);
char setActiveDlgElement(dialog *a1, struct dlgEvent *a2) {
    int address = 0x4f50f0;
    char result_;
    __asm {
        mov esi, a1
        push dword ptr a2
        call address
        mov result_, al
    }
    return result_;
}
void load_gamemenu(dialog *result) {
    int address = 0x4f5150;
    __asm {
        mov eax, result
        call address
    }
}
DECL_FUNC(bool (__fastcall*statf10_ButtonInteract)(dialog *dlg, dlgEvent *evt), statf10_ButtonInteract, 0x4f5180);
int Statf10_RegisterCustomProcs(dialog *a1) {
    int address = 0x4f5210;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*Statf10_DialogProc)(dialog *dlg, dlgEvent *evt), Statf10_DialogProc, 0x4f5240);
DECL_FUNC(int(*load_Statf10_BIN)(), load_Statf10_BIN, 0x4f5300);
DECL_FUNC(int(*load_helpmenu)(), load_helpmenu, 0x4f5420);
DECL_FUNC(int(*sub_4F5460)(), sub_4F5460, 0x4f5460);
void help_listbox_create(dialog *a1) {
    int address = 0x4f5480;
    __asm {
        mov edi, a1
        call address
    }
}
DECL_FUNC(bool (__fastcall*help_Listbox)(dialog *dlg, dlgEvent *evt), help_Listbox, 0x4f54f0);
DECL_FUNC(int(*help_BINDLG_CustomCtrlID)(), help_BINDLG_CustomCtrlID, 0x4f5530);
DECL_FUNC(bool (__fastcall*help_BINDLG)(dialog *dlg, dlgEvent *evt), help_BINDLG, 0x4f5650);
DECL_FUNC(int(*sub_4F56F0)(), sub_4F56F0, 0x4f56f0);
DECL_FUNC(int (__stdcall*msgfltr_Cancel)(char), msgfltr_Cancel, 0x4f5700);
DECL_FUNC(void (__fastcall*genericPopupDlgInteract)(dialog *a1, dlgEvent *a2), genericPopupDlgInteract, 0x4f5760);
DECL_FUNC(void (__fastcall*BWFXN_OpenGameDialog)(char *a1, FnInteract a2), BWFXN_OpenGameDialog, 0x4f57a0);
DECL_FUNC(int(*sub_4F5930)(), sub_4F5930, 0x4f5930);
DECL_FUNC(void (__fastcall*DLG_DrawTextUpdate_CB)(dialog *dlg, int x, int y, rect *dst), DLG_DrawTextUpdate_CB, 0x4f59c0);
bool sub_4F59E0(dialog *a1, dlgEvent *a2) {
    int address = 0x4f59e0;
    bool result_;
    __asm {
        mov eax, a1
        push dword ptr a2
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(bool (__fastcall*wait_BINDLG)(dialog *dlg, dlgEvent *evt), wait_BINDLG, 0x4f5a40);
DECL_FUNC(int(*sub_4F5B70)(), sub_4F5B70, 0x4f5b70);
DECL_FUNC(int(*load_wait)(), load_wait, 0x4f5c50);
DECL_FUNC(bool (__fastcall*sub_4F5CB0)(dialog *dlg, struct dlgEvent *evt), sub_4F5CB0, 0x4f5cb0);
DECL_FUNC(int (__stdcall*loadOKCancelBIN)(HANDLE phFile), loadOKCancelBIN, 0x4f5d70);
DECL_FUNC(int (__stdcall*loadOKBIN)(HANDLE phFile), loadOKBIN, 0x4f5ee0);
DECL_FUNC(int (__stdcall*loadOKCancelDialog)(int, char *a1), loadOKCancelDialog, 0x4f6050);
DECL_FUNC(int(*sub_4F60E0)(), sub_4F60E0, 0x4f60e0);
DECL_FUNC(int(*sub_4F60F0)(), sub_4F60F0, 0x4f60f0);
signed int AppAddExit(AppExitHandle a1) {
    int address = 0x4f6100;
    signed result_;
    __asm {
        mov ebx, a1
        call address
        mov result_, eax
    }
    return result_;
}
char ApplyHallucinationStats(CUnit *a1) {
    int address = 0x4f6180;
    char result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
char RemoveStasisField(CUnit *a1) {
    int address = 0x4f62d0;
    char result_;
    __asm {
        mov esi, a1
        call address
        mov result_, al
    }
    return result_;
}
CThingy *replaceFeedbackSprite(CUnit *a1, int a2) {
    int address = 0x4f6350;
    CThingy * result_;
    __asm {
        mov ebx, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*CHK_UNIT_FinalCreateStep)(), CHK_UNIT_FinalCreateStep, 0x4f6420);
int sub_4F65B0(CUnit *a1, CUnit *a2) {
    int address = 0x4f65b0;
    int result_;
    __asm {
        mov esi, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
char sub_4F66D0(CUnit *unit) {
    int address = 0x4f66d0;
    char result_;
    __asm {
        mov eax, unit
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__thiscall*MaelStromProc)(CUnit *a1), MaelStromProc, 0x4f6760);
int StasisFieldOverlay(CUnit *a1, unsigned __int8 a2) {
    int address = 0x4f67b0;
    int result_;
    __asm {
        mov edi, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
u8 sub_4F6830(CUnit *a1) {
    int address = 0x4f6830;
    u8 result_;
    __asm {
        mov eax, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(int (__fastcall*StasisFieldProc)(CUnit *a1, CUnit *a2), StasisFieldProc, 0x4f68d0);
signed int MindControl_Hit(CUnit *a1, CUnit *a2) {
    int address = 0x4f6910;
    signed result_;
    __asm {
        mov esi, a1
        push dword ptr a2
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(char (__stdcall*orders_CastMindControl)(CUnit *a1), orders_CastMindControl, 0x4f6950);
DECL_FUNC(int (__thiscall*StasisFieldHit)(int position_x, int), StasisFieldHit, 0x4f6a80);
DECL_FUNC(int (__stdcall*DisruptionWebHit)(int, __int16, int), DisruptionWebHit, 0x4f6af0);
DECL_FUNC(u32 (__thiscall*sub_4F6B90)(CUnit *this_, int a2), sub_4F6B90, 0x4f6b90);
char orders_Hallucination1(CUnit *a1) {
    int address = 0x4f6c40;
    char result_;
    __asm {
        mov edi, a1
        call address
        mov result_, al
    }
    return result_;
}
DECL_FUNC(char (__stdcall*orders_Feedback)(CUnit *a1), orders_Feedback, 0x4f6d40);
char orders_RightClickAction(CUnit *a1, int a2) {
    int address = 0x4f6ef0;
    char result_;
    __asm {
        mov eax, a1
        mov ecx, a2
        call address
        mov result_, al
    }
    return result_;
}
int orders_Special(CUnit *a1) {
    int address = 0x4f6fa0;
    int result_;
    __asm {
        mov eax, a1
        call address
        mov result_, eax
    }
    return result_;
}
DECL_FUNC(int(*RdyZFrame)(), RdyZFrame, 0x4f70f0);
DECL_FUNC(bool (__fastcall*gluRdyZ_BINDLG_Loop)(dialog *dlg, struct dlgEvent *evt), gluRdyZ_BINDLG_Loop, 0x4f7150);
DECL_FUNC(void(*loadMenu_gluRdyZ)(void), loadMenu_gluRdyZ, 0x4f71f0);
DECL_FUNC(int(*RdyTFrame)(), RdyTFrame, 0x4f7450);
DECL_FUNC(bool (__fastcall*gluRdyT_BINDLG_Loop)(dialog *dlg, dlgEvent *evt), gluRdyT_BINDLG_Loop, 0x4f74b0);
DECL_FUNC(void(*loadMenu_gluRdyT)(void), loadMenu_gluRdyT, 0x4f7550);
DECL_FUNC(int(*rdyPFrame)(), rdyPFrame, 0x4f77b0);
DECL_FUNC(bool (__fastcall*gluRdyP_BINDLG_Loop)(dialog *dlg, dlgEvent *evt), gluRdyP_BINDLG_Loop, 0x4f7810);
DECL_FUNC(void(*loadMenu_gluRdyP)(void), loadMenu_gluRdyP, 0x4f78b0);
void PlayMovieWithIntro(unsigned int a1) {
    int address = 0x4f7ae0;
    __asm {
        mov esi, a1
        call address
    }
}
DECL_FUNC(int(*nullsub_4)(), nullsub_4, 0x4f7b17);
DECL_FUNC(int (__cdecl*__ld12cvt_0)(int, int), __ld12cvt_0, 0x4f99e4);
DECL_FUNC(int (__cdecl*___ld12cvt)(int, int), ___ld12cvt, 0x4f99fa);
DECL_FUNC(int (__cdecl*___strgtold12_0)(int, int), ___strgtold12_0, 0x4f9a10);
DECL_FUNC(int (__cdecl*____strgtold12)(int, int), ____strgtold12, 0x4f9a4d);
DECL_FUNC(int(*false_0)(), false_0, 0x4fb90b);
DECL_FUNC(int(*LeagueEventConstructor)(), LeagueEventConstructor, 0x4fc150);
DECL_FUNC(int(*_list_ctor)(), _list_ctor, 0x4fc180);
DECL_FUNC(int(*_initFloat)(), _initFloat, 0x4fc1a0);
DECL_FUNC(int(*_initFloat_0)(), _initFloat_0, 0x4fc1b0);
DECL_FUNC(int(*CriticalSectionConstructor_1)(), CriticalSectionConstructor_1, 0x4fc1c0);
DECL_FUNC(int(*_initFloat_1)(), _initFloat_1, 0x4fc1e0);
DECL_FUNC(int(*_initFloat_2)(), _initFloat_2, 0x4fc1f0);
DECL_FUNC(int(*_initFloat_3)(), _initFloat_3, 0x4fc200);
DECL_FUNC(int(*ExceptionFilterConstructor)(), ExceptionFilterConstructor, 0x4fc210);
DECL_FUNC(int(*_initFloat_4)(), _initFloat_4, 0x4fc230);
DECL_FUNC(int(*_list_ctor_0)(), _list_ctor_0, 0x4fc240);
DECL_FUNC(int(*_initFloat_5)(), _initFloat_5, 0x4fc260);
DECL_FUNC(int(*_initFloat_6)(), _initFloat_6, 0x4fc270);
DECL_FUNC(int(*_initFloat_7)(), _initFloat_7, 0x4fc280);
DECL_FUNC(int(*_initFloat_8)(), _initFloat_8, 0x4fc290);
DECL_FUNC(int(*_initFloat_9)(), _initFloat_9, 0x4fc2a0);
DECL_FUNC(int(*_initFloat_10)(), _initFloat_10, 0x4fc2b0);
DECL_FUNC(int(*_initFloat_11)(), _initFloat_11, 0x4fc2c0);
DECL_FUNC(int(*_initFloat_12)(), _initFloat_12, 0x4fc2d0);
DECL_FUNC(int(*_initFloat_13)(), _initFloat_13, 0x4fc2e0);
DECL_FUNC(int(*_initFloat_14)(), _initFloat_14, 0x4fc2f0);
DECL_FUNC(int(*_initFloat_15)(), _initFloat_15, 0x4fc300);
DECL_FUNC(int(*_initFloat_16)(), _initFloat_16, 0x4fc310);
DECL_FUNC(int(*_initFloat_17)(), _initFloat_17, 0x4fc320);
DECL_FUNC(int(*_initFloat_18)(), _initFloat_18, 0x4fc330);
DECL_FUNC(int(*_initFloat_19)(), _initFloat_19, 0x4fc340);
DECL_FUNC(int(*_initFloat_20)(), _initFloat_20, 0x4fc350);
DECL_FUNC(int(*_initFloat_21)(), _initFloat_21, 0x4fc360);
DECL_FUNC(int(*CriticalSectionConstructor_0)(), CriticalSectionConstructor_0, 0x4fc370);
DECL_FUNC(int(*_list_sfx_ctor)(), _list_sfx_ctor, 0x4fc390);
DECL_FUNC(int(*_initFloat_22)(), _initFloat_22, 0x4fc3b0);
DECL_FUNC(int(*_initFloat_23)(), _initFloat_23, 0x4fc3c0);
DECL_FUNC(int(*_list_netMode_ctor)(), _list_netMode_ctor, 0x4fc3d0);
DECL_FUNC(int(*_initFloat_24)(), _initFloat_24, 0x4fc3f0);
DECL_FUNC(int(*_list_characters_ctor)(), _list_characters_ctor, 0x4fc400);
DECL_FUNC(int(*_initFloat_25)(), _initFloat_25, 0x4fc420);
DECL_FUNC(int(*_initFloat_26)(), _initFloat_26, 0x4fc430);
DECL_FUNC(int(*_initFloat_27)(), _initFloat_27, 0x4fc440);
DECL_FUNC(int(*_initFloat_28)(), _initFloat_28, 0x4fc450);
DECL_FUNC(int(*_list_ctor_1)(), _list_ctor_1, 0x4fc460);
DECL_FUNC(int(*_initFloat_29)(), _initFloat_29, 0x4fc480);
DECL_FUNC(int(*_initFloat_30)(), _initFloat_30, 0x4fc490);
DECL_FUNC(int(*_list_ctor_2)(), _list_ctor_2, 0x4fc4a0);
DECL_FUNC(int(*_initFloat_31)(), _initFloat_31, 0x4fc4c0);
DECL_FUNC(int(*_initFloat_32)(), _initFloat_32, 0x4fc4d0);
DECL_FUNC(int(*_initFloat_33)(), _initFloat_33, 0x4fc4e0);
DECL_FUNC(int(*_initFloat_34)(), _initFloat_34, 0x4fc4f0);
DECL_FUNC(int(*_initFloat_35)(), _initFloat_35, 0x4fc500);
DECL_FUNC(int(*_initFloat_36)(), _initFloat_36, 0x4fc510);
DECL_FUNC(int(*_initFloat_37)(), _initFloat_37, 0x4fc520);
DECL_FUNC(int(*_initFloat_38)(), _initFloat_38, 0x4fc530);
DECL_FUNC(int(*_list_modem_ctor)(), _list_modem_ctor, 0x4fc540);
DECL_FUNC(int(*_list_phonebook_ctor)(), _list_phonebook_ctor, 0x4fc560);
DECL_FUNC(int(*_initFloat_39)(), _initFloat_39, 0x4fc580);
DECL_FUNC(int(*_initFloat_40)(), _initFloat_40, 0x4fc590);
DECL_FUNC(int(*_list_ctor_3)(), _list_ctor_3, 0x4fc5a0);
DECL_FUNC(int(*_initFloat_41)(), _initFloat_41, 0x4fc5c0);
DECL_FUNC(int(*_list_BNGameTypeComboBox_ctor)(), _list_BNGameTypeComboBox_ctor, 0x4fc5d0);
DECL_FUNC(int(*_initFloat_42)(), _initFloat_42, 0x4fc5f0);
DECL_FUNC(int(*_initFloat_43)(), _initFloat_43, 0x4fc600);
DECL_FUNC(int(*_initFloat_44)(), _initFloat_44, 0x4fc610);
DECL_FUNC(int(*_list_BNMapComboBox_ctor)(), _list_BNMapComboBox_ctor, 0x4fc620);
DECL_FUNC(int(*_initFloat_45)(), _initFloat_45, 0x4fc640);
DECL_FUNC(int(*_initFloat_46)(), _initFloat_46, 0x4fc650);
DECL_FUNC(int(*_initFloat_47)(), _initFloat_47, 0x4fc660);
DECL_FUNC(int(*_initFloat_48)(), _initFloat_48, 0x4fc670);
DECL_FUNC(int(*_initFloat_49)(), _initFloat_49, 0x4fc680);
DECL_FUNC(int(*_initFloat_50)(), _initFloat_50, 0x4fc690);
DECL_FUNC(int(*_initFloat_51)(), _initFloat_51, 0x4fc6a0);
DECL_FUNC(int(*_initFloat_52)(), _initFloat_52, 0x4fc6b0);
DECL_FUNC(int(*_initFloat_53)(), _initFloat_53, 0x4fc6c0);
DECL_FUNC(int(*_initFloat_54)(), _initFloat_54, 0x4fc6d0);
DECL_FUNC(int(*_initFloat_55)(), _initFloat_55, 0x4fc6e0);
DECL_FUNC(int(*_initFloat_56)(), _initFloat_56, 0x4fc6f0);
DECL_FUNC(int(*_initFloat_57)(), _initFloat_57, 0x4fc700);
DECL_FUNC(int(*_initFloat_58)(), _initFloat_58, 0x4fc710);
DECL_FUNC(int(*_initFloat_59)(), _initFloat_59, 0x4fc720);
DECL_FUNC(int(*_initFloat_60)(), _initFloat_60, 0x4fc730);
DECL_FUNC(int(*_initFloat_61)(), _initFloat_61, 0x4fc740);
DECL_FUNC(int(*_initFloat_62)(), _initFloat_62, 0x4fc750);
DECL_FUNC(int(*_initFloat_63)(), _initFloat_63, 0x4fc760);
DECL_FUNC(int(*_initFloat_64)(), _initFloat_64, 0x4fc770);
DECL_FUNC(int(*_initFloat_65)(), _initFloat_65, 0x4fc780);
DECL_FUNC(int(*_initFloat_66)(), _initFloat_66, 0x4fc790);
DECL_FUNC(int(*_initFloat_67)(), _initFloat_67, 0x4fc7a0);
DECL_FUNC(int(*_initFloat_68)(), _initFloat_68, 0x4fc7b0);
DECL_FUNC(int(*_initFloat_69)(), _initFloat_69, 0x4fc7c0);
DECL_FUNC(int(*_initFloat_70)(), _initFloat_70, 0x4fc7d0);
DECL_FUNC(int(*_initFloat_71)(), _initFloat_71, 0x4fc7e0);
DECL_FUNC(int(*_list_playerTriggers_ctor)(), _list_playerTriggers_ctor, 0x4fc7f0);
DECL_FUNC(int(*_initFloat_72)(), _initFloat_72, 0x4fc870);
DECL_FUNC(int(*_initFloat_73)(), _initFloat_73, 0x4fc880);
DECL_FUNC(int(*_initFloat_74)(), _initFloat_74, 0x4fc890);
DECL_FUNC(int(*_initFloat_75)(), _initFloat_75, 0x4fc8a0);
DECL_FUNC(int(*_initFloat_76)(), _initFloat_76, 0x4fc8b0);
DECL_FUNC(int(*_initFloat_77)(), _initFloat_77, 0x4fc8c0);
DECL_FUNC(int(*_initFloat_78)(), _initFloat_78, 0x4fc8d0);
DECL_FUNC(int(*_initFloat_79)(), _initFloat_79, 0x4fc8e0);
DECL_FUNC(int(*_initFloat_80)(), _initFloat_80, 0x4fc8f0);
DECL_FUNC(int(*_initFloat_81)(), _initFloat_81, 0x4fc900);
DECL_FUNC(int(*_initFloat_82)(), _initFloat_82, 0x4fc910);
DECL_FUNC(int(*_initFloat_83)(), _initFloat_83, 0x4fc920);
DECL_FUNC(int(*_initFloat_84)(), _initFloat_84, 0x4fc930);
DECL_FUNC(int(*_initFloat_85)(), _initFloat_85, 0x4fc940);
DECL_FUNC(int(*_initFloat_86)(), _initFloat_86, 0x4fc950);
DECL_FUNC(int(*_initFloat_87)(), _initFloat_87, 0x4fc960);
DECL_FUNC(int(*_initFloat_88)(), _initFloat_88, 0x4fc970);
DECL_FUNC(int(*_initFloat_89)(), _initFloat_89, 0x4fc980);
DECL_FUNC(int(*_initFloat_90)(), _initFloat_90, 0x4fc990);
DECL_FUNC(int(*_list_league_ctor)(), _list_league_ctor, 0x4fc9a0);
DECL_FUNC(int(*_initFloat_91)(), _initFloat_91, 0x4fc9c0);
DECL_FUNC(int(*_initFloat_92)(), _initFloat_92, 0x4fc9d0);
DECL_FUNC(int(*_initFloat_93)(), _initFloat_93, 0x4fc9e0);
DECL_FUNC(int(*_initFloat_94)(), _initFloat_94, 0x4fc9f0);
DECL_FUNC(int(*_initFloat_95)(), _initFloat_95, 0x4fca00);
DECL_FUNC(int(*_initFloat_96)(), _initFloat_96, 0x4fca10);
DECL_FUNC(int(*_initFloat_97)(), _initFloat_97, 0x4fca20);
DECL_FUNC(int(*_initFloat_98)(), _initFloat_98, 0x4fca30);
DECL_FUNC(int(*_initFloat_)(), _initFloat_, 0x4fca40);
DECL_FUNC(int(*_initFloat__0)(), _initFloat__0, 0x4fca50);
DECL_FUNC(int(*_initFloat__1)(), _initFloat__1, 0x4fca60);
DECL_FUNC(int(*_initFloat__2)(), _initFloat__2, 0x4fca70);
DECL_FUNC(int(*_initFloat__3)(), _initFloat__3, 0x4fca80);
DECL_FUNC(int(*_initFloat__4)(), _initFloat__4, 0x4fca90);
DECL_FUNC(int(*_initFloat__5)(), _initFloat__5, 0x4fcaa0);
DECL_FUNC(int(*_initFloat__6)(), _initFloat__6, 0x4fcab0);
DECL_FUNC(int(*_initFloat__7)(), _initFloat__7, 0x4fcac0);
DECL_FUNC(int(*_initFloat__8)(), _initFloat__8, 0x4fcad0);
DECL_FUNC(int(*_initFloat__9)(), _initFloat__9, 0x4fcae0);
DECL_FUNC(int(*_initFloat__10)(), _initFloat__10, 0x4fcaf0);
DECL_FUNC(int(*_initFloat__11)(), _initFloat__11, 0x4fcb00);
DECL_FUNC(int(*_list_banned_ctor)(), _list_banned_ctor, 0x4fcb10);
DECL_FUNC(int(*_initFloat__12)(), _initFloat__12, 0x4fcb30);
DECL_FUNC(int(*_initFloat__13)(), _initFloat__13, 0x4fcb40);
DECL_FUNC(int(*_initFloat__14)(), _initFloat__14, 0x4fcb50);
DECL_FUNC(int(*_initFloat__15)(), _initFloat__15, 0x4fcb60);
DECL_FUNC(int(*_list_ctor_4)(), _list_ctor_4, 0x4fcb70);
DECL_FUNC(int(*_list_ctor_5)(), _list_ctor_5, 0x4fcb90);
DECL_FUNC(int(*_initFloat__16)(), _initFloat__16, 0x4fcbb0);
DECL_FUNC(int(*_initFloat__17)(), _initFloat__17, 0x4fcbc0);
DECL_FUNC(int(*_initFloat__18)(), _initFloat__18, 0x4fcbd0);
DECL_FUNC(int(*_initFloat__19)(), _initFloat__19, 0x4fcbe0);
DECL_FUNC(int(*_initFloat__20)(), _initFloat__20, 0x4fcbf0);
DECL_FUNC(int(*_initFloat__21)(), _initFloat__21, 0x4fcc00);
DECL_FUNC(int(*_initFloat__22)(), _initFloat__22, 0x4fcc10);
DECL_FUNC(int(*_initFloat__23)(), _initFloat__23, 0x4fcc20);
DECL_FUNC(int(*_initFloat__24)(), _initFloat__24, 0x4fcc30);
DECL_FUNC(int(*_initFloat__25)(), _initFloat__25, 0x4fcc40);
DECL_FUNC(int(*_initFloat__26)(), _initFloat__26, 0x4fcc50);
DECL_FUNC(int(*_list_briefingTriggers_ctor)(), _list_briefingTriggers_ctor, 0x4fcc60);
DECL_FUNC(int(*_initFloat__27)(), _initFloat__27, 0x4fcc80);
DECL_FUNC(int(*_initFloat__28)(), _initFloat__28, 0x4fcc90);
DECL_FUNC(int(*_initFloat__29)(), _initFloat__29, 0x4fcca0);
DECL_FUNC(int(*_initFloat__30)(), _initFloat__30, 0x4fccb0);
DECL_FUNC(int(*_initFloat__31)(), _initFloat__31, 0x4fccc0);
DECL_FUNC(int(*_initFloat__32)(), _initFloat__32, 0x4fccd0);
DECL_FUNC(int(*_initFloat__33)(), _initFloat__33, 0x4fcce0);
DECL_FUNC(int(*_initFloat__34)(), _initFloat__34, 0x4fccf0);
DECL_FUNC(int(*_initFloat__35)(), _initFloat__35, 0x4fcd00);
DECL_FUNC(int(*_initFloat__36)(), _initFloat__36, 0x4fcd10);
DECL_FUNC(int(*_list_ctor_6)(), _list_ctor_6, 0x4fcd20);
DECL_FUNC(int(*_initFloat__37)(), _initFloat__37, 0x4fcd40);
DECL_FUNC(int(*_initFloat__38)(), _initFloat__38, 0x4fcd50);
DECL_FUNC(int(*_initFloat__39)(), _initFloat__39, 0x4fcd60);
DECL_FUNC(int(*_initFloat__40)(), _initFloat__40, 0x4fcd70);
DECL_FUNC(int(*_initFloat__41)(), _initFloat__41, 0x4fcd80);
DECL_FUNC(int(*_initFloat__42)(), _initFloat__42, 0x4fcd90);
DECL_FUNC(int(*_initFloat__43)(), _initFloat__43, 0x4fcda0);
DECL_FUNC(int(*_initFloat__44)(), _initFloat__44, 0x4fcdb0);
DECL_FUNC(int(*_initFloat__45)(), _initFloat__45, 0x4fcdc0);
DECL_FUNC(int(*_initFloat__46)(), _initFloat__46, 0x4fcdd0);
DECL_FUNC(int(*_initFloat__47)(), _initFloat__47, 0x4fcde0);
DECL_FUNC(int(*_initFloat__48)(), _initFloat__48, 0x4fcdf0);
DECL_FUNC(int(*_initFloat__49)(), _initFloat__49, 0x4fce00);
DECL_FUNC(int(*_initFloat__50)(), _initFloat__50, 0x4fce10);
DECL_FUNC(int(*_initFloat__51)(), _initFloat__51, 0x4fce20);
DECL_FUNC(int(*_initFloat__52)(), _initFloat__52, 0x4fce30);
DECL_FUNC(int(*_initFloat__53)(), _initFloat__53, 0x4fce40);
DECL_FUNC(int(*_initFloat__54)(), _initFloat__54, 0x4fce50);
DECL_FUNC(int(*_initFloat__55)(), _initFloat__55, 0x4fce60);
DECL_FUNC(int(*_initFloat__56)(), _initFloat__56, 0x4fce70);
DECL_FUNC(int(*_initFloat__57)(), _initFloat__57, 0x4fce80);
DECL_FUNC(int(*_initFloat__58)(), _initFloat__58, 0x4fce90);
DECL_FUNC(int(*_initFloat__59)(), _initFloat__59, 0x4fcea0);
DECL_FUNC(int(*_initFloat__60)(), _initFloat__60, 0x4fceb0);
DECL_FUNC(int(*_initFloat__61)(), _initFloat__61, 0x4fcec0);
DECL_FUNC(int(*_initFloat__62)(), _initFloat__62, 0x4fced0);
DECL_FUNC(int(*_initFloat__63)(), _initFloat__63, 0x4fcee0);
DECL_FUNC(int(*_initFloat__64)(), _initFloat__64, 0x4fcef0);
DECL_FUNC(int(*SBigConstructor)(), SBigConstructor, 0x4fcf00);
DECL_FUNC(int(*SBigConstructor_0)(), SBigConstructor_0, 0x4fcf20);
DECL_FUNC(int(*_initFloat__65)(), _initFloat__65, 0x4fcf40);
DECL_FUNC(int(*_initFloat__66)(), _initFloat__66, 0x4fcf50);
DECL_FUNC(int(*_initFloat__67)(), _initFloat__67, 0x4fcf60);
DECL_FUNC(int(*_initFloat__68)(), _initFloat__68, 0x4fcf70);
DECL_FUNC(int(*_initFloat__69)(), _initFloat__69, 0x4fcf80);
DECL_FUNC(int(*_initFloat__70)(), _initFloat__70, 0x4fcf90);
DECL_FUNC(int(*_initFloat__71)(), _initFloat__71, 0x4fcfa0);
DECL_FUNC(int(*_initFloat__72)(), _initFloat__72, 0x4fcfb0);
DECL_FUNC(int(*_initFloat__73)(), _initFloat__73, 0x4fcfc0);
DECL_FUNC(int(*_initFloat__74)(), _initFloat__74, 0x4fcfd0);
DECL_FUNC(int(*_initFloat__75)(), _initFloat__75, 0x4fcfe0);
DECL_FUNC(int(*_initFloat__76)(), _initFloat__76, 0x4fcff0);
DECL_FUNC(int(*_initFloat__77)(), _initFloat__77, 0x4fd000);
DECL_FUNC(int(*_initFloat__78)(), _initFloat__78, 0x4fd010);
DECL_FUNC(int(*_initFloat__79)(), _initFloat__79, 0x4fd020);
DECL_FUNC(int(*_initFloat__80)(), _initFloat__80, 0x4fd030);
DECL_FUNC(int(*_initFloat__81)(), _initFloat__81, 0x4fd040);
DECL_FUNC(int(*_initFloat__82)(), _initFloat__82, 0x4fd050);
DECL_FUNC(int(*_initFloat__83)(), _initFloat__83, 0x4fd060);
DECL_FUNC(int(*_initFloat__84)(), _initFloat__84, 0x4fd070);
DECL_FUNC(int(*_initFloat__85)(), _initFloat__85, 0x4fd080);
DECL_FUNC(int(*_initFloat__86)(), _initFloat__86, 0x4fd090);
DECL_FUNC(int(*_initFloat__87)(), _initFloat__87, 0x4fd0a0);
DECL_FUNC(int(*_initFloat__88)(), _initFloat__88, 0x4fd0b0);
DECL_FUNC(int(*_initFloat__89)(), _initFloat__89, 0x4fd0c0);
DECL_FUNC(int(*_initFloat__90)(), _initFloat__90, 0x4fd0d0);
DECL_FUNC(int(*_initFloat__91)(), _initFloat__91, 0x4fd0e0);
DECL_FUNC(int(*_initFloat__92)(), _initFloat__92, 0x4fd0f0);
DECL_FUNC(int(*_initFloat__93)(), _initFloat__93, 0x4fd100);
DECL_FUNC(int(*_initFloat__94)(), _initFloat__94, 0x4fd110);
DECL_FUNC(int(*_initFloat__95)(), _initFloat__95, 0x4fd120);
DECL_FUNC(int(*_initFloat__96)(), _initFloat__96, 0x4fd130);
DECL_FUNC(int(*_initFloat__97)(), _initFloat__97, 0x4fd140);
DECL_FUNC(int(*_initFloat__98)(), _initFloat__98, 0x4fd150);
DECL_FUNC(int(*_initFloat__)(), _initFloat__, 0x4fd160);
DECL_FUNC(int(*_initFloat___0)(), _initFloat___0, 0x4fd170);
DECL_FUNC(int(*_initFloat___1)(), _initFloat___1, 0x4fd180);
DECL_FUNC(int(*_initFloat___2)(), _initFloat___2, 0x4fd190);
DECL_FUNC(int(*_initFloat___3)(), _initFloat___3, 0x4fd1a0);
DECL_FUNC(int(*_initFloat___4)(), _initFloat___4, 0x4fd1b0);
DECL_FUNC(int(*_initFloat___5)(), _initFloat___5, 0x4fd1c0);
DECL_FUNC(int(*_initFloat___6)(), _initFloat___6, 0x4fd1d0);
DECL_FUNC(int(*_initFloat___7)(), _initFloat___7, 0x4fd1e0);
DECL_FUNC(int(*_initFloat___8)(), _initFloat___8, 0x4fd1f0);
DECL_FUNC(int(*_initFloat___9)(), _initFloat___9, 0x4fd200);
DECL_FUNC(int(*_initFloat___10)(), _initFloat___10, 0x4fd210);
DECL_FUNC(int(*_initFloat___11)(), _initFloat___11, 0x4fd220);
DECL_FUNC(int(*_initFloat___12)(), _initFloat___12, 0x4fd230);
DECL_FUNC(int(*_initFloat___13)(), _initFloat___13, 0x4fd240);
DECL_FUNC(int(*_initFloat___14)(), _initFloat___14, 0x4fd250);
DECL_FUNC(int(*_initFloat___15)(), _initFloat___15, 0x4fd260);
DECL_FUNC(int(*_initFloat___16)(), _initFloat___16, 0x4fd270);
DECL_FUNC(int(*_initFloat___17)(), _initFloat___17, 0x4fd280);
DECL_FUNC(int(*_list_areaFixups_ctor)(), _list_areaFixups_ctor, 0x4fd290);
DECL_FUNC(int(*_initFloat___18)(), _initFloat___18, 0x4fd2b0);
DECL_FUNC(int(*_initFloat___19)(), _initFloat___19, 0x4fd2c0);
DECL_FUNC(int(*_initFloat___20)(), _initFloat___20, 0x4fd2d0);
DECL_FUNC(int(*_initFloat___21)(), _initFloat___21, 0x4fd2e0);
DECL_FUNC(int(*_initFloat___22)(), _initFloat___22, 0x4fd2f0);
DECL_FUNC(int(*_initFloat___23)(), _initFloat___23, 0x4fd300);
DECL_FUNC(int(*_initFloat___24)(), _initFloat___24, 0x4fd310);
DECL_FUNC(int(*_initFloat___25)(), _initFloat___25, 0x4fd320);
DECL_FUNC(int(*_initFloat___26)(), _initFloat___26, 0x4fd330);
DECL_FUNC(int(*_initFloat___27)(), _initFloat___27, 0x4fd340);
DECL_FUNC(int(*_initFloat___28)(), _initFloat___28, 0x4fd350);
DECL_FUNC(int(*_initFloat___29)(), _initFloat___29, 0x4fd360);
DECL_FUNC(int(*_initFloat___30)(), _initFloat___30, 0x4fd370);
DECL_FUNC(int(*_initFloat___31)(), _initFloat___31, 0x4fd380);
DECL_FUNC(int(*_initFloat___32)(), _initFloat___32, 0x4fd390);
DECL_FUNC(int(*CriticalSectionConstructor)(), CriticalSectionConstructor, 0x4fd3a0);
DECL_FUNC(int(*_initFloat___33)(), _initFloat___33, 0x4fd3c0);
DECL_FUNC(int(*_initFloat___34)(), _initFloat___34, 0x4fd3d0);
DECL_FUNC(int(*_initFloat___35)(), _initFloat___35, 0x4fd3e0);
DECL_FUNC(int(*_initFloat___36)(), _initFloat___36, 0x4fd3f0);
DECL_FUNC(int(*_initFloat___37)(), _initFloat___37, 0x4fd400);
DECL_FUNC(int(*_initFloat___38)(), _initFloat___38, 0x4fd410);
DECL_FUNC(int(*_initFloat___39)(), _initFloat___39, 0x4fd420);
DECL_FUNC(int(*_initFloat___40)(), _initFloat___40, 0x4fd430);
DECL_FUNC(int(*_initFloat___41)(), _initFloat___41, 0x4fd440);
DECL_FUNC(int(*_initFloat___42)(), _initFloat___42, 0x4fd450);
DECL_FUNC(int(*_list_ctor_7)(), _list_ctor_7, 0x4fd460);
DECL_FUNC(int(*_initFloat___43)(), _initFloat___43, 0x4fd480);
DECL_FUNC(int(*_initFloat___44)(), _initFloat___44, 0x4fd490);
DECL_FUNC(int(*_initFloat___45)(), _initFloat___45, 0x4fd4a0);
DECL_FUNC(int(*_initFloat___46)(), _initFloat___46, 0x4fd4b0);
DECL_FUNC(int(*_initFloat___47)(), _initFloat___47, 0x4fd4c0);
DECL_FUNC(int(*_initFloat___48)(), _initFloat___48, 0x4fd4d0);
DECL_FUNC(int(*_initFloat___49)(), _initFloat___49, 0x4fd4e0);
DECL_FUNC(int(*_initFloat___50)(), _initFloat___50, 0x4fd4f0);
DECL_FUNC(int(*_initFloat___51)(), _initFloat___51, 0x4fd500);
DECL_FUNC(int(*_initFloat___52)(), _initFloat___52, 0x4fd510);
DECL_FUNC(int(*_list_ctor_8)(), _list_ctor_8, 0x4fd520);
DECL_FUNC(int(*_initFloat___53)(), _initFloat___53, 0x4fd540);
DECL_FUNC(int(*_initFloat___54)(), _initFloat___54, 0x4fd550);
DECL_FUNC(int(*UIDlgListConstructor)(), UIDlgListConstructor, 0x4fd560);
DECL_FUNC(int(*_initFloat___55)(), _initFloat___55, 0x4fd580);
DECL_FUNC(int(*_initFloat___56)(), _initFloat___56, 0x4fd590);
DECL_FUNC(int(*_initFloat___57)(), _initFloat___57, 0x4fd5a0);
DECL_FUNC(int(*_initFloat___58)(), _initFloat___58, 0x4fd5b0);
DECL_FUNC(int(*_initFloat___59)(), _initFloat___59, 0x4fd5c0);
DECL_FUNC(int(*_initFloat___60)(), _initFloat___60, 0x4fd5d0);
DECL_FUNC(int(*_initFloat___61)(), _initFloat___61, 0x4fd5e0);
DECL_FUNC(int(*_initFloat___62)(), _initFloat___62, 0x4fd5f0);
DECL_FUNC(int(*_initFloat___63)(), _initFloat___63, 0x4fd600);
DECL_FUNC(int(*_initFloat___64)(), _initFloat___64, 0x4fd610);
DECL_FUNC(int(*_initFloat___65)(), _initFloat___65, 0x4fd620);
DECL_FUNC(int(*_initFloat___66)(), _initFloat___66, 0x4fd630);
DECL_FUNC(int(*_initFloat___67)(), _initFloat___67, 0x4fd640);
DECL_FUNC(int(*_initFloat___68)(), _initFloat___68, 0x4fd650);
DECL_FUNC(int(*_initFloat___69)(), _initFloat___69, 0x4fd660);
DECL_FUNC(void (__cdecl*LeagueEventDestructor)(), LeagueEventDestructor, 0x4fd670);
DECL_FUNC(void (__cdecl*_list_dtor)(), _list_dtor, 0x4fd690);
DECL_FUNC(void (__cdecl*CriticalSectionDestructor_1)(), CriticalSectionDestructor_1, 0x4fd6f0);
DECL_FUNC(void (__cdecl*j_ExceptionFilterDestructor)(), j_ExceptionFilterDestructor, 0x4fd700);
DECL_FUNC(void (__cdecl*_list_dtor_0)(), _list_dtor_0, 0x4fd710);
DECL_FUNC(void (__cdecl*CriticalSectionDestructor_0)(), CriticalSectionDestructor_0, 0x4fd770);
DECL_FUNC(void (__cdecl*_list_sfx_dtor)(), _list_sfx_dtor, 0x4fd780);
DECL_FUNC(void (__cdecl*_list_netMode_dtor)(), _list_netMode_dtor, 0x4fd7e0);
DECL_FUNC(void (__cdecl*_list_characters_dtor)(), _list_characters_dtor, 0x4fd840);
DECL_FUNC(void (__cdecl*_list_dtor_1)(), _list_dtor_1, 0x4fd8a0);
DECL_FUNC(void (__cdecl*_list_dtor_2)(), _list_dtor_2, 0x4fd900);
DECL_FUNC(void (__cdecl*_list_modem_dtor)(), _list_modem_dtor, 0x4fd960);
DECL_FUNC(void (__cdecl*_list_phonebook_dtor)(), _list_phonebook_dtor, 0x4fd9c0);
DECL_FUNC(void (__cdecl*_list_dtor_3)(), _list_dtor_3, 0x4fda20);
DECL_FUNC(void (__cdecl*_list_BNGameTypeComboBox_dtor)(), _list_BNGameTypeComboBox_dtor, 0x4fda80);
DECL_FUNC(void (__cdecl*_list_BNMapComboBox_dtor)(), _list_BNMapComboBox_dtor, 0x4fdae0);
DECL_FUNC(void (__cdecl*_list_playerTriggers_dtor)(), _list_playerTriggers_dtor, 0x4fdb40);
DECL_FUNC(void (__cdecl*_list_league_dtor)(), _list_league_dtor, 0x4fdba0);
DECL_FUNC(void (__cdecl*_list_banned_dtor)(), _list_banned_dtor, 0x4fdc00);
DECL_FUNC(void (__cdecl*_list_dtor_4)(), _list_dtor_4, 0x4fdc60);
DECL_FUNC(void (__cdecl*_list_dtor_5)(), _list_dtor_5, 0x4fdcc0);
DECL_FUNC(void (__cdecl*_list_briefingTriggers_dtor)(), _list_briefingTriggers_dtor, 0x4fdd20);
DECL_FUNC(void (__cdecl*_list_dtor_6)(), _list_dtor_6, 0x4fdd80);
DECL_FUNC(void (__cdecl*SBigDestructor)(), SBigDestructor, 0x4fdde0);
DECL_FUNC(void (__cdecl*SBigDestructor_0)(), SBigDestructor_0, 0x4fddf0);
DECL_FUNC(void (__cdecl*_list_areaFixups_dtor)(), _list_areaFixups_dtor, 0x4fde00);
DECL_FUNC(void (__cdecl*CriticalSectionDestructor)(), CriticalSectionDestructor, 0x4fde60);
DECL_FUNC(void (__cdecl*_list_dtor_7)(), _list_dtor_7, 0x4fde70);
DECL_FUNC(void (__cdecl*_list_dtor_8)(), _list_dtor_8, 0x4fded0);
DECL_FUNC(void (__cdecl*UIDlgListDestructor)(), UIDlgListDestructor, 0x4fdf30);
_SCOPETABLE_ENTRY& stru_4FE5F0 = * ((decltype(&stru_4FE5F0)) 0x4fe5f0);
CHAR* ProcName = (decltype(ProcName + 0)) 0x4fe5fc;
CHAR* ModuleName = (decltype(ModuleName + 0)) 0x4fe60c;
_SCOPETABLE_ENTRY& stru_4FE618 = * ((decltype(&stru_4FE618)) 0x4fe618);
char* aRuntimeError = (decltype(aRuntimeError + 0)) 0x4fe624;
char* aTlossError = (decltype(aTlossError + 0)) 0x4fe634;
char* aSingError = (decltype(aSingError + 0)) 0x4fe644;
char* aDomainError = (decltype(aDomainError + 0)) 0x4fe654;
char* aR6029ThisAppli = (decltype(aR6029ThisAppli + 0)) 0x4fe668;
char* aR6028UnableToI = (decltype(aR6028UnableToI + 0)) 0x4fe70c;
char* aR6027NotEnough = (decltype(aR6027NotEnough + 0)) 0x4fe734;
char* aR6026NotEnough = (decltype(aR6026NotEnough + 0)) 0x4fe76c;
char* aR6025PureVirtu = (decltype(aR6025PureVirtu + 0)) 0x4fe7a4;
char* aR6024NotEnough = (decltype(aR6024NotEnough + 0)) 0x4fe7cc;
char* aR6019UnableToO = (decltype(aR6019UnableToO + 0)) 0x4fe804;
char* aR6018Unexpecte = (decltype(aR6018Unexpecte + 0)) 0x4fe830;
char* aR6017Unexpecte = (decltype(aR6017Unexpecte + 0)) 0x4fe854;
char* aR6016NotEnough = (decltype(aR6016NotEnough + 0)) 0x4fe884;
char* aThisApplicatio = (decltype(aThisApplicatio + 0)) 0x4fe8b0;
char* aR6009NotEnough = (decltype(aR6009NotEnough + 0)) 0x4fe948;
char* aR6008NotEnough = (decltype(aR6008NotEnough + 0)) 0x4fe974;
char* aR6002FloatingP = (decltype(aR6002FloatingP + 0)) 0x4fe9a0;
char* aMicrosoftVisua = (decltype(aMicrosoftVisua + 0)) 0x4fe9c8;
char* aRuntimeErrorPr = (decltype(aRuntimeErrorPr + 0)) 0x4fe9f0;
char* aProgramNameUnk = (decltype(aProgramNameUnk + 0)) 0x4fea0c;
_SCOPETABLE_ENTRY& stru_4FEA28 = * ((decltype(&stru_4FEA28)) 0x4fea28);
_SCOPETABLE_ENTRY& stru_4FEA38 = * ((decltype(&stru_4FEA38)) 0x4fea38);
_SCOPETABLE_ENTRY* stru_4FEA48 = (decltype(stru_4FEA48 + 0)) 0x4fea48;
CHAR* aFlsfree = (decltype(aFlsfree + 0)) 0x4fea60;
CHAR* aFlssetvalue = (decltype(aFlssetvalue + 0)) 0x4fea68;
CHAR* aFlsgetvalue = (decltype(aFlsgetvalue + 0)) 0x4fea74;
CHAR* aFlsalloc = (decltype(aFlsalloc + 0)) 0x4fea80;
CHAR* aKernel32_dll_0 = (decltype(aKernel32_dll_0 + 0)) 0x4fea8c;
_SCOPETABLE_ENTRY& stru_4FEAA0 = * ((decltype(&stru_4FEAA0)) 0x4feaa0);
_SCOPETABLE_ENTRY& stru_4FEAB0 = * ((decltype(&stru_4FEAB0)) 0x4feab0);
CHAR* aGetprocesswind = (decltype(aGetprocesswind + 0)) 0x4feabc;
CHAR* aGetuserobjecti = (decltype(aGetuserobjecti + 0)) 0x4fead4;
CHAR* aGetlastactivep = (decltype(aGetlastactivep + 0)) 0x4feaf0;
CHAR* aGetactivewindo = (decltype(aGetactivewindo + 0)) 0x4feb04;
CHAR* aMessageboxa = (decltype(aMessageboxa + 0)) 0x4feb14;
CHAR* LibFileName = (decltype(LibFileName + 0)) 0x4feb20;
_SCOPETABLE_ENTRY& stru_4FEB30 = * ((decltype(&stru_4FEB30)) 0x4feb30);
_SCOPETABLE_ENTRY& stru_4FEB40 = * ((decltype(&stru_4FEB40)) 0x4feb40);
_SCOPETABLE_ENTRY& stru_4FEB50 = * ((decltype(&stru_4FEB50)) 0x4feb50);
_SCOPETABLE_ENTRY& stru_4FEB60 = * ((decltype(&stru_4FEB60)) 0x4feb60);
_SCOPETABLE_ENTRY& stru_4FEB70 = * ((decltype(&stru_4FEB70)) 0x4feb70);
CHAR* aInitializecrit = (decltype(aInitializecrit + 0)) 0x4feb7c;
_SCOPETABLE_ENTRY& stru_4FEBA8 = * ((decltype(&stru_4FEBA8)) 0x4feba8);
_SCOPETABLE_ENTRY& stru_4FEBB8 = * ((decltype(&stru_4FEBB8)) 0x4febb8);
wchar_t* aHH = (decltype(aHH + 0)) 0x4febc8;
_SCOPETABLE_ENTRY& stru_4FED48 = * ((decltype(&stru_4FED48)) 0x4fed48);
_SCOPETABLE_ENTRY& stru_4FED58 = * ((decltype(&stru_4FED58)) 0x4fed58);
_SCOPETABLE_ENTRY& stru_4FED68 = * ((decltype(&stru_4FED68)) 0x4fed68);
char* aProgram = (decltype(aProgram + 0)) 0x4fed74;
char* aABufferOverrun = (decltype(aABufferOverrun + 0)) 0x4fed80;
char* aBufferOverrunD = (decltype(aBufferOverrunD + 0)) 0x4fee20;
char* aASecurityError = (decltype(aASecurityError + 0)) 0x4fee40;
char* aUnknownSecurit = (decltype(aUnknownSecurit + 0)) 0x4feef4;
_SCOPETABLE_ENTRY& stru_4FEF18 = * ((decltype(&stru_4FEF18)) 0x4fef18);
wchar_t* asc_4FF028 = (decltype(asc_4FF028 + 0)) 0x4ff028;
const WCHAR& SrcStr = * ((decltype(&SrcStr)) 0x4ff42c);
_SCOPETABLE_ENTRY* stru_4FF430 = (decltype(stru_4FF430 + 0)) 0x4ff430;
_SCOPETABLE_ENTRY& stru_4FF458 = * ((decltype(&stru_4FF458)) 0x4ff458);
char* aHhMmSs = (decltype(aHhMmSs + 0)) 0x4ff464;
char* aDdddMmmmDdYyyy = (decltype(aDdddMmmmDdYyyy + 0)) 0x4ff470;
char* aMmDdYy = (decltype(aMmDdYy + 0)) 0x4ff484;
char* aPm = (decltype(aPm + 0)) 0x4ff490;
char* aAm = (decltype(aAm + 0)) 0x4ff494;
char* aDecember = (decltype(aDecember + 0)) 0x4ff498;
char* aNovember = (decltype(aNovember + 0)) 0x4ff4a4;
char* aOctober = (decltype(aOctober + 0)) 0x4ff4b0;
char* aSeptember = (decltype(aSeptember + 0)) 0x4ff4b8;
char* aAugust = (decltype(aAugust + 0)) 0x4ff4c4;
char* aJuly = (decltype(aJuly + 0)) 0x4ff4cc;
char* aJune = (decltype(aJune + 0)) 0x4ff4d4;
char* aApril = (decltype(aApril + 0)) 0x4ff4dc;
char* aMarch = (decltype(aMarch + 0)) 0x4ff4e4;
char* aFebruary = (decltype(aFebruary + 0)) 0x4ff4ec;
char* aJanuary = (decltype(aJanuary + 0)) 0x4ff4f8;
_SCOPETABLE_ENTRY& stru_4FF590 = * ((decltype(&stru_4FF590)) 0x4ff590);
char& byte_4FF59C = * ((decltype(&byte_4FF59C)) 0x4ff59c);
char* aUnmontuewedthu = (decltype(aUnmontuewedthu + 0)) 0x4ff59d;
char& byte_4FF5B4 = * ((decltype(&byte_4FF5B4)) 0x4ff5b4);
char* aAnfebmaraprmay = (decltype(aAnfebmaraprmay + 0)) 0x4ff5b5;
char* aTz = (decltype(aTz + 0)) 0x4ff5dc;
_SCOPETABLE_ENTRY& stru_4FF5E0 = * ((decltype(&stru_4FF5E0)) 0x4ff5e0);
_SCOPETABLE_ENTRY& stru_4FF5F0 = * ((decltype(&stru_4FF5F0)) 0x4ff5f0);
_SCOPETABLE_ENTRY& stru_4FF600 = * ((decltype(&stru_4FF600)) 0x4ff600);
_SCOPETABLE_ENTRY* stru_4FF610 = (decltype(stru_4FF610 + 0)) 0x4ff610;
void *(__thiscall *&off_4FF62C)(type_info *__hidden this_, char) = *((decltype(&off_4FF62C)) 0x4ff62c);
_SCOPETABLE_ENTRY& stru_4FF630 = * ((decltype(&stru_4FF630)) 0x4ff630);
_SCOPETABLE_ENTRY& stru_4FF640 = * ((decltype(&stru_4FF640)) 0x4ff640);
_SCOPETABLE_ENTRY& stru_4FF650 = * ((decltype(&stru_4FF650)) 0x4ff650);
_SCOPETABLE_ENTRY& stru_4FF660 = * ((decltype(&stru_4FF660)) 0x4ff660);
_SCOPETABLE_ENTRY& stru_4FF670 = * ((decltype(&stru_4FF670)) 0x4ff670);
_SCOPETABLE_ENTRY& stru_4FF680 = * ((decltype(&stru_4FF680)) 0x4ff680);
_SCOPETABLE_ENTRY& stru_4FF690 = * ((decltype(&stru_4FF690)) 0x4ff690);
_SCOPETABLE_ENTRY& stru_4FF6A0 = * ((decltype(&stru_4FF6A0)) 0x4ff6a0);
_SCOPETABLE_ENTRY* stru_4FF6B0 = (decltype(stru_4FF6B0 + 0)) 0x4ff6b0;
char& byte_4FF6C8 = * ((decltype(&byte_4FF6C8)) 0x4ff6c8);
wchar_t* aNull_0 = (decltype(aNull_0 + 0)) 0x4ff724;
char* aNull = (decltype(aNull + 0)) 0x4ff734;
_SCOPETABLE_ENTRY* stru_4FF740 = (decltype(stru_4FF740 + 0)) 0x4ff740;
_SCOPETABLE_ENTRY& stru_4FF768 = * ((decltype(&stru_4FF768)) 0x4ff768);
_SCOPETABLE_ENTRY& stru_4FF778 = * ((decltype(&stru_4FF778)) 0x4ff778);
_SCOPETABLE_ENTRY* stru_4FF788 = (decltype(stru_4FF788 + 0)) 0x4ff788;
_SCOPETABLE_ENTRY& stru_4FF7A0 = * ((decltype(&stru_4FF7A0)) 0x4ff7a0);
_SCOPETABLE_ENTRY& stru_4FF7B0 = * ((decltype(&stru_4FF7B0)) 0x4ff7b0);
_SCOPETABLE_ENTRY* stru_4FF7C0 = (decltype(stru_4FF7C0 + 0)) 0x4ff7c0;
_SCOPETABLE_ENTRY& stru_4FF7D8 = * ((decltype(&stru_4FF7D8)) 0x4ff7d8);
_SCOPETABLE_ENTRY& stru_4FF7E8 = * ((decltype(&stru_4FF7E8)) 0x4ff7e8);
_SCOPETABLE_ENTRY& stru_4FF7F8 = * ((decltype(&stru_4FF7F8)) 0x4ff7f8);
_SCOPETABLE_ENTRY& stru_4FF808 = * ((decltype(&stru_4FF808)) 0x4ff808);
_SCOPETABLE_ENTRY& stru_4FF818 = * ((decltype(&stru_4FF818)) 0x4ff818);
_SCOPETABLE_ENTRY& stru_4FF828 = * ((decltype(&stru_4FF828)) 0x4ff828);
_SCOPETABLE_ENTRY& stru_4FF838 = * ((decltype(&stru_4FF838)) 0x4ff838);
CHAR* aSetsecurityinf = (decltype(aSetsecurityinf + 0)) 0x4ff844;
CHAR* aAdvapi32_dll_0 = (decltype(aAdvapi32_dll_0 + 0)) 0x4ff854;
char* aForcehighmem = (decltype(aForcehighmem + 0)) 0x4ff864;
char* aForcelowmem = (decltype(aForcelowmem + 0)) 0x4ff874;
CHAR* RootPathName = (decltype(RootPathName + 0)) 0x4ff880;
char* aCreatewindowex = (decltype(aCreatewindowex + 0)) 0x4ff884;
char* aStarcraft_0 = (decltype(aStarcraft_0 + 0)) 0x4ff894;
CHAR* WindowName = (decltype(WindowName + 0)) 0x4ff8a0;
char* aRegisterclass = (decltype(aRegisterclass + 0)) 0x4ff8ac;
CHAR* aSwarclass = (decltype(aSwarclass + 0)) 0x4ff8bc;
CHAR* aStarcraftCheck = (decltype(aStarcraftCheck + 0)) 0x4ff8c8;
char* aNew = (decltype(aNew + 0)) 0x4ff8ec;
char* aDelete = (decltype(aDelete + 0)) 0x4ff8f0;
int& dword_4FF8F8 = * ((decltype(&dword_4FF8F8)) 0x4ff8f8);
char* aLastreplay_0 = (decltype(aLastreplay_0 + 0)) 0x4ff900;
int* dword_4FF90C = (decltype(dword_4FF90C + 0)) 0x4ff90c;
char* aShow = (decltype(aShow + 0)) 0x4ff928;
int (*&off_4FF934)() = *((decltype(&off_4FF934)) 0x4ff934);
char* aHide = (decltype(aHide + 0)) 0x4ff938;
char* aKills = (decltype(aKills + 0)) 0x4ff948;
char* byte_4FF960 = (decltype(byte_4FF960 + 0)) 0x4ff960;
__int16* word_4FF964 = (decltype(word_4FF964 + 0)) 0x4ff964;
char* aRazings = (decltype(aRazings + 0)) 0x4ff968;
char* aSlaughter = (decltype(aSlaughter + 0)) 0x4ff988;
char* aResources = (decltype(aResources + 0)) 0x4ff9a8;
char* aMinerals = (decltype(aMinerals + 0)) 0x4ff9c8;
char* aGas = (decltype(aGas + 0)) 0x4ff9e8;
char* aScore = (decltype(aScore + 0)) 0x4ffa08;
char* aScoreUnits = (decltype(aScoreUnits + 0)) 0x4ffa28;
char* aScoreBuildings = (decltype(aScoreBuildings + 0)) 0x4ffa48;
char* aScoreKills = (decltype(aScoreKills + 0)) 0x4ffa68;
char* aScoreRazings = (decltype(aScoreRazings + 0)) 0x4ffa88;
char* aScoreUser = (decltype(aScoreUser + 0)) 0x4ffaa8;
int* dword_4FFAD4 = (decltype(dword_4FFAD4 + 0)) 0x4ffad4;
_DWORD* off_4FFAD8 = (decltype(off_4FFAD8 + 0)) 0x4ffad8;
char *& off_4FFBC8 = * ((decltype(&off_4FFBC8)) 0x4ffbc8);
wchar_t* aA_1 = (decltype(aA_1 + 0)) 0x4ffd90;
wchar_t* aJ1 = (decltype(aJ1 + 0)) 0x4ffde8;
wchar_t* aK2 = (decltype(aK2 + 0)) 0x4ffdf0;
wchar_t* aL3 = (decltype(aL3 + 0)) 0x4ffdf8;
wchar_t* aM4 = (decltype(aM4 + 0)) 0x4ffe00;
wchar_t* a9 = (decltype(a9 + 0)) 0x4ffe78;
char* aRezGlucmpgn_bi = (decltype(aRezGlucmpgn_bi + 0)) 0x4ffecc;
char* aRezGluexpcmpgn = (decltype(aRezGluexpcmpgn + 0)) 0x4ffee0;
char* aLastreplay_1 = (decltype(aLastreplay_1 + 0)) 0x4ffef8;
char* aLocal_dll = (decltype(aLocal_dll + 0)) 0x4fff08;
EstablishingShotPosition* establishingShotPositions = (decltype(establishingShotPositions + 0)) 0x4fff24;
char* aA_0 = (decltype(aA_0 + 0)) 0x4fff54;
CampaignMission* campaign_missions = (decltype(campaign_missions + 0)) 0x4fff60;
CHAR* String2 = (decltype(String2 + 0)) 0x500194;
char* aStareditScenar = (decltype(aStareditScenar + 0)) 0x5001b4;
ChkSectionLoader* stru_5001CC = (decltype(stru_5001CC + 0)) 0x5001cc;
ChkSectionLoader* stru_5001E8 = (decltype(stru_5001E8 + 0)) 0x5001e8;
ChkSectionLoader* stru_5002A0 = (decltype(stru_5002A0 + 0)) 0x5002a0;
ChkSectionLoader* stru_500388 = (decltype(stru_500388 + 0)) 0x500388;
ChkLoader* chk_loaders = (decltype(chk_loaders + 0)) 0x500560;
ChkLoader& dword_5005D8 = * ((decltype(&dword_5005D8)) 0x5005d8);
int* dword_5008EC = (decltype(dword_5008EC + 0)) 0x5008ec;
signed __int32* volume = (decltype(volume + 0)) 0x5008f0;
__int16* word_500A94 = (decltype(word_500A94 + 0)) 0x500a94;
__int16* word_500A96 = (decltype(word_500A96 + 0)) 0x500a96;
__int16* word_500AB8 = (decltype(word_500AB8 + 0)) 0x500ab8;
__int16* word_500ABA = (decltype(word_500ABA + 0)) 0x500aba;
__int64& cheat_hash_there_is_no_cow_level = * ((decltype(&cheat_hash_there_is_no_cow_level)) 0x500af8);
__int64& cheat_hash_game_over_man = * ((decltype(&cheat_hash_game_over_man)) 0x500b00);
__int64& cheat_hash_power_overwhelming = * ((decltype(&cheat_hash_power_overwhelming)) 0x500b08);
__int64& cheat_hash_show_me_the_money = * ((decltype(&cheat_hash_show_me_the_money)) 0x500b10);
__int64& cheat_hash_whats_mine_is_mine = * ((decltype(&cheat_hash_whats_mine_is_mine)) 0x500b18);
__int64& cheat_hash_breathe_deep = * ((decltype(&cheat_hash_breathe_deep)) 0x500b20);
__int64& cheat_hash_something_for_nothing = * ((decltype(&cheat_hash_something_for_nothing)) 0x500b28);
__int64& cheat_hash_black_sheep_wall = * ((decltype(&cheat_hash_black_sheep_wall)) 0x500b30);
__int64& cheat_hash_operation_cwal = * ((decltype(&cheat_hash_operation_cwal)) 0x500b38);
__int64& cheat_hash_staying_alive = * ((decltype(&cheat_hash_staying_alive)) 0x500b40);
__int64& cheat_hash_medieval_man = * ((decltype(&cheat_hash_medieval_man)) 0x500b48);
__int64& cheat_hash_modify_the_phase_variance = * ((decltype(&cheat_hash_modify_the_phase_variance)) 0x500b50);
__int64& cheat_hash_war_aint_what_it_used_to_be = * ((decltype(&cheat_hash_war_aint_what_it_used_to_be)) 0x500b58);
__int64& cheat_hash_food_for_thought = * ((decltype(&cheat_hash_food_for_thought)) 0x500b60);
__int64& cheat_hash_the_gathering = * ((decltype(&cheat_hash_the_gathering)) 0x500b68);
__int64& cheat_hash_radio_free_zerg = * ((decltype(&cheat_hash_radio_free_zerg)) 0x500b70);
__int64& cheat_hash_ophelia = * ((decltype(&cheat_hash_ophelia)) 0x500b78);
__int64& cheat_hash_no_glues = * ((decltype(&cheat_hash_no_glues)) 0x500b80);
__int16* word_500B98 = (decltype(word_500B98 + 0)) 0x500b98;
char* a_mpc = (decltype(a_mpc + 0)) 0x500bc4;
char* a_spc = (decltype(a_spc + 0)) 0x500bcc;
char* cinematic_intros = (decltype(cinematic_intros + 0)) 0x500be4;
char* aLastreplay = (decltype(aLastreplay + 0)) 0x500c28;
char* aCputhrottle = (decltype(aCputhrottle + 0)) 0x500c94;
char* aGamma = (decltype(aGamma + 0)) 0x500cb0;
char* aColorcycle = (decltype(aColorcycle + 0)) 0x500cb8;
char* aUnitportraits = (decltype(aUnitportraits + 0)) 0x500cc4;
char *& off_500E40 = * ((decltype(&off_500E40)) 0x500e40);
char *& off_500F60 = * ((decltype(&off_500F60)) 0x500f60);
char* aGlueBattle_n_9 = (decltype(aGlueBattle_n_9 + 0)) 0x501080;
char* aGlueBattle_n_8 = (decltype(aGlueBattle_n_8 + 0)) 0x5010ac;
char* aGlueBattle__10 = (decltype(aGlueBattle__10 + 0)) 0x5010d8;
__int16* word_50110C = (decltype(word_50110C + 0)) 0x50110c;
char* byte_50110E = (decltype(byte_50110E + 0)) 0x50110e;
__int16* word_50112C = (decltype(word_50112C + 0)) 0x50112c;
char* keyname = (decltype(keyname + 0)) 0x501434;
bool (__fastcall ** GenericDlgInteractFxns)(dialog *dlg, struct dlgEvent *evt) = (decltype(GenericDlgInteractFxns + 0)) 0x5014ac;
void (__fastcall ** GenericDlgUpdateFxns)(dialog *dlg, int x, int y, rect *dst) = (decltype(GenericDlgUpdateFxns + 0)) 0x501504;
int* dword_501544 = (decltype(dword_501544 + 0)) 0x501544;
CndSignature* stru_50156C = (decltype(stru_50156C + 0)) 0x50156c;
char* aReplay = (decltype(aReplay + 0)) 0x501654;
char* aSMapsReplaysS_ = (decltype(aSMapsReplaysS_ + 0)) 0x501660;
char* a_ = (decltype(a_ + 0)) 0x501678;
CHAR* String = (decltype(String + 0)) 0x50167c;
char* aRezSavegame_bi = (decltype(aRezSavegame_bi + 0)) 0x501680;
char* aStarcraftSw_50 = (decltype(aStarcraftSw_50 + 0)) 0x501694;
char* aRep = (decltype(aRep + 0)) 0x5016b4;
char* a__1 = (decltype(a__1 + 0)) 0x5016b8;
char* aMapsReplays = (decltype(aMapsReplays + 0)) 0x5016bc;
CHAR* SubBlock = (decltype(SubBlock + 0)) 0x5016cc;
char* aGluePalpvTile_ = (decltype(aGluePalpvTile_ + 0)) 0x5016d0;
char* aGluePaltvTile_ = (decltype(aGluePaltvTile_ + 0)) 0x5016e4;
char* aGluePalzvTile_ = (decltype(aGluePalzvTile_ + 0)) 0x5016f8;
char* aGluePalpdTile_ = (decltype(aGluePalpdTile_ + 0)) 0x50170c;
char* aGluePaltdTile_ = (decltype(aGluePaltdTile_ + 0)) 0x501720;
char* aGluePalzdTile_ = (decltype(aGluePalzdTile_ + 0)) 0x501734;
char* aRezGluall_tbl = (decltype(aRezGluall_tbl + 0)) 0x501748;
char* aBackgnd_pcx = (decltype(aBackgnd_pcx + 0)) 0x501758;
char* aDlg_grp = (decltype(aDlg_grp + 0)) 0x501768;
char* aTfont_pcx = (decltype(aTfont_pcx + 0)) 0x501774;
char* aTeffect_pcx = (decltype(aTeffect_pcx + 0)) 0x501780;
char* aStarcraftSw_79 = (decltype(aStarcraftSw_79 + 0)) 0x501790;
char* aArrow_grp = (decltype(aArrow_grp + 0)) 0x5017b0;
char* aGlueGeneric = (decltype(aGlueGeneric + 0)) 0x5017bc;
char* aGlueGamemode = (decltype(aGlueGamemode + 0)) 0x5017cc;
char* aGlueDirect = (decltype(aGlueDirect + 0)) 0x5017dc;
char* aGlueModem = (decltype(aGlueModem + 0)) 0x5017ec;
char* aGlueScore = (decltype(aGlueScore + 0)) 0x5017f8;
char* aGlueLoad = (decltype(aGlueLoad + 0)) 0x501804;
char* aGlueCreate = (decltype(aGlueCreate + 0)) 0x501810;
char* aGlueGamesel = (decltype(aGlueGamesel + 0)) 0x501820;
char* aGlueReadyp = (decltype(aGlueReadyp + 0)) 0x501830;
char* aGlueReadyz = (decltype(aGlueReadyz + 0)) 0x501840;
char* aGlueReadyt = (decltype(aGlueReadyt + 0)) 0x501850;
char* aGlueCampaign = (decltype(aGlueCampaign + 0)) 0x501860;
char* aGlueLogin = (decltype(aGlueLogin + 0)) 0x501870;
char* aGlueBattle_net_0 = (decltype(aGlueBattle_net_0 + 0)) 0x50187c;
char* aGlueChatroom = (decltype(aGlueChatroom + 0)) 0x501890;
char* aGlueSelconn = (decltype(aGlueSelconn + 0)) 0x5018a0;
char* aGlueSimulate = (decltype(aGlueSimulate + 0)) 0x5018b0;
char* aGlueMainmenu = (decltype(aGlueMainmenu + 0)) 0x5018c0;
char* a_scm = (decltype(a_scm + 0)) 0x5018d0;
char* aStarcraftSw_78 = (decltype(aStarcraftSw_78 + 0)) 0x5018d8;
char* aRezGlumain_bin = (decltype(aRezGlumain_bin + 0)) 0x5018fc;
char* aStarcraftSw_77 = (decltype(aStarcraftSw_77 + 0)) 0x50190c;
char* aStaredit_exe = (decltype(aStaredit_exe + 0)) 0x50192c;
char* aDlgsProtoss_gr = (decltype(aDlgsProtoss_gr + 0)) 0x50193c;
char* aDlgsTerran_grp = (decltype(aDlgsTerran_grp + 0)) 0x501950;
char* aDlgsZerg_grp = (decltype(aDlgsZerg_grp + 0)) 0x501960;
char* aStarcraftSw_91 = (decltype(aStarcraftSw_91 + 0)) 0x501970;
char* aArrMapdata_tbl = (decltype(aArrMapdata_tbl + 0)) 0x501990;
char* aArrMapdata_dat = (decltype(aArrMapdata_dat + 0)) 0x5019a0;
char* aRezCdversion_t = (decltype(aRezCdversion_t + 0)) 0x5019b0;
char* aRezDataversion = (decltype(aRezDataversion + 0)) 0x5019c4;
char* aInvalidDataFil = (decltype(aInvalidDataFil + 0)) 0x5019d8;
char* asc_501A28 = (decltype(asc_501A28 + 0)) 0x501a28;
char* asc_501A2C = (decltype(asc_501A2C + 0)) 0x501a2c;
char* aDdemulate = (decltype(aDdemulate + 0)) 0x501a30;
char* aNosound = (decltype(aNosound + 0)) 0x501a3c;
char* asc_501A44 = (decltype(asc_501A44 + 0)) 0x501a44;
char* aBroodat_mpq = (decltype(aBroodat_mpq + 0)) 0x501a48;
char* aPatch_rt_mpq = (decltype(aPatch_rt_mpq + 0)) 0x501a58;
char* aStardat_mpq_0 = (decltype(aStardat_mpq_0 + 0)) 0x501a68;
char* aStardat_mpq = (decltype(aStardat_mpq + 0)) 0x501a74;
char* aInstall_exe = (decltype(aInstall_exe + 0)) 0x501a84;
char* aStarcraft_mpq = (decltype(aStarcraft_mpq + 0)) 0x501a94;
char* aBroodwar_mpq = (decltype(aBroodwar_mpq + 0)) 0x501aa4;
char* aStarcd = (decltype(aStarcd + 0)) 0x501ab4;
char* aVersionD_D_D = (decltype(aVersionD_D_D + 0)) 0x501abc;
char* aFont8 = (decltype(aFont8 + 0)) 0x501ad0;
char* aFont10 = (decltype(aFont10 + 0)) 0x501ad8;
char* aFont14 = (decltype(aFont14 + 0)) 0x501ae0;
char* aFont16 = (decltype(aFont16 + 0)) 0x501ae8;
char* aFont16x = (decltype(aFont16x + 0)) 0x501af0;
char* aStarcraftSw_75 = (decltype(aStarcraftSw_75 + 0)) 0x501af8;
unsigned __int8& aFindFastIndexe = * ((decltype(&aFindFastIndexe)) 0x501b18);
unsigned __int8& aMomParent = * ((decltype(&aMomParent)) 0x501b2c);
char* aMicrosoftFindF = (decltype(aMicrosoftFindF + 0)) 0x501b38;
char* aMicrosoftOffic = (decltype(aMicrosoftOffic + 0)) 0x501b50;
char* asc_501B74 = (decltype(asc_501B74 + 0)) 0x501b74;
CHAR* Operation = (decltype(Operation + 0)) 0x501b78;
const char* empty_string = (decltype(empty_string + 0)) 0x501b7d;
char* aRezEpilogx_txt = (decltype(aRezEpilogx_txt + 0)) 0x501b80;
char* aSS_ccd = (decltype(aSS_ccd + 0)) 0x501b90;
char* aSgubon = (decltype(aSgubon + 0)) 0x501b9c;
char* aSS_clh = (decltype(aSS_clh + 0)) 0x501ba4;
char* aSS_gid = (decltype(aSS_gid + 0)) 0x501bb0;
char* aFont = (decltype(aFont + 0)) 0x501bbc;
char* aStarcraftSw_74 = (decltype(aStarcraftSw_74 + 0)) 0x501bc4;
char* aStarcraftSw_73 = (decltype(aStarcraftSw_73 + 0)) 0x501be4;
const char* aCrdt_exp = (decltype(aCrdt_exp + 0)) 0x501c08;
const char* aCrdt_lst = (decltype(aCrdt_lst + 0)) 0x501c14;
const char* aEpilog = (decltype(aEpilog + 0)) 0x501c20;
char* aEpilogx = (decltype(aEpilogx + 0)) 0x501c28;
char* aRezCredits_bin = (decltype(aRezCredits_bin + 0)) 0x501c30;
char* aRezS_txt = (decltype(aRezS_txt + 0)) 0x501c40;
char* aDisplaytime = (decltype(aDisplaytime + 0)) 0x501c4c;
char* aFadespeed = (decltype(aFadespeed + 0)) 0x501c5c;
char* aFontcolor = (decltype(aFontcolor + 0)) 0x501c6c;
char* aPage = (decltype(aPage + 0)) 0x501c7c;
char* aBackground = (decltype(aBackground + 0)) 0x501c84;
char* aStarcraftSw_72 = (decltype(aStarcraftSw_72 + 0)) 0x501c94;
char* aFinz09bx = (decltype(aFinz09bx + 0)) 0x501cb4;
char* aEstz10x = (decltype(aEstz10x + 0)) 0x501cc0;
char* aEstz09bx = (decltype(aEstz09bx + 0)) 0x501cc8;
char* aEstz09x = (decltype(aEstz09x + 0)) 0x501cd4;
char* aEstz08x = (decltype(aEstz08x + 0)) 0x501cdc;
char* aEstz07x = (decltype(aEstz07x + 0)) 0x501ce4;
char* aEstz06x = (decltype(aEstz06x + 0)) 0x501cec;
char* aEstz05x = (decltype(aEstz05x + 0)) 0x501cf4;
char* aEstz04x = (decltype(aEstz04x + 0)) 0x501cfc;
char* aEstz03x = (decltype(aEstz03x + 0)) 0x501d04;
char* aEstz02x = (decltype(aEstz02x + 0)) 0x501d0c;
char* aEstz01x = (decltype(aEstz01x + 0)) 0x501d14;
char* aEstt08x = (decltype(aEstt08x + 0)) 0x501d1c;
char* aEstt07x = (decltype(aEstt07x + 0)) 0x501d24;
char* aEstt06x = (decltype(aEstt06x + 0)) 0x501d2c;
char* aEstt05bx = (decltype(aEstt05bx + 0)) 0x501d34;
char* aEstt05ax = (decltype(aEstt05ax + 0)) 0x501d40;
char* aEstt04x = (decltype(aEstt04x + 0)) 0x501d4c;
char* aEstt03x = (decltype(aEstt03x + 0)) 0x501d54;
char* aEstt02x = (decltype(aEstt02x + 0)) 0x501d5c;
char* aEstt01x = (decltype(aEstt01x + 0)) 0x501d64;
char* aEstp08x = (decltype(aEstp08x + 0)) 0x501d6c;
char* aEstp07x = (decltype(aEstp07x + 0)) 0x501d74;
char* aEstp06x = (decltype(aEstp06x + 0)) 0x501d7c;
char* aEstp05x = (decltype(aEstp05x + 0)) 0x501d84;
char* aEstp04x = (decltype(aEstp04x + 0)) 0x501d8c;
char* aEstp03x = (decltype(aEstp03x + 0)) 0x501d94;
char* aEstp02x = (decltype(aEstp02x + 0)) 0x501d9c;
char* aEstp01x = (decltype(aEstp01x + 0)) 0x501da4;
char* aEstp10 = (decltype(aEstp10 + 0)) 0x501dac;
char* aEstp09 = (decltype(aEstp09 + 0)) 0x501db4;
char* aEstp08 = (decltype(aEstp08 + 0)) 0x501dbc;
char* aEstp07 = (decltype(aEstp07 + 0)) 0x501dc4;
char* aEstp06 = (decltype(aEstp06 + 0)) 0x501dcc;
char* aEstp05 = (decltype(aEstp05 + 0)) 0x501dd4;
char* aEstp04 = (decltype(aEstp04 + 0)) 0x501ddc;
char* aEstp03 = (decltype(aEstp03 + 0)) 0x501de4;
char* aEstp02 = (decltype(aEstp02 + 0)) 0x501dec;
char* aEstp01 = (decltype(aEstp01 + 0)) 0x501df4;
char* aEstz10 = (decltype(aEstz10 + 0)) 0x501dfc;
char* aEstz09 = (decltype(aEstz09 + 0)) 0x501e04;
char* aEstz08 = (decltype(aEstz08 + 0)) 0x501e0c;
char* aEstz07 = (decltype(aEstz07 + 0)) 0x501e14;
char* aEstz06 = (decltype(aEstz06 + 0)) 0x501e1c;
char* aEstz05 = (decltype(aEstz05 + 0)) 0x501e24;
char* aEstz04 = (decltype(aEstz04 + 0)) 0x501e2c;
char* aEstz03 = (decltype(aEstz03 + 0)) 0x501e34;
char* aEstz02 = (decltype(aEstz02 + 0)) 0x501e3c;
char* aEstz01 = (decltype(aEstz01 + 0)) 0x501e44;
char* aEstt12 = (decltype(aEstt12 + 0)) 0x501e4c;
char* aEstt11 = (decltype(aEstt11 + 0)) 0x501e54;
char* aEstt09 = (decltype(aEstt09 + 0)) 0x501e5c;
char* aEstt08 = (decltype(aEstt08 + 0)) 0x501e64;
char* aEstt06 = (decltype(aEstt06 + 0)) 0x501e6c;
char* aEstt05 = (decltype(aEstt05 + 0)) 0x501e74;
char* aEstt04 = (decltype(aEstt04 + 0)) 0x501e7c;
char* aEstt03 = (decltype(aEstt03 + 0)) 0x501e84;
char* aEstt02 = (decltype(aEstt02 + 0)) 0x501e8c;
char* aEstt01 = (decltype(aEstt01 + 0)) 0x501e94;
char* aEstt0t = (decltype(aEstt0t + 0)) 0x501e9c;
char* aScreenlowerlef = (decltype(aScreenlowerlef + 0)) 0x501ea4;
char* aScreencenter = (decltype(aScreencenter + 0)) 0x501eb8;
char* aScreenbottom = (decltype(aScreenbottom + 0)) 0x501ec8;
char* aScreentop = (decltype(aScreentop + 0)) 0x501ed8;
char* aScreenright = (decltype(aScreenright + 0)) 0x501ee8;
char* aScreenleft = (decltype(aScreenleft + 0)) 0x501ef8;
char* aScriptDDoesNot = (decltype(aScriptDDoesNot + 0)) 0x501f08;
char* aGameTselect_pc = (decltype(aGameTselect_pc + 0)) 0x501f24;
char* a2 = (decltype(a2 + 0)) 0x501f38;
char* aScriptsIscript = (decltype(aScriptsIscript + 0)) 0x501f48;
char* aTilesetSShift_ = (decltype(aTilesetSShift_ + 0)) 0x501f5c;
char* aArrImages_tbl = (decltype(aArrImages_tbl + 0)) 0x501f74;
char* aStarcraftSw_71 = (decltype(aStarcraftSw_71 + 0)) 0x501f84;
char* aRezTitledlg_bi = (decltype(aRezTitledlg_bi + 0)) 0x501fa4;
char* aGlueTitleTfont = (decltype(aGlueTitleTfont + 0)) 0x501fb8;
char* fileName = (decltype(fileName + 0)) 0x501fd0;
char* aStarcraftSw_70 = (decltype(aStarcraftSw_70 + 0)) 0x501fe8;
char* aSmkXzerg_smk = (decltype(aSmkXzerg_smk + 0)) 0x502008;
char* aSmkXterran_smk = (decltype(aSmkXterran_smk + 0)) 0x502018;
char* aSmkXprotoss_sm = (decltype(aSmkXprotoss_sm + 0)) 0x502028;
char* aSmkStarxintr_s = (decltype(aSmkStarxintr_s + 0)) 0x50203c;
char* aSmkProtoss4_sm = (decltype(aSmkProtoss4_sm + 0)) 0x502050;
char* aSmkProtoss3_sm = (decltype(aSmkProtoss3_sm + 0)) 0x502064;
char* aSmkProtoss2_sm = (decltype(aSmkProtoss2_sm + 0)) 0x502078;
char* aSmkProtoss1_sm = (decltype(aSmkProtoss1_sm + 0)) 0x50208c;
char* aSmkPreprotoss_ = (decltype(aSmkPreprotoss_ + 0)) 0x5020a0;
char* aSmkPreprotos_0 = (decltype(aSmkPreprotos_0 + 0)) 0x5020b8;
char* aSmkPreprotos_1 = (decltype(aSmkPreprotos_1 + 0)) 0x5020d0;
char* aSmkZerg4_smk = (decltype(aSmkZerg4_smk + 0)) 0x5020e8;
char* aSmkZerg3_smk = (decltype(aSmkZerg3_smk + 0)) 0x5020f8;
char* aSmkZerg2_smk = (decltype(aSmkZerg2_smk + 0)) 0x502108;
char* aSmkZerg1_smk = (decltype(aSmkZerg1_smk + 0)) 0x502118;
char* aSmkPrezerg_4_s = (decltype(aSmkPrezerg_4_s + 0)) 0x502128;
char* aSmkPrezerg_3_s = (decltype(aSmkPrezerg_3_s + 0)) 0x50213c;
char* aSmkPrezerg_2_s = (decltype(aSmkPrezerg_2_s + 0)) 0x502150;
char* aSmkTerran4_smk = (decltype(aSmkTerran4_smk + 0)) 0x502164;
char* aSmkTerran3_smk = (decltype(aSmkTerran3_smk + 0)) 0x502174;
char* aSmkTerran2_smk = (decltype(aSmkTerran2_smk + 0)) 0x502184;
char* aSmkTerran1_smk = (decltype(aSmkTerran1_smk + 0)) 0x502194;
char* aSmkPreterran_4 = (decltype(aSmkPreterran_4 + 0)) 0x5021a4;
char* aSmkPreterran_3 = (decltype(aSmkPreterran_3 + 0)) 0x5021b8;
char* aSmkPreterran_2 = (decltype(aSmkPreterran_2 + 0)) 0x5021cc;
char* aSmkPreterran_1 = (decltype(aSmkPreterran_1 + 0)) 0x5021e0;
char* aSmkStarintr_sm = (decltype(aSmkStarintr_sm + 0)) 0x5021f4;
char* aSmkBlizzard_sm = (decltype(aSmkBlizzard_sm + 0)) 0x502208;
char* aStarcraftSw_69 = (decltype(aStarcraftSw_69 + 0)) 0x50221c;
CHAR* aBattle_netLeag = (decltype(aBattle_netLeag + 0)) 0x502240;
char* aS_0 = (decltype(aS_0 + 0)) 0x50225c;
char* aLowm = (decltype(aLowm + 0)) 0x502260;
char* aStarcraftSw_20 = (decltype(aStarcraftSw_20 + 0)) 0x502268;
char* aUnknown = (decltype(aUnknown + 0)) 0x50228c;
CHAR* ClassName = (decltype(ClassName + 0)) 0x502298;
char* aScscrnshot_02d = (decltype(aScscrnshot_02d + 0)) 0x5022a4;
char* aCursor = (decltype(aCursor + 0)) 0x5022d0;
char* aScrollul_grp = (decltype(aScrollul_grp + 0)) 0x5022d8;
char* aScrolll_grp = (decltype(aScrolll_grp + 0)) 0x5022e8;
char* aScrolldl_grp = (decltype(aScrolldl_grp + 0)) 0x5022f4;
char* aScrolld_grp = (decltype(aScrolld_grp + 0)) 0x502304;
char* aScrolldr_grp = (decltype(aScrolldr_grp + 0)) 0x502310;
char* aScrollr_grp = (decltype(aScrollr_grp + 0)) 0x502320;
char* aScrollur_grp = (decltype(aScrollur_grp + 0)) 0x50232c;
char* aScrollu_grp = (decltype(aScrollu_grp + 0)) 0x50233c;
char* aTime_grp = (decltype(aTime_grp + 0)) 0x502348;
char* aDrag_grp = (decltype(aDrag_grp + 0)) 0x502354;
char* aMagy_grp = (decltype(aMagy_grp + 0)) 0x502360;
char* aMagr_grp = (decltype(aMagr_grp + 0)) 0x50236c;
char* aMagg_grp = (decltype(aMagg_grp + 0)) 0x502378;
char* aTargn_grp = (decltype(aTargn_grp + 0)) 0x502384;
char* aTargg_grp = (decltype(aTargg_grp + 0)) 0x502390;
char* aTargr_grp = (decltype(aTargr_grp + 0)) 0x50239c;
char* aTargy_grp = (decltype(aTargy_grp + 0)) 0x5023a8;
char* aIllegal_grp = (decltype(aIllegal_grp + 0)) 0x5023b4;
char* aArrow_grp_0 = (decltype(aArrow_grp_0 + 0)) 0x5023c0;
char* aCodeBytes = (decltype(aCodeBytes + 0)) 0x5023cc;
char* aStackBytes = (decltype(aStackBytes + 0)) 0x5023dc;
char* aFlags08x = (decltype(aFlags08x + 0)) 0x5023ec;
char* aDs04xEs04xFs04 = (decltype(aDs04xEs04xFs04 + 0)) 0x5023fc;
char* aSsEsp04x08xEbp = (decltype(aSsEsp04x08xEbp + 0)) 0x502420;
char* aCsEip04x08x = (decltype(aCsEip04x08x + 0)) 0x50243c;
char* aEax08xEbx08xEc = (decltype(aEax08xEbx08xEc + 0)) 0x502450;
char* aRegisters = (decltype(aRegisters + 0)) 0x502490;
char* aFaultAddress08 = (decltype(aFaultAddress08 + 0)) 0x5024a0;
char* aExceptionCode0 = (decltype(aExceptionCode0 + 0)) 0x5024c4;
CHAR* aNtdll_dll = (decltype(aNtdll_dll + 0)) 0x5024e0;
CHAR* aInvalid_handle = (decltype(aInvalid_handle + 0)) 0x5024ec;
CHAR* aGuard_page = (decltype(aGuard_page + 0)) 0x5024fc;
CHAR* aInvalid_dispos = (decltype(aInvalid_dispos + 0)) 0x502508;
CHAR* aStack_overflow = (decltype(aStack_overflow + 0)) 0x50251c;
CHAR* aNoncontinuable = (decltype(aNoncontinuable + 0)) 0x50252c;
CHAR* aIllegal_instru = (decltype(aIllegal_instru + 0)) 0x502548;
CHAR* aIn_page_error = (decltype(aIn_page_error + 0)) 0x50255c;
CHAR* aPriv_instructi = (decltype(aPriv_instructi + 0)) 0x50256c;
CHAR* aInt_overflow = (decltype(aInt_overflow + 0)) 0x502580;
CHAR* aInt_divide_by_ = (decltype(aInt_divide_by_ + 0)) 0x502590;
CHAR* aFlt_underflow = (decltype(aFlt_underflow + 0)) 0x5025a4;
CHAR* aFlt_stack_chec = (decltype(aFlt_stack_chec + 0)) 0x5025b4;
CHAR* aFlt_overflow = (decltype(aFlt_overflow + 0)) 0x5025c4;
CHAR* aFlt_invalid_op = (decltype(aFlt_invalid_op + 0)) 0x5025d4;
CHAR* aFlt_inexact_re = (decltype(aFlt_inexact_re + 0)) 0x5025ec;
CHAR* aFlt_divide_by_ = (decltype(aFlt_divide_by_ + 0)) 0x502600;
CHAR* aFlt_denormal_o = (decltype(aFlt_denormal_o + 0)) 0x502614;
CHAR* aArray_bounds_e = (decltype(aArray_bounds_e + 0)) 0x50262c;
CHAR* aSingle_step = (decltype(aSingle_step + 0)) 0x502644;
CHAR* aBreakpoint = (decltype(aBreakpoint + 0)) 0x502650;
CHAR* aDatatype_misal = (decltype(aDatatype_misal + 0)) 0x50265c;
CHAR* aAccess_violati = (decltype(aAccess_violati + 0)) 0x502674;
char* a08x08x04x08xS = (decltype(a08x08x04x08xS + 0)) 0x502688;
char* aCallStackAddre = (decltype(aCallStackAddre + 0)) 0x5026a4;
char* asc_5026DC = (decltype(asc_5026DC + 0)) 0x5026dc;
char* aC = (decltype(aC + 0)) 0x5026e0;
char* word_5026E4 = (decltype(word_5026E4 + 0)) 0x5026e4;
char* a02x = (decltype(a02x + 0)) 0x5026ec;
char* a0x08x = (decltype(a0x08x + 0)) 0x5026f4;
char* aStarcraftSw_62 = (decltype(aStarcraftSw_62 + 0)) 0x502700;
char* asc_502724 = (decltype(asc_502724 + 0)) 0x502724;
char* asc_502728 = (decltype(asc_502728 + 0)) 0x502728;
char* aScmPath = (decltype(aScmPath + 0)) 0x502730;
char* aScmTitle = (decltype(aScmTitle + 0)) 0x502740;
char* aGameType_0 = (decltype(aGameType_0 + 0)) 0x502750;
char* aCustom = (decltype(aCustom + 0)) 0x502760;
char* asc_502768 = (decltype(asc_502768 + 0)) 0x502768;
char* aPlayers = (decltype(aPlayers + 0)) 0x502778;
char* aFilename = (decltype(aFilename + 0)) 0x502788;
char* aSinglePlayerSa = (decltype(aSinglePlayerSa + 0)) 0x502798;
char* aMultiPlayerSav = (decltype(aMultiPlayerSav + 0)) 0x5027c4;
char* asc_5027F0 = (decltype(asc_5027F0 + 0)) 0x5027f0;
char* asc_5027F4 = (decltype(asc_5027F4 + 0)) 0x5027f4;
char* a_mlx = (decltype(a_mlx + 0)) 0x50282c;
char* a_snx = (decltype(a_snx + 0)) 0x502834;
char* a_mlt = (decltype(a_mlt + 0)) 0x50283c;
char* a_sng = (decltype(a_sng + 0)) 0x502844;
char* aSave = (decltype(aSave + 0)) 0x50284c;
char* aMaps = (decltype(aMaps + 0)) 0x502854;
char* a__0 = (decltype(a__0 + 0)) 0x50285c;
char& byte_502860 = * ((decltype(&byte_502860)) 0x502860);
char* aStarcraftSw_67 = (decltype(aStarcraftSw_67 + 0)) 0x50286c;
char* aRezNetwork_tbl = (decltype(aRezNetwork_tbl + 0)) 0x502890;
char* asc_5028A0 = (decltype(asc_5028A0 + 0)) 0x5028a0;
char* aSS_1 = (decltype(aSS_1 + 0)) 0x5028c0;
char* aLeague_D_cnd = (decltype(aLeague_D_cnd + 0)) 0x5028c8;
char* aArrPortdata_da = (decltype(aArrPortdata_da + 0)) 0x5028d8;
char* aArrTechdata_da = (decltype(aArrTechdata_da + 0)) 0x5028ec;
char* aArrWeapons_dat = (decltype(aArrWeapons_dat + 0)) 0x502900;
char* aArrUpgrades_da = (decltype(aArrUpgrades_da + 0)) 0x502910;
CHAR* Type = (decltype(Type + 0)) 0x502924;
char* aStarcraftSw_66 = (decltype(aStarcraftSw_66 + 0)) 0x50292c;
char* aRezRestart_bin = (decltype(aRezRestart_bin + 0)) 0x50294c;
char* aRezQuit2mnu_bi = (decltype(aRezQuit2mnu_bi + 0)) 0x50295c;
char* aRezQuitrepl_bi = (decltype(aRezQuitrepl_bi + 0)) 0x502970;
char* aRezQuit_bin = (decltype(aRezQuit_bin + 0)) 0x502984;
char* aRezAbrtmenu_bi = (decltype(aRezAbrtmenu_bi + 0)) 0x502994;
char* aRezOptions_bin = (decltype(aRezOptions_bin + 0)) 0x5029a8;
char* aRezHelpmenu_bi = (decltype(aRezHelpmenu_bi + 0)) 0x5029b8;
char* aRezGamemenu_bi = (decltype(aRezGamemenu_bi + 0)) 0x5029cc;
char* aRezObjctdlg_bi = (decltype(aRezObjctdlg_bi + 0)) 0x5029e0;
char* aDlgsTile_grp = (decltype(aDlgsTile_grp + 0)) 0x5029f4;
char* aStarcraftSw_32 = (decltype(aStarcraftSw_32 + 0)) 0x502a04;
char* aMapsDownload = (decltype(aMapsDownload + 0)) 0x502a28;
char* aStarcraftSw_65 = (decltype(aStarcraftSw_65 + 0)) 0x502a38;
char* aRezStat_txt_tb = (decltype(aRezStat_txt_tb + 0)) 0x502a5c;
char* aGameCS = (decltype(aGameCS + 0)) 0x502a70;
char* aConsole_pcx = (decltype(aConsole_pcx + 0)) 0x502a7c;
char* aStarcraftSw_64 = (decltype(aStarcraftSw_64 + 0)) 0x502a88;
char* aRezWait_bin = (decltype(aRezWait_bin + 0)) 0x502aa8;
char* aRezOkcancel_bi = (decltype(aRezOkcancel_bi + 0)) 0x502ab8;
char* aRezOk_bin = (decltype(aRezOk_bin + 0)) 0x502acc;
char* asc_502AD8 = (decltype(asc_502AD8 + 0)) 0x502ad8;
char* aStarcraftSw_63 = (decltype(aStarcraftSw_63 + 0)) 0x502afc;
char* aRezStatlb_bin = (decltype(aRezStatlb_bin + 0)) 0x502b20;
char* aStarcraftSw_61 = (decltype(aStarcraftSw_61 + 0)) 0x502b30;
char* aD = (decltype(aD + 0)) 0x502b50;
char* aStarcraftSw_68 = (decltype(aStarcraftSw_68 + 0)) 0x502b54;
char* aTilesetSS_pcx = (decltype(aTilesetSS_pcx + 0)) 0x502b70;
char* aTilesetSDark_p = (decltype(aTilesetSDark_p + 0)) 0x502b84;
char* aStarcraftSw_60 = (decltype(aStarcraftSw_60 + 0)) 0x502b98;
char* a_vr4 = (decltype(a_vr4 + 0)) 0x502bb8;
char* a_vx4 = (decltype(a_vx4 + 0)) 0x502bc0;
char* a_grp = (decltype(a_grp + 0)) 0x502bc8;
char* a_cv5 = (decltype(a_cv5 + 0)) 0x502bd0;
char* a_vf4 = (decltype(a_vf4 + 0)) 0x502bd8;
char* aSSS_0 = (decltype(aSSS_0 + 0)) 0x502be0;
char* aTileset = (decltype(aTileset + 0)) 0x502be8;
char* a_wpe = (decltype(a_wpe + 0)) 0x502bf4;
char* aStarcraftSw_57 = (decltype(aStarcraftSw_57 + 0)) 0x502bfc;
char* aTwilight = (decltype(aTwilight + 0)) 0x502c1c;
char* aIce = (decltype(aIce + 0)) 0x502c28;
char* aDesert = (decltype(aDesert + 0)) 0x502c2c;
char* aJungle = (decltype(aJungle + 0)) 0x502c34;
char* aAshworld = (decltype(aAshworld + 0)) 0x502c3c;
char* aInstall = (decltype(aInstall + 0)) 0x502c48;
char* aPlatform = (decltype(aPlatform + 0)) 0x502c50;
const char* aBadlands = (decltype(aBadlands + 0)) 0x502c5c;
char* aArrSfxdata_tbl = (decltype(aArrSfxdata_tbl + 0)) 0x502c68;
char* aArrSfxdata_dat = (decltype(aArrSfxdata_dat + 0)) 0x502c78;
char* aSoundMemoryCac = (decltype(aSoundMemoryCac + 0)) 0x502c88;
char* aCreatesoundbuf = (decltype(aCreatesoundbuf + 0)) 0x502c9c;
char* aSetcooperative = (decltype(aSetcooperative + 0)) 0x502cb0;
char* aGetprocaddress = (decltype(aGetprocaddress + 0)) 0x502cc4;
CHAR* aDirectsoundcre = (decltype(aDirectsoundcre + 0)) 0x502cd4;
char* function_name = (decltype(function_name + 0)) 0x502ce8;
CHAR* aDsound_dll = (decltype(aDsound_dll + 0)) 0x502cf4;
char* aSoundS = (decltype(aSoundS + 0)) 0x502d00;
char* aStarcraftSw_56 = (decltype(aStarcraftSw_56 + 0)) 0x502d0c;
char* aSFileSD = (decltype(aSFileSD + 0)) 0x502d28;
char* aStarcraftSw_55 = (decltype(aStarcraftSw_55 + 0)) 0x502d38;
char* aRezGluconn_bin = (decltype(aRezGluconn_bin + 0)) 0x502d5c;
char* aStarcraftSw_53 = (decltype(aStarcraftSw_53 + 0)) 0x502d6c;
char* aRezGlulogin_bi = (decltype(aRezGlulogin_bi + 0)) 0x502d8c;
char* aStarcraftSw_88 = (decltype(aStarcraftSw_88 + 0)) 0x502da0;
char* aGameTfontgam_p = (decltype(aGameTfontgam_p + 0)) 0x502dc4;
char* aRezGluchat_bin = (decltype(aRezGluchat_bin + 0)) 0x502dd8;
char* aDS = (decltype(aDS + 0)) 0x502de8;
char* new_ = (decltype(new_ + 0)) 0x502df0;
char& byte_502DF2 = * ((decltype(&byte_502DF2)) 0x502df2);
char* word_502DF4 = (decltype(word_502DF4 + 0)) 0x502df4;
char* aStarcraftSw_52 = (decltype(aStarcraftSw_52 + 0)) 0x502df8;
char* aRezGlurdyp_bin = (decltype(aRezGlurdyp_bin + 0)) 0x502e18;
char* asc_502E28 = (decltype(asc_502E28 + 0)) 0x502e28;
char* aGlueReadypPf_6 = (decltype(aGlueReadypPf_6 + 0)) 0x502e48;
char* aGlueReadypPf_5 = (decltype(aGlueReadypPf_5 + 0)) 0x502e64;
char* aGlueReadypPf_4 = (decltype(aGlueReadypPf_4 + 0)) 0x502e80;
char* aGlueReadypPf_3 = (decltype(aGlueReadypPf_3 + 0)) 0x502e9c;
char* aGlueReadypPf_2 = (decltype(aGlueReadypPf_2 + 0)) 0x502eb8;
char* aGlueReadypPf_1 = (decltype(aGlueReadypPf_1 + 0)) 0x502ed0;
char* aGlueReadypPf_0 = (decltype(aGlueReadypPf_0 + 0)) 0x502ee8;
char* aGlueReadypPfra = (decltype(aGlueReadypPfra + 0)) 0x502f00;
char* aRezGlujoin_bin = (decltype(aRezGlujoin_bin + 0)) 0x502f18;
char* aStarcraftSw_51 = (decltype(aStarcraftSw_51 + 0)) 0x502f28;
char* aUxU = (decltype(aUxU + 0)) 0x502f48;
char* aSCUU = (decltype(aSCUU + 0)) 0x502f50;
char* aRezGluhist_bin = (decltype(aRezGluhist_bin + 0)) 0x502f5c;
char* aGlueCampaignPh = (decltype(aGlueCampaignPh + 0)) 0x502f6c;
char* aRezGluhist_tbl = (decltype(aRezGluhist_tbl + 0)) 0x502f84;
char* aRezGlupoksplit = (decltype(aRezGlupoksplit + 0)) 0x502f94;
char* aRezGlupedit_bi = (decltype(aRezGlupedit_bi + 0)) 0x502fa8;
int& dword_502FBC = * ((decltype(&dword_502FBC)) 0x502fbc);
int& dword_502FC0 = * ((decltype(&dword_502FC0)) 0x502fc0);
int& dword_502FC4 = * ((decltype(&dword_502FC4)) 0x502fc4);
char& byte_502FC8 = * ((decltype(&byte_502FC8)) 0x502fc8);
char* aRezGlupok_bin = (decltype(aRezGlupok_bin + 0)) 0x502fcc;
int& dword_502FDC = * ((decltype(&dword_502FDC)) 0x502fdc);
int& dword_502FE0 = * ((decltype(&dword_502FE0)) 0x502fe0);
int& dword_502FE4 = * ((decltype(&dword_502FE4)) 0x502fe4);
char& byte_502FE8 = * ((decltype(&byte_502FE8)) 0x502fe8);
char* aRezGlupokcance = (decltype(aRezGlupokcance + 0)) 0x502fec;
int& dword_503004 = * ((decltype(&dword_503004)) 0x503004);
int& dword_503008 = * ((decltype(&dword_503008)) 0x503008);
int& dword_50300C = * ((decltype(&dword_50300C)) 0x50300c);
char& byte_503010 = * ((decltype(&byte_503010)) 0x503010);
char* aRezGlugamemode = (decltype(aRezGlugamemode + 0)) 0x503014;
char* aStarcraftSw_49 = (decltype(aStarcraftSw_49 + 0)) 0x503028;
int& dword_50304C = * ((decltype(&dword_50304C)) 0x50304c);
int& dword_503050 = * ((decltype(&dword_503050)) 0x503050);
int& dword_503054 = * ((decltype(&dword_503054)) 0x503054);
__int16& word_503058 = * ((decltype(&word_503058)) 0x503058);
char& byte_50305A = * ((decltype(&byte_50305A)) 0x50305a);
char* aRezGluload_bin = (decltype(aRezGluload_bin + 0)) 0x50305c;
char* aRezGlurdyt_bin = (decltype(aRezGlurdyt_bin + 0)) 0x50306c;
char* asc_50307C = (decltype(asc_50307C + 0)) 0x50307c;
char* aGlueReadytTf_6 = (decltype(aGlueReadytTf_6 + 0)) 0x50309c;
char* aGlueReadytTf_5 = (decltype(aGlueReadytTf_5 + 0)) 0x5030b8;
char* aGlueReadytTf_4 = (decltype(aGlueReadytTf_4 + 0)) 0x5030d4;
char* aGlueReadytTf_3 = (decltype(aGlueReadytTf_3 + 0)) 0x5030f0;
char* aGlueReadytTf_2 = (decltype(aGlueReadytTf_2 + 0)) 0x50310c;
char* aGlueReadytTf_1 = (decltype(aGlueReadytTf_1 + 0)) 0x503124;
char* aGlueReadytTf_0 = (decltype(aGlueReadytTf_0 + 0)) 0x50313c;
char* aGlueReadytTfra = (decltype(aGlueReadytTfra + 0)) 0x503154;
char* aRezGlurdyz_bin = (decltype(aRezGlurdyz_bin + 0)) 0x50316c;
char* asc_50317C = (decltype(asc_50317C + 0)) 0x50317c;
char* aGlueReadyzZf_6 = (decltype(aGlueReadyzZf_6 + 0)) 0x50319c;
char* aGlueReadyzZf_5 = (decltype(aGlueReadyzZf_5 + 0)) 0x5031b8;
char* aGlueReadyzZf_4 = (decltype(aGlueReadyzZf_4 + 0)) 0x5031d4;
char* aGlueReadyzZf_3 = (decltype(aGlueReadyzZf_3 + 0)) 0x5031f0;
char* aGlueReadyzZf_2 = (decltype(aGlueReadyzZf_2 + 0)) 0x50320c;
char* aGlueReadyzZf_1 = (decltype(aGlueReadyzZf_1 + 0)) 0x503224;
char* aGlueReadyzZf_0 = (decltype(aGlueReadyzZf_0 + 0)) 0x50323c;
char* aGlueReadyzZfra = (decltype(aGlueReadyzZfra + 0)) 0x503254;
CHAR* Name = (decltype(Name + 0)) 0x50326c;
int& dword_503278 = * ((decltype(&dword_503278)) 0x503278);
int& dword_50327C = * ((decltype(&dword_50327C)) 0x50327c);
__int16& word_503280 = * ((decltype(&word_503280)) 0x503280);
char& byte_503282 = * ((decltype(&byte_503282)) 0x503282);
CHAR* aGlueokcancel_b = (decltype(aGlueokcancel_b + 0)) 0x503284;
int& dword_503298 = * ((decltype(&dword_503298)) 0x503298);
int& dword_50329C = * ((decltype(&dword_50329C)) 0x50329c);
int& dword_5032A0 = * ((decltype(&dword_5032A0)) 0x5032a0);
int& dword_5032A4 = * ((decltype(&dword_5032A4)) 0x5032a4);
char& byte_5032A8 = * ((decltype(&byte_5032A8)) 0x5032a8);
char* aStarcraftSw_48 = (decltype(aStarcraftSw_48 + 0)) 0x5032ac;
char* aRezGluexpcmp_0 = (decltype(aRezGluexpcmp_0 + 0)) 0x5032d0;
char* aRezGluscore_bi = (decltype(aRezGluscore_bi + 0)) 0x5032e4;
int& dword_5032F8 = * ((decltype(&dword_5032F8)) 0x5032f8);
int& dword_5032FC = * ((decltype(&dword_5032FC)) 0x5032fc);
int& dword_503300 = * ((decltype(&dword_503300)) 0x503300);
char& byte_503304 = * ((decltype(&byte_503304)) 0x503304);
int& dword_503308 = * ((decltype(&dword_503308)) 0x503308);
int& dword_50330C = * ((decltype(&dword_50330C)) 0x50330c);
__int16& word_503310 = * ((decltype(&word_503310)) 0x503310);
char& byte_503312 = * ((decltype(&byte_503312)) 0x503312);
char* aMapSMap = (decltype(aMapSMap + 0)) 0x503314;
char* asc_503324 = (decltype(asc_503324 + 0)) 0x503324;
char* aResourcesScore = (decltype(aResourcesScore + 0)) 0x503328;
char* aStructuresScor = (decltype(aStructuresScor + 0)) 0x503368;
char* aUnitsScoreUPro = (decltype(aUnitsScoreUPro + 0)) 0x5033a8;
char* aScoreOverallUU = (decltype(aScoreOverallUU + 0)) 0x5033e8;
char* aLeagueidDLeagu = (decltype(aLeagueidDLeagu + 0)) 0x503430;
char* aUS_0 = (decltype(aUS_0 + 0)) 0x503484;
char* aUS = (decltype(aUS + 0)) 0x50348c;
int& dword_503494 = * ((decltype(&dword_503494)) 0x503494);
int& dword_503498 = * ((decltype(&dword_503498)) 0x503498);
__int16& word_50349C = * ((decltype(&word_50349C)) 0x50349c);
char* a02d02d = (decltype(a02d02d + 0)) 0x5034a0;
char* aD02d02d = (decltype(aD02d02d + 0)) 0x5034ac;
char* aU = (decltype(aU + 0)) 0x5034bc;
int& dword_5034C0 = * ((decltype(&dword_5034C0)) 0x5034c0);
int& dword_5034C4 = * ((decltype(&dword_5034C4)) 0x5034c4);
__int16& word_5034C8 = * ((decltype(&word_5034C8)) 0x5034c8);
int& dword_5034CC = * ((decltype(&dword_5034CC)) 0x5034cc);
int& dword_5034D0 = * ((decltype(&dword_5034D0)) 0x5034d0);
__int16& word_5034D4 = * ((decltype(&word_5034D4)) 0x5034d4);
char& byte_5034D6 = * ((decltype(&byte_5034D6)) 0x5034d6);
char* aStarcraftSw_47 = (decltype(aStarcraftSw_47 + 0)) 0x5034d8;
int& dword_5034FC = * ((decltype(&dword_5034FC)) 0x5034fc);
int& dword_503500 = * ((decltype(&dword_503500)) 0x503500);
int& dword_503504 = * ((decltype(&dword_503504)) 0x503504);
char& byte_503508 = * ((decltype(&byte_503508)) 0x503508);
char* aGlueScorepv = (decltype(aGlueScorepv + 0)) 0x50350c;
char* aGlueScorepd = (decltype(aGlueScorepd + 0)) 0x50351c;
char* aGlueScoretv = (decltype(aGlueScoretv + 0)) 0x50352c;
char* aGlueScoretd = (decltype(aGlueScoretd + 0)) 0x50353c;
char* aGlueScorezv = (decltype(aGlueScorezv + 0)) 0x50354c;
char* aGlueScorezd = (decltype(aGlueScorezd + 0)) 0x50355c;
char* aRezGlucmpgn__0 = (decltype(aRezGlucmpgn__0 + 0)) 0x50356c;
char *& off_503580 = * ((decltype(&off_503580)) 0x503580);
char* aXprotoss = (decltype(aXprotoss + 0)) 0x5035e0;
char* aXzerg = (decltype(aXzerg + 0)) 0x5035ec;
char* aXterran = (decltype(aXterran + 0)) 0x5035f4;
char* aProtoss = (decltype(aProtoss + 0)) 0x5035fc;
char* aZerg = (decltype(aZerg + 0)) 0x503604;
char* aTerran = (decltype(aTerran + 0)) 0x50360c;
char* aSS_4 = (decltype(aSS_4 + 0)) 0x503614;
char* aRezGlumodem_bi = (decltype(aRezGlumodem_bi + 0)) 0x50361c;
char* aRezGluatzoneli = (decltype(aRezGluatzoneli + 0)) 0x503630;
char* aRezGlumodemlis = (decltype(aRezGlumodemlis + 0)) 0x503648;
char* aPselect_pcx = (decltype(aPselect_pcx + 0)) 0x503660;
char* aRezGlumodemsta = (decltype(aRezGlumodemsta + 0)) 0x50366c;
char* aPstatus_pcx = (decltype(aPstatus_pcx + 0)) 0x503684;
char* asc_503690 = (decltype(asc_503690 + 0)) 0x503690;
char* aSoftwareBlizza = (decltype(aSoftwareBlizza + 0)) 0x503694;
char* aSCS = (decltype(aSCS + 0)) 0x5036b8;
char* aRezGlumodement = (decltype(aRezGlumodement + 0)) 0x5036c0;
char* aStarcraftSw_46 = (decltype(aStarcraftSw_46 + 0)) 0x5036d8;
char* aPentry_pcx = (decltype(aPentry_pcx + 0)) 0x5036fc;
char* aGlueCreateIcre = (decltype(aGlueCreateIcre + 0)) 0x503708;
char* aStarcraftSw_80 = (decltype(aStarcraftSw_80 + 0)) 0x503720;
char* aRezGlucreat_bi = (decltype(aRezGlucreat_bi + 0)) 0x503744;
char* aRezGlucustm_bi = (decltype(aRezGlucustm_bi + 0)) 0x503758;
char* aCustomType = (decltype(aCustomType + 0)) 0x50376c;
char* aGameType = (decltype(aGameType + 0)) 0x503778;
char* valuename = (decltype(valuename + 0)) 0x503784;
char* aGameSpeed = (decltype(aGameSpeed + 0)) 0x503794;
int& dword_5037A0 = * ((decltype(&dword_5037A0)) 0x5037a0);
int& dword_5037A4 = * ((decltype(&dword_5037A4)) 0x5037a4);
__int16& word_5037A8 = * ((decltype(&word_5037A8)) 0x5037a8);
char* byte_5037AC = (decltype(byte_5037AC + 0)) 0x5037ac;
char* aApsReplays = (decltype(aApsReplays + 0)) 0x5037ad;
int& dword_5037BC = * ((decltype(&dword_5037BC)) 0x5037bc);
char& byte_5037C0 = * ((decltype(&byte_5037C0)) 0x5037c0);
CHAR* aAbcdefghijklmn = (decltype(aAbcdefghijklmn + 0)) 0x5037c4;
char* aRezGlubnres_re = (decltype(aRezGlubnres_re + 0)) 0x5037fc;
char* aStarcraftSw_13 = (decltype(aStarcraftSw_13 + 0)) 0x503810;
CHAR* CursorName = (decltype(CursorName + 0)) 0x503830;
char* aGenericIcon_19 = (decltype(aGenericIcon_19 + 0)) 0x50383c;
char* aGenericIcon_18 = (decltype(aGenericIcon_18 + 0)) 0x50385c;
char* aGenericIcon_17 = (decltype(aGenericIcon_17 + 0)) 0x50387c;
char* aGenericIcon_16 = (decltype(aGenericIcon_16 + 0)) 0x503898;
char* aGenericIcon_15 = (decltype(aGenericIcon_15 + 0)) 0x5038b4;
char* aGenericIcon_14 = (decltype(aGenericIcon_14 + 0)) 0x5038d0;
char* aGenericIcon_13 = (decltype(aGenericIcon_13 + 0)) 0x5038ec;
char* aGenericIconsSl = (decltype(aGenericIconsSl + 0)) 0x503908;
char* aGenericIcon_11 = (decltype(aGenericIcon_11 + 0)) 0x503924;
char* aGenericIcon_10 = (decltype(aGenericIcon_10 + 0)) 0x50393c;
char* aGenericIcons_9 = (decltype(aGenericIcons_9 + 0)) 0x503954;
char* aGenericIcons_8 = (decltype(aGenericIcons_8 + 0)) 0x50396c;
char* aGenericIcons_7 = (decltype(aGenericIcons_7 + 0)) 0x503984;
char* aGenericIcons_6 = (decltype(aGenericIcons_6 + 0)) 0x50399c;
char* aGenericIcons_5 = (decltype(aGenericIcons_5 + 0)) 0x5039b4;
char* aGenericIcons_4 = (decltype(aGenericIcons_4 + 0)) 0x5039cc;
char* aGenericIconsCm = (decltype(aGenericIconsCm + 0)) 0x5039e4;
int& dword_5039FC = * ((decltype(&dword_5039FC)) 0x5039fc);
int& dword_503A00 = * ((decltype(&dword_503A00)) 0x503a00);
int& dword_503A04 = * ((decltype(&dword_503A04)) 0x503a04);
__int16& word_503A08 = * ((decltype(&word_503A08)) 0x503a08);
int& dword_503A0C = * ((decltype(&dword_503A0C)) 0x503a0c);
int& dword_503A10 = * ((decltype(&dword_503A10)) 0x503a10);
int& dword_503A14 = * ((decltype(&dword_503A14)) 0x503a14);
int& dword_503A18 = * ((decltype(&dword_503A18)) 0x503a18);
int& dword_503A1C = * ((decltype(&dword_503A1C)) 0x503a1c);
int& dword_503A20 = * ((decltype(&dword_503A20)) 0x503a20);
int& dword_503A24 = * ((decltype(&dword_503A24)) 0x503a24);
int& dword_503A28 = * ((decltype(&dword_503A28)) 0x503a28);
char& byte_503A2C = * ((decltype(&byte_503A2C)) 0x503a2c);
char* aGenericPopupsS = (decltype(aGenericPopupsS + 0)) 0x503a30;
char* aGenericIcons_3 = (decltype(aGenericIcons_3 + 0)) 0x503a4c;
char* aGenericIconsPr = (decltype(aGenericIconsPr + 0)) 0x503a68;
char* aGenericPopupsL = (decltype(aGenericPopupsL + 0)) 0x503a84;
char* aBackgroundsReg = (decltype(aBackgroundsReg + 0)) 0x503aa0;
int& dword_503AC0 = * ((decltype(&dword_503AC0)) 0x503ac0);
int& dword_503AC4 = * ((decltype(&dword_503AC4)) 0x503ac4);
int& dword_503AC8 = * ((decltype(&dword_503AC8)) 0x503ac8);
int& dword_503ACC = * ((decltype(&dword_503ACC)) 0x503acc);
int& dword_503AD0 = * ((decltype(&dword_503AD0)) 0x503ad0);
char* aGenericPopup_0 = (decltype(aGenericPopup_0 + 0)) 0x503ad4;
int& dword_503AF0 = * ((decltype(&dword_503AF0)) 0x503af0);
int& dword_503AF4 = * ((decltype(&dword_503AF4)) 0x503af4);
int& dword_503AF8 = * ((decltype(&dword_503AF8)) 0x503af8);
int& dword_503AFC = * ((decltype(&dword_503AFC)) 0x503afc);
__int16& word_503B00 = * ((decltype(&word_503B00)) 0x503b00);
char& byte_503B02 = * ((decltype(&byte_503B02)) 0x503b02);
char* aIconsDisconnec = (decltype(aIconsDisconnec + 0)) 0x503b04;
char* aGenericIcons_2 = (decltype(aGenericIcons_2 + 0)) 0x503b1c;
char* aGenericIcons_1 = (decltype(aGenericIcons_1 + 0)) 0x503b38;
char* aGenericIcons_0 = (decltype(aGenericIcons_0 + 0)) 0x503b54;
char* aGenericIconsBu = (decltype(aGenericIconsBu + 0)) 0x503b70;
char* aGenericIcon_12 = (decltype(aGenericIcon_12 + 0)) 0x503b8c;
int& dword_503BAC = * ((decltype(&dword_503BAC)) 0x503bac);
int& dword_503BB0 = * ((decltype(&dword_503BB0)) 0x503bb0);
int& dword_503BB4 = * ((decltype(&dword_503BB4)) 0x503bb4);
int& dword_503BB8 = * ((decltype(&dword_503BB8)) 0x503bb8);
__int16& word_503BBC = * ((decltype(&word_503BBC)) 0x503bbc);
char& byte_503BBE = * ((decltype(&byte_503BBE)) 0x503bbe);
int& dword_503BC0 = * ((decltype(&dword_503BC0)) 0x503bc0);
int& dword_503BC4 = * ((decltype(&dword_503BC4)) 0x503bc4);
int& dword_503BC8 = * ((decltype(&dword_503BC8)) 0x503bc8);
int& dword_503BCC = * ((decltype(&dword_503BCC)) 0x503bcc);
__int16& word_503BD0 = * ((decltype(&word_503BD0)) 0x503bd0);
char& byte_503BD2 = * ((decltype(&byte_503BD2)) 0x503bd2);
int& dword_503BD4 = * ((decltype(&dword_503BD4)) 0x503bd4);
int& dword_503BD8 = * ((decltype(&dword_503BD8)) 0x503bd8);
int& dword_503BDC = * ((decltype(&dword_503BDC)) 0x503bdc);
int& dword_503BE0 = * ((decltype(&dword_503BE0)) 0x503be0);
char& byte_503BE4 = * ((decltype(&byte_503BE4)) 0x503be4);
char* aBackgroundsBnl = (decltype(aBackgroundsBnl + 0)) 0x503be8;
char* aBackgroundsBns = (decltype(aBackgroundsBns + 0)) 0x503c04;
int& dword_503C20 = * ((decltype(&dword_503C20)) 0x503c20);
int& dword_503C24 = * ((decltype(&dword_503C24)) 0x503c24);
int& dword_503C28 = * ((decltype(&dword_503C28)) 0x503c28);
int& dword_503C2C = * ((decltype(&dword_503C2C)) 0x503c2c);
__int16& word_503C30 = * ((decltype(&word_503C30)) 0x503c30);
char& byte_503C32 = * ((decltype(&byte_503C32)) 0x503c32);
char* aBackgroundsCha = (decltype(aBackgroundsCha + 0)) 0x503c34;
char* aBackgroundsBnc = (decltype(aBackgroundsBnc + 0)) 0x503c50;
char* aBackgroundsC_0 = (decltype(aBackgroundsC_0 + 0)) 0x503c6c;
char* aBackgroundsNew = (decltype(aBackgroundsNew + 0)) 0x503c8c;
int& dword_503CA8 = * ((decltype(&dword_503CA8)) 0x503ca8);
int& dword_503CAC = * ((decltype(&dword_503CAC)) 0x503cac);
int& dword_503CB0 = * ((decltype(&dword_503CB0)) 0x503cb0);
int& dword_503CB4 = * ((decltype(&dword_503CB4)) 0x503cb4);
int& dword_503CB8 = * ((decltype(&dword_503CB8)) 0x503cb8);
int& dword_503CBC = * ((decltype(&dword_503CBC)) 0x503cbc);
char* aGenericPopupsH = (decltype(aGenericPopupsH + 0)) 0x503cc0;
char* aBackgroundsBnj = (decltype(aBackgroundsBnj + 0)) 0x503cdc;
char* aBackgroundsBn_ = (decltype(aBackgroundsBn_ + 0)) 0x503cf8;
char* aTriggersCtf_tr = (decltype(aTriggersCtf_tr + 0)) 0x503d10;
char* aTriggersSlau_2 = (decltype(aTriggersSlau_2 + 0)) 0x503d24;
char* aTriggersSlau_1 = (decltype(aTriggersSlau_1 + 0)) 0x503d40;
char* aTriggersSlau_0 = (decltype(aTriggersSlau_0 + 0)) 0x503d5c;
char* aTriggersSlaugh = (decltype(aTriggersSlaugh + 0)) 0x503d78;
char* aTriggersGreed1 = (decltype(aTriggersGreed1 + 0)) 0x503d94;
char* aTriggersGreed7 = (decltype(aTriggersGreed7 + 0)) 0x503dac;
char* aTriggersGreed5 = (decltype(aTriggersGreed5 + 0)) 0x503dc4;
char* aTriggersGreed2 = (decltype(aTriggersGreed2 + 0)) 0x503ddc;
char* aTriggersSudden = (decltype(aTriggersSudden + 0)) 0x503df4;
char* aTriggersMelee_ = (decltype(aTriggersMelee_ + 0)) 0x503e10;
char* template_name = (decltype(template_name + 0)) 0x503e24;
char* aUnableToReadGa = (decltype(aUnableToReadGa + 0)) 0x503e38;
char* aSS_0 = (decltype(aSS_0 + 0)) 0x503e58;
char* aTemplates_lst = (decltype(aTemplates_lst + 0)) 0x503e60;
char* aStarcraftSw_45 = (decltype(aStarcraftSw_45 + 0)) 0x503e70;
char* aTemplates = (decltype(aTemplates + 0)) 0x503e94;
char* a_got = (decltype(a_got + 0)) 0x503ea0;
char* aCharacters = (decltype(aCharacters + 0)) 0x503ea8;
char* aStarcraftSw_17 = (decltype(aStarcraftSw_17 + 0)) 0x503eb4;
char* aRecentMaps = (decltype(aRecentMaps + 0)) 0x503ed4;
char* asc_503EE0 = (decltype(asc_503EE0 + 0)) 0x503ee0;
char* asc_503EE4 = (decltype(asc_503EE4 + 0)) 0x503ee4;
char* asc_503EE8 = (decltype(asc_503EE8 + 0)) 0x503ee8;
char* a__ = (decltype(a__ + 0)) 0x503eec;
char* aScx = (decltype(aScx + 0)) 0x503ef0;
char* off_503EF4 = (decltype(off_503EF4 + 0)) 0x503ef4;
char* aMusicRadiofree = (decltype(aMusicRadiofree + 0)) 0x503ef8;
char* aMusicTitle_wav = (decltype(aMusicTitle_wav + 0)) 0x503f10;
char* aMusicPvict_wav = (decltype(aMusicPvict_wav + 0)) 0x503f20;
char* aMusicTvict_wav = (decltype(aMusicTvict_wav + 0)) 0x503f30;
char* aMusicZvict_wav = (decltype(aMusicZvict_wav + 0)) 0x503f40;
char* aMusicPdefeat_w = (decltype(aMusicPdefeat_w + 0)) 0x503f50;
char* aMusicTdefeat_w = (decltype(aMusicTdefeat_w + 0)) 0x503f64;
char* aMusicZdefeat_w = (decltype(aMusicZdefeat_w + 0)) 0x503f78;
char* aMusicPrdyroom_ = (decltype(aMusicPrdyroom_ + 0)) 0x503f8c;
char* aMusicTrdyroom_ = (decltype(aMusicTrdyroom_ + 0)) 0x503fa0;
char* aMusicZrdyroom_ = (decltype(aMusicZrdyroom_ + 0)) 0x503fb4;
char* aMusicProtoss3_ = (decltype(aMusicProtoss3_ + 0)) 0x503fc8;
char* aMusicProtoss2_ = (decltype(aMusicProtoss2_ + 0)) 0x503fdc;
char* aMusicProtoss1_ = (decltype(aMusicProtoss1_ + 0)) 0x503ff0;
char* aMusicTerran3_w = (decltype(aMusicTerran3_w + 0)) 0x504004;
char* aMusicTerran2_w = (decltype(aMusicTerran2_w + 0)) 0x504018;
char* aMusicTerran1_w = (decltype(aMusicTerran1_w + 0)) 0x50402c;
char* aMusicZerg3_wav = (decltype(aMusicZerg3_wav + 0)) 0x504040;
char* aMusicZerg2_wav = (decltype(aMusicZerg2_wav + 0)) 0x504050;
char* aMusicZerg1_wav = (decltype(aMusicZerg1_wav + 0)) 0x504060;
char* aRezMinimap_bin = (decltype(aRezMinimap_bin + 0)) 0x504070;
char* aGameTblink_pcx = (decltype(aGameTblink_pcx + 0)) 0x504080;
char* aGameBlink_grp = (decltype(aGameBlink_grp + 0)) 0x504090;
char* aRezMinimapprev = (decltype(aRezMinimapprev + 0)) 0x5040a0;
char* aStarcraftSw_44 = (decltype(aStarcraftSw_44 + 0)) 0x5040b8;
char* aRezTimeout_bin = (decltype(aRezTimeout_bin + 0)) 0x5040d8;
char* aD02d = (decltype(aD02d + 0)) 0x5040e8;
char* aStarcraftSw_43 = (decltype(aStarcraftSw_43 + 0)) 0x5040f0;
char* aArrUnits_dat = (decltype(aArrUnits_dat + 0)) 0x504114;
char* aArrOrders_dat = (decltype(aArrOrders_dat + 0)) 0x504124;
char* aGameTminimap_p = (decltype(aGameTminimap_p + 0)) 0x504134;
char* aGameTunit_pcx = (decltype(aGameTunit_pcx + 0)) 0x504148;
char* aSSSS_S_S = (decltype(aSSSS_S_S + 0)) 0x504158;
char* aProfile_pcx = (decltype(aProfile_pcx + 0)) 0x50416c;
char* aStarcraftSw_42 = (decltype(aStarcraftSw_42 + 0)) 0x504178;
char* aSSS_mpq = (decltype(aSSS_mpq + 0)) 0x504198;
char* aLeagues = (decltype(aLeagues + 0)) 0x5041a4;
char* aGameresultSGam = (decltype(aGameresultSGam + 0)) 0x5041b0;
char* aS = (decltype(aS + 0)) 0x5041f4;
char* aNonplayer = (decltype(aNonplayer + 0)) 0x5041f8;
void *& off_504204 = * ((decltype(&off_504204)) 0x504204);
char* string = (decltype(string + 0)) 0x504208;
char* aStarcraftSw_41 = (decltype(aStarcraftSw_41 + 0)) 0x504224;
char* aArrSprites_dat = (decltype(aArrSprites_dat + 0)) 0x504244;
char* aStarcraftSw_40 = (decltype(aStarcraftSw_40 + 0)) 0x504254;
char* aArrFlingy_dat = (decltype(aArrFlingy_dat + 0)) 0x504274;
char* aStarcraftSw_39 = (decltype(aStarcraftSw_39 + 0)) 0x504284;
char* aRezMsgfltr_bin = (decltype(aRezMsgfltr_bin + 0)) 0x5042ac;
char* aRezAllyfltr_bi = (decltype(aRezAllyfltr_bi + 0)) 0x5042bc;
char* aRezTeamfltr_bi = (decltype(aRezTeamfltr_bi + 0)) 0x5042d0;
char* aStarcraftSw_38 = (decltype(aStarcraftSw_38 + 0)) 0x5042e4;
char* aSCS_0 = (decltype(aSCS_0 + 0)) 0x504308;
char* aSSCS = (decltype(aSSCS + 0)) 0x504314;
char* aSS_3 = (decltype(aSS_3 + 0)) 0x504324;
char* aStarcraftSw_37 = (decltype(aStarcraftSw_37 + 0)) 0x50432c;
char* aCbulletDamage = (decltype(aCbulletDamage + 0)) 0x50434c;
char* aStarcraftSw_36 = (decltype(aStarcraftSw_36 + 0)) 0x50435c;
char* aStarcraftSw_35 = (decltype(aStarcraftSw_35 + 0)) 0x50437c;
int (__stdcall ** off_50439C)(int) = (decltype(off_50439C + 0)) 0x50439c;
char* aStarcraftSw_34 = (decltype(aStarcraftSw_34 + 0)) 0x5043a8;
char* aStarcraftSw_98 = (decltype(aStarcraftSw_98 + 0)) 0x5043c8;
char* aStarcraftSw_33 = (decltype(aStarcraftSw_33 + 0)) 0x5043ec;
char* aTheMapCouldNot = (decltype(aTheMapCouldNot + 0)) 0x504410;
char* aStarcraftSw_29 = (decltype(aStarcraftSw_29 + 0)) 0x5044b8;
char* aRezSpd_dlg_bin = (decltype(aRezSpd_dlg_bin + 0)) 0x5044e0;
char* aStarcraftSw_82 = (decltype(aStarcraftSw_82 + 0)) 0x5044f0;
char* aRezVideo_bin = (decltype(aRezVideo_bin + 0)) 0x504514;
int (__stdcall ** off_504524)(int, int, int, int) = (decltype(off_504524 + 0)) 0x504524;
int (__stdcall ** off_504528)(int, int, int, int) = (decltype(off_504528 + 0)) 0x504528;
char* aStarcraftSw_59 = (decltype(aStarcraftSw_59 + 0)) 0x504534;
char* aWSS = (decltype(aWSS + 0)) 0x504554;
char* aR = (decltype(aR + 0)) 0x504560;
char* aReply = (decltype(aReply + 0)) 0x504564;
char* aM = (decltype(aM + 0)) 0x50456c;
char* aW = (decltype(aW + 0)) 0x504570;
char* aMsg = (decltype(aMsg + 0)) 0x504574;
char* aWhisper = (decltype(aWhisper + 0)) 0x50457c;
char* aUnignore = (decltype(aUnignore + 0)) 0x504588;
char* aUnsquelch = (decltype(aUnsquelch + 0)) 0x504594;
char* aIgnore = (decltype(aIgnore + 0)) 0x5045a0;
char* aSquelch = (decltype(aSquelch + 0)) 0x5045a8;
char* aStats = (decltype(aStats + 0)) 0x5045b4;
char* aLeague = (decltype(aLeague + 0)) 0x5045bc;
char* aParallaxStar_s = (decltype(aParallaxStar_s + 0)) 0x5045c4;
char* aStarcraftSw_89 = (decltype(aStarcraftSw_89 + 0)) 0x5045d8;
char* aRezTips_dlg_bi = (decltype(aRezTips_dlg_bi + 0)) 0x5045f8;
char* aRezTips_tbl = (decltype(aRezTips_tbl + 0)) 0x50460c;
char* asc_50461C = (decltype(asc_50461C + 0)) 0x50461c;
char* aStarcraftSw_31 = (decltype(aStarcraftSw_31 + 0)) 0x50463c;
char* aUnitS = (decltype(aUnitS + 0)) 0x50465c;
char* aGameThpbar_pcx = (decltype(aGameThpbar_pcx + 0)) 0x504664;
char* asc_504674 = (decltype(asc_504674 + 0)) 0x504674;
char* asc_504678 = (decltype(asc_504678 + 0)) 0x504678;
char* aStarcraftSw_22 = (decltype(aStarcraftSw_22 + 0)) 0x50467c;
char* aStarcraftSw_87 = (decltype(aStarcraftSw_87 + 0)) 0x5046a4;
char* aAstatS = (decltype(aAstatS + 0)) 0x5046c0;
char* aStarcraftSw_30 = (decltype(aStarcraftSw_30 + 0)) 0x5046cc;
char* aLpt9 = (decltype(aLpt9 + 0)) 0x5046f4;
char* aLpt8 = (decltype(aLpt8 + 0)) 0x5046fc;
char* aLpt7 = (decltype(aLpt7 + 0)) 0x504704;
char* aLpt6 = (decltype(aLpt6 + 0)) 0x50470c;
char* aLpt5 = (decltype(aLpt5 + 0)) 0x504714;
char* aLpt4 = (decltype(aLpt4 + 0)) 0x50471c;
char* aLpt3 = (decltype(aLpt3 + 0)) 0x504724;
char* aLpt2 = (decltype(aLpt2 + 0)) 0x50472c;
char* aLpt1 = (decltype(aLpt1 + 0)) 0x504734;
char* aCom9 = (decltype(aCom9 + 0)) 0x50473c;
char* aCom8 = (decltype(aCom8 + 0)) 0x504744;
char* aCom7 = (decltype(aCom7 + 0)) 0x50474c;
char* aCom6 = (decltype(aCom6 + 0)) 0x504754;
char* aCom5 = (decltype(aCom5 + 0)) 0x50475c;
char* aCom4 = (decltype(aCom4 + 0)) 0x504764;
char* aCom3 = (decltype(aCom3 + 0)) 0x50476c;
char* aCom2 = (decltype(aCom2 + 0)) 0x504774;
char* aCom1 = (decltype(aCom1 + 0)) 0x50477c;
char* aClock = (decltype(aClock + 0)) 0x504784;
char* aConout = (decltype(aConout + 0)) 0x50478c;
char* aConin = (decltype(aConin + 0)) 0x504794;
char* aAux = (decltype(aAux + 0)) 0x50479c;
char* aPrn = (decltype(aPrn + 0)) 0x5047a0;
char* aCon = (decltype(aCon + 0)) 0x5047a4;
void *& off_5047A8 = * ((decltype(&off_5047A8)) 0x5047a8);
char* aStarcraftSw_86 = (decltype(aStarcraftSw_86 + 0)) 0x5047ac;
char* asc_5047D0 = (decltype(asc_5047D0 + 0)) 0x5047d0;
char* aChklarvastray1 = (decltype(aChklarvastray1 + 0)) 0x5047f0;
char* aChklarvastray2 = (decltype(aChklarvastray2 + 0)) 0x504804;
char* aRezLoadgame_bi = (decltype(aRezLoadgame_bi + 0)) 0x504818;
char* aRezNetdlg_bin = (decltype(aRezNetdlg_bin + 0)) 0x50482c;
char* aRezHelp_bin = (decltype(aRezHelp_bin + 0)) 0x50483c;
char* aRezHelp_txt_tb = (decltype(aRezHelp_txt_tb + 0)) 0x50484c;
char* asc_504860 = (decltype(asc_504860 + 0)) 0x504860;
char* aRezLmission_bi = (decltype(aRezLmission_bi + 0)) 0x504880;
char* aRezWmission_bi = (decltype(aRezWmission_bi + 0)) 0x504894;
char* aRezSnd_dlg_bin = (decltype(aRezSnd_dlg_bin + 0)) 0x5048a8;
char* aRezStatport_bi = (decltype(aRezStatport_bi + 0)) 0x5048b8;
char* a1 = (decltype(a1 + 0)) 0x5048cc;
char* aGame = (decltype(aGame + 0)) 0x5048e0;
char* aConover_pcx = (decltype(aConover_pcx + 0)) 0x5048e8;
char* aStarcraftSw_28 = (decltype(aStarcraftSw_28 + 0)) 0x5048f4;
FnInteract& off_504918 = * ((decltype(&off_504918)) 0x504918);
char* aSSD_smk = (decltype(aSSD_smk + 0)) 0x50491c;
char* aPortrait = (decltype(aPortrait + 0)) 0x504928;
char* szFileName = (decltype(szFileName + 0)) 0x504934;
char* aScriptsAiscrip = (decltype(aScriptsAiscrip + 0)) 0x50494c;
char* aStarcraftSw_94 = (decltype(aStarcraftSw_94 + 0)) 0x504964;
char* aIllegalAiScrip = (decltype(aIllegalAiScrip + 0)) 0x504988;
char* aStarcraftSw_27 = (decltype(aStarcraftSw_27 + 0)) 0x5049a4;
char* aStarcraftSw_95 = (decltype(aStarcraftSw_95 + 0)) 0x5049c4;
char* aRezCtextbox_bi = (decltype(aRezCtextbox_bi + 0)) 0x5049e4;
char* aRezStatbtnC_bi = (decltype(aRezStatbtnC_bi + 0)) 0x5049f8;
char* aUnitCmdbtnsTic = (decltype(aUnitCmdbtnsTic + 0)) 0x504a0c;
char* aUnitCmdbtnsCmd = (decltype(aUnitCmdbtnsCmd + 0)) 0x504a24;
char* aSCcmdbtns_grp = (decltype(aSCcmdbtns_grp + 0)) 0x504a40;
char* aUnitCmdbtns = (decltype(aUnitCmdbtns + 0)) 0x504a50;
char* aPbrfull_pcx = (decltype(aPbrfull_pcx + 0)) 0x504a60;
char* aStarcraftSw_26 = (decltype(aStarcraftSw_26 + 0)) 0x504a6c;
char* aPbrempt_pcx = (decltype(aPbrempt_pcx + 0)) 0x504a8c;
char* aSSD = (decltype(aSSD + 0)) 0x504a98;
char* aRezStatdata_bi = (decltype(aRezStatdata_bi + 0)) 0x504aa4;
char* aUnitWireframGr = (decltype(aUnitWireframGr + 0)) 0x504ab8;
char* aUnitWireframTr = (decltype(aUnitWireframTr + 0)) 0x504ad4;
FnInteract* off_504AF0 = (decltype(off_504AF0 + 0)) 0x504af0;
char* aSS_2 = (decltype(aSS_2 + 0)) 0x504ba0;
char* aSSDD = (decltype(aSSDD + 0)) 0x504ba8;
char* aSSDS = (decltype(aSSDS + 0)) 0x504bb4;
char* aSSDDS = (decltype(aSSDDS + 0)) 0x504bc0;
char* source_filename = (decltype(source_filename + 0)) 0x504bd0;
char* aGameTwire_pcx = (decltype(aGameTwire_pcx + 0)) 0x504bf4;
char* aUnitWireframWi = (decltype(aUnitWireframWi + 0)) 0x504c04;
char* aStarcraftSw_92 = (decltype(aStarcraftSw_92 + 0)) 0x504c20;
char* aRezStat_f10_bi = (decltype(aRezStat_f10_bi + 0)) 0x504c44;
char* aStarcraftSw_97 = (decltype(aStarcraftSw_97 + 0)) 0x504c58;
FnInteract& off_504C7C = * ((decltype(&off_504C7C)) 0x504c7c);
char* aRezStatfluf_bi = (decltype(aRezStatfluf_bi + 0)) 0x504c80;
char* aStarcraftSw_96 = (decltype(aStarcraftSw_96 + 0)) 0x504c94;
char* aRezStatres_bin = (decltype(aRezStatres_bin + 0)) 0x504cb8;
char* aGameIcons_grp = (decltype(aGameIcons_grp + 0)) 0x504cc8;
char* aStarcraftSw_85 = (decltype(aStarcraftSw_85 + 0)) 0x504cd8;
FnInteract* off_504CF8 = (decltype(off_504CF8 + 0)) 0x504cf8;
const char* SupplyInfoFormat = (decltype(SupplyInfoFormat + 0)) 0x504d10;
char* aStarcraftSw_58 = (decltype(aStarcraftSw_58 + 0)) 0x504d1c;
char* aRezDlgfatal_bi = (decltype(aRezDlgfatal_bi + 0)) 0x504d3c;
char* aStarcraftSw_84 = (decltype(aStarcraftSw_84 + 0)) 0x504d50;
char* aRezGateways_tx = (decltype(aRezGateways_tx + 0)) 0x504d74;
char* aStarcraftSw_24 = (decltype(aStarcraftSw_24 + 0)) 0x504d88;
char* aOverrideBattle = (decltype(aOverrideBattle + 0)) 0x504da8;
char* aConfiguration = (decltype(aConfiguration + 0)) 0x504dc8;
const char* aBattle_netGate = (decltype(aBattle_netGate + 0)) 0x504dd8;
const char* aStarcraftSw_23 = (decltype(aStarcraftSw_23 + 0)) 0x504dec;
__int16& word_504E0C = * ((decltype(&word_504E0C)) 0x504e0c);
char& byte_504E0E = * ((decltype(&byte_504E0E)) 0x504e0e);
char* aGlueChatroomIc = (decltype(aGlueChatroomIc + 0)) 0x504e10;
char* string2 = (decltype(string2 + 0)) 0x504e28;
char* aStatsS = (decltype(aStatsS + 0)) 0x504e2c;
char* a3u = (decltype(a3u + 0)) 0x504e38;
char* aStarcraftSw_21 = (decltype(aStarcraftSw_21 + 0)) 0x504e3c;
char* aStarcraftSw_19 = (decltype(aStarcraftSw_19 + 0)) 0x504e60;
char* aDialog_static_ = (decltype(aDialog_static_ + 0)) 0x504e84;
char* aDialog_profile = (decltype(aDialog_profile + 0)) 0x504e9c;
CHAR* FileName = (decltype(FileName + 0)) 0x504edc;
char* aWb = (decltype(aWb + 0)) 0x504ee8;
unsigned __int8& asc_504EEC = * ((decltype(&asc_504EEC)) 0x504eec);
unsigned __int8& aHttp = * ((decltype(&aHttp)) 0x504ef4);
char* aTimeNewRoman = (decltype(aTimeNewRoman + 0)) 0x504efc;
char* aStarcraftSw_18 = (decltype(aStarcraftSw_18 + 0)) 0x504f0c;
char* aGlueBattle_n_3 = (decltype(aGlueBattle_n_3 + 0)) 0x504f34;
char* aPopup = (decltype(aPopup + 0)) 0x504f60;
char* aGlueBattle_n_7 = (decltype(aGlueBattle_n_7 + 0)) 0x504f68;
char* aGlueBattle_n_6 = (decltype(aGlueBattle_n_6 + 0)) 0x504f98;
char* aAt = (decltype(aAt + 0)) 0x504fc4;
CHAR* Format = (decltype(Format + 0)) 0x504fcc;
char* a0 = (decltype(a0 + 0)) 0x504fd4;
char* aArial = (decltype(aArial + 0)) 0x504fd8;
char* aRecordSexp1Las = (decltype(aRecordSexp1Las + 0)) 0x504fe0;
char* aRecordSexp1L_0 = (decltype(aRecordSexp1L_0 + 0)) 0x505000;
char* aRecordSexp1Hig = (decltype(aRecordSexp1Hig + 0)) 0x505018;
char* aDynkeySexp1Ran = (decltype(aDynkeySexp1Ran + 0)) 0x505030;
char* aRecordSexp1H_0 = (decltype(aRecordSexp1H_0 + 0)) 0x505044;
char* aRecordSexp1Rat = (decltype(aRecordSexp1Rat + 0)) 0x505060;
char* aRecordSexp1Dis = (decltype(aRecordSexp1Dis + 0)) 0x505078;
char* aRecordSexp1Los = (decltype(aRecordSexp1Los + 0)) 0x505094;
char* aRecordSexp1Win = (decltype(aRecordSexp1Win + 0)) 0x5050ac;
char* aRecordSexp0Las = (decltype(aRecordSexp0Las + 0)) 0x5050c0;
char* aRecordSexp0L_0 = (decltype(aRecordSexp0L_0 + 0)) 0x5050e0;
char* aRecordSexp0Dis = (decltype(aRecordSexp0Dis + 0)) 0x5050f8;
char* aRecordSexp0Los = (decltype(aRecordSexp0Los + 0)) 0x505114;
char* aRecordSexp0Win = (decltype(aRecordSexp0Win + 0)) 0x50512c;
char* aRecordStar1Las = (decltype(aRecordStar1Las + 0)) 0x505140;
char* aRecordStar1L_0 = (decltype(aRecordStar1L_0 + 0)) 0x505160;
char* aRecordStar1Hig = (decltype(aRecordStar1Hig + 0)) 0x505178;
char* aDynkeyStar1Ran = (decltype(aDynkeyStar1Ran + 0)) 0x505190;
char* aRecordStar1H_0 = (decltype(aRecordStar1H_0 + 0)) 0x5051a4;
char* aRecordStar1Rat = (decltype(aRecordStar1Rat + 0)) 0x5051c0;
char* aRecordStar1Dis = (decltype(aRecordStar1Dis + 0)) 0x5051d8;
char* aRecordStar1Los = (decltype(aRecordStar1Los + 0)) 0x5051f4;
char* aRecordStar1Win = (decltype(aRecordStar1Win + 0)) 0x50520c;
char* aRecordStar0Las = (decltype(aRecordStar0Las + 0)) 0x505220;
char* aRecordStar0L_0 = (decltype(aRecordStar0L_0 + 0)) 0x505240;
char* aRecordStar0Dis = (decltype(aRecordStar0Dis + 0)) 0x505258;
char* aRecordStar0Los = (decltype(aRecordStar0Los + 0)) 0x505274;
char* aRecordStar0Win = (decltype(aRecordStar0Win + 0)) 0x50528c;
char* aProfileDescrip = (decltype(aProfileDescrip + 0)) 0x5052a0;
char* aProfileLocatio = (decltype(aProfileLocatio + 0)) 0x5052b4;
char* aProfileAge = (decltype(aProfileAge + 0)) 0x5052c8;
char* aProfileSex_1 = (decltype(aProfileSex_1 + 0)) 0x5052d4;
char* aDialog_creat_0 = (decltype(aDialog_creat_0 + 0)) 0x5052e0;
char* aIcon = (decltype(aIcon + 0)) 0x5052f4;
char* aBrowse = (decltype(aBrowse + 0)) 0x5052fc;
char* aGlueBattle_n_1 = (decltype(aGlueBattle_n_1 + 0)) 0x505304;
char* aGlueBattle__17 = (decltype(aGlueBattle__17 + 0)) 0x50532c;
char* aGlueBattle__12 = (decltype(aGlueBattle__12 + 0)) 0x50534c;
char* aDialog_create_ = (decltype(aDialog_create_ + 0)) 0x505370;
char* aBattle_html = (decltype(aBattle_html + 0)) 0x505388;
char* aLastCreatedGam = (decltype(aLastCreatedGam + 0)) 0x505394;
char* aStarcraftSw_16 = (decltype(aStarcraftSw_16 + 0)) 0x5053ac;
char* aGlueBattle_n_5 = (decltype(aGlueBattle_n_5 + 0)) 0x5053d0;
char* aGlueBattle_n_4 = (decltype(aGlueBattle_n_4 + 0)) 0x5053fc;
char* aCreate = (decltype(aCreate + 0)) 0x50542c;
char* aGlueBattle_n_2 = (decltype(aGlueBattle_n_2 + 0)) 0x505434;
char* aStarcraftSw_15 = (decltype(aStarcraftSw_15 + 0)) 0x505460;
char* aGlueBattle_n_0 = (decltype(aGlueBattle_n_0 + 0)) 0x505484;
char* aStarcraftSw_54 = (decltype(aStarcraftSw_54 + 0)) 0x5054a8;
char* aIcontable = (decltype(aIcontable + 0)) 0x5054cc;
char* aGlueBattle__11 = (decltype(aGlueBattle__11 + 0)) 0x5054d8;
char* aGlueBattle_net = (decltype(aGlueBattle_net + 0)) 0x5054f8;
char* aGlueBattle__13 = (decltype(aGlueBattle__13 + 0)) 0x505524;
char* aGlueBattle__14 = (decltype(aGlueBattle__14 + 0)) 0x505550;
char* aGlueBattle__15 = (decltype(aGlueBattle__15 + 0)) 0x50557c;
char* aGlueBattle__16 = (decltype(aGlueBattle__16 + 0)) 0x5055a8;
char* aStarcraftSw_14 = (decltype(aStarcraftSw_14 + 0)) 0x5055d4;
char* aTimesNewRoman = (decltype(aTimesNewRoman + 0)) 0x5055fc;
char* aStarcraftSw_12 = (decltype(aStarcraftSw_12 + 0)) 0x50560c;
char* aStarcraftSw_11 = (decltype(aStarcraftSw_11 + 0)) 0x505630;
char* aStarcraftSw_90 = (decltype(aStarcraftSw_90 + 0)) 0x505654;
char* aErrorInGetclos = (decltype(aErrorInGetclos + 0)) 0x505678;
char* aWriteMe = (decltype(aWriteMe + 0)) 0x505698;
char* aStarcraftSw_10 = (decltype(aStarcraftSw_10 + 0)) 0x5056a4;
char* aStarcraftSwa_9 = (decltype(aStarcraftSwa_9 + 0)) 0x5056d0;
char& byte_5056EC = * ((decltype(&byte_5056EC)) 0x5056ec);
char& byte_5056F0 = * ((decltype(&byte_5056F0)) 0x5056f0);
char* aSSS = (decltype(aSSS + 0)) 0x5056f4;
char* aSD_1 = (decltype(aSD_1 + 0)) 0x5056fc;
char* asc_505704 = (decltype(asc_505704 + 0)) 0x505704;
char& byte_505708 = * ((decltype(&byte_505708)) 0x505708);
char* aD_0 = (decltype(aD_0 + 0)) 0x505710;
char* aDDCDD = (decltype(aDDCDD + 0)) 0x505714;
char* aCDD = (decltype(aCDD + 0)) 0x505724;
char& byte_50572C = * ((decltype(&byte_50572C)) 0x50572c);
char* aSD = (decltype(aSD + 0)) 0x505734;
char* aSD_0 = (decltype(aSD_0 + 0)) 0x50573c;
char* aAppaddex1 = (decltype(aAppaddex1 + 0)) 0x505744;
char* asc_505750 = (decltype(asc_505750 + 0)) 0x505750;
CHAR* Caption = (decltype(Caption + 0)) 0x505778;
char* aSSLineDS = (decltype(aSSLineDS + 0)) 0x505780;
char* aSS = (decltype(aSS + 0)) 0x505794;
char* aDM = (decltype(aDM + 0)) 0x50579c;
char* aUnknownError0x = (decltype(aUnknownError0x + 0)) 0x5057a4;
char* aMmsysError0xX = (decltype(aMmsysError0xX + 0)) 0x5057bc;
char* aDserrUnknown0x = (decltype(aDserrUnknown0x + 0)) 0x5057d0;
char* aE_nointerface = (decltype(aE_nointerface + 0)) 0x5057e4;
char* source = (decltype(source + 0)) 0x5057f4;
char* aDserr_noaggreg = (decltype(aDserr_noaggreg + 0)) 0x505808;
char* aDserr_invalidp = (decltype(aDserr_invalidp + 0)) 0x50581c;
char* aDserr_bufferlo = (decltype(aDserr_bufferlo + 0)) 0x505830;
char* aDserr_alreadyi = (decltype(aDserr_alreadyi + 0)) 0x505844;
char* aDserr_nodriver = (decltype(aDserr_nodriver + 0)) 0x505860;
char* aDserr_badforma = (decltype(aDserr_badforma + 0)) 0x505870;
char* aDserr_prioleve = (decltype(aDserr_prioleve + 0)) 0x505880;
char* aDserr_invalidc = (decltype(aDserr_invalidc + 0)) 0x505898;
char* aDserr_controlu = (decltype(aDserr_controlu + 0)) 0x5058ac;
char* aDserr_allocate = (decltype(aDserr_allocate + 0)) 0x5058c4;
char* aDs_ok = (decltype(aDs_ok + 0)) 0x5058d4;
char* aDderrUnknown0x = (decltype(aDderrUnknown0x + 0)) 0x5058dc;
char* aDderr_unsupp_0 = (decltype(aDderr_unsupp_0 + 0)) 0x5058f0;
char* aDderr_notpalet = (decltype(aDderr_notpalet + 0)) 0x505908;
char* aDderr_wrongmod = (decltype(aDderr_wrongmod + 0)) 0x50591c;
char* aDderr_nodc = (decltype(aDderr_nodc + 0)) 0x50592c;
char* aDderr_cantcrea = (decltype(aDderr_cantcrea + 0)) 0x505938;
char* aDderr_exclusiv = (decltype(aDderr_exclusiv + 0)) 0x50594c;
char* aDderr_nopale_0 = (decltype(aDderr_nopale_0 + 0)) 0x50596c;
char* aDderr_nopalett = (decltype(aDderr_nopalett + 0)) 0x505980;
char* aDderr_hwndalre = (decltype(aDderr_hwndalre + 0)) 0x505998;
char* aDderr_hwndsubc = (decltype(aDderr_hwndsubc + 0)) 0x5059b0;
char* aDderr_nohwnd = (decltype(aDderr_nohwnd + 0)) 0x5059c8;
char* aDderr_noemulat = (decltype(aDderr_noemulat + 0)) 0x5059d8;
char* aDderr_primarys = (decltype(aDderr_primarys + 0)) 0x5059ec;
char* aDderr_nodire_0 = (decltype(aDderr_nodire_0 + 0)) 0x505a10;
char* aDderr_directdr = (decltype(aDderr_directdr + 0)) 0x505a28;
char* aDderr_invalidd = (decltype(aDderr_invalidd + 0)) 0x505a48;
char* aDderr_wasstill = (decltype(aDderr_wasstill + 0)) 0x505a64;
char* aDderr_vertical = (decltype(aDderr_vertical + 0)) 0x505a7c;
char* aDderr_unsuppor = (decltype(aDderr_unsuppor + 0)) 0x505a9c;
char* aDderr_surfacel = (decltype(aDderr_surfacel + 0)) 0x505ab4;
char* aDderr_cantlock = (decltype(aDderr_cantlock + 0)) 0x505ac8;
char* aDderr_surfaceb = (decltype(aDderr_surfaceb + 0)) 0x505ae0;
char* aDderr_paletteb = (decltype(aDderr_paletteb + 0)) 0x505af4;
char* aDderr_outofvid = (decltype(aDderr_outofvid + 0)) 0x505b08;
char* aDderr_notfound = (decltype(aDderr_notfound + 0)) 0x505b20;
char* aDderr_noexclus = (decltype(aDderr_noexclus + 0)) 0x505b30;
char* aDderr_nodirect = (decltype(aDderr_nodirect + 0)) 0x505b48;
char* aDderr_lockedsu = (decltype(aDderr_lockedsu + 0)) 0x505b64;
char* aDderr_invalidr = (decltype(aDderr_invalidr + 0)) 0x505b7c;
char* aDderr_invalidp = (decltype(aDderr_invalidp + 0)) 0x505b90;
char* aDderr_invalidm = (decltype(aDderr_invalidm + 0)) 0x505bac;
char* aDderr_currentl = (decltype(aDderr_currentl + 0)) 0x505bc0;
char* aDderr_cannotde = (decltype(aDderr_cannotde + 0)) 0x505bd8;
char* aDderr_cannotat = (decltype(aDderr_cannotat + 0)) 0x505bf4;
char* aDderr_incompat = (decltype(aDderr_incompat + 0)) 0x505c10;
char* aDderr_exceptio = (decltype(aDderr_exceptio + 0)) 0x505c2c;
char* aDderr_alreadyi = (decltype(aDderr_alreadyi + 0)) 0x505c3c;
char* aDd_ok = (decltype(aDd_ok + 0)) 0x505c58;
char* aStarcraftSwa_8 = (decltype(aStarcraftSwa_8 + 0)) 0x505c60;
char* aUsechatcolors = (decltype(aUsechatcolors + 0)) 0x505c84;
char* aTrigtext = (decltype(aTrigtext + 0)) 0x505c94;
char* aTip = (decltype(aTip + 0)) 0x505ca0;
char* aBldgnoise = (decltype(aBldgnoise + 0)) 0x505ca4;
char* aUnitnoise = (decltype(aUnitnoise + 0)) 0x505cb0;
char* aUnitspeech = (decltype(aUnitspeech + 0)) 0x505cbc;
char* aIntrox = (decltype(aIntrox + 0)) 0x505cc8;
char* aIntro = (decltype(aIntro + 0)) 0x505cd0;
char* aTipnum = (decltype(aTipnum + 0)) 0x505cd8;
char* aSfx = (decltype(aSfx + 0)) 0x505ce0;
char* aMusic = (decltype(aMusic + 0)) 0x505ce4;
char* aM_kscroll = (decltype(aM_kscroll + 0)) 0x505cec;
char* aM_mscroll = (decltype(aM_mscroll + 0)) 0x505cf8;
char* aKscroll = (decltype(aKscroll + 0)) 0x505d04;
char* aMscroll = (decltype(aMscroll + 0)) 0x505d0c;
char* aSpeed = (decltype(aSpeed + 0)) 0x505d14;
char* aBadPfopenModeI = (decltype(aBadPfopenModeI + 0)) 0x505d1c;
char* aWb_0 = (decltype(aWb_0 + 0)) 0x505d34;
char* aRb = (decltype(aRb + 0)) 0x505d38;
int& dword_505D3C = * ((decltype(&dword_505D3C)) 0x505d3c);
char& byte_505D40 = * ((decltype(&byte_505D40)) 0x505d40);
char* aStarcraftSwa_7 = (decltype(aStarcraftSwa_7 + 0)) 0x505d44;
char* aFontS_fnt = (decltype(aFontS_fnt + 0)) 0x505d68;
char* aGdsdialogboxpa = (decltype(aGdsdialogboxpa + 0)) 0x505d74;
char* format = (decltype(format + 0)) 0x505d8c;
char* aProgra = (decltype(aProgra + 0)) 0x505d98;
char* aSS02u02u02u_er = (decltype(aSS02u02u02u_er + 0)) 0x505e4c;
char* aStarcraftSw_81 = (decltype(aStarcraftSw_81 + 0)) 0x505e64;
char* aStarcraftSw_76 = (decltype(aStarcraftSw_76 + 0)) 0x505e88;
char* aCreatebacksurf = (decltype(aCreatebacksurf + 0)) 0x505eb0;
char* aSetpalette = (decltype(aSetpalette + 0)) 0x505ec4;
char* aCreateprimarys = (decltype(aCreateprimarys + 0)) 0x505ed0;
char* aCreatepalette = (decltype(aCreatepalette + 0)) 0x505ee8;
char* aSetdisplaymode = (decltype(aSetdisplaymode + 0)) 0x505ef8;
CHAR* aDirectdrawcrea = (decltype(aDirectdrawcrea + 0)) 0x505f08;
char* source_file = (decltype(source_file + 0)) 0x505f1c;
CHAR* aDdraw_dll = (decltype(aDdraw_dll + 0)) 0x505f44;
char* aStarcraftSw_93 = (decltype(aStarcraftSw_93 + 0)) 0x505f50;
char* aStarcraftSwa_5 = (decltype(aStarcraftSwa_5 + 0)) 0x505f74;
char* aStarcraftSwa_4 = (decltype(aStarcraftSwa_4 + 0)) 0x505f98;
char* aStarcraftSwa_3 = (decltype(aStarcraftSwa_3 + 0)) 0x505fb8;
char* a4W01ADBSW1A1W2 = (decltype(a4W01ADBSW1A1W2 + 0)) 0x505fdc;
char* a4W0ADBSW1A1W2B = (decltype(a4W0ADBSW1A1W2B + 0)) 0x506000;
char* arg0 = (decltype(arg0 + 0)) 0x50605c;
char* directives1 = (decltype(directives1 + 0)) 0x506064;
char* directives2 = (decltype(directives2 + 0)) 0x506088;
char* aStarcraftSwa_2 = (decltype(aStarcraftSwa_2 + 0)) 0x5060e4;
char* aStarcraftSwa_1 = (decltype(aStarcraftSwa_1 + 0)) 0x506108;
__int16& word_50612C = * ((decltype(&word_50612C)) 0x50612c);
char& byte_50612E = * ((decltype(&byte_50612E)) 0x50612e);
char* aStarcraftSwa_0 = (decltype(aStarcraftSwa_0 + 0)) 0x506130;
char* aStarcraftSw_83 = (decltype(aStarcraftSw_83 + 0)) 0x506154;
char* aCouldNotLoadS = (decltype(aCouldNotLoadS + 0)) 0x506174;
char* aDraw1 = (decltype(aDraw1 + 0)) 0x506188;
char* aStarcraftSwarL = (decltype(aStarcraftSwarL + 0)) 0x506190;
int* dword_5061B8 = (decltype(dword_5061B8 + 0)) 0x5061b8;
int* dword_5061BC = (decltype(dword_5061BC + 0)) 0x5061bc;
char* logfilename = (decltype(logfilename + 0)) 0x506200;
char* aA = (decltype(aA + 0)) 0x506228;
double& dbl_506230 = * ((decltype(&dbl_506230)) 0x506230);
double& dbl_506238 = * ((decltype(&dbl_506238)) 0x506238);
double& dbl_506240 = * ((decltype(&dbl_506240)) 0x506240);
double& dbl_506248 = * ((decltype(&dbl_506248)) 0x506248);
double& dbl_506250 = * ((decltype(&dbl_506250)) 0x506250);
double& dbl_506258 = * ((decltype(&dbl_506258)) 0x506258);
double& dbl_506260 = * ((decltype(&dbl_506260)) 0x506260);
double& dbl_506268 = * ((decltype(&dbl_506268)) 0x506268);
char* aE000 = (decltype(aE000 + 0)) 0x506270;
double& dbl_506278 = * ((decltype(&dbl_506278)) 0x506278);
double& dbl_506280 = * ((decltype(&dbl_506280)) 0x506280);
double& dbl_506288 = * ((decltype(&dbl_506288)) 0x506288);
CHAR* aIsprocessorfea = (decltype(aIsprocessorfea + 0)) 0x506290;
CHAR* aKernel32 = (decltype(aKernel32 + 0)) 0x5062ac;
_SCOPETABLE_ENTRY& stru_5062B8 = * ((decltype(&stru_5062B8)) 0x5062b8);
char* aAuthenticamd = (decltype(aAuthenticamd + 0)) 0x5062c4;
__int64& qword_5062E0 = * ((decltype(&qword_5062E0)) 0x5062e0);
__int64& qword_506F00 = * ((decltype(&qword_506F00)) 0x506f00);
__int64& qword_507B20 = * ((decltype(&qword_507B20)) 0x507b20);
__int64& qword_509B60 = * ((decltype(&qword_509B60)) 0x509b60);
__int64& qword_509BC0 = * ((decltype(&qword_509BC0)) 0x509bc0);
__int64& qword_509BC8 = * ((decltype(&qword_509BC8)) 0x509bc8);
__int64& qword_509BD0 = * ((decltype(&qword_509BD0)) 0x509bd0);
__int64& qword_509BD8 = * ((decltype(&qword_509BD8)) 0x509bd8);
double& dbl_509BE0 = * ((decltype(&dbl_509BE0)) 0x509be0);
double& dbl_509BE8 = * ((decltype(&dbl_509BE8)) 0x509be8);
__int64& qword_509BF0 = * ((decltype(&qword_509BF0)) 0x509bf0);
__int64& qword_509BF8 = * ((decltype(&qword_509BF8)) 0x509bf8);
__int64& qword_509C00 = * ((decltype(&qword_509C00)) 0x509c00);
double& dbl_509C10 = * ((decltype(&dbl_509C10)) 0x509c10);
double& dbl_509C24 = * ((decltype(&dbl_509C24)) 0x509c24);
double& dbl_509C2C = * ((decltype(&dbl_509C2C)) 0x509c2c);
double& dbl_509C34 = * ((decltype(&dbl_509C34)) 0x509c34);
double& dbl_509C3C = * ((decltype(&dbl_509C3C)) 0x509c3c);
double& dbl_509C44 = * ((decltype(&dbl_509C44)) 0x509c44);
double& dbl_509C4C = * ((decltype(&dbl_509C4C)) 0x509c4c);
double& dbl_509C58 = * ((decltype(&dbl_509C58)) 0x509c58);
char* aAtan = (decltype(aAtan + 0)) 0x509cc8;
char* aCeil = (decltype(aCeil + 0)) 0x509cd0;
char* aFloor = (decltype(aFloor + 0)) 0x509cd8;
char* aModf = (decltype(aModf + 0)) 0x509ce0;
char* aExp2 = (decltype(aExp2 + 0)) 0x509ce8;
char* aExp10 = (decltype(aExp10 + 0)) 0x509cf0;
char* aLog2 = (decltype(aLog2 + 0)) 0x509cf8;
char* aPow = (decltype(aPow + 0)) 0x509d00;
void *& off_509D04 = * ((decltype(&off_509D04)) 0x509d04);
char* aLog10 = (decltype(aLog10 + 0)) 0x509d08;
char* aExp = (decltype(aExp + 0)) 0x509d10;
char* a1Qnan = (decltype(a1Qnan + 0)) 0x509d14;
char* a1Inf = (decltype(a1Inf + 0)) 0x509d1c;
char* a1Ind = (decltype(a1Ind + 0)) 0x509d24;
char* a1Snan = (decltype(a1Snan + 0)) 0x509d2c;
char* a_nextafter = (decltype(a_nextafter + 0)) 0x509d34;
char* a_logb = (decltype(a_logb + 0)) 0x509d40;
char* a_yn = (decltype(a_yn + 0)) 0x509d48;
char* a_y1 = (decltype(a_y1 + 0)) 0x509d4c;
char* a_y0 = (decltype(a_y0 + 0)) 0x509d50;
char* aFrexp = (decltype(aFrexp + 0)) 0x509d54;
char* aFmod = (decltype(aFmod + 0)) 0x509d5c;
char* a_hypot = (decltype(a_hypot + 0)) 0x509d64;
char* a_cabs = (decltype(a_cabs + 0)) 0x509d6c;
char* aLdexp = (decltype(aLdexp + 0)) 0x509d74;
char* aFabs = (decltype(aFabs + 0)) 0x509d7c;
char* aTan = (decltype(aTan + 0)) 0x509d84;
char* aCos = (decltype(aCos + 0)) 0x509d88;
char* aSin = (decltype(aSin + 0)) 0x509d8c;
char* aSqrt = (decltype(aSqrt + 0)) 0x509d90;
char* aAtan2 = (decltype(aAtan2 + 0)) 0x509d98;
char* aAcos = (decltype(aAcos + 0)) 0x509da0;
char* aAsin = (decltype(aAsin + 0)) 0x509da8;
char* aTanh = (decltype(aTanh + 0)) 0x509db0;
char* aCosh = (decltype(aCosh + 0)) 0x509db8;
char* aSinh = (decltype(aSinh + 0)) 0x509dc0;
char* asc_509DC8 = (decltype(asc_509DC8 + 0)) 0x509dc8;
__int16 ** off_509F40 = (decltype(off_509F40 + 0)) 0x509f40;
__int16 ** off_509F6C = (decltype(off_509F6C + 0)) 0x509f6c;
__int16 ** off_509FCC = (decltype(off_509FCC + 0)) 0x509fcc;
__int16 ** off_509FE4 = (decltype(off_509FE4 + 0)) 0x509fe4;
__int16 ** off_50A1A4 = (decltype(off_50A1A4 + 0)) 0x50a1a4;
__int16 ** off_50A1B8 = (decltype(off_50A1B8 + 0)) 0x50a1b8;
__int16 ** off_50A2E0 = (decltype(off_50A2E0 + 0)) 0x50a2e0;
int& dword_50A2F0 = * ((decltype(&dword_50A2F0)) 0x50a2f0);
__int16& word_50A510 = * ((decltype(&word_50A510)) 0x50a510);
__int16& word_50A524 = * ((decltype(&word_50A524)) 0x50a524);
__int16& word_50A536 = * ((decltype(&word_50A536)) 0x50a536);
__int16& word_50A548 = * ((decltype(&word_50A548)) 0x50a548);
__int16& word_50A558 = * ((decltype(&word_50A558)) 0x50a558);
__int16& word_50A566 = * ((decltype(&word_50A566)) 0x50a566);
__int16& word_50A578 = * ((decltype(&word_50A578)) 0x50a578);
__int16& word_50A58C = * ((decltype(&word_50A58C)) 0x50a58c);
__int16& word_50A5A0 = * ((decltype(&word_50A5A0)) 0x50a5a0);
__int16& word_50A5AC = * ((decltype(&word_50A5AC)) 0x50a5ac);
__int16& word_50A5BC = * ((decltype(&word_50A5BC)) 0x50a5bc);
__int16& word_50A5D2 = * ((decltype(&word_50A5D2)) 0x50a5d2);
__int16& word_50A5EE = * ((decltype(&word_50A5EE)) 0x50a5ee);
__int16& word_50A608 = * ((decltype(&word_50A608)) 0x50a608);
__int16& word_50A620 = * ((decltype(&word_50A620)) 0x50a620);
__int16& word_50A63A = * ((decltype(&word_50A63A)) 0x50a63a);
__int16& word_50A650 = * ((decltype(&word_50A650)) 0x50a650);
__int16& word_50A660 = * ((decltype(&word_50A660)) 0x50a660);
__int16& word_50A67A = * ((decltype(&word_50A67A)) 0x50a67a);
__int16& word_50A68C = * ((decltype(&word_50A68C)) 0x50a68c);
__int16& word_50A69A = * ((decltype(&word_50A69A)) 0x50a69a);
__int16& word_50A6B2 = * ((decltype(&word_50A6B2)) 0x50a6b2);
__int16& word_50A6BE = * ((decltype(&word_50A6BE)) 0x50a6be);
__int16& word_50A6CE = * ((decltype(&word_50A6CE)) 0x50a6ce);
__int16& word_50A6E4 = * ((decltype(&word_50A6E4)) 0x50a6e4);
__int16& word_50A6EE = * ((decltype(&word_50A6EE)) 0x50a6ee);
__int16& word_50A6FC = * ((decltype(&word_50A6FC)) 0x50a6fc);
__int16& word_50A70A = * ((decltype(&word_50A70A)) 0x50a70a);
__int16& word_50A718 = * ((decltype(&word_50A718)) 0x50a718);
__int16& word_50A726 = * ((decltype(&word_50A726)) 0x50a726);
__int16& word_50A734 = * ((decltype(&word_50A734)) 0x50a734);
__int16& word_50A740 = * ((decltype(&word_50A740)) 0x50a740);
__int16& word_50A758 = * ((decltype(&word_50A758)) 0x50a758);
__int16& word_50A770 = * ((decltype(&word_50A770)) 0x50a770);
__int16& word_50A780 = * ((decltype(&word_50A780)) 0x50a780);
__int16& word_50A78A = * ((decltype(&word_50A78A)) 0x50a78a);
__int16& word_50A796 = * ((decltype(&word_50A796)) 0x50a796);
__int16& word_50A7A2 = * ((decltype(&word_50A7A2)) 0x50a7a2);
__int16& word_50A7AE = * ((decltype(&word_50A7AE)) 0x50a7ae);
__int16& word_50A7CA = * ((decltype(&word_50A7CA)) 0x50a7ca);
__int16& word_50A7DA = * ((decltype(&word_50A7DA)) 0x50a7da);
__int16& word_50A7E8 = * ((decltype(&word_50A7E8)) 0x50a7e8);
__int16& word_50A7F8 = * ((decltype(&word_50A7F8)) 0x50a7f8);
__int16& word_50A804 = * ((decltype(&word_50A804)) 0x50a804);
__int16& word_50A81A = * ((decltype(&word_50A81A)) 0x50a81a);
__int16& word_50A82A = * ((decltype(&word_50A82A)) 0x50a82a);
__int16& word_50A836 = * ((decltype(&word_50A836)) 0x50a836);
__int16& word_50A850 = * ((decltype(&word_50A850)) 0x50a850);
__int16& word_50A860 = * ((decltype(&word_50A860)) 0x50a860);
__int16& word_50A876 = * ((decltype(&word_50A876)) 0x50a876);
__int16& word_50A890 = * ((decltype(&word_50A890)) 0x50a890);
__int16& word_50A8A0 = * ((decltype(&word_50A8A0)) 0x50a8a0);
__int16& word_50A8B6 = * ((decltype(&word_50A8B6)) 0x50a8b6);
__int16& word_50A8C6 = * ((decltype(&word_50A8C6)) 0x50a8c6);
__int16& word_50A8D8 = * ((decltype(&word_50A8D8)) 0x50a8d8);
__int16& word_50A8EA = * ((decltype(&word_50A8EA)) 0x50a8ea);
__int16& word_50A8FC = * ((decltype(&word_50A8FC)) 0x50a8fc);
__int16& word_50A90E = * ((decltype(&word_50A90E)) 0x50a90e);
__int16& word_50A920 = * ((decltype(&word_50A920)) 0x50a920);
__int16& word_50A932 = * ((decltype(&word_50A932)) 0x50a932);
__int16& word_50A942 = * ((decltype(&word_50A942)) 0x50a942);
__int16& word_50A95C = * ((decltype(&word_50A95C)) 0x50a95c);
__int16& word_50A96E = * ((decltype(&word_50A96E)) 0x50a96e);
__int16& word_50A980 = * ((decltype(&word_50A980)) 0x50a980);
char* aKernel32_dll = (decltype(aKernel32_dll + 0)) 0x50a99a;
__int16& word_50A9A8 = * ((decltype(&word_50A9A8)) 0x50a9a8);
__int16& word_50A9BE = * ((decltype(&word_50A9BE)) 0x50a9be);
__int16& word_50A9C6 = * ((decltype(&word_50A9C6)) 0x50a9c6);
__int16& word_50A9D6 = * ((decltype(&word_50A9D6)) 0x50a9d6);
__int16& word_50A9EA = * ((decltype(&word_50A9EA)) 0x50a9ea);
__int16& word_50A9F8 = * ((decltype(&word_50A9F8)) 0x50a9f8);
__int16& word_50AA06 = * ((decltype(&word_50AA06)) 0x50aa06);
__int16& word_50AA1C = * ((decltype(&word_50AA1C)) 0x50aa1c);
__int16& word_50AA28 = * ((decltype(&word_50AA28)) 0x50aa28);
__int16& word_50AA3A = * ((decltype(&word_50AA3A)) 0x50aa3a);
__int16& word_50AA46 = * ((decltype(&word_50AA46)) 0x50aa46);
__int16& word_50AA56 = * ((decltype(&word_50AA56)) 0x50aa56);
__int16& word_50AA68 = * ((decltype(&word_50AA68)) 0x50aa68);
__int16& word_50AA78 = * ((decltype(&word_50AA78)) 0x50aa78);
__int16& word_50AA92 = * ((decltype(&word_50AA92)) 0x50aa92);
__int16& word_50AA9E = * ((decltype(&word_50AA9E)) 0x50aa9e);
__int16& word_50AAAC = * ((decltype(&word_50AAAC)) 0x50aaac);
__int16& word_50AAC6 = * ((decltype(&word_50AAC6)) 0x50aac6);
__int16& word_50AADE = * ((decltype(&word_50AADE)) 0x50aade);
__int16& word_50AAEE = * ((decltype(&word_50AAEE)) 0x50aaee);
__int16& word_50AAFA = * ((decltype(&word_50AAFA)) 0x50aafa);
__int16& word_50AB18 = * ((decltype(&word_50AB18)) 0x50ab18);
__int16& word_50AB28 = * ((decltype(&word_50AB28)) 0x50ab28);
__int16& word_50AB3A = * ((decltype(&word_50AB3A)) 0x50ab3a);
__int16& word_50AB4C = * ((decltype(&word_50AB4C)) 0x50ab4c);
__int16& word_50AB5C = * ((decltype(&word_50AB5C)) 0x50ab5c);
__int16& word_50AB6C = * ((decltype(&word_50AB6C)) 0x50ab6c);
__int16& word_50AB7E = * ((decltype(&word_50AB7E)) 0x50ab7e);
__int16& word_50AB8E = * ((decltype(&word_50AB8E)) 0x50ab8e);
__int16& word_50ABA4 = * ((decltype(&word_50ABA4)) 0x50aba4);
__int16& word_50ABB2 = * ((decltype(&word_50ABB2)) 0x50abb2);
__int16& word_50ABBC = * ((decltype(&word_50ABBC)) 0x50abbc);
__int16& word_50ABD4 = * ((decltype(&word_50ABD4)) 0x50abd4);
__int16& word_50ABEE = * ((decltype(&word_50ABEE)) 0x50abee);
__int16& word_50AC06 = * ((decltype(&word_50AC06)) 0x50ac06);
__int16& word_50AC14 = * ((decltype(&word_50AC14)) 0x50ac14);
__int16& word_50AC24 = * ((decltype(&word_50AC24)) 0x50ac24);
__int16& word_50AC34 = * ((decltype(&word_50AC34)) 0x50ac34);
__int16& word_50AC48 = * ((decltype(&word_50AC48)) 0x50ac48);
__int16& word_50AC58 = * ((decltype(&word_50AC58)) 0x50ac58);
__int16& word_50AC6A = * ((decltype(&word_50AC6A)) 0x50ac6a);
__int16& word_50AC78 = * ((decltype(&word_50AC78)) 0x50ac78);
__int16& word_50AC86 = * ((decltype(&word_50AC86)) 0x50ac86);
__int16& word_50AC96 = * ((decltype(&word_50AC96)) 0x50ac96);
__int16& word_50ACA4 = * ((decltype(&word_50ACA4)) 0x50aca4);
__int16& word_50ACB8 = * ((decltype(&word_50ACB8)) 0x50acb8);
__int16& word_50ACC6 = * ((decltype(&word_50ACC6)) 0x50acc6);
__int16& word_50ACD8 = * ((decltype(&word_50ACD8)) 0x50acd8);
__int16& word_50ACE4 = * ((decltype(&word_50ACE4)) 0x50ace4);
__int16& word_50ACF0 = * ((decltype(&word_50ACF0)) 0x50acf0);
__int16& word_50AD06 = * ((decltype(&word_50AD06)) 0x50ad06);
__int16& word_50AD1C = * ((decltype(&word_50AD1C)) 0x50ad1c);
__int16& word_50AD2C = * ((decltype(&word_50AD2C)) 0x50ad2c);
__int16& word_50AD40 = * ((decltype(&word_50AD40)) 0x50ad40);
__int16& word_50AD4C = * ((decltype(&word_50AD4C)) 0x50ad4c);
__int16& word_50AD68 = * ((decltype(&word_50AD68)) 0x50ad68);
__int16& word_50AD78 = * ((decltype(&word_50AD78)) 0x50ad78);
__int16& word_50AD86 = * ((decltype(&word_50AD86)) 0x50ad86);
__int16& word_50AD92 = * ((decltype(&word_50AD92)) 0x50ad92);
__int16& word_50ADA6 = * ((decltype(&word_50ADA6)) 0x50ada6);
__int16& word_50ADBA = * ((decltype(&word_50ADBA)) 0x50adba);
__int16& word_50ADCC = * ((decltype(&word_50ADCC)) 0x50adcc);
__int16& word_50ADDE = * ((decltype(&word_50ADDE)) 0x50adde);
__int16& word_50ADEE = * ((decltype(&word_50ADEE)) 0x50adee);
__int16& word_50ADFA = * ((decltype(&word_50ADFA)) 0x50adfa);
__int16& word_50AE06 = * ((decltype(&word_50AE06)) 0x50ae06);
__int16& word_50AE14 = * ((decltype(&word_50AE14)) 0x50ae14);
__int16& word_50AE1C = * ((decltype(&word_50AE1C)) 0x50ae1c);
__int16& word_50AE2C = * ((decltype(&word_50AE2C)) 0x50ae2c);
__int16& word_50AE38 = * ((decltype(&word_50AE38)) 0x50ae38);
__int16& word_50AE4E = * ((decltype(&word_50AE4E)) 0x50ae4e);
__int16& word_50AE5E = * ((decltype(&word_50AE5E)) 0x50ae5e);
__int16& word_50AE78 = * ((decltype(&word_50AE78)) 0x50ae78);
__int16& word_50AE90 = * ((decltype(&word_50AE90)) 0x50ae90);
__int16& word_50AEAA = * ((decltype(&word_50AEAA)) 0x50aeaa);
__int16& word_50AEBC = * ((decltype(&word_50AEBC)) 0x50aebc);
__int16& word_50AED0 = * ((decltype(&word_50AED0)) 0x50aed0);
__int16& word_50AEE0 = * ((decltype(&word_50AEE0)) 0x50aee0);
__int16& word_50AEF2 = * ((decltype(&word_50AEF2)) 0x50aef2);
__int16& word_50AF0A = * ((decltype(&word_50AF0A)) 0x50af0a);
__int16& word_50AF1A = * ((decltype(&word_50AF1A)) 0x50af1a);
__int16& word_50AF2A = * ((decltype(&word_50AF2A)) 0x50af2a);
__int16& word_50AF3E = * ((decltype(&word_50AF3E)) 0x50af3e);
__int16& word_50AF4C = * ((decltype(&word_50AF4C)) 0x50af4c);
__int16& word_50AF5A = * ((decltype(&word_50AF5A)) 0x50af5a);
__int16& word_50AF68 = * ((decltype(&word_50AF68)) 0x50af68);
__int16& word_50AF76 = * ((decltype(&word_50AF76)) 0x50af76);
__int16& word_50AF82 = * ((decltype(&word_50AF82)) 0x50af82);
__int16& word_50AF8E = * ((decltype(&word_50AF8E)) 0x50af8e);
__int16& word_50AF98 = * ((decltype(&word_50AF98)) 0x50af98);
__int16& word_50AFAA = * ((decltype(&word_50AFAA)) 0x50afaa);
__int16& word_50AFBA = * ((decltype(&word_50AFBA)) 0x50afba);
__int16& word_50AFC6 = * ((decltype(&word_50AFC6)) 0x50afc6);
__int16& word_50AFD2 = * ((decltype(&word_50AFD2)) 0x50afd2);
__int16& word_50AFE2 = * ((decltype(&word_50AFE2)) 0x50afe2);
__int16& word_50AFF0 = * ((decltype(&word_50AFF0)) 0x50aff0);
__int16& word_50B002 = * ((decltype(&word_50B002)) 0x50b002);
__int16& word_50B012 = * ((decltype(&word_50B012)) 0x50b012);
__int16& word_50B028 = * ((decltype(&word_50B028)) 0x50b028);
__int16& word_50B03A = * ((decltype(&word_50B03A)) 0x50b03a);
__int16& word_50B04C = * ((decltype(&word_50B04C)) 0x50b04c);
__int16& word_50B05A = * ((decltype(&word_50B05A)) 0x50b05a);
__int16& word_50B06C = * ((decltype(&word_50B06C)) 0x50b06c);
__int16& word_50B07E = * ((decltype(&word_50B07E)) 0x50b07e);
__int16& word_50B08C = * ((decltype(&word_50B08C)) 0x50b08c);
__int16& word_50B098 = * ((decltype(&word_50B098)) 0x50b098);
__int16& word_50B0A4 = * ((decltype(&word_50B0A4)) 0x50b0a4);
__int16& word_50B0B6 = * ((decltype(&word_50B0B6)) 0x50b0b6);
char* aUser32_dll = (decltype(aUser32_dll + 0)) 0x50b0c4;
__int16& word_50B0D0 = * ((decltype(&word_50B0D0)) 0x50b0d0);
__int16& word_50B0E2 = * ((decltype(&word_50B0E2)) 0x50b0e2);
__int16& word_50B0F2 = * ((decltype(&word_50B0F2)) 0x50b0f2);
__int16& word_50B100 = * ((decltype(&word_50B100)) 0x50b100);
__int16& word_50B10E = * ((decltype(&word_50B10E)) 0x50b10e);
__int16& word_50B120 = * ((decltype(&word_50B120)) 0x50b120);
__int16& word_50B138 = * ((decltype(&word_50B138)) 0x50b138);
__int16& word_50B14E = * ((decltype(&word_50B14E)) 0x50b14e);
__int16& word_50B162 = * ((decltype(&word_50B162)) 0x50b162);
__int16& word_50B172 = * ((decltype(&word_50B172)) 0x50b172);
__int16& word_50B182 = * ((decltype(&word_50B182)) 0x50b182);
__int16& word_50B198 = * ((decltype(&word_50B198)) 0x50b198);
__int16& word_50B1A4 = * ((decltype(&word_50B1A4)) 0x50b1a4);
__int16& word_50B1B4 = * ((decltype(&word_50B1B4)) 0x50b1b4);
__int16& word_50B1CC = * ((decltype(&word_50B1CC)) 0x50b1cc);
__int16& word_50B1DA = * ((decltype(&word_50B1DA)) 0x50b1da);
__int16& word_50B1E6 = * ((decltype(&word_50B1E6)) 0x50b1e6);
__int16& word_50B1F4 = * ((decltype(&word_50B1F4)) 0x50b1f4);
__int16& word_50B204 = * ((decltype(&word_50B204)) 0x50b204);
char* aGdi32_dll = (decltype(aGdi32_dll + 0)) 0x50b210;
__int16& word_50B21A = * ((decltype(&word_50B21A)) 0x50b21a);
__int16& word_50B22E = * ((decltype(&word_50B22E)) 0x50b22e);
__int16& word_50B244 = * ((decltype(&word_50B244)) 0x50b244);
__int16& word_50B25A = * ((decltype(&word_50B25A)) 0x50b25a);
__int16& word_50B26A = * ((decltype(&word_50B26A)) 0x50b26a);
__int16& word_50B286 = * ((decltype(&word_50B286)) 0x50b286);
__int16& word_50B29C = * ((decltype(&word_50B29C)) 0x50b29c);
__int16& word_50B2A6 = * ((decltype(&word_50B2A6)) 0x50b2a6);
__int16& word_50B2B6 = * ((decltype(&word_50B2B6)) 0x50b2b6);
char* aAdvapi32_dll = (decltype(aAdvapi32_dll + 0)) 0x50b2c8;
__int16& word_50B2D6 = * ((decltype(&word_50B2D6)) 0x50b2d6);
__int16& word_50B2E6 = * ((decltype(&word_50B2E6)) 0x50b2e6);
__int16& word_50B302 = * ((decltype(&word_50B302)) 0x50b302);
__int16& word_50B316 = * ((decltype(&word_50B316)) 0x50b316);
__int16& word_50B332 = * ((decltype(&word_50B332)) 0x50b332);
char* aImm32_dll = (decltype(aImm32_dll + 0)) 0x50b348;
__int16& word_50B352 = * ((decltype(&word_50B352)) 0x50b352);
__int16& word_50B364 = * ((decltype(&word_50B364)) 0x50b364);
__int16& word_50B37E = * ((decltype(&word_50B37E)) 0x50b37e);
char* aVersion_dll = (decltype(aVersion_dll + 0)) 0x50b394;
__int16& word_50B3A0 = * ((decltype(&word_50B3A0)) 0x50b3a0);
__int16& word_50B3B0 = * ((decltype(&word_50B3B0)) 0x50b3b0);
__int16& word_50B3CE = * ((decltype(&word_50B3CE)) 0x50b3ce);
__int16& word_50B3E6 = * ((decltype(&word_50B3E6)) 0x50b3e6);
char* aShell32_dll = (decltype(aShell32_dll + 0)) 0x50b3f8;
char* aStorm_dll = (decltype(aStorm_dll + 0)) 0x50b404;
__int16& word_50B40E = * ((decltype(&word_50B40E)) 0x50b40e);
__int16& word_50B422 = * ((decltype(&word_50B422)) 0x50b422);
__int16& word_50B438 = * ((decltype(&word_50B438)) 0x50b438);
__int16& word_50B44A = * ((decltype(&word_50B44A)) 0x50b44a);
__int16& word_50B458 = * ((decltype(&word_50B458)) 0x50b458);
__int16& word_50B466 = * ((decltype(&word_50B466)) 0x50b466);
__int16& word_50B47A = * ((decltype(&word_50B47A)) 0x50b47a);
__int16& word_50B488 = * ((decltype(&word_50B488)) 0x50b488);
__int16& word_50B49A = * ((decltype(&word_50B49A)) 0x50b49a);
__int16& word_50B4AE = * ((decltype(&word_50B4AE)) 0x50b4ae);
__int16& word_50B4BC = * ((decltype(&word_50B4BC)) 0x50b4bc);
__int16& word_50B4C8 = * ((decltype(&word_50B4C8)) 0x50b4c8);
__int16& word_50B4D4 = * ((decltype(&word_50B4D4)) 0x50b4d4);
__int16& word_50B4EE = * ((decltype(&word_50B4EE)) 0x50b4ee);
__int16& word_50B4FA = * ((decltype(&word_50B4FA)) 0x50b4fa);
__int16& word_50B50A = * ((decltype(&word_50B50A)) 0x50b50a);
__int16& word_50B51A = * ((decltype(&word_50B51A)) 0x50b51a);
void (__cdecl __noreturn *&off_50C4F0)(UINT uExitCode) = *((decltype(&off_50C4F0)) 0x50c4f0);
int& dword_50C4F4 = * ((decltype(&dword_50C4F4)) 0x50c4f4);
int* dword_50C4F8 = (decltype(dword_50C4F8 + 0)) 0x50c4f8;
char* off_50C4FC = (decltype(off_50C4FC + 0)) 0x50c4fc;
int& dword_50C608 = * ((decltype(&dword_50C608)) 0x50c608);
int& dword_50C60C = * ((decltype(&dword_50C60C)) 0x50c60c);
size_t& dword_50C610 = * ((decltype(&dword_50C610)) 0x50c610);
int& dword_50C614 = * ((decltype(&dword_50C614)) 0x50c614);
_DWORD& dword_50C63C = * ((decltype(&dword_50C63C)) 0x50c63c);
LPCRITICAL_SECTION& lpCriticalSection = * ((decltype(&lpCriticalSection)) 0x50c650);
int& dword_50C654 = * ((decltype(&dword_50C654)) 0x50c654);
int& dword_50C770 = * ((decltype(&dword_50C770)) 0x50c770);
char& byte_50C778 = * ((decltype(&byte_50C778)) 0x50c778);
int& dword_50C780 = * ((decltype(&dword_50C780)) 0x50c780);
char* aVyv = (decltype(aVyv + 0)) 0x50c784;
char* aJ = (decltype(aJ + 0)) 0x50c790;
char* aBe = (decltype(aBe + 0)) 0x50c798;
void *& off_50C8CC = * ((decltype(&off_50C8CC)) 0x50c8cc);
int& dword_50CA18 = * ((decltype(&dword_50CA18)) 0x50ca18);
int& dword_50CA1C = * ((decltype(&dword_50CA1C)) 0x50ca1c);
wchar_t *& off_50CB80 = * ((decltype(&off_50CB80)) 0x50cb80);
void *& off_50CB84 = * ((decltype(&off_50CB84)) 0x50cb84);
void *& off_50CC54 = * ((decltype(&off_50CC54)) 0x50cc54);
void *& off_50CC58 = * ((decltype(&off_50CC58)) 0x50cc58);
void *& off_50CC5C = * ((decltype(&off_50CC5C)) 0x50cc5c);
void *& off_50CC60 = * ((decltype(&off_50CC60)) 0x50cc60);
void *& off_50CC64 = * ((decltype(&off_50CC64)) 0x50cc64);
void *& off_50CC68 = * ((decltype(&off_50CC68)) 0x50cc68);
void *& off_50CC6C = * ((decltype(&off_50CC6C)) 0x50cc6c);
void *& off_50CC70 = * ((decltype(&off_50CC70)) 0x50cc70);
void *& off_50CC74 = * ((decltype(&off_50CC74)) 0x50cc74);
void *& off_50CC78 = * ((decltype(&off_50CC78)) 0x50cc78);
void **& off_50CC84 = * ((decltype(&off_50CC84)) 0x50cc84);
char& byte_50CC94 = * ((decltype(&byte_50CC94)) 0x50cc94);
int& dword_50CCA0 = * ((decltype(&dword_50CCA0)) 0x50cca0);
int& dword_50CCA4 = * ((decltype(&dword_50CCA4)) 0x50cca4);
int& dword_50CCA8 = * ((decltype(&dword_50CCA8)) 0x50cca8);
void *& off_50CCB0 = * ((decltype(&off_50CCB0)) 0x50ccb0);
void *& off_50CCF0 = * ((decltype(&off_50CCF0)) 0x50ccf0);
LPSTR& lpMultiByteStr = * ((decltype(&lpMultiByteStr)) 0x50cd30);
LPSTR& off_50CD34 = * ((decltype(&off_50CD34)) 0x50cd34);
int& dword_50CD38 = * ((decltype(&dword_50CD38)) 0x50cd38);
int& dword_50CD3C = * ((decltype(&dword_50CD3C)) 0x50cd3c);
int& dword_50CD40 = * ((decltype(&dword_50CD40)) 0x50cd40);
int& dword_50CD44 = * ((decltype(&dword_50CD44)) 0x50cd44);
int& dword_50CD48 = * ((decltype(&dword_50CD48)) 0x50cd48);
int& dword_50CD4C = * ((decltype(&dword_50CD4C)) 0x50cd4c);
int& dword_50CD50 = * ((decltype(&dword_50CD50)) 0x50cd50);
int& dword_50CD80 = * ((decltype(&dword_50CD80)) 0x50cd80);
int& dword_50CD84 = * ((decltype(&dword_50CD84)) 0x50cd84);
u8* byte_50CDC1 = (decltype(byte_50CDC1 + 0)) 0x50cdc1;
int& dword_50CEC1 = * ((decltype(&dword_50CEC1)) 0x50cec1);
int& dword_50CEC5 = * ((decltype(&dword_50CEC5)) 0x50cec5);
int& dword_50CEC9 = * ((decltype(&dword_50CEC9)) 0x50cec9);
int& dword_50CECD = * ((decltype(&dword_50CECD)) 0x50cecd);
int& dword_50CED1 = * ((decltype(&dword_50CED1)) 0x50ced1);
int& dword_50CED5 = * ((decltype(&dword_50CED5)) 0x50ced5);
int& dword_50CED9 = * ((decltype(&dword_50CED9)) 0x50ced9);
char& byte_50CEDD = * ((decltype(&byte_50CEDD)) 0x50cedd);
int& dword_50CEDE = * ((decltype(&dword_50CEDE)) 0x50cede);
int& dword_50CEE2 = * ((decltype(&dword_50CEE2)) 0x50cee2);
int& dword_50CEF0 = * ((decltype(&dword_50CEF0)) 0x50cef0);
void *(__thiscall **&off_50CF10)(type_info *__hidden this_, char) = *((decltype(&off_50CF10)) 0x50cf10);
char* a_avtype_info = (decltype(a_avtype_info + 0)) 0x50cf18;
void *& off_50CF30 = * ((decltype(&off_50CF30)) 0x50cf30);
char *& off_50D1B0 = * ((decltype(&off_50D1B0)) 0x50d1b0);
wchar_t *& off_50D1B4 = * ((decltype(&off_50D1B4)) 0x50d1b4);
void (__noreturn ** off_50D1B8)() = (decltype(off_50D1B8 + 0)) 0x50d1b8;
void (__noreturn ** off_50D1BC)() = (decltype(off_50D1BC + 0)) 0x50d1bc;
void (__noreturn ** off_50D1C0)() = (decltype(off_50D1C0 + 0)) 0x50d1c0;
void (__noreturn ** off_50D1C4)() = (decltype(off_50D1C4 + 0)) 0x50d1c4;
void (__noreturn ** off_50D1C8)() = (decltype(off_50D1C8 + 0)) 0x50d1c8;
void (__noreturn *&off_50D1CC)() = *((decltype(&off_50D1CC)) 0x50d1cc);
int& dword_50D1D0 = * ((decltype(&dword_50D1D0)) 0x50d1d0);
int& dword_50D1D4 = * ((decltype(&dword_50D1D4)) 0x50d1d4);
int& dword_50D1D8 = * ((decltype(&dword_50D1D8)) 0x50d1d8);
int& dword_50D1DC = * ((decltype(&dword_50D1DC)) 0x50d1dc);
int& dword_50D1E0 = * ((decltype(&dword_50D1E0)) 0x50d1e0);
int& dword_50D1E4 = * ((decltype(&dword_50D1E4)) 0x50d1e4);
char* aPkwareDataCo_0 = (decltype(aPkwareDataCo_0 + 0)) 0x50d1e8;
int* CRC32_m_tab = (decltype(CRC32_m_tab + 0)) 0x50d2b0;
char& byte_50DBC8 = * ((decltype(&byte_50DBC8)) 0x50dbc8);
char& byte_50DBD8 = * ((decltype(&byte_50DBD8)) 0x50dbd8);
char& byte_50DBE8 = * ((decltype(&byte_50DBE8)) 0x50dbe8);
char& byte_50DBF8 = * ((decltype(&byte_50DBF8)) 0x50dbf8);
char* aPkwareDataComp = (decltype(aPkwareDataComp + 0)) 0x50def8;
char* aRegistration_b = (decltype(aRegistration_b + 0)) 0x50dfc0;
char ** off_50E040 = (decltype(off_50E040 + 0)) 0x50e040;
unsigned int& dword_50E058 = * ((decltype(&dword_50E058)) 0x50e058);
int& dword_50E05C = * ((decltype(&dword_50E05C)) 0x50e05c);
int& dword_50E064 = * ((decltype(&dword_50E064)) 0x50e064);
const char* aGluePalmm = (decltype(aGluePalmm + 0)) 0x50e06c;
int* dword_50E170 = (decltype(dword_50E170 + 0)) 0x50e170;
char& byte_50E174 = * ((decltype(&byte_50E174)) 0x50e174);
void *& off_50E176 = * ((decltype(&off_50E176)) 0x50e176);
int* off_5122A0 = (decltype(off_5122A0 + 0)) 0x5122a0;
int* off_5122AC = (decltype(off_5122AC + 0)) 0x5122ac;
unsigned int& dword_5122B8 = * ((decltype(&dword_5122B8)) 0x5122b8);
char* byte_5122BC = (decltype(byte_5122BC + 0)) 0x5122bc;
char* byte_5122C0 = (decltype(byte_5122C0 + 0)) 0x5122c0;
char* aInternalVersio = (decltype(aInternalVersio + 0)) 0x5122c8;
char* aRegistration_block_2 = (decltype(aRegistration_block_2 + 0)) 0x5123d0;
char* aRegistration_table = (decltype(aRegistration_table + 0)) 0x512450;
int& dword_5124D0 = * ((decltype(&dword_5124D0)) 0x5124d0);
int& FrameSkip = * ((decltype(&FrameSkip)) 0x5124d4);
GameSpeeds& GameSpeedModifiers = * ((decltype(&GameSpeedModifiers)) 0x5124d8);
UpdateFunction* update_functions = (decltype(update_functions + 0)) 0x512510;
RenderFunction* render_functions = (decltype(render_functions + 0)) 0x5125a0;
int& g_ActiveNationID = * ((decltype(&g_ActiveNationID)) 0x512678);
int& dword_51267C = * ((decltype(&dword_51267C)) 0x51267c);
int& dword_512680 = * ((decltype(&dword_512680)) 0x512680);
int& g_LocalNationID = * ((decltype(&g_LocalNationID)) 0x512684);
int& g_LocalHumanID = * ((decltype(&g_LocalHumanID)) 0x512688);
int& playerid = * ((decltype(&playerid)) 0x51268c);
char ** cinematics = (decltype(cinematics + 0)) 0x512690;
char* byte_512700 = (decltype(byte_512700 + 0)) 0x512700;
char ** off_512708 = (decltype(off_512708 + 0)) 0x512708;
__int16& word_51275C = * ((decltype(&word_51275C)) 0x51275c);
__int16* word_512768 = (decltype(word_512768 + 0)) 0x512768;
__int16& word_51276C = * ((decltype(&word_51276C)) 0x51276c);
__int16& word_512770 = * ((decltype(&word_512770)) 0x512770);
__int16& word_512774 = * ((decltype(&word_512774)) 0x512774);
UnknownTilesetRelated1& stru_512778 = * ((decltype(&stru_512778)) 0x512778);
UnknownTilesetRelated1& stru_51279C = * ((decltype(&stru_51279C)) 0x51279c);
UnknownTilesetRelated1& stru_5127B8 = * ((decltype(&stru_5127B8)) 0x5127b8);
UnknownTilesetRelated1 ** off_5127DC = (decltype(off_5127DC + 0)) 0x5127dc;
ActionPointer* ActionTable = (decltype(ActionTable + 0)) 0x512800;
int& dword_5128F0 = * ((decltype(&dword_5128F0)) 0x5128f0);
ColorShiftData* colorShift = (decltype(colorShift + 0)) 0x5128f8;
char ** TileSetNames = (decltype(TileSetNames + 0)) 0x512998;
int& value = * ((decltype(&value)) 0x5129b8);
int* aTenbg = (decltype(aTenbg + 0)) 0x5129bc;
char* aMdomd = (decltype(aMdomd + 0)) 0x5129c4;
char* aNxpif = (decltype(aNxpif + 0)) 0x5129cc;
char* aNpdu = (decltype(aNpdu + 0)) 0x5129d4;
char* aLbcse = (decltype(aLbcse + 0)) 0x5129dc;
swishTimer& stru_512A00 = * ((decltype(&stru_512A00)) 0x512a00);
swishTimer* stru_512A14 = (decltype(stru_512A14 + 0)) 0x512a14;
swishTimer& stru_512A34 = * ((decltype(&stru_512A34)) 0x512a34);
swishTimer& stru_512A48 = * ((decltype(&stru_512A48)) 0x512a48);
swishTimer* stru_512A54 = (decltype(stru_512A54 + 0)) 0x512a54;
swishTimer* stru_512A70 = (decltype(stru_512A70 + 0)) 0x512a70;
swishTimer& stru_512A8C = * ((decltype(&stru_512A8C)) 0x512a8c);
char ** off_512A98 = (decltype(off_512A98 + 0)) 0x512a98;
int* dword_512AB0 = (decltype(dword_512AB0 + 0)) 0x512ab0;
int* dword_512AC8 = (decltype(dword_512AC8 + 0)) 0x512ac8;
int* dword_512AE0 = (decltype(dword_512AE0 + 0)) 0x512ae0;
swishTimer* gluCmpgnSwishController = (decltype(gluCmpgnSwishController + 0)) 0x512b10;
char* aRegistration_block = (decltype(aRegistration_block + 0)) 0x512b18;
__int16& word_512B98 = * ((decltype(&word_512B98)) 0x512b98);
DatLoad* mapdataDat = (decltype(mapdataDat + 0)) 0x512ba0;
int* dword_512BB8 = (decltype(dword_512BB8 + 0)) 0x512bb8;
char* byte_512BBC = (decltype(byte_512BBC + 0)) 0x512bbc;
char* byte_512BBD = (decltype(byte_512BBD + 0)) 0x512bbd;
char* byte_512BBE = (decltype(byte_512BBE + 0)) 0x512bbe;
char* aRegistration_block_1 = (decltype(aRegistration_block_1 + 0)) 0x512c80;
RECT& stru_512D00 = * ((decltype(&stru_512D00)) 0x512d00);
int* dword_512D20 = (decltype(dword_512D20 + 0)) 0x512d20;
POINT& AngleDistance = * ((decltype(&AngleDistance)) 0x512d28);
int* tangent_table = (decltype(tangent_table + 0)) 0x513528;
int& off_513628 = * ((decltype(&off_513628)) 0x513628);
__int16* word_513634 = (decltype(word_513634 + 0)) 0x513634;
int* dword_513650 = (decltype(dword_513650 + 0)) 0x513650;
int* dword_513654 = (decltype(dword_513654 + 0)) 0x513654;
int& dword_5136C8 = * ((decltype(&dword_5136C8)) 0x5136c8);
RECT& stru_5136CC = * ((decltype(&stru_5136CC)) 0x5136cc);
DatLoad* upgradesDat = (decltype(upgradesDat + 0)) 0x5136e0;
DatLoad* portdataDat = (decltype(portdataDat + 0)) 0x513780;
DWORD& ColorCycle = * ((decltype(&ColorCycle)) 0x5137d4);
DatLoad* techdataDat = (decltype(techdataDat + 0)) 0x5137d8;
DatLoad* weaponsDat = (decltype(weaponsDat + 0)) 0x513868;
char* aRegistration_block_0 = (decltype(aRegistration_block_0 + 0)) 0x513998;
SightStruct* line_of_sight = (decltype(line_of_sight + 0)) 0x513a18;
ScrollSpeeds& scrollSpeeds = * ((decltype(&scrollSpeeds)) 0x513b68);
char& byte_513B92 = * ((decltype(&byte_513B92)) 0x513b92);
__int16* unknown_campaign_related = (decltype(unknown_campaign_related + 0)) 0x513ba0;
char* byte_513C24 = (decltype(byte_513C24 + 0)) 0x513c24;
DatLoad* unitsDat = (decltype(unitsDat + 0)) 0x513c30;
DatLoad* ordersDat = (decltype(ordersDat + 0)) 0x513ec8;
DatLoad* spritesDat = (decltype(spritesDat + 0)) 0x513fb8;
DatLoad* imagesDat = (decltype(imagesDat + 0)) 0x514010;
char& byte_5140C4 = * ((decltype(&byte_5140C4)) 0x5140c4);
char& byte_5140D8 = * ((decltype(&byte_5140D8)) 0x5140d8);
char& byte_5140E8 = * ((decltype(&byte_5140E8)) 0x5140e8);
char* byte_514108 = (decltype(byte_514108 + 0)) 0x514108;
char* byte_51410C = (decltype(byte_51410C + 0)) 0x51410c;
char ** ReservedDosFilenames = (decltype(ReservedDosFilenames + 0)) 0x514110;
__int16* word_514178 = (decltype(word_514178 + 0)) 0x514178;
__int16* word_51417A = (decltype(word_51417A + 0)) 0x51417a;
__int16* word_5145C0 = (decltype(word_5145C0 + 0)) 0x5145c0;
__int16* word_5145C2 = (decltype(word_5145C2 + 0)) 0x5145c2;
__int16* word_514908 = (decltype(word_514908 + 0)) 0x514908;
__int16* word_51490A = (decltype(word_51490A + 0)) 0x51490a;
__int16* word_514A48 = (decltype(word_514A48 + 0)) 0x514a48;
__int16* word_514A4A = (decltype(word_514A4A + 0)) 0x514a4a;
__int16* word_514CF8 = (decltype(word_514CF8 + 0)) 0x514cf8;
__int16* word_514CFA = (decltype(word_514CFA + 0)) 0x514cfa;
__int16* word_51521C = (decltype(word_51521C + 0)) 0x51521c;
DWORD& UnitPortraits = * ((decltype(&UnitPortraits)) 0x515224);
char* byte_515228 = (decltype(byte_515228 + 0)) 0x515228;
char* byte_515280 = (decltype(byte_515280 + 0)) 0x515280;
char* byte_515281 = (decltype(byte_515281 + 0)) 0x515281;
char* byte_515290 = (decltype(byte_515290 + 0)) 0x515290;
char* byte_515291 = (decltype(byte_515291 + 0)) 0x515291;
char* byte_515292 = (decltype(byte_515292 + 0)) 0x515292;
char* byte_515293 = (decltype(byte_515293 + 0)) 0x515293;
void *& off_5153E8 = * ((decltype(&off_5153E8)) 0x5153e8);
int& dword_5153F8 = * ((decltype(&dword_5153F8)) 0x5153f8);
int (__stdcall *&off_5153FC)(int, int, int) = *((decltype(&off_5153FC)) 0x5153fc);
int* dword_515418 = (decltype(dword_515418 + 0)) 0x515418;
int* dword_51541C = (decltype(dword_51541C + 0)) 0x51541c;
DatLoad* sfxdataDat = (decltype(sfxdataDat + 0)) 0x515498;
char* aProfileSex_0 = (decltype(aProfileSex_0 + 0)) 0x515688;
char* aProfileAge_0 = (decltype(aProfileAge_0 + 0)) 0x515694;
char* aProfileLocat_0 = (decltype(aProfileLocat_0 + 0)) 0x5156a0;
char* aProfileDescr_0 = (decltype(aProfileDescr_0 + 0)) 0x5156b1;
char* aRecordStar0W_0 = (decltype(aRecordStar0W_0 + 0)) 0x5156c5;
char* aRecordStar0L_1 = (decltype(aRecordStar0L_1 + 0)) 0x5156d8;
char* aRecordStar0D_0 = (decltype(aRecordStar0D_0 + 0)) 0x5156ed;
char* aRecordStar0L_2 = (decltype(aRecordStar0L_2 + 0)) 0x515707;
char* aRecordStar0L_3 = (decltype(aRecordStar0L_3 + 0)) 0x51571f;
char* aRecordStar1W_0 = (decltype(aRecordStar1W_0 + 0)) 0x51573e;
char* aRecordStar1L_1 = (decltype(aRecordStar1L_1 + 0)) 0x515751;
char* aRecordStar1D_0 = (decltype(aRecordStar1D_0 + 0)) 0x515766;
char* aRecordStar1R_0 = (decltype(aRecordStar1R_0 + 0)) 0x515780;
char* aRecordStar1H_1 = (decltype(aRecordStar1H_1 + 0)) 0x515795;
char* aDynkeyStar1R_0 = (decltype(aDynkeyStar1R_0 + 0)) 0x5157af;
char* aRecordStar1H_2 = (decltype(aRecordStar1H_2 + 0)) 0x5157c2;
char* aRecordStar1L_2 = (decltype(aRecordStar1L_2 + 0)) 0x5157da;
char* aRecordStar1L_3 = (decltype(aRecordStar1L_3 + 0)) 0x5157f2;
char* aProfileSex = (decltype(aProfileSex + 0)) 0x515818;
char* aProfileAge_1 = (decltype(aProfileAge_1 + 0)) 0x515824;
char* aProfileLocat_1 = (decltype(aProfileLocat_1 + 0)) 0x515830;
char* aProfileDescr_1 = (decltype(aProfileDescr_1 + 0)) 0x515841;
char* aRecordSexp0W_0 = (decltype(aRecordSexp0W_0 + 0)) 0x515855;
char* aRecordSexp0L_1 = (decltype(aRecordSexp0L_1 + 0)) 0x515868;
char* aRecordSexp0D_0 = (decltype(aRecordSexp0D_0 + 0)) 0x51587d;
char* aRecordSexp0L_2 = (decltype(aRecordSexp0L_2 + 0)) 0x515897;
char* aRecordSexp0L_3 = (decltype(aRecordSexp0L_3 + 0)) 0x5158af;
char* aRecordSexp1W_0 = (decltype(aRecordSexp1W_0 + 0)) 0x5158ce;
char* aRecordSexp1L_1 = (decltype(aRecordSexp1L_1 + 0)) 0x5158e1;
char* aRecordSexp1D_0 = (decltype(aRecordSexp1D_0 + 0)) 0x5158f6;
char* aRecordSexp1R_0 = (decltype(aRecordSexp1R_0 + 0)) 0x515910;
char* aRecordSexp1H_1 = (decltype(aRecordSexp1H_1 + 0)) 0x515925;
char* aDynkeySexp1R_0 = (decltype(aDynkeySexp1R_0 + 0)) 0x51593f;
char* aRecordSexp1H_2 = (decltype(aRecordSexp1H_2 + 0)) 0x515952;
char* aRecordSexp1L_2 = (decltype(aRecordSexp1L_2 + 0)) 0x51596a;
char* aRecordSexp1L_3 = (decltype(aRecordSexp1L_3 + 0)) 0x515982;
int& dword_5159A4 = * ((decltype(&dword_5159A4)) 0x5159a4);
char ** off_5159A8 = (decltype(off_5159A8 + 0)) 0x5159a8;
char* aOk_dialog = (decltype(aOk_dialog + 0)) 0x5159b8;
char* aBigok_dialog = (decltype(aBigok_dialog + 0)) 0x5159d8;
char* aOkcancel_dialo = (decltype(aOkcancel_dialo + 0)) 0x5159f8;
char* aBigokcancel_dialog = (decltype(aBigokcancel_dialog + 0)) 0x515a18;
DatLoad* flingyDat = (decltype(flingyDat + 0)) 0x515a38;
int (** off_515A98)() = (decltype(off_515A98 + 0)) 0x515a98;
char* byte_515AF8 = (decltype(byte_515AF8 + 0)) 0x515af8;
char* byte_515B08 = (decltype(byte_515B08 + 0)) 0x515b08;
__int16* word_515B18 = (decltype(word_515B18 + 0)) 0x515b18;
__int16* word_515B1A = (decltype(word_515B1A + 0)) 0x515b1a;
__int16* word_515B38 = (decltype(word_515B38 + 0)) 0x515b38;
__int16* word_515B3A = (decltype(word_515B3A + 0)) 0x515b3a;
__int16* word_515B58 = (decltype(word_515B58 + 0)) 0x515b58;
char* byte_515B60 = (decltype(byte_515B60 + 0)) 0x515b60;
char* byte_515B61 = (decltype(byte_515B61 + 0)) 0x515b61;
char* byte_515B68 = (decltype(byte_515B68 + 0)) 0x515b68;
char* byte_515B69 = (decltype(byte_515B69 + 0)) 0x515b69;
int* dword_515B88 = (decltype(dword_515B88 + 0)) 0x515b88;
void *& off_5172F0 = * ((decltype(&off_5172F0)) 0x5172f0);
void *& off_517358 = * ((decltype(&off_517358)) 0x517358);
void *& off_5173D0 = * ((decltype(&off_5173D0)) 0x5173d0);
void *& off_517998 = * ((decltype(&off_517998)) 0x517998);
void *& off_5187EC = * ((decltype(&off_5187EC)) 0x5187ec);
struct_4* stru_5187F0 = (decltype(stru_5187F0 + 0)) 0x5187f0;
struct_3* stru_5193A8 = (decltype(stru_5193A8 + 0)) 0x5193a8;
char ** off_519F40 = (decltype(off_519F40 + 0)) 0x519f40;
__int16* word_519F5C = (decltype(word_519F5C + 0)) 0x519f5c;
__int16& word_519F64 = * ((decltype(&word_519F64)) 0x519f64);
int *& off_519F7C = * ((decltype(&off_519F7C)) 0x519f7c);
char& byte_51A0E8 = * ((decltype(&byte_51A0E8)) 0x51a0e8);
char& byte_51A0E9 = * ((decltype(&byte_51A0E9)) 0x51a0e9);
DWORD& Gamma = * ((decltype(&Gamma)) 0x51a158);
RECT& ScrLimit = * ((decltype(&ScrLimit)) 0x51a15c);
RECT& ScrSize = * ((decltype(&ScrSize)) 0x51a16c);
char* byte_51A17C = (decltype(byte_51A17C + 0)) 0x51a17c;
int& dword_51A18C = * ((decltype(&dword_51A18C)) 0x51a18c);
int& dword_51A190 = * ((decltype(&dword_51A190)) 0x51a190);
int& dword_51A194 = * ((decltype(&dword_51A194)) 0x51a194);
__int16* word_51A198 = (decltype(word_51A198 + 0)) 0x51a198;
__int16& word_51A1A0 = * ((decltype(&word_51A1A0)) 0x51a1a0);
__int16& word_51A1A2 = * ((decltype(&word_51A1A2)) 0x51a1a2);
int& dword_51A1F0 = * ((decltype(&dword_51A1F0)) 0x51a1f0);
void *& off_51A1F4 = * ((decltype(&off_51A1F4)) 0x51a1f4);
int& dword_51A1F8 = * ((decltype(&dword_51A1F8)) 0x51a1f8);
int& dword_51A1FC = * ((decltype(&dword_51A1FC)) 0x51a1fc);
void *& off_51A200 = * ((decltype(&off_51A200)) 0x51a200);
int& dword_51A204 = * ((decltype(&dword_51A204)) 0x51a204);
int& dword_51A208 = * ((decltype(&dword_51A208)) 0x51a208);
void *& off_51A20C = * ((decltype(&off_51A20C)) 0x51a20c);
int& dword_51A210 = * ((decltype(&dword_51A210)) 0x51a210);
int& dword_51A214 = * ((decltype(&dword_51A214)) 0x51a214);
void *& off_51A218 = * ((decltype(&off_51A218)) 0x51a218);
int& dword_51A21C = * ((decltype(&dword_51A21C)) 0x51a21c);
void *& off_51A224 = * ((decltype(&off_51A224)) 0x51a224);
int& dword_51A228 = * ((decltype(&dword_51A228)) 0x51a228);
void *& off_51A230 = * ((decltype(&off_51A230)) 0x51a230);
void *& dword_51A234 = * ((decltype(&dword_51A234)) 0x51a234);
int& dword_51A238 = * ((decltype(&dword_51A238)) 0x51a238);
void *& off_51A23C = * ((decltype(&off_51A23C)) 0x51a23c);
int& dword_51A240 = * ((decltype(&dword_51A240)) 0x51a240);
void *& off_51A248 = * ((decltype(&off_51A248)) 0x51a248);
int& dword_51A24C = * ((decltype(&dword_51A24C)) 0x51a24c);
int& dword_51A250 = * ((decltype(&dword_51A250)) 0x51a250);
void *& off_51A254 = * ((decltype(&off_51A254)) 0x51a254);
int& dword_51A258 = * ((decltype(&dword_51A258)) 0x51a258);
void *& off_51A260 = * ((decltype(&off_51A260)) 0x51a260);
int& dword_51A264 = * ((decltype(&dword_51A264)) 0x51a264);
void *& off_51A26C = * ((decltype(&off_51A26C)) 0x51a26c);
int& dword_51A270 = * ((decltype(&dword_51A270)) 0x51a270);
int& MapListVector = * ((decltype(&MapListVector)) 0x51a274);
void *& off_51A278 = * ((decltype(&off_51A278)) 0x51a278);
MapRelatedUnknown *& dword_51A27C = * ((decltype(&dword_51A27C)) 0x51a27c);
TriggerList* TriggerVectors = (decltype(TriggerVectors + 0)) 0x51a280;
int& dword_51A2E0 = * ((decltype(&dword_51A2E0)) 0x51a2e0);
void *& off_51A2E4 = * ((decltype(&off_51A2E4)) 0x51a2e4);
int& dword_51A2E8 = * ((decltype(&dword_51A2E8)) 0x51a2e8);
int& dword_51A2EC = * ((decltype(&dword_51A2EC)) 0x51a2ec);
void *& off_51A2F0 = * ((decltype(&off_51A2F0)) 0x51a2f0);
int& dword_51A2F4 = * ((decltype(&dword_51A2F4)) 0x51a2f4);
int& dword_51A2F8 = * ((decltype(&dword_51A2F8)) 0x51a2f8);
void *& off_51A2FC = * ((decltype(&off_51A2FC)) 0x51a2fc);
int& dword_51A300 = * ((decltype(&dword_51A300)) 0x51a300);
int& dword_51A304 = * ((decltype(&dword_51A304)) 0x51a304);
void *& off_51A308 = * ((decltype(&off_51A308)) 0x51a308);
void *& dword_51A30C = * ((decltype(&dword_51A30C)) 0x51a30c);
TriggerList& stru_51A310 = * ((decltype(&stru_51A310)) 0x51a310);
int& dword_51A31C = * ((decltype(&dword_51A31C)) 0x51a31c);
void *& off_51A320 = * ((decltype(&off_51A320)) 0x51a320);
int& dword_51A324 = * ((decltype(&dword_51A324)) 0x51a324);
int& dword_51A328 = * ((decltype(&dword_51A328)) 0x51a328);
void *& off_51A32C = * ((decltype(&off_51A32C)) 0x51a32c);
int& dword_51A330 = * ((decltype(&dword_51A330)) 0x51a330);
int& TransMaskVector = * ((decltype(&TransMaskVector)) 0x51a334);
void *& off_51A338 = * ((decltype(&off_51A338)) 0x51a338);
void *& dword_51A33C = * ((decltype(&dword_51A33C)) 0x51a33c);
int& dword_51A340 = * ((decltype(&dword_51A340)) 0x51a340);
void *& off_51A344 = * ((decltype(&off_51A344)) 0x51a344);
void *& dword_51A348 = * ((decltype(&dword_51A348)) 0x51a348);
int& dword_51A34C = * ((decltype(&dword_51A34C)) 0x51a34c);
void *& customList_UIDlgData = * ((decltype(&customList_UIDlgData)) 0x51a350);
int& dword_51A354 = * ((decltype(&dword_51A354)) 0x51a354);
FnInteract* off_51A358 = (decltype(off_51A358 + 0)) 0x51a358;
void *(__thiscall **&off_51A368)(type_info *__hidden this_, char) = *((decltype(&off_51A368)) 0x51a368);
char* a_au_hiddenctrl = (decltype(a_au_hiddenctrl + 0)) 0x51a370;
FnInteract* off_51A388 = (decltype(off_51A388 + 0)) 0x51a388;
void *(__thiscall **&off_51A3B8)(type_info *__hidden this_, char) = *((decltype(&off_51A3B8)) 0x51a3b8);
char* a_autgame_hdr_node = (decltype(a_autgame_hdr_node + 0)) 0x51a3c0;
void *(__thiscall **&off_51A3E4)(type_info *__hidden this_, char) = *((decltype(&off_51A3E4)) 0x51a3e4);
char* a_autsaved_game_node = (decltype(a_autsaved_game_node + 0)) 0x51a3ec;
FnInteract* off_51A404 = (decltype(off_51A404 + 0)) 0x51a404;
void *(__thiscall **&off_51A424)(type_info *__hidden this_, char) = *((decltype(&off_51A424)) 0x51a424);
char* a_austreamed = (decltype(a_austreamed + 0)) 0x51a42c;
void *(__thiscall **&off_51A440)(type_info *__hidden this_, char) = *((decltype(&off_51A440)) 0x51a440);
char* a_autprovider = (decltype(a_autprovider + 0)) 0x51a448;
void *(__thiscall **&off_51A458)(type_info *__hidden this_, char) = *((decltype(&off_51A458)) 0x51a458);
char* a_au_id = (decltype(a_au_id + 0)) 0x51a460;
FnInteract* off_51A46C = (decltype(off_51A46C + 0)) 0x51a46c;
swishTimer* gluChatSwishController = (decltype(gluChatSwishController + 0)) 0x51a490;
FnInteract* off_51A4A8 = (decltype(off_51A4A8 + 0)) 0x51a4a8;
FnInteract* off_51A5F8 = (decltype(off_51A5F8 + 0)) 0x51a5f8;
void *(__thiscall **&off_51A648)(type_info *__hidden this_, char) = *((decltype(&off_51A648)) 0x51a648);
char* a_au_gamenode = (decltype(a_au_gamenode + 0)) 0x51a650;
FnInteract* off_51A660 = (decltype(off_51A660 + 0)) 0x51a660;
FnInteract* off_51A69C = (decltype(off_51A69C + 0)) 0x51a69c;
FnInteract* off_51A6B8 = (decltype(off_51A6B8 + 0)) 0x51a6b8;
FnInteract* off_51A6CC = (decltype(off_51A6CC + 0)) 0x51a6cc;
FnInteract* off_51A6DC = (decltype(off_51A6DC + 0)) 0x51a6dc;
FnInteract* off_51A6E4 = (decltype(off_51A6E4 + 0)) 0x51a6e4;
FnInteract* off_51A6F0 = (decltype(off_51A6F0 + 0)) 0x51a6f0;
char* separators2_maybe = (decltype(separators2_maybe + 0)) 0x51a70c;
void *(__thiscall **&off_51A71C)(type_info *__hidden this_, char) = *((decltype(&off_51A71C)) 0x51a71c);
char* a_au_savegame = (decltype(a_au_savegame + 0)) 0x51a724;
FnInteract* off_51A734 = (decltype(off_51A734 + 0)) 0x51a734;
FnInteract* off_51A750 = (decltype(off_51A750 + 0)) 0x51a750;
FnInteract* off_51A7A0 = (decltype(off_51A7A0 + 0)) 0x51a7a0;
FnInteract* off_51A7F0 = (decltype(off_51A7F0 + 0)) 0x51a7f0;
FnInteract* off_51A804 = (decltype(off_51A804 + 0)) 0x51a804;
FnInteract* off_51A80C = (decltype(off_51A80C + 0)) 0x51a80c;
FnInteract* off_51A818 = (decltype(off_51A818 + 0)) 0x51a818;
FnInteract* off_51A848 = (decltype(off_51A848 + 0)) 0x51a848;
FnInteract* off_51A93C = (decltype(off_51A93C + 0)) 0x51a93c;
void *(__thiscall **&off_51A968)(type_info *__hidden this_, char) = *((decltype(&off_51A968)) 0x51a968);
char* a_au_phonenumber = (decltype(a_au_phonenumber + 0)) 0x51a970;
void *(__thiscall **&off_51A984)(type_info *__hidden this_, char) = *((decltype(&off_51A984)) 0x51a984);
char* a_au_device = (decltype(a_au_device + 0)) 0x51a98c;
swishTimer* stru_51A99C = (decltype(stru_51A99C + 0)) 0x51a99c;
FnInteract* off_51A9AC = (decltype(off_51A9AC + 0)) 0x51a9ac;
char* separators_maybe = (decltype(separators_maybe + 0)) 0x51a9e8;
swishTimer* gluCustmSwishController = (decltype(gluCustmSwishController + 0)) 0x51a9f0;
FnInteract* off_51AA08 = (decltype(off_51AA08 + 0)) 0x51aa08;
int& dword_51AAA0 = * ((decltype(&dword_51AAA0)) 0x51aaa0);
int& dword_51AAA8 = * ((decltype(&dword_51AAA8)) 0x51aaa8);
void *(__thiscall **&off_51AAB0)(type_info *__hidden this_, char) = *((decltype(&off_51AAB0)) 0x51aab0);
char* a_au_drawtext = (decltype(a_au_drawtext + 0)) 0x51aab8;
void *(__thiscall **&off_51AAC8)(type_info *__hidden this_, char) = *((decltype(&off_51AAC8)) 0x51aac8);
char* a_auttemplate = (decltype(a_auttemplate + 0)) 0x51aad0;
void *(__thiscall **&off_51AAE0)(type_info *__hidden this_, char) = *((decltype(&off_51AAE0)) 0x51aae0);
char* a_aulistentry = (decltype(a_aulistentry + 0)) 0x51aae8;
FnInteract& off_51AAF8 = * ((decltype(&off_51AAF8)) 0x51aaf8);
FnInteract* off_51AAFC = (decltype(off_51AAFC + 0)) 0x51aafc;
FnInteract* off_51AB0C = (decltype(off_51AB0C + 0)) 0x51ab0c;
FnInteract* off_51AB20 = (decltype(off_51AB20 + 0)) 0x51ab20;
void *(__thiscall **&off_51AB94)(type_info *__hidden this_, char) = *((decltype(&off_51AB94)) 0x51ab94);
char* a_autriggernode = (decltype(a_autriggernode + 0)) 0x51ab9c;
FnInteract* off_51ABB0 = (decltype(off_51ABB0 + 0)) 0x51abb0;
FnInteract* off_51ABC0 = (decltype(off_51ABC0 + 0)) 0x51abc0;
void *(__thiscall **&off_51ABD4)(type_info *__hidden this_, char) = *((decltype(&off_51ABD4)) 0x51abd4);
char* a_autbnetmessage = (decltype(a_autbnetmessage + 0)) 0x51abdc;
FnInteract* a3 = (decltype(a3 + 0)) 0x51abf0;
int* dword_51ABFC = (decltype(dword_51ABFC + 0)) 0x51abfc;
void *(__thiscall **&off_51AC10)(type_info *__hidden this_, char) = *((decltype(&off_51AC10)) 0x51ac10);
char* a_autfd_session = (decltype(a_autfd_session + 0)) 0x51ac18;
void *(__thiscall **&off_51AC2C)(type_info *__hidden this_, char) = *((decltype(&off_51AC2C)) 0x51ac2c);
char* a_autuser_info = (decltype(a_autuser_info + 0)) 0x51ac34;
void *(__thiscall **&off_51AC48)(type_info *__hidden this_, char) = *((decltype(&off_51AC48)) 0x51ac48);
char* a_autban = (decltype(a_autban + 0)) 0x51ac50;
void *(__thiscall **&off_51AC5C)(type_info *__hidden this_, char) = *((decltype(&off_51AC5C)) 0x51ac5c);
char* a_autsavegame = (decltype(a_autsavegame + 0)) 0x51ac64;
FnInteract* off_51AC74 = (decltype(off_51AC74 + 0)) 0x51ac74;
FnInteract* off_51AC84 = (decltype(off_51AC84 + 0)) 0x51ac84;
FnInteract& off_51AC90 = * ((decltype(&off_51AC90)) 0x51ac90);
FnInteract& off_51AC94 = * ((decltype(&off_51AC94)) 0x51ac94);
FnInteract* off_51AC98 = (decltype(off_51AC98 + 0)) 0x51ac98;
int& dword_51ACB0 = * ((decltype(&dword_51ACB0)) 0x51acb0);
int& dword_51ACB4 = * ((decltype(&dword_51ACB4)) 0x51acb4);
int& dword_51ACB8 = * ((decltype(&dword_51ACB8)) 0x51acb8);
int& dword_51ACC0 = * ((decltype(&dword_51ACC0)) 0x51acc0);
char* aEntrextrdwhepb = (decltype(aEntrextrdwhepb + 0)) 0x51acc4;
void *(__thiscall **&off_51AD18)(type_info *__hidden this_, char) = *((decltype(&off_51AD18)) 0x51ad18);
char* a_autfd_user = (decltype(a_autfd_user + 0)) 0x51ad20;
FnInteract* off_51AD30 = (decltype(off_51AD30 + 0)) 0x51ad30;
int& dword_51AD60 = * ((decltype(&dword_51AD60)) 0x51ad60);
char *& off_51AD64 = * ((decltype(&off_51AD64)) 0x51ad64);
char& byte_51AD68 = * ((decltype(&byte_51AD68)) 0x51ad68);
int& dword_51AD90 = * ((decltype(&dword_51AD90)) 0x51ad90);
char *& off_51AD94 = * ((decltype(&off_51AD94)) 0x51ad94);
int& dword_51AD98 = * ((decltype(&dword_51AD98)) 0x51ad98);
char& byte_51ADC0 = * ((decltype(&byte_51ADC0)) 0x51adc0);
LPCSTR& lpFileName = * ((decltype(&lpFileName)) 0x51ae64);
int& dword_51AE68 = * ((decltype(&dword_51AE68)) 0x51ae68);
char *& off_51AE6C = * ((decltype(&off_51AE6C)) 0x51ae6c);
int& a4 = * ((decltype(&a4)) 0x51ae80);
int& dword_51AE84 = * ((decltype(&dword_51AE84)) 0x51ae84);
int& id = * ((decltype(&id)) 0x51ae88);
char ** off_51AE94 = (decltype(off_51AE94 + 0)) 0x51ae94;
char ** off_51AE98 = (decltype(off_51AE98 + 0)) 0x51ae98;
char ** off_51AE9C = (decltype(off_51AE9C + 0)) 0x51ae9c;
char *& off_51AEA0 = * ((decltype(&off_51AEA0)) 0x51aea0);
int& nNumber = * ((decltype(&nNumber)) 0x51aea4);
char *& off_51AEA8 = * ((decltype(&off_51AEA8)) 0x51aea8);
char* a_xxx_xxxxxxxxx = (decltype(a_xxx_xxxxxxxxx + 0)) 0x51aebc;
char* a___xxx____xxxx = (decltype(a___xxx____xxxx + 0)) 0x51aed8;
char* a____xxxxx_____ = (decltype(a____xxxxx_____ + 0)) 0x51af30;
char* a______xxxxx___ = (decltype(a______xxxxx___ + 0)) 0x51afe0;
int& dword_51B108 = * ((decltype(&dword_51B108)) 0x51b108);
int* dword_51B1E8 = (decltype(dword_51B1E8 + 0)) 0x51b1e8;
int& dword_51B260 = * ((decltype(&dword_51B260)) 0x51b260);
void *(__thiscall **&off_51B274)(type_info *__hidden this_, char) = *((decltype(&off_51B274)) 0x51b274);
HANDLE& hObject = * ((decltype(&hObject)) 0x51b290);
int& dword_51B294 = * ((decltype(&dword_51B294)) 0x51b294);
void *(__thiscall **&off_51B298)(type_info *__hidden this_, char) = *((decltype(&off_51B298)) 0x51b298);
char* a_au_bltmask = (decltype(a_au_bltmask + 0)) 0x51b2a0;
void *(__thiscall **&off_51B2B0)(type_info *__hidden this_, char) = *((decltype(&off_51B2B0)) 0x51b2b0);
char* a_au_ctrlnode = (decltype(a_au_ctrlnode + 0)) 0x51b2b8;
int& dword_51B2C8 = * ((decltype(&dword_51B2C8)) 0x51b2c8);
char& byte_51B2CC = * ((decltype(&byte_51B2CC)) 0x51b2cc);
char& byte_51B2CD = * ((decltype(&byte_51B2CD)) 0x51b2cd);
char& byte_51B2CE = * ((decltype(&byte_51B2CE)) 0x51b2ce);
char& byte_51B2CF = * ((decltype(&byte_51B2CF)) 0x51b2cf);
void *(__thiscall **&off_51B2D0)(type_info *__hidden this_, char) = *((decltype(&off_51B2D0)) 0x51b2d0);
char* a_au_dlggrp = (decltype(a_au_dlggrp + 0)) 0x51b2d8;
int& dword_51B2E8 = * ((decltype(&dword_51B2E8)) 0x51b2e8);
int& dword_51B2F0 = * ((decltype(&dword_51B2F0)) 0x51b2f0);
int& dword_51B2F4 = * ((decltype(&dword_51B2F4)) 0x51b2f4);
int& dword_51B2F8 = * ((decltype(&dword_51B2F8)) 0x51b2f8);
void *(__thiscall **&off_51B428)(type_info *__hidden this_, char) = *((decltype(&off_51B428)) 0x51b428);
char* a_auchunknode = (decltype(a_auchunknode + 0)) 0x51b430;
char* aUs = (decltype(aUs + 0)) 0x51b440;
char* aSs = (decltype(aSs + 0)) 0x51b444;
int (__cdecl *&off_51B448)(_DWORD) = *((decltype(&off_51B448)) 0x51b448);
int (** off_51B44C)() = (decltype(off_51B44C + 0)) 0x51b44c;
int (*&off_51B450)() = *((decltype(&off_51B450)) 0x51b450);
double& dbl_51B460 = * ((decltype(&dbl_51B460)) 0x51b460);
_TBYTE& tbyte_51B470 = * ((decltype(&tbyte_51B470)) 0x51b470);
_TBYTE& tbyte_51B47A = * ((decltype(&tbyte_51B47A)) 0x51b47a);
_TBYTE& tbyte_51B48E = * ((decltype(&tbyte_51B48E)) 0x51b48e);
double& dbl_51B4A2 = * ((decltype(&dbl_51B4A2)) 0x51b4a2);
_TBYTE& tbyte_51B4D0 = * ((decltype(&tbyte_51B4D0)) 0x51b4d0);
double& dbl_51B4E4 = * ((decltype(&dbl_51B4E4)) 0x51b4e4);
int (*&off_51B530)() = *((decltype(&off_51B530)) 0x51b530);
char& byte_51B540 = * ((decltype(&byte_51B540)) 0x51b540);
float& flt_51B550 = * ((decltype(&flt_51B550)) 0x51b550);
float& flt_51B554 = * ((decltype(&flt_51B554)) 0x51b554);
float& flt_51B558 = * ((decltype(&flt_51B558)) 0x51b558);
char& byte_51B55C = * ((decltype(&byte_51B55C)) 0x51b55c);
double& dbl_51B574 = * ((decltype(&dbl_51B574)) 0x51b574);
double& dbl_51B57C = * ((decltype(&dbl_51B57C)) 0x51b57c);
double& dbl_51B58C = * ((decltype(&dbl_51B58C)) 0x51b58c);
_TBYTE& tbyte_51B594 = * ((decltype(&tbyte_51B594)) 0x51b594);
void ** off_51B59E = (decltype(off_51B59E + 0)) 0x51b59e;
double& dbl_51B6A0 = * ((decltype(&dbl_51B6A0)) 0x51b6a0);
double& dbl_51B6A8 = * ((decltype(&dbl_51B6A8)) 0x51b6a8);
double& dbl_51B6B0 = * ((decltype(&dbl_51B6B0)) 0x51b6b0);
double& dbl_51B6C0 = * ((decltype(&dbl_51B6C0)) 0x51b6c0);
int& dword_51B6C8 = * ((decltype(&dword_51B6C8)) 0x51b6c8);
_TBYTE& tbyte_51B7B8 = * ((decltype(&tbyte_51B7B8)) 0x51b7b8);
_TBYTE& tbyte_51B7C4 = * ((decltype(&tbyte_51B7C4)) 0x51b7c4);
char *& dword_51BAA0 = * ((decltype(&dword_51BAA0)) 0x51baa0);
int& dword_51BAA8 = * ((decltype(&dword_51BAA8)) 0x51baa8);
int& dword_51BAAC = * ((decltype(&dword_51BAAC)) 0x51baac);
int& dword_51BAB0 = * ((decltype(&dword_51BAB0)) 0x51bab0);
int& dword_51BAB4 = * ((decltype(&dword_51BAB4)) 0x51bab4);
int& dword_51BAB8 = * ((decltype(&dword_51BAB8)) 0x51bab8);
int& dword_51BABC = * ((decltype(&dword_51BABC)) 0x51babc);
int& dword_51BAC0 = * ((decltype(&dword_51BAC0)) 0x51bac0);
int& dword_51BAC4 = * ((decltype(&dword_51BAC4)) 0x51bac4);
int& dword_51BAC8 = * ((decltype(&dword_51BAC8)) 0x51bac8);
void *& dword_51BAD0 = * ((decltype(&dword_51BAD0)) 0x51bad0);
int& dword_51BAD4 = * ((decltype(&dword_51BAD4)) 0x51bad4);
int& dword_51BAD8 = * ((decltype(&dword_51BAD8)) 0x51bad8);
int& dword_51BAE0 = * ((decltype(&dword_51BAE0)) 0x51bae0);
char& byte_51BAE8 = * ((decltype(&byte_51BAE8)) 0x51bae8);
int& dword_51BAEC = * ((decltype(&dword_51BAEC)) 0x51baec);
int& dword_51BAF0 = * ((decltype(&dword_51BAF0)) 0x51baf0);
int& dword_51BAF4 = * ((decltype(&dword_51BAF4)) 0x51baf4);
CHAR* Filename = (decltype(Filename + 0)) 0x51baf8;
char& byte_51BBFC = * ((decltype(&byte_51BBFC)) 0x51bbfc);
int& dword_51BC00 = * ((decltype(&dword_51BC00)) 0x51bc00);
int (__stdcall *&dword_51BC04)(_DWORD) = *((decltype(&dword_51BC04)) 0x51bc04);
int& dword_51BC08 = * ((decltype(&dword_51BC08)) 0x51bc08);
int (__stdcall *&dword_51BC0C)(_DWORD, _DWORD) = *((decltype(&dword_51BC0C)) 0x51bc0c);
int& dword_51BC10 = * ((decltype(&dword_51BC10)) 0x51bc10);
int (__stdcall *&dword_51BD68)(_DWORD, _DWORD, _DWORD, _DWORD) = *((decltype(&dword_51BD68)) 0x51bd68);
int (*&dword_51BD6C)(void) = *((decltype(&dword_51BD6C)) 0x51bd6c);
int (__stdcall *&dword_51BD70)(_DWORD) = *((decltype(&dword_51BD70)) 0x51bd70);
int (*&dword_51BD74)(void) = *((decltype(&dword_51BD74)) 0x51bd74);
int (__stdcall *&dword_51BD78)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD) = *((decltype(&dword_51BD78)) 0x51bd78);
int& dword_51BD7C = * ((decltype(&dword_51BD7C)) 0x51bd7c);
int& dword_51BD80 = * ((decltype(&dword_51BD80)) 0x51bd80);
int& dword_51BD90 = * ((decltype(&dword_51BD90)) 0x51bd90);
int* dword_51BD98 = (decltype(dword_51BD98 + 0)) 0x51bd98;
volatile LONG& Target = * ((decltype(&Target)) 0x51bdd8);
int (__cdecl *&dword_51BDDC)(_DWORD, _DWORD) = *((decltype(&dword_51BDDC)) 0x51bddc);
int& dword_51BDE8 = * ((decltype(&dword_51BDE8)) 0x51bde8);
UINT& dword_51BDF8 = * ((decltype(&dword_51BDF8)) 0x51bdf8);
int& dword_51BE00 = * ((decltype(&dword_51BE00)) 0x51be00);
int& dword_51BE04 = * ((decltype(&dword_51BE04)) 0x51be04);
int& dword_51BE08 = * ((decltype(&dword_51BE08)) 0x51be08);
int& dword_51BE0C = * ((decltype(&dword_51BE0C)) 0x51be0c);
int& dword_51BE14 = * ((decltype(&dword_51BE14)) 0x51be14);
int& dword_51BE18 = * ((decltype(&dword_51BE18)) 0x51be18);
struct _TIME_ZONE_INFORMATION& TimeZoneInformation = * ((decltype(&TimeZoneInformation)) 0x51be68);
int& dword_51BF14 = * ((decltype(&dword_51BF14)) 0x51bf14);
char *& dword_51BF18 = * ((decltype(&dword_51BF18)) 0x51bf18);
int& dword_51BF1C = * ((decltype(&dword_51BF1C)) 0x51bf1c);
int& dword_51BF30 = * ((decltype(&dword_51BF30)) 0x51bf30);
int& dword_51BF34 = * ((decltype(&dword_51BF34)) 0x51bf34);
int& dword_51BF38 = * ((decltype(&dword_51BF38)) 0x51bf38);
int& dword_51BF3C = * ((decltype(&dword_51BF3C)) 0x51bf3c);
int& dword_51BF40 = * ((decltype(&dword_51BF40)) 0x51bf40);
int& dword_51BF44 = * ((decltype(&dword_51BF44)) 0x51bf44);
int& dword_51BF64 = * ((decltype(&dword_51BF64)) 0x51bf64);
int& dword_51BF94 = * ((decltype(&dword_51BF94)) 0x51bf94);
int& dword_51BF98 = * ((decltype(&dword_51BF98)) 0x51bf98);
int& dword_51BF9C = * ((decltype(&dword_51BF9C)) 0x51bf9c);
int& dword_51BFA0 = * ((decltype(&dword_51BFA0)) 0x51bfa0);
int& dword_51BFA8 = * ((decltype(&dword_51BFA8)) 0x51bfa8);
HINSTANCE& hInst = * ((decltype(&hInst)) 0x51bfac);
HWND& hWndParent = * ((decltype(&hWndParent)) 0x51bfb0);
int& dword_51BFB4 = * ((decltype(&dword_51BFB4)) 0x51bfb4);
char& byte_51BFB8 = * ((decltype(&byte_51BFB8)) 0x51bfb8);
char* byte_51BFB9 = (decltype(byte_51BFB9 + 0)) 0x51bfb9;
int& dword_51BFD4 = * ((decltype(&dword_51BFD4)) 0x51bfd4);
char& byte_51BFD8 = * ((decltype(&byte_51BFD8)) 0x51bfd8);
int& dword_51BFDC = * ((decltype(&dword_51BFDC)) 0x51bfdc);
int& dword_51BFE0 = * ((decltype(&dword_51BFE0)) 0x51bfe0);
int& dword_51BFE4 = * ((decltype(&dword_51BFE4)) 0x51bfe4);
int& dword_51BFE8 = * ((decltype(&dword_51BFE8)) 0x51bfe8);
int& dword_51BFEC = * ((decltype(&dword_51BFEC)) 0x51bfec);
int& dword_51BFF0 = * ((decltype(&dword_51BFF0)) 0x51bff0);
int& dword_51BFF4 = * ((decltype(&dword_51BFF4)) 0x51bff4);
int& Ophelia = * ((decltype(&Ophelia)) 0x51bff8);
Bitmap* stru_51C000 = (decltype(stru_51C000 + 0)) 0x51c000;
void *& gluAllTblData = * ((decltype(&gluAllTblData)) 0x51c408);
void *& dword_51C40C = * ((decltype(&dword_51C40C)) 0x51c40c);
MapData4& NextCampaign = * ((decltype(&NextCampaign)) 0x51c410);
int& dword_51C414 = * ((decltype(&dword_51C414)) 0x51c414);
dialog *& dword_51C418 = * ((decltype(&dword_51C418)) 0x51c418);
int& dword_51C428 = * ((decltype(&dword_51C428)) 0x51c428);
__int16& word_51C42C = * ((decltype(&word_51C42C)) 0x51c42c);
int* dword_51C430 = (decltype(dword_51C430 + 0)) 0x51c430;
__int16* word_51C480 = (decltype(word_51C480 + 0)) 0x51c480;
int& dword_51C4A8 = * ((decltype(&dword_51C4A8)) 0x51c4a8);
int& dword_51C4AC = * ((decltype(&dword_51C4AC)) 0x51c4ac);
dialog *& dword_51C4B0 = * ((decltype(&dword_51C4B0)) 0x51c4b0);
void *& dword_51C4B4 = * ((decltype(&dword_51C4B4)) 0x51c4b4);
int& dword_51C4B8 = * ((decltype(&dword_51C4B8)) 0x51c4b8);
int& dword_51C4BC = * ((decltype(&dword_51C4BC)) 0x51c4bc);
CHAR* byte_51C4C0 = (decltype(byte_51C4C0 + 0)) 0x51c4c0;
int* dword_51C5C8 = (decltype(dword_51C5C8 + 0)) 0x51c5c8;
int& dword_51C608 = * ((decltype(&dword_51C608)) 0x51c608);
void *& dword_51C60C = * ((decltype(&dword_51C60C)) 0x51c60c);
int* dword_51C610 = (decltype(dword_51C610 + 0)) 0x51c610;
int& dword_51C618 = * ((decltype(&dword_51C618)) 0x51c618);
int& dword_51C630 = * ((decltype(&dword_51C630)) 0x51c630);
int& dword_51C648 = * ((decltype(&dword_51C648)) 0x51c648);
int& dword_51C64C = * ((decltype(&dword_51C64C)) 0x51c64c);
int& dword_51C654 = * ((decltype(&dword_51C654)) 0x51c654);
int& dword_51C65C = * ((decltype(&dword_51C65C)) 0x51c65c);
int& dword_51C660 = * ((decltype(&dword_51C660)) 0x51c660);
int& dword_51C678 = * ((decltype(&dword_51C678)) 0x51c678);
int& dword_51C67C = * ((decltype(&dword_51C67C)) 0x51c67c);
int& dword_51C680 = * ((decltype(&dword_51C680)) 0x51c680);
int& dword_51C68C = * ((decltype(&dword_51C68C)) 0x51c68c);
int& dword_51C690 = * ((decltype(&dword_51C690)) 0x51c690);
int& dword_51C694 = * ((decltype(&dword_51C694)) 0x51c694);
int& dword_51C6AC = * ((decltype(&dword_51C6AC)) 0x51c6ac);
int& dword_51C6B0 = * ((decltype(&dword_51C6B0)) 0x51c6b0);
int& dword_51C6C0 = * ((decltype(&dword_51C6C0)) 0x51c6c0);
int& dword_51C6C4 = * ((decltype(&dword_51C6C4)) 0x51c6c4);
int& dword_51C6C8 = * ((decltype(&dword_51C6C8)) 0x51c6c8);
int& dword_51C6D8 = * ((decltype(&dword_51C6D8)) 0x51c6d8);
int& dword_51C6E8 = * ((decltype(&dword_51C6E8)) 0x51c6e8);
int& dword_51C6EC = * ((decltype(&dword_51C6EC)) 0x51c6ec);
int& dword_51C6F4 = * ((decltype(&dword_51C6F4)) 0x51c6f4);
int& dword_51C850 = * ((decltype(&dword_51C850)) 0x51c850);
unsigned int& dword_51CA10 = * ((decltype(&dword_51CA10)) 0x51ca10);
int& LastRandomNumber = * ((decltype(&LastRandomNumber)) 0x51ca14);
int& dword_51CA18 = * ((decltype(&dword_51CA18)) 0x51ca18);
int& dword_51CA1C = * ((decltype(&dword_51CA1C)) 0x51ca1c);
char* byte_51CA20 = (decltype(byte_51CA20 + 0)) 0x51ca20;
HANDLE& dword_51CC28 = * ((decltype(&dword_51CC28)) 0x51cc28);
HANDLE& dword_51CC2C = * ((decltype(&dword_51CC2C)) 0x51cc2c);
void *& dword_51CC30 = * ((decltype(&dword_51CC30)) 0x51cc30);
HANDLE& hMpq = * ((decltype(&hMpq)) 0x51cc34);
HANDLE& dword_51CC38 = * ((decltype(&dword_51CC38)) 0x51cc38);
char* tstrFilename = (decltype(tstrFilename + 0)) 0x51cc40;
int& dword_51CD44 = * ((decltype(&dword_51CD44)) 0x51cd44);
char *& dword_51CD48 = * ((decltype(&dword_51CD48)) 0x51cd48);
char *& dword_51CD4C = * ((decltype(&dword_51CD4C)) 0x51cd4c);
char *& dword_51CD50 = * ((decltype(&dword_51CD50)) 0x51cd50);
char *& dword_51CD54 = * ((decltype(&dword_51CD54)) 0x51cd54);
char* archivename = (decltype(archivename + 0)) 0x51cd58;
int& dword_51CE5C = * ((decltype(&dword_51CE5C)) 0x51ce5c);
void *& dword_51CE60 = * ((decltype(&dword_51CE60)) 0x51ce60);
int& dword_51CE64 = * ((decltype(&dword_51CE64)) 0x51ce64);
void *& dword_51CE68 = * ((decltype(&dword_51CE68)) 0x51ce68);
int& IsRunning = * ((decltype(&IsRunning)) 0x51ce6c);
int* LatencyFrames = (decltype(LatencyFrames + 0)) 0x51ce70;
int* dword_51CE8C = (decltype(dword_51CE8C + 0)) 0x51ce8c;
GamePosition& gwNextGameMode = * ((decltype(&gwNextGameMode)) 0x51ce90);
int& dword_51CE94 = * ((decltype(&dword_51CE94)) 0x51ce94);
int& dword_51CE98 = * ((decltype(&dword_51CE98)) 0x51ce98);
char& byte_51CE9C = * ((decltype(&byte_51CE9C)) 0x51ce9c);
char& byte_51CE9D = * ((decltype(&byte_51CE9D)) 0x51ce9d);
int& FramesUntilNextTurn = * ((decltype(&FramesUntilNextTurn)) 0x51cea0);
int& bytes_read = * ((decltype(&bytes_read)) 0x51cea4);
char *& dword_51CEA8 = * ((decltype(&dword_51CEA8)) 0x51cea8);
char& byte_51CEAC = * ((decltype(&byte_51CEAC)) 0x51ceac);
dialog *& dword_51CEB0 = * ((decltype(&dword_51CEB0)) 0x51ceb0);
int& dword_51CEB4 = * ((decltype(&dword_51CEB4)) 0x51ceb4);
int& dword_51CEB8 = * ((decltype(&dword_51CEB8)) 0x51ceb8);
char *& dword_51CEBC = * ((decltype(&dword_51CEBC)) 0x51cebc);
int& dword_51CEC0 = * ((decltype(&dword_51CEC0)) 0x51cec0);
int& dword_51CEC4 = * ((decltype(&dword_51CEC4)) 0x51cec4);
char& byte_51CEC8 = * ((decltype(&byte_51CEC8)) 0x51cec8);
int* dword_51CECC = (decltype(dword_51CECC + 0)) 0x51cecc;
grpHead ** ImageGrpGraphics = (decltype(ImageGrpGraphics + 0)) 0x51ced0;
int& dword_51D218 = * ((decltype(&dword_51D218)) 0x51d218);
int* dword_51D794 = (decltype(dword_51D794 + 0)) 0x51d794;
int& dword_51D7F0 = * ((decltype(&dword_51D7F0)) 0x51d7f0);
CImage* stru_51DE70 = (decltype(stru_51DE70 + 0)) 0x51de70;
CImage *& dword_51EE70 = * ((decltype(&dword_51EE70)) 0x51ee70);
grpHead* stru_51EE78 = (decltype(stru_51EE78 + 0)) 0x51ee78;
CImage *& dword_51F1F8 = * ((decltype(&dword_51F1F8)) 0x51f1f8);
ImagesDatExtraOverlayLO_Files& lo_files = * ((decltype(&lo_files)) 0x51f2a8);
CImage *& dword_5240B4 = * ((decltype(&dword_5240B4)) 0x5240b4);
int* dword_5240B8 = (decltype(dword_5240B8 + 0)) 0x5240b8;
int* dword_5240BC = (decltype(dword_5240BC + 0)) 0x5240bc;
char* byte_5240D0 = (decltype(byte_5240D0 + 0)) 0x5240d0;
CImage* stru_5244B8 = (decltype(stru_5244B8 + 0)) 0x5244b8;
CImage *& dword_5254B8 = * ((decltype(&dword_5254B8)) 0x5254b8);
CImage *& dword_52E4C0 = * ((decltype(&dword_52E4C0)) 0x52e4c0);
CImage *& dword_52E4C4 = * ((decltype(&dword_52E4C4)) 0x52e4c4);
char* tileset_shift = (decltype(tileset_shift + 0)) 0x52e4c8;
LO_Overlays& ShieldOverlays = * ((decltype(&ShieldOverlays)) 0x52e5c8);
CImage *& dword_52F564 = * ((decltype(&dword_52F564)) 0x52f564);
CImage* stru_52F568 = (decltype(stru_52F568 + 0)) 0x52f568;
CImage* stru_57D768 = (decltype(stru_57D768 + 0)) 0x57d768;
CImage *& dword_57EB68 = * ((decltype(&dword_57EB68)) 0x57eb68);
CImage *& dword_57EB6C = * ((decltype(&dword_57EB6C)) 0x57eb6c);
CImage *& dword_57EB70 = * ((decltype(&dword_57EB70)) 0x57eb70);
CImage* stru_57EB78 = (decltype(stru_57EB78 + 0)) 0x57eb78;
char& byte_57EE78 = * ((decltype(&byte_57EE78)) 0x57ee78);
int* dword_57EE7C = (decltype(dword_57EE7C + 0)) 0x57ee7c;
int* dword_57EE98 = (decltype(dword_57EE98 + 0)) 0x57ee98;
char* CurrentPlayer = (decltype(CurrentPlayer + 0)) 0x57ee9c;
int& dword_57EEB8 = * ((decltype(&dword_57EEB8)) 0x57eeb8);
int& dword_57EEBC = * ((decltype(&dword_57EEBC)) 0x57eebc);
int* dword_57EEC0 = (decltype(dword_57EEC0 + 0)) 0x57eec0;
int& dword_57EEC4 = * ((decltype(&dword_57EEC4)) 0x57eec4);
int& dword_57EEC8 = * ((decltype(&dword_57EEC8)) 0x57eec8);
int& dword_57EECC = * ((decltype(&dword_57EECC)) 0x57eecc);
int& dword_57EED0 = * ((decltype(&dword_57EED0)) 0x57eed0);
int& dword_57EED4 = * ((decltype(&dword_57EED4)) 0x57eed4);
int& dword_57EED8 = * ((decltype(&dword_57EED8)) 0x57eed8);
int& dword_57EEDC = * ((decltype(&dword_57EEDC)) 0x57eedc);
PlayerInfo* Players = (decltype(Players + 0)) 0x57eee0;
int& LatencyCalls = * ((decltype(&LatencyCalls)) 0x57f090);
char* curPlayerID = (decltype(curPlayerID + 0)) 0x57f094;
char* byte_57F098 = (decltype(byte_57F098 + 0)) 0x57f098;
char* byte_57F09A = (decltype(byte_57F09A + 0)) 0x57f09a;
int& dword_57F0B0 = * ((decltype(&dword_57F0B0)) 0x57f0b0);
int* OpheliaCheat2 = (decltype(OpheliaCheat2 + 0)) 0x57f0b4;
int* playerStatusArray = (decltype(playerStatusArray + 0)) 0x57f0b8;
int& dword_57F0BC = * ((decltype(&dword_57F0BC)) 0x57f0bc);
int& dword_57F0C0 = * ((decltype(&dword_57F0C0)) 0x57f0c0);
int& dword_57F0C4 = * ((decltype(&dword_57F0C4)) 0x57f0c4);
int& dword_57F0C8 = * ((decltype(&dword_57F0C8)) 0x57f0c8);
int& dword_57F0CC = * ((decltype(&dword_57F0CC)) 0x57f0cc);
int& dword_57F0D0 = * ((decltype(&dword_57F0D0)) 0x57f0d0);
int& dword_57F0D4 = * ((decltype(&dword_57F0D4)) 0x57f0d4);
int& MaxTurnSize = * ((decltype(&MaxTurnSize)) 0x57f0d8);
dialog *& dword_57F0DC = * ((decltype(&dword_57F0DC)) 0x57f0dc);
Bitmap& stru_57F0E0 = * ((decltype(&stru_57F0E0)) 0x57f0e0);
Bitmap& stru_57F0E8 = * ((decltype(&stru_57F0E8)) 0x57f0e8);
PlayerResources& BWDATA_PlayerResources = * ((decltype(&BWDATA_PlayerResources)) 0x57f0f0);
int& dword_57F1B0 = * ((decltype(&dword_57F1B0)) 0x57f1b0);
int& dword_57F1B4 = * ((decltype(&dword_57F1B4)) 0x57f1b4);
int& dword_57F1B8 = * ((decltype(&dword_57F1B8)) 0x57f1b8);
int& dword_57F1BC = * ((decltype(&dword_57F1BC)) 0x57f1bc);
int& dword_57F1C0 = * ((decltype(&dword_57F1C0)) 0x57f1c0);
int& dword_57F1C4 = * ((decltype(&dword_57F1C4)) 0x57f1c4);
char* byte_57F1CB = (decltype(byte_57F1CB + 0)) 0x57f1cb;
int& dword_57F1CC = * ((decltype(&dword_57F1CC)) 0x57f1cc);
int& MoveToTile = * ((decltype(&MoveToTile)) 0x57f1d0);
MapSize& map_size = * ((decltype(&map_size)) 0x57f1d4);
__int16& word_57F1D8 = * ((decltype(&word_57F1D8)) 0x57f1d8);
__int16& SendTextFilter = * ((decltype(&SendTextFilter)) 0x57f1da);
Tileset& CurrentTileSet = * ((decltype(&CurrentTileSet)) 0x57f1dc);
__int16& word_57F1DE = * ((decltype(&word_57F1DE)) 0x57f1de);
char& byte_57F1E1 = * ((decltype(&byte_57F1E1)) 0x57f1e1);
char& byte_57F1E2 = * ((decltype(&byte_57F1E2)) 0x57f1e2);
char& byte_57F1E3 = * ((decltype(&byte_57F1E3)) 0x57f1e3);
int* PlayerVision = (decltype(PlayerVision + 0)) 0x57f1ec;
int* dword_57F21C = (decltype(dword_57F21C + 0)) 0x57f21c;
int& dword_57F220 = * ((decltype(&dword_57F220)) 0x57f220);
int& dword_57F224 = * ((decltype(&dword_57F224)) 0x57f224);
int& dword_57F228 = * ((decltype(&dword_57F228)) 0x57f228);
int& dword_57F22C = * ((decltype(&dword_57F22C)) 0x57f22c);
int& dword_57F230 = * ((decltype(&dword_57F230)) 0x57f230);
int& dword_57F234 = * ((decltype(&dword_57F234)) 0x57f234);
int& dword_57F238 = * ((decltype(&dword_57F238)) 0x57f238);
DWORD& ElapsedTimeFrames = * ((decltype(&ElapsedTimeFrames)) 0x57f23c);
int& dword_57F240 = * ((decltype(&dword_57F240)) 0x57f240);
MapData& CampaignIndex = * ((decltype(&CampaignIndex)) 0x57f244);
char* byte_57F246 = (decltype(byte_57F246 + 0)) 0x57f246;
int& dword_57F24A = * ((decltype(&dword_57F24A)) 0x57f24a);
int& dword_57F24E = * ((decltype(&dword_57F24E)) 0x57f24e);
int& dword_57F252 = * ((decltype(&dword_57F252)) 0x57f252);
int& dword_57F256 = * ((decltype(&dword_57F256)) 0x57f256);
int& dword_57F25A = * ((decltype(&dword_57F25A)) 0x57f25a);
int& dword_57F25E = * ((decltype(&dword_57F25E)) 0x57f25e);
int& dword_57F262 = * ((decltype(&dword_57F262)) 0x57f262);
char& byte_57F266 = * ((decltype(&byte_57F266)) 0x57f266);
int& dword_57F267 = * ((decltype(&dword_57F267)) 0x57f267);
int& dword_57F26B = * ((decltype(&dword_57F26B)) 0x57f26b);
__int16& word_57F270 = * ((decltype(&word_57F270)) 0x57f270);
__int16& word_57F272 = * ((decltype(&word_57F272)) 0x57f272);
UnitAvail& UnitAvailability = * ((decltype(&UnitAvailability)) 0x57f27c);
char& byte_57FD2C = * ((decltype(&byte_57FD2C)) 0x57fd2c);
int& dword_57FD34 = * ((decltype(&dword_57FD34)) 0x57fd34);
int& dword_57FD38 = * ((decltype(&dword_57FD38)) 0x57fd38);
char* CurrentMapFileName = (decltype(CurrentMapFileName + 0)) 0x57fd3c;
char* CurrentMapName = (decltype(CurrentMapName + 0)) 0x57fe40;
int* dword_57FE60 = (decltype(dword_57FE60 + 0)) 0x57fe60;
char& byte_581D60 = * ((decltype(&byte_581D60)) 0x581d60);
char& byte_581D61 = * ((decltype(&byte_581D61)) 0x581d61);
char* byte_581D62 = (decltype(byte_581D62 + 0)) 0x581d62;
char& byte_581D64 = * ((decltype(&byte_581D64)) 0x581d64);
char& byte_581D65 = * ((decltype(&byte_581D65)) 0x581d65);
char& byte_581D66 = * ((decltype(&byte_581D66)) 0x581d66);
char& byte_581D68 = * ((decltype(&byte_581D68)) 0x581d68);
char& byte_581D69 = * ((decltype(&byte_581D69)) 0x581d69);
char* byte_581D6A = (decltype(byte_581D6A + 0)) 0x581d6a;
char& byte_581D75 = * ((decltype(&byte_581D75)) 0x581d75);
int* dword_581D76 = (decltype(dword_581D76 + 0)) 0x581d76;
int* dword_581D7A = (decltype(dword_581D7A + 0)) 0x581d7a;
char* byte_581DD5 = (decltype(byte_581DD5 + 0)) 0x581dd5;
u8* PlayerColors = (decltype(PlayerColors + 0)) 0x581dd6;
AllScoresStruct& AllScores = * ((decltype(&AllScores)) 0x581de4);
TechSC* TechAvailableSC = (decltype(TechAvailableSC + 0)) 0x58ce24;
TechSC* TechResearchSC = (decltype(TechResearchSC + 0)) 0x58cf44;
UpgradesSC* UpgradeMaxSC = (decltype(UpgradeMaxSC + 0)) 0x58d088;
UpgradesSC* UpgradeLevelSC = (decltype(UpgradeLevelSC + 0)) 0x58d2b0;
char* byte_58D5AF = (decltype(byte_58D5AF + 0)) 0x58d5af;
int& dword_58D5B0 = * ((decltype(&dword_58D5B0)) 0x58d5b0);
int& dword_58D5B4 = * ((decltype(&dword_58D5B4)) 0x58d5b4);
int& dword_58D5B8 = * ((decltype(&dword_58D5B8)) 0x58d5b8);
ForceName& BWDATA_ForceNames = * ((decltype(&BWDATA_ForceNames)) 0x58d5bc);
PlayerAlliance* Alliance = (decltype(Alliance + 0)) 0x58d634;
int* MissionObjectives = (decltype(MissionObjectives + 0)) 0x58d6c4;
int& CountdownTimer = * ((decltype(&CountdownTimer)) 0x58d6f4);
int& ElapsedTimeSeconds = * ((decltype(&ElapsedTimeSeconds)) 0x58d6f8);
int& dword_58D6FC = * ((decltype(&dword_58D6FC)) 0x58d6fc);
int& dword_58D700 = * ((decltype(&dword_58D700)) 0x58d700);
int& dword_58D704 = * ((decltype(&dword_58D704)) 0x58d704);
int& dword_58D708 = * ((decltype(&dword_58D708)) 0x58d708);
char& byte_58D70C = * ((decltype(&byte_58D70C)) 0x58d70c);
char& byte_58D70D = * ((decltype(&byte_58D70D)) 0x58d70d);
__int16& word_58D70E = * ((decltype(&word_58D70E)) 0x58d70e);
int& dword_58D710 = * ((decltype(&dword_58D710)) 0x58d710);
int& dword_58D714 = * ((decltype(&dword_58D714)) 0x58d714);
int& dword_58D718 = * ((decltype(&dword_58D718)) 0x58d718);
int& dword_58D71C = * ((decltype(&dword_58D71C)) 0x58d71c);
Position* startPositions = (decltype(startPositions + 0)) 0x58d720;
int* TriggerSwitches = (decltype(TriggerSwitches + 0)) 0x58dc40;
Location* LocationTable = (decltype(LocationTable + 0)) 0x58dc60;
char* byte_58F038 = (decltype(byte_58F038 + 0)) 0x58f038;
int& TimerIsPaused = * ((decltype(&TimerIsPaused)) 0x58f04c);
TechBW* TechAvailableBW = (decltype(TechAvailableBW + 0)) 0x58f050;
TechBW* TechResearchBW = (decltype(TechResearchBW + 0)) 0x58f140;
u8* ResearchProgress = (decltype(ResearchProgress + 0)) 0x58f230;
UpgradesBW* UpgradeMaxBW = (decltype(UpgradeMaxBW + 0)) 0x58f278;
UpgradesBW* UpgradeLevelBW = (decltype(UpgradeLevelBW + 0)) 0x58f32c;
u8* UpgradeProgress = (decltype(UpgradeProgress + 0)) 0x58f3e0;
char& IsExpansion = * ((decltype(&IsExpansion)) 0x58f440);
int& dword_58F442 = * ((decltype(&dword_58F442)) 0x58f442);
int& dword_58F446 = * ((decltype(&dword_58F446)) 0x58f446);
int& dword_5967F0 = * ((decltype(&dword_5967F0)) 0x5967f0);
struct_game_140& stru_5967F8 = * ((decltype(&stru_5967F8)) 0x5967f8);
int& dword_596888 = * ((decltype(&dword_596888)) 0x596888);
int& NetMode = * ((decltype(&NetMode)) 0x59688c);
int& dword_596890 = * ((decltype(&dword_596890)) 0x596890);
char& byte_596894 = * ((decltype(&byte_596894)) 0x596894);
HACCEL& dword_596898 = * ((decltype(&dword_596898)) 0x596898);
InputProcedure* input_procedures = (decltype(input_procedures + 0)) 0x5968a0;
int& dword_5968EC = * ((decltype(&dword_5968EC)) 0x5968ec);
HACCEL& hAccel = * ((decltype(&hAccel)) 0x5968f0);
HACCEL& dword_5968F4 = * ((decltype(&dword_5968F4)) 0x5968f4);
HACCEL& dword_5968F8 = * ((decltype(&dword_5968F8)) 0x5968f8);
InputProcedure& dword_5968FC = * ((decltype(&dword_5968FC)) 0x5968fc);
GamePosition& gwGameMode = * ((decltype(&gwGameMode)) 0x596904);
char* byte_596910 = (decltype(byte_596910 + 0)) 0x596910;
int& dword_596A14 = * ((decltype(&dword_596A14)) 0x596a14);
char* byte_596A18 = (decltype(byte_596A18 + 0)) 0x596a18;
char& byte_596A20 = * ((decltype(&byte_596A20)) 0x596a20);
char& Game_KeyStateSomething = * ((decltype(&Game_KeyStateSomething)) 0x596a28);
char& byte_596A29 = * ((decltype(&byte_596A29)) 0x596a29);
char& byte_596A2A = * ((decltype(&byte_596A2A)) 0x596a2a);
char& byte_596A39 = * ((decltype(&byte_596A39)) 0x596a39);
char& byte_596A3A = * ((decltype(&byte_596A3A)) 0x596a3a);
char& byte_596A3B = * ((decltype(&byte_596A3B)) 0x596a3b);
char& byte_596A3C = * ((decltype(&byte_596A3C)) 0x596a3c);
char& byte_596A3D = * ((decltype(&byte_596A3D)) 0x596a3d);
char& byte_596A3E = * ((decltype(&byte_596A3E)) 0x596a3e);
char& byte_596A3F = * ((decltype(&byte_596A3F)) 0x596a3f);
char& byte_596A40 = * ((decltype(&byte_596A40)) 0x596a40);
char& byte_596A78 = * ((decltype(&byte_596A78)) 0x596a78);
char& byte_596A79 = * ((decltype(&byte_596A79)) 0x596a79);
char& byte_596A7A = * ((decltype(&byte_596A7A)) 0x596a7a);
char& byte_596A7B = * ((decltype(&byte_596A7B)) 0x596a7b);
char& byte_596A7C = * ((decltype(&byte_596A7C)) 0x596a7c);
char& byte_596A7D = * ((decltype(&byte_596A7D)) 0x596a7d);
char& byte_596A7E = * ((decltype(&byte_596A7E)) 0x596a7e);
char& byte_596A7F = * ((decltype(&byte_596A7F)) 0x596a7f);
char& byte_596A80 = * ((decltype(&byte_596A80)) 0x596a80);
char& byte_596A81 = * ((decltype(&byte_596A81)) 0x596a81);
dialog *& dlg = * ((decltype(&dlg)) 0x596b18);
int* dword_596B20 = (decltype(dword_596B20 + 0)) 0x596b20;
int& dword_596B24 = * ((decltype(&dword_596B24)) 0x596b24);
int& dword_596B44 = * ((decltype(&dword_596B44)) 0x596b44);
int& dword_596B48 = * ((decltype(&dword_596B48)) 0x596b48);
int& dword_596B6C = * ((decltype(&dword_596B6C)) 0x596b6c);
int& dword_596B70 = * ((decltype(&dword_596B70)) 0x596b70);
int& dword_596B74 = * ((decltype(&dword_596B74)) 0x596b74);
LPTOP_LEVEL_EXCEPTION_FILTER& lpTopLevelExceptionFilter = * ((decltype(&lpTopLevelExceptionFilter)) 0x596b78);
int& dword_596BAC = * ((decltype(&dword_596BAC)) 0x596bac);
int& dword_596BB0 = * ((decltype(&dword_596BB0)) 0x596bb0);
int& dword_596BB4 = * ((decltype(&dword_596BB4)) 0x596bb4);
int& dword_596BB8 = * ((decltype(&dword_596BB8)) 0x596bb8);
void *& dword_596BBC = * ((decltype(&dword_596BBC)) 0x596bbc);
HANDLE& hArchive = * ((decltype(&hArchive)) 0x596bc4);
char& byte_596BC8 = * ((decltype(&byte_596BC8)) 0x596bc8);
int& dword_596CCC = * ((decltype(&dword_596CCC)) 0x596ccc);
void *& dword_596CD0 = * ((decltype(&dword_596CD0)) 0x596cd0);
int& dword_596CD4 = * ((decltype(&dword_596CD4)) 0x596cd4);
int& dword_5971D8 = * ((decltype(&dword_5971D8)) 0x5971d8);
int& dword_5971DC = * ((decltype(&dword_5971DC)) 0x5971dc);
int& dword_5971E0 = * ((decltype(&dword_5971E0)) 0x5971e0);
int* dword_5971E4 = (decltype(dword_5971E4 + 0)) 0x5971e4;
int& dword_5971E8 = * ((decltype(&dword_5971E8)) 0x5971e8);
int& dword_5971EC = * ((decltype(&dword_5971EC)) 0x5971ec);
int& dword_5971F0 = * ((decltype(&dword_5971F0)) 0x5971f0);
int& dword_5971F4 = * ((decltype(&dword_5971F4)) 0x5971f4);
int& dword_5971F8 = * ((decltype(&dword_5971F8)) 0x5971f8);
int& dword_5971FC = * ((decltype(&dword_5971FC)) 0x5971fc);
int& dword_597200 = * ((decltype(&dword_597200)) 0x597200);
int& dword_597204 = * ((decltype(&dword_597204)) 0x597204);
CUnit ** ClientSelectionGroup = (decltype(ClientSelectionGroup + 0)) 0x597208;
int& MainBltMask = * ((decltype(&MainBltMask)) 0x597238);
char& byte_59723C = * ((decltype(&byte_59723C)) 0x59723c);
char& ClientSelectionCount = * ((decltype(&ClientSelectionCount)) 0x59723d);
Bitmap& GameScreenConsole = * ((decltype(&GameScreenConsole)) 0x597240);
CUnit *& ActivePortraitUnit = * ((decltype(&ActivePortraitUnit)) 0x597248);
int* dword_59724C = (decltype(dword_59724C + 0)) 0x59724c;
int* dword_597250 = (decltype(dword_597250 + 0)) 0x597250;
int* dword_597254 = (decltype(dword_597254 + 0)) 0x597254;
int* dword_597258 = (decltype(dword_597258 + 0)) 0x597258;
int* dword_59725C = (decltype(dword_59725C + 0)) 0x59725c;
int* dword_597260 = (decltype(dword_597260 + 0)) 0x597260;
int& dword_59727C = * ((decltype(&dword_59727C)) 0x59727c);
char& byte_597280 = * ((decltype(&byte_597280)) 0x597280);
dialog *& dword_597284 = * ((decltype(&dword_597284)) 0x597284);
int& dword_597288 = * ((decltype(&dword_597288)) 0x597288);
char& byte_59728C = * ((decltype(&byte_59728C)) 0x59728c);
char* byte_597290 = (decltype(byte_597290 + 0)) 0x597290;
char* byte_597310 = (decltype(byte_597310 + 0)) 0x597310;
int& dword_597390 = * ((decltype(&dword_597390)) 0x597390);
int& dword_597394 = * ((decltype(&dword_597394)) 0x597394);
int& dword_597398 = * ((decltype(&dword_597398)) 0x597398);
char& byte_5973A0 = * ((decltype(&byte_5973A0)) 0x5973a0);
char& byte_5982A0 = * ((decltype(&byte_5982A0)) 0x5982a0);
char* byte_5985A0 = (decltype(byte_5985A0 + 0)) 0x5985a0;
char* byte_5992A0 = (decltype(byte_5992A0 + 0)) 0x5992a0;
void *& dword_5993A0 = * ((decltype(&dword_5993A0)) 0x5993a0);
int& result = * ((decltype(&result)) 0x5993a4);
TileID *& ZergCreepArray = * ((decltype(&ZergCreepArray)) 0x5993a8);
int& dword_5993AC = * ((decltype(&dword_5993AC)) 0x5993ac);
RECT& rc = * ((decltype(&rc)) 0x5993b0);
unsigned int& dword_5993C0 = * ((decltype(&dword_5993C0)) 0x5993c0);
TileID *& MapTileArray = * ((decltype(&MapTileArray)) 0x5993c4);
int& TileSetMapSize = * ((decltype(&TileSetMapSize)) 0x5993c8);
void *& dword_5993CC = * ((decltype(&dword_5993CC)) 0x5993cc);
MiniTileMaps_type *& MiniTileFlags = * ((decltype(&MiniTileFlags)) 0x5993d0);
StringTbl& MapStringTbl = * ((decltype(&MapStringTbl)) 0x5993d4);
char* byte_5993D8 = (decltype(byte_5993D8 + 0)) 0x5993d8;
int& amount = * ((decltype(&amount)) 0x5994d8);
int& dword_5994DC = * ((decltype(&dword_5994DC)) 0x5994dc);
int* palette = (decltype(palette + 0)) 0x5994e0;
__int16& word_5998E0 = * ((decltype(&word_5998E0)) 0x5998e0);
DWORD& ThreadId = * ((decltype(&ThreadId)) 0x5998e4);
int& dword_5998E8 = * ((decltype(&dword_5998E8)) 0x5998e8);
struct_6* stru_5998F0 = (decltype(stru_5998F0 + 0)) 0x5998f0;
void *& dword_5999B0 = * ((decltype(&dword_5999B0)) 0x5999b0);
int& dword_5999B4 = * ((decltype(&dword_5999B4)) 0x5999b4);
char& byte_5999B8 = * ((decltype(&byte_5999B8)) 0x5999b8);
MenuPosition& glGluesRelated_maybe = * ((decltype(&glGluesRelated_maybe)) 0x5999bc);
dialog *& dword_5999C0 = * ((decltype(&dword_5999C0)) 0x5999c0);
dialog *& dword_5999C4 = * ((decltype(&dword_5999C4)) 0x5999c4);
int& dword_5999C8 = * ((decltype(&dword_5999C8)) 0x5999c8);
int& dword_5999CC = * ((decltype(&dword_5999CC)) 0x5999cc);
int& dword_5999D0 = * ((decltype(&dword_5999D0)) 0x5999d0);
int& dword_5999D4 = * ((decltype(&dword_5999D4)) 0x5999d4);
int& dword_5999D8 = * ((decltype(&dword_5999D8)) 0x5999d8);
int& dword_5999DC = * ((decltype(&dword_5999DC)) 0x5999dc);
int& dword_5999E0 = * ((decltype(&dword_5999E0)) 0x5999e0);
dialog *& dword_5999E4 = * ((decltype(&dword_5999E4)) 0x5999e4);
int& dword_5999E8 = * ((decltype(&dword_5999E8)) 0x5999e8);
dialog *& dword_5999EC = * ((decltype(&dword_5999EC)) 0x5999ec);
struct_game_140& stru_5999F0 = * ((decltype(&stru_5999F0)) 0x5999f0);
dialog *& dword_599A80 = * ((decltype(&dword_599A80)) 0x599a80);
int& dword_599A84 = * ((decltype(&dword_599A84)) 0x599a84);
int& dword_599A88 = * ((decltype(&dword_599A88)) 0x599a88);
char& byte_599A90 = * ((decltype(&byte_599A90)) 0x599a90);
Bitmap& p_hist_pcx = * ((decltype(&p_hist_pcx)) 0x599b90);
char& byte_599B98 = * ((decltype(&byte_599B98)) 0x599b98);
char* byte_599C98 = (decltype(byte_599C98 + 0)) 0x599c98;
int& dword_599D98 = * ((decltype(&dword_599D98)) 0x599d98);
dialog *& dword_599D9C = * ((decltype(&dword_599D9C)) 0x599d9c);
dialog *& dword_599DA0 = * ((decltype(&dword_599DA0)) 0x599da0);
char* byte_599DA4 = (decltype(byte_599DA4 + 0)) 0x599da4;
int& dword_599DC0 = * ((decltype(&dword_599DC0)) 0x599dc0);
char& byte_599DC8 = * ((decltype(&byte_599DC8)) 0x599dc8);
CHAR* dword_599EC8 = (decltype(dword_599EC8 + 0)) 0x599ec8;
int& dword_599ECC = * ((decltype(&dword_599ECC)) 0x599ecc);
int& dword_599ED0 = * ((decltype(&dword_599ED0)) 0x599ed0);
int& dword_599ED4 = * ((decltype(&dword_599ED4)) 0x599ed4);
char& byte_599ED8 = * ((decltype(&byte_599ED8)) 0x599ed8);
int& dword_59A0D0 = * ((decltype(&dword_59A0D0)) 0x59a0d0);
int* dword_59A0D4 = (decltype(dword_59A0D4 + 0)) 0x59a0d4;
int& dword_59A0D8 = * ((decltype(&dword_59A0D8)) 0x59a0d8);
int& dword_59A0DC = * ((decltype(&dword_59A0DC)) 0x59a0dc);
int& dword_59A0E0 = * ((decltype(&dword_59A0E0)) 0x59a0e0);
int* dword_59A0E4 = (decltype(dword_59A0E4 + 0)) 0x59a0e4;
int& dword_59A0E8 = * ((decltype(&dword_59A0E8)) 0x59a0e8);
int& dword_59A0EC = * ((decltype(&dword_59A0EC)) 0x59a0ec);
int& dword_59A28C = * ((decltype(&dword_59A28C)) 0x59a28c);
int& dword_59A290 = * ((decltype(&dword_59A290)) 0x59a290);
int& dword_59A294 = * ((decltype(&dword_59A294)) 0x59a294);
int& dword_59A33C = * ((decltype(&dword_59A33C)) 0x59a33c);
int& dword_59B3D0 = * ((decltype(&dword_59B3D0)) 0x59b3d0);
char* byte_59B3D8 = (decltype(byte_59B3D8 + 0)) 0x59b3d8;
int* dword_59B410 = (decltype(dword_59B410 + 0)) 0x59b410;
int& dword_59B414 = * ((decltype(&dword_59B414)) 0x59b414);
int& dword_59B418 = * ((decltype(&dword_59B418)) 0x59b418);
char* byte_59B41C = (decltype(byte_59B41C + 0)) 0x59b41c;
int& dword_59B618 = * ((decltype(&dword_59B618)) 0x59b618);
int& dword_59B61C = * ((decltype(&dword_59B61C)) 0x59b61c);
int& dword_59B620 = * ((decltype(&dword_59B620)) 0x59b620);
int& dword_59B624 = * ((decltype(&dword_59B624)) 0x59b624);
char* byte_59B628 = (decltype(byte_59B628 + 0)) 0x59b628;
void *& dword_59B72C = * ((decltype(&dword_59B72C)) 0x59b72c);
char* byte_59B730 = (decltype(byte_59B730 + 0)) 0x59b730;
int& dword_59B73C = * ((decltype(&dword_59B73C)) 0x59b73c);
int& dword_59B75C = * ((decltype(&dword_59B75C)) 0x59b75c);
int* dword_59B760 = (decltype(dword_59B760 + 0)) 0x59b760;
int& dword_59B764 = * ((decltype(&dword_59B764)) 0x59b764);
int& dword_59B768 = * ((decltype(&dword_59B768)) 0x59b768);
int& dword_59B76C = * ((decltype(&dword_59B76C)) 0x59b76c);
char* byte_59B770 = (decltype(byte_59B770 + 0)) 0x59b770;
struct_game_140& stru_59B790 = * ((decltype(&stru_59B790)) 0x59b790);
int& dword_59B820 = * ((decltype(&dword_59B820)) 0x59b820);
int& dword_59B824 = * ((decltype(&dword_59B824)) 0x59b824);
int& dword_59B828 = * ((decltype(&dword_59B828)) 0x59b828);
int& dword_59B82C = * ((decltype(&dword_59B82C)) 0x59b82c);
int (*&dword_59B830)(void) = *((decltype(&dword_59B830)) 0x59b830);
int& dword_59B834 = * ((decltype(&dword_59B834)) 0x59b834);
int& dword_59B838 = * ((decltype(&dword_59B838)) 0x59b838);
int& dword_59B83C = * ((decltype(&dword_59B83C)) 0x59b83c);
int& dword_59B840 = * ((decltype(&dword_59B840)) 0x59b840);
int& dword_59B844 = * ((decltype(&dword_59B844)) 0x59b844);
int& dword_59B848 = * ((decltype(&dword_59B848)) 0x59b848);
char* menuMapRelativePath = (decltype(menuMapRelativePath + 0)) 0x59b850;
char* byte_59B958 = (decltype(byte_59B958 + 0)) 0x59b958;
int& dword_59BA5C = * ((decltype(&dword_59BA5C)) 0x59ba5c);
void *& dword_59BA60 = * ((decltype(&dword_59BA60)) 0x59ba60);
int& dword_59BA64 = * ((decltype(&dword_59BA64)) 0x59ba64);
char* byte_59BA68 = (decltype(byte_59BA68 + 0)) 0x59ba68;
char& byte_59BB6C = * ((decltype(&byte_59BB6C)) 0x59bb6c);
char* CurrentMapFolder = (decltype(CurrentMapFolder + 0)) 0x59bb70;
dialog *& dword_59BC74 = * ((decltype(&dword_59BC74)) 0x59bc74);
dialog *& dword_59BC7C = * ((decltype(&dword_59BC7C)) 0x59bc7c);
int& dword_59BC80 = * ((decltype(&dword_59BC80)) 0x59bc80);
char* menuMapFileName = (decltype(menuMapFileName + 0)) 0x59bc88;
int& dword_59BD8C = * ((decltype(&dword_59BD8C)) 0x59bd8c);
HGDIOBJ& dword_59BD90 = * ((decltype(&dword_59BD90)) 0x59bd90);
int& dword_59BD94 = * ((decltype(&dword_59BD94)) 0x59bd94);
HGDIOBJ& dword_59BD98 = * ((decltype(&dword_59BD98)) 0x59bd98);
void *& dword_59BD9C = * ((decltype(&dword_59BD9C)) 0x59bd9c);
int& dword_59BDA0 = * ((decltype(&dword_59BDA0)) 0x59bda0);
int& dword_59BDA4 = * ((decltype(&dword_59BDA4)) 0x59bda4);
int& dword_59BDA8 = * ((decltype(&dword_59BDA8)) 0x59bda8);
int& dword_59BDAC = * ((decltype(&dword_59BDAC)) 0x59bdac);
PlayerInfo* LobbyPlayers = (decltype(LobbyPlayers + 0)) 0x59bdb0;
int* dword_59BF60 = (decltype(dword_59BF60 + 0)) 0x59bf60;
int* dword_59BF64 = (decltype(dword_59BF64 + 0)) 0x59bf64;
int& dword_59BF6C = * ((decltype(&dword_59BF6C)) 0x59bf6c);
int* dword_59BF70 = (decltype(dword_59BF70 + 0)) 0x59bf70;
char* byte_59BF78 = (decltype(byte_59BF78 + 0)) 0x59bf78;
char ** MapdataFilenames = (decltype(MapdataFilenames + 0)) 0x59c080;
__int16& word_59C184 = * ((decltype(&word_59C184)) 0x59c184);
int (*&dword_59C188)(void) = *((decltype(&dword_59C188)) 0x59c188);
int& dword_59C18C = * ((decltype(&dword_59C18C)) 0x59c18c);
void *& dword_59C190 = * ((decltype(&dword_59C190)) 0x59c190);
Bitmap& minimap_related_maybe = * ((decltype(&minimap_related_maybe)) 0x59c194);
__int16& word_59C19C = * ((decltype(&word_59C19C)) 0x59c19c);
int (*&dword_59C1A0)(void) = *((decltype(&dword_59C1A0)) 0x59c1a0);
dialog *& dword_59C1A4 = * ((decltype(&dword_59C1A4)) 0x59c1a4);
int& dword_59C1A8 = * ((decltype(&dword_59C1A8)) 0x59c1a8);
void *& dword_59C1AC = * ((decltype(&dword_59C1AC)) 0x59c1ac);
__int16& word_59C1B0 = * ((decltype(&word_59C1B0)) 0x59c1b0);
MinimapSurfaceInfoRelated* stru_59C1B8 = (decltype(stru_59C1B8 + 0)) 0x59c1b8;
int& dword_59C2B8 = * ((decltype(&dword_59C2B8)) 0x59c2b8);
char* byte_59C2C0 = (decltype(byte_59C2C0 + 0)) 0x59c2c0;
char& byte_59C3C0 = * ((decltype(&byte_59C3C0)) 0x59c3c0);
char& byte_59C4C0 = * ((decltype(&byte_59C4C0)) 0x59c4c0);
char& byte_59C5C0 = * ((decltype(&byte_59C5C0)) 0x59c5c0);
int* dword_59C6C0 = (decltype(dword_59C6C0 + 0)) 0x59c6c0;
int* dword_59CAC0 = (decltype(dword_59CAC0 + 0)) 0x59cac0;
int* dword_59CAC4 = (decltype(dword_59CAC4 + 0)) 0x59cac4;
bool& HasMegatileUpdate = * ((decltype(&HasMegatileUpdate)) 0x59cb58);
dialog *& dword_59CB5C = * ((decltype(&dword_59CB5C)) 0x59cb5c);
char* byte_59CB60 = (decltype(byte_59CB60 + 0)) 0x59cb60;
int* dword_59CB64 = (decltype(dword_59CB64 + 0)) 0x59cb64;
dialog *& dword_59CC60 = * ((decltype(&dword_59CC60)) 0x59cc60);
int& dword_59CC64 = * ((decltype(&dword_59CC64)) 0x59cc64);
__int16& word_59CC68 = * ((decltype(&word_59CC68)) 0x59cc68);
__int16& word_59CC6C = * ((decltype(&word_59CC6C)) 0x59cc6c);
__int16& word_59CC70 = * ((decltype(&word_59CC70)) 0x59cc70);
int& dword_59CC74 = * ((decltype(&dword_59CC74)) 0x59cc74);
int& dword_59CC78 = * ((decltype(&dword_59CC78)) 0x59cc78);
int& dword_59CC7C = * ((decltype(&dword_59CC7C)) 0x59cc7c);
int& dword_59CC80 = * ((decltype(&dword_59CC80)) 0x59cc80);
int& dword_59CC84 = * ((decltype(&dword_59CC84)) 0x59cc84);
int& dword_59CC88 = * ((decltype(&dword_59CC88)) 0x59cc88);
int& dword_59CC8C = * ((decltype(&dword_59CC8C)) 0x59cc8c);
int& dword_59CC90 = * ((decltype(&dword_59CC90)) 0x59cc90);
int& dword_59CC94 = * ((decltype(&dword_59CC94)) 0x59cc94);
CUnit *& dword_59CC98 = * ((decltype(&dword_59CC98)) 0x59cc98);
CUnit *& UnitNodeList_VisibleUnit_Last = * ((decltype(&UnitNodeList_VisibleUnit_Last)) 0x59cc9c);
int* dword_59CCA0 = (decltype(dword_59CCA0 + 0)) 0x59cca0;
int& dword_59CCA4 = * ((decltype(&dword_59CCA4)) 0x59cca4);
CUnit* UnitNodeTable = (decltype(UnitNodeTable + 0)) 0x59cca8;
int& dword_6283E8 = * ((decltype(&dword_6283E8)) 0x6283e8);
CUnit *& UnitNodeList_HiddenUnit_First = * ((decltype(&UnitNodeList_HiddenUnit_First)) 0x6283ec);
int& UnitNodeTable_UsedNodeCount = * ((decltype(&UnitNodeTable_UsedNodeCount)) 0x6283f0);
CUnit *& UnitNodeList_ScannerSweep_First = * ((decltype(&UnitNodeList_ScannerSweep_First)) 0x6283f4);
CUnit ** UnitNodeList_PlayerFirstUnit = (decltype(UnitNodeList_PlayerFirstUnit + 0)) 0x6283f8;
CUnit *& dword_628428 = * ((decltype(&dword_628428)) 0x628428);
CUnit *& UnitNodeList_HiddenUnit_Last = * ((decltype(&UnitNodeList_HiddenUnit_Last)) 0x62842c);
CUnit *& UnitNodeList_VisibleUnit_First = * ((decltype(&UnitNodeList_VisibleUnit_First)) 0x628430);
CUnit *& UnitNodeList_ScannerSweep_Last = * ((decltype(&UnitNodeList_ScannerSweep_Last)) 0x628434);
CUnit *& UnitNodeList_UnusedUnit_First_maybe = * ((decltype(&UnitNodeList_UnusedUnit_First_maybe)) 0x628438);
CUnit *& UnitNodeList_UnusedUnit_Last_maybe = * ((decltype(&UnitNodeList_UnusedUnit_Last_maybe)) 0x62843c);
vr4entry *& VR4Data = * ((decltype(&VR4Data)) 0x628444);
int& ScreenX = * ((decltype(&ScreenX)) 0x628448);
int& dword_628450 = * ((decltype(&dword_628450)) 0x628450);
byte *& GameTerrainCache = * ((decltype(&GameTerrainCache)) 0x628454);
vx4entry *& VX4Data = * ((decltype(&VX4Data)) 0x628458);
int& ScreenY = * ((decltype(&ScreenY)) 0x628470);
int* dword_628484 = (decltype(dword_628484 + 0)) 0x628484;
int* dword_628488 = (decltype(dword_628488 + 0)) 0x628488;
int& MoveToX = * ((decltype(&MoveToX)) 0x62848c);
int& parallaxSomethingWidth = * ((decltype(&parallaxSomethingWidth)) 0x628490);
int *& CellMap = * ((decltype(&CellMap)) 0x628494);
int& dword_628498 = * ((decltype(&dword_628498)) 0x628498);
int& parallaxSomethingHeight = * ((decltype(&parallaxSomethingHeight)) 0x62849c);
__int16& move_area = * ((decltype(&move_area)) 0x6284a0);
__int16& word_6284A2 = * ((decltype(&word_6284A2)) 0x6284a2);
__int16& word_6284A4 = * ((decltype(&word_6284A4)) 0x6284a4);
__int16& word_6284A6 = * ((decltype(&word_6284A6)) 0x6284a6);
int& MoveToY = * ((decltype(&MoveToY)) 0x6284a8);
int& dword_6284AC = * ((decltype(&dword_6284AC)) 0x6284ac);
int& dword_6284B0 = * ((decltype(&dword_6284B0)) 0x6284b0);
int& selectionIndexStart = * ((decltype(&selectionIndexStart)) 0x6284b4);
CUnit ** PlayerSelection = (decltype(PlayerSelection + 0)) 0x6284b8;
int* dword_6284E8 = (decltype(dword_6284E8 + 0)) 0x6284e8;
char& byte_628668 = * ((decltype(&byte_628668)) 0x628668);
char& byte_629268 = * ((decltype(&byte_629268)) 0x629268);
int* dword_629284 = (decltype(dword_629284 + 0)) 0x629284;
SpriteTileData& SpritesOnTileRow = * ((decltype(&SpritesOnTileRow)) 0x629288);
char* byte_629A88 = (decltype(byte_629A88 + 0)) 0x629a88;
char* byte_629C90 = (decltype(byte_629C90 + 0)) 0x629c90;
int& dword_629D90 = * ((decltype(&dword_629D90)) 0x629d90);
CSprite* SpriteTable = (decltype(SpriteTable + 0)) 0x629d98;
int& dword_63FD28 = * ((decltype(&dword_63FD28)) 0x63fd28);
__int16* word_63FE2C = (decltype(word_63FE2C + 0)) 0x63fe2c;
CSprite *& UnusedSprites = * ((decltype(&UnusedSprites)) 0x63fe30);
CSprite *& dword_63FE34 = * ((decltype(&dword_63FE34)) 0x63fe34);
char& byte_63FE38 = * ((decltype(&byte_63FE38)) 0x63fe38);
__int16* word_63FE40 = (decltype(word_63FE40 + 0)) 0x63fe40;
char& byte_63FEC0 = * ((decltype(&byte_63FEC0)) 0x63fec0);
char& byte_63FEC1 = * ((decltype(&byte_63FEC1)) 0x63fec1);
char& byte_63FEC2 = * ((decltype(&byte_63FEC2)) 0x63fec2);
__int16& word_63FEC4 = * ((decltype(&word_63FEC4)) 0x63fec4);
CUnit *& dword_63FEC8 = * ((decltype(&dword_63FEC8)) 0x63fec8);
int& dword_63FECC = * ((decltype(&dword_63FECC)) 0x63fecc);
__int16& word_63FED0 = * ((decltype(&word_63FED0)) 0x63fed0);
int& dword_63FED4 = * ((decltype(&dword_63FED4)) 0x63fed4);
int& dword_63FED8 = * ((decltype(&dword_63FED8)) 0x63fed8);
int* dword_63FEE0 = (decltype(dword_63FEE0 + 0)) 0x63fee0;
int& dword_63FEE4 = * ((decltype(&dword_63FEE4)) 0x63fee4);
int* dword_63FEEC = (decltype(dword_63FEEC + 0)) 0x63feec;
int& dword_63FEF4 = * ((decltype(&dword_63FEF4)) 0x63fef4);
int& dword_63FF2C = * ((decltype(&dword_63FF2C)) 0x63ff2c);
char& byte_63FF30 = * ((decltype(&byte_63FF30)) 0x63ff30);
CUnit *& dword_63FF34 = * ((decltype(&dword_63FF34)) 0x63ff34);
CUnit *& dword_63FF38 = * ((decltype(&dword_63FF38)) 0x63ff38);
CUnit *& dword_63FF3C = * ((decltype(&dword_63FF3C)) 0x63ff3c);
int& dword_63FF40 = * ((decltype(&dword_63FF40)) 0x63ff40);
int& CanUpdatePoweredStatus = * ((decltype(&CanUpdatePoweredStatus)) 0x63ff44);
int& dword_63FF48 = * ((decltype(&dword_63FF48)) 0x63ff48);
int& dword_63FF4C = * ((decltype(&dword_63FF4C)) 0x63ff4c);
int& dword_63FF50 = * ((decltype(&dword_63FF50)) 0x63ff50);
CUnit *& UnitNodeList_PsiFieldProvider_First = * ((decltype(&UnitNodeList_PsiFieldProvider_First)) 0x63ff54);
int& dword_63FF58 = * ((decltype(&dword_63FF58)) 0x63ff58);
CUnit *& word_63FF5C = * ((decltype(&word_63FF5C)) 0x63ff5c);
char* byte_63FF5F = (decltype(byte_63FF5F + 0)) 0x63ff5f;
char* byte_63FF60 = (decltype(byte_63FF60 + 0)) 0x63ff60;
char* byte_63FF61 = (decltype(byte_63FF61 + 0)) 0x63ff61;
char* byte_63FF62 = (decltype(byte_63FF62 + 0)) 0x63ff62;
char* byte_63FF63 = (decltype(byte_63FF63 + 0)) 0x63ff63;
int& dword_63FF64 = * ((decltype(&dword_63FF64)) 0x63ff64);
int& dword_63FF68 = * ((decltype(&dword_63FF68)) 0x63ff68);
int& dword_63FF6C = * ((decltype(&dword_63FF6C)) 0x63ff6c);
char& byte_63FF70 = * ((decltype(&byte_63FF70)) 0x63ff70);
__int16& word_63FF74 = * ((decltype(&word_63FF74)) 0x63ff74);
__int16* word_63FF78 = (decltype(word_63FF78 + 0)) 0x63ff78;
__int16* word_6402B8 = (decltype(word_6402B8 + 0)) 0x6402b8;
int& dword_640548 = * ((decltype(&dword_640548)) 0x640548);
__int16* word_640550 = (decltype(word_640550 + 0)) 0x640550;
int& dword_64086C = * ((decltype(&dword_64086C)) 0x64086c);
int& dword_640870 = * ((decltype(&dword_640870)) 0x640870);
int& dword_640874 = * ((decltype(&dword_640874)) 0x640874);
int& dword_640878 = * ((decltype(&dword_640878)) 0x640878);
int& dword_64087C = * ((decltype(&dword_64087C)) 0x64087c);
int& is_placing_building = * ((decltype(&is_placing_building)) 0x640880);
int& dword_640884 = * ((decltype(&dword_640884)) 0x640884);
__int16* word_640888 = (decltype(word_640888 + 0)) 0x640888;
UnitType& word_64088A = * ((decltype(&word_64088A)) 0x64088a);
char& byte_64088C = * ((decltype(&byte_64088C)) 0x64088c);
char& byte_64088D = * ((decltype(&byte_64088D)) 0x64088d);
int& dword_640890 = * ((decltype(&dword_640890)) 0x640890);
char* byte_640898 = (decltype(byte_640898 + 0)) 0x640898;
char* byte_6408F8 = (decltype(byte_6408F8 + 0)) 0x6408f8;
int& dword_640958 = * ((decltype(&dword_640958)) 0x640958);
__int16* word_64095C = (decltype(word_64095C + 0)) 0x64095c;
char* algn_64095E = (decltype(algn_64095E + 0)) 0x64095e;
int& dword_64096C = * ((decltype(&dword_64096C)) 0x64096c);
char* byte_64097A = (decltype(byte_64097A + 0)) 0x64097a;
char* byte_64097B = (decltype(byte_64097B + 0)) 0x64097b;
int& Chat_IncrementY = * ((decltype(&Chat_IncrementY)) 0x640b20);
int* dword_640B24 = (decltype(dword_640B24 + 0)) 0x640b24;
int& dword_640B54 = * ((decltype(&dword_640B54)) 0x640b54);
u8& Chat_NextLine = * ((decltype(&Chat_NextLine)) 0x640b58);
Chat_TextLine* Chat_GameText = (decltype(Chat_GameText + 0)) 0x640b60;
u8* Chat_ColorBytes = (decltype(Chat_ColorBytes + 0)) 0x641674;
char* byte_641684 = (decltype(byte_641684 + 0)) 0x641684;
char& byte_641691 = * ((decltype(&byte_641691)) 0x641691);
char& byte_641692 = * ((decltype(&byte_641692)) 0x641692);
char& byte_641693 = * ((decltype(&byte_641693)) 0x641693);
char& byte_641694 = * ((decltype(&byte_641694)) 0x641694);
int& dword_641698 = * ((decltype(&dword_641698)) 0x641698);
COrder *& dword_64B2E0 = * ((decltype(&dword_64B2E0)) 0x64b2e0);
COrder *& dword_64B2E4 = * ((decltype(&dword_64B2E4)) 0x64b2e4);
CBullet* BulletNodeTable = (decltype(BulletNodeTable + 0)) 0x64b2e8;
int& dword_64DEA8 = * ((decltype(&dword_64DEA8)) 0x64dea8);
CBullet *& BulletNodeTable_unknown = * ((decltype(&BulletNodeTable_unknown)) 0x64deac);
CUnit *& dword_64DEB0 = * ((decltype(&dword_64DEB0)) 0x64deb0);
int& unknown_air_splash_related_unit_count = * ((decltype(&unknown_air_splash_related_unit_count)) 0x64deb4);
int& dword_64DEB8 = * ((decltype(&dword_64DEB8)) 0x64deb8);
int& dword_64DEBC = * ((decltype(&dword_64DEBC)) 0x64debc);
int& dword_64DEC0 = * ((decltype(&dword_64DEC0)) 0x64dec0);
CBullet *& BulletNodeTable_FirstElement = * ((decltype(&BulletNodeTable_FirstElement)) 0x64dec4);
int* dword_64DEC8 = (decltype(dword_64DEC8 + 0)) 0x64dec8;
int* dword_64DECC = (decltype(dword_64DECC + 0)) 0x64decc;
int& dword_64EEC8 = * ((decltype(&dword_64EEC8)) 0x64eec8);
CUnit *& dword_64EECC = * ((decltype(&dword_64EECC)) 0x64eecc);
int& dword_64EED0 = * ((decltype(&dword_64EED0)) 0x64eed0);
int& dword_64EED4 = * ((decltype(&dword_64EED4)) 0x64eed4);
CBullet *& dword_64EED8 = * ((decltype(&dword_64EED8)) 0x64eed8);
CBullet *& dword_64EEDC = * ((decltype(&dword_64EEDC)) 0x64eedc);
CUnit& stru_64EEE0 = * ((decltype(&stru_64EEE0)) 0x64eee0);
CThingy *& ThingyList_UsedFirst = * ((decltype(&ThingyList_UsedFirst)) 0x652918);
CThingy *& dword_65291C = * ((decltype(&dword_65291C)) 0x65291c);
bool& wantThingyUpdate = * ((decltype(&wantThingyUpdate)) 0x652920);
CThingy* stru_652928 = (decltype(stru_652928 + 0)) 0x652928;
int& dword_654868 = * ((decltype(&dword_654868)) 0x654868);
int& dword_65486C = * ((decltype(&dword_65486C)) 0x65486c);
CThingy *& dword_654870 = * ((decltype(&dword_654870)) 0x654870);
CThingy *& dword_654874 = * ((decltype(&dword_654874)) 0x654874);
CThingy *& dword_654878 = * ((decltype(&dword_654878)) 0x654878);
CThingy *& dword_65487C = * ((decltype(&dword_65487C)) 0x65487c);
char* TurnBuffer = (decltype(TurnBuffer + 0)) 0x654880;
int* arraydatabytes = (decltype(arraydatabytes + 0)) 0x654a80;
int& dword_654A84 = * ((decltype(&dword_654A84)) 0x654a84);
int& dword_654A88 = * ((decltype(&dword_654A88)) 0x654a88);
int& dword_654A8C = * ((decltype(&dword_654A8C)) 0x654a8c);
int& dword_654A90 = * ((decltype(&dword_654A90)) 0x654a90);
int& dword_654A94 = * ((decltype(&dword_654A94)) 0x654a94);
int& dword_654A98 = * ((decltype(&dword_654A98)) 0x654a98);
int& dword_654A9C = * ((decltype(&dword_654A9C)) 0x654a9c);
unsigned int& sgdwBytesInCmdQueue = * ((decltype(&sgdwBytesInCmdQueue)) 0x654aa0);
int* dword_654AA8 = (decltype(dword_654AA8 + 0)) 0x654aa8;
int& dword_6552A8 = * ((decltype(&dword_6552A8)) 0x6552a8);
char& byte_6554B0 = * ((decltype(&byte_6554B0)) 0x6554b0);
int* arraydata = (decltype(arraydata + 0)) 0x6554b4;
char* byte_6554D8 = (decltype(byte_6554D8 + 0)) 0x6554d8;
int& dword_6556D8 = * ((decltype(&dword_6556D8)) 0x6556d8);
int& dword_6556DC = * ((decltype(&dword_6556DC)) 0x6556dc);
int& InGame = * ((decltype(&InGame)) 0x6556e0);
int& Latency = * ((decltype(&Latency)) 0x6556e4);
int& dword_6556E8 = * ((decltype(&dword_6556E8)) 0x6556e8);
void (__thiscall *&dword_6556EC)(dlgEvent *) = *((decltype(&dword_6556EC)) 0x6556ec);
void (__thiscall *&dword_6556F0)(dlgEvent *) = *((decltype(&dword_6556F0)) 0x6556f0);
int& dword_6556F4 = * ((decltype(&dword_6556F4)) 0x6556f4);
int& dword_6556F8 = * ((decltype(&dword_6556F8)) 0x6556f8);
__int16& word_6556FC = * ((decltype(&word_6556FC)) 0x6556fc);
char* Upgrade_MaxRepeats = (decltype(Upgrade_MaxRepeats + 0)) 0x655700;
__int16* Upgrade_MineralCostBase = (decltype(Upgrade_MineralCostBase + 0)) 0x655740;
__int16* Upgrade_GasCostFactor = (decltype(Upgrade_GasCostFactor + 0)) 0x6557c0;
__int16* Upgrade_GasCostBase = (decltype(Upgrade_GasCostBase + 0)) 0x655840;
__int16* Upgrade_Unknown = (decltype(Upgrade_Unknown + 0)) 0x6558c0;
__int16* Upgrade_TimeCostFactor = (decltype(Upgrade_TimeCostFactor + 0)) 0x655940;
__int16* Upgrade_MineralCostFactor = (decltype(Upgrade_MineralCostFactor + 0)) 0x6559c0;
__int16* Upgrade_Label = (decltype(Upgrade_Label + 0)) 0x655a40;
__int16* Upgrade_Icon = (decltype(Upgrade_Icon + 0)) 0x655ac0;
char* Upgrade_IsBroodWarPnly = (decltype(Upgrade_IsBroodWarPnly + 0)) 0x655b3c;
__int16* Upgrade_TimeCostBase = (decltype(Upgrade_TimeCostBase + 0)) 0x655b80;
char* Upgrade_Race = (decltype(Upgrade_Race + 0)) 0x655bfc;
int& dword_655C3C = * ((decltype(&dword_655C3C)) 0x655c3c);
Bitmap& stru_655C40 = * ((decltype(&stru_655C40)) 0x655c40);
int& dword_655C48 = * ((decltype(&dword_655C48)) 0x655c48);
int& dword_655C4C = * ((decltype(&dword_655C4C)) 0x655c4c);
int& dword_655C50 = * ((decltype(&dword_655C50)) 0x655c50);
int& dword_655C54 = * ((decltype(&dword_655C54)) 0x655c54);
int* dword_655C58 = (decltype(dword_655C58 + 0)) 0x655c58;
char* byte_655E10 = (decltype(byte_655E10 + 0)) 0x655e10;
int* dword_655E80 = (decltype(dword_655E80 + 0)) 0x655e80;
char* byte_656038 = (decltype(byte_656038 + 0)) 0x656038;
char* byte_6560A8 = (decltype(byte_6560A8 + 0)) 0x6560a8;
char* byte_656118 = (decltype(byte_656118 + 0)) 0x656118;
int& dword_656188 = * ((decltype(&dword_656188)) 0x656188);
int& dword_65618C = * ((decltype(&dword_65618C)) 0x65618c);
int& dword_656190 = * ((decltype(&dword_656190)) 0x656190);
__int16* Tech_Unknown = (decltype(Tech_Unknown + 0)) 0x656198;
__int16* Tech_GasCost = (decltype(Tech_GasCost + 0)) 0x6561f0;
__int16* Tech_MineralCost = (decltype(Tech_MineralCost + 0)) 0x656248;
__int16* Tech_LabelIndex = (decltype(Tech_LabelIndex + 0)) 0x6562a0;
__int16* Tech_Unknown2 = (decltype(Tech_Unknown2 + 0)) 0x6562f8;
__int16* Tech_EnergyCost = (decltype(Tech_EnergyCost + 0)) 0x656380;
__int16* Tech_ResearchTime = (decltype(Tech_ResearchTime + 0)) 0x6563d8;
__int16* Tech_Icon = (decltype(Tech_Icon + 0)) 0x656430;
u8* Weapon_DamageFactor = (decltype(Weapon_DamageFactor + 0)) 0x6564e0;
u16* Weapon_TargetErrorMessage = (decltype(Weapon_TargetErrorMessage + 0)) 0x656568;
WeaponBehavior* Weapon_Behavior = (decltype(Weapon_Behavior + 0)) 0x656670;
char* Weapon_ExplosionType = (decltype(Weapon_ExplosionType + 0)) 0x6566f8;
u16* Weapon_Icon = (decltype(Weapon_Icon + 0)) 0x656780;
__int16* Weapon_InnerSplashRadius = (decltype(Weapon_InnerSplashRadius + 0)) 0x656888;
u8* Weapon_AttackDirection = (decltype(Weapon_AttackDirection + 0)) 0x656990;
int* Weapon_MinRange = (decltype(Weapon_MinRange + 0)) 0x656a18;
u8* Weapon_YOffset = (decltype(Weapon_YOffset + 0)) 0x656c20;
int* Weapon_Graphic = (decltype(Weapon_Graphic + 0)) 0x656ca8;
u16* Weapon_DamageAmount = (decltype(Weapon_DamageAmount + 0)) 0x656eb0;
u8* Weapon_DamageCooldown = (decltype(Weapon_DamageCooldown + 0)) 0x656fb8;
char* Weapon_RemoveAfter = (decltype(Weapon_RemoveAfter + 0)) 0x657040;
__int16* Weapon_MedianSplashRadius = (decltype(Weapon_MedianSplashRadius + 0)) 0x6570c8;
char* Weapon_Upgrade = (decltype(Weapon_Upgrade + 0)) 0x6571d0;
DamageType* Weapon_DamageType = (decltype(Weapon_DamageType + 0)) 0x657258;
__int16* Weapon_Label = (decltype(Weapon_Label + 0)) 0x6572e0;
char* Weapon_TechHint = (decltype(Weapon_TechHint + 0)) 0x6573e8;
int* Weapon_MaxRange = (decltype(Weapon_MaxRange + 0)) 0x657470;
__int16* Weapon_DamageBonus = (decltype(Weapon_DamageBonus + 0)) 0x657678;
u16* Weapon_OuterSplashRadius = (decltype(Weapon_OuterSplashRadius + 0)) 0x657780;
u8* Weapon_LaunchSpin = (decltype(Weapon_LaunchSpin + 0)) 0x657888;
u8* Weapon_XOffset = (decltype(Weapon_XOffset + 0)) 0x657910;
WeaponTargetFlags* Weapon_TargetFlags = (decltype(Weapon_TargetFlags + 0)) 0x657998;
char& byte_657A9C = * ((decltype(&byte_657A9C)) 0x657a9c);
int* dword_657AA0 = (decltype(dword_657AA0 + 0)) 0x657aa0;
int& dword_658AA0 = * ((decltype(&dword_658AA0)) 0x658aa0);
int (*&dword_658AA4)(void) = *((decltype(&dword_658AA4)) 0x658aa4);
int& dword_658AA8 = * ((decltype(&dword_658AA8)) 0x658aa8);
int& dword_658AAC = * ((decltype(&dword_658AAC)) 0x658aac);
int& dword_658AB0 = * ((decltype(&dword_658AB0)) 0x658ab0);
int& dword_658AB4 = * ((decltype(&dword_658AB4)) 0x658ab4);
int& dword_658AB8 = * ((decltype(&dword_658AB8)) 0x658ab8);
int& dword_658ABC = * ((decltype(&dword_658ABC)) 0x658abc);
char& byte_658AC0 = * ((decltype(&byte_658AC0)) 0x658ac0);
int* spkLayer = (decltype(spkLayer + 0)) 0x658ac4;
void *& spkHandle = * ((decltype(&spkHandle)) 0x658ad8);
void *& dword_658ADC = * ((decltype(&dword_658ADC)) 0x658adc);
int& dword_658AE0 = * ((decltype(&dword_658AE0)) 0x658ae0);
int& dword_658AE4 = * ((decltype(&dword_658AE4)) 0x658ae4);
int* dword_658AE8 = (decltype(dword_658AE8 + 0)) 0x658ae8;
int& dword_658AEC = * ((decltype(&dword_658AEC)) 0x658aec);
int& dword_658AF0 = * ((decltype(&dword_658AF0)) 0x658af0);
int& dword_658AF4 = * ((decltype(&dword_658AF4)) 0x658af4);
int& dword_658AF8 = * ((decltype(&dword_658AF8)) 0x658af8);
int& dword_658AFC = * ((decltype(&dword_658AFC)) 0x658afc);
int& dword_658B00 = * ((decltype(&dword_658B00)) 0x658b00);
int& dword_658B04 = * ((decltype(&dword_658B04)) 0x658b04);
int& dword_658B08 = * ((decltype(&dword_658B08)) 0x658b08);
int& dword_658B0C = * ((decltype(&dword_658B0C)) 0x658b0c);
int* dword_658B10 = (decltype(dword_658B10 + 0)) 0x658b10;
int& dword_65EB10 = * ((decltype(&dword_65EB10)) 0x65eb10);
int& dword_65EB14 = * ((decltype(&dword_65EB14)) 0x65eb14);
int& dword_65EB18 = * ((decltype(&dword_65EB18)) 0x65eb18);
int& dword_65EB1C = * ((decltype(&dword_65EB1C)) 0x65eb1c);
int& dword_65EB20 = * ((decltype(&dword_65EB20)) 0x65eb20);
__int16& word_65EB26 = * ((decltype(&word_65EB26)) 0x65eb26);
int& dword_65EB28 = * ((decltype(&dword_65EB28)) 0x65eb28);
char& byte_65EB2C = * ((decltype(&byte_65EB2C)) 0x65eb2c);
char& byte_65EB2D = * ((decltype(&byte_65EB2D)) 0x65eb2d);
char& byte_65EB2E = * ((decltype(&byte_65EB2E)) 0x65eb2e);
__int16& word_65EB30 = * ((decltype(&word_65EB30)) 0x65eb30);
char& byte_65EB32 = * ((decltype(&byte_65EB32)) 0x65eb32);
char& byte_65EB34 = * ((decltype(&byte_65EB34)) 0x65eb34);
int& IsMultiplayer = * ((decltype(&IsMultiplayer)) 0x65fbf0);
int& dword_65FBF4 = * ((decltype(&dword_65FBF4)) 0x65fbf4);
int& dword_65FBF8 = * ((decltype(&dword_65FBF8)) 0x65fbf8);
int& dword_65FBFC = * ((decltype(&dword_65FBFC)) 0x65fbfc);
int& dword_65FC00 = * ((decltype(&dword_65FC00)) 0x65fc00);
int& dword_65FC04 = * ((decltype(&dword_65FC04)) 0x65fc04);
int& dword_65FC08 = * ((decltype(&dword_65FC08)) 0x65fc08);
int& dword_65FC0C = * ((decltype(&dword_65FC0C)) 0x65fc0c);
char& byte_65FC10 = * ((decltype(&byte_65FC10)) 0x65fc10);
char& byte_65FC11 = * ((decltype(&byte_65FC11)) 0x65fc11);
u8* Unit_MaxAirHits = (decltype(Unit_MaxAirHits + 0)) 0x65fc18;
u16* Unit_GasCost = (decltype(Unit_GasCost + 0)) 0x65fd00;
u8* Unit_ArmorAmount = (decltype(Unit_ArmorAmount + 0)) 0x65fec8;
char* byte_65FFAC = (decltype(byte_65FFAC + 0)) 0x65ffac;
u16* Unit_FirstWhatSound = (decltype(Unit_FirstWhatSound + 0)) 0x65ffb0;
u8* Unit_AIInterval = (decltype(Unit_AIInterval + 0)) 0x660178;
u16* Unit_MapStringID = (decltype(Unit_MapStringID + 0)) 0x660260;
u16* Unit_TimeCost = (decltype(Unit_TimeCost + 0)) 0x660428;
u8* Unit_Direction = (decltype(Unit_Direction + 0)) 0x6605f0;
u8* Unit_BroodwarOnly = (decltype(Unit_BroodwarOnly + 0)) 0x6606d8;
__int16* Unit_SubUnit = (decltype(Unit_SubUnit + 0)) 0x6607c0;
u8* Unit_SpaceProvided = (decltype(Unit_SpaceProvided + 0)) 0x660988;
u16* Unit_MaxShieldPoints = (decltype(Unit_MaxShieldPoints + 0)) 0x660e00;
__int16& word_660E92 = * ((decltype(&word_660E92)) 0x660e92);
u8* Unit_ConstructionGraphics = (decltype(Unit_ConstructionGraphics + 0)) 0x660fc8;
u16* Unit_LastYesSound = (decltype(Unit_LastYesSound + 0)) 0x661440;
u16* Unit_AvailabilityFlags = (decltype(Unit_AvailabilityFlags + 0)) 0x661518;
WeaponType* Unit_AirWeapon = (decltype(Unit_AirWeapon + 0)) 0x6616e0;
UnitDimentions* Unit_Dimensions = (decltype(Unit_Dimensions + 0)) 0x6617c8;
u16* Unit_LastAnnoyedSound = (decltype(Unit_LastAnnoyedSound + 0)) 0x661ee8;
u16* Unit_ReadySound = (decltype(Unit_ReadySound + 0)) 0x661fc0;
u8* Unit_RightClickAction = (decltype(Unit_RightClickAction + 0)) 0x662098;
u8* Unit_SizeType = (decltype(Unit_SizeType + 0)) 0x662180;
Order* Unit_HumanAiIdleOrder = (decltype(Unit_HumanAiIdleOrder + 0)) 0x662268;
u32* Unit_MaxHitPoints = (decltype(Unit_MaxHitPoints + 0)) 0x662350;
u16* Unit_AddonOffset = (decltype(Unit_AddonOffset + 0)) 0x6626e0;
u32* Unit_Placement = (decltype(Unit_Placement + 0)) 0x662860;
u16* Unit_LastWhatSound = (decltype(Unit_LastWhatSound + 0)) 0x662bf0;
u8* Unit_SeekRange = (decltype(Unit_SeekRange + 0)) 0x662db8;
Order* Unit_ComputerAiIdleOrder = (decltype(Unit_ComputerAiIdleOrder + 0)) 0x662ea0;
u16* Unit_IdlePortrait = (decltype(Unit_IdlePortrait + 0)) 0x662f88;
u8* Unit_Elevation = (decltype(Unit_Elevation + 0)) 0x663150;
u8* Unit_SightRange = (decltype(Unit_SightRange + 0)) 0x663238;
Order* Unit_AttackUnitOrder = (decltype(Unit_AttackUnitOrder + 0)) 0x663320;
char& byte_663325 = * ((decltype(&byte_663325)) 0x663325);
char& byte_66333E = * ((decltype(&byte_66333E)) 0x66333e);
char& byte_66333F = * ((decltype(&byte_66333F)) 0x66333f);
char& byte_663369 = * ((decltype(&byte_663369)) 0x663369);
char& byte_663375 = * ((decltype(&byte_663375)) 0x663375);
u16* Unit_BuildScore = (decltype(Unit_BuildScore + 0)) 0x663408;
u8* Unit_ArmorUpgrade = (decltype(Unit_ArmorUpgrade + 0)) 0x6635d0;
WeaponType* Unit_GroundWeapon = (decltype(Unit_GroundWeapon + 0)) 0x6636b8;
u8* Unit_GroupFlags = (decltype(Unit_GroupFlags + 0)) 0x6637a0;
u16* Unit_MineralCost = (decltype(Unit_MineralCost + 0)) 0x663888;
u8* Unit_AttackMoveOrder = (decltype(Unit_AttackMoveOrder + 0)) 0x663a50;
u16* Unit_FirstAnnoyedSound = (decltype(Unit_FirstAnnoyedSound + 0)) 0x663b38;
u16* Unit_FirstYesSound = (decltype(Unit_FirstYesSound + 0)) 0x663c10;
u8* Unit_SupplyRequired = (decltype(Unit_SupplyRequired + 0)) 0x663ce8;
u8* Unit_SubLabel = (decltype(Unit_SubLabel + 0)) 0x663dd0;
u16* Unit_DestroyScore = (decltype(Unit_DestroyScore + 0)) 0x663eb8;
UnitPrototypeFlags* Unit_PrototypeFlags = (decltype(Unit_PrototypeFlags + 0)) 0x664080;
u8* Unit_SpaceRequired = (decltype(Unit_SpaceRequired + 0)) 0x664410;
FlingyID* Unit_Graphic = (decltype(Unit_Graphic + 0)) 0x6644f8;
u8* Unit_MaxGroundHits = (decltype(Unit_MaxGroundHits + 0)) 0x6645e0;
u8* Unit_SupplyProvided = (decltype(Unit_SupplyProvided + 0)) 0x6646c8;
u8* Unit_ShieldsEnabled = (decltype(Unit_ShieldsEnabled + 0)) 0x6647b0;
Order* Unit_ReturnToIdleOrder = (decltype(Unit_ReturnToIdleOrder + 0)) 0x664898;
u16* Units_InfestChangeUnit = (decltype(Units_InfestChangeUnit + 0)) 0x664980;
char* Orders_Unknown4 = (decltype(Orders_Unknown4 + 0)) 0x664a40;
char* Orders_UseWeaponTargeting = (decltype(Orders_UseWeaponTargeting + 0)) 0x664b00;
char* Orders_Unused12 = (decltype(Orders_Unused12 + 0)) 0x664bc0;
char* Orders_Unknown11 = (decltype(Orders_Unknown11 + 0)) 0x664c80;
char* Orders_IscriptAnimation = (decltype(Orders_IscriptAnimation + 0)) 0x664d40;
Tech* Orders_TechUsed = (decltype(Orders_TechUsed + 0)) 0x664e00;
__int16* Orders_HilightedIcon = (decltype(Orders_HilightedIcon + 0)) 0x664ec0;
char* Orders_CanBeInterrupted = (decltype(Orders_CanBeInterrupted + 0)) 0x665040;
char* Orders_Unknown7 = (decltype(Orders_Unknown7 + 0)) 0x665100;
char* Orders_Unknown9 = (decltype(Orders_Unknown9 + 0)) 0x6651c0;
__int16* Orders_Label = (decltype(Orders_Label + 0)) 0x665280;
char* Orders_ObscuredOrder = (decltype(Orders_ObscuredOrder + 0)) 0x665400;
char* Orders_CanBeObstructed = (decltype(Orders_CanBeObstructed + 0)) 0x6654c0;
__int16* Orders_Unknown17 = (decltype(Orders_Unknown17 + 0)) 0x665580;
char* Orders_CanBeQueued = (decltype(Orders_CanBeQueued + 0)) 0x665700;
char* Orders_Unused5 = (decltype(Orders_Unused5 + 0)) 0x6657c0;
WeaponType* Orders_TargetingWeapon = (decltype(Orders_TargetingWeapon + 0)) 0x665880;
char* Orders_Unused2 = (decltype(Orders_Unused2 + 0)) 0x665940;
char* Orders_Unused3 = (decltype(Orders_Unused3 + 0)) 0x665a00;
char* Sprites_IsVisible = (decltype(Sprites_IsVisible + 0)) 0x665c48;
char* byte_665DCE = (decltype(byte_665DCE + 0)) 0x665dce;
char* byte_665F56 = (decltype(byte_665F56 + 0)) 0x665f56;
unsigned __int16* Sprites_Image = (decltype(Sprites_Image + 0)) 0x666160;
int* Images_LandingDustLO = (decltype(Images_LandingDustLO + 0)) 0x666778;
u8* Image_DrawIfCloaked = (decltype(Image_DrawIfCloaked + 0)) 0x667718;
int* Images_SpecialOverlayLO = (decltype(Images_SpecialOverlayLO + 0)) 0x667b00;
int* Images_GrpFile = (decltype(Images_GrpFile + 0)) 0x668aa0;
u8* Images_Remapping = (decltype(Images_Remapping + 0)) 0x669a40;
u8* Image_DrawFunction = (decltype(Image_DrawFunction + 0)) 0x669e28;
int* Images_InjuryOverlayLO = (decltype(Images_InjuryOverlayLO + 0)) 0x66a210;
int* Images_AttackOverlayLO = (decltype(Images_AttackOverlayLO + 0)) 0x66b1b0;
u8* Images_IsClickable = (decltype(Images_IsClickable + 0)) 0x66c150;
int* Images_ShieldOverlayLO = (decltype(Images_ShieldOverlayLO + 0)) 0x66c538;
u8* Images_UseFullIscript = (decltype(Images_UseFullIscript + 0)) 0x66d4d8;
int* Images_LiftOffDustLO = (decltype(Images_LiftOffDustLO + 0)) 0x66d8c0;
u8* Images_IsTurnable = (decltype(Images_IsTurnable + 0)) 0x66e860;
int* Images_IscriptEntry = (decltype(Images_IscriptEntry + 0)) 0x66ec48;
char* byte_66FBE4 = (decltype(byte_66FBE4 + 0)) 0x66fbe4;
char& byte_66FBF6 = * ((decltype(&byte_66FBF6)) 0x66fbf6);
char& byte_66FBF7 = * ((decltype(&byte_66FBF7)) 0x66fbf7);
char& byte_66FBF8 = * ((decltype(&byte_66FBF8)) 0x66fbf8);
char& byte_66FBF9 = * ((decltype(&byte_66FBF9)) 0x66fbf9);
char& byte_66FBFA = * ((decltype(&byte_66FBFA)) 0x66fbfa);
int& dword_66FBFC = * ((decltype(&dword_66FBFC)) 0x66fbfc);
int& dword_66FC00 = * ((decltype(&dword_66FC00)) 0x66fc00);
char* byte_66FC08 = (decltype(byte_66FC08 + 0)) 0x66fc08;
char* byte_66FD10 = (decltype(byte_66FD10 + 0)) 0x66fd10;
char& byte_66FE14 = * ((decltype(&byte_66FE14)) 0x66fe14);
int& dword_66FE18 = * ((decltype(&dword_66FE18)) 0x66fe18);
char& byte_66FE1C = * ((decltype(&byte_66FE1C)) 0x66fe1c);
char* byte_66FE20 = (decltype(byte_66FE20 + 0)) 0x66fe20;
__int16* word_66FE22 = (decltype(word_66FE22 + 0)) 0x66fe22;
__int16* word_66FE24 = (decltype(word_66FE24 + 0)) 0x66fe24;
__int16* word_66FE26 = (decltype(word_66FE26 + 0)) 0x66fe26;
int& dword_66FF30 = * ((decltype(&dword_66FF30)) 0x66ff30);
char* byte_66FF34 = (decltype(byte_66FF34 + 0)) 0x66ff34;
char& byte_66FF35 = * ((decltype(&byte_66FF35)) 0x66ff35);
char& byte_66FF36 = * ((decltype(&byte_66FF36)) 0x66ff36);
char& byte_66FF37 = * ((decltype(&byte_66FF37)) 0x66ff37);
char& byte_66FF38 = * ((decltype(&byte_66FF38)) 0x66ff38);
char& byte_66FF39 = * ((decltype(&byte_66FF39)) 0x66ff39);
char& byte_66FF3A = * ((decltype(&byte_66FF3A)) 0x66ff3a);
char* byte_66FF3B = (decltype(byte_66FF3B + 0)) 0x66ff3b;
int& dword_66FF3C = * ((decltype(&dword_66FF3C)) 0x66ff3c);
int& dword_66FF40 = * ((decltype(&dword_66FF40)) 0x66ff40);
int& dword_66FF44 = * ((decltype(&dword_66FF44)) 0x66ff44);
int& dword_66FF48 = * ((decltype(&dword_66FF48)) 0x66ff48);
int& dword_66FF4C = * ((decltype(&dword_66FF4C)) 0x66ff4c);
int& dword_66FF50 = * ((decltype(&dword_66FF50)) 0x66ff50);
int& dword_66FF54 = * ((decltype(&dword_66FF54)) 0x66ff54);
int& dword_66FF58 = * ((decltype(&dword_66FF58)) 0x66ff58);
char& byte_66FF5C = * ((decltype(&byte_66FF5C)) 0x66ff5c);
int& dword_66FF60 = * ((decltype(&dword_66FF60)) 0x66ff60);
Bitmap& stru_66FF64 = * ((decltype(&stru_66FF64)) 0x66ff64);
dialog *& dword_66FF6C = * ((decltype(&dword_66FF6C)) 0x66ff6c);
int& dword_66FF70 = * ((decltype(&dword_66FF70)) 0x66ff70);
int* UnitOrderingCount = (decltype(UnitOrderingCount + 0)) 0x66ff74;
UnitFinderData* UnitOrderingX = (decltype(UnitOrderingX + 0)) 0x66ff78;
UnitFinderData* UnitOrderingY = (decltype(UnitOrderingY + 0)) 0x6769b8;
char& byte_67D3F8 = * ((decltype(&byte_67D3F8)) 0x67d3f8);
int* dword_685108 = (decltype(dword_685108 + 0)) 0x685108;
int* dword_68510C = (decltype(dword_68510C + 0)) 0x68510c;
int& dword_685110 = * ((decltype(&dword_685110)) 0x685110);
int& dword_685114 = * ((decltype(&dword_685114)) 0x685114);
int& dword_685118 = * ((decltype(&dword_685118)) 0x685118);
int& dword_68511C = * ((decltype(&dword_68511C)) 0x68511c);
int& dword_685120 = * ((decltype(&dword_685120)) 0x685120);
int& dword_685124 = * ((decltype(&dword_685124)) 0x685124);
int& dword_685128 = * ((decltype(&dword_685128)) 0x685128);
int& dword_68512C = * ((decltype(&dword_68512C)) 0x68512c);
int& dword_685130 = * ((decltype(&dword_685130)) 0x685130);
int& dword_685134 = * ((decltype(&dword_685134)) 0x685134);
int& dword_685138 = * ((decltype(&dword_685138)) 0x685138);
int& dword_68513C = * ((decltype(&dword_68513C)) 0x68513c);
int& dword_685140 = * ((decltype(&dword_685140)) 0x685140);
int& dword_685144 = * ((decltype(&dword_685144)) 0x685144);
char* SaveGameFile = (decltype(SaveGameFile + 0)) 0x685148;
int& dword_685164 = * ((decltype(&dword_685164)) 0x685164);
__int16& word_685168 = * ((decltype(&word_685168)) 0x685168);
char& byte_68516A = * ((decltype(&byte_68516A)) 0x68516a);
int& dword_68516C = * ((decltype(&dword_68516C)) 0x68516c);
void *& dword_685170 = * ((decltype(&dword_685170)) 0x685170);
int& dword_685174 = * ((decltype(&dword_685174)) 0x685174);
int& dword_685178 = * ((decltype(&dword_685178)) 0x685178);
int& dword_68517C = * ((decltype(&dword_68517C)) 0x68517c);
char& byte_685180 = * ((decltype(&byte_685180)) 0x685180);
int* dword_685188 = (decltype(dword_685188 + 0)) 0x685188;
int* dword_685428 = (decltype(dword_685428 + 0)) 0x685428;
int* dword_687C48 = (decltype(dword_687C48 + 0)) 0x687c48;
int* dword_68A708 = (decltype(dword_68A708 + 0)) 0x68a708;
int* dword_68A738 = (decltype(dword_68A738 + 0)) 0x68a738;
int* dword_68A858 = (decltype(dword_68A858 + 0)) 0x68a858;
int* dword_68A888 = (decltype(dword_68A888 + 0)) 0x68a888;
int* dword_68A9A8 = (decltype(dword_68A9A8 + 0)) 0x68a9a8;
int* dword_68A9D8 = (decltype(dword_68A9D8 + 0)) 0x68a9d8;
char& byte_68AC48 = * ((decltype(&byte_68AC48)) 0x68ac48);
int& dword_68AC4C = * ((decltype(&dword_68AC4C)) 0x68ac4c);
int* dword_68AC50 = (decltype(dword_68AC50 + 0)) 0x68ac50;
int& dword_68AC54 = * ((decltype(&dword_68AC54)) 0x68ac54);
int& dword_68AC58 = * ((decltype(&dword_68AC58)) 0x68ac58);
int& dword_68AC5C = * ((decltype(&dword_68AC5C)) 0x68ac5c);
int& dword_68AC60 = * ((decltype(&dword_68AC60)) 0x68ac60);
int& dword_68AC64 = * ((decltype(&dword_68AC64)) 0x68ac64);
int& dword_68AC68 = * ((decltype(&dword_68AC68)) 0x68ac68);
int& dword_68AC6C = * ((decltype(&dword_68AC6C)) 0x68ac6c);
int& dword_68AC70 = * ((decltype(&dword_68AC70)) 0x68ac70);
char& CanUpdateSelectedUnitPortrait = * ((decltype(&CanUpdateSelectedUnitPortrait)) 0x68ac74);
int& dword_68AC78 = * ((decltype(&dword_68AC78)) 0x68ac78);
void *& dword_68AC7C = * ((decltype(&dword_68AC7C)) 0x68ac7c);
int& dword_68AC80 = * ((decltype(&dword_68AC80)) 0x68ac80);
void *& arg4 = * ((decltype(&arg4)) 0x68ac84);
int& dword_68AC88 = * ((decltype(&dword_68AC88)) 0x68ac88);
dialog *& dword_68AC8C = * ((decltype(&dword_68AC8C)) 0x68ac8c);
int& dword_68AC90 = * ((decltype(&dword_68AC90)) 0x68ac90);
int& dword_68AC94 = * ((decltype(&dword_68AC94)) 0x68ac94);
dialog *& dword_68AC98 = * ((decltype(&dword_68AC98)) 0x68ac98);
char& byte_68AC9C = * ((decltype(&byte_68AC9C)) 0x68ac9c);
int& dword_68ACA0 = * ((decltype(&dword_68ACA0)) 0x68aca0);
int& dword_68C0FC = * ((decltype(&dword_68C0FC)) 0x68c0fc);
int& dword_68C100 = * ((decltype(&dword_68C100)) 0x68c100);
void *& dword_68C104 = * ((decltype(&dword_68C104)) 0x68c104);
void *& dword_68C108 = * ((decltype(&dword_68C108)) 0x68c108);
char* byte_68C10C = (decltype(byte_68C10C + 0)) 0x68c10c;
dialog *& dword_68C140 = * ((decltype(&dword_68C140)) 0x68c140);
char& byte_68C144 = * ((decltype(&byte_68C144)) 0x68c144);
dialog *& dword_68C148 = * ((decltype(&dword_68C148)) 0x68c148);
__int16& word_68C14C = * ((decltype(&word_68C14C)) 0x68c14c);
int& CanUpdateCurrentButtonSet = * ((decltype(&CanUpdateCurrentButtonSet)) 0x68c1b0);
dialog *& dword_68C1B4 = * ((decltype(&dword_68C1B4)) 0x68c1b4);
char& byte_68C1B8 = * ((decltype(&byte_68C1B8)) 0x68c1b8);
__int16& word_68C1BC = * ((decltype(&word_68C1BC)) 0x68c1bc);
void *& dword_68C1C0 = * ((decltype(&dword_68C1C0)) 0x68c1c0);
__int16& word_68C1C4 = * ((decltype(&word_68C1C4)) 0x68c1c4);
__int16& word_68C1C8 = * ((decltype(&word_68C1C8)) 0x68c1c8);
__int16& word_68C1CC = * ((decltype(&word_68C1CC)) 0x68c1cc);
__int16* word_68C1D0 = (decltype(word_68C1D0 + 0)) 0x68c1d0;
__int16& word_68C1D2 = * ((decltype(&word_68C1D2)) 0x68c1d2);
__int16& word_68C1D4 = * ((decltype(&word_68C1D4)) 0x68c1d4);
__int16& word_68C1D6 = * ((decltype(&word_68C1D6)) 0x68c1d6);
__int16& word_68C1D8 = * ((decltype(&word_68C1D8)) 0x68c1d8);
__int16& word_68C1DA = * ((decltype(&word_68C1DA)) 0x68c1da);
__int16& word_68C1DC = * ((decltype(&word_68C1DC)) 0x68c1dc);
__int16& word_68C1DE = * ((decltype(&word_68C1DE)) 0x68c1de);
void *& dword_68C1E0 = * ((decltype(&dword_68C1E0)) 0x68c1e0);
char& byte_68C1E4 = * ((decltype(&byte_68C1E4)) 0x68c1e4);
char& byte_68C1E5 = * ((decltype(&byte_68C1E5)) 0x68c1e5);
dialog *& dword_68C1E8 = * ((decltype(&dword_68C1E8)) 0x68c1e8);
int& dword_68C1EC = * ((decltype(&dword_68C1EC)) 0x68c1ec);
dialog *& dword_68C1F0 = * ((decltype(&dword_68C1F0)) 0x68c1f0);
void *& dword_68C1F4 = * ((decltype(&dword_68C1F4)) 0x68c1f4);
char& CanUpdateStatDataDialog = * ((decltype(&CanUpdateStatDataDialog)) 0x68c1f8);
void *& dword_68C1FC = * ((decltype(&dword_68C1FC)) 0x68c1fc);
dialog *& dword_68C200 = * ((decltype(&dword_68C200)) 0x68c200);
void *& dword_68C204 = * ((decltype(&dword_68C204)) 0x68c204);
char* buffer = (decltype(buffer + 0)) 0x68c208;
char& byte_68C20A = * ((decltype(&byte_68C20A)) 0x68c20a);
dialog *& dword_68C220 = * ((decltype(&dword_68C220)) 0x68c220);
dialog *& dword_68C224 = * ((decltype(&dword_68C224)) 0x68c224);
char& byte_68C228 = * ((decltype(&byte_68C228)) 0x68c228);
int& dword_68C22C = * ((decltype(&dword_68C22C)) 0x68c22c);
int& dword_68C230 = * ((decltype(&dword_68C230)) 0x68c230);
dialog *& dword_68C234 = * ((decltype(&dword_68C234)) 0x68c234);
void *& dword_68C238 = * ((decltype(&dword_68C238)) 0x68c238);
char* byte_68C23C = (decltype(byte_68C23C + 0)) 0x68c23c;
char* byte_68C240 = (decltype(byte_68C240 + 0)) 0x68c240;
char& byte_68C300 = * ((decltype(&byte_68C300)) 0x68c300);
int& dword_68C308 = * ((decltype(&dword_68C308)) 0x68c308);
int& dword_68C30C = * ((decltype(&dword_68C30C)) 0x68c30c);
int& dword_68C310 = * ((decltype(&dword_68C310)) 0x68c310);
int& dword_68C314 = * ((decltype(&dword_68C314)) 0x68c314);
int& dword_68C318 = * ((decltype(&dword_68C318)) 0x68c318);
int& dword_68C31C = * ((decltype(&dword_68C31C)) 0x68c31c);
int& dword_68C320 = * ((decltype(&dword_68C320)) 0x68c320);
int& dword_68C324 = * ((decltype(&dword_68C324)) 0x68c324);
int& dword_68C328 = * ((decltype(&dword_68C328)) 0x68c328);
int& dword_68C32C = * ((decltype(&dword_68C32C)) 0x68c32c);
int& dword_68C330 = * ((decltype(&dword_68C330)) 0x68c330);
int& dword_68C334 = * ((decltype(&dword_68C334)) 0x68c334);
int& dword_68C338 = * ((decltype(&dword_68C338)) 0x68c338);
int& dword_68C33C = * ((decltype(&dword_68C33C)) 0x68c33c);
int& dword_68C340 = * ((decltype(&dword_68C340)) 0x68c340);
int& dword_68C344 = * ((decltype(&dword_68C344)) 0x68c344);
char* byte_68C348 = (decltype(byte_68C348 + 0)) 0x68c348;
char* byte_68C368 = (decltype(byte_68C368 + 0)) 0x68c368;
char* byte_68C388 = (decltype(byte_68C388 + 0)) 0x68c388;
char* byte_68C3A8 = (decltype(byte_68C3A8 + 0)) 0x68c3a8;
char* byte_68C3C8 = (decltype(byte_68C3C8 + 0)) 0x68c3c8;
char* byte_68C3E8 = (decltype(byte_68C3E8 + 0)) 0x68c3e8;
char* byte_68C408 = (decltype(byte_68C408 + 0)) 0x68c408;
char* byte_68C428 = (decltype(byte_68C428 + 0)) 0x68c428;
char* SFXData_MuteVolume = (decltype(SFXData_MuteVolume + 0)) 0x68c448;
char* SFXData_Flags2 = (decltype(SFXData_Flags2 + 0)) 0x68c8c0;
__int16* SFXData_Race = (decltype(SFXData_Race + 0)) 0x68cd38;
char* SFXData_Flags1 = (decltype(SFXData_Flags1 + 0)) 0x68d628;
char ** SFXData_SoundFile = (decltype(SFXData_SoundFile + 0)) 0x68daa0;
dialog *& dword_68EC80 = * ((decltype(&dword_68EC80)) 0x68ec80);
void *& dword_68EC84 = * ((decltype(&dword_68EC84)) 0x68ec84);
void *& dword_68EC88 = * ((decltype(&dword_68EC88)) 0x68ec88);
int& dword_68EC90 = * ((decltype(&dword_68EC90)) 0x68ec90);
int& dword_68EC94 = * ((decltype(&dword_68EC94)) 0x68ec94);
int& dword_68EC98 = * ((decltype(&dword_68EC98)) 0x68ec98);
int& dword_68EC9C = * ((decltype(&dword_68EC9C)) 0x68ec9c);
UnknownPlayerRelated* stru_68ECB0 = (decltype(stru_68ECB0 + 0)) 0x68ecb0;
int& dword_68F4F0 = * ((decltype(&dword_68F4F0)) 0x68f4f0);
int& dword_68F4F4 = * ((decltype(&dword_68F4F4)) 0x68f4f4);
int& dword_68F4F8 = * ((decltype(&dword_68F4F8)) 0x68f4f8);
int* PlayerDownloadStatus = (decltype(PlayerDownloadStatus + 0)) 0x68f4fc;
int& dword_68F500 = * ((decltype(&dword_68F500)) 0x68f500);
int& dword_68F504 = * ((decltype(&dword_68F504)) 0x68f504);
int& dword_68F508 = * ((decltype(&dword_68F508)) 0x68f508);
int& dword_68F50C = * ((decltype(&dword_68F50C)) 0x68f50c);
int& dword_68F510 = * ((decltype(&dword_68F510)) 0x68f510);
int& dword_68F514 = * ((decltype(&dword_68F514)) 0x68f514);
int& dword_68F518 = * ((decltype(&dword_68F518)) 0x68f518);
int& dword_68F51C = * ((decltype(&dword_68F51C)) 0x68f51c);
int& dword_68F520 = * ((decltype(&dword_68F520)) 0x68f520);
void *& dword_68F524 = * ((decltype(&dword_68F524)) 0x68f524);
int* dword_68F528 = (decltype(dword_68F528 + 0)) 0x68f528;
int& dword_68F52C = * ((decltype(&dword_68F52C)) 0x68f52c);
int& dword_68F530 = * ((decltype(&dword_68F530)) 0x68f530);
int& dword_68F534 = * ((decltype(&dword_68F534)) 0x68f534);
__int16* word_68F538 = (decltype(word_68F538 + 0)) 0x68f538;
__int16* word_68F53A = (decltype(word_68F53A + 0)) 0x68f53a;
int* dword_68F53C = (decltype(dword_68F53C + 0)) 0x68f53c;
void *& dword_68F558 = * ((decltype(&dword_68F558)) 0x68f558);
__int16* word_68F55C = (decltype(word_68F55C + 0)) 0x68f55c;
__int16* word_68F55E = (decltype(word_68F55E + 0)) 0x68f55e;
int* dword_68F560 = (decltype(dword_68F560 + 0)) 0x68f560;
LPARAM& dword_68F6B8 = * ((decltype(&dword_68F6B8)) 0x68f6b8);
void *& a6 = * ((decltype(&a6)) 0x68f6bc);
void *& dword_68F6C0 = * ((decltype(&dword_68F6C0)) 0x68f6c0);
int& dword_68F6C4 = * ((decltype(&dword_68F6C4)) 0x68f6c4);
HGDIOBJ& dword_68F6C8 = * ((decltype(&dword_68F6C8)) 0x68f6c8);
int& dword_68F6CC = * ((decltype(&dword_68F6CC)) 0x68f6cc);
int& dword_68F6D0 = * ((decltype(&dword_68F6D0)) 0x68f6d0);
void *& dword_68F6D4 = * ((decltype(&dword_68F6D4)) 0x68f6d4);
char *& dword_68F6D8 = * ((decltype(&dword_68F6D8)) 0x68f6d8);
void *& dword_68F6DC = * ((decltype(&dword_68F6DC)) 0x68f6dc);
int& dword_68F6E0 = * ((decltype(&dword_68F6E0)) 0x68f6e0);
int& dword_68F6E4 = * ((decltype(&dword_68F6E4)) 0x68f6e4);
int& dword_68F6E8 = * ((decltype(&dword_68F6E8)) 0x68f6e8);
HGDIOBJ& dword_68F6EC = * ((decltype(&dword_68F6EC)) 0x68f6ec);
HWND& dword_68F6F0 = * ((decltype(&dword_68F6F0)) 0x68f6f0);
HWND& dword_68F6F4 = * ((decltype(&dword_68F6F4)) 0x68f6f4);
int& dword_68F6F8 = * ((decltype(&dword_68F6F8)) 0x68f6f8);
int& dword_68F6FC = * ((decltype(&dword_68F6FC)) 0x68f6fc);
char* dword_68F700 = (decltype(dword_68F700 + 0)) 0x68f700;
int& dword_68F704 = * ((decltype(&dword_68F704)) 0x68f704);
HWND& dword_68F708 = * ((decltype(&dword_68F708)) 0x68f708);
HWND& dword_68F70C = * ((decltype(&dword_68F70C)) 0x68f70c);
int& dword_68F710 = * ((decltype(&dword_68F710)) 0x68f710);
int& dword_68F714 = * ((decltype(&dword_68F714)) 0x68f714);
CHAR* byte_68F718 = (decltype(byte_68F718 + 0)) 0x68f718;
unsigned __int8* byte_68F820 = (decltype(byte_68F820 + 0)) 0x68f820;
int& dword_68F924 = * ((decltype(&dword_68F924)) 0x68f924);
int& dword_68F928 = * ((decltype(&dword_68F928)) 0x68f928);
int& dword_68F92C = * ((decltype(&dword_68F92C)) 0x68f92c);
int& dword_68F930 = * ((decltype(&dword_68F930)) 0x68f930);
int& dword_68F934 = * ((decltype(&dword_68F934)) 0x68f934);
int& dword_68F938 = * ((decltype(&dword_68F938)) 0x68f938);
int& dword_68F93C = * ((decltype(&dword_68F93C)) 0x68f93c);
int& dword_68F940 = * ((decltype(&dword_68F940)) 0x68f940);
int& dword_68F944 = * ((decltype(&dword_68F944)) 0x68f944);
char* byte_68F948 = (decltype(byte_68F948 + 0)) 0x68f948;
int& dword_68FA48 = * ((decltype(&dword_68FA48)) 0x68fa48);
int& a7 = * ((decltype(&a7)) 0x68fa4c);
int* dword_68FA50 = (decltype(dword_68FA50 + 0)) 0x68fa50;
HWND& lParam = * ((decltype(&lParam)) 0x68fa5c);
HWND& dword_68FA60 = * ((decltype(&dword_68FA60)) 0x68fa60);
HWND& dword_68FA64 = * ((decltype(&dword_68FA64)) 0x68fa64);
char* dword_68FA68 = (decltype(dword_68FA68 + 0)) 0x68fa68;
int& dword_68FA6C = * ((decltype(&dword_68FA6C)) 0x68fa6c);
char& byte_68FB70 = * ((decltype(&byte_68FB70)) 0x68fb70);
char& byte_68FC74 = * ((decltype(&byte_68FC74)) 0x68fc74);
HWND& dword_68FC78 = * ((decltype(&dword_68FC78)) 0x68fc78);
int* dword_68FC7C = (decltype(dword_68FC7C + 0)) 0x68fc7c;
HWND& dword_68FC84 = * ((decltype(&dword_68FC84)) 0x68fc84);
char* byte_68FC88 = (decltype(byte_68FC88 + 0)) 0x68fc88;
int& dword_68FD88 = * ((decltype(&dword_68FD88)) 0x68fd88);
char& byte_68FD90 = * ((decltype(&byte_68FD90)) 0x68fd90);
HWND& hWnd = * ((decltype(&hWnd)) 0x68fe94);
HWND& dword_68FE98 = * ((decltype(&dword_68FE98)) 0x68fe98);
char* dword_68FE9C = (decltype(dword_68FE9C + 0)) 0x68fe9c;
int& dword_68FEA0 = * ((decltype(&dword_68FEA0)) 0x68fea0);
int& dword_68FEA4 = * ((decltype(&dword_68FEA4)) 0x68fea4);
void *& dword_68FEA8 = * ((decltype(&dword_68FEA8)) 0x68fea8);
int& dword_68FEAC = * ((decltype(&dword_68FEAC)) 0x68feac);
int& dword_68FEB0 = * ((decltype(&dword_68FEB0)) 0x68feb0);
int& dword_68FEB4 = * ((decltype(&dword_68FEB4)) 0x68feb4);
int& a8 = * ((decltype(&a8)) 0x68feb8);
int& dword_68FEBC = * ((decltype(&dword_68FEBC)) 0x68febc);
int& dword_68FEC0 = * ((decltype(&dword_68FEC0)) 0x68fec0);
void *& dword_68FEC4 = * ((decltype(&dword_68FEC4)) 0x68fec4);
int& dword_68FEC8 = * ((decltype(&dword_68FEC8)) 0x68fec8);
int& dword_68FECC = * ((decltype(&dword_68FECC)) 0x68fecc);
WPARAM& wParam = * ((decltype(&wParam)) 0x68fed0);
int& dword_68FED4 = * ((decltype(&dword_68FED4)) 0x68fed4);
HWND& hDlg = * ((decltype(&hDlg)) 0x68fed8);
LPCSTR& lpString = * ((decltype(&lpString)) 0x68fedc);
int& dword_68FEE0 = * ((decltype(&dword_68FEE0)) 0x68fee0);
int& dword_68FEE4 = * ((decltype(&dword_68FEE4)) 0x68fee4);
AI_Main* AIScriptController = (decltype(AIScriptController + 0)) 0x68fee8;
int& dword_692628 = * ((decltype(&dword_692628)) 0x692628);
__int16* word_69262C = (decltype(word_69262C + 0)) 0x69262c;
int& dword_69265C = * ((decltype(&dword_69265C)) 0x69265c);
int* dword_692660 = (decltype(dword_692660 + 0)) 0x692660;
int& dword_692684 = * ((decltype(&dword_692684)) 0x692684);
baseLocation* Bases = (decltype(Bases + 0)) 0x692688;
int& dword_695568 = * ((decltype(&dword_695568)) 0x695568);
int& dword_69556C = * ((decltype(&dword_69556C)) 0x69556c);
int* dword_695570 = (decltype(dword_695570 + 0)) 0x695570;
int& dword_695574 = * ((decltype(&dword_695574)) 0x695574);
int& dword_695578 = * ((decltype(&dword_695578)) 0x695578);
int& dword_69557C = * ((decltype(&dword_69557C)) 0x69557c);
int& dword_695580 = * ((decltype(&dword_695580)) 0x695580);
int& dword_695584 = * ((decltype(&dword_695584)) 0x695584);
int& dword_695588 = * ((decltype(&dword_695588)) 0x695588);
int& dword_69558C = * ((decltype(&dword_69558C)) 0x69558c);
int& dword_695590 = * ((decltype(&dword_695590)) 0x695590);
int* dword_695594 = (decltype(dword_695594 + 0)) 0x695594;
int& dword_695598 = * ((decltype(&dword_695598)) 0x695598);
int& dword_69559C = * ((decltype(&dword_69559C)) 0x69559c);
int& dword_6955A0 = * ((decltype(&dword_6955A0)) 0x6955a0);
int& dword_6955A4 = * ((decltype(&dword_6955A4)) 0x6955a4);
int& dword_6955A8 = * ((decltype(&dword_6955A8)) 0x6955a8);
int& dword_6955AC = * ((decltype(&dword_6955AC)) 0x6955ac);
int& dword_6955B0 = * ((decltype(&dword_6955B0)) 0x6955b0);
int& dword_6955B4 = * ((decltype(&dword_6955B4)) 0x6955b4);
int* dword_6955B8 = (decltype(dword_6955B8 + 0)) 0x6955b8;
int& dword_6955DC = * ((decltype(&dword_6955DC)) 0x6955dc);
__int16& word_6955E0 = * ((decltype(&word_6955E0)) 0x6955e0);
__int16& word_6955E2 = * ((decltype(&word_6955E2)) 0x6955e2);
CUnit *& dword_6955E4 = * ((decltype(&dword_6955E4)) 0x6955e4);
int& dword_6955E8 = * ((decltype(&dword_6955E8)) 0x6955e8);
int* dword_6955EC = (decltype(dword_6955EC + 0)) 0x6955ec;
int& dword_6955F0 = * ((decltype(&dword_6955F0)) 0x6955f0);
int& dword_6955F4 = * ((decltype(&dword_6955F4)) 0x6955f4);
int& dword_6955F8 = * ((decltype(&dword_6955F8)) 0x6955f8);
int& dword_6955FC = * ((decltype(&dword_6955FC)) 0x6955fc);
int& dword_695600 = * ((decltype(&dword_695600)) 0x695600);
WeaponType& dword_695604 = * ((decltype(&dword_695604)) 0x695604);
int& dword_695608 = * ((decltype(&dword_695608)) 0x695608);
int& dword_69560C = * ((decltype(&dword_69560C)) 0x69560c);
int* dword_695610 = (decltype(dword_695610 + 0)) 0x695610;
int& dword_695790 = * ((decltype(&dword_695790)) 0x695790);
int& dword_695794 = * ((decltype(&dword_695794)) 0x695794);
int& dword_695798 = * ((decltype(&dword_695798)) 0x695798);
int& dword_69579C = * ((decltype(&dword_69579C)) 0x69579c);
int& dword_6957A0 = * ((decltype(&dword_6957A0)) 0x6957a0);
int& dword_6957A4 = * ((decltype(&dword_6957A4)) 0x6957a4);
int& dword_6957A8 = * ((decltype(&dword_6957A8)) 0x6957a8);
int& dword_6957AC = * ((decltype(&dword_6957AC)) 0x6957ac);
int* dword_6957B0 = (decltype(dword_6957B0 + 0)) 0x6957b0;
int& dword_6957D0 = * ((decltype(&dword_6957D0)) 0x6957d0);
int& dword_6957D4 = * ((decltype(&dword_6957D4)) 0x6957d4);
int& dword_6957D8 = * ((decltype(&dword_6957D8)) 0x6957d8);
AiCaptain ** AiRegionCaptains = (decltype(AiRegionCaptains + 0)) 0x69a604;
char* byte_69A628 = (decltype(byte_69A628 + 0)) 0x69a628;
int* dword_69F448 = (decltype(dword_69F448 + 0)) 0x69f448;
int& dword_69F44C = * ((decltype(&dword_69F44C)) 0x69f44c);
int& dword_69F450 = * ((decltype(&dword_69F450)) 0x69f450);
int& dword_69F454 = * ((decltype(&dword_69F454)) 0x69f454);
int& dword_69F458 = * ((decltype(&dword_69F458)) 0x69f458);
int& dword_69F45C = * ((decltype(&dword_69F45C)) 0x69f45c);
int& dword_69F460 = * ((decltype(&dword_69F460)) 0x69f460);
int& dword_69F464 = * ((decltype(&dword_69F464)) 0x69f464);
int& dword_6AA04C = * ((decltype(&dword_6AA04C)) 0x6aa04c);
int* dword_6AA050 = (decltype(dword_6AA050 + 0)) 0x6aa050;
int* dword_6AA054 = (decltype(dword_6AA054 + 0)) 0x6aa054;
int& dword_6AA058 = * ((decltype(&dword_6AA058)) 0x6aa058);
int& dword_6AA05C = * ((decltype(&dword_6AA05C)) 0x6aa05c);
int& dword_6AA060 = * ((decltype(&dword_6AA060)) 0x6aa060);
int& dword_6AA064 = * ((decltype(&dword_6AA064)) 0x6aa064);
int& dword_6AA068 = * ((decltype(&dword_6AA068)) 0x6aa068);
int& dword_6AA06C = * ((decltype(&dword_6AA06C)) 0x6aa06c);
int& dword_6AA070 = * ((decltype(&dword_6AA070)) 0x6aa070);
int& dword_6AA074 = * ((decltype(&dword_6AA074)) 0x6aa074);
int& dword_6AA078 = * ((decltype(&dword_6AA078)) 0x6aa078);
int& dword_6AA07C = * ((decltype(&dword_6AA07C)) 0x6aa07c);
int& dword_6AA080 = * ((decltype(&dword_6AA080)) 0x6aa080);
int& dword_6AA084 = * ((decltype(&dword_6AA084)) 0x6aa084);
int& dword_6AA088 = * ((decltype(&dword_6AA088)) 0x6aa088);
int& dword_6AA08C = * ((decltype(&dword_6AA08C)) 0x6aa08c);
int* dword_6BB20C = (decltype(dword_6BB20C + 0)) 0x6bb20c;
int* dword_6BB210 = (decltype(dword_6BB210 + 0)) 0x6bb210;
int* dword_6BB59C = (decltype(dword_6BB59C + 0)) 0x6bb59c;
int* dword_6BB5A0 = (decltype(dword_6BB5A0 + 0)) 0x6bb5a0;
int& MaxUnitHeight = * ((decltype(&MaxUnitHeight)) 0x6bb930);
int* dword_6BD3D0 = (decltype(dword_6BD3D0 + 0)) 0x6bd3d0;
int& dword_6BEE64 = * ((decltype(&dword_6BEE64)) 0x6bee64);
int& MaxUnitWidth = * ((decltype(&MaxUnitWidth)) 0x6bee68);
int* dword_6BEE6C = (decltype(dword_6BEE6C + 0)) 0x6bee6c;
int* dword_6BEE70 = (decltype(dword_6BEE70 + 0)) 0x6bee70;
int& dword_6BEE74 = * ((decltype(&dword_6BEE74)) 0x6bee74);
int& dword_6BEE78 = * ((decltype(&dword_6BEE78)) 0x6bee78);
int& dword_6BEE7C = * ((decltype(&dword_6BEE7C)) 0x6bee7c);
int& dword_6BEE80 = * ((decltype(&dword_6BEE80)) 0x6bee80);
int& dword_6BEE84 = * ((decltype(&dword_6BEE84)) 0x6bee84);
int& dword_6BEE88 = * ((decltype(&dword_6BEE88)) 0x6bee88);
void *& dword_6BEE8C = * ((decltype(&dword_6BEE8C)) 0x6bee8c);
int& dword_6BEE90 = * ((decltype(&dword_6BEE90)) 0x6bee90);
__int16& word_6BEE94 = * ((decltype(&word_6BEE94)) 0x6bee94);
char& byte_6BEE96 = * ((decltype(&byte_6BEE96)) 0x6bee96);
char& byte_6BEE97 = * ((decltype(&byte_6BEE97)) 0x6bee97);
char& byte_6BEE98 = * ((decltype(&byte_6BEE98)) 0x6bee98);
char& byte_6BEE99 = * ((decltype(&byte_6BEE99)) 0x6bee99);
char& byte_6BEE9A = * ((decltype(&byte_6BEE9A)) 0x6bee9a);
char& byte_6BEE9B = * ((decltype(&byte_6BEE9B)) 0x6bee9b);
int& dword_6BEEA0 = * ((decltype(&dword_6BEEA0)) 0x6beea0);
int& dword_6BEEA4 = * ((decltype(&dword_6BEEA4)) 0x6beea4);
int& dword_6BEEA8 = * ((decltype(&dword_6BEEA8)) 0x6beea8);
int& dword_6BEEAC = * ((decltype(&dword_6BEEAC)) 0x6beeac);
int& dword_6BEEB0 = * ((decltype(&dword_6BEEB0)) 0x6beeb0);
int* dword_6C0DD0 = (decltype(dword_6C0DD0 + 0)) 0x6c0dd0;
int& dword_6C0DD4 = * ((decltype(&dword_6C0DD4)) 0x6c0dd4);
int& dword_6C102C = * ((decltype(&dword_6C102C)) 0x6c102c);
int& dword_6C1030 = * ((decltype(&dword_6C1030)) 0x6c1030);
int& dword_6C1074 = * ((decltype(&dword_6C1074)) 0x6c1074);
int& dword_6C1078 = * ((decltype(&dword_6C1078)) 0x6c1078);
int& dword_6C107C = * ((decltype(&dword_6C107C)) 0x6c107c);
__int64& qword_6C1080 = * ((decltype(&qword_6C1080)) 0x6c1080);
__int16& word_6C10A8 = * ((decltype(&word_6C10A8)) 0x6c10a8);
int& dword_6C2310 = * ((decltype(&dword_6C2310)) 0x6c2310);
int& dword_6C2314 = * ((decltype(&dword_6C2314)) 0x6c2314);
int* dword_6C2318 = (decltype(dword_6C2318 + 0)) 0x6c2318;
CSprite *& dword_6C4A28 = * ((decltype(&dword_6C4A28)) 0x6c4a28);
int& dword_6C4A2C = * ((decltype(&dword_6C4A2C)) 0x6c4a2c);
int* dword_6C4A30 = (decltype(dword_6C4A30 + 0)) 0x6c4a30;
int* dword_6C4A34 = (decltype(dword_6C4A34 + 0)) 0x6c4a34;
int& dword_6C4A38 = * ((decltype(&dword_6C4A38)) 0x6c4a38);
int& dword_6C4A3C = * ((decltype(&dword_6C4A3C)) 0x6c4a3c);
u8* Flingy_MovementControl = (decltype(Flingy_MovementControl + 0)) 0x6c9858;
u32* Flingy_HaltDistance = (decltype(Flingy_HaltDistance + 0)) 0x6c9930;
u16* Flingy_Acceleration = (decltype(Flingy_Acceleration + 0)) 0x6c9c78;
u8* Flingy_TurnSpeed = (decltype(Flingy_TurnSpeed + 0)) 0x6c9e20;
u32* Flingy_TopSpeed = (decltype(Flingy_TopSpeed + 0)) 0x6c9ef8;
u8* Flingy_Unused = (decltype(Flingy_Unused + 0)) 0x6ca240;
u16* Flingy_SpriteID = (decltype(Flingy_SpriteID + 0)) 0x6ca318;
int* AiSupplyReserved = (decltype(AiSupplyReserved + 0)) 0x6ca4bc;
int* dword_6CA4EC = (decltype(dword_6CA4EC + 0)) 0x6ca4ec;
int* dword_6CA51C = (decltype(dword_6CA51C + 0)) 0x6ca51c;
void *& dword_6CA54C = * ((decltype(&dword_6CA54C)) 0x6ca54c);
int& dword_6CA550 = * ((decltype(&dword_6CA550)) 0x6ca550);
int& dword_6CA554 = * ((decltype(&dword_6CA554)) 0x6ca554);
int& dword_6CA558 = * ((decltype(&dword_6CA558)) 0x6ca558);
int& dword_6CA55C = * ((decltype(&dword_6CA55C)) 0x6ca55c);
int& dword_6CA560 = * ((decltype(&dword_6CA560)) 0x6ca560);
int& dword_6CA564 = * ((decltype(&dword_6CA564)) 0x6ca564);
int& dword_6CA568 = * ((decltype(&dword_6CA568)) 0x6ca568);
char& byte_6CA664 = * ((decltype(&byte_6CA664)) 0x6ca664);
char* byte_6CA668 = (decltype(byte_6CA668 + 0)) 0x6ca668;
char* byte_6CA76C = (decltype(byte_6CA76C + 0)) 0x6ca76c;
char* byte_6CA7A0 = (decltype(byte_6CA7A0 + 0)) 0x6ca7a0;
char* byte_6CA818 = (decltype(byte_6CA818 + 0)) 0x6ca818;
char* byte_6CA91C = (decltype(byte_6CA91C + 0)) 0x6ca91c;
int& dword_6CA93C = * ((decltype(&dword_6CA93C)) 0x6ca93c);
__int16& word_6CA940 = * ((decltype(&word_6CA940)) 0x6ca940);
int* dword_6CA94C = (decltype(dword_6CA94C + 0)) 0x6ca94c;
int* dword_6CA950 = (decltype(dword_6CA950 + 0)) 0x6ca950;
int* dword_6CA954 = (decltype(dword_6CA954 + 0)) 0x6ca954;
int* dword_6CA958 = (decltype(dword_6CA958 + 0)) 0x6ca958;
int* dword_6CA95C = (decltype(dword_6CA95C + 0)) 0x6ca95c;
int* dword_6CA960 = (decltype(dword_6CA960 + 0)) 0x6ca960;
char* byte_6CA988 = (decltype(byte_6CA988 + 0)) 0x6ca988;
int& dword_6CA9EC = * ((decltype(&dword_6CA9EC)) 0x6ca9ec);
char& byte_6CA9F0 = * ((decltype(&byte_6CA9F0)) 0x6ca9f0);
char* byte_6CA9F8 = (decltype(byte_6CA9F8 + 0)) 0x6ca9f8;
char* byte_6CAB08 = (decltype(byte_6CAB08 + 0)) 0x6cab08;
__int16& word_6CAC0C = * ((decltype(&word_6CAC0C)) 0x6cac0c);
char* byte_6CAC10 = (decltype(byte_6CAC10 + 0)) 0x6cac10;
char* byte_6CAC78 = (decltype(byte_6CAC78 + 0)) 0x6cac78;
int* dword_6CAD98 = (decltype(dword_6CAD98 + 0)) 0x6cad98;
int& dword_6CAD9C = * ((decltype(&dword_6CAD9C)) 0x6cad9c);
int& dword_6CAF90 = * ((decltype(&dword_6CAF90)) 0x6caf90);
int& dword_6CAF94 = * ((decltype(&dword_6CAF94)) 0x6caf94);
int& dword_6CAF98 = * ((decltype(&dword_6CAF98)) 0x6caf98);
int& dword_6CAFA0 = * ((decltype(&dword_6CAFA0)) 0x6cafa0);
int& dword_6CD9A0 = * ((decltype(&dword_6CD9A0)) 0x6cd9a0);
int& dword_6CD9A4 = * ((decltype(&dword_6CD9A4)) 0x6cd9a4);
int& dword_6CDBA4 = * ((decltype(&dword_6CDBA4)) 0x6cdba4);
int& dword_6CDBA8 = * ((decltype(&dword_6CDBA8)) 0x6cdba8);
int& dword_6CDBAC = * ((decltype(&dword_6CDBAC)) 0x6cdbac);
RECT& Rect = * ((decltype(&Rect)) 0x6cddb0);
int& InputFlags = * ((decltype(&InputFlags)) 0x6cddc0);
POINT& Mouse = * ((decltype(&Mouse)) 0x6cddc4);
CHAR* Text = (decltype(Text + 0)) 0x6cddd0;
char& byte_6CDFCF = * ((decltype(&byte_6CDFCF)) 0x6cdfcf);
int& main_thread_id_maybe = * ((decltype(&main_thread_id_maybe)) 0x6cdfd0);
int& GameSpeed = * ((decltype(&GameSpeed)) 0x6cdfd4);
int& MouseScrollSpeed = * ((decltype(&MouseScrollSpeed)) 0x6cdfd8);
int& KeyScrollSpeed = * ((decltype(&KeyScrollSpeed)) 0x6cdfdc);
int& dword_6CDFE0 = * ((decltype(&dword_6CDFE0)) 0x6cdfe0);
int& dword_6CDFE4 = * ((decltype(&dword_6CDFE4)) 0x6cdfe4);
int& dword_6CDFE8 = * ((decltype(&dword_6CDFE8)) 0x6cdfe8);
int& dword_6CDFEC = * ((decltype(&dword_6CDFEC)) 0x6cdfec);
int& dword_6CDFF0 = * ((decltype(&dword_6CDFF0)) 0x6cdff0);
int& dword_6CDFF4 = * ((decltype(&dword_6CDFF4)) 0x6cdff4);
char& byte_6CDFF8 = * ((decltype(&byte_6CDFF8)) 0x6cdff8);
char* byte_6CE010 = (decltype(byte_6CE010 + 0)) 0x6ce010;
char* byte_6CE011 = (decltype(byte_6CE011 + 0)) 0x6ce011;
char* byte_6CE012 = (decltype(byte_6CE012 + 0)) 0x6ce012;
char* byte_6CE013 = (decltype(byte_6CE013 + 0)) 0x6ce013;
fontMemStruct& PrintXY_Font = * ((decltype(&PrintXY_Font)) 0x6ce0c0);
int& dword_6CE0D0 = * ((decltype(&dword_6CE0D0)) 0x6ce0d0);
char& byte_6CE0D4 = * ((decltype(&byte_6CE0D4)) 0x6ce0d4);
int& dword_6CE0D8 = * ((decltype(&dword_6CE0D8)) 0x6ce0d8);
int& dword_6CE0DC = * ((decltype(&dword_6CE0DC)) 0x6ce0dc);
int& PrintXY_PositionY = * ((decltype(&PrintXY_PositionY)) 0x6ce0e0);
int& dword_6CE0E4 = * ((decltype(&dword_6CE0E4)) 0x6ce0e4);
int& dword_6CE0E8 = * ((decltype(&dword_6CE0E8)) 0x6ce0e8);
char& byte_6CE0EC = * ((decltype(&byte_6CE0EC)) 0x6ce0ec);
char& byte_6CE0ED = * ((decltype(&byte_6CE0ED)) 0x6ce0ed);
int& dword_6CE0F0 = * ((decltype(&dword_6CE0F0)) 0x6ce0f0);
Font ** FontBase = (decltype(FontBase + 0)) 0x6ce0f4;
char& byte_6CE104 = * ((decltype(&byte_6CE104)) 0x6ce104);
int& PrintXY_PositionX = * ((decltype(&PrintXY_PositionX)) 0x6ce108);
int& dword_6CE10C = * ((decltype(&dword_6CE10C)) 0x6ce10c);
char& PrintXY_Size = * ((decltype(&PrintXY_Size)) 0x6ce110);
char& byte_6CE111 = * ((decltype(&byte_6CE111)) 0x6ce111);
char* byte_6CE2A0 = (decltype(byte_6CE2A0 + 0)) 0x6ce2a0;
char* byte_6CE31C = (decltype(byte_6CE31C + 0)) 0x6ce31c;
char* byte_6CE31D = (decltype(byte_6CE31D + 0)) 0x6ce31d;
char* byte_6CE31E = (decltype(byte_6CE31E + 0)) 0x6ce31e;
PALETTEENTRY* GamePalette = (decltype(GamePalette + 0)) 0x6ce320;
PALETTEENTRY* stru_6CE720 = (decltype(stru_6CE720 + 0)) 0x6ce720;
char* byte_6CEB20 = (decltype(byte_6CEB20 + 0)) 0x6ceb20;
char& byte_6CEB22 = * ((decltype(&byte_6CEB22)) 0x6ceb22);
char& byte_6CEB25 = * ((decltype(&byte_6CEB25)) 0x6ceb25);
char& byte_6CEB28 = * ((decltype(&byte_6CEB28)) 0x6ceb28);
char& byte_6CEB2C = * ((decltype(&byte_6CEB2C)) 0x6ceb2c);
char& byte_6CEB2F = * ((decltype(&byte_6CEB2F)) 0x6ceb2f);
char& byte_6CEB30 = * ((decltype(&byte_6CEB30)) 0x6ceb30);
char& byte_6CEB31 = * ((decltype(&byte_6CEB31)) 0x6ceb31);
char& byte_6CEB32 = * ((decltype(&byte_6CEB32)) 0x6ceb32);
char& byte_6CEB33 = * ((decltype(&byte_6CEB33)) 0x6ceb33);
char& byte_6CEB34 = * ((decltype(&byte_6CEB34)) 0x6ceb34);
char& byte_6CEB39 = * ((decltype(&byte_6CEB39)) 0x6ceb39);
char* byte_6CEB3D = (decltype(byte_6CEB3D + 0)) 0x6ceb3d;
char* byte_6CEB3E = (decltype(byte_6CEB3E + 0)) 0x6ceb3e;
PALETTEENTRY* stru_6CEB40 = (decltype(stru_6CEB40 + 0)) 0x6ceb40;
int& dword_6CEF40 = * ((decltype(&dword_6CEF40)) 0x6cef40);
int& dword_6CEF44 = * ((decltype(&dword_6CEF44)) 0x6cef44);
int& dword_6CEF48 = * ((decltype(&dword_6CEF48)) 0x6cef48);
int& dword_6CEF4C = * ((decltype(&dword_6CEF4C)) 0x6cef4c);
layer* ScreenLayers = (decltype(ScreenLayers + 0)) 0x6cef50;
Bitmap& GameScreenBuffer = * ((decltype(&GameScreenBuffer)) 0x6ceff0);
u8* RefreshRegions = (decltype(RefreshRegions + 0)) 0x6ceff8;
Bitmap *& dword_6CF4A8 = * ((decltype(&dword_6CF4A8)) 0x6cf4a8);
char& DrawColor = * ((decltype(&DrawColor)) 0x6cf4ac);
int& dword_6CF4B4 = * ((decltype(&dword_6CF4B4)) 0x6cf4b4);
int& dword_6CF4BC = * ((decltype(&dword_6CF4BC)) 0x6cf4bc);
dialog *& dword_6D04B0 = * ((decltype(&dword_6D04B0)) 0x6d04b0);
__int16& word_6D04B4 = * ((decltype(&word_6D04B4)) 0x6d04b4);
__int16& word_6D04B8 = * ((decltype(&word_6D04B8)) 0x6d04b8);
int& dword_6D04BC = * ((decltype(&dword_6D04BC)) 0x6d04bc);
__int16& word_6D04C0 = * ((decltype(&word_6D04C0)) 0x6d04c0);
__int16& word_6D04C4 = * ((decltype(&word_6D04C4)) 0x6d04c4);
int& dword_6D04C8 = * ((decltype(&dword_6D04C8)) 0x6d04c8);
int& dword_6D04CC = * ((decltype(&dword_6D04CC)) 0x6d04cc);
__int16& word_6D04D0 = * ((decltype(&word_6D04D0)) 0x6d04d0);
__int16& word_6D04D4 = * ((decltype(&word_6D04D4)) 0x6d04d4);
__int16& word_6D04D8 = * ((decltype(&word_6D04D8)) 0x6d04d8);
__int16& word_6D04DC = * ((decltype(&word_6D04DC)) 0x6d04dc);
int& dword_6D04E0 = * ((decltype(&dword_6D04E0)) 0x6d04e0);
__int16& word_6D04E4 = * ((decltype(&word_6D04E4)) 0x6d04e4);
__int16& word_6D04E8 = * ((decltype(&word_6D04E8)) 0x6d04e8);
int& dword_6D04EC = * ((decltype(&dword_6D04EC)) 0x6d04ec);
int& dword_6D04F0 = * ((decltype(&dword_6D04F0)) 0x6d04f0);
int& dword_6D04F4 = * ((decltype(&dword_6D04F4)) 0x6d04f4);
__int16& word_6D04F8 = * ((decltype(&word_6D04F8)) 0x6d04f8);
__int16& word_6D04FC = * ((decltype(&word_6D04FC)) 0x6d04fc);
__int16& word_6D0500 = * ((decltype(&word_6D0500)) 0x6d0500);
__int16& word_6D0504 = * ((decltype(&word_6D0504)) 0x6d0504);
__int16& word_6D0508 = * ((decltype(&word_6D0508)) 0x6d0508);
int& dword_6D050C = * ((decltype(&dword_6D050C)) 0x6d050c);
__int16& word_6D0510 = * ((decltype(&word_6D0510)) 0x6d0510);
__int16& word_6D0514 = * ((decltype(&word_6D0514)) 0x6d0514);
int& dword_6D0518 = * ((decltype(&dword_6D0518)) 0x6d0518);
int& LastControlID = * ((decltype(&LastControlID)) 0x6d051c);
int& dword_6D0520 = * ((decltype(&dword_6D0520)) 0x6d0520);
__int16& word_6D0524 = * ((decltype(&word_6D0524)) 0x6d0524);
int& dword_6D0528 = * ((decltype(&dword_6D0528)) 0x6d0528);
__int16& word_6D052C = * ((decltype(&word_6D052C)) 0x6d052c);
int& dword_6D0530 = * ((decltype(&dword_6D0530)) 0x6d0530);
__int16& word_6D0534 = * ((decltype(&word_6D0534)) 0x6d0534);
dialog *& dword_6D0538 = * ((decltype(&dword_6D0538)) 0x6d0538);
void *& dword_6D053C = * ((decltype(&dword_6D053C)) 0x6d053c);
HANDLE& dword_6D0540 = * ((decltype(&dword_6D0540)) 0x6d0540);
int& dword_6D0548 = * ((decltype(&dword_6D0548)) 0x6d0548);
int& dword_6D0550 = * ((decltype(&dword_6D0550)) 0x6d0550);
int& dword_6D0554 = * ((decltype(&dword_6D0554)) 0x6d0554);
int& dword_6D0558 = * ((decltype(&dword_6D0558)) 0x6d0558);
int& dword_6D055C = * ((decltype(&dword_6D055C)) 0x6d055c);
int& dword_6D0560 = * ((decltype(&dword_6D0560)) 0x6d0560);
int& dword_6D0564 = * ((decltype(&dword_6D0564)) 0x6d0564);
int& dword_6D0568 = * ((decltype(&dword_6D0568)) 0x6d0568);
HANDLE& dword_6D0588 = * ((decltype(&dword_6D0588)) 0x6d0588);
int* dword_6D058C = (decltype(dword_6D058C + 0)) 0x6d058c;
int* dword_6D0590 = (decltype(dword_6D0590 + 0)) 0x6d0590;
int& dword_6D059C = * ((decltype(&dword_6D059C)) 0x6d059c);
int& dword_6D05A0 = * ((decltype(&dword_6D05A0)) 0x6d05a0);
char& byte_6D05A4 = * ((decltype(&byte_6D05A4)) 0x6d05a4);
void *& dword_6D05A8 = * ((decltype(&dword_6D05A8)) 0x6d05a8);
int& dword_6D05AC = * ((decltype(&dword_6D05AC)) 0x6d05ac);
__int16& word_6D09B0 = * ((decltype(&word_6D09B0)) 0x6d09b0);
char& byte_6D09B2 = * ((decltype(&byte_6D09B2)) 0x6d09b2);
_DWORD* dword_6D09B8 = (decltype(dword_6D09B8 + 0)) 0x6d09b8;
int& dword_6D0AA8 = * ((decltype(&dword_6D0AA8)) 0x6d0aa8);
int& dword_6D0AF8 = * ((decltype(&dword_6D0AF8)) 0x6d0af8);
char& byte_6D0B50 = * ((decltype(&byte_6D0B50)) 0x6d0b50);
char& byte_6D0C50 = * ((decltype(&byte_6D0C50)) 0x6d0c50);
__int16& word_6D0C54 = * ((decltype(&word_6D0C54)) 0x6d0c54);
dialog *& dword_6D0C58 = * ((decltype(&dword_6D0C58)) 0x6d0c58);
__int16& word_6D0C5C = * ((decltype(&word_6D0C5C)) 0x6d0c5c);
__int16& word_6D0C60 = * ((decltype(&word_6D0C60)) 0x6d0c60);
grpHead *& TerrainGraphics = * ((decltype(&TerrainGraphics)) 0x6d0c64);
TileID *& location = * ((decltype(&location)) 0x6d0c68);
int& dword_6D0C6C = * ((decltype(&dword_6D0C6C)) 0x6d0c6c);
int (__stdcall *&dword_6D0C70)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD) = *((decltype(&dword_6D0C70)) 0x6d0c70);
int (__stdcall *&dword_6D0C74)(_DWORD, _DWORD) = *((decltype(&dword_6D0C74)) 0x6d0c74);
int (__stdcall *&dword_6D0C78)(_DWORD, _DWORD) = *((decltype(&dword_6D0C78)) 0x6d0c78);
int (__stdcall *&dword_6D0C7C)(_DWORD) = *((decltype(&dword_6D0C7C)) 0x6d0c7c);
char* byte_6D0C80 = (decltype(byte_6D0C80 + 0)) 0x6d0c80;
u8 *& CreepEdgeData = * ((decltype(&CreepEdgeData)) 0x6d0e80);
TileID *& dword_6D0E84 = * ((decltype(&dword_6D0E84)) 0x6d0e84);
char* byte_6D0E88 = (decltype(byte_6D0E88 + 0)) 0x6d0e88;
int& dword_6D0F08 = * ((decltype(&dword_6D0F08)) 0x6d0f08);
int& dword_6D0F0C = * ((decltype(&dword_6D0F0C)) 0x6d0f0c);
int& dword_6D0F10 = * ((decltype(&dword_6D0F10)) 0x6d0f10);
dlgEvent *& InReplay = * ((decltype(&InReplay)) 0x6d0f14);
int& ReplayVision = * ((decltype(&ReplayVision)) 0x6d0f18);
int& ReplayRevealAll = * ((decltype(&ReplayRevealAll)) 0x6d0f1c);
int& dword_6D0F20 = * ((decltype(&dword_6D0F20)) 0x6d0f20);
void *& dword_6D0F24 = * ((decltype(&dword_6D0F24)) 0x6d0f24);
dialog *& dword_6D0F28 = * ((decltype(&dword_6D0F28)) 0x6d0f28);
int& dword_6D0F2C = * ((decltype(&dword_6D0F2C)) 0x6d0f2c);
char& byte_6D0F30 = * ((decltype(&byte_6D0F30)) 0x6d0f30);
int& ReplayFrames = * ((decltype(&ReplayFrames)) 0x6d0f31);
MapData& word_6D0F35 = * ((decltype(&word_6D0F35)) 0x6d0f35);
int& dword_6D0F37 = * ((decltype(&dword_6D0F37)) 0x6d0f37);
int& dword_6D0F3B = * ((decltype(&dword_6D0F3B)) 0x6d0f3b);
int& dword_6D0F3F = * ((decltype(&dword_6D0F3F)) 0x6d0f3f);
char& byte_6D0F43 = * ((decltype(&byte_6D0F43)) 0x6d0f43);
char& byte_6D0F69 = * ((decltype(&byte_6D0F69)) 0x6d0f69);
char& byte_6D0F6A = * ((decltype(&byte_6D0F6A)) 0x6d0f6a);
char& byte_6D0F76 = * ((decltype(&byte_6D0F76)) 0x6d0f76);
int& dword_6D1181 = * ((decltype(&dword_6D1181)) 0x6d1181);
int& dword_6D1185 = * ((decltype(&dword_6D1185)) 0x6d1185);
int& dword_6D1189 = * ((decltype(&dword_6D1189)) 0x6d1189);
int& dword_6D118D = * ((decltype(&dword_6D118D)) 0x6d118d);
int& dword_6D1191 = * ((decltype(&dword_6D1191)) 0x6d1191);
int& dword_6D1195 = * ((decltype(&dword_6D1195)) 0x6d1195);
int& dword_6D1199 = * ((decltype(&dword_6D1199)) 0x6d1199);
int& dword_6D119D = * ((decltype(&dword_6D119D)) 0x6d119d);
int& dword_6D11A1 = * ((decltype(&dword_6D11A1)) 0x6d11a1);
int& dword_6D11A5 = * ((decltype(&dword_6D11A5)) 0x6d11a5);
int& dword_6D11AC = * ((decltype(&dword_6D11AC)) 0x6d11ac);
int& dword_6D11B0 = * ((decltype(&dword_6D11B0)) 0x6d11b0);
int& dword_6D11B4 = * ((decltype(&dword_6D11B4)) 0x6d11b4);
int& dword_6D11B8 = * ((decltype(&dword_6D11B8)) 0x6d11b8);
MenuPosition& glGluesMode = * ((decltype(&glGluesMode)) 0x6d11bc);
int& OpheliaEnabled = * ((decltype(&OpheliaEnabled)) 0x6d11c0);
int& dword_6D11C4 = * ((decltype(&dword_6D11C4)) 0x6d11c4);
int& IsInGameLoop = * ((decltype(&IsInGameLoop)) 0x6d11c8);
int& dword_6D11CC = * ((decltype(&dword_6D11CC)) 0x6d11cc);
char& byte_6D11D0 = * ((decltype(&byte_6D11D0)) 0x6d11d0);
int& dword_6D11D4 = * ((decltype(&dword_6D11D4)) 0x6d11d4);
int& dword_6D11D8 = * ((decltype(&dword_6D11D8)) 0x6d11d8);
int& dword_6D11DC = * ((decltype(&dword_6D11DC)) 0x6d11dc);
int& dword_6D11E4 = * ((decltype(&dword_6D11E4)) 0x6d11e4);
int& dword_6D11E8 = * ((decltype(&dword_6D11E8)) 0x6d11e8);
char& GameState = * ((decltype(&GameState)) 0x6d11ec);
int& dword_6D11F0 = * ((decltype(&dword_6D11F0)) 0x6d11f0);
CUnit *& dword_6D11F4 = * ((decltype(&dword_6D11F4)) 0x6d11f4);
CBullet *& dword_6D11F8 = * ((decltype(&dword_6D11F8)) 0x6d11f8);
CUnit *& dword_6D11FC = * ((decltype(&dword_6D11FC)) 0x6d11fc);
StatusFlags& dword_6D1200 = * ((decltype(&dword_6D1200)) 0x6d1200);
int& dword_6D1204 = * ((decltype(&dword_6D1204)) 0x6d1204);
int (*&dword_6D1208)(void) = *((decltype(&dword_6D1208)) 0x6d1208);
HACCEL& hAccTable = * ((decltype(&hAccTable)) 0x6d120c);
int& dword_6D1210 = * ((decltype(&dword_6D1210)) 0x6d1210);
char& byte_6D1214 = * ((decltype(&byte_6D1214)) 0x6d1214);
FILE *& dword_6D1218 = * ((decltype(&dword_6D1218)) 0x6d1218);
char& byte_6D121C = * ((decltype(&byte_6D121C)) 0x6d121c);
WORD *& dword_6D1220 = * ((decltype(&dword_6D1220)) 0x6d1220);
char& byte_6D1224 = * ((decltype(&byte_6D1224)) 0x6d1224);
char& byte_6D1225 = * ((decltype(&byte_6D1225)) 0x6d1225);
void (__thiscall *&dword_6D1234)(dialog *) = *((decltype(&dword_6D1234)) 0x6d1234);
StringTbl& StatTxtTbl = * ((decltype(&StatTxtTbl)) 0x6d1238);
void *& dword_6D123C = * ((decltype(&dword_6D123C)) 0x6d123c);
void *& dword_6D1240 = * ((decltype(&dword_6D1240)) 0x6d1240);
int& dword_6D1244 = * ((decltype(&dword_6D1244)) 0x6d1244);
int& dword_6D1248 = * ((decltype(&dword_6D1248)) 0x6d1248);
int (__thiscall *&dword_6D124C)(_DWORD) = *((decltype(&dword_6D124C)) 0x6d124c);
void *& dword_6D1250 = * ((decltype(&dword_6D1250)) 0x6d1250);
void *& dword_6D1254 = * ((decltype(&dword_6D1254)) 0x6d1254);
void *& dword_6D1258 = * ((decltype(&dword_6D1258)) 0x6d1258);
void *& dword_6D125C = * ((decltype(&dword_6D125C)) 0x6d125c);
ActiveTile *& ActiveTileArray = * ((decltype(&ActiveTileArray)) 0x6d1260);
char& byte_6D1264 = * ((decltype(&byte_6D1264)) 0x6d1264);
char& byte_6D1265 = * ((decltype(&byte_6D1265)) 0x6d1265);
char& byte_6D1266 = * ((decltype(&byte_6D1266)) 0x6d1266);
IDirectSoundBuffer *& dword_6D1268 = * ((decltype(&dword_6D1268)) 0x6d1268);
struct_5* stru_6D1270 = (decltype(stru_6D1270 + 0)) 0x6d1270;
HMODULE& dsound_dll = * ((decltype(&dsound_dll)) 0x6d59f0);
IDirectSound *& direct_sound = * ((decltype(&direct_sound)) 0x6d59f4);
IDirectSoundBuffer *& soundbuffer = * ((decltype(&soundbuffer)) 0x6d59f8);
int& dword_6D59FC = * ((decltype(&dword_6D59FC)) 0x6d59fc);
HANDLE& dword_6D5A00 = * ((decltype(&dword_6D5A00)) 0x6d5a00);
HANDLE& hHandle = * ((decltype(&hHandle)) 0x6d5a04);
int& dword_6D5A08 = * ((decltype(&dword_6D5A08)) 0x6d5a08);
int& dword_6D5A0C = * ((decltype(&dword_6D5A0C)) 0x6d5a0c);
char& byte_6D5A10 = * ((decltype(&byte_6D5A10)) 0x6d5a10);
int& dword_6D5A14 = * ((decltype(&dword_6D5A14)) 0x6d5a14);
void *& dword_6D5A18 = * ((decltype(&dword_6D5A18)) 0x6d5a18);
void *& dword_6D5A1C = * ((decltype(&dword_6D5A1C)) 0x6d5a1c);
int& dword_6D5A20 = * ((decltype(&dword_6D5A20)) 0x6d5a20);
dialog *& dword_6D5A24 = * ((decltype(&dword_6D5A24)) 0x6d5a24);
int& dword_6D5A28 = * ((decltype(&dword_6D5A28)) 0x6d5a28);
int& dword_6D5A2C = * ((decltype(&dword_6D5A2C)) 0x6d5a2c);
dialog *& dword_6D5A30 = * ((decltype(&dword_6D5A30)) 0x6d5a30);
int& dword_6D5A38 = * ((decltype(&dword_6D5A38)) 0x6d5a38);
dialog *& dword_6D5A3C = * ((decltype(&dword_6D5A3C)) 0x6d5a3c);
FnInteract *& dword_6D5A40 = * ((decltype(&dword_6D5A40)) 0x6d5a40);
void *& dword_6D5A44 = * ((decltype(&dword_6D5A44)) 0x6d5a44);
int& dword_6D5A48 = * ((decltype(&dword_6D5A48)) 0x6d5a48);
int& dword_6D5A4C = * ((decltype(&dword_6D5A4C)) 0x6d5a4c);
int& dword_6D5A50 = * ((decltype(&dword_6D5A50)) 0x6d5a50);
int& dword_6D5A54 = * ((decltype(&dword_6D5A54)) 0x6d5a54);
dialog *& dword_6D5A58 = * ((decltype(&dword_6D5A58)) 0x6d5a58);
FnInteract *& dword_6D5A5C = * ((decltype(&dword_6D5A5C)) 0x6d5a5c);
int& dword_6D5A60 = * ((decltype(&dword_6D5A60)) 0x6d5a60);
int& dword_6D5A64 = * ((decltype(&dword_6D5A64)) 0x6d5a64);
int& dword_6D5A68 = * ((decltype(&dword_6D5A68)) 0x6d5a68);
CheatFlags& GameCheats = * ((decltype(&GameCheats)) 0x6d5a6c);
dialog *& dword_6D5A70 = * ((decltype(&dword_6D5A70)) 0x6d5a70);
int& dword_6D5A74 = * ((decltype(&dword_6D5A74)) 0x6d5a74);
int& dword_6D5A78 = * ((decltype(&dword_6D5A78)) 0x6d5a78);
void *& dword_6D5A7C = * ((decltype(&dword_6D5A7C)) 0x6d5a7c);
void *& dword_6D5A80 = * ((decltype(&dword_6D5A80)) 0x6d5a80);
void *& dword_6D5A84 = * ((decltype(&dword_6D5A84)) 0x6d5a84);
void *& dword_6D5A88 = * ((decltype(&dword_6D5A88)) 0x6d5a88);
void *& dword_6D5A8C = * ((decltype(&dword_6D5A8C)) 0x6d5a8c);
void *& dword_6D5A90 = * ((decltype(&dword_6D5A90)) 0x6d5a90);
void *& dword_6D5A94 = * ((decltype(&dword_6D5A94)) 0x6d5a94);
void *& dword_6D5A98 = * ((decltype(&dword_6D5A98)) 0x6d5a98);
void *& dword_6D5A9C = * ((decltype(&dword_6D5A9C)) 0x6d5a9c);
void *& dword_6D5AA0 = * ((decltype(&dword_6D5AA0)) 0x6d5aa0);
char& byte_6D5AA8 = * ((decltype(&byte_6D5AA8)) 0x6d5aa8);
HANDLE& directsound = * ((decltype(&directsound)) 0x6d5bac);
int& current_music = * ((decltype(&current_music)) 0x6d5bb0);
signed int& bigvolume = * ((decltype(&bigvolume)) 0x6d5bb4);
int& dword_6D5BB8 = * ((decltype(&dword_6D5BB8)) 0x6d5bb8);
char& byte_6D5BBC = * ((decltype(&byte_6D5BBC)) 0x6d5bbc);
char& byte_6D5BBD = * ((decltype(&byte_6D5BBD)) 0x6d5bbd);
char& byte_6D5BBE = * ((decltype(&byte_6D5BBE)) 0x6d5bbe);
char& byte_6D5BBF = * ((decltype(&byte_6D5BBF)) 0x6d5bbf);
char& byte_6D5BC0 = * ((decltype(&byte_6D5BC0)) 0x6d5bc0);
char& byte_6D5BC1 = * ((decltype(&byte_6D5BC1)) 0x6d5bc1);
char& byte_6D5BC2 = * ((decltype(&byte_6D5BC2)) 0x6d5bc2);
dialog *& dword_6D5BC4 = * ((decltype(&dword_6D5BC4)) 0x6d5bc4);
int& dword_6D5BC8 = * ((decltype(&dword_6D5BC8)) 0x6d5bc8);
int& dword_6D5BCC = * ((decltype(&dword_6D5BCC)) 0x6d5bcc);
int& dword_6D5BD0 = * ((decltype(&dword_6D5BD0)) 0x6d5bd0);
int& dword_6D5BD4 = * ((decltype(&dword_6D5BD4)) 0x6d5bd4);
void *& dword_6D5BD8 = * ((decltype(&dword_6D5BD8)) 0x6d5bd8);
int& dword_6D5BDC = * ((decltype(&dword_6D5BDC)) 0x6d5bdc);
int& dword_6D5BE0 = * ((decltype(&dword_6D5BE0)) 0x6d5be0);
char& byte_6D5BE4 = * ((decltype(&byte_6D5BE4)) 0x6d5be4);
int& dword_6D5BE8 = * ((decltype(&dword_6D5BE8)) 0x6d5be8);
char& byte_6D5BEC = * ((decltype(&byte_6D5BEC)) 0x6d5bec);
char& byte_6D5BED = * ((decltype(&byte_6D5BED)) 0x6d5bed);
int& dword_6D5BF0 = * ((decltype(&dword_6D5BF0)) 0x6d5bf0);
dialog *& dword_6D5BF4 = * ((decltype(&dword_6D5BF4)) 0x6d5bf4);
int& dword_6D5BF8 = * ((decltype(&dword_6D5BF8)) 0x6d5bf8);
SAI_Paths *& SAIPathing = * ((decltype(&SAIPathing)) 0x6d5bfc);
DWORD& CpuThrottle = * ((decltype(&CpuThrottle)) 0x6d5c00);
Bitmap& stru_6D5C04 = * ((decltype(&stru_6D5C04)) 0x6d5c04);
void *& dword_6D5C0C = * ((decltype(&dword_6D5C0C)) 0x6d5c0c);
void *& dword_6D5C10 = * ((decltype(&dword_6D5C10)) 0x6d5c10);
void *& dword_6D5C14 = * ((decltype(&dword_6D5C14)) 0x6d5c14);
void *& dword_6D5C18 = * ((decltype(&dword_6D5C18)) 0x6d5c18);
int& dword_6D5C1C = * ((decltype(&dword_6D5C1C)) 0x6d5c1c);
int& dword_6D5C20 = * ((decltype(&dword_6D5C20)) 0x6d5c20);
CUnit *& dword_6D5C24 = * ((decltype(&dword_6D5C24)) 0x6d5c24);
int& dword_6D5C28 = * ((decltype(&dword_6D5C28)) 0x6d5c28);
UINT_PTR& uIDEvent = * ((decltype(&uIDEvent)) 0x6d5c2c);
int* dword_6D5C30 = (decltype(dword_6D5C30 + 0)) 0x6d5c30;
int* dword_6D5C50 = (decltype(dword_6D5C50 + 0)) 0x6d5c50;
void *& dword_6D5C70 = * ((decltype(&dword_6D5C70)) 0x6d5c70);
void *& dword_6D5C74 = * ((decltype(&dword_6D5C74)) 0x6d5c74);
void *& dword_6D5C78 = * ((decltype(&dword_6D5C78)) 0x6d5c78);
void *& dword_6D5C7C = * ((decltype(&dword_6D5C7C)) 0x6d5c7c);
void *& dword_6D5C80 = * ((decltype(&dword_6D5C80)) 0x6d5c80);
void *& dword_6D5C84 = * ((decltype(&dword_6D5C84)) 0x6d5c84);
void *& dword_6D5C88 = * ((decltype(&dword_6D5C88)) 0x6d5c88);
void *& dword_6D5C8C = * ((decltype(&dword_6D5C8C)) 0x6d5c8c);
void *& dword_6D5C90 = * ((decltype(&dword_6D5C90)) 0x6d5c90);
void *& defaultValue = * ((decltype(&defaultValue)) 0x6d5c94);
int& dword_6D5C98 = * ((decltype(&dword_6D5C98)) 0x6d5c98);
void *& dword_6D5C9C = * ((decltype(&dword_6D5C9C)) 0x6d5c9c);
char& byte_6D5CA0 = * ((decltype(&byte_6D5CA0)) 0x6d5ca0);
HANDLE& video = * ((decltype(&video)) 0x6d5ca4);
int& dword_6D5CA8 = * ((decltype(&dword_6D5CA8)) 0x6d5ca8);
Bitmap& pbrempt_pcx = * ((decltype(&pbrempt_pcx)) 0x6d5cac);
Bitmap& pbrfull_pcx = * ((decltype(&pbrfull_pcx)) 0x6d5cb4);
Bitmap& progress_bar_empty_pcx = * ((decltype(&progress_bar_empty_pcx)) 0x6d5cbc);
Bitmap& progress_bar_full_pcx = * ((decltype(&progress_bar_full_pcx)) 0x6d5cc4);
void *& dword_6D5CD8 = * ((decltype(&dword_6D5CD8)) 0x6d5cd8);
void *& dword_6D5CDC = * ((decltype(&dword_6D5CDC)) 0x6d5cdc);
int* dword_6D5D00 = (decltype(dword_6D5D00 + 0)) 0x6d5d00;
int& dword_6D5D10 = * ((decltype(&dword_6D5D10)) 0x6d5d10);
int& dword_6D5D14 = * ((decltype(&dword_6D5D14)) 0x6d5d14);
int& dword_6D5D18 = * ((decltype(&dword_6D5D18)) 0x6d5d18);
char *& dword_6D5D1C = * ((decltype(&dword_6D5D1C)) 0x6d5d1c);
char *& dword_6D5D20 = * ((decltype(&dword_6D5D20)) 0x6d5d20);
int& dword_6D5D30 = * ((decltype(&dword_6D5D30)) 0x6d5d30);
int& dword_6D5D48 = * ((decltype(&dword_6D5D48)) 0x6d5d48);
void *& dword_6D5D4C = * ((decltype(&dword_6D5D4C)) 0x6d5d4c);
char *& dword_6D5D50 = * ((decltype(&dword_6D5D50)) 0x6d5d50);
char *& dword_6D5D54 = * ((decltype(&dword_6D5D54)) 0x6d5d54);
char *& dword_6D5D58 = * ((decltype(&dword_6D5D58)) 0x6d5d58);
void *& dword_6D5D5C = * ((decltype(&dword_6D5D5C)) 0x6d5d5c);
char* byte_6D5D60 = (decltype(byte_6D5D60 + 0)) 0x6d5d60;
int& dword_6D5D64 = * ((decltype(&dword_6D5D64)) 0x6d5d64);
int& dword_6D5D68 = * ((decltype(&dword_6D5D68)) 0x6d5d68);
int* dword_6D5D70 = (decltype(dword_6D5D70 + 0)) 0x6d5d70;
int* dword_6D5D98 = (decltype(dword_6D5D98 + 0)) 0x6d5d98;
void *& dword_6D5DC0 = * ((decltype(&dword_6D5DC0)) 0x6d5dc0);
char *& buffer2 = * ((decltype(&buffer2)) 0x6d5dc4);
int& dword_6D5DC8 = * ((decltype(&dword_6D5DC8)) 0x6d5dc8);
int& dword_6D5DCC = * ((decltype(&dword_6D5DCC)) 0x6d5dcc);
int& dword_6D5DD0 = * ((decltype(&dword_6D5DD0)) 0x6d5dd0);
int& dword_6D5DD4 = * ((decltype(&dword_6D5DD4)) 0x6d5dd4);
AppExitHandle *& app_exit_handles = * ((decltype(&app_exit_handles)) 0x6d5dd8);
Font *& PrintXY_Current_Font = * ((decltype(&PrintXY_Current_Font)) 0x6d5ddc);
char& byte_6D5DE0 = * ((decltype(&byte_6D5DE0)) 0x6d5de0);
HINSTANCE& hInstance = * ((decltype(&hInstance)) 0x6d5de4);
LPCVOID& lpAddress = * ((decltype(&lpAddress)) 0x6d5de8);
DWORD& nNumberOfBytesToWrite = * ((decltype(&nNumberOfBytesToWrite)) 0x6d5dec);
Bitmap& stru_6D5DF0 = * ((decltype(&stru_6D5DF0)) 0x6d5df0);
int& dword_6D5DF8 = * ((decltype(&dword_6D5DF8)) 0x6d5df8);
char& byte_6D5DFC = * ((decltype(&byte_6D5DFC)) 0x6d5dfc);
IDirectDrawSurface *& PrimarySurface = * ((decltype(&PrimarySurface)) 0x6d5e00);
HMODULE& ddraw_dll = * ((decltype(&ddraw_dll)) 0x6d5e04);
IDirectDraw *& DDInterface = * ((decltype(&DDInterface)) 0x6d5e08);
IDirectDrawPalette *& PrimaryPalette = * ((decltype(&PrimaryPalette)) 0x6d5e0c);
IDirectDrawSurface *& BackSurface = * ((decltype(&BackSurface)) 0x6d5e10);
int& dword_6D5E14 = * ((decltype(&dword_6D5E14)) 0x6d5e14);
int& dword_6D5E18 = * ((decltype(&dword_6D5E18)) 0x6d5e18);
int& dword_6D5E1C = * ((decltype(&dword_6D5E1C)) 0x6d5e1c);
Bitmap *& dword_6D5E20 = * ((decltype(&dword_6D5E20)) 0x6d5e20);
int& dword_6D5E24 = * ((decltype(&dword_6D5E24)) 0x6d5e24);
__int16& word_6D5E28 = * ((decltype(&word_6D5E28)) 0x6d5e28);
int& dword_6D5E2C = * ((decltype(&dword_6D5E2C)) 0x6d5e2c);
int& dword_6D5E30 = * ((decltype(&dword_6D5E30)) 0x6d5e30);
dialog *& DialogList = * ((decltype(&DialogList)) 0x6d5e34);
int (__thiscall *&dword_6D5E38)(_DWORD) = *((decltype(&dword_6D5E38)) 0x6d5e38);
int& dword_6D5E3C = * ((decltype(&dword_6D5E3C)) 0x6d5e3c);
dialog ** EventDialogs = (decltype(EventDialogs + 0)) 0x6d5e40;
struct_0* stru_6D5E8C = (decltype(stru_6D5E8C + 0)) 0x6d5e8c;
int (__stdcall *&dword_6D5EAC)(_DWORD) = *((decltype(&dword_6D5EAC)) 0x6d5eac);
dialog *& dword_6D5EB0 = * ((decltype(&dword_6D5EB0)) 0x6d5eb0);
int& dword_6D5EB4 = * ((decltype(&dword_6D5EB4)) 0x6d5eb4);
int& dword_6D5EB8 = * ((decltype(&dword_6D5EB8)) 0x6d5eb8);
void *& dword_6D5EBC = * ((decltype(&dword_6D5EBC)) 0x6d5ebc);
void *& dword_6D5EC0 = * ((decltype(&dword_6D5EC0)) 0x6d5ec0);
TileType *& TileSetMap = * ((decltype(&TileSetMap)) 0x6d5ec8);
HANDLE& hEvent = * ((decltype(&hEvent)) 0x6d5ecc);
int& IsBattleNet = * ((decltype(&IsBattleNet)) 0x6d5ed0);
int& dword_6D5ED4 = * ((decltype(&dword_6D5ED4)) 0x6d5ed4);
int& dword_6D5ED8 = * ((decltype(&dword_6D5ED8)) 0x6d5ed8);
struct _RTL_CRITICAL_SECTION& stru_6D5EDC = * ((decltype(&stru_6D5EDC)) 0x6d5edc);
int& dword_6D5EF4 = * ((decltype(&dword_6D5EF4)) 0x6d5ef4);
int& dword_6D5EF8 = * ((decltype(&dword_6D5EF8)) 0x6d5ef8);
int& dword_6D5EFC = * ((decltype(&dword_6D5EFC)) 0x6d5efc);
int& dword_6D5F04 = * ((decltype(&dword_6D5F04)) 0x6d5f04);
int& dword_6D5F08 = * ((decltype(&dword_6D5F08)) 0x6d5f08);
int& dword_6D5F0C = * ((decltype(&dword_6D5F0C)) 0x6d5f0c);
int& dword_6D5F10 = * ((decltype(&dword_6D5F10)) 0x6d5f10);
int& dword_6D5F14 = * ((decltype(&dword_6D5F14)) 0x6d5f14);
int& dword_6D5F18 = * ((decltype(&dword_6D5F18)) 0x6d5f18);
int& dword_6D5F1C = * ((decltype(&dword_6D5F1C)) 0x6d5f1c);
int& dword_6D5F20 = * ((decltype(&dword_6D5F20)) 0x6d5f20);
int& dword_6D5F24 = * ((decltype(&dword_6D5F24)) 0x6d5f24);
int& dword_6D5F28 = * ((decltype(&dword_6D5F28)) 0x6d5f28);
int& dword_6D5F2C = * ((decltype(&dword_6D5F2C)) 0x6d5f2c);
int& dword_6D5F30 = * ((decltype(&dword_6D5F30)) 0x6d5f30);
int& dword_6D5F34 = * ((decltype(&dword_6D5F34)) 0x6d5f34);
int& dword_6D5F38 = * ((decltype(&dword_6D5F38)) 0x6d5f38);
int& dword_6D5F3C = * ((decltype(&dword_6D5F3C)) 0x6d5f3c);
int& dword_6D5F40 = * ((decltype(&dword_6D5F40)) 0x6d5f40);
int& dword_6D5F44 = * ((decltype(&dword_6D5F44)) 0x6d5f44);
int& dword_6D5F48 = * ((decltype(&dword_6D5F48)) 0x6d5f48);
struct _RTL_CRITICAL_SECTION& stru_6D5F4C = * ((decltype(&stru_6D5F4C)) 0x6d5f4c);
int& dword_6D5F64 = * ((decltype(&dword_6D5F64)) 0x6d5f64);
int& dword_6D5F68 = * ((decltype(&dword_6D5F68)) 0x6d5f68);
int& dword_6D5F6C = * ((decltype(&dword_6D5F6C)) 0x6d5f6c);
int& dword_6D5F70 = * ((decltype(&dword_6D5F70)) 0x6d5f70);
int& dword_6D5F74 = * ((decltype(&dword_6D5F74)) 0x6d5f74);
int& dword_6D5F78 = * ((decltype(&dword_6D5F78)) 0x6d5f78);
int& dword_6D5F7C = * ((decltype(&dword_6D5F7C)) 0x6d5f7c);
int& dword_6D5F80 = * ((decltype(&dword_6D5F80)) 0x6d5f80);
int& dword_6D5F84 = * ((decltype(&dword_6D5F84)) 0x6d5f84);
int& dword_6D5F88 = * ((decltype(&dword_6D5F88)) 0x6d5f88);
int& dword_6D5F8C = * ((decltype(&dword_6D5F8C)) 0x6d5f8c);
int& dword_6D5F90 = * ((decltype(&dword_6D5F90)) 0x6d5f90);
int& dword_6D5F94 = * ((decltype(&dword_6D5F94)) 0x6d5f94);
int& dword_6D5F98 = * ((decltype(&dword_6D5F98)) 0x6d5f98);
int& dword_6D5F9C = * ((decltype(&dword_6D5F9C)) 0x6d5f9c);
int& dword_6D5FA0 = * ((decltype(&dword_6D5FA0)) 0x6d5fa0);
int& dword_6D5FA4 = * ((decltype(&dword_6D5FA4)) 0x6d5fa4);
int& dword_6D5FA8 = * ((decltype(&dword_6D5FA8)) 0x6d5fa8);
int& dword_6D5FAC = * ((decltype(&dword_6D5FAC)) 0x6d5fac);
int& dword_6D5FB0 = * ((decltype(&dword_6D5FB0)) 0x6d5fb0);
int& dword_6D5FB4 = * ((decltype(&dword_6D5FB4)) 0x6d5fb4);
int& dword_6D5FB8 = * ((decltype(&dword_6D5FB8)) 0x6d5fb8);
int& dword_6D5FBC = * ((decltype(&dword_6D5FBC)) 0x6d5fbc);
int& dword_6D5FC0 = * ((decltype(&dword_6D5FC0)) 0x6d5fc0);
int& dword_6D5FC4 = * ((decltype(&dword_6D5FC4)) 0x6d5fc4);
int& dword_6D5FC8 = * ((decltype(&dword_6D5FC8)) 0x6d5fc8);
int& dword_6D5FCC = * ((decltype(&dword_6D5FCC)) 0x6d5fcc);
int& dword_6D5FD0 = * ((decltype(&dword_6D5FD0)) 0x6d5fd0);
int& dword_6D5FD4 = * ((decltype(&dword_6D5FD4)) 0x6d5fd4);
int& dword_6D5FD8 = * ((decltype(&dword_6D5FD8)) 0x6d5fd8);
int& dword_6D5FDC = * ((decltype(&dword_6D5FDC)) 0x6d5fdc);
int& dword_6D5FE0 = * ((decltype(&dword_6D5FE0)) 0x6d5fe0);
int& dword_6D5FE4 = * ((decltype(&dword_6D5FE4)) 0x6d5fe4);
int& dword_6D5FE8 = * ((decltype(&dword_6D5FE8)) 0x6d5fe8);
int& dword_6D5FEC = * ((decltype(&dword_6D5FEC)) 0x6d5fec);
int& dword_6D5FF0 = * ((decltype(&dword_6D5FF0)) 0x6d5ff0);
int& dword_6D5FF4 = * ((decltype(&dword_6D5FF4)) 0x6d5ff4);
int& dword_6D5FF8 = * ((decltype(&dword_6D5FF8)) 0x6d5ff8);
int& dword_6D5FFC = * ((decltype(&dword_6D5FFC)) 0x6d5ffc);
int& dword_6D6000 = * ((decltype(&dword_6D6000)) 0x6d6000);
int& dword_6D6004 = * ((decltype(&dword_6D6004)) 0x6d6004);
int& dword_6D6008 = * ((decltype(&dword_6D6008)) 0x6d6008);
int& dword_6D600C = * ((decltype(&dword_6D600C)) 0x6d600c);
int& dword_6D6010 = * ((decltype(&dword_6D6010)) 0x6d6010);
int& dword_6D6014 = * ((decltype(&dword_6D6014)) 0x6d6014);
int& dword_6D6018 = * ((decltype(&dword_6D6018)) 0x6d6018);
int& dword_6D601C = * ((decltype(&dword_6D601C)) 0x6d601c);
int& dword_6D6020 = * ((decltype(&dword_6D6020)) 0x6d6020);
int& dword_6D6024 = * ((decltype(&dword_6D6024)) 0x6d6024);
int& dword_6D6028 = * ((decltype(&dword_6D6028)) 0x6d6028);
int& dword_6D602C = * ((decltype(&dword_6D602C)) 0x6d602c);
int& dword_6D6030 = * ((decltype(&dword_6D6030)) 0x6d6030);
int& dword_6D6034 = * ((decltype(&dword_6D6034)) 0x6d6034);
int& dword_6D6038 = * ((decltype(&dword_6D6038)) 0x6d6038);
int& dword_6D603C = * ((decltype(&dword_6D603C)) 0x6d603c);
int& dword_6D6040 = * ((decltype(&dword_6D6040)) 0x6d6040);
int& dword_6D6044 = * ((decltype(&dword_6D6044)) 0x6d6044);
int& dword_6D6048 = * ((decltype(&dword_6D6048)) 0x6d6048);
int& dword_6D604C = * ((decltype(&dword_6D604C)) 0x6d604c);
int& dword_6D6050 = * ((decltype(&dword_6D6050)) 0x6d6050);
int& dword_6D6054 = * ((decltype(&dword_6D6054)) 0x6d6054);
int& dword_6D6058 = * ((decltype(&dword_6D6058)) 0x6d6058);
int& dword_6D605C = * ((decltype(&dword_6D605C)) 0x6d605c);
int& dword_6D6060 = * ((decltype(&dword_6D6060)) 0x6d6060);
int& dword_6D6064 = * ((decltype(&dword_6D6064)) 0x6d6064);
int& dword_6D6068 = * ((decltype(&dword_6D6068)) 0x6d6068);
int& dword_6D606C = * ((decltype(&dword_6D606C)) 0x6d606c);
int& dword_6D6070 = * ((decltype(&dword_6D6070)) 0x6d6070);
int& dword_6D6074 = * ((decltype(&dword_6D6074)) 0x6d6074);
int& dword_6D6078 = * ((decltype(&dword_6D6078)) 0x6d6078);
int& dword_6D607C = * ((decltype(&dword_6D607C)) 0x6d607c);
int& dword_6D6080 = * ((decltype(&dword_6D6080)) 0x6d6080);
int& dword_6D6084 = * ((decltype(&dword_6D6084)) 0x6d6084);
int& dword_6D6088 = * ((decltype(&dword_6D6088)) 0x6d6088);
int& dword_6D608C = * ((decltype(&dword_6D608C)) 0x6d608c);
int& dword_6D6090 = * ((decltype(&dword_6D6090)) 0x6d6090);
int& dword_6D6094 = * ((decltype(&dword_6D6094)) 0x6d6094);
int& dword_6D6098 = * ((decltype(&dword_6D6098)) 0x6d6098);
int& dword_6D609C = * ((decltype(&dword_6D609C)) 0x6d609c);
int& dword_6D60A0 = * ((decltype(&dword_6D60A0)) 0x6d60a0);
int& dword_6D60A4 = * ((decltype(&dword_6D60A4)) 0x6d60a4);
int& dword_6D60A8 = * ((decltype(&dword_6D60A8)) 0x6d60a8);
int& dword_6D60AC = * ((decltype(&dword_6D60AC)) 0x6d60ac);
int& dword_6D60B0 = * ((decltype(&dword_6D60B0)) 0x6d60b0);
int& dword_6D60B4 = * ((decltype(&dword_6D60B4)) 0x6d60b4);
int& dword_6D60B8 = * ((decltype(&dword_6D60B8)) 0x6d60b8);
int& dword_6D60BC = * ((decltype(&dword_6D60BC)) 0x6d60bc);
int& dword_6D60C0 = * ((decltype(&dword_6D60C0)) 0x6d60c0);
int& dword_6D60C4 = * ((decltype(&dword_6D60C4)) 0x6d60c4);
int& dword_6D60C8 = * ((decltype(&dword_6D60C8)) 0x6d60c8);
int& dword_6D60CC = * ((decltype(&dword_6D60CC)) 0x6d60cc);
int& dword_6D60D0 = * ((decltype(&dword_6D60D0)) 0x6d60d0);
int& dword_6D60D4 = * ((decltype(&dword_6D60D4)) 0x6d60d4);
int& dword_6D60D8 = * ((decltype(&dword_6D60D8)) 0x6d60d8);
int& dword_6D60DC = * ((decltype(&dword_6D60DC)) 0x6d60dc);
int& dword_6D60E0 = * ((decltype(&dword_6D60E0)) 0x6d60e0);
int& dword_6D60E4 = * ((decltype(&dword_6D60E4)) 0x6d60e4);
int& dword_6D60E8 = * ((decltype(&dword_6D60E8)) 0x6d60e8);
int& dword_6D60EC = * ((decltype(&dword_6D60EC)) 0x6d60ec);
int& dword_6D60F0 = * ((decltype(&dword_6D60F0)) 0x6d60f0);
int& dword_6D60F4 = * ((decltype(&dword_6D60F4)) 0x6d60f4);
int& dword_6D60F8 = * ((decltype(&dword_6D60F8)) 0x6d60f8);
int& dword_6D60FC = * ((decltype(&dword_6D60FC)) 0x6d60fc);
int& dword_6D6100 = * ((decltype(&dword_6D6100)) 0x6d6100);
int& dword_6D6104 = * ((decltype(&dword_6D6104)) 0x6d6104);
int& dword_6D6108 = * ((decltype(&dword_6D6108)) 0x6d6108);
int& dword_6D610C = * ((decltype(&dword_6D610C)) 0x6d610c);
int& dword_6D6110 = * ((decltype(&dword_6D6110)) 0x6d6110);
int& dword_6D6114 = * ((decltype(&dword_6D6114)) 0x6d6114);
int& dword_6D6118 = * ((decltype(&dword_6D6118)) 0x6d6118);
int& dword_6D611C = * ((decltype(&dword_6D611C)) 0x6d611c);
int& dword_6D6120 = * ((decltype(&dword_6D6120)) 0x6d6120);
int& dword_6D6124 = * ((decltype(&dword_6D6124)) 0x6d6124);
int& dword_6D6128 = * ((decltype(&dword_6D6128)) 0x6d6128);
int& dword_6D612C = * ((decltype(&dword_6D612C)) 0x6d612c);
int& dword_6D6130 = * ((decltype(&dword_6D6130)) 0x6d6130);
int& dword_6D6134 = * ((decltype(&dword_6D6134)) 0x6d6134);
int& dword_6D6138 = * ((decltype(&dword_6D6138)) 0x6d6138);
int& dword_6D613C = * ((decltype(&dword_6D613C)) 0x6d613c);
int& dword_6D6140 = * ((decltype(&dword_6D6140)) 0x6d6140);
int& dword_6D6144 = * ((decltype(&dword_6D6144)) 0x6d6144);
int& dword_6D6148 = * ((decltype(&dword_6D6148)) 0x6d6148);
int& dword_6D614C = * ((decltype(&dword_6D614C)) 0x6d614c);
int& dword_6D6150 = * ((decltype(&dword_6D6150)) 0x6d6150);
int& dword_6D6154 = * ((decltype(&dword_6D6154)) 0x6d6154);
int& dword_6D6158 = * ((decltype(&dword_6D6158)) 0x6d6158);
int& dword_6D615C = * ((decltype(&dword_6D615C)) 0x6d615c);
int& dword_6D6160 = * ((decltype(&dword_6D6160)) 0x6d6160);
int& dword_6D6164 = * ((decltype(&dword_6D6164)) 0x6d6164);
int& dword_6D6168 = * ((decltype(&dword_6D6168)) 0x6d6168);
int& dword_6D616C = * ((decltype(&dword_6D616C)) 0x6d616c);
int& dword_6D6170 = * ((decltype(&dword_6D6170)) 0x6d6170);
int& dword_6D6174 = * ((decltype(&dword_6D6174)) 0x6d6174);
int& dword_6D6178 = * ((decltype(&dword_6D6178)) 0x6d6178);
int& dword_6D617C = * ((decltype(&dword_6D617C)) 0x6d617c);
int& dword_6D6180 = * ((decltype(&dword_6D6180)) 0x6d6180);
int& dword_6D6184 = * ((decltype(&dword_6D6184)) 0x6d6184);
int& dword_6D6188 = * ((decltype(&dword_6D6188)) 0x6d6188);
int& dword_6D618C = * ((decltype(&dword_6D618C)) 0x6d618c);
int& dword_6D6190 = * ((decltype(&dword_6D6190)) 0x6d6190);
int& dword_6D6194 = * ((decltype(&dword_6D6194)) 0x6d6194);
int& dword_6D6198 = * ((decltype(&dword_6D6198)) 0x6d6198);
void *& dword_6D619C = * ((decltype(&dword_6D619C)) 0x6d619c);
int& dword_6D61A0 = * ((decltype(&dword_6D61A0)) 0x6d61a0);
void *& dword_6D61A4 = * ((decltype(&dword_6D61A4)) 0x6d61a4);
int& dword_6D61A8 = * ((decltype(&dword_6D61A8)) 0x6d61a8);
int& dword_6D61AC = * ((decltype(&dword_6D61AC)) 0x6d61ac);
int& dword_6D61B0 = * ((decltype(&dword_6D61B0)) 0x6d61b0);
int& dword_6D61B4 = * ((decltype(&dword_6D61B4)) 0x6d61b4);
int& dword_6D61B8 = * ((decltype(&dword_6D61B8)) 0x6d61b8);
int& dword_6D61BC = * ((decltype(&dword_6D61BC)) 0x6d61bc);
int& dword_6D61C0 = * ((decltype(&dword_6D61C0)) 0x6d61c0);
int& dword_6D61C4 = * ((decltype(&dword_6D61C4)) 0x6d61c4);
int& dword_6D61C8 = * ((decltype(&dword_6D61C8)) 0x6d61c8);
int& dword_6D61CC = * ((decltype(&dword_6D61CC)) 0x6d61cc);
int& dword_6D61D0 = * ((decltype(&dword_6D61D0)) 0x6d61d0);
int& dword_6D61D4 = * ((decltype(&dword_6D61D4)) 0x6d61d4);
int& dword_6D61D8 = * ((decltype(&dword_6D61D8)) 0x6d61d8);
int& dword_6D61DC = * ((decltype(&dword_6D61DC)) 0x6d61dc);
int& dword_6D61E0 = * ((decltype(&dword_6D61E0)) 0x6d61e0);
int& dword_6D61E4 = * ((decltype(&dword_6D61E4)) 0x6d61e4);
int& dword_6D61E8 = * ((decltype(&dword_6D61E8)) 0x6d61e8);
int& dword_6D61EC = * ((decltype(&dword_6D61EC)) 0x6d61ec);
int& dword_6D61F0 = * ((decltype(&dword_6D61F0)) 0x6d61f0);
int& dword_6D61F4 = * ((decltype(&dword_6D61F4)) 0x6d61f4);
int& dword_6D61F8 = * ((decltype(&dword_6D61F8)) 0x6d61f8);
int& dword_6D61FC = * ((decltype(&dword_6D61FC)) 0x6d61fc);
int& dword_6D6200 = * ((decltype(&dword_6D6200)) 0x6d6200);
int& dword_6D6204 = * ((decltype(&dword_6D6204)) 0x6d6204);
int& dword_6D6208 = * ((decltype(&dword_6D6208)) 0x6d6208);
int& dword_6D620C = * ((decltype(&dword_6D620C)) 0x6d620c);
int& dword_6D6210 = * ((decltype(&dword_6D6210)) 0x6d6210);
int& dword_6D6214 = * ((decltype(&dword_6D6214)) 0x6d6214);
int& dword_6D6218 = * ((decltype(&dword_6D6218)) 0x6d6218);
int& dword_6D621C = * ((decltype(&dword_6D621C)) 0x6d621c);
int& dword_6D6220 = * ((decltype(&dword_6D6220)) 0x6d6220);
int& dword_6D6224 = * ((decltype(&dword_6D6224)) 0x6d6224);
int& dword_6D6228 = * ((decltype(&dword_6D6228)) 0x6d6228);
int& dword_6D622C = * ((decltype(&dword_6D622C)) 0x6d622c);
int& dword_6D6230 = * ((decltype(&dword_6D6230)) 0x6d6230);
int& dword_6D6234 = * ((decltype(&dword_6D6234)) 0x6d6234);
int& dword_6D6238 = * ((decltype(&dword_6D6238)) 0x6d6238);
int& dword_6D623C = * ((decltype(&dword_6D623C)) 0x6d623c);
int& dword_6D6240 = * ((decltype(&dword_6D6240)) 0x6d6240);
int& dword_6D6244 = * ((decltype(&dword_6D6244)) 0x6d6244);
int& dword_6D6248 = * ((decltype(&dword_6D6248)) 0x6d6248);
int& dword_6D624C = * ((decltype(&dword_6D624C)) 0x6d624c);
int& dword_6D6250 = * ((decltype(&dword_6D6250)) 0x6d6250);
int& dword_6D6254 = * ((decltype(&dword_6D6254)) 0x6d6254);
int& dword_6D6258 = * ((decltype(&dword_6D6258)) 0x6d6258);
int& dword_6D625C = * ((decltype(&dword_6D625C)) 0x6d625c);
int& dword_6D6260 = * ((decltype(&dword_6D6260)) 0x6d6260);
int& dword_6D6264 = * ((decltype(&dword_6D6264)) 0x6d6264);
int& dword_6D6268 = * ((decltype(&dword_6D6268)) 0x6d6268);
int& dword_6D626C = * ((decltype(&dword_6D626C)) 0x6d626c);
int& dword_6D6270 = * ((decltype(&dword_6D6270)) 0x6d6270);
int& dword_6D6274 = * ((decltype(&dword_6D6274)) 0x6d6274);
int& dword_6D6278 = * ((decltype(&dword_6D6278)) 0x6d6278);
int& dword_6D627C = * ((decltype(&dword_6D627C)) 0x6d627c);
int& dword_6D6280 = * ((decltype(&dword_6D6280)) 0x6d6280);
int& dword_6D6284 = * ((decltype(&dword_6D6284)) 0x6d6284);
int& dword_6D6288 = * ((decltype(&dword_6D6288)) 0x6d6288);
int& dword_6D628C = * ((decltype(&dword_6D628C)) 0x6d628c);
int& dword_6D6290 = * ((decltype(&dword_6D6290)) 0x6d6290);
int& dword_6D6294 = * ((decltype(&dword_6D6294)) 0x6d6294);
int& dword_6D6298 = * ((decltype(&dword_6D6298)) 0x6d6298);
int& dword_6D629C = * ((decltype(&dword_6D629C)) 0x6d629c);
int& dword_6D62A0 = * ((decltype(&dword_6D62A0)) 0x6d62a0);
int& dword_6D62A4 = * ((decltype(&dword_6D62A4)) 0x6d62a4);
int& dword_6D62A8 = * ((decltype(&dword_6D62A8)) 0x6d62a8);
int& dword_6D62AC = * ((decltype(&dword_6D62AC)) 0x6d62ac);
int& dword_6D62B0 = * ((decltype(&dword_6D62B0)) 0x6d62b0);
int& dword_6D62B4 = * ((decltype(&dword_6D62B4)) 0x6d62b4);
struct _RTL_CRITICAL_SECTION& CriticalSection = * ((decltype(&CriticalSection)) 0x6d62b8);
int& dword_6D62D0 = * ((decltype(&dword_6D62D0)) 0x6d62d0);
int& dword_6D62D4 = * ((decltype(&dword_6D62D4)) 0x6d62d4);
int& dword_6D62D8 = * ((decltype(&dword_6D62D8)) 0x6d62d8);
int& dword_6D62DC = * ((decltype(&dword_6D62DC)) 0x6d62dc);
int& dword_6D62E0 = * ((decltype(&dword_6D62E0)) 0x6d62e0);
int& dword_6D62E4 = * ((decltype(&dword_6D62E4)) 0x6d62e4);
int& dword_6D62E8 = * ((decltype(&dword_6D62E8)) 0x6d62e8);
int& dword_6D62EC = * ((decltype(&dword_6D62EC)) 0x6d62ec);
int& dword_6D62F0 = * ((decltype(&dword_6D62F0)) 0x6d62f0);
int& dword_6D62F4 = * ((decltype(&dword_6D62F4)) 0x6d62f4);
int& dword_6D62F8 = * ((decltype(&dword_6D62F8)) 0x6d62f8);
int& dword_6D62FC = * ((decltype(&dword_6D62FC)) 0x6d62fc);
int& dword_6D6300 = * ((decltype(&dword_6D6300)) 0x6d6300);
int& dword_6D6304 = * ((decltype(&dword_6D6304)) 0x6d6304);
int& dword_6D6308 = * ((decltype(&dword_6D6308)) 0x6d6308);
int& dword_6D630C = * ((decltype(&dword_6D630C)) 0x6d630c);
int& dword_6D6310 = * ((decltype(&dword_6D6310)) 0x6d6310);
int& dword_6D6314 = * ((decltype(&dword_6D6314)) 0x6d6314);
int& dword_6D6318 = * ((decltype(&dword_6D6318)) 0x6d6318);
int& dword_6D631C = * ((decltype(&dword_6D631C)) 0x6d631c);
int& dword_6D6320 = * ((decltype(&dword_6D6320)) 0x6d6320);
int& dword_6D6324 = * ((decltype(&dword_6D6324)) 0x6d6324);
int& dword_6D6328 = * ((decltype(&dword_6D6328)) 0x6d6328);
int& dword_6D632C = * ((decltype(&dword_6D632C)) 0x6d632c);
int& dword_6D6330 = * ((decltype(&dword_6D6330)) 0x6d6330);
int& dword_6D6334 = * ((decltype(&dword_6D6334)) 0x6d6334);
int& dword_6D6338 = * ((decltype(&dword_6D6338)) 0x6d6338);
int& dword_6D633C = * ((decltype(&dword_6D633C)) 0x6d633c);
int& dword_6D6340 = * ((decltype(&dword_6D6340)) 0x6d6340);
int& dword_6D6344 = * ((decltype(&dword_6D6344)) 0x6d6344);
int& dword_6D6348 = * ((decltype(&dword_6D6348)) 0x6d6348);
int& dword_6D634C = * ((decltype(&dword_6D634C)) 0x6d634c);
int& dword_6D6350 = * ((decltype(&dword_6D6350)) 0x6d6350);
int& dword_6D6354 = * ((decltype(&dword_6D6354)) 0x6d6354);
int& dword_6D6358 = * ((decltype(&dword_6D6358)) 0x6d6358);
int& dword_6D635C = * ((decltype(&dword_6D635C)) 0x6d635c);
int& dword_6D6360 = * ((decltype(&dword_6D6360)) 0x6d6360);
int& dword_6D6364 = * ((decltype(&dword_6D6364)) 0x6d6364);
int& dword_6D6368 = * ((decltype(&dword_6D6368)) 0x6d6368);
int& dword_6D636C = * ((decltype(&dword_6D636C)) 0x6d636c);
int& dword_6D6370 = * ((decltype(&dword_6D6370)) 0x6d6370);
int& dword_6D6374 = * ((decltype(&dword_6D6374)) 0x6d6374);
int& dword_6D6378 = * ((decltype(&dword_6D6378)) 0x6d6378);
int& dword_6D637C = * ((decltype(&dword_6D637C)) 0x6d637c);
int& dword_6D6380 = * ((decltype(&dword_6D6380)) 0x6d6380);
HINSTANCE& dword_6D6384 = * ((decltype(&dword_6D6384)) 0x6d6384);
int& dword_6D6388 = * ((decltype(&dword_6D6388)) 0x6d6388);
char& byte_6D638C = * ((decltype(&byte_6D638C)) 0x6d638c);
SfxData& dword_6D6390 = * ((decltype(&dword_6D6390)) 0x6d6390);
char& byte_6D6394 = * ((decltype(&byte_6D6394)) 0x6d6394);
int& dword_6D63AC = * ((decltype(&dword_6D63AC)) 0x6d63ac);
int& dword_6D63B0 = * ((decltype(&dword_6D63B0)) 0x6d63b0);
int& dword_6D63B4 = * ((decltype(&dword_6D63B4)) 0x6d63b4);
int& dword_6D63B8 = * ((decltype(&dword_6D63B8)) 0x6d63b8);
int& dword_6D63BC = * ((decltype(&dword_6D63BC)) 0x6d63bc);
int& dword_6D63C0 = * ((decltype(&dword_6D63C0)) 0x6d63c0);
int& dword_6D63C4 = * ((decltype(&dword_6D63C4)) 0x6d63c4);
int& dword_6D63C8 = * ((decltype(&dword_6D63C8)) 0x6d63c8);
int& dword_6D63CC = * ((decltype(&dword_6D63CC)) 0x6d63cc);
int& dword_6D63D0 = * ((decltype(&dword_6D63D0)) 0x6d63d0);
int& dword_6D63D4 = * ((decltype(&dword_6D63D4)) 0x6d63d4);
int& dword_6D63D8 = * ((decltype(&dword_6D63D8)) 0x6d63d8);
int& dword_6D63DC = * ((decltype(&dword_6D63DC)) 0x6d63dc);
int& dword_6D63E0 = * ((decltype(&dword_6D63E0)) 0x6d63e0);
int& dword_6D63E4 = * ((decltype(&dword_6D63E4)) 0x6d63e4);
int& dword_6D63E8 = * ((decltype(&dword_6D63E8)) 0x6d63e8);
int& dword_6D63EC = * ((decltype(&dword_6D63EC)) 0x6d63ec);
char& byte_6D63F0 = * ((decltype(&byte_6D63F0)) 0x6d63f0);
tagRECT& stru_6D63F4 = * ((decltype(&stru_6D63F4)) 0x6d63f4);
int& dword_6D6404 = * ((decltype(&dword_6D6404)) 0x6d6404);
int& dword_6D6408 = * ((decltype(&dword_6D6408)) 0x6d6408);
int& dword_6D640C = * ((decltype(&dword_6D640C)) 0x6d640c);
int& dword_6D6410 = * ((decltype(&dword_6D6410)) 0x6d6410);
int& dword_6D6414 = * ((decltype(&dword_6D6414)) 0x6d6414);
HDC& hdc = * ((decltype(&hdc)) 0x6d6418);
HDC& dword_6D641C = * ((decltype(&dword_6D641C)) 0x6d641c);
int& dword_6D6420 = * ((decltype(&dword_6D6420)) 0x6d6420);
HGDIOBJ& h = * ((decltype(&h)) 0x6d6424);
int& dword_6D6428 = * ((decltype(&dword_6D6428)) 0x6d6428);
int& dword_6D642C = * ((decltype(&dword_6D642C)) 0x6d642c);
int& dword_6D6430 = * ((decltype(&dword_6D6430)) 0x6d6430);
int& dword_6D6434 = * ((decltype(&dword_6D6434)) 0x6d6434);
HIMC& dword_6D6438 = * ((decltype(&dword_6D6438)) 0x6d6438);
int& dword_6D643C = * ((decltype(&dword_6D643C)) 0x6d643c);
int& dword_6D683C = * ((decltype(&dword_6D683C)) 0x6d683c);
size_t& size = * ((decltype(&size)) 0x6d6c3c);
int& dword_6D6C40 = * ((decltype(&dword_6D6C40)) 0x6d6c40);
const CHAR& buff = * ((decltype(&buff)) 0x6d7448);
char& byte_6D754C = * ((decltype(&byte_6D754C)) 0x6d754c);
char* byte_6D7550 = (decltype(byte_6D7550 + 0)) 0x6d7550;
int& dword_6D7570 = * ((decltype(&dword_6D7570)) 0x6d7570);
int& dword_6D7574 = * ((decltype(&dword_6D7574)) 0x6d7574);
int* dword_6D7578 = (decltype(dword_6D7578 + 0)) 0x6d7578;
int* dword_6D757C = (decltype(dword_6D757C + 0)) 0x6d757c;
char* byte_6DB178 = (decltype(byte_6DB178 + 0)) 0x6db178;
char* byte_6DB179 = (decltype(byte_6DB179 + 0)) 0x6db179;
char* byte_6DB17A = (decltype(byte_6DB17A + 0)) 0x6db17a;
char* byte_6DB17B = (decltype(byte_6DB17B + 0)) 0x6db17b;
char* byte_6DB180 = (decltype(byte_6DB180 + 0)) 0x6db180;
Bitmap& stru_6DB284 = * ((decltype(&stru_6DB284)) 0x6db284);
Bitmap& stru_6DB28C = * ((decltype(&stru_6DB28C)) 0x6db28c);
char* byte_6DB298 = (decltype(byte_6DB298 + 0)) 0x6db298;
char* byte_6DB698 = (decltype(byte_6DB698 + 0)) 0x6db698;
char* byte_6DB718 = (decltype(byte_6DB718 + 0)) 0x6db718;
char* byte_6DB798 = (decltype(byte_6DB798 + 0)) 0x6db798;
char* byte_6DB818 = (decltype(byte_6DB818 + 0)) 0x6db818;
char* byte_6DB898 = (decltype(byte_6DB898 + 0)) 0x6db898;
char& byte_6DB918 = * ((decltype(&byte_6DB918)) 0x6db918);
char& byte_6DBD18 = * ((decltype(&byte_6DBD18)) 0x6dbd18);
char* byte_6DBD38 = (decltype(byte_6DBD38 + 0)) 0x6dbd38;
char* byte_6DBD60 = (decltype(byte_6DBD60 + 0)) 0x6dbd60;
char& byte_6DBE60 = * ((decltype(&byte_6DBE60)) 0x6dbe60);
char& byte_6DC260 = * ((decltype(&byte_6DC260)) 0x6dc260);
char* byte_6DC280 = (decltype(byte_6DC280 + 0)) 0x6dc280;
Bitmap& stru_6DC2A4 = * ((decltype(&stru_6DC2A4)) 0x6dc2a4);
__int16& word_6DC2AC = * ((decltype(&word_6DC2AC)) 0x6dc2ac);
__int16& word_6DC2AE = * ((decltype(&word_6DC2AE)) 0x6dc2ae);
__int16& word_6DC2B0 = * ((decltype(&word_6DC2B0)) 0x6dc2b0);
__int16& word_6DC2B2 = * ((decltype(&word_6DC2B2)) 0x6dc2b2);
__int16& word_6DC2B4 = * ((decltype(&word_6DC2B4)) 0x6dc2b4);
__int16& word_6DC2B6 = * ((decltype(&word_6DC2B6)) 0x6dc2b6);
__int16& word_6DC2B8 = * ((decltype(&word_6DC2B8)) 0x6dc2b8);
__int16& word_6DC2BA = * ((decltype(&word_6DC2BA)) 0x6dc2ba);
__int16& word_6DC2BC = * ((decltype(&word_6DC2BC)) 0x6dc2bc);
char& base = * ((decltype(&base)) 0x6dc2c0);
int& dword_6DC2E0 = * ((decltype(&dword_6DC2E0)) 0x6dc2e0);
int& dword_6DC2E4 = * ((decltype(&dword_6DC2E4)) 0x6dc2e4);
int& dword_6DC2E8 = * ((decltype(&dword_6DC2E8)) 0x6dc2e8);
int& dword_6DC2EC = * ((decltype(&dword_6DC2EC)) 0x6dc2ec);
int& dword_6DC2F0 = * ((decltype(&dword_6DC2F0)) 0x6dc2f0);
int& dword_6DC2F4 = * ((decltype(&dword_6DC2F4)) 0x6dc2f4);
size_t& dword_6DD300 = * ((decltype(&dword_6DD300)) 0x6dd300);
int& dword_6DD304 = * ((decltype(&dword_6DD304)) 0x6dd304);
int& dword_6DD308 = * ((decltype(&dword_6DD308)) 0x6dd308);
int& dword_6DD30C = * ((decltype(&dword_6DD30C)) 0x6dd30c);
void *& dword_6DD310 = * ((decltype(&dword_6DD310)) 0x6dd310);
int& dword_6DD314 = * ((decltype(&dword_6DD314)) 0x6dd314);
LPVOID& lpMem = * ((decltype(&lpMem)) 0x6dd318);
int& dword_6DD31C = * ((decltype(&dword_6DD31C)) 0x6dd31c);
int& dword_6DD320 = * ((decltype(&dword_6DD320)) 0x6dd320);
int& dword_6DD324 = * ((decltype(&dword_6DD324)) 0x6dd324);
int& dword_6DD328 = * ((decltype(&dword_6DD328)) 0x6dd328);
LCID& Locale = * ((decltype(&Locale)) 0x6dd32c);
void *& dword_6DD330 = * ((decltype(&dword_6DD330)) 0x6dd330);
int& dword_6DD334 = * ((decltype(&dword_6DD334)) 0x6dd334);
char& byte_6DD340 = * ((decltype(&byte_6DD340)) 0x6dd340);
char& byte_6DD341 = * ((decltype(&byte_6DD341)) 0x6dd341);
UINT& CodePage = * ((decltype(&CodePage)) 0x6dd444);
__int16& word_6DD450 = * ((decltype(&word_6DD450)) 0x6dd450);
char& byte_6DD460 = * ((decltype(&byte_6DD460)) 0x6dd460);
HANDLE& hHeap = * ((decltype(&hHeap)) 0x6dd560);
int& dword_6DD564 = * ((decltype(&dword_6DD564)) 0x6dd564);
UINT& uNumber = * ((decltype(&uNumber)) 0x6dd568);
int* dword_6DD580 = (decltype(dword_6DD580 + 0)) 0x6dd580;
int& dword_6DD680 = * ((decltype(&dword_6DD680)) 0x6dd680);
int& dword_6DD684 = * ((decltype(&dword_6DD684)) 0x6dd684);
void *& dword_6DD688 = * ((decltype(&dword_6DD688)) 0x6dd688);
int& dword_6DD68C = * ((decltype(&dword_6DD68C)) 0x6dd68c);
int& dword_6DD690 = * ((decltype(&dword_6DD690)) 0x6dd690);

#undef DECL_FUNC
