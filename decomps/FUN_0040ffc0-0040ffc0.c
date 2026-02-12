
void __thiscall FUN_0040ffc0(void *this,WPARAM param_1,int *param_2)

{
  SendMessageW(*(HWND *)((int)this + 4),0x198,param_1,(LPARAM)param_2);
  if ((*(byte *)((int)this + 0xac) & 1) != 0) {
    *param_2 = *param_2 + 0x10;
  }
  *param_2 = *param_2 + *(int *)((int)this + 0xc4) + 1;
  return;
}

