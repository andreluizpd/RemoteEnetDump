
LONG FUN_00401b00(int param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)(param_1 + 0x38));
  if ((LVar1 == 0) && ((undefined4 *)(param_1 + -4) != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)(param_1 + -4))(1);
  }
  return LVar1;
}

