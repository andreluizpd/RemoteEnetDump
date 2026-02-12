
void __fastcall FUN_00422a20(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (-1 < (int)((-(uint)(piVar1 != (int *)0x0) & 0x7fffbffd) + 0x80004003)) {
    (**(code **)(*piVar1 + 0x14))(piVar1,0,0,0,0);
  }
  return;
}

