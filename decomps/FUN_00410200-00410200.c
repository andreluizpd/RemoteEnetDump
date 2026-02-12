
void __thiscall FUN_00410200(void *this,LPCWSTR param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00445318;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = IProperty::vftable;
  *(undefined ***)this = CProperty::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 0xc) = 1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  local_8 = 1;
  iVar2 = lstrlenW(param_1);
  lVar1 = (ulonglong)(iVar2 * 2 + 1) * 2;
  uVar3 = FUN_0042bc19(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  *(undefined4 *)((int)this + 8) = uVar3;
  local_8 = 0;
  FUN_00410291();
  return;
}

