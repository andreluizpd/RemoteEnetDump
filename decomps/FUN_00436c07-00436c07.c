
exception * __thiscall FUN_00436c07(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  std::exception::_Tidy((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_0042bc24(this);
  }
  return (exception *)this;
}

