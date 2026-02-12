
undefined4 * __thiscall FUN_00414a60(void *this,uint param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = 0x8000;
  if (0x2000 < param_1) {
    uVar1 = param_1;
  }
  iVar2 = (*(code *)PTR_FUN_00456d88)(uVar1 + 0x54);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)(iVar2 + 0x40U & 0xffffffc0);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
                    /* WARNING: Load size is inaccurate */
    *puVar3 = **this;
    *(byte *)((int)puVar3 + -1) = ((byte)(iVar2 + 0x40U) & 0xc0) - (char)iVar2;
  }
  *param_2 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
                    /* WARNING: Load size is inaccurate */
  if (param_1 < 0x2001) {
    *(undefined4 *)(*this + 0xc) = *(undefined4 *)((int)this + 4);
                    /* WARNING: Load size is inaccurate */
    puVar3[1] = *this;
                    /* WARNING: Load size is inaccurate */
    *(undefined4 **)(*this + 8) = puVar3;
    *(uint *)((int)this + 4) = param_1;
    *(undefined4 **)this = puVar3;
    puVar3[3] = param_1;
    return puVar3 + 5;
  }
  puVar3[1] = *(undefined4 *)(*this + 4);
                    /* WARNING: Load size is inaccurate */
  puVar3[2] = *this;
                    /* WARNING: Load size is inaccurate */
  *(undefined4 **)(*(int *)(*this + 4) + 8) = puVar3;
                    /* WARNING: Load size is inaccurate */
  *(undefined4 **)(*this + 4) = puVar3;
  puVar3[3] = param_1;
  return puVar3 + 5;
}

