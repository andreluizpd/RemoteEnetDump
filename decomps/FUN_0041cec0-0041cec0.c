
void __thiscall FUN_0041cec0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *this_00;
  char cVar1;
  uint uVar2;
  int *piVar3;
  LRESULT LVar4;
  HMENU hMenu;
  BOOL BVar5;
  uint wParam;
  tagPOINT local_28;
  tagPOINT local_20;
  undefined1 local_18 [4];
  int local_14;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  local_20.x = (LONG)(short)param_3;
  this_00 = (undefined4 *)((int)this + 4);
  local_20.y = (LONG)(short)((uint)param_3 >> 0x10);
  ScreenToClient((HWND)*this_00,&local_20);
  uVar2 = SendMessageW((HWND)*this_00,0x1a9,0,
                       CONCAT22((undefined2)local_20.y,(undefined2)local_20.x));
  wParam = uVar2 & 0xffff;
  if (uVar2 >> 0x10 == 0) {
    piVar3 = (int *)SendMessageW((HWND)*this_00,0x199,wParam,0);
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 4))();
      if (cVar1 != '\x01') {
        uVar2 = SendMessageW((HWND)*this_00,0x188,0,0);
        if (uVar2 != wParam) {
          FUN_0041bba0(this_00,wParam);
        }
        LVar4 = SendMessageW((HWND)*this_00,0x198,wParam,(LPARAM)local_18);
        if (LVar4 != -1) {
          local_28.x = local_14 + 2;
          local_28.y = local_c + 2;
          ClientToScreen((HWND)*this_00,&local_28);
          hMenu = CreatePopupMenu();
          if (hMenu != (HMENU)0x0) {
            InsertMenuW(hMenu,0,0,1,L"Copy");
            BVar5 = TrackPopupMenu(hMenu,0x100,local_28.x,local_28.y,0,(HWND)*this_00,(RECT *)0x0);
            if (BVar5 == 1) {
              FUN_0041c390(this,wParam);
            }
            DestroyMenu(hMenu);
          }
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

