
undefined4 __cdecl
FUN_00417070(undefined4 *param_1,size_t *param_2,void *param_3,uint param_4,char param_5)

{
  undefined4 uVar1;
  int iVar2;
  size_t sVar3;
  void *_Dst;
  undefined1 *puVar4;
  uint uVar5;
  uint _Size;
  
  uVar5 = 0;
  _Size = param_4;
  if (param_4 != 0) {
    do {
      _Size = uVar5;
      if (0x7f < *(byte *)(uVar5 + (int)param_3)) break;
      uVar5 = uVar5 + 1;
      _Size = param_4;
    } while (uVar5 < param_4);
  }
  uVar5 = param_4 - _Size;
  if (uVar5 == 0) {
    uVar1 = FUN_00414c90(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  iVar2 = FUN_00415720(_Size + (int)param_3,uVar5,0);
  sVar3 = iVar2 + _Size + 1;
  _Dst = (void *)(*(code *)PTR_FUN_00456d88)(sVar3);
  if (_Dst != (void *)0x0) {
    FID_conflict__memcpy(_Dst,param_3,_Size);
    puVar4 = (undefined1 *)FUN_00415760(_Size + (int)param_3,uVar5,(byte *)((int)_Dst + _Size));
    *puVar4 = 0;
    *param_1 = _Dst;
    *param_2 = sVar3;
    return CONCAT31((int3)(sVar3 >> 8),1);
  }
  return 0;
}

