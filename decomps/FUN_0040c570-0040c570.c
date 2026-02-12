
undefined4 * __thiscall FUN_0040c570(void *this,byte param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00444dbe;
  local_10 = ExceptionList;
  uVar1 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = CKVPCollection::vftable;
  *(undefined ***)((int)this + 0xc) = CKVPCollection::vftable;
  local_8 = 1;
  FUN_0040b8d0((undefined4 *)((int)this + 0x14));
  *(undefined ***)((int)this + 0xc) = ISerializableObject::vftable;
  local_8 = 0xffffffff;
  *(undefined ***)this = IUnknownImpl::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(DAT_00458da0 + 4))(this,uVar1);
  }
  ExceptionList = local_10;
  return (undefined4 *)this;
}

