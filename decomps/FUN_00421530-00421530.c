
bool FUN_00421530(void)

{
  int iVar1;
  
  iVar1 = WSACleanup();
  return (bool)('\x01' - (iVar1 != 0));
}

