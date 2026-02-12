
/* Library Function - Single Match
    __set_abort_behavior
   
   Library: Visual Studio 2010 Release */

uint __cdecl __set_abort_behavior(uint _Flags,uint _Mask)

{
  uint uVar1;
  
  uVar1 = DAT_004577e0;
  DAT_004577e0 = ~_Mask & DAT_004577e0 | _Flags & _Mask;
  return uVar1;
}

