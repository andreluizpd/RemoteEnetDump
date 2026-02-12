
void __thiscall FUN_0040b720(void *this,short *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int *local_40;
  WCHAR local_3c [20];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00444b88;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    local_40 = (int *)0x0;
    local_8 = 1;
                    /* WARNING: Load size is inaccurate */
    cVar2 = (**(code **)(*this + 0x9c))(param_1,&local_40,local_14);
    if (cVar2 != '\0') {
      wsprintfW(local_3c,L"0x%p",param_2);
                    /* WARNING: Load size is inaccurate */
      cVar2 = (**(code **)(*this + 0x160))(param_1,local_3c);
      piVar1 = local_40;
      if (cVar2 != '\0') {
        if ((local_40 != param_2) && (local_40 != (int *)0x0)) {
          local_40 = (int *)0x0;
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        if (param_2 != (int *)0x0) {
          (**(code **)(*param_2 + 4))(param_2);
        }
      }
    }
    local_8 = 0xffffffff;
    if (local_40 != (int *)0x0) {
      (**(code **)(*local_40 + 8))(local_40);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

