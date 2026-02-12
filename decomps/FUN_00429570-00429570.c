
void __thiscall FUN_00429570(void *this,DWORD param_1)

{
  DWORD DVar1;
  
  FUN_004216a0((LONG *)((int)this + 0xc));
  if (*(HANDLE *)((int)this + 4) != (HANDLE)0x0) {
    DVar1 = WaitForSingleObject(*(HANDLE *)((int)this + 4),param_1);
    if (DVar1 == 0x102) {
      TerminateThread(*(HANDLE *)((int)this + 4),1);
    }
    CloseHandle(*(HANDLE *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  return;
}

