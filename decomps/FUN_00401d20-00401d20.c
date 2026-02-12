
int __thiscall FUN_00401d20(void *this,undefined4 param_1,int param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = param_2 + 8U & 0xfffffff8;
  lVar1 = (ulonglong)uVar4 * (ulonglong)param_3;
  uVar2 = (uint)lVar1;
  if ((((int)((ulonglong)lVar1 >> 0x20) == 0) && (uVar2 < 0xfffffff0)) &&
     (iVar3 = (**(code **)(**(int **)((int)this + 4) + 8))(param_1,uVar2 + 0x10), iVar3 != 0)) {
    *(uint *)(iVar3 + 8) = uVar4 - 1;
    return iVar3;
  }
  return 0;
}

