
bool __thiscall FUN_00406310(void *this,ushort param_1,HMODULE param_2)

{
  int iVar1;
  
  if (*(void **)((int)this + 0x10) != (void *)0x0) {
    FUN_004061b0(*(void **)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (param_2 == (HMODULE)0x0) {
    param_2 = GetModuleHandleW((LPCWSTR)0x0);
  }
  iVar1 = FUN_00406480(param_2,param_1);
  *(int *)((int)this + 0x10) = iVar1;
  return iVar1 != 0;
}

