
int __thiscall FUN_004149d0(void *this,uint param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = (**(code **)(*this + 0x18))(this,param_1 + 1,param_2 + (uint)(0xfffffffe < param_1));
  if (-1 < iVar1) {
    if ((*(int *)((int)this + 0x24) == 0) && (*(uint *)((int)this + 0x20) <= param_1)) {
      bVar3 = false;
      uVar2 = param_1;
      if ((param_1 == *(uint *)((int)this + 0x20)) && (*(int *)((int)this + 0x24) == 0)) {
        bVar3 = 0xfffffffe < param_1;
        uVar2 = param_1 + 1;
      }
                    /* WARNING: Load size is inaccurate */
      (**(code **)(*this + 0x18))(this,uVar2,bVar3);
    }
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(uint *)((int)this + 0x18) = param_1;
    if (param_3 != (int *)0x0) {
      *param_3 = *(int *)((int)this + 8);
    }
  }
  return iVar1;
}

