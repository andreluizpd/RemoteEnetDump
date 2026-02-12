
LPVOID __thiscall FUN_00401820(void *this,void *param_1,SIZE_T param_2)

{
  LPVOID pvVar1;
  size_t _Size;
  
  if (param_1 == (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pvVar1 = (LPVOID)(*(code *)**this)(param_2);
    return pvVar1;
  }
  if (param_2 == 0) {
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*this + 4))(param_1);
    return (LPVOID)0x0;
  }
  pvVar1 = HeapReAlloc(*(HANDLE *)((int)this + 4),0x10,param_1,param_2);
  if (pvVar1 == (LPVOID)0x0) {
                    /* WARNING: Load size is inaccurate */
    pvVar1 = (LPVOID)(*(code *)**this)(param_2);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
      _Size = (**(code **)(*this + 0xc))(param_1);
      FID_conflict__memcpy(pvVar1,param_1,_Size);
                    /* WARNING: Load size is inaccurate */
      (**(code **)(*this + 4))(param_1);
    }
  }
  return pvVar1;
}

