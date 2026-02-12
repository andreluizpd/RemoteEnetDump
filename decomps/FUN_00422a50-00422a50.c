
void __thiscall
FUN_00422a50(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x10);
  if (-1 < (int)((-(uint)(piVar1 != (int *)0x0) & 0x7fffbffd) + 0x80004003)) {
    (**(code **)(*piVar1 + 0x14))(piVar1,param_1,param_2,param_3,param_4);
  }
  return;
}

