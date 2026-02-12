
undefined8 __fastcall FUN_00409eb0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x20);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return CONCAT44(iVar2,param_1 + 0x14);
}

