
void __cdecl FUN_00429210(short *param_1,longlong *param_2)

{
  wchar_t wVar1;
  int *piVar2;
  uint uVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  wchar_t *local_24c;
  longlong *local_248;
  undefined1 local_241;
  undefined4 local_240 [3];
  wchar_t *local_234 [136];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004450cb;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_248 = param_2;
  local_241 = 0;
  if ((param_1 == (short *)0x0) || (*param_1 == 0)) goto LAB_00429394;
  FUN_00405ba0(local_240,param_1);
  local_8 = 0;
  piVar2 = FUN_0040cea0((int *)local_234);
  FUN_0040cd70(piVar2);
  if (0 < *(int *)(local_234[0] + -6)) {
    FUN_00420df0((int *)local_234);
    uVar3 = (uint)(*local_234[0] == L'-');
    sVar4 = _wcsspn(local_234[0] + uVar3,(wchar_t *)PTR_u_0123456789abcdefxABCDEFX_0045754c);
    if (local_234[0][sVar4 + uVar3] == L'\0') {
      sVar4 = _wcsspn(local_234[0] + uVar3,(wchar_t *)PTR_u_0123456789_00457550);
      if (local_234[0][sVar4 + uVar3] == L'\0') {
        lVar6 = FUN_0042f5bc(local_234[0]);
        *local_248 = lVar6;
      }
      else {
        pwVar5 = _wcschr(local_234[0],L'x');
        if (pwVar5 != (wchar_t *)0x0) {
          pwVar5 = local_234[0];
          do {
            wVar1 = *pwVar5;
            pwVar5 = pwVar5 + 1;
          } while (wVar1 != L'\0');
          if ((((uint)((int)pwVar5 - (int)(local_234[0] + 1) >> 1) < 2) || (*local_234[0] != L'0'))
             || (local_234[0][1] != L'x')) goto LAB_00429378;
        }
        lVar6 = __wcstoi64(local_234[0],&local_24c,0x10);
        *local_248 = lVar6;
        if (*local_24c != L'\0') {
          *(undefined4 *)local_248 = 0;
          *(undefined4 *)((int)local_248 + 4) = 0;
          goto LAB_00429378;
        }
      }
      local_241 = 1;
    }
  }
LAB_00429378:
  local_8 = 0xffffffff;
  FUN_004030c0(local_240);
LAB_00429394:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

