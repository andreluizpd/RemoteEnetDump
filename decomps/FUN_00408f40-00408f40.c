
void __thiscall FUN_00408f40(void *this,byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  bVar1 = *param_1;
  pbVar2 = param_1;
  while (bVar1 != 0) {
    pbVar2 = pbVar2 + 1;
    bVar1 = *pbVar2;
  }
  FUN_004082d0((undefined4 *)((int)this + 0x1c));
  FUN_00408aa0((undefined4 *)((int)this + 0x1c),param_1,(int)pbVar2 - (int)param_1);
  return;
}

