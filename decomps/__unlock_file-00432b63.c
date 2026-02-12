
/* Library Function - Single Match
    __unlock_file
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __unlock_file(FILE *_File)

{
  if (((FILE *)0x45780f < _File) && (_File < (FILE *)0x457a71)) {
    _File->_flag = _File->_flag & 0xffff7fff;
    FUN_0043e54f(((int)&_File[-0x22bc1]._file >> 5) + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}

