
undefined4 __thiscall
FUN_00412890(void *this,undefined4 param_1,int param_2,uint param_3,LPARAM param_4,uint *param_5,
            int param_6)

{
  bool bVar1;
  uint uVar2;
  
  if (param_6 == 0) {
    if (param_2 == 1) {
      uVar2 = FUN_00412820((int)this);
      *param_5 = uVar2;
      return 1;
    }
    if (param_2 == 0x100) {
      param_6 = 1;
      uVar2 = FUN_00412670(this,0x100,param_3,param_4,&param_6);
      *param_5 = uVar2;
      if (param_6 != 0) {
        return 1;
      }
    }
    else if (param_2 == 0x102) {
      bVar1 = true;
      if (((param_3 & 0xffff) != 0xd) && ((param_3 & 0xffff) != 0x1b)) {
        bVar1 = false;
      }
      *param_5 = 0;
      if (bVar1) {
        return 1;
      }
    }
    else if (param_2 == 7) {
      *(undefined1 *)((int)this + 0x24) = 0;
      *param_5 = 0;
    }
    else {
      if (param_2 == 8) {
        uVar2 = FUN_004127a0(this,8,param_3,param_4);
        *param_5 = uVar2;
        return 1;
      }
      if (param_2 == 0x87) {
        uVar2 = CallWindowProcW(*(WNDPROC *)((int)this + 0x20),*(HWND *)((int)this + 4),0x87,param_3
                                ,param_4);
        *param_5 = uVar2 | 5;
        return 1;
      }
    }
  }
  return 0;
}

