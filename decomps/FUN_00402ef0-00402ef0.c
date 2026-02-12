
void __thiscall FUN_00402ef0(void *this,char *param_1,char param_2)

{
  int *piVar1;
  char *pcVar2;
  char local_30 [4];
  undefined2 *local_2c;
  undefined2 local_28 [10];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004440e0;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00404fe0((undefined4 *)this);
  local_8 = 0;
  piVar1 = (int *)((int)this + 4);
  *piVar1 = (int)this + 0xd;
  *(undefined ***)this = CDecStr<260,1>::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(int *)((int)this + 0x114) = (int)this + 0x11e;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined2 *)((int)this + 0x11c) = 0;
  *(undefined1 *)((int)this + 0x326) = 0;
  if (param_2 != '\0') {
    local_30[0] = param_2;
    *(char *)((int)this + 0xc) = param_2;
    local_2c = local_28;
    local_30[1] = 0;
    FUN_00402650(&local_2c,local_30,3);
    *(undefined2 *)((int)this + 0x11c) = *local_2c;
    local_8 = local_8 & 0xffffff00;
    if (local_2c != local_28) {
      _free(local_2c);
    }
  }
  if (param_1 == (char *)0x0) {
    *piVar1 = 0;
  }
  else {
    *piVar1 = (int)this + 0xd;
    FUN_004054b0(param_1,piVar1,0x104);
    if ((*(char *)((int)this + 0xc) != '\0') && ((char *)*piVar1 != (char *)0x0)) {
      pcVar2 = _strchr((char *)*piVar1,(int)*(char *)((int)this + 0xc));
      *(char **)((int)this + 8) = pcVar2;
      if (pcVar2 != (char *)0x0) {
        *(char **)((int)this + 8) = pcVar2 + 1;
      }
    }
  }
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

