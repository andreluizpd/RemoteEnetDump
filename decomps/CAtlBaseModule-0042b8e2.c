
/* Library Function - Single Match
    public: __thiscall ATL::CAtlBaseModule::CAtlBaseModule(void)
   
   Library: Visual Studio 2010 Release */

CAtlBaseModule * __thiscall ATL::CAtlBaseModule::CAtlBaseModule(CAtlBaseModule *this)

{
  uint uVar1;
  
  _ATL_BASE_MODULE70::_ATL_BASE_MODULE70((_ATL_BASE_MODULE70 *)this);
  *(undefined4 *)this = 0x38;
  *(undefined4 *)(this + 8) = 0x400000;
  *(undefined4 *)(this + 4) = 0x400000;
  *(undefined4 *)(this + 0xc) = 0xa00;
  *(undefined **)(this + 0x10) = &DAT_0044d31c;
  uVar1 = FUN_00418290((LPCRITICAL_SECTION)(this + 0x14));
  if ((int)uVar1 < 0) {
    DAT_00459074 = 1;
  }
  return this;
}

