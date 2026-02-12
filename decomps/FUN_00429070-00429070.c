
void __cdecl FUN_00429070(char *param_1,longlong *param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  size_t sVar4;
  char *pcVar5;
  longlong lVar6;
  char *local_148;
  longlong *local_144;
  undefined1 local_13d;
  undefined4 local_13c [3];
  char *local_130 [71];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044721b;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_144 = param_2;
  local_13d = 0;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) goto LAB_004291ea;
  FUN_0040e9a0(local_13c,param_1);
  local_8 = 0;
  piVar2 = FUN_0040cbc0((int *)local_130);
  FUN_0040cc40(piVar2);
  if (0 < *(int *)(local_130[0] + -0xc)) {
    FUN_00428c10((int *)local_130);
    uVar3 = (uint)(*local_130[0] == '-');
    sVar4 = _strspn(local_130[0] + uVar3,PTR_s_0123456789abcdefx_00457544);
    if (local_130[0][uVar3 + sVar4] == '\0') {
      sVar4 = _strspn(local_130[0] + uVar3,PTR_s_0123456789_00457548);
      if (local_130[0][uVar3 + sVar4] == '\0') {
        lVar6 = FUN_0042fe40(local_130[0]);
        *local_144 = lVar6;
      }
      else {
        pcVar5 = _strchr(local_130[0],0x78);
        if (pcVar5 != (char *)0x0) {
          pcVar5 = local_130[0];
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          if ((((uint)((int)pcVar5 - (int)(local_130[0] + 1)) < 2) || (*local_130[0] != '0')) ||
             (local_130[0][1] != 'x')) goto LAB_004291ce;
        }
        lVar6 = __strtoi64(local_130[0],&local_148,0x10);
        *local_144 = lVar6;
        if (*local_148 != '\0') {
          *(undefined4 *)local_144 = 0;
          *(undefined4 *)((int)local_144 + 4) = 0;
          goto LAB_004291ce;
        }
      }
      local_13d = 1;
    }
  }
LAB_004291ce:
  local_8 = 0xffffffff;
  FUN_00402e50(local_13c);
LAB_004291ea:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

