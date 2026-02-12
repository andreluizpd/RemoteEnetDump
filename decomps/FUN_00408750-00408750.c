
void __thiscall FUN_00408750(void *this,uint param_1,uint param_2)

{
  char cVar1;
  void *this_00;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  pcVar3 = local_20;
  if (((int)param_2 < 1) && ((int)param_2 < 0)) {
    uVar5 = ~param_1;
    param_1 = uVar5 + 1;
    local_20[0] = '-';
    pcVar3 = local_20 + 1;
    param_2 = ~param_2 + (uint)(0xfffffffe < uVar5);
  }
  pcVar3 = FUN_00406df0(param_1,param_2,pcVar3);
                    /* WARNING: Load size is inaccurate */
  this_00 = *this;
  if (*(uint *)((int)this_00 + 0x10) <
      (uint)(*(int *)((int)this_00 + 0xc) + ((int)pcVar3 - (int)local_20))) {
    FUN_00407ec0(this_00,(int)pcVar3 - (int)local_20);
  }
  for (pcVar4 = local_20; pcVar4 != pcVar3; pcVar4 = pcVar4 + 1) {
                    /* WARNING: Load size is inaccurate */
    pcVar2 = *(char **)(*this + 0xc);
    cVar1 = *pcVar4;
    *(char **)(*this + 0xc) = pcVar2 + 1;
    *pcVar2 = cVar1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

