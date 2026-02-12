
undefined4 * __thiscall FUN_004278c0(void *this,ushort *param_1,int param_2)

{
  undefined4 local_c;
  undefined4 local_8;
  
  if (*param_1 < 0x76c) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return (undefined4 *)this;
  }
  FUN_004277d0(&local_c,(uint)*param_1,(uint)param_1[1],(uint)param_1[3],(uint)param_1[4],
               (uint)param_1[5],(uint)param_1[6],param_2);
  *(undefined4 *)((int)this + 4) = local_8;
  *(undefined4 *)this = local_c;
  return (undefined4 *)this;
}

