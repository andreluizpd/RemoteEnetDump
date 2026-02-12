
void __thiscall FUN_0041e820(void *this,LPCWSTR param_1,LPCWSTR param_2)

{
  CSimpleStringT<wchar_t,0> *this_00;
  PSID_NAME_USE peUse;
  CSimpleStringT<wchar_t,0> *this_01;
  CSimpleStringT<wchar_t,0> *this_02;
  BOOL BVar1;
  DWORD DVar2;
  DWORD local_e8;
  LPWSTR local_e4;
  DWORD local_e0;
  LPWSTR local_dc;
  WCHAR local_d8 [64];
  undefined1 local_58 [68];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044674b;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = (CSimpleStringT<wchar_t,0> *)((int)this + 0x50);
  peUse = (PSID_NAME_USE)((int)this + 0x4c);
  *peUse = SidTypeInvalid;
  ATL::CSimpleStringT<wchar_t,0>::Empty(this_00);
  this_01 = (CSimpleStringT<wchar_t,0> *)((int)this + 0x54);
  ATL::CSimpleStringT<wchar_t,0>::Empty(this_01);
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)((int)this + 0x58));
  this_02 = (CSimpleStringT<wchar_t,0> *)((int)this + 0x5c);
  ATL::CSimpleStringT<wchar_t,0>::Empty(this_02);
  *(undefined1 *)((int)this + 0x48) = 0;
  if (param_1 == (LPCWSTR)0x0) goto LAB_0041ea3d;
  local_dc = (LPWSTR)0x0;
  local_8 = 0;
  FUN_00419260(&local_dc,0x100);
  local_e4 = local_dc;
  local_e0 = 0x44;
  local_e8 = 0x80;
  BVar1 = LookupAccountNameW(param_2,param_1,local_58,&local_e0,local_dc,&local_e8,peUse);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 0x7a) {
      if (0x44 < local_e0) {
                    /* WARNING: Subroutine does not return */
        FUN_00401760(0x80004005);
      }
      if (0x80 < local_e8) {
        FUN_0041e570(&local_dc,local_e8);
        local_e4 = local_dc;
      }
      BVar1 = LookupAccountNameW(param_2,param_1,local_58,&local_e0,local_e4,&local_e8,peUse);
      if (BVar1 != 0) goto LAB_0041e977;
    }
  }
  else {
LAB_0041e977:
    *(undefined1 *)((int)this + 0x48) = 1;
    BVar1 = CopySid(local_e0,(PSID)((int)this + 4),local_58);
    if (BVar1 != 0) {
      FUN_00403dd0(this_01,local_e4);
      FUN_00403dd0(this_00,param_1);
      FUN_00403dd0(this_02,param_2);
      local_8 = 0xffffffff;
      if (local_dc != local_d8) {
        FUN_00419250(&local_dc);
      }
      goto LAB_0041ea3d;
    }
  }
  *peUse = SidTypeInvalid;
  ATL::CSimpleStringT<wchar_t,0>::Empty(this_00);
  ATL::CSimpleStringT<wchar_t,0>::Empty(this_01);
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)((int)this + 0x58));
  ATL::CSimpleStringT<wchar_t,0>::Empty(this_02);
  *(undefined1 *)((int)this + 0x48) = 0;
  local_8 = 0xffffffff;
  if (local_dc != local_d8) {
    FUN_00419250(&local_dc);
  }
LAB_0041ea3d:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

