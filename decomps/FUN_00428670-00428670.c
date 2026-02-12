
void __cdecl FUN_00428670(__time64_t *param_1,void *param_2)

{
  tm local_e0;
  tm local_bc;
  tm local_98;
  tm local_74;
  tm local_50;
  tm local_2c;
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  __localtime64_s(&local_2c,param_1);
  __localtime64_s(&local_50,param_1);
  __localtime64_s(&local_74,param_1);
  __localtime64_s(&local_98,param_1);
  __localtime64_s(&local_e0,param_1);
  __localtime64_s(&local_bc,param_1);
  FUN_00428650(param_2,(wchar_t *)PTR_s__04d__02d__02dT_02d__02d__02d_004574c8);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

