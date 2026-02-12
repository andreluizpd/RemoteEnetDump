
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2010 Release */

int __cdecl _raise(int _SigNum)

{
  uint uVar1;
  int *piVar2;
  PVOID Ptr;
  code *pcVar3;
  int _File;
  undefined4 uVar4;
  undefined4 *puVar5;
  _ptiddata p_Var6;
  int local_34;
  void *local_30;
  int local_28;
  int local_20;
  
  p_Var6 = (_ptiddata)0x0;
  local_20 = 0;
  if (_SigNum < 0xc) {
    if (_SigNum != 0xb) {
      if (_SigNum == 2) {
        puVar5 = &DAT_0045a6e4;
        Ptr = DAT_0045a6e4;
        goto LAB_0043e7c6;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_0043e7a4;
        if (_SigNum != 8) goto LAB_0043e792;
      }
    }
    p_Var6 = __getptd_noexit();
    if (p_Var6 == (_ptiddata)0x0) {
      return -1;
    }
    uVar1 = siglookup((uint)p_Var6->_pxcptacttab);
    puVar5 = (undefined4 *)(uVar1 + 8);
    pcVar3 = (code *)*puVar5;
  }
  else {
    if (_SigNum == 0xf) {
      puVar5 = &DAT_0045a6f0;
      Ptr = DAT_0045a6f0;
    }
    else if (_SigNum == 0x15) {
      puVar5 = &DAT_0045a6e8;
      Ptr = DAT_0045a6e8;
    }
    else {
      if (_SigNum != 0x16) {
LAB_0043e792:
        piVar2 = __errno();
        *piVar2 = 0x16;
        FUN_00433a30();
        return -1;
      }
LAB_0043e7a4:
      puVar5 = &DAT_0045a6ec;
      Ptr = DAT_0045a6ec;
    }
LAB_0043e7c6:
    local_20 = 1;
    pcVar3 = (code *)DecodePointer(Ptr);
  }
  _File = 0;
  if (pcVar3 == (code *)0x1) {
    return 0;
  }
  if (pcVar3 == (code *)0x0) {
    _File = __exit(3);
  }
  if (local_20 != _File) {
    __lock(_File);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_30 = p_Var6->_tpxcptinfoptrs;
    p_Var6->_tpxcptinfoptrs = (void *)0x0;
    if (_SigNum == 8) {
      local_34 = p_Var6->_tfpecode;
      p_Var6->_tfpecode = 0x8c;
      goto LAB_0043e82a;
    }
  }
  else {
LAB_0043e82a:
    if (_SigNum == 8) {
      for (local_28 = 3; local_28 < 0xc; local_28 = local_28 + 1) {
        *(undefined4 *)(local_28 * 0xc + 8 + (int)p_Var6->_pxcptacttab) = 0;
      }
      goto LAB_0043e862;
    }
  }
  uVar4 = FUN_00431e4e();
  *puVar5 = uVar4;
LAB_0043e862:
  FUN_0043e883();
  if (_SigNum == 8) {
    (*pcVar3)(8,p_Var6->_tfpecode);
  }
  else {
    (*pcVar3)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  p_Var6->_tpxcptinfoptrs = local_30;
  if (_SigNum == 8) {
    p_Var6->_tfpecode = local_34;
  }
  return 0;
}

