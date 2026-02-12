
void __thiscall
FUN_00412e20(void *this,HWND param_1,int *param_2,LPCWSTR param_3,uint param_4,DWORD param_5,
            HMENU param_6,LPVOID param_7)

{
  ushort uVar1;
  undefined *puVar2;
  WNDCLASSEXW *pWVar3;
  
  puVar2 = FUN_004124b0();
  if (*(int *)(puVar2 + 0x30) == 0) {
    puVar2 = FUN_004124b0();
    *(wchar_t **)(puVar2 + 0x30) = L"EDIT";
  }
  pWVar3 = (WNDCLASSEXW *)FUN_004124b0();
  uVar1 = FUN_00412ab0(0x4597e8,0x459830,pWVar3,(UINT *)((int)this + 0x20));
  if (param_4 == 0) {
    param_4 = 0x56000000;
  }
  FUN_00412340(this,param_1,param_2,param_3,param_4,param_5,param_6,uVar1,param_7);
  return;
}

