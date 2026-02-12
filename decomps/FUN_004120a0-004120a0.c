
void FUN_004120a0(ushort param_1)

{
  ushort uVar1;
  HMODULE hModule;
  HRSRC hResInfo;
  HGLOBAL hResData;
  ushort *puVar2;
  LRESULT LVar3;
  ushort *puVar4;
  undefined4 local_24c;
  undefined4 local_248;
  undefined1 *local_244;
  int local_228;
  int local_224;
  ushort *local_220;
  undefined1 *local_21c;
  undefined1 local_218 [256];
  undefined1 *local_118;
  undefined1 local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  hModule = DAT_004597f0;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004457c6;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_220 = (ushort *)0x1;
  hResInfo = FindResourceW(DAT_004597f0,(LPCWSTR)(uint)param_1,(LPCWSTR)0xf0);
  if ((hResInfo != (HRSRC)0x0) &&
     (hResData = LoadResource(hModule,hResInfo), hResData != (HGLOBAL)0x0)) {
    puVar2 = (ushort *)LockResource(hResData);
    puVar4 = puVar2;
    while ((puVar4 != (ushort *)0x0 && (uVar1 = *puVar2, uVar1 != 0))) {
      local_228 = *(int *)(puVar2 + 2);
      puVar4 = puVar2 + 4;
      if (puVar2[1] == 0x403) {
        local_21c = local_218;
        FUN_004113d0(&local_21c,(LPCSTR)puVar4,3);
        local_8 = 0;
        LVar3 = SendDlgItemMessageW(*(HWND *)(local_224 + 4),(uint)uVar1,0x143,0,(LPARAM)local_21c);
        if (LVar3 == -1) {
          local_220 = (ushort *)0x0;
        }
        local_8 = 0xffffffff;
        if (local_21c != local_218) {
          _free(local_21c);
        }
      }
      else if (puVar2[1] == 0x1234) {
        local_118 = local_114;
        local_24c = 1;
        local_248 = 0xffffffff;
        FUN_004113d0(&local_118,(LPCSTR)puVar4,3);
        local_244 = local_118;
        local_8 = 0xffffffff;
        if (local_118 != local_114) {
          _free(local_118);
        }
        LVar3 = SendDlgItemMessageW(*(HWND *)(local_224 + 4),(uint)uVar1,0x40b,0,(LPARAM)&local_24c)
        ;
        if (LVar3 == -1) {
          local_220 = (ushort *)0x0;
        }
      }
      puVar2 = (ushort *)((int)puVar4 + local_228);
      puVar4 = local_220;
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

