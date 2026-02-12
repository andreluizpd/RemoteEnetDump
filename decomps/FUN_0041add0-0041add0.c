
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_0041add0(void *this,LPCWSTR param_1,int param_2)

{
  WCHAR WVar1;
  HKEY pHVar2;
  undefined4 uVar3;
  LPCWSTR lpsz;
  int iVar4;
  LPWSTR pWVar5;
  uint uVar6;
  WCHAR *local_200c;
  WCHAR local_2008 [4096];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  local_200c = (WCHAR *)0x0;
  iVar4 = FUN_00419950(this,param_1,&local_200c);
  if (iVar4 < 0) {
LAB_0041aee5:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  *(WCHAR **)this = local_200c;
  WVar1 = *local_200c;
joined_r0x0041ae1e:
  if ((WVar1 == L'\0') || (iVar4 = FUN_00418fc0(this,local_2008), iVar4 < 0)) goto LAB_0041aed6;
  uVar6 = 0;
  while (iVar4 = lstrcmpiW(local_2008,(LPCWSTR)(&PTR_u_HKCR_0044a028)[uVar6 * 2]), iVar4 != 0) {
    uVar6 = uVar6 + 1;
    if (0xd < uVar6) goto LAB_0041aed6;
  }
  pHVar2 = (HKEY)(&DAT_0044a02c)[uVar6 * 2];
  if (((pHVar2 == (HKEY)0x0) || (iVar4 = FUN_00418fc0(this,local_2008), iVar4 < 0)) ||
     (local_2008[0] != L'{')) goto LAB_0041aed6;
  if (param_2 == 0) {
    iVar4 = FUN_0041a500(this,local_2008,pHVar2,0,0);
    if (iVar4 < 0) goto LAB_0041aed6;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    uVar3 = *this;
    iVar4 = FUN_0041a500(this,local_2008,pHVar2,param_2,0);
    if (iVar4 < 0) {
      *(undefined4 *)this = uVar3;
      FUN_0041a500(this,local_2008,pHVar2,0,0);
LAB_0041aed6:
      CoTaskMemFree(local_200c);
      goto LAB_0041aee5;
    }
  }
  do {
                    /* WARNING: Load size is inaccurate */
    lpsz = *this;
    switch(*lpsz) {
    case L'\t':
    case L'\n':
    case L'\r':
    case L' ':
      pWVar5 = CharNextW(lpsz);
      *(LPWSTR *)this = pWVar5;
      break;
    default:
      goto switchD_0041af24_caseD_b;
    }
  } while( true );
switchD_0041af24_caseD_b:
  WVar1 = *lpsz;
  goto joined_r0x0041ae1e;
}

