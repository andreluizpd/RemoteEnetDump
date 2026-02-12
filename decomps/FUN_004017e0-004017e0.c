
void __thiscall FUN_004017e0(void *this,void *param_1)

{
  size_t _Size;
  
  if (param_1 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
    _Size = (**(code **)(*this + 0xc))(param_1);
    if (_Size != 0) {
      _memset(param_1,0,_Size);
    }
    HeapFree(*(HANDLE *)((int)this + 4),0,param_1);
  }
  return;
}

