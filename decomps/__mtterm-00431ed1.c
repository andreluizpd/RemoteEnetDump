
/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2010 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_00457804 != -1) {
    iVar2 = DAT_00457804;
    pcVar1 = (code *)DecodePointer(DAT_00459ef0);
    (*pcVar1)(iVar2);
    DAT_00457804 = -1;
  }
  if (DAT_00457808 != 0xffffffff) {
    TlsFree(DAT_00457808);
    DAT_00457808 = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}

