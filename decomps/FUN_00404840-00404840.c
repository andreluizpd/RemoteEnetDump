
void __cdecl FUN_00404840(void *param_1,void *param_2,int param_3)

{
  errno_t eVar1;
  
  eVar1 = _memmove_s(param_1,param_3 * 4,param_2,param_3 * 4);
  switch(eVar1) {
  case 0:
  case 0x50:
    return;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80004005);
  case 0xc:
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x8007000e);
  case 0x16:
  case 0x22:
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80070057);
  }
}

