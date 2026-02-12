
LRESULT __thiscall
FUN_0041dca0(void *this,uint param_1,uint param_2,HWND param_3,undefined4 *param_4)

{
  HWND hWnd;
  LRESULT LVar1;
  
  if (param_1 < 0x3a) {
    if (param_1 == 0x39) {
      if (param_2 == 0) goto switchD_0041dcbe_default;
      hWnd = (HWND)param_3[2].unused;
    }
    else {
      switch(param_1) {
      case 0x2b:
        if (param_2 == 0) goto switchD_0041dcbe_default;
        hWnd = (HWND)param_3[5].unused;
        break;
      case 0x2c:
        if (param_2 == 0) goto switchD_0041dcbe_default;
        hWnd = GetDlgItem(*(HWND *)((int)this + 4),param_3[1].unused);
        break;
      case 0x2d:
        if (param_2 == 0) goto switchD_0041dcbe_default;
        hWnd = (HWND)param_3[3].unused;
        break;
      case 0x2e:
      case 0x2f:
        goto switchD_0041dcbe_caseD_2e;
      default:
        goto switchD_0041dcbe_default;
      }
    }
  }
  else {
    if (param_1 < 0x116) {
      if (param_1 < 0x114) {
        if (param_1 == 0x4e) {
          hWnd = (HWND)param_3->unused;
          goto LAB_0041dd17;
        }
        if ((param_1 != 0x111) || (param_3 == (HWND)0x0)) goto switchD_0041dcbe_default;
      }
    }
    else {
      if (param_1 < 0x132) goto switchD_0041dcbe_default;
      if (0x138 < param_1) {
        if (param_1 != 0x210) goto switchD_0041dcbe_default;
        if (1 < (param_2 & 0xffff) - 1) {
          hWnd = GetDlgItem(*(HWND *)((int)this + 4),param_2 >> 0x10);
          goto LAB_0041dd17;
        }
      }
    }
switchD_0041dcbe_caseD_2e:
    hWnd = param_3;
  }
LAB_0041dd17:
  if (hWnd != (HWND)0x0) {
    LVar1 = SendMessageW(hWnd,param_1 + 0x2000,param_2,(LPARAM)param_3);
    return LVar1;
  }
switchD_0041dcbe_default:
  *param_4 = 0;
  return 1;
}

