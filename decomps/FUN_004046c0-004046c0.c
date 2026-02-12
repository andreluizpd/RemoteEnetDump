
undefined4 * __thiscall FUN_004046c0(void *this,undefined **param_1,undefined1 param_2,char param_3)

{
  char cVar1;
  rsize_t rVar2;
  undefined **ppuVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044433b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = CClassLogger2::vftable;
  *(void **)((int)this + 8) = this;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 1;
  *(void **)((int)this + 0x10) = this;
  *(undefined4 *)((int)this + 0x14) = 5;
  *(void **)((int)this + 0x18) = this;
  *(undefined4 *)((int)this + 0x1c) = 10;
  *(void **)((int)this + 0x20) = this;
  *(undefined4 *)((int)this + 0x24) = 0xf;
  *(void **)((int)this + 0x28) = this;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(bool *)((int)this + 0x38) = param_3 == '\0';
  *(undefined1 *)((int)this + 0x30) = param_2;
  FUN_00403220((int *)((int)this + 0x3c));
  local_8 = 0;
  if (param_3 == '\0') {
    if (param_1 == (undefined **)0x0) {
      rVar2 = 0;
    }
    else {
      ppuVar3 = param_1;
      do {
        cVar1 = *(char *)ppuVar3;
        ppuVar3 = (undefined **)((int)ppuVar3 + 1);
      } while (cVar1 != '\0');
      rVar2 = (int)ppuVar3 - ((int)param_1 + 1);
    }
    FUN_00403380((void *)((int)this + 0x48),param_1,rVar2);
    param_1 = *(undefined ***)((int)this + 0x48);
  }
  else if (param_1 == (undefined **)0x0) {
    param_1 = &PTR_0044862c;
  }
  *(undefined ***)((int)this + 0x34) = param_1;
  ExceptionList = local_10;
  return (undefined4 *)this;
}

