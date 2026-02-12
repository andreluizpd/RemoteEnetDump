
void __thiscall FUN_0041c390(void *this,WPARAM param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  HRESULT HVar4;
  BOOL BVar5;
  UINT UVar6;
  HGLOBAL hMem;
  LPVOID _Dst;
  SIZE_T dwBytes;
  VARIANTARG local_30;
  VARIANTARG local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446238;
  local_10 = ExceptionList;
  uVar1 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (-1 < (int)param_1) {
    piVar2 = (int *)SendMessageW(*(HWND *)((int)this + 4),0x199,param_1,0);
    if ((piVar2 != (int *)0xffffffff) && (piVar2 != (int *)0x0)) {
      VariantInit(&local_30);
      iVar3 = (**(code **)(*piVar2 + 0x38))(&local_30,uVar1);
      if (iVar3 != 0) {
        VariantInit(&local_20);
        local_8 = 0;
        HVar4 = VariantChangeType(&local_20,&local_30,0,8);
        if ((-1 < HVar4) && ((BSTR)local_20.n1._8_4_ != (BSTR)0x0)) {
          BVar5 = OpenClipboard(*(HWND *)((int)this + 4));
          if (BVar5 != 0) {
            UVar6 = SysStringLen((BSTR)local_20.n1._8_4_);
            dwBytes = UVar6 * 2 + 2;
            hMem = GlobalAlloc(2,dwBytes);
            _Dst = GlobalLock(hMem);
            FID_conflict__memcpy(_Dst,(void *)local_20.n1._8_4_,dwBytes);
            GlobalUnlock(hMem);
            EmptyClipboard();
            SetClipboardData(0xd,hMem);
            CloseClipboard();
          }
        }
        local_8 = 0xffffffff;
        VariantClear(&local_20);
      }
      VariantClear(&local_30);
    }
  }
  ExceptionList = local_10;
  return;
}

