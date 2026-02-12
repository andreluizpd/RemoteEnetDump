
/* WARNING: Removing unreachable block (ram,0x00419ec2) */

int __thiscall FUN_00419eb0(void *this,uint param_1)

{
  if (param_1 < 0x101) {
    *(int *)this = (int)this + 4;
    return (int)this + 4;
  }
  FUN_00419260(this,param_1);
                    /* WARNING: Load size is inaccurate */
  return *this;
}

