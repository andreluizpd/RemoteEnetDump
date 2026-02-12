
LONG FUN_0040a240(int param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)(param_1 + 4));
  if ((LVar1 == 0) && ((undefined4 *)(param_1 + -8) != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)(param_1 + -8))(1);
  }
  return LVar1;
}

