
undefined4 * __thiscall
FUN_00403b00(void *this,undefined4 param_1,undefined **param_2,char param_3,undefined4 param_4)

{
  char cVar1;
  rsize_t rVar2;
  undefined **ppuVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00444169;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = CClassLogger::vftable;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = 1;
  *(void **)((int)this + 0x18) = this;
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = 5;
  *(void **)((int)this + 0x24) = this;
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x2c) = 10;
  *(void **)((int)this + 0x30) = this;
  *(undefined4 *)((int)this + 0x34) = param_1;
  *(undefined4 *)((int)this + 0x38) = 0xf;
  *(void **)((int)this + 0x3c) = this;
  *(undefined4 *)((int)this + 0x40) = param_4;
  *(undefined4 *)((int)this + 0x44) = param_1;
  *(undefined1 *)((int)this + 0x48) = 0;
  *(bool *)((int)this + 0x50) = param_3 == '\0';
  *(undefined1 *)((int)this + 0x51) = 0;
  FUN_00403220((int *)((int)this + 0x54));
  local_8 = 0;
  FUN_00403220((int *)((int)this + 0x17c));
  local_8 = CONCAT31(local_8._1_3_,1);
  if (param_3 == '\0') {
    if (param_2 == (undefined **)0x0) {
      rVar2 = 0;
    }
    else {
      ppuVar3 = param_2;
      do {
        cVar1 = *(char *)ppuVar3;
        ppuVar3 = (undefined **)((int)ppuVar3 + 1);
      } while (cVar1 != '\0');
      rVar2 = (int)ppuVar3 - ((int)param_2 + 1);
    }
    FUN_00403380((void *)((int)this + 0x60),param_2,rVar2);
    param_2 = *(undefined ***)((int)this + 0x60);
  }
  else if (param_2 == (undefined **)0x0) {
    param_2 = &PTR_0044862c;
  }
  *(undefined ***)((int)this + 0x4c) = param_2;
  ExceptionList = local_10;
  return (undefined4 *)this;
}

