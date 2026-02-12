
undefined4 __thiscall
FUN_0041cb30(void *this,undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined4 *param_4
            )

{
  char cVar1;
  ushort uVar2;
  WPARAM WVar3;
  int *piVar4;
  int iVar5;
  
  switch(param_2) {
  case 9:
    WVar3 = SendMessageW(*(HWND *)((int)this + 4),0x188,0,0);
    if (WVar3 != 0xffffffff) {
      piVar4 = (int *)SendMessageW(*(HWND *)((int)this + 4),0x199,WVar3,0);
      (**(code **)(*piVar4 + 0x2c))(6,0);
      *param_4 = 0;
      return 0;
    }
    break;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
    break;
  case 0x20:
  case 0x71:
    WVar3 = SendMessageW(*(HWND *)((int)this + 4),0x188,0,0);
    if (WVar3 != 0xffffffff) {
      piVar4 = (int *)SendMessageW(*(HWND *)((int)this + 4),0x199,WVar3,0);
      if (WVar3 != *(WPARAM *)((int)this + 0xa8)) {
        FUN_00410530(this,piVar4,WVar3);
      }
      iVar5 = (**(code **)(*piVar4 + 0x14))();
      if (iVar5 != 0) {
        (**(code **)(*piVar4 + 0x2c))(7,0);
        *param_4 = 0;
        return 0;
      }
    }
    break;
  case 0x43:
    uVar2 = GetKeyState(0x11);
    if ((((uVar2 & 0x8000) != 0) &&
        (WVar3 = SendMessageW(*(HWND *)((int)this + 4),0x188,0,0), WVar3 != 0xffffffff)) &&
       (piVar4 = (int *)FUN_0040fec0((void *)((int)this + 4),WVar3), piVar4 != (int *)0x0)) {
      cVar1 = (**(code **)(*piVar4 + 4))();
      if (cVar1 != '\x01') {
        FUN_0041c390(this,WVar3);
        *param_4 = 0;
        return 0;
      }
      MessageBeep(0xffffffff);
    }
    break;
  default:
    goto switchD_0041cb4f_default;
  }
switchD_0041cb4f_default:
  *param_4 = 0;
  return 0;
}

