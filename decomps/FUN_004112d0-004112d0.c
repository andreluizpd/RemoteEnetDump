
int FUN_004112d0(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar5 = param_2;
  piVar4 = param_1;
  uVar1 = param_1[6];
  local_28 = param_1[1];
  local_1c = param_4;
  local_18 = 0;
  local_10 = 0;
  local_14 = 0;
  param_1 = (int *)0x0;
  piVar4[6] = (int)&local_28;
  local_20 = param_3;
  local_c = 0x24;
  local_8 = 1;
  local_24 = param_2;
  param_2 = uVar1;
  piVar6 = (int *)(**(code **)*piVar4)(local_28,uVar5,param_3,param_4,&param_1,0);
  piVar4[6] = param_2;
  piVar7 = piVar6;
  if (piVar6 == (int *)0x0) {
    if (uVar5 == 0x82) {
      piVar4[7] = piVar4[7] | 1;
    }
  }
  else {
    piVar7 = param_1;
    if (uVar5 < 0x3a) {
      if ((uVar5 == 0x39) || ((0x2d < uVar5 && ((uVar5 < 0x30 || (uVar5 == 0x37))))))
      goto LAB_00411393;
    }
    else if ((uVar5 == 0x110) || ((0x131 < uVar5 && (uVar5 < 0x139)))) goto LAB_00411393;
    piVar7 = piVar6;
    if ((*(byte *)(piVar4 + 7) & 1) == 0) {
      SetWindowLongW((HWND)piVar4[1],0,(LONG)param_1);
    }
  }
LAB_00411393:
  if (((piVar4[7] & 1U) != 0) && (piVar4[6] == 0)) {
    iVar2 = piVar4[1];
    piVar4[7] = piVar4[7] & 0xfffffffe;
    pcVar3 = *(code **)(*piVar4 + 0xc);
    piVar4[1] = 0;
    (*pcVar3)(iVar2);
  }
  return (int)piVar7;
}

