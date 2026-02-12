
void __fastcall FUN_00420e50(int param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 local_260 [3];
  undefined1 *local_254 [136];
  int local_34 [9];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446a80;
  local_10 = ExceptionList;
  local_34[8] = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 4) == 0) {
    puVar2 = (undefined4 *)FUN_0042dcce(0x34);
    local_8 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_0041fca0(puVar2);
    }
    local_8 = 0xffffffff;
    *(undefined4 **)(param_1 + 4) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      iVar3 = FUN_00420250(puVar2,0x400,'\x01',
                           (OLECHAR *)PTR_u__A0C3E7E4_8750_4CB8_890F_555DEAD_00457234);
      if (iVar3 == -0x7ff8ff49) {
        iVar3 = FUN_00420920(*(void **)(param_1 + 4),
                             (wchar_t *)PTR_u__A0C3E7E4_8750_4CB8_890F_555DEAD_00457234,0);
      }
      if (-1 < iVar3) {
        FUN_0041fb40(*(int *)(param_1 + 4));
        FUN_00405ba0(local_260,(short *)PTR_u__A0C3E7E4_8750_4CB8_890F_555DEAD_00457234);
        local_8 = 1;
        FUN_00420df0((int *)local_254);
        puVar1 = local_254[0];
        iVar3 = *(int *)(local_254[0] + -0xc);
        iVar4 = FUN_0041fb80(*(int *)(param_1 + 4));
        if (iVar4 == 0) {
          local_34[0] = 0;
          local_34[1] = 0;
          local_34[2] = 0;
          local_34[3] = 0;
          local_34[4] = 0;
          local_34[5] = 0;
          local_34[6] = 0;
          local_34[7] = 0;
          FUN_0041f3c0(puVar1,iVar3 * 2,local_34,0x20);
          piVar5 = local_34;
          uVar6 = 0x20;
          iVar3 = (*(int *)(*(int *)(param_1 + 4) + 4) + 4) - (int)piVar5;
          do {
            if (*(int *)(iVar3 + (int)piVar5) != *piVar5) break;
            uVar6 = uVar6 - 4;
            piVar5 = piVar5 + 1;
          } while (3 < uVar6);
        }
        else {
          FUN_0041f3c0(local_254[0],iVar3 * 2,(void *)(*(int *)(*(int *)(param_1 + 4) + 4) + 4),0x20
                      );
        }
        local_8 = 0xffffffff;
        FUN_004030c0(local_260);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_34[8] ^ (uint)&stack0xfffffffc);
  return;
}

