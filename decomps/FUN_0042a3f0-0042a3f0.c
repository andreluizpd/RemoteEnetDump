
undefined4 * __thiscall
FUN_0042a3f0(void *this,short *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  HANDLE pvVar2;
  short *psVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004475b7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = CVehicleDetectTask::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 5000;
  *(undefined4 *)((int)this + 0x10) = 300000;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x18) = 0;
  FUN_004280d0((int *)((int)this + 0x1c));
  local_8 = 0;
  FUN_004298e0((undefined4 *)((int)this + 0xe0));
  local_8._0_1_ = 1;
  FUN_004255e0((undefined4 *)((int)this + 0x3b0));
  local_8 = CONCAT31(local_8._1_3_,2);
  *(undefined4 *)((int)this + 0x47c) = 1;
  *(undefined4 *)((int)this + 0x480) = 0;
  *(undefined4 *)((int)this + 0x484) = param_3;
  *(undefined4 *)((int)this + 0x488) = param_4;
  *(undefined4 *)((int)this + 0x48c) = 0;
  pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  *(HANDLE *)((int)this + 4) = pvVar2;
  if (param_1 != (short *)0x0) {
    psVar3 = param_1;
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
    FUN_00403710((void *)((int)this + 0x28),param_1,(int)psVar3 - (int)(param_1 + 1) >> 1);
  }
  InterlockedExchange((LONG *)((int)this + 0xe0),(LONG)this);
  ExceptionList = local_10;
  return (undefined4 *)this;
}

