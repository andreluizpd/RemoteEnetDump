
int __cdecl FUN_00405180(uint param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar3 = ((int)param_1 >> 0x1f) << 2 | param_1 >> 0x1e;
  if ((-1 < (int)uVar3) && ((0 < (int)uVar3 || (0x7fffffff < param_1 * 4)))) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80004005);
  }
  uVar4 = __alldiv(param_1 * 4,uVar3,3,0);
  iVar2 = (int)uVar4;
  if ((param_2 & 1) == 0) {
    iVar2 = iVar2 + (int)param_1 % 3;
  }
  iVar1 = iVar2 / 0x4c;
  if (iVar2 % 0x4c != 0) {
    uVar3 = iVar2 % 0x4c & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    if (uVar3 != 0) {
      iVar2 = iVar2 + (4 - uVar3);
    }
  }
  if ((param_2 & 2) == 0) {
    iVar2 = iVar2 + 2 + iVar1 * 2;
  }
  return iVar2;
}

