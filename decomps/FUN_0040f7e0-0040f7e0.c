
void __thiscall FUN_0040f7e0(void *this,wchar_t *param_1,va_list param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1 != (wchar_t *)0x0) &&
     (iVar1 = FID_conflict___vscprintf_p(param_1,param_2), 0 < iVar1)) {
    if (*(int *)((int)this + 8) + -1 < iVar1) {
      uVar4 = iVar1 + 0x1000U & 0xfffff000;
      piVar2 = (int *)FUN_00401d70();
      iVar3 = (**(code **)(*piVar2 + 4))(uVar4);
      if (iVar3 != 0) {
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
        *(uint *)((int)this + 0xc) = uVar4;
        FUN_0040f740((int)this);
        *(uint *)((int)this + 8) = uVar4;
        *(int *)((int)this + 4) = iVar3;
      }
    }
    _vsprintf_s(*(char **)((int)this + 4),iVar1 + 1,(char *)param_1,param_2);
  }
  return;
}

