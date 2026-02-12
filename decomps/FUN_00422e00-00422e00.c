
undefined4 * __thiscall FUN_00422e00(void *this,char *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446b95;
  local_10 = ExceptionList;
  uVar3 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0041ef10((undefined4 *)this);
  local_14 = (int *)((int)this + 0x10);
  *(undefined ***)this = CStreamBinarySerializer::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *local_14 = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  local_14 = (int *)FUN_0042dcce(0x40);
  local_8._0_1_ = 3;
  if (local_14 == (int *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_004227b0(local_14,0,0x1000,0);
  }
  *(undefined4 **)((int)this + 0xc) = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 8) = 0x8007000e;
  }
  else {
    *(undefined1 *)(puVar4 + 0xf) = 1;
    local_14 = (int *)0x0;
    local_8 = CONCAT31(local_8._1_3_,5);
    (**(code **)**(undefined4 **)((int)this + 0xc))
              (*(undefined4 **)((int)this + 0xc),&DAT_0044d2ec,&local_14,uVar3);
    piVar2 = local_14;
    if (*(int **)((int)this + 4) != local_14) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 4))(local_14);
      }
      piVar1 = *(int **)((int)this + 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *(int **)((int)this + 4) = piVar2;
    }
    if (*(int **)((int)this + 0x10) != piVar2) {
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))(piVar2);
      }
      piVar1 = *(int **)((int)this + 0x10);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *(int **)((int)this + 0x10) = piVar2;
    }
    if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
      iVar5 = FUN_004226c0(*(void **)((int)this + 0xc),param_1,(undefined1 *)0xffffffff);
      *(int *)((int)this + 8) = iVar5;
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))(local_14);
    }
  }
  ExceptionList = local_10;
  return (undefined4 *)this;
}

