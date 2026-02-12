
void __thiscall FUN_00414d00(void *this,int *param_1,int param_2)

{
  void *_Src;
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  _Src = *this;
  if (_Src != (void *)0x0) {
    FID_conflict__memcpy((void *)((int)_Src - *(int *)((int)this + 4)),_Src,*param_1 - (int)_Src);
  }
  *param_1 = *param_1 + param_2;
  iVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  *(int *)this = iVar1;
  return;
}

