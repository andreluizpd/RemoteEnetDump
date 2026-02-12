
undefined4 __thiscall FUN_00408aa0(void *this,byte *param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  void *this_00;
  undefined1 *puVar4;
  char *pcVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  
                    /* WARNING: Load size is inaccurate */
  this_00 = *this;
  iVar1 = param_2 * 6 + 2;
  if (*(uint *)((int)this_00 + 0x10) < (uint)(*(int *)((int)this_00 + 0xc) + iVar1)) {
    FUN_00407ec0(this_00,iVar1);
  }
                    /* WARNING: Load size is inaccurate */
  puVar4 = *(undefined1 **)(*this + 0xc);
  *(undefined1 **)(*this + 0xc) = puVar4 + 1;
  *puVar4 = 0x22;
  if (param_2 != 0) {
    uVar8 = 0;
    do {
      bVar2 = *param_1;
      uVar7 = (uint)bVar2;
      param_1 = param_1 + 1;
      uVar8 = uVar8 + 1;
      if ("uuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[uVar7] == '\0') {
                    /* WARNING: Load size is inaccurate */
        pbVar6 = *(byte **)(*this + 0xc);
        *(byte **)(*this + 0xc) = pbVar6 + 1;
        *pbVar6 = bVar2;
      }
      else {
                    /* WARNING: Load size is inaccurate */
        puVar4 = *(undefined1 **)(*this + 0xc);
        *(undefined1 **)(*this + 0xc) = puVar4 + 1;
        *puVar4 = 0x5c;
                    /* WARNING: Load size is inaccurate */
        pcVar5 = *(char **)(*this + 0xc);
        cVar3 = "uuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[uVar7];
        *(char **)(*this + 0xc) = pcVar5 + 1;
        *pcVar5 = cVar3;
        if ("uuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[uVar7] == 'u') {
                    /* WARNING: Load size is inaccurate */
          puVar4 = *(undefined1 **)(*this + 0xc);
          *(undefined1 **)(*this + 0xc) = puVar4 + 1;
          *puVar4 = 0x30;
                    /* WARNING: Load size is inaccurate */
          puVar4 = *(undefined1 **)(*this + 0xc);
          *(undefined1 **)(*this + 0xc) = puVar4 + 1;
          *puVar4 = 0x30;
          cVar3 = "0123456789ABCDEF"[bVar2 >> 4];
                    /* WARNING: Load size is inaccurate */
          pcVar5 = *(char **)(*this + 0xc);
          *(char **)(*this + 0xc) = pcVar5 + 1;
          *pcVar5 = cVar3;
                    /* WARNING: Load size is inaccurate */
          pcVar5 = *(char **)(*this + 0xc);
          cVar3 = "0123456789ABCDEF"[uVar7 & 0xf];
          *(char **)(*this + 0xc) = pcVar5 + 1;
          *pcVar5 = cVar3;
        }
      }
    } while (uVar8 < param_2);
  }
                    /* WARNING: Load size is inaccurate */
  puVar4 = *(undefined1 **)(*this + 0xc);
  *(undefined1 **)(*this + 0xc) = puVar4 + 1;
  *puVar4 = 0x22;
  return CONCAT31((int3)((uint)puVar4 >> 8),1);
}

