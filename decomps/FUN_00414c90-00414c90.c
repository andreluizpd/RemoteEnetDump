
undefined4 __cdecl
FUN_00414c90(undefined4 *param_1,size_t *param_2,void *param_3,size_t param_4,char param_5)

{
  void *_Dst;
  
  if (param_5 != '\0') {
    *param_1 = param_3;
    *param_2 = param_4;
    return CONCAT31((int3)((uint)param_2 >> 8),1);
  }
  _Dst = (void *)(*(code *)PTR_FUN_00456d88)(param_4 + 1);
  if (_Dst == (void *)0x0) {
    return 0;
  }
  if (param_3 != (void *)0x0) {
    param_3 = FID_conflict__memcpy(_Dst,param_3,param_4);
  }
  *(undefined1 *)((int)_Dst + param_4) = 0;
  *param_1 = _Dst;
  *param_2 = param_4 + 1;
  return CONCAT31((int3)((uint)param_3 >> 8),1);
}

