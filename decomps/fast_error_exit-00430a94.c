
/* Library Function - Single Match
    _fast_error_exit
   
   Library: Visual Studio 2010 Release */

void __cdecl fast_error_exit(int param_1)

{
  if (DAT_004598a8 == 1) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
  ___crtExitProcess(0xff);
  return;
}

