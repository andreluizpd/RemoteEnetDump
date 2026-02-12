
/* Library Function - Single Match
    __cftof2_l
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall
__cftof2_l(void *this,int param_1,size_t param_2,char param_3,localeinfo_struct *param_4)

{
  int iVar1;
  int *in_EAX;
  int *piVar2;
  size_t sVar3;
  undefined4 uVar4;
  char *_Str;
  int local_14 [2];
  int local_c;
  char local_8;
  
  iVar1 = in_EAX[1];
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_4);
  if ((this == (void *)0x0) || (param_1 == 0)) {
    piVar2 = __errno();
    uVar4 = 0x16;
    *piVar2 = 0x16;
    FUN_00433a30();
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    if ((param_3 != '\0') && (iVar1 - 1U == param_2)) {
      *(undefined2 *)((uint)(*in_EAX == 0x2d) + (iVar1 - 1U) + (int)this) = 0x30;
    }
    if (*in_EAX == 0x2d) {
      *(undefined1 *)this = 0x2d;
      this = (void *)((int)this + 1);
    }
    if (in_EAX[1] < 1) {
      _Str = (char *)((int)this + 1);
      sVar3 = _strlen((char *)this);
      FID_conflict__memcpy(_Str,this,sVar3 + 1);
      *(char *)this = '0';
    }
    else {
      _Str = (char *)((int)this + in_EAX[1]);
    }
    if (0 < (int)param_2) {
      sVar3 = _strlen(_Str);
      FID_conflict__memcpy(_Str + 1,_Str,sVar3 + 1);
      *_Str = *(char *)**(undefined4 **)(local_14[0] + 0xbc);
      iVar1 = in_EAX[1];
      if (iVar1 < 0) {
        if ((param_3 != '\0') || (SBORROW4(param_2,-iVar1) == (int)(param_2 + iVar1) < 0)) {
          param_2 = -iVar1;
        }
        __shift();
        _memset(_Str + 1,0x30,param_2);
      }
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    uVar4 = 0;
  }
  return uVar4;
}

