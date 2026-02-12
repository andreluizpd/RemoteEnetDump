
void __cdecl
FUN_00418110(uint *param_1,int param_2,uint *param_3,uint *param_4,uint param_5,uint param_6,
            uint param_7,undefined4 param_8,char param_9,undefined4 *param_10)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  size_t extraout_ECX;
  size_t sVar5;
  uint local_14;
  uint local_10;
  size_t local_8;
  
  puVar1 = param_4;
  if ((param_4 == (uint *)0x0) && (param_5 != 0)) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 2;
    return;
  }
  sVar5 = param_5;
  if (param_7 == 8) {
    uVar3 = 2;
  }
  else if (param_7 == 4) {
    uVar3 = 2;
  }
  else if (param_7 == 7) {
    uVar3 = 5;
  }
  else {
    uVar3 = param_7;
    if (param_7 == 0) {
      if (param_5 < 4) {
        uVar3 = 1;
      }
      else {
        uVar3 = FUN_00414be0((char)*param_4,*(char *)((int)param_4 + 1),*(char *)((int)param_4 + 2),
                             *(char *)((int)param_4 + 3));
        sVar5 = extraout_ECX;
      }
    }
  }
  param_4 = (uint *)0x0;
  local_8 = 0;
  uVar4 = FUN_00418010(&param_4,&local_8,uVar3,puVar1,sVar5,(char)param_8);
  puVar2 = param_4;
  if ((char)uVar4 != '\0') {
    if (((param_9 != '\0') && (param_4 != puVar1)) && (puVar1 != (uint *)0x0)) {
      (*(code *)PTR_FUN_00456d8c)(puVar1);
    }
    *(uint **)(param_2 + 0x28) = puVar2;
    FUN_00417d60(&local_14,(byte *)puVar2,local_8,param_2,param_3,param_6);
    if ((param_9 != '\0') || (puVar2 != puVar1)) {
      *param_10 = puVar2;
    }
    *param_1 = local_14;
    param_1[1] = local_10;
    param_1[2] = uVar3;
    return;
  }
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 3;
  return;
}

