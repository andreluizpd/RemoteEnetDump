
void __cdecl FUN_00426790(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *local_8;
  
  puVar5 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_00426000(param_2,puVar5,param_3 + -1);
  puVar6 = puVar5 + 1;
  if (param_2 < puVar5) {
    while( true ) {
      iVar3 = (**(code **)(*(int *)puVar5[-1] + 0x58))(*puVar5);
      if ((iVar3 < 1) && (iVar3 < 0)) break;
      iVar3 = (**(code **)(*(int *)*puVar5 + 0x58))(puVar5[-1]);
      if (((iVar3 < 1) && (iVar3 < 0)) || (puVar5 = puVar5 + -1, puVar5 <= param_2)) break;
    }
  }
  puVar2 = puVar6;
  puVar4 = puVar5;
  if (puVar6 < param_3) {
    while( true ) {
      iVar3 = (**(code **)(*(int *)*puVar6 + 0x58))(*puVar5);
      puVar2 = puVar6;
      if ((iVar3 < 1) && (iVar3 < 0)) break;
      iVar3 = (**(code **)(*(int *)*puVar5 + 0x58))(*puVar6);
      if (((iVar3 < 1) && (iVar3 < 0)) || (puVar6 = puVar6 + 1, puVar2 = puVar6, param_3 <= puVar6))
      break;
    }
  }
joined_r0x00426837:
  do {
    if (param_3 <= puVar6) {
joined_r0x00426882:
      for (; param_2 < puVar4; puVar4 = puVar4 + -1) {
        iVar3 = (**(code **)(*(int *)puVar4[-1] + 0x58))(*puVar5);
        if ((0 < iVar3) || (-1 < iVar3)) {
          iVar3 = (**(code **)(*(int *)*puVar5 + 0x58))(puVar4[-1]);
          if ((iVar3 < 1) && (iVar3 < 0)) break;
          uVar1 = puVar5[-1];
          puVar5 = puVar5 + -1;
          *puVar5 = puVar4[-1];
          puVar4[-1] = uVar1;
        }
      }
      if (puVar4 == param_2) {
        if (puVar6 == param_3) {
          *param_1 = puVar5;
          param_1[1] = puVar2;
          return;
        }
        if (puVar2 != puVar6) {
          uVar1 = *puVar5;
          *puVar5 = *puVar2;
          *puVar2 = uVar1;
        }
        uVar1 = *puVar5;
        *puVar5 = *puVar6;
        puVar5 = puVar5 + 1;
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
        puVar2 = puVar2 + 1;
      }
      else {
        puVar4 = puVar4 + -1;
        if (puVar6 == param_3) {
          puVar5 = puVar5 + -1;
          if (puVar4 != puVar5) {
            uVar1 = *puVar4;
            *puVar4 = *puVar5;
            *puVar5 = uVar1;
          }
          uVar1 = *puVar5;
          *puVar5 = puVar2[-1];
          puVar2[-1] = uVar1;
          puVar2 = puVar2 + -1;
        }
        else {
          uVar1 = *puVar6;
          *puVar6 = *puVar4;
          *puVar4 = uVar1;
          puVar6 = puVar6 + 1;
        }
      }
      goto joined_r0x00426837;
    }
    iVar3 = (**(code **)(*(int *)*puVar5 + 0x58))(*puVar6);
    if ((0 < iVar3) || (local_8 = puVar2, -1 < iVar3)) {
      iVar3 = (**(code **)(*(int *)*puVar6 + 0x58))(*puVar5);
      if ((iVar3 < 1) && (iVar3 < 0)) goto joined_r0x00426882;
      local_8 = puVar2 + 1;
      uVar1 = *puVar2;
      *puVar2 = *puVar6;
      *puVar6 = uVar1;
    }
    puVar6 = puVar6 + 1;
    puVar2 = local_8;
  } while( true );
}

