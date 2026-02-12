
undefined4 FUN_0040c600(undefined4 *param_1)

{
  void *extraout_EAX;
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    _free(_Memory);
    *param_1 = 0;
    _Memory = extraout_EAX;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return CONCAT31((int3)((uint)_Memory >> 8),1);
}

