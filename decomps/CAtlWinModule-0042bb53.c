
/* Library Function - Single Match
    public: __thiscall ATL::CAtlWinModule::CAtlWinModule(void)
   
   Library: Visual Studio 2010 Release */

CAtlWinModule * __thiscall ATL::CAtlWinModule::CAtlWinModule(CAtlWinModule *this)

{
  long lVar1;
  
  _ATL_WIN_MODULE70::_ATL_WIN_MODULE70((_ATL_WIN_MODULE70 *)this);
  *(undefined4 *)this = 0x2c;
  lVar1 = AtlWinModuleInit((_ATL_WIN_MODULE70 *)this);
  if (lVar1 < 0) {
    DAT_00459074 = 1;
    *(undefined4 *)this = 0;
  }
  return this;
}

