
void __fastcall FUN_00420d70(undefined4 *param_1)

{
  *param_1 = CSingleInstance::vftable;
  if (param_1[1] != 0) {
    FUN_0041fb60(param_1[1]);
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[1])(1);
    }
  }
  param_1[1] = 0;
  return;
}

