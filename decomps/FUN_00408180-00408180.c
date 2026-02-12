
undefined4 * __thiscall FUN_00408180(void *this,char param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004447dc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = IJsonWriter::vftable;
  local_8 = 0;
  *(undefined ***)this = CJsonSerializer::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(char *)((int)this + 8) = param_1;
  if (param_1 == '\0') {
    puVar1 = (undefined4 *)FUN_0042dcce(0x40);
    local_8 = CONCAT31(local_8._1_3_,2);
    if (puVar1 == (undefined4 *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00406b40(puVar1);
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_0042dcce(0x4c);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (puVar1 == (undefined4 *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00407fe0(puVar1);
    }
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return (undefined4 *)this;
    }
    *(undefined1 *)(iVar2 + 0x40) = 9;
    *(undefined4 *)(iVar2 + 0x44) = 1;
  }
  *(int *)((int)this + 4) = iVar2;
  ExceptionList = local_10;
  return (undefined4 *)this;
}

