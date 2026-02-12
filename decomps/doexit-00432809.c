
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x0043293a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _doexit
   
   Library: Visual Studio 2010 Release */

void __cdecl doexit(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int *piVar6;
  int *local_34;
  int *local_2c;
  int *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  
  __lock(8);
  if (DAT_0045a250 != 1) {
    _DAT_0045a24c = 1;
    DAT_0045a248 = (undefined1)param_3;
    if (param_2 == 0) {
      piVar1 = (int *)DecodePointer(DAT_0045b86c);
      if (piVar1 != (int *)0x0) {
        piVar2 = (int *)DecodePointer(DAT_0045b868);
        local_34 = piVar1;
        local_2c = piVar2;
        local_28 = piVar1;
        while (piVar2 = piVar2 + -1, piVar1 <= piVar2) {
          iVar3 = FUN_00431e4e();
          if (*piVar2 != iVar3) {
            if (piVar2 < piVar1) break;
            pcVar4 = (code *)DecodePointer((PVOID)*piVar2);
            iVar3 = FUN_00431e4e();
            *piVar2 = iVar3;
            (*pcVar4)();
            piVar5 = (int *)DecodePointer(DAT_0045b86c);
            piVar6 = (int *)DecodePointer(DAT_0045b868);
            if ((local_28 != piVar5) || (piVar1 = local_34, local_2c != piVar6)) {
              piVar1 = piVar5;
              piVar2 = piVar6;
              local_34 = piVar5;
              local_2c = piVar6;
              local_28 = piVar5;
            }
          }
        }
      }
      for (local_20 = &DAT_004484d8; local_20 < &DAT_004484e4; local_20 = local_20 + 1) {
        if ((code *)*local_20 != (code *)0x0) {
          (*(code *)*local_20)();
        }
      }
    }
    for (local_24 = &DAT_004484e8; local_24 < &DAT_004484ec; local_24 = local_24 + 1) {
      if ((code *)*local_24 != (code *)0x0) {
        (*(code *)*local_24)();
      }
    }
  }
  FUN_00432934();
  if (param_3 == 0) {
    DAT_0045a250 = 1;
    FUN_0043e54f(8);
    ___crtExitProcess(param_1);
    return;
  }
  return;
}

