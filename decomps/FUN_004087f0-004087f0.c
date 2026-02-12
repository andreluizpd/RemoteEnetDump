
void __thiscall FUN_004087f0(void *this,uint param_1,uint param_2)

{
  char cVar1;
  void *this_00;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char local_1c [20];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  pcVar3 = FUN_00406df0(param_1,param_2,local_1c);
                    /* WARNING: Load size is inaccurate */
  this_00 = *this;
  if (*(uint *)((int)this_00 + 0x10) <
      (uint)(*(int *)((int)this_00 + 0xc) + ((int)pcVar3 - (int)local_1c))) {
    FUN_00407ec0(this_00,(int)pcVar3 - (int)local_1c);
  }
  for (pcVar4 = local_1c; pcVar4 != pcVar3; pcVar4 = pcVar4 + 1) {
                    /* WARNING: Load size is inaccurate */
    pcVar2 = *(char **)(*this + 0xc);
    cVar1 = *pcVar4;
    *(char **)(*this + 0xc) = pcVar2 + 1;
    *pcVar2 = cVar1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

