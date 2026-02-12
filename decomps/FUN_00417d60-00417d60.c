
void __cdecl
FUN_00417d60(uint *param_1,byte *param_2,int param_3,int param_4,uint *param_5,uint param_6)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  if (param_4 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)(param_4 + 0x20);
  }
  if (param_3 == 0) {
    param_1[1] = 0;
    *param_1 = ~(param_6 >> 8) & 0x10;
    param_1[2] = 0;
    return;
  }
  if (param_5[4] == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(param_5[4] + 0x14);
  }
  local_18 = *puVar6;
  local_14 = puVar6[1];
  bVar1 = param_2[param_3 + -1];
  param_2[param_3 + -1] = 0;
  local_10 = 0;
  local_c = 0;
  if (((*param_2 != 0xef) || (param_2[1] != 0xbb)) || (pbVar2 = param_2 + 3, param_2[2] != 0xbf)) {
    pbVar2 = param_2;
  }
  FUN_00417730(&local_18,pbVar2,param_5,param_6,bVar1);
  puVar6[1] = local_14;
  *puVar6 = local_18;
  if (local_10 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = local_10 - (int)param_2;
  }
  if (local_c == 0) {
    if (bVar1 == 0x3c) {
      *param_1 = 5;
      param_1[1] = param_3 - 1;
      param_1[2] = 0;
      return;
    }
    if (local_8 == 0) {
      puVar4 = (uint *)param_5[4];
    }
    else {
      puVar4 = *(uint **)(local_8 + 0x18);
    }
    if ((param_6 & 0x1000) == 0) {
      uVar5 = FUN_00415310(puVar4);
      if ((char)uVar5 == '\0') {
        *param_1 = 0x10;
        param_1[1] = param_3 - 1;
        param_1[2] = 0;
        return;
      }
    }
  }
  else if (((0 < (int)uVar3) && (uVar3 == param_3 - 1U)) && (bVar1 == 0)) {
    uVar3 = uVar3 - 1;
  }
  *param_1 = local_c;
  param_1[1] = uVar3;
  param_1[2] = 0;
  return;
}

