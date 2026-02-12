
exception * __thiscall FUN_00431d4b(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_exception::vftable;
  return (exception *)this;
}

