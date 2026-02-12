
void __thiscall FUN_00404460(void *this,char *param_1)

{
  int iVar1;
  void *this_00;
  wchar_t *pwVar2;
  char *pcVar3;
  va_list pcVar4;
  char local_30 [40];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)((int)this + 4);
  this_00 = *(void **)((int)this + 8);
  pcVar4 = (va_list)0x0;
  pcVar3 = (char *)0x0;
  pwVar2 = (wchar_t *)FUN_00401f40(this,local_30,PTR_s___s____s_0045636c);
  FUN_00403e70(this_00,iVar1,pwVar2,param_1,pcVar3,pcVar4);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

