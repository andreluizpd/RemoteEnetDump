
void __cdecl FUN_00406480(HMODULE param_1,ushort param_2)

{
  WCHAR WVar1;
  short sVar2;
  HRSRC pHVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  void *_Dst;
  WCHAR *pWVar6;
  short *psVar7;
  DWORD _Size;
  void *pvVar8;
  int iVar9;
  size_t _Size_00;
  undefined4 *puVar10;
  uint local_21c;
  ushort *local_214;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  _memset(local_210,0,0x104);
  GetModuleFileNameW(param_1,local_210,0x104);
  if ((LPCWSTR)(uint)param_2 == (LPCWSTR)0x0) {
LAB_0040665b:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  pHVar3 = FindResourceW(param_1,(LPCWSTR)(uint)param_2,(LPCWSTR)0xe);
  if (pHVar3 != (HRSRC)0x0) {
    pvVar4 = LoadResource(param_1,pHVar3);
    if (pvVar4 != (HGLOBAL)0x0) {
      pvVar5 = LockResource(pvVar4);
      if (pvVar5 != (LPVOID)0x0) {
        _Size_00 = (*(ushort *)((int)pvVar5 + 4) - 1) * 0x20 + 0x438;
        _Dst = _malloc(_Size_00);
        if (_Dst != (void *)0x0) {
          _memset(_Dst,0,_Size_00);
          *(uint *)((int)_Dst + 0x414) = (uint)*(ushort *)((int)pvVar5 + 4);
          pWVar6 = local_210;
          iVar9 = 0x20c - (int)pWVar6;
          do {
            WVar1 = *pWVar6;
            *(WCHAR *)((int)_Dst + iVar9 + (int)pWVar6) = WVar1;
            pWVar6 = pWVar6 + 1;
          } while (WVar1 != L'\0');
          psVar7 = &DAT_00448644;
          do {
            sVar2 = *psVar7;
            *(short *)((int)_Dst + -0x448640 + (int)psVar7) = sVar2;
            psVar7 = psVar7 + 1;
          } while (sVar2 != 0);
          local_21c = 0;
          if (*(int *)((int)_Dst + 0x414) != 0) {
            local_214 = (ushort *)((int)pvVar5 + 0x12);
            puVar10 = (undefined4 *)((int)_Dst + 0x424);
            do {
              pHVar3 = FindResourceW(param_1,(LPCWSTR)(uint)*local_214,(LPCWSTR)0x3);
              if (pHVar3 == (HRSRC)0x0) {
LAB_0040666e:
                FUN_00406430(_Dst);
                goto LAB_00406677;
              }
              pvVar4 = LoadResource(param_1,pHVar3);
              if (pvVar4 == (HGLOBAL)0x0) goto LAB_0040666e;
              _Size = SizeofResource(param_1,pHVar3);
              puVar10[1] = _Size;
              pvVar8 = _malloc(_Size);
              *puVar10 = pvVar8;
              if (pvVar8 == (void *)0x0) goto LAB_0040666e;
              pvVar5 = LockResource(pvVar4);
              FID_conflict__memcpy((void *)*puVar10,pvVar5,_Size);
              iVar9 = FUN_004063d0(puVar10 + -3);
              if (iVar9 == 0) goto LAB_0040666e;
              local_214 = local_214 + 7;
              local_21c = local_21c + 1;
              puVar10 = puVar10 + 8;
            } while (local_21c < *(uint *)((int)_Dst + 0x414));
          }
          goto LAB_0040665b;
        }
      }
    }
  }
LAB_00406677:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

