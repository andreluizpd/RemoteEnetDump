
void __thiscall FUN_004095b0(void *this,undefined1 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(char *)((int)this + 0xc) != '\0') {
    iVar1 = (**(code **)(**(int **)((int)this + 0x10) + 0xc))(param_1);
    puVar2 = param_1;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  (**(code **)(**(int **)((int)this + 0x10) + 4))(param_1);
  return;
}

