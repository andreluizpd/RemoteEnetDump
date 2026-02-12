
void __thiscall FUN_00420d40(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  
  if ((*(int *)((int)this + 4) != 0) &&
     (puVar1 = *(undefined4 **)(*(int *)((int)this + 4) + 4), puVar1 != (undefined4 *)0x0)) {
    *puVar1 = param_1;
    FUN_0041fb60(*(int *)((int)this + 4));
  }
  return;
}

