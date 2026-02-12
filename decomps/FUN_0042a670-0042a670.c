
void __thiscall FUN_0042a670(void *this,undefined4 param_1,int param_2,uint param_3,short *param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  u_short uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  char *_Memory;
  uint uVar8;
  undefined4 local_594;
  int local_590;
  uint local_58c;
  void *local_580;
  uint local_57c;
  int local_578;
  char *local_574;
  undefined4 local_570 [3];
  undefined1 local_564 [284];
  undefined4 local_448 [3];
  undefined4 local_43c [71];
  char local_320 [260];
  WCHAR local_21c;
  undefined1 local_21a [518];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00447662;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_580 = this;
  local_578 = (**(code **)(PTR_vftable_004575c8 + 0xc))(local_14);
  local_578 = local_578 + 0x10;
  local_8 = 1;
  local_21c = L'\0';
  _memset(local_21a,0,0x206);
  FUN_004215c0(&local_21c,0x104,param_4);
  uVar4 = ntohs(param_4[1]);
  if (((uint)uVar4 == *(uint *)((int)this + 0x14)) && (6 < param_3)) {
    uVar4 = ntohs(*(u_short *)(param_2 + 4));
    if (uVar4 == 0x11) {
      uVar8 = param_3 - 6;
      local_574 = local_320;
      if (0x103 < uVar8) {
        local_574 = (char *)_malloc(param_3 - 5);
        if (local_574 == (char *)0x0) {
          *(undefined4 *)((int)this + 0x48c) = 0x8007000e;
          goto LAB_0042a9ac;
        }
      }
      FID_conflict__memcpy(local_574,(void *)(param_2 + 6),uVar8);
      _Memory = local_574;
      local_574[uVar8] = '\0';
      pcVar5 = FUN_00428a20(local_574,"BMW",-1);
      if (pcVar5 != (char *)0x0) {
        (**(code **)(*(int *)((int)this + 0x3b0) + 0x16c))();
        FUN_0042a5a0(&local_594,_Memory,"BMW",1);
        local_8._0_1_ = 2;
        if (1 < local_58c) {
          (**(code **)(*(int *)((int)this + 0x3b0) + 0x48))(&DAT_004496f4,&local_21c);
          local_57c = 0;
          if (local_58c != 0) {
            if (local_58c == 0) {
              puVar6 = (undefined4 *)0x0;
              goto LAB_0042a81d;
            }
            do {
              puVar6 = (undefined4 *)(local_590 + local_57c * 4);
LAB_0042a81d:
              uVar8 = local_57c;
              bVar3 = FUN_00422050((char *)*puVar6,"MAC",'\x01');
              if (bVar3) {
                if (uVar8 < local_58c) {
                  puVar6 = (undefined4 *)(local_590 + uVar8 * 4);
                }
                else {
                  puVar6 = (undefined4 *)0x0;
                }
                FUN_00428250(local_570,puVar6);
                local_8._0_1_ = 3;
                FUN_00404a20(local_564,0,3);
                iVar2 = *(int *)((int)this + 0x3b0);
                iVar7 = FUN_00429ca0();
                (**(code **)(iVar2 + 0x4c))(&DAT_0044ccf0,iVar7);
                local_8._0_1_ = 2;
                FUN_00402e50(local_570);
                _Memory = local_574;
                uVar8 = local_57c;
                this = local_580;
              }
              else {
                if (uVar8 < local_58c) {
                  puVar6 = (undefined4 *)(local_590 + uVar8 * 4);
                }
                else {
                  puVar6 = (undefined4 *)0x0;
                }
                bVar3 = FUN_00422050((char *)*puVar6,"VIN",'\x01');
                if (bVar3) {
                  if (uVar8 < local_58c) {
                    puVar6 = (undefined4 *)(local_590 + uVar8 * 4);
                  }
                  else {
                    puVar6 = (undefined4 *)0x0;
                  }
                  FUN_00428250(local_448,puVar6);
                  local_8._0_1_ = 4;
                  FUN_00404a20(local_43c,0,3);
                  (**(code **)(*(int *)((int)this + 0x3b0) + 0x4c))(&DAT_0044cce8,local_43c[0]);
                  local_8._0_1_ = 2;
                  FUN_00402e50(local_448);
                }
              }
              local_57c = uVar8 + 1;
            } while (local_57c < local_58c);
          }
          (**(code **)(*(int *)((int)this + 0x3b0) + 0x1c8))(&local_578);
          *(undefined4 *)((int)this + 0x48c) = 0;
          SetEvent(*(HANDLE *)((int)this + 4));
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_00429be0(&local_594);
      }
      if (_Memory != local_320) {
        _free(_Memory);
      }
    }
  }
LAB_0042a9ac:
  local_8 = 0xffffffff;
  piVar1 = (int *)(local_578 + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)(local_578 + -0x10) + 4))((undefined4 *)(local_578 + -0x10));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

