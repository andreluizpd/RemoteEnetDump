
/* Library Function - Single Match
    ___set_flsgetvalue
   
   Library: Visual Studio 2010 Release */

LPVOID ___set_flsgetvalue(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_00457808);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = DecodePointer(DAT_00459ee8);
    TlsSetValue(DAT_00457808,lpTlsValue);
  }
  return lpTlsValue;
}

