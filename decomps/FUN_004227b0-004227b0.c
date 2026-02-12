
undefined4 * __thiscall FUN_004227b0(void *this,uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  LPVOID pvVar2;
  _SYSTEM_INFO local_28;
  
  *(undefined ***)this = CStream::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = param_2;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = param_3;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined1 *)((int)this + 0x3c) = 0;
  GetSystemInfo(&local_28);
  *(DWORD *)((int)this + 0x28) = local_28.dwPageSize;
  if (param_1 != 0) {
    uVar1 = *(uint *)((int)this + 0x2c);
    if (uVar1 < param_1) {
      uVar1 = (param_1 / uVar1 + 1) * uVar1;
    }
    *(uint *)((int)this + 0x38) = uVar1 / local_28.dwPageSize;
    pvVar2 = VirtualAlloc((LPVOID)0x0,(uVar1 / local_28.dwPageSize) * local_28.dwPageSize,0x2000,1);
    *(LPVOID *)((int)this + 8) = pvVar2;
    if (pvVar2 == (LPVOID)0x0) {
      GetLastError();
    }
  }
  return (undefined4 *)this;
}

