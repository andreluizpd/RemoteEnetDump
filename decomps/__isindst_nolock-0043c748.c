
/* Library Function - Single Match
    __isindst_nolock
   
   Library: Visual Studio 2010 Release */

bool __isindst_nolock(void)

{
  bool bVar1;
  errno_t eVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *unaff_EDI;
  uint uVar7;
  uint uVar8;
  int local_c;
  int local_8;
  
  local_8 = 0;
  eVar2 = __get_daylight(&local_8);
  if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_8 == 0) {
    return false;
  }
  uVar7 = unaff_EDI[5];
  if ((uVar7 != DAT_00458428) || (uVar7 != DAT_00458434)) {
    if (DAT_0045a33c == 0) {
      iVar6 = 2;
      local_c = 1;
      if ((int)uVar7 < 0x6b) {
        iVar6 = 1;
        local_c = 5;
      }
      FUN_0043c551((void *)0x2,1,1,uVar7,iVar6,0,0,0,0,0);
      FUN_0043c551((void *)0x2,0,1,unaff_EDI[5],local_c,0,0,0,0,0);
    }
    else {
      if (DAT_0045a328 != 0) {
        uVar8 = (uint)DAT_0045a32e;
        uVar3 = 0;
        uVar4 = 0;
      }
      else {
        uVar3 = (uint)DAT_0045a32c;
        uVar8 = 0;
        uVar4 = (uint)DAT_0045a32e;
      }
      FUN_0043c551((void *)(uint)DAT_0045a330,1,(uint)(DAT_0045a328 == 0),uVar7,uVar4,uVar3,uVar8,
                   (uint)DAT_0045a332,(uint)DAT_0045a334,(uint)DAT_0045a336);
      if (DAT_0045a2d4 != 0) {
        uVar8 = (uint)DAT_0045a2da;
        uVar3 = 0;
        uVar4 = 0;
        uVar7 = unaff_EDI[5];
      }
      else {
        uVar3 = (uint)DAT_0045a2d8;
        uVar8 = 0;
        uVar4 = (uint)DAT_0045a2da;
        uVar7 = unaff_EDI[5];
      }
      FUN_0043c551((void *)(uint)DAT_0045a2dc,0,(uint)(DAT_0045a2d4 == 0),uVar7,uVar4,uVar3,uVar8,
                   (uint)DAT_0045a2de,(uint)DAT_0045a2e0,(uint)DAT_0045a2e2);
    }
  }
  iVar6 = unaff_EDI[7];
  if (DAT_0045842c < DAT_00458438) {
    if ((iVar6 < DAT_0045842c) || (DAT_00458438 < iVar6)) {
      return false;
    }
    if ((DAT_0045842c < iVar6) && (iVar6 < DAT_00458438)) {
      return true;
    }
  }
  else {
    if (iVar6 < DAT_00458438) {
      return true;
    }
    if (DAT_0045842c < iVar6) {
      return true;
    }
    if ((DAT_00458438 < iVar6) && (iVar6 < DAT_0045842c)) {
      return false;
    }
  }
  iVar5 = ((unaff_EDI[2] * 0x3c + unaff_EDI[1]) * 0x3c + *unaff_EDI) * 1000;
  if (iVar6 == DAT_0045842c) {
    bVar1 = DAT_00458430 <= iVar5;
  }
  else {
    bVar1 = iVar5 < DAT_0045843c;
  }
  return bVar1;
}

