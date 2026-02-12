
void __thiscall FUN_00408870(void *this,double param_1)

{
  char cVar1;
  void *this_00;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  uint uStack_28;
  char local_24 [28];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  uStack_28 = (uint)((ulonglong)param_1 >> 0x20);
  if ((uStack_28 & 0x7ff00000) != 0x7ff00000) {
    pcVar3 = FUN_00407db0(param_1,(undefined2 *)local_24,*(int *)((int)this + 0x1c));
                    /* WARNING: Load size is inaccurate */
    this_00 = *this;
    if (*(uint *)((int)this_00 + 0x10) <
        (uint)(*(int *)((int)this_00 + 0xc) + ((int)pcVar3 - (int)local_24))) {
      FUN_00407ec0(this_00,(int)pcVar3 - (int)local_24);
    }
    for (pcVar4 = local_24; pcVar4 != pcVar3; pcVar4 = pcVar4 + 1) {
                    /* WARNING: Load size is inaccurate */
      pcVar2 = *(char **)(*this + 0xc);
      cVar1 = *pcVar4;
      *(char **)(*this + 0xc) = pcVar2 + 1;
      *pcVar2 = cVar1;
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

