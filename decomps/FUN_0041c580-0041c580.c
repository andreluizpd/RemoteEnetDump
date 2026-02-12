
void __thiscall FUN_0041c580(void *this,int param_1)

{
  HDC hdc;
  int y;
  int x;
  int *piVar1;
  char cVar2;
  HWND pHVar3;
  HGDIOBJ h;
  HGDIOBJ pvVar4;
  HBRUSH hbr;
  HGDIOBJ pvVar5;
  COLORREF color;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int x_00;
  HDC *ppHVar9;
  HDC local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  HGDIOBJ local_9c;
  HGDIOBJ local_98;
  HGDIOBJ local_94;
  COLORREF local_8c;
  byte local_38;
  RECT local_34;
  RECT local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004462ab;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 8) != -1) {
    hdc = *(HDC *)(param_1 + 0x18);
    local_8 = 0;
    x_00 = *(int *)(param_1 + 0x1c);
    y = *(int *)(param_1 + 0x20);
    x = *(int *)(param_1 + 0x24);
    iVar6 = *(int *)(param_1 + 0x28);
    piVar1 = *(int **)(param_1 + 0x2c);
    cVar2 = (**(code **)(*piVar1 + 4))(local_14);
    puVar8 = (undefined4 *)((int)this + 0x24);
    ppHVar9 = &local_b4;
    for (iVar7 = 0x20; iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppHVar9 = (HDC)*puVar8;
      puVar8 = puVar8 + 1;
      ppHVar9 = ppHVar9 + 1;
    }
    local_a0 = *(uint *)(param_1 + 0x10) & 0xfffffffb;
    if (*(int *)(param_1 + 8) == *(int *)((int)this + 0xa8)) {
      local_a0 = local_a0 | 0x1000;
    }
    local_b4 = hdc;
    if (((local_38 & 8) == 0) && (pHVar3 = GetFocus(), pHVar3 != *(HWND *)((int)this + 4))) {
      local_a0 = local_a0 & 0xfffffffe;
    }
    h = SelectObject(hdc,local_9c);
    if ((*(byte *)((int)this + 0xac) & 1) != 0) {
      pvVar4 = SelectObject(hdc,local_94);
      MoveToEx(hdc,x_00 + 0xf,y,(LPPOINT)0x0);
      LineTo(hdc,x_00 + 0xf,iVar6);
      if ((*(byte *)((int)this + 0xac) & 4) != 0) {
        local_24.right = x_00 + 0x10;
        local_24.left = x_00;
        local_24.top = y;
        local_24.bottom = iVar6;
        hbr = GetSysColorBrush(0xf);
        FillRect(hdc,&local_24,hbr);
      }
      if (cVar2 == '\x01') {
        SelectObject(hdc,local_98);
        local_24.left = x_00 + 4;
        iVar7 = (iVar6 - y) / 2 + y;
        local_24.top = iVar7 + -4;
        local_24.right = x_00 + 0xd;
        local_24.bottom = iVar7 + 5;
        pvVar5 = GetStockObject(7);
        SelectObject(hdc,pvVar5);
        pvVar5 = GetStockObject(5);
        pvVar5 = SelectObject(hdc,pvVar5);
        Rectangle(hdc,local_24.left,local_24.top,local_24.right,local_24.bottom);
        SelectObject(hdc,pvVar5);
        if ((char)piVar1[8] != '\x01') {
          MoveToEx(hdc,x_00 + 8,iVar7 + -2,(LPPOINT)0x0);
          LineTo(hdc,x_00 + 8,iVar7 + 3);
        }
        MoveToEx(hdc,x_00 + 6,iVar7,(LPPOINT)0x0);
        LineTo(hdc,x_00 + 0xb,iVar7);
      }
      SelectObject(hdc,pvVar4);
      x_00 = x_00 + 0x10;
    }
    local_a8 = *(int *)((int)this + 0xc4) + x_00;
    local_34.left = local_a8 + 1;
    if ((cVar2 == '\x01') && ((*(byte *)((int)this + 0xac) & 4) != 0)) {
      local_a8 = x;
      local_34.left = x;
    }
    local_b0 = x_00;
    local_ac = y;
    local_a4 = iVar6;
    local_34.top = y;
    local_34.right = x;
    local_34.bottom = iVar6;
    local_24.top = y;
    local_24.right = x;
    local_24.bottom = iVar6;
    (**(code **)(*piVar1 + 0x20))(&local_b4);
    if (*(int *)(param_1 + 8) != *(int *)((int)this + 0xa8)) {
      local_ac = local_34.top;
      local_b0 = local_34.left;
      local_a8 = local_34.right;
      local_a4 = local_34.bottom;
      color = SetBkColor(hdc,local_8c);
      if (color != 0xffffffff) {
        ExtTextOutW(hdc,0,0,2,&local_34,(LPCWSTR)0x0,0,(INT *)0x0);
        SetBkColor(hdc,color);
      }
      iVar7 = (**(code **)(*piVar1 + 0x14))();
      if (iVar7 == 0) {
        local_a0 = local_a0 | 4;
      }
      (**(code **)(*piVar1 + 0x24))(&local_b4);
    }
    pvVar4 = SelectObject(hdc,local_94);
    iVar6 = iVar6 + -1;
    MoveToEx(hdc,x_00,iVar6,(LPPOINT)0x0);
    LineTo(hdc,x,iVar6);
    if ((cVar2 != '\x01') || ((*(byte *)((int)this + 0xac) & 4) == 0)) {
      MoveToEx(hdc,*(int *)((int)this + 0xc4) + x_00,y,(LPPOINT)0x0);
      LineTo(hdc,*(int *)((int)this + 0xc4) + x_00,iVar6);
    }
    SelectObject(hdc,pvVar4);
    SelectObject(hdc,h);
  }
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

