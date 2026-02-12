
void __thiscall FUN_00402860(void *this,int param_1)

{
  int *piVar1;
  void *_Src;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
                    /* WARNING: Load size is inaccurate */
  _Src = *this;
  iVar2 = *(int *)((int)_Src + -0xc);
  puVar5 = (undefined4 *)((int)_Src + -0x10);
  puVar3 = (undefined4 *)(**(code **)(*(int *)*puVar5 + 0x10))();
  iVar4 = (**(code **)*puVar3)(param_1,1);
  if (iVar4 == 0) {
    FUN_004023e0();
  }
  if (iVar2 < param_1) {
    param_1 = iVar2;
  }
  _memcpy_s((void *)(iVar4 + 0x10),param_1 + 1U,_Src,param_1 + 1U);
  *(int *)(iVar4 + 4) = iVar2;
  piVar1 = (int *)((int)_Src + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*puVar5 + 4))(puVar5);
  }
  *(void **)this = (void *)(iVar4 + 0x10);
  return;
}

