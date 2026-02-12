
char * __cdecl FUN_00428a20(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t _MaxCount;
  int iVar4;
  int iVar5;
  char *_Str1;
  char local_5;
  
  _Str1 = param_1;
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    _MaxCount = (int)pcVar3 - (int)(param_2 + 1);
    if (_MaxCount != 0) {
      pcVar3 = param_1;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      iVar4 = (int)pcVar3 - (int)(param_1 + 1);
      if ((param_3 != -1) && (param_3 <= iVar4)) {
        iVar4 = param_3;
      }
      param_1 = (char *)CONCAT13(*param_2,param_1._0_3_);
      CharUpperBuffA((LPSTR)((int)&param_1 + 3),1);
      iVar5 = 0;
      if (-1 < (int)(iVar4 - _MaxCount)) {
        do {
          local_5 = *_Str1;
          CharUpperBuffA(&local_5,1);
          if ((param_1._3_1_ == local_5) &&
             (iVar2 = __strnicmp(_Str1,param_2,_MaxCount), iVar2 == 0)) {
            return _Str1;
          }
          iVar5 = iVar5 + 1;
          _Str1 = _Str1 + 1;
        } while (iVar5 <= (int)(iVar4 - _MaxCount));
      }
      param_1 = (char *)0x0;
    }
  }
  return param_1;
}

