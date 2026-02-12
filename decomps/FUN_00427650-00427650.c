
void __fastcall FUN_00427650(int param_1)

{
  undefined4 *puVar1;
  
  if (1 < *(int *)(param_1 + 0xbc)) {
    puVar1 = *(undefined4 **)(param_1 + 0xb8);
    FUN_00426e90(puVar1,puVar1 + *(int *)(param_1 + 0xbc),
                 (int)(puVar1 + *(int *)(param_1 + 0xbc)) - (int)puVar1 >> 2,param_1);
  }
  return;
}

