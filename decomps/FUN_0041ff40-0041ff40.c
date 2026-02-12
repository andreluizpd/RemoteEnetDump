
void __fastcall FUN_0041ff40(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  HANDLE hObject;
  int iVar3;
  char *pcVar4;
  LPCVOID lpBaseAddress;
  char local_20 [12];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004468c8;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pcVar4 = "Owner";
  if (*(int *)(param_1 + 0x1c) == 0) {
    pcVar4 = "User";
  }
  iVar3 = -(int)pcVar4;
  do {
    cVar1 = *pcVar4;
    pcVar4[(int)(local_20 + iVar3)] = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = PTR_s_GBxn3p1HggI_00457224;
  if (*(int *)(param_1 + 0x1c) == 0) {
    pcVar4 = PTR_s_W6Did7Jz2kxHEcah_TIf_Q_00457220;
  }
  FUN_00404500(&DAT_00459110,pcVar4,
               " %S, %d (%s), map=%p, buf=%p, %p, mutex=%p, size=%d, adjust=%d, locks=%d");
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00403710((void *)(param_1 + 0x14),&DAT_00448644,0);
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    local_8 = 0xffffffff;
    if ((HANDLE)*puVar2 != (HANDLE)0x0) {
      CloseHandle((HANDLE)*puVar2);
      *puVar2 = 0;
    }
    FUN_0042bc24(puVar2);
  }
  lpBaseAddress = *(LPCVOID *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (lpBaseAddress == (LPCVOID)0x0) {
    lpBaseAddress = *(LPCVOID *)(param_1 + 4);
  }
  UnmapViewOfFile(lpBaseAddress);
  hObject = *(HANDLE *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((hObject != (HANDLE)0x0) && (hObject != (HANDLE)0xffffffff)) {
    CloseHandle(hObject);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

