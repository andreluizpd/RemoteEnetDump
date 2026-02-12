
LONG FUN_00409410(int *param_1)

{
  LONG LVar1;
  
  LVar1 = 0;
  if (((char)param_1[2] == '\0') && (LVar1 = InterlockedDecrement(param_1 + 1), LVar1 == 0)) {
    (**(code **)(*param_1 + 0xc))(1);
  }
  return LVar1;
}

