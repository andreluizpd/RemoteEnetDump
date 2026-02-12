
void __fastcall FUN_00411e10(int param_1)

{
  OLECHAR *pOVar1;
  uint uVar2;
  HRESULT HVar3;
  int *piVar4;
  void *this;
  _union_2683 local_260;
  _union_2683 local_250;
  int local_240 [3];
  OLECHAR *local_234 [136];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044577c;
  local_10 = ExceptionList;
  uVar2 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  FUN_0040b820(local_240);
  local_8 = 0;
  (**(code **)(*(int *)(param_1 + 0x6c8) + 0x100))(&DAT_004496f4,local_234,uVar2);
  pOVar1 = local_234[0];
  local_250.n2.vt = 0;
  HVar3 = VariantClear((VARIANTARG *)&local_250.n2);
  if (HVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(HVar3);
  }
  local_250.n2.vt = 8;
  local_250._8_4_ = SysAllocString(pOVar1);
  if (((BSTR)local_250._8_4_ != (BSTR)0x0) || (pOVar1 == (OLECHAR *)0x0)) {
    local_8 = CONCAT31(local_8._1_3_,1);
    this = (void *)(param_1 + 0x24);
    piVar4 = FUN_004103d0(this,L"Ip");
    if (piVar4 != (int *)0x0) {
      FUN_00411560(this,piVar4,(int)&local_250);
    }
    local_8 = local_8 & 0xffffff00;
    VariantClear((VARIANTARG *)&local_250.n2);
    ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)local_234);
    (**(code **)(*(int *)(param_1 + 0x6c8) + 0x100))(&DAT_004496ec,local_234);
    pOVar1 = local_234[0];
    local_260.n2.vt = 0;
    HVar3 = VariantClear((VARIANTARG *)&local_260.n2);
    if (HVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401760(HVar3);
    }
    local_260.n2.vt = 8;
    local_260._8_4_ = SysAllocString(pOVar1);
    if (((BSTR)local_260._8_4_ == (BSTR)0x0) && (pOVar1 != (OLECHAR *)0x0)) {
      local_260.n2.vt = 10;
      local_260._8_4_ = 0x8007000e;
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x8007000e);
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    piVar4 = FUN_004103d0(this,L"Mac");
    if (piVar4 != (int *)0x0) {
      FUN_00411560(this,piVar4,(int)&local_260);
    }
    local_8 = local_8 & 0xffffff00;
    VariantClear((VARIANTARG *)&local_260.n2);
    (**(code **)(*(int *)(param_1 + 0x6c8) + 0x100))(&DAT_004496e4,local_234);
    local_250.n2.vt = 0;
    HVar3 = VariantClear((VARIANTARG *)&local_250.n2);
    if (HVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401760(HVar3);
    }
    local_250.n2.vt = 8;
    local_250._8_4_ = SysAllocString(local_234[0]);
    if (((BSTR)local_250._8_4_ != (BSTR)0x0) || (local_234[0] == (OLECHAR *)0x0)) {
      local_8 = CONCAT31(local_8._1_3_,3);
      piVar4 = FUN_004103d0(this,L"Vin");
      if (piVar4 != (int *)0x0) {
        FUN_00411560(this,piVar4,(int)&local_250);
      }
      local_8 = local_8 & 0xffffff00;
      VariantClear((VARIANTARG *)&local_250.n2);
      local_8 = 0xffffffff;
      FUN_004030c0(local_240);
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  local_250.n2.vt = 10;
  local_250._8_4_ = 0x8007000e;
                    /* WARNING: Subroutine does not return */
  FUN_00401760(0x8007000e);
}

