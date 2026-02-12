
uint * __thiscall FUN_00418230(void *this,uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = param_2;
  do {
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
  FUN_00415660((int *)this);
  FUN_004155a0((int *)this);
                    /* WARNING: Load size is inaccurate */
  FUN_00418110(param_1,*this,(uint *)*this,param_2,(int)puVar2 - ((int)param_2 + 1),param_3,1,0,'\0'
               ,(undefined4 *)((int)this + 4));
  return param_1;
}

