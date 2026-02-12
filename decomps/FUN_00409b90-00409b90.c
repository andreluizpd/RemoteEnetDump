
int __cdecl FUN_00409b90(wchar_t *param_1,uint param_2,wchar_t *param_3)

{
  uint _Count;
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    iVar1 = -0x7ff8ffa9;
  }
  if (-1 < iVar1) {
    _Count = param_2 - 1;
    iVar1 = 0;
    uVar2 = __vsnwprintf(param_1,_Count,param_3,&stack0x00000010);
    if (((int)uVar2 < 0) || (_Count < uVar2)) {
      param_1[_Count] = L'\0';
      iVar1 = -0x7ff8ff86;
    }
    else if (uVar2 == _Count) {
      param_1[_Count] = L'\0';
      return 0;
    }
  }
  return iVar1;
}

