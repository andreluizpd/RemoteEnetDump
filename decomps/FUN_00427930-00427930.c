
void __cdecl FUN_00427930(char *param_1,SYSTEMTIME *param_2)

{
  char cVar1;
  WORD WVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  WORD local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  char local_59;
  char local_58 [80];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  uVar6 = 0;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    pcVar5 = param_1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (7 < (uint)((int)pcVar5 - (int)(param_1 + 1))) {
      local_70 = 0;
      local_78 = 0;
      local_68 = 0;
      local_64 = 0;
      local_74 = 0;
      local_80 = 0;
      WVar2 = local_80;
      local_80 = 0;
      iVar3 = FID_conflict__sscanf(param_1,"%4u-%2u-%2u",&local_70,&local_78);
      if (iVar3 == 3) {
        pcVar5 = param_1 + 10;
      }
      else {
        iVar3 = FID_conflict__sscanf(param_1,"%4u%2u%2u",&local_70,&local_78);
        if (iVar3 != 3) {
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        pcVar5 = param_1 + 8;
      }
      cVar1 = *pcVar5;
      if (cVar1 != '\0') {
        if ((cVar1 == 'T') || (cVar1 == ' ')) {
          pcVar5 = pcVar5 + 1;
        }
        iVar3 = FID_conflict__sscanf(pcVar5,"%2u:%2u:%2u",&local_68,&local_64);
        if (iVar3 == 3) {
          pcVar5 = pcVar5 + 8;
        }
        else {
          iVar3 = FID_conflict__sscanf(pcVar5,"%2u%2u%2u",&local_68,&local_64);
          if (iVar3 == 3) {
            pcVar5 = pcVar5 + 6;
          }
          else {
            iVar3 = FID_conflict__sscanf(pcVar5,"%2u:%2u",&local_68);
            if (iVar3 == 2) {
              pcVar5 = pcVar5 + 5;
            }
            else {
              iVar3 = FID_conflict__sscanf(pcVar5,"%2u%2u",&local_68);
              if (iVar3 == 2) {
                pcVar5 = pcVar5 + 4;
              }
            }
          }
        }
        if (*pcVar5 == '.') {
          _memset(local_58,0,0x50);
          pcVar5 = pcVar5 + 1;
          do {
            iVar3 = _isdigit((int)*pcVar5);
            if (iVar3 == 0) break;
            local_58[uVar6] = *pcVar5;
            uVar6 = uVar6 + 1;
            pcVar5 = pcVar5 + 1;
          } while (uVar6 < 0x4f);
          local_80 = WVar2;
          if (local_58[0] != '\0') {
            local_80 = FUN_0042fe35(local_58);
          }
        }
      }
      cVar1 = *pcVar5;
      local_60 = 0;
      if ((cVar1 == '+') || (cVar1 == '-')) {
        local_59 = cVar1 == '+';
        pcVar5 = pcVar5 + 1;
        local_6c = 0;
        local_60 = 0;
        iVar4 = FID_conflict__sscanf(pcVar5,"%2u:%2u",&local_6c);
        iVar3 = local_6c;
        if ((iVar4 != 2) &&
           ((iVar4 = FID_conflict__sscanf(pcVar5,"%2u%2u",&local_6c), iVar3 = local_6c, iVar4 != 2
            && (iVar4 = FID_conflict__sscanf(pcVar5,"%u"), iVar3 = local_6c, iVar4 != 1)))) {
          iVar3 = 0;
        }
        iVar3 = local_60 + iVar3 * 0x3c;
        local_60 = iVar3 * 0x3c;
        if ((local_59 != '\0') && (local_60 != 0)) {
          local_60 = iVar3 * -0x3c;
        }
      }
      param_2->wYear = 0;
      param_2->wMonth = 0;
      param_2->wDayOfWeek = 0;
      param_2->wDay = 0;
      param_2->wHour = 0;
      param_2->wMinute = 0;
      param_2->wSecond = 0;
      param_2->wMilliseconds = 0;
      param_2->wYear = (WORD)local_70;
      param_2->wMonth = (WORD)local_78;
      param_2->wDay = 0;
      param_2->wHour = (WORD)local_68;
      param_2->wMinute = (WORD)local_64;
      param_2->wSecond = (WORD)local_74;
      param_2->wMilliseconds = local_80;
      if (local_60 != 0) {
        FUN_00427760(param_2);
        FUN_00427720(param_2);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      pcVar5 = FUN_00428a20(param_1,"GMT",-1);
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = FUN_00428a20(param_1,"UTC",-1), pcVar5 == (char *)0x0)) {
        FUN_00427720(param_2);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

