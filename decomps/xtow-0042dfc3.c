
/* Library Function - Single Match
    _xtow@16
   
   Library: Visual Studio 2010 Release
   __stdcall xtow,16 */

void xtow(uint param_1,int param_2)

{
  ulonglong uVar1;
  short *psVar2;
  uint in_EAX;
  uint uVar3;
  short *in_ECX;
  short *psVar4;
  short sVar5;
  
  psVar2 = in_ECX;
  if (param_2 != 0) {
    *in_ECX = 0x2d;
    in_ECX = in_ECX + 1;
    in_EAX = -in_EAX;
    psVar2 = in_ECX;
  }
  do {
    psVar4 = psVar2;
    uVar1 = (ulonglong)in_EAX;
    uVar3 = (uint)(uVar1 / param_1);
    sVar5 = (short)(in_EAX % param_1);
    if (in_EAX % param_1 < 10) {
      sVar5 = sVar5 + 0x30;
    }
    else {
      sVar5 = sVar5 + 0x57;
    }
    *psVar4 = sVar5;
    in_EAX = uVar3;
    psVar2 = psVar4 + 1;
  } while (uVar3 != 0);
  psVar4[1] = (short)(uVar1 / param_1);
  do {
    sVar5 = *psVar4;
    *psVar4 = *in_ECX;
    *in_ECX = sVar5;
    psVar4 = psVar4 + -1;
    in_ECX = in_ECX + 1;
  } while (in_ECX < psVar4);
  return;
}

