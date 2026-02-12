
bool __cdecl FUN_00404ea0(char *param_1,int param_2,undefined1 *param_3,int *param_4)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  pcVar5 = param_1;
  if ((param_1 == (char *)0x0) || (param_4 == (int *)0x0)) {
    return false;
  }
  pcVar1 = param_1 + param_2;
  bVar8 = param_3 == (undefined1 *)0x0;
  param_1 = (char *)0x0;
  if (pcVar5 < pcVar1) {
    do {
      if (*pcVar5 == '\0') break;
      uVar6 = 0;
      iVar7 = 0;
      iVar4 = 0;
      do {
        if (pcVar1 <= pcVar5) break;
        iVar2 = (int)*pcVar5;
        if (iVar2 - 0x41U < 0x1a) {
          uVar3 = iVar2 - 0x41;
        }
        else if (iVar2 - 0x61U < 0x1a) {
          uVar3 = iVar2 - 0x47;
        }
        else if (iVar2 - 0x30U < 10) {
          uVar3 = iVar2 + 4;
        }
        else if (iVar2 == 0x2b) {
          uVar3 = 0x3e;
        }
        else {
          uVar3 = (-(uint)(iVar2 != 0x2f) & 0xffffffc0) + 0x3f;
        }
        pcVar5 = pcVar5 + 1;
        if (uVar3 == 0xffffffff) {
          iVar4 = iVar4 + -1;
        }
        else {
          uVar6 = uVar6 << 6 | uVar3;
          iVar7 = iVar7 + 6;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      if ((!bVar8) && (*param_4 < (int)(param_1 + ((int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3)))) {
        bVar8 = true;
      }
      iVar4 = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3;
      iVar7 = uVar6 << (0x18U - (char)iVar7 & 0x1f);
      if (0 < iVar4) {
        param_1 = param_1 + iVar4;
        do {
          if (!bVar8) {
            *param_3 = (char)((uint)iVar7 >> 0x10);
            param_3 = param_3 + 1;
          }
          iVar7 = iVar7 << 8;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    } while (pcVar5 < pcVar1);
  }
  *param_4 = (int)param_1;
  return !bVar8;
}

