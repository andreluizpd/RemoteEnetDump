
void __thiscall FUN_00407380(void *this,int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  uVar2 = *param_2;
                    /* WARNING: Load size is inaccurate */
  uVar3 = *this;
  uVar4 = param_2[1];
  uVar5 = *(uint *)((int)this + 4);
  lVar6 = __allmul(uVar4,0,uVar3,0);
  lVar7 = __allmul(uVar2,0,uVar5,0);
  lVar8 = __allmul(uVar2,0,uVar3,0);
  local_1c = (uint)lVar6;
  local_14 = (uint)lVar7;
  uVar2 = (uint)((ulonglong)lVar8 >> 0x20);
  uVar3 = uVar2 + local_14;
  uVar3 = (uint)CARRY4(uVar2,local_14) + (uint)CARRY4(uVar3,local_1c) +
          (uint)(0x7fffffff < uVar3 + local_1c);
  lVar8 = __allmul(uVar4,0,uVar5,0);
  local_10 = (uint)((ulonglong)lVar7 >> 0x20);
  local_18 = (uint)((ulonglong)lVar6 >> 0x20);
  uVar4 = uVar3 + (uint)lVar8;
  uVar5 = uVar4 + local_10;
  uVar2 = param_2[2];
  iVar1 = *(int *)((int)this + 8);
  *param_1 = uVar5 + local_18;
  param_1[1] = (int)((ulonglong)lVar8 >> 0x20) + (uint)CARRY4(uVar3,(uint)lVar8) +
               (uint)CARRY4(uVar4,local_10) + (uint)CARRY4(uVar5,local_18);
  param_1[2] = uVar2 + 0x40 + iVar1;
  return;
}

