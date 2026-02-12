
void __fastcall FUN_00404410(void *param_1)

{
  int iVar1;
  void *this;
  wchar_t *pwVar2;
  char *pcVar3;
  char *pcVar4;
  va_list pcVar5;
  char local_30 [40];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)((int)param_1 + 4);
  this = *(void **)((int)param_1 + 8);
  pcVar5 = (va_list)0x0;
  pcVar4 = (char *)0x0;
  pcVar3 = (char *)0x0;
  pwVar2 = (wchar_t *)FUN_00401f40(param_1,local_30,PTR_s____s____00456368);
  FUN_00403e70(this,iVar1,pwVar2,pcVar3,pcVar4,pcVar5);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

