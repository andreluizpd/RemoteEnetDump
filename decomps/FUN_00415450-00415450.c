
void __thiscall FUN_00415450(void *this,int *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
                    /* WARNING: Load size is inaccurate */
  if (*this == 0) {
    *param_1 = 0;
    return;
  }
  iVar2 = *(int *)(*this + 0x1c);
  do {
    if (iVar2 == 0) {
      *param_1 = 0;
      return;
    }
    pbVar5 = *(byte **)(iVar2 + 4);
    pbVar3 = param_2;
    if (pbVar5 != (byte *)0x0) {
      do {
        bVar1 = *pbVar3;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_004154a0:
          iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_004154a5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_004154a0;
        pbVar5 = pbVar5 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_004154a5:
      if (iVar4 == 0) {
        *param_1 = iVar2;
        return;
      }
    }
    iVar2 = *(int *)(iVar2 + 0x10);
  } while( true );
}

