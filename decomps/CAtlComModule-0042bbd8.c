
/* Library Function - Single Match
    public: __thiscall ATL::CAtlComModule::CAtlComModule(void)
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

CAtlComModule * __thiscall ATL::CAtlComModule::CAtlComModule(CAtlComModule *this)

{
  uint uVar1;
  
  _ATL_COM_MODULE70::_ATL_COM_MODULE70((_ATL_COM_MODULE70 *)this);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0x400000;
  *(undefined **)(this + 8) = &DAT_004549f0;
  *(undefined **)(this + 0xc) = &DAT_004549f0;
  uVar1 = FUN_00418290((LPCRITICAL_SECTION)(this + 0x10));
  if ((int)uVar1 < 0) {
    DAT_00459074 = 1;
  }
  else {
    *(undefined4 *)this = 0x28;
  }
  return this;
}

