
undefined4 __thiscall
FUN_0041e150(void *this,HWND param_1,uint param_2,uint param_3,HWND param_4,LRESULT *param_5,
            int param_6)

{
  LRESULT *pLVar1;
  LRESULT LVar2;
  int iVar3;
  
  pLVar1 = param_5;
  if (param_6 != 0) {
    return 0;
  }
  if (param_2 == 1) {
    LVar2 = CallWindowProcW(*(WNDPROC *)((int)this + 0x20),*(HWND *)((int)this + 4),1,param_3,
                            (LPARAM)param_4);
    SendMessageW(*(HWND *)((int)this + 4),5,0,0);
    SendMessageW(*(HWND *)((int)this + 4),0x1a,0,0);
    *param_5 = LVar2;
    return 1;
  }
  if (param_2 == 2) {
    FUN_00410000((int)this);
    SendMessageW(*(HWND *)((int)this + 4),0x184,0,0);
    *param_5 = 0;
    return 1;
  }
  if (param_2 == 5) {
    param_5 = (LRESULT *)0x1;
    LVar2 = FUN_0041da80(this);
  }
  else {
    if (((param_2 == 0x115) || (param_2 == 0x114)) || (param_2 == 0x20a)) {
      FUN_00410000((int)this);
      *pLVar1 = 0;
      goto LAB_0041e4f2;
    }
    if (param_2 == 0x100) {
      param_5 = (LRESULT *)0x1;
      LVar2 = FUN_0041cb30(this,0x100,(short)param_3,param_4,&param_5);
    }
    else if (param_2 == 0x102) {
      param_5 = (LRESULT *)0x1;
      LVar2 = FUN_0041cd10(this,0x102,param_3,param_4,&param_5);
    }
    else if (param_2 == 0x200) {
      param_5 = (LRESULT *)0x1;
      LVar2 = FUN_0041d720(this,0x200,param_3,(short)param_4,&param_5);
    }
    else {
      if (param_2 == 0x201) {
        LVar2 = FUN_0041bf40(this,0x201,param_3,(LPARAM)param_4);
        *pLVar1 = LVar2;
        return 1;
      }
      if (param_2 == 0x202) {
        param_5 = (LRESULT *)0x1;
        LVar2 = FUN_0041c070(this,0x202,param_3,(short)param_4,&param_5);
      }
      else {
        if (param_2 == 0x203) {
          LVar2 = FUN_0041c110(this,0x203,param_3,(LPARAM)param_4);
          *pLVar1 = LVar2;
          return 1;
        }
        if (param_2 == 0x1a) {
          LVar2 = FUN_0041d170((int)this);
          *pLVar1 = LVar2;
          return 1;
        }
        if (param_2 != 0x20) {
          if (param_2 == 0x5b3) {
            LVar2 = FUN_0041db10(this,0x5b3,param_3);
            *pLVar1 = LVar2;
            return 1;
          }
          if (param_2 == 0x5ae) {
            LVar2 = FUN_0041c1d0(this,0x5ae,param_3,param_4);
            *pLVar1 = LVar2;
            return 1;
          }
          if (param_2 == 0x5af) {
            LVar2 = FUN_0041c2b0(this,0x5af,param_3,param_4);
            *pLVar1 = LVar2;
            return 1;
          }
          if (param_2 == 0x5b0) {
            LVar2 = FUN_0041cdb0(this,0x5b0,param_3,&param_4->unused);
            *pLVar1 = LVar2;
            return 1;
          }
          if (param_2 == 0x5b1) {
            FUN_0041c310(this,&param_4->unused);
            *pLVar1 = 0;
            return 1;
          }
          if (param_2 == 0x5b2) {
            FUN_0041d520(this,&param_4->unused);
            *pLVar1 = 0;
            return 1;
          }
          if (param_2 == 0x7b) {
            LVar2 = FUN_0041cec0(this,0x7b,param_3,param_4);
            *pLVar1 = LVar2;
            return 1;
          }
          if ((param_2 == 0x2111) && ((short)(param_3 >> 0x10) == 1)) {
            LVar2 = FUN_0041d7e0(this);
            *pLVar1 = LVar2;
            return 1;
          }
          goto LAB_0041e4f2;
        }
        param_5 = (LRESULT *)0x1;
        LVar2 = FUN_0041bbc0(this);
      }
    }
  }
  *pLVar1 = LVar2;
  if (param_5 != (LRESULT *)0x0) {
    return 1;
  }
LAB_0041e4f2:
  iVar3 = FUN_0041d350((void *)((int)this + 0x24),param_1,param_2,param_3,(int)param_4,pLVar1,1);
  if ((iVar3 == 0) &&
     (iVar3 = FUN_0041bc40(param_1,param_2,param_3,(LPARAM)param_4,pLVar1), iVar3 == 0)) {
    return 0;
  }
  return 1;
}

