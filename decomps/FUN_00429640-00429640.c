
void __fastcall FUN_00429640(int *param_1)

{
  SOCKET *this;
  char cVar1;
  uint uVar2;
  HANDLE pvVar3;
  char *lpMem;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  DWORD DVar8;
  sockaddr *psVar9;
  SIZE_T dwBytes;
  sockaddr local_94 [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044727b;
  local_10 = ExceptionList;
  uVar2 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  FUN_00421680(local_94);
  local_8 = 0;
  dwBytes = 0x2000;
  DVar8 = 0;
  pvVar3 = GetProcessHeap();
  lpMem = (char *)HeapAlloc(pvVar3,DVar8,dwBytes);
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(param_1 + 3,uVar2);
  }
  iVar4 = param_1[0xb1];
  this = (SOCKET *)(param_1 + 3);
  if (iVar4 == 1) {
    cVar1 = FUN_00421dc0(this,(WCHAR *)param_1[0xad],(WCHAR *)param_1[0xae],(WCHAR *)param_1[0xaf],
                         param_1[0xb0],1);
  }
  else if (*(int *)((WCHAR *)param_1[0xaf] + -6) == 0) {
    cVar1 = FUN_00421b00(this,(WCHAR *)param_1[0xad],L"0",param_1[0xb0],iVar4,(byte)param_1[0xb2]);
  }
  else {
    cVar1 = FUN_00421b00(this,(WCHAR *)param_1[0xad],(WCHAR *)param_1[0xaf],param_1[0xb0],iVar4,
                         (byte)param_1[0xb2]);
  }
  if (cVar1 == '\0') {
    DVar8 = GetLastError();
    param_1[0xb3] = DVar8;
    (**(code **)(*(int *)*param_1 + 0x14))(this,DVar8);
    iVar4 = *(int *)*param_1;
  }
  else {
    if ((int *)*param_1 != (int *)0x0) {
      (**(code **)(*(int *)*param_1 + 0xc))(this);
    }
    iVar4 = FUN_004211c0(this);
    if (iVar4 == 1) {
      FUN_004212a0(this,local_94);
    }
    SetEvent((HANDLE)param_1[2]);
    uVar5 = FUN_00421160((LONG *)this);
    cVar1 = (char)uVar5;
    while (cVar1 != '\0') {
      if (iVar4 == 1) {
        psVar9 = (sockaddr *)0x0;
      }
      else {
        psVar9 = local_94;
      }
      iVar6 = FUN_00421330(this,lpMem,0x2000,psVar9,0xffffffff);
      if ((iVar6 == -1) || (iVar6 == 0)) {
        if ((iVar4 == 1) && (iVar6 == 0)) {
          piVar7 = (int *)*param_1;
          if (piVar7 != (int *)0x0) {
LAB_0042985e:
            (**(code **)(*piVar7 + 0x10))(this);
          }
          break;
        }
        if (iVar6 == -1) {
          DVar8 = GetLastError();
          piVar7 = (int *)*param_1;
          if (piVar7 == (int *)0x0) break;
          switch(DVar8) {
          case 0x2736:
          case 0x2742:
          case 0x2743:
          case 0x2744:
          case 0x2745:
          case 0x2746:
          case 0x274a:
          case 0x2750:
          case 0x2751:
            if (((iVar4 == 1) || (DVar8 == 0x2736)) || (DVar8 == 0x2742)) goto LAB_0042985e;
          }
          (**(code **)(*piVar7 + 0x14))(this,DVar8);
        }
      }
      else if ((int *)*param_1 != (int *)0x0) {
        (**(code **)(*(int *)*param_1 + 8))(this,lpMem,iVar6,local_94);
      }
      uVar5 = FUN_00421160((LONG *)this);
      cVar1 = (char)uVar5;
    }
    if (lpMem != (char *)0x0) {
      DVar8 = 0;
      pvVar3 = GetProcessHeap();
      HeapFree(pvVar3,DVar8,lpMem);
    }
    if ((int *)*param_1 == (int *)0x0) goto LAB_0042988a;
    iVar4 = *(int *)*param_1;
  }
  (**(code **)(iVar4 + 4))(this);
LAB_0042988a:
  local_8 = 0xffffffff;
  FUN_004103c0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

