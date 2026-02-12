
void __thiscall FUN_0040a5e0(void *this,short *param_1,char param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t local_20 [12];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    pwVar2 = L"true";
    if (param_2 == '\0') {
      pwVar2 = L"false";
    }
    iVar3 = (int)local_20 - (int)pwVar2;
    do {
      wVar1 = *pwVar2;
      *(wchar_t *)(iVar3 + (int)pwVar2) = wVar1;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*this + 0x48))(param_1,local_20);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

