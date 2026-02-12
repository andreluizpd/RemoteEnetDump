
int __thiscall FUN_00422a90(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = param_1;
  if ((*(int *)((int)this + 0x10) != 0) && (param_1 != 0)) {
                    /* WARNING: Load size is inaccurate */
    local_c = 0;
    local_8 = 0;
    iVar3 = (**(code **)(*this + 0xe0))(0,0,1,&local_c);
    iVar2 = param_2;
    if (-1 < iVar3) {
      param_1 = 0;
      iVar3 = (**(code **)(**(int **)((int)this + 0x10) + 0xc))
                        (*(int **)((int)this + 0x10),iVar1,param_2,&param_1);
      if ((param_1 != iVar2) && (-1 < iVar3)) {
        iVar3 = -0x7ff8ffda;
      }
                    /* WARNING: Load size is inaccurate */
      (**(code **)(*this + 0xe0))(local_c,local_8,0,0);
    }
    return iVar3;
  }
  return -0x7fffbffd;
}

