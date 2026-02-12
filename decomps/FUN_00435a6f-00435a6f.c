
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00435a6f(void)

{
  _ptiddata p_Var1;
  pthreadmbcinfo ptVar2;
  LONG LVar3;
  int *piVar4;
  int iVar5;
  pthreadmbcinfo ptVar6;
  pthreadmbcinfo ptVar7;
  int iStack00000004;
  int in_stack_ffffffc8;
  int local_24;
  
  local_24 = -1;
  p_Var1 = __getptd();
  ___updatetmbcinfo();
  ptVar2 = p_Var1->ptmbcinfo;
  iStack00000004 = getSystemCP(in_stack_ffffffc8);
  if (iStack00000004 == ptVar2->mbcodepage) {
    local_24 = 0;
  }
  else {
    ptVar2 = (pthreadmbcinfo)__malloc_crt(0x220);
    if (ptVar2 != (pthreadmbcinfo)0x0) {
      ptVar6 = p_Var1->ptmbcinfo;
      ptVar7 = ptVar2;
      for (iVar5 = 0x88; iVar5 != 0; iVar5 = iVar5 + -1) {
        ptVar7->refcount = ptVar6->refcount;
        ptVar6 = (pthreadmbcinfo)&ptVar6->mbcodepage;
        ptVar7 = (pthreadmbcinfo)&ptVar7->mbcodepage;
      }
      ptVar2->refcount = 0;
      local_24 = __setmbcp_nolock(iStack00000004,(int)ptVar2);
      if (local_24 == 0) {
        LVar3 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar3 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_00457ae0)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar2;
        InterlockedIncrement((LONG *)ptVar2);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_00458000 & 1) == 0)) {
          __lock(0xd);
          _DAT_0045a280 = ptVar2->mbcodepage;
          _DAT_0045a284 = ptVar2->ismbcodepage;
          _DAT_0045a288 = *(undefined4 *)ptVar2->mbulinfo;
          for (iVar5 = 0; iVar5 < 5; iVar5 = iVar5 + 1) {
            (&DAT_0045a274)[iVar5] = ptVar2->mbulinfo[iVar5 + 2];
          }
          for (iVar5 = 0; iVar5 < 0x101; iVar5 = iVar5 + 1) {
            (&DAT_00457d00)[iVar5] = ptVar2->mbctype[iVar5 + 4];
          }
          for (iVar5 = 0; iVar5 < 0x100; iVar5 = iVar5 + 1) {
            (&DAT_00457e08)[iVar5] = ptVar2->mbcasemap[iVar5 + 4];
          }
          LVar3 = InterlockedDecrement((LONG *)PTR_DAT_00457f08);
          if ((LVar3 == 0) && (PTR_DAT_00457f08 != &DAT_00457ae0)) {
            _free(PTR_DAT_00457f08);
          }
          PTR_DAT_00457f08 = (undefined *)ptVar2;
          InterlockedIncrement((LONG *)ptVar2);
          FUN_00435bd0();
        }
      }
      else if (local_24 == -1) {
        if (ptVar2 != (pthreadmbcinfo)&DAT_00457ae0) {
          _free(ptVar2);
        }
        piVar4 = __errno();
        *piVar4 = 0x16;
      }
    }
  }
  return local_24;
}

