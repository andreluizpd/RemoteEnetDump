
void __thiscall FUN_00420cf0(void *this,UINT param_1,WPARAM param_2,LPARAM param_3)

{
  undefined4 *puVar1;
  HWND hWnd;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
    iVar2 = FUN_0041fb80(iVar2);
    if ((iVar2 == 0) &&
       ((puVar1 = *(undefined4 **)(*(int *)((int)this + 4) + 4), puVar1 != (undefined4 *)0x0 &&
        (hWnd = (HWND)*puVar1, hWnd != (HWND)0x0)))) {
      SendMessageW(hWnd,param_1,param_2,param_3);
    }
  }
  return;
}

