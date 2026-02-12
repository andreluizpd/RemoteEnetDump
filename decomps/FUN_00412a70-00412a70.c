
uint __cdecl FUN_00412a70(uint param_1,WNDCLASSEXW *param_2)

{
  uint uVar1;
  ATOM AVar2;
  
  uVar1 = param_1;
  if ((param_1 != 0) && (param_2 != (WNDCLASSEXW *)0x0)) {
    AVar2 = RegisterClassExW(param_2);
    if (AVar2 != 0) {
      param_1 = (uint)AVar2;
      FUN_004115c0((void *)(uVar1 + 0x20),(undefined2 *)&param_1);
    }
    return (uint)AVar2;
  }
  return 0;
}

