
void __cdecl FUN_00405450(void *param_1)

{
  size_t _Size;
  
  if (param_1 != (void *)0x0) {
    if (DAT_0045648c != (HANDLE)0x0) {
      _Size = (**(code **)(PTR_vftable_00456488 + 0xc))();
      if (_Size != 0) {
        _memset(param_1,0,_Size);
      }
      HeapFree(DAT_0045648c,0,param_1);
      return;
    }
    _free(param_1);
  }
  return;
}

