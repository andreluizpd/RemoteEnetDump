
undefined4 __thiscall
FUN_0041d000(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  
  if (this == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)this + -0x24;
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x20) = 1;
  FUN_00410000(iVar1);
  if (*(undefined4 **)(param_3 + 0x10) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_3 + 0x10))(1);
  }
  *param_4 = *(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x20);
  return 1;
}

