
/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2010 Release */

void __cdecl ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_004585e8) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_004585ec) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_004585f0) {
      _free((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_00458618) {
      _free((undefined *)param_1[0xc]);
    }
    if ((undefined *)param_1[0xd] != PTR_DAT_0045861c) {
      _free((undefined *)param_1[0xd]);
    }
  }
  return;
}

