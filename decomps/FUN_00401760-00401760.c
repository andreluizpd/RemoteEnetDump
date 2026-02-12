
void FUN_00401760(undefined4 param_1)

{
  code *pcVar1;
  
  __CxxThrowException_8(&param_1,&DAT_004511b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

