
/* Library Function - Single Match
    __fltout2
   
   Library: Visual Studio 2010 Release */

STRFLT __cdecl __fltout2(_CRT_DOUBLE _Dbl,STRFLT _Flt,char *_ResultStr,size_t _SizeInBytes)

{
  char *pcVar1;
  int iVar2;
  errno_t eVar3;
  STRFLT p_Var4;
  uint local_34;
  uint uStack_30;
  ushort uStack_2c;
  char *local_28;
  short local_24;
  char local_22;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  local_28 = _ResultStr;
  ___dtold(&local_34,(uint *)&_Dbl);
  iVar2 = _I10_OUTPUT(local_34,uStack_30,uStack_2c,0x11,0,&local_24);
  pcVar1 = local_28;
  _Flt->flag = iVar2;
  _Flt->sign = (int)local_22;
  _Flt->decpt = (int)local_24;
  eVar3 = _strcpy_s(local_28,_SizeInBytes,local_20);
  if (eVar3 == 0) {
    _Flt->mantissa = pcVar1;
    p_Var4 = (STRFLT)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return p_Var4;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

