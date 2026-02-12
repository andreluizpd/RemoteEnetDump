
bool __thiscall
FUN_00429d00(void *this,short *param_1,short *param_2,short *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  HANDLE pvVar5;
  DWORD DVar6;
  HANDLE local_c;
  undefined4 local_8;
  
  uVar2 = FUN_00421160((LONG *)((int)this + 0xc));
  if ((char)uVar2 != '\0') {
    return false;
  }
  if (param_1 == (short *)0x0) {
    iVar3 = 0;
  }
  else {
    psVar4 = param_1;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
    iVar3 = (int)psVar4 - (int)(param_1 + 1) >> 1;
  }
  FUN_00403710((void *)((int)this + 0x2b4),param_1,iVar3);
  if (param_2 == (short *)0x0) {
    iVar3 = 0;
  }
  else {
    psVar4 = param_2;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
    iVar3 = (int)psVar4 - (int)(param_2 + 1) >> 1;
  }
  FUN_00403710((void *)((int)this + 0x2b8),param_2,iVar3);
  if (param_3 == (short *)0x0) {
    iVar3 = 0;
  }
  else {
    psVar4 = param_3;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
    iVar3 = (int)psVar4 - (int)(param_3 + 1) >> 1;
  }
  FUN_00403710((void *)((int)this + 700),param_3,iVar3);
  *(undefined4 *)((int)this + 0x2c0) = param_4;
  *(undefined4 *)((int)this + 0x2c4) = param_5;
  *(undefined4 *)((int)this + 0x2c8) = param_6;
  pvVar5 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  *(HANDLE *)((int)this + 8) = pvVar5;
  local_c = (HANDLE)__beginthreadex((void *)0x0,0,FUN_004299b0,this,0,(uint *)0x0);
  *(HANDLE *)((int)this + 4) = local_c;
  if (local_c == (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)((int)this + 8));
    return false;
  }
  local_8 = *(undefined4 *)((int)this + 8);
  DVar6 = WaitForMultipleObjects(2,&local_c,0,0xffffffff);
  CloseHandle(*(HANDLE *)((int)this + 8));
  *(undefined4 *)((int)this + 8) = 0;
  return DVar6 != 0;
}

