
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_0041a150(void *this,void *param_1,LPCWSTR param_2,undefined2 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uStack_2144;
  uint local_2128;
  void *local_2124;
  uint local_2120 [66];
  WCHAR local_2018 [4096];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445ef1;
  local_10 = ExceptionList;
  uStack_2144 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2144;
  ExceptionList = &local_10;
  local_2124 = param_1;
  local_2120[0] = 0;
  local_18 = uStack_2144;
  iVar1 = FUN_00418fc0(this,local_2018);
  if ((iVar1 < 0) || (iVar1 = FUN_00418da0(local_2018,(undefined2 *)local_2120), iVar1 == 0))
  goto LAB_0041a4d7;
  FUN_00418f60((undefined4 *)this);
  iVar1 = FUN_00418fc0(this,local_2018);
  if (iVar1 < 0) goto LAB_0041a4d7;
  uVar2 = local_2120[0] & 0xffff;
  if (uVar2 < 0x14) {
    if (uVar2 == 0x13) {
      local_2124 = (void *)0x0;
      local_8 = 3;
      VarUI4FromStr(local_2018,0,0,&local_2128);
      uVar2 = FUN_00418ba0(param_1,param_2);
      local_8 = 0xffffffff;
      ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>::
      ~CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>
                ((CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator> *)&local_2124);
    }
    else {
      if (uVar2 != 8) {
        if (uVar2 == 0x11) {
          local_2128 = lstrlenW(local_2018);
          if ((local_2128 & 1) == 0) {
            local_2120[0] = (int)local_2128 / 2;
            local_2120[1] = 0;
            local_8 = 5;
            FUN_00419eb0(local_2120 + 1,local_2120[0]);
            local_8 = 4;
            FUN_0041a29c();
            return;
          }
          goto LAB_0041a4d7;
        }
        goto LAB_0041a4bb;
      }
      uVar2 = FUN_00418bc0(param_1,param_2,local_2018,1);
    }
    if (uVar2 != 0) {
      FUN_004187e0(uVar2);
      goto LAB_0041a4d7;
    }
  }
  else if (uVar2 == 0x4008) {
    iVar1 = lstrlenW(local_2018);
    local_2120[1] = 0;
    local_8 = 1;
    FUN_00419e60(local_2120 + 1,iVar1 + 2);
    local_8 = 0;
    FUN_0041a413();
    return;
  }
LAB_0041a4bb:
  FUN_00418fc0(this,param_3);
LAB_0041a4d7:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

