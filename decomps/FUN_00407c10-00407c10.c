
char * __cdecl FUN_00407c10(undefined2 *param_1,size_t param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined1 *_Src;
  void *_Dst;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = param_2 + param_3;
  if ((-1 < param_3) && (iVar3 < 0x16)) {
    if ((int)param_2 < iVar3) {
      _memset((void *)((int)param_1 + param_2),0x30,iVar3 - param_2);
    }
    *(undefined2 *)(iVar3 + (int)param_1) = 0x302e;
    return (char *)(iVar3 + 2 + (int)param_1);
  }
  uVar1 = iVar3 - 1;
  if (uVar1 < 0x15) {
    _Src = (undefined1 *)(iVar3 + (int)param_1);
    FID_conflict__memcpy(_Src + 1,_Src,param_2 - iVar3);
    *_Src = 0x2e;
    if (-1 < param_3 + param_4) {
      return (char *)((int)param_1 + param_2 + 1);
    }
    iVar2 = param_4 + iVar3;
    while( true ) {
      if (iVar2 <= iVar3 + 1) {
        return _Src + 2;
      }
      if (*(char *)(iVar2 + (int)param_1) != '0') break;
      iVar2 = iVar2 + -1;
    }
    return (char *)(iVar2 + 1 + (int)param_1);
  }
  if (5 < iVar3 + 5U) {
    if (SBORROW4(iVar3,-param_4) != iVar3 + param_4 < 0) {
      *param_1 = 0x2e30;
      *(undefined1 *)(param_1 + 1) = 0x30;
      return (char *)((int)param_1 + 3);
    }
    if (param_2 != 1) {
      FID_conflict__memcpy(param_1 + 1,(undefined1 *)((int)param_1 + 1),param_2 - 1);
      *(undefined1 *)((int)param_1 + 1) = 0x2e;
      *(undefined1 *)((int)param_1 + param_2 + 1) = 0x65;
      pcVar4 = FUN_00407b90(uVar1,(char *)((int)param_1 + param_2 + 2));
      return pcVar4;
    }
    *(undefined1 *)((int)param_1 + 1) = 0x65;
    pcVar4 = FUN_00407b90(uVar1,(char *)(param_1 + 1));
    return pcVar4;
  }
  iVar2 = -iVar3 + 2;
  _Dst = (void *)(iVar2 + (int)param_1);
  FID_conflict__memcpy(_Dst,param_1,param_2);
  *param_1 = 0x2e30;
  if (2 < iVar2) {
    _memset(param_1 + 1,0x30,-iVar3);
  }
  if ((int)(param_2 - iVar3) <= param_4) {
    return (char *)((int)_Dst + param_2);
  }
  iVar3 = param_4 + 1;
  while( true ) {
    if (iVar3 < 3) {
      return (char *)((int)param_1 + 3);
    }
    if (*(char *)(iVar3 + (int)param_1) != '0') break;
    iVar3 = iVar3 + -1;
  }
  return (char *)(iVar3 + 1 + (int)param_1);
}

