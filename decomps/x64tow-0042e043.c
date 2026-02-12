
/* Library Function - Single Match
    @x64tow@20
   
   Library: Visual Studio 2010 Release
   __fastcall x64tow,20 */

void __fastcall
x64tow(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5,int param_6)

{
  short *psVar1;
  short *in_EAX;
  short sVar2;
  uint extraout_ECX;
  short *psVar3;
  bool bVar4;
  longlong lVar5;
  
  if (param_6 != 0) {
    *in_EAX = 0x2d;
    in_EAX = in_EAX + 1;
    bVar4 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(param_4 + (uint)bVar4);
  }
  lVar5 = CONCAT44(param_4,param_3);
  psVar1 = in_EAX;
  do {
    psVar3 = psVar1;
    lVar5 = __aulldvrm((uint)lVar5,(uint)((ulonglong)lVar5 >> 0x20),param_5,0);
    if (extraout_ECX < 10) {
      sVar2 = (short)extraout_ECX + 0x30;
    }
    else {
      sVar2 = (short)extraout_ECX + 0x57;
    }
    *psVar3 = sVar2;
    psVar1 = psVar3 + 1;
  } while (lVar5 != 0);
  psVar3[1] = 0;
  do {
    sVar2 = *psVar3;
    *psVar3 = *in_EAX;
    *in_EAX = sVar2;
    psVar3 = psVar3 + -1;
    in_EAX = in_EAX + 1;
  } while (in_EAX < psVar3);
  return;
}

