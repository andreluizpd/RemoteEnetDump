
/* Library Function - Single Match
    void __cdecl FindHandler(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,unsigned char,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2010 Release */

void __cdecl
FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
           _s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8)

{
  uint uVar1;
  int *piVar2;
  _s_FuncInfo *p_Var3;
  HandlerType **ppHVar4;
  char cVar5;
  bool bVar6;
  _ptiddata p_Var7;
  int iVar8;
  _s_TryBlockMapEntry *p_Var9;
  EHRegistrationNode *unaff_EBX;
  _s_FuncInfo *p_Var10;
  _s_FuncInfo *p_Var11;
  HandlerType *pHVar12;
  int unaff_ESI;
  _s_FuncInfo *p_Var13;
  _s_TryBlockMapEntry *unaff_EDI;
  HandlerType **ppHVar14;
  EHRegistrationNode *pEVar15;
  undefined **in_stack_ffffffc8;
  uint local_24;
  HandlerType **local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  HandlerType *local_10;
  int local_c;
  char local_5;
  
  p_Var11 = param_5;
  local_5 = '\0';
  if (param_5->maxState < 0x81) {
    local_c = (int)(char)param_2[8];
  }
  else {
    local_c = *(int *)(param_2 + 8);
  }
  if ((local_c < -1) || (param_5->maxState <= local_c)) {
    _inconsistency();
  }
  p_Var13 = (_s_FuncInfo *)param_1;
  if (*(int *)param_1 != -0x1f928c9d) goto LAB_00431d07;
  p_Var10 = (_s_FuncInfo *)0x19930520;
  if (*(int *)(param_1 + 0x10) != 3) goto LAB_00431b57;
  iVar8 = *(int *)(param_1 + 0x14);
  if (((iVar8 != 0x19930520) && (iVar8 != 0x19930521)) && (iVar8 != 0x19930522)) goto LAB_00431b57;
  if (*(int *)(param_1 + 0x1c) != 0) goto LAB_00431b57;
  p_Var7 = __getptd();
  if (p_Var7->_curexception != (void *)0x0) {
    p_Var7 = __getptd();
    p_Var13 = (_s_FuncInfo *)p_Var7->_curexception;
    param_1 = (EHExceptionRecord *)p_Var13;
    p_Var7 = __getptd();
    param_3 = (_CONTEXT *)p_Var7->_curcontext;
    iVar8 = _ValidateRead(p_Var13,1);
    if (iVar8 == 0) {
      _inconsistency();
    }
    if ((((p_Var13->magicNumber_and_bbtFlags == 0xe06d7363) &&
         (p_Var13->pTryBlockMap == (TryBlockMapEntry *)0x3)) &&
        ((uVar1 = p_Var13->nIPMapEntries, uVar1 == 0x19930520 ||
         ((uVar1 == 0x19930521 || (uVar1 == 0x19930522)))))) &&
       (p_Var13->pESTypeList == (ESTypeList *)0x0)) {
      _inconsistency();
    }
    p_Var7 = __getptd();
    if (p_Var7->_curexcspec == (void *)0x0) goto LAB_00431b57;
    p_Var7 = __getptd();
    piVar2 = (int *)p_Var7->_curexcspec;
    p_Var7 = __getptd();
    iVar8 = 0;
    p_Var7->_curexcspec = (void *)0x0;
    cVar5 = FUN_004313f5((int)param_1);
    p_Var13 = (_s_FuncInfo *)param_1;
    if (cVar5 != '\0') goto LAB_00431b57;
    p_Var11 = (_s_FuncInfo *)0x0;
    if (0 < *piVar2) {
      do {
        bVar6 = type_info::operator==
                          (*(type_info **)((int)&p_Var11->maxState + piVar2[1]),
                           (type_info *)&std::bad_exception::RTTI_Type_Descriptor);
        if (bVar6) goto LAB_00431b1b;
        iVar8 = iVar8 + 1;
        p_Var11 = (_s_FuncInfo *)&p_Var11->pTryBlockMap;
      } while (iVar8 < *piVar2);
    }
    do {
      terminate();
LAB_00431b1b:
      ___DestructExceptionObject((int *)param_1);
      param_1 = (EHExceptionRecord *)s_bad_exception_0044dd70;
      std::exception::exception((exception *)&stack0xffffffc8,(char **)&param_1);
      in_stack_ffffffc8 = std::bad_exception::vftable;
      __CxxThrowException_8(&stack0xffffffc8,&DAT_00454634);
      p_Var10 = p_Var11;
      p_Var13 = (_s_FuncInfo *)param_1;
LAB_00431b57:
      p_Var11 = param_5;
      if (((p_Var13->magicNumber_and_bbtFlags == 0xe06d7363) &&
          (p_Var13->pTryBlockMap == (TryBlockMapEntry *)0x3)) &&
         ((p_Var3 = (_s_FuncInfo *)p_Var13->nIPMapEntries, p_Var3 == p_Var10 ||
          ((p_Var3 == (_s_FuncInfo *)0x19930521 || (p_Var3 == (_s_FuncInfo *)0x19930522)))))) {
        if ((param_5->nTryBlocks != 0) &&
           (p_Var9 = _GetRangeOfTrysToCheck(param_5,param_7,local_c,&local_14,&local_24),
           local_14 < local_24)) {
          ppHVar14 = &p_Var9->pHandlerArray;
          do {
            local_20 = ppHVar14;
            if ((((_s_TryBlockMapEntry *)(ppHVar14 + -4))->tryLow <= local_c) &&
               (local_c <= (int)ppHVar14[-3])) {
              local_10 = *ppHVar14;
              ppHVar4 = ppHVar14;
              for (local_1c = (int)ppHVar14[-1]; local_20 = ppHVar14, 0 < local_1c;
                  local_1c = local_1c + -1) {
                pHVar12 = p_Var13->pESTypeList[1].pTypeArray;
                local_20 = ppHVar4;
                for (local_18 = pHVar12->adjectives; 0 < (int)local_18; local_18 = local_18 - 1) {
                  pHVar12 = (HandlerType *)&pHVar12->pType;
                  p_Var11 = *(_s_FuncInfo **)pHVar12;
                  iVar8 = ___TypeMatch((byte *)local_10,(byte *)p_Var11,(uint *)p_Var13->pESTypeList
                                      );
                  if (iVar8 != 0) {
                    local_5 = '\x01';
                    CatchIt((EHExceptionRecord *)p_Var13,(EHRegistrationNode *)param_3,
                            (_CONTEXT *)param_4,param_5,p_Var11,(_s_HandlerType *)param_7,
                            (_s_CatchableType *)param_8,unaff_EDI,unaff_ESI,unaff_EBX,
                            (uchar)SUB41(in_stack_ffffffc8,0));
                    p_Var13 = (_s_FuncInfo *)param_1;
                    goto LAB_00431c53;
                  }
                }
                local_10 = local_10 + 1;
                ppHVar4 = local_20;
              }
            }
LAB_00431c53:
            local_14 = local_14 + 1;
            ppHVar14 = local_20 + 5;
            p_Var11 = param_5;
            local_20 = ppHVar14;
          } while (local_14 < local_24);
        }
        if (param_6 != '\0') {
          ___DestructExceptionObject((int *)p_Var13);
        }
        if ((((local_5 != '\0') || ((p_Var11->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930521))
            || (p_Var11->pESTypeList == (ESTypeList *)0x0)) ||
           (cVar5 = FUN_004313f5((int)p_Var13), cVar5 != '\0')) goto LAB_00431d33;
        __getptd();
        __getptd();
        p_Var7 = __getptd();
        p_Var7->_curexception = p_Var13;
        p_Var7 = __getptd();
        p_Var7->_curcontext = param_3;
        pEVar15 = param_8;
        if (param_8 == (EHRegistrationNode *)0x0) {
          pEVar15 = param_2;
        }
        _UnwindNestedFrames(pEVar15,(EHExceptionRecord *)p_Var13);
        p_Var13 = param_5;
        ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
        FUN_0043146b(p_Var13->pESTypeList);
        p_Var11 = param_5;
      }
LAB_00431d07:
      if (p_Var11->nTryBlocks == 0) goto LAB_00431d33;
    } while (param_6 != '\0');
    FindHandlerForForeignException
              ((EHExceptionRecord *)p_Var13,param_2,param_3,param_4,p_Var11,local_c,param_7,param_8)
    ;
LAB_00431d33:
    p_Var7 = __getptd();
    if (p_Var7->_curexcspec != (void *)0x0) {
      _inconsistency();
    }
  }
  return;
}

