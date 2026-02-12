
undefined4 __thiscall
FUN_0041dda0(void *this,undefined4 param_1,uint param_2,uint param_3,HWND param_4,LRESULT *param_5,
            int param_6)

{
  LRESULT LVar1;
  short sVar2;
  
  if (param_6 != 0) {
    return 0;
  }
  if (param_2 == 0x110) {
    param_6 = 1;
    LVar1 = FUN_00411920((int)this);
  }
  else if (param_2 == 0x111) {
    sVar2 = (short)param_3;
    if (sVar2 == -0x1ec0) {
      param_6 = 1;
      LVar1 = FUN_00412c70();
    }
    else if (sVar2 == 1) {
      param_6 = 1;
      LVar1 = FUN_0040fc10();
    }
    else if (sVar2 == 2) {
      param_6 = 1;
      LVar1 = FUN_0040fc10();
    }
    else if (sVar2 == 0x3ee) {
      param_6 = 1;
      LVar1 = FUN_00412a20((int)this);
    }
    else if (sVar2 == 0x3ed) {
      param_6 = 1;
      LVar1 = FUN_00411500(this,param_3 >> 0x10,0x3ed);
    }
    else {
      if (sVar2 != 1000) goto LAB_0041dfb2;
      param_6 = 1;
      LVar1 = FUN_00411cc0((int)this);
    }
  }
  else if (param_2 == 0x10) {
    param_6 = 1;
    LVar1 = FUN_00411280((int)this);
  }
  else if (param_2 == 0x411) {
    param_6 = 1;
    LVar1 = FUN_00413320(this,0x411,param_3,&param_4->unused);
  }
  else if (param_2 == 0x412) {
    param_6 = 1;
    LVar1 = FUN_00413130(this,0x412,param_3);
  }
  else if (param_2 == 0x413) {
    param_6 = 1;
    LVar1 = FUN_00413230(this,0x413,param_3);
  }
  else if (param_2 == 0x414) {
    param_6 = 1;
    LVar1 = FUN_00413010(this,0x414,param_3);
  }
  else {
    if (param_2 != 0x8021) goto LAB_0041dfb2;
    param_6 = 1;
    LVar1 = FUN_0040fc20((int)this);
  }
  *param_5 = LVar1;
  if (param_6 != 0) {
    return 1;
  }
LAB_0041dfb2:
  param_6 = 1;
  LVar1 = FUN_0041dca0(this,param_2,param_3,param_4,&param_6);
  *param_5 = LVar1;
  if (param_6 != 0) {
    return 1;
  }
  return 0;
}

