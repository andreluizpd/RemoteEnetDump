
/* Library Function - Single Match
    _wmemset
   
   Library: Visual Studio 2010 Release */

wchar_t * __cdecl _wmemset(wchar_t *_S,wchar_t _C,size_t _N)

{
  uint uVar1;
  wchar_t *pwVar2;
  
  if (_N != 0) {
    pwVar2 = _S;
    for (uVar1 = _N >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(uint *)pwVar2 = CONCAT22(_C,_C);
      pwVar2 = pwVar2 + 2;
    }
    for (uVar1 = (uint)((_N & 1) != 0); uVar1 != 0; uVar1 = uVar1 - 1) {
      *pwVar2 = _C;
      pwVar2 = pwVar2 + 1;
    }
  }
  return _S;
}

