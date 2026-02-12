
/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2010 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  
  BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR___fpmath_0044d354);
  if (BVar1 != 0) {
    __fpmath(param_1);
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e((undefined4 *)&DAT_004484bc,(undefined4 *)&DAT_004484d4);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_0043e3ed);
    puVar3 = &DAT_00448454;
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &DAT_004484b8);
    if ((DAT_0045b874 != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_0045b874), BVar1 != 0)) {
      (*DAT_0045b874)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}

