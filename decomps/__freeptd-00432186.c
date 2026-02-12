
/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2010 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_00457804 != -1) {
    if ((_Ptd == (_ptiddata)0x0) && (pvVar1 = TlsGetValue(DAT_00457808), pvVar1 != (LPVOID)0x0)) {
      iVar3 = DAT_00457804;
      pcVar2 = (code *)TlsGetValue(DAT_00457808);
      _Ptd = (_ptiddata)(*pcVar2)(iVar3);
    }
    uVar4 = 0;
    iVar3 = DAT_00457804;
    pcVar2 = (code *)DecodePointer(DAT_00459eec);
    (*pcVar2)(iVar3,uVar4);
    __freefls_4(_Ptd);
  }
  if (DAT_00457808 != 0xffffffff) {
    TlsSetValue(DAT_00457808,(LPVOID)0x0);
  }
  return;
}

