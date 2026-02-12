
/* Library Function - Single Match
    unsigned __int64 __cdecl strtoxq(struct localeinfo_struct *,char const *,char const * *,int,int)
   
   Library: Visual Studio 2010 Release */

__uint64 __cdecl
strtoxq(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5)

{
  ushort uVar1;
  char *pcVar2;
  byte *pbVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint extraout_ECX;
  pthreadlocinfo ptVar7;
  byte *pbVar8;
  localeinfo_struct local_40;
  int local_38;
  char local_34;
  uint local_2c;
  uint local_28;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  byte *local_c;
  byte local_5;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_40,param_1);
  if (param_3 != (char **)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (char *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    piVar4 = __errno();
    *piVar4 = 0x16;
    FUN_00433a30();
    if (local_34 != '\0') {
      *(uint *)(local_38 + 0x70) = *(uint *)(local_38 + 0x70) & 0xfffffffd;
    }
    local_18._0_4_ = 0;
    local_18._4_4_ = 0;
    goto LAB_0042f266;
  }
  local_5 = *param_2;
  local_18 = 0;
  ptVar7 = local_40.locinfo;
  pbVar3 = (byte *)param_2;
  while( true ) {
    pbVar8 = pbVar3 + 1;
    if ((int)ptVar7->locale_name[3] < 2) {
      uVar5 = *(ushort *)(ptVar7[1].lc_category[0].locale + (uint)local_5 * 2) & 8;
    }
    else {
      uVar5 = __isctype_l((uint)local_5,8,&local_40);
      ptVar7 = local_40.locinfo;
    }
    if (uVar5 == 0) break;
    local_5 = *pbVar8;
    pbVar3 = pbVar8;
  }
  if (local_5 == 0x2d) {
    param_5 = param_5 | 2;
LAB_0042f08e:
    local_5 = *pbVar8;
    pbVar8 = pbVar3 + 2;
  }
  else if (local_5 == 0x2b) goto LAB_0042f08e;
  local_c = pbVar8;
  if (param_4 == 0) {
    if (local_5 != 0x30) {
      param_4 = 10;
      goto LAB_0042f0e5;
    }
    if ((*pbVar8 != 0x78) && (*pbVar8 != 0x58)) {
      param_4 = 8;
      goto LAB_0042f0e5;
    }
    param_4 = 0x10;
  }
  if (((param_4 == 0x10) && (local_5 == 0x30)) && ((*pbVar8 == 0x78 || (*pbVar8 == 0x58)))) {
    local_5 = pbVar8[1];
    local_c = pbVar8 + 2;
  }
LAB_0042f0e5:
  local_2c = param_4 >> 0x1f;
  local_20 = __aulldvrm(0xffffffff,0xffffffff,param_4,local_2c);
  local_24 = 0;
  pcVar2 = ptVar7[1].lc_category[0].locale;
  local_28 = extraout_ECX;
  do {
    uVar1 = *(ushort *)(pcVar2 + (uint)local_5 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) break;
      iVar6 = (int)(char)local_5;
      if ((byte)(local_5 + 0x9f) < 0x1a) {
        iVar6 = iVar6 + -0x20;
      }
      uVar5 = iVar6 - 0x37;
    }
    else {
      uVar5 = (int)(char)local_5 - 0x30;
    }
    if ((uint)param_4 <= uVar5) break;
    if (((local_18._4_4_ < local_20._4_4_) ||
        ((local_18._4_4_ <= local_20._4_4_ && ((uint)local_18 < (uint)local_20)))) ||
       (((uint)local_18 == (uint)local_20 &&
        ((local_18._4_4_ == local_20._4_4_ && ((local_24 != 0 || (uVar5 <= local_28)))))))) {
      local_18 = __allmul(param_4,local_2c,(uint)local_18,local_18._4_4_);
      local_18 = local_18 + (ulonglong)uVar5;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) break;
    }
    local_5 = *local_c;
    local_c = local_c + 1;
  } while( true );
  local_c = local_c + -1;
  if ((param_5 & 8U) == 0) {
    if (param_3 != (char **)0x0) {
      local_c = (byte *)param_2;
    }
    local_18 = 0;
  }
  else if (((param_5 & 4U) != 0) ||
          (((param_5 & 1U) == 0 &&
           ((((param_5 & 2U) != 0 &&
             ((0x80000000 < local_18._4_4_ ||
              ((0x7fffffff < local_18._4_4_ && ((uint)local_18 != 0)))))) ||
            (((param_5 & 2U) == 0 &&
             ((0x7ffffffe < local_18._4_4_ && (0x7fffffff < local_18._4_4_)))))))))) {
    piVar4 = __errno();
    *piVar4 = 0x22;
    if ((param_5 & 1U) == 0) {
      if ((param_5 & 2U) == 0) {
        local_18 = 0x7fffffffffffffff;
      }
      else {
        local_18 = -0x8000000000000000;
      }
    }
    else {
      local_18 = -1;
    }
  }
  if (param_3 != (char **)0x0) {
    *param_3 = (char *)local_c;
  }
  if ((param_5 & 2U) != 0) {
    local_18 = CONCAT44(-(local_18._4_4_ + ((uint)local_18 != 0)),-(uint)local_18);
  }
  if (local_34 != '\0') {
    *(uint *)(local_38 + 0x70) = *(uint *)(local_38 + 0x70) & 0xfffffffd;
  }
LAB_0042f266:
  return CONCAT44(local_18._4_4_,(uint)local_18);
}

