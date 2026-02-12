
int * __thiscall FUN_0040cb00(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00444dfe;
  local_10 = ExceptionList;
  uVar2 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = IUnknownImpl::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined ***)((int)this + 0xc) = ISerializableObject::vftable;
  local_8 = 1;
  uStack_7 = 0;
  *(undefined ***)this = CKVPCollection::vftable;
  *(undefined ***)((int)this + 0xc) = CKVPCollection::vftable;
  FUN_0040c2b0((int *)((int)this + 0x14));
  _local_8 = CONCAT31(uStack_7,2);
  if (DAT_00458d68 == 0 && DAT_00458d6c == 0) {
    FUN_0040c9c0();
  }
                    /* WARNING: Load size is inaccurate */
  iVar1 = *this;
  *(int *)((int)this + 4) = param_1[1];
  *(int *)((int)this + 0x10) = param_1[4];
  uVar3 = (**(code **)(*param_1 + 0x1a8))(uVar2);
  (**(code **)(iVar1 + 0x1b0))(uVar3);
  ExceptionList = local_10;
  return (int *)this;
}

