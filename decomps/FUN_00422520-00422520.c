
undefined4 FUN_00422520(int param_1,void *param_2)

{
  FILETIME local_c;
  
  _memset(param_2,0,0x48);
  *(undefined4 *)((int)param_2 + 4) = 2;
  *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)param_2 + 0xc) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)param_2 + 0x28) = 0x8000000;
  *(undefined4 *)((int)param_2 + 0x30) = 0xc;
  *(undefined4 *)((int)param_2 + 0x34) = 0;
  *(undefined4 *)((int)param_2 + 0x38) = 0xc0;
  *(undefined4 *)((int)param_2 + 0x3c) = 0x46000000;
  CoFileTimeNow(&local_c);
  *(DWORD *)((int)param_2 + 0x10) = local_c.dwLowDateTime;
  *(DWORD *)((int)param_2 + 0x18) = local_c.dwLowDateTime;
  *(DWORD *)((int)param_2 + 0x20) = local_c.dwLowDateTime;
  *(DWORD *)((int)param_2 + 0x14) = local_c.dwHighDateTime;
  *(DWORD *)((int)param_2 + 0x1c) = local_c.dwHighDateTime;
  *(DWORD *)((int)param_2 + 0x24) = local_c.dwHighDateTime;
  return 0;
}

