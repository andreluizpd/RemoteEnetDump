
void __cdecl FUN_004259b0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1 != param_2) {
    for (puVar3 = param_1 + 1; puVar3 != param_2; puVar3 = puVar3 + 1) {
      piVar1 = (int *)*puVar3;
      iVar2 = (**(code **)(*piVar1 + 0x58))(*param_1);
      puVar4 = puVar3;
      if ((iVar2 < 1) && (iVar2 < 0)) {
        iVar2 = (int)puVar3 - (int)param_1 >> 2;
        FID_conflict__memcpy(puVar3 + (1 - iVar2),param_1,iVar2 * 4);
        *param_1 = piVar1;
      }
      else {
        while( true ) {
          iVar2 = (**(code **)(*piVar1 + 0x58))(puVar4[-1]);
          if ((0 < iVar2) || (-1 < iVar2)) break;
          *puVar4 = puVar4[-1];
          puVar4 = puVar4 + -1;
        }
        *puVar4 = piVar1;
      }
    }
  }
  return;
}

