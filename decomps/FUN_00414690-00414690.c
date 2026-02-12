
WPARAM __thiscall
FUN_00414690(void *this,undefined4 param_1,undefined4 param_2,short *param_3,int param_4,
            short *param_5,int param_6)

{
  undefined4 *puVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  short *psVar5;
  undefined4 uVar6;
  HANDLE hObject;
  uint local_c;
  WPARAM local_8;
  
  local_8 = 0;
  if (param_3 != (short *)0x0) {
    psVar5 = param_3;
    do {
      sVar2 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar2 != 0);
    FUN_00403710((void *)((int)this + 0x40),param_3,(int)psVar5 - (int)(param_3 + 1) >> 1);
  }
  if (param_5 != (short *)0x0) {
    psVar5 = param_5;
    do {
      sVar2 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar2 != 0);
    FUN_00403710((void *)((int)this + 0xb4),param_5,(int)psVar5 - (int)(param_5 + 1) >> 1);
  }
  if (-1 < param_4) {
    *(int *)((int)this + 0xc) = param_4;
  }
  if (-1 < param_6) {
    *(int *)((int)this + 0x10) = param_6;
  }
  if (*(int *)((int)this + 0xc) == 0) {
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 0x10);
  }
  if (*(int *)((int)this + 0x10) == 0) {
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0xc);
  }
  if (*(int *)(*(int *)((int)this + 0x40) + -0xc) == 0) {
    FUN_00403710((void *)((int)this + 0x40),L"0.0.0.0",7);
  }
  if (*(void **)((int)this + 0x14) != (void *)0x0) {
    _free(*(void **)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (*(void **)((int)this + 0x24) != (void *)0x0) {
    _free(*(void **)((int)this + 0x24));
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  uVar3 = *(undefined4 *)((int)this + 0xc);
  uVar4 = *(uint *)((int)this + 0x18);
  if ((*(uint *)((int)this + 0x1c) <= uVar4) &&
     (uVar6 = FUN_00404900((void *)((int)this + 0x14),uVar4 + 1), (char)uVar6 == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x8007000e);
  }
  puVar1 = (undefined4 *)(*(int *)((int)this + 0x14) + uVar4 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = uVar3;
  }
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  uVar4 = *(uint *)((int)this + 0x28);
  uVar3 = *(undefined4 *)((int)this + 0x10);
  if ((*(uint *)((int)this + 0x2c) <= uVar4) &&
     (uVar6 = FUN_00404900((void *)((int)this + 0x24),uVar4 + 1), (char)uVar6 == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x8007000e);
  }
  puVar1 = (undefined4 *)(*(int *)((int)this + 0x24) + uVar4 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = uVar3;
  }
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + 1;
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined4 *)((int)this + 0x11c) = param_1;
  *(undefined4 *)((int)this + 0x120) = param_2;
  *(undefined1 *)((int)this + 8) = 0;
  local_c = 0;
  if (*(HANDLE *)((int)this + 0x124) != (HANDLE)0x0) {
    ResetEvent(*(HANDLE *)((int)this + 0x124));
  }
  hObject = (HANDLE)__beginthreadex((void *)0x0,0,FUN_00414680,this,0,&local_c);
  if (hObject == (HANDLE)0x0) {
    local_8 = GetLastError();
    if (0 < (int)local_8) {
      local_8 = local_8 & 0xffff | 0x80070000;
    }
    if ((*(HWND *)((int)this + 0x11c) != (HWND)0x0) && (*(UINT *)((int)this + 0x120) != 0)) {
      PostMessageW(*(HWND *)((int)this + 0x11c),*(UINT *)((int)this + 0x120),local_8,0);
      return local_8;
    }
  }
  else {
    CloseHandle(hObject);
    if ((*(int *)((int)this + 0x11c) == 0) && (*(HANDLE *)((int)this + 0x124) != (HANDLE)0x0)) {
      WaitForSingleObject(*(HANDLE *)((int)this + 0x124),0xffffffff);
    }
  }
  return local_8;
}

