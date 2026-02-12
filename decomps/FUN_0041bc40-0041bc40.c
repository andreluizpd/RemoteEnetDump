
undefined4 __cdecl
FUN_0041bc40(HWND param_1,uint param_2,WPARAM param_3,LPARAM param_4,LRESULT *param_5)

{
  LRESULT LVar1;
  
  if (0x2111 < param_2) {
    switch(param_2) {
    case 0x2114:
    case 0x2115:
    case 0x2132:
    case 0x2133:
    case 0x2134:
    case 0x2135:
    case 0x2136:
    case 0x2137:
    case 0x2138:
    case 0x2210:
      goto switchD_0041bc61_caseD_202b;
    default:
switchD_0041bc61_caseD_2030:
      return 0;
    }
  }
  if (param_2 != 0x2111) {
    switch(param_2) {
    case 0x202b:
    case 0x202c:
    case 0x202d:
    case 0x202e:
    case 0x202f:
    case 0x2039:
    case 0x204e:
      break;
    default:
      goto switchD_0041bc61_caseD_2030;
    }
  }
switchD_0041bc61_caseD_202b:
  LVar1 = DefWindowProcW(param_1,param_2 - 0x2000,param_3,param_4);
  *param_5 = LVar1;
  return 1;
}

