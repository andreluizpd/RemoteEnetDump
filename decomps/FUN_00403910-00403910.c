
undefined4 __thiscall FUN_00403910(void *this,HMODULE param_1,uint param_2)

{
  HRSRC pHVar1;
  ushort *puVar2;
  uint uVar3;
  
  pHVar1 = FindResourceW(param_1,(LPCWSTR)((param_2 >> 4) + 1 & 0xffff),(LPCWSTR)0x6);
  if ((pHVar1 == (HRSRC)0x0) ||
     (puVar2 = (ushort *)FUN_00401e40(param_1,pHVar1,param_2), puVar2 == (ushort *)0x0)) {
    return 0;
  }
  uVar3 = (uint)*puVar2;
                    /* WARNING: Load size is inaccurate */
  if ((int)(1U - *(int *)(*this + -4) | *(int *)(*this + -8) - uVar3) < 0) {
    FUN_00402df0(this,uVar3);
  }
                    /* WARNING: Load size is inaccurate */
  FUN_00402140(*this,uVar3,(wchar_t *)(puVar2 + 1),(uint)*puVar2);
                    /* WARNING: Load size is inaccurate */
  if (*(int *)(*this + -8) < (int)uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80070057);
  }
  *(uint *)(*this + -0xc) = uVar3;
                    /* WARNING: Load size is inaccurate */
  *(undefined2 *)(*this + uVar3 * 2) = 0;
  return 1;
}

