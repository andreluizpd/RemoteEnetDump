
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___tzset
   
   Library: Visual Studio 2010 Release */

void __cdecl ___tzset(void)

{
  if (DAT_0045a344 == 0) {
    __lock(6);
    if (DAT_0045a344 == 0) {
      FUN_0043c23e();
      DAT_0045a344 = DAT_0045a344 + 1;
    }
    FUN_0043c965();
  }
  return;
}

