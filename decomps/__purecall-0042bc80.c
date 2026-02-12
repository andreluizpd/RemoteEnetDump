
/* Library Function - Single Match
    __purecall
   
   Library: Visual Studio 2010 Release */

void __purecall(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)DecodePointer(DAT_00459ee0);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  __NMSG_WRITE(0x19);
  __set_abort_behavior(0,1);
                    /* WARNING: Subroutine does not return */
  _abort();
}

