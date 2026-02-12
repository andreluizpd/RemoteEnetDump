
HMODULE __cdecl FUN_00401eb0(uint param_1,WORD param_2)

{
  HMODULE hModule;
  HRSRC pHVar1;
  uint uVar2;
  int local_8;
  
  uVar2 = 0;
  hModule = ATL::CAtlBaseModule::GetHInstanceAt((CAtlBaseModule *)&DAT_004597e8,0);
  local_8 = 1;
  while( true ) {
    if ((hModule == (HMODULE)0x0) || (uVar2 != 0)) {
      return (HMODULE)0x0;
    }
    pHVar1 = FindResourceExW(hModule,(LPCWSTR)0x6,(LPCWSTR)((param_1 >> 4) + 1 & 0xffff),param_2);
    uVar2 = 0;
    if ((pHVar1 != (HRSRC)0x0) && (uVar2 = FUN_00401e40(hModule,pHVar1,param_1), uVar2 != 0)) break;
    hModule = ATL::CAtlBaseModule::GetHInstanceAt((CAtlBaseModule *)&DAT_004597e8,local_8);
    local_8 = local_8 + 1;
  }
  return hModule;
}

