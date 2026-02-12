
void * FUN_00407e40(void *param_1,undefined4 param_2,int param_3)

{
  void *_Dst;
  size_t _Size;
  
  if (param_3 == 0) {
    (**(code **)(*(int *)PTR_DAT_004564d4 + 0x18))(param_1);
    return (void *)0x0;
  }
  _Dst = (void *)(**(code **)(*(int *)PTR_DAT_004564d4 + 0x1c))(param_1,param_3);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)(**(code **)(*(int *)PTR_DAT_004564d4 + 4))(param_3);
    if (_Dst != (void *)0x0) {
      _Size = (**(code **)(*(int *)PTR_DAT_004564d4 + 0x10))(param_1);
      FID_conflict__memcpy(_Dst,param_1,_Size);
      (**(code **)(*(int *)PTR_DAT_004564d4 + 0x18))(param_1);
    }
  }
  return _Dst;
}

