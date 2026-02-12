
void __thiscall FUN_004028e0(void *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = *this;
  if ((*(int *)(iVar1 + -8) < param_1) && (0 < param_1)) {
    iVar1 = (**(code **)(**(int **)(iVar1 + -0x10) + 8))(iVar1 + -0x10,param_1,1);
    if (iVar1 != 0) goto LAB_00402910;
  }
  iVar1 = FUN_004023e0();
LAB_00402910:
  *(int *)this = iVar1 + 0x10;
  return;
}

