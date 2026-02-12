
void __cdecl
FUN_00407670(int param_1,int param_2,uint param_3,int param_4,uint param_5,uint param_6,uint param_7
            ,uint param_8,uint param_9,uint param_10)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_6 <= param_10) && ((param_6 < param_10 || (param_5 < param_9)))) {
    while( true ) {
      uVar2 = (param_4 - param_6) - (uint)(param_3 < param_5);
      if ((uVar2 < param_8) || ((uVar2 <= param_8 && (param_3 - param_5 < param_7)))) break;
      uVar2 = param_5 + param_7;
      uVar4 = param_6 + param_8 + (uint)CARRY4(param_5,param_7);
      if ((param_10 <= uVar4) && ((param_10 < uVar4 || (param_9 <= uVar2)))) {
        uVar3 = ((param_6 - param_10) - (uint)(param_5 < param_9)) + param_8 +
                (uint)CARRY4(param_5 - param_9,param_7);
        uVar5 = (param_10 - param_6) - (uint)(param_9 < param_5);
        if (uVar5 < uVar3) {
          return;
        }
        if ((uVar5 <= uVar3) && (param_9 - param_5 <= (param_5 - param_9) + param_7)) {
          return;
        }
      }
      pcVar1 = (char *)(param_1 + -1 + param_2);
      *pcVar1 = *pcVar1 + -1;
      param_6 = uVar4;
      param_5 = uVar2;
      if (param_10 <= uVar4) {
        if (param_10 < uVar4) {
          return;
        }
        if (param_9 <= uVar2) {
          return;
        }
      }
    }
  }
  return;
}

