
void __cdecl FUN_004045a0(void *param_1,char *param_2,int param_3,char *param_4)

{
  int iVar1;
  void *this;
  wchar_t *pwVar2;
  va_list pcVar3;
  char local_30 [40];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)((int)param_1 + 4);
  this = *(void **)((int)param_1 + 8);
  pcVar3 = &stack0x00000014;
  pwVar2 = (wchar_t *)FUN_00401fb0(param_1,local_30,PTR_s___s____s__08X_0045637c);
  FUN_00404110(this,iVar1,pwVar2,param_2,param_3,param_4,pcVar3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

