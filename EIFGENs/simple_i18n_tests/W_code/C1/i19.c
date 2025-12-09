/*
 * Code for class I18N_PLURAL_TOOLS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F9_254(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F9_255(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F9_256(EIF_REFERENCE);
extern EIF_TYPED_VALUE F9_257(EIF_REFERENCE);
extern EIF_TYPED_VALUE F9_258(EIF_REFERENCE);
extern EIF_TYPED_VALUE F9_259(EIF_REFERENCE);
extern EIF_TYPED_VALUE F9_260(EIF_REFERENCE);
extern EIF_TYPED_VALUE F9_261(EIF_REFERENCE);
extern EIF_TYPED_VALUE F9_262(EIF_REFERENCE);
extern EIF_TYPED_VALUE F9_263(EIF_REFERENCE);
extern EIF_TYPED_VALUE F9_264(EIF_REFERENCE);
extern EIF_TYPED_VALUE F9_265(EIF_REFERENCE);
extern EIF_TYPED_VALUE F9_266(EIF_REFERENCE);
extern EIF_TYPED_VALUE F9_267(EIF_REFERENCE);
extern EIF_TYPED_VALUE F9_268(EIF_REFERENCE);
extern EIF_TYPED_VALUE F9_269(EIF_REFERENCE);
extern EIF_TYPED_VALUE F9_270(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F9_271(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F9_272(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F9_273(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F9_274(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F9_275(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F9_276(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F9_277(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F9_278(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F9_279(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F9_280(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit9(void);
extern EIF_REFERENCE _A9_50_2();
extern EIF_REFERENCE _A9_51_2();
extern EIF_REFERENCE _A9_52_2();
extern EIF_REFERENCE _A9_53_2();
extern EIF_REFERENCE _A9_54_2();
extern EIF_REFERENCE _A9_55_2();
extern EIF_REFERENCE _A9_56_2();
extern EIF_REFERENCE _A9_57_2();
extern EIF_REFERENCE _A9_58_2();

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {I18N_PLURAL_TOOLS}.valid_plural_form */
EIF_TYPED_VALUE F9_254 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_plural_form";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 8, Current, 0, 1, 251);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(8, Current, 251);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(256, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(257, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 <= ti4_1) && (EIF_BOOLEAN) (arg1 >= ti4_2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {I18N_PLURAL_TOOLS}.mo_header_to_plural_form */
EIF_TYPED_VALUE F9_255 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "mo_header_to_plural_form";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 8, Current, 0, 2, 252);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(8, Current, 252);
	RTCC(arg2, 8, l_feature_name, 2, eif_new_type(278, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("conditional_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case 1L:
			RTHOOK(3);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(259, dtype))(Current)).it_i4);
			Result = (EIF_INTEGER_32) ti4_1;
			break;
		case 2L:
			RTHOOK(4);
			tr1 = RTMS_EX_H("n != 1;",7,619025723);
			ur1 = tr1;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4890, "same_string_general", arg2))(arg2, ur1x)).it_b);
			if (tb1) {
				RTHOOK(5);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(260, dtype))(Current)).it_i4);
				Result = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(6);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(261, dtype))(Current)).it_i4);
				Result = (EIF_INTEGER_32) ti4_1;
			}
			break;
		case 3L:
			RTHOOK(7);
			tb1 = '\0';
			tb2 = '\0';
			tr1 = RTMS_EX_H("!=",2,8509);
			ur1 = tr1;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4889, "has_substring", arg2))(arg2, ur1x)).it_b);
			if (tb3) {
				tr1 = RTMS_EX_H("4",1,52);
				ur1 = tr1;
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4889, "has_substring", arg2))(arg2, ur1x)).it_b);
				tb2 = (EIF_BOOLEAN) !tb3;
			}
			if (tb2) {
				tr1 = RTMS_EX_H("20",2,12848);
				ur1 = tr1;
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4889, "has_substring", arg2))(arg2, ur1x)).it_b);
				tb1 = (EIF_BOOLEAN) !tb2;
			}
			if (tb1) {
				RTHOOK(8);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(262, dtype))(Current)).it_i4);
				Result = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(9);
				tb1 = '\0';
				tr1 = RTMS_EX_H("!=",2,8509);
				ur1 = tr1;
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4889, "has_substring", arg2))(arg2, ur1x)).it_b);
				if ((EIF_BOOLEAN) !tb2) {
					tr1 = RTMS_EX_H("4",1,52);
					ur1 = tr1;
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4889, "has_substring", arg2))(arg2, ur1x)).it_b);
					tb1 = (EIF_BOOLEAN) !tb2;
				}
				if (tb1) {
					RTHOOK(10);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(263, dtype))(Current)).it_i4);
					Result = (EIF_INTEGER_32) ti4_1;
				} else {
					RTHOOK(11);
					tb1 = '\0';
					tr1 = RTMS_EX_H("20",2,12848);
					ur1 = tr1;
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4889, "has_substring", arg2))(arg2, ur1x)).it_b);
					if (tb2) {
						tr1 = RTMS_EX_H("4",1,52);
						ur1 = tr1;
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4889, "has_substring", arg2))(arg2, ur1x)).it_b);
						tb1 = (EIF_BOOLEAN) !tb2;
					}
					if (tb1) {
						RTHOOK(12);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(264, dtype))(Current)).it_i4);
						Result = (EIF_INTEGER_32) ti4_1;
					} else {
						RTHOOK(13);
						tr1 = RTMS_EX_H("!=",2,8509);
						ur1 = tr1;
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4889, "has_substring", arg2))(arg2, ur1x)).it_b);
						if (tb1) {
							RTHOOK(14);
							RTDBGAL(0, 0x10000000, 1,0); /* Result */
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(265, dtype))(Current)).it_i4);
							Result = (EIF_INTEGER_32) ti4_1;
						} else {
							RTHOOK(15);
							RTDBGAL(0, 0x10000000, 1,0); /* Result */
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(266, dtype))(Current)).it_i4);
							Result = (EIF_INTEGER_32) ti4_1;
						}
					}
				}
			}
			break;
		case 4L:
			RTHOOK(16);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(267, dtype))(Current)).it_i4);
			Result = (EIF_INTEGER_32) ti4_1;
			break;
		default:
			RTHOOK(17);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(258, dtype))(Current)).it_i4);
			Result = (EIF_INTEGER_32) ti4_1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ur1
#undef arg2
#undef arg1
}

/* {I18N_PLURAL_TOOLS}.max_plural_form */
EIF_TYPED_VALUE F9_256 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
	return r;
}

/* {I18N_PLURAL_TOOLS}.min_plural_form */
EIF_TYPED_VALUE F9_257 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {I18N_PLURAL_TOOLS}.unknown_plural_form */
EIF_TYPED_VALUE F9_258 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {I18N_PLURAL_TOOLS}.one_plural_form */
EIF_TYPED_VALUE F9_259 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {I18N_PLURAL_TOOLS}.two_plural_forms_singular_one */
EIF_TYPED_VALUE F9_260 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {I18N_PLURAL_TOOLS}.two_plural_forms_singular_one_zero */
EIF_TYPED_VALUE F9_261 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	return r;
}

/* {I18N_PLURAL_TOOLS}.three_plural_forms_special_zero */
EIF_TYPED_VALUE F9_262 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {I18N_PLURAL_TOOLS}.three_plural_forms_special_one_two */
EIF_TYPED_VALUE F9_263 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	return r;
}

/* {I18N_PLURAL_TOOLS}.three_plural_forms_special_twelve_to_nineteen */
EIF_TYPED_VALUE F9_264 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	return r;
}

/* {I18N_PLURAL_TOOLS}.three_plural_forms_special_slavic */
EIF_TYPED_VALUE F9_265 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	return r;
}

/* {I18N_PLURAL_TOOLS}.three_plural_forms_special_polish */
EIF_TYPED_VALUE F9_266 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {I18N_PLURAL_TOOLS}.four_plural_forms_special_slovenian */
EIF_TYPED_VALUE F9_267 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
	return r;
}

/* {I18N_PLURAL_TOOLS}.min_plural_index */
EIF_TYPED_VALUE F9_268 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {I18N_PLURAL_TOOLS}.max_plural_index */
EIF_TYPED_VALUE F9_269 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {I18N_PLURAL_TOOLS}.get_reduction_agent */
EIF_TYPED_VALUE F9_270 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_reduction_agent";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 8, Current, 0, 1, 267);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(8, Current, 267);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 1L:
			RTHOOK(2);
			RTDBGAL(0, 0xF80003A0, 0,0); /* Result */
			{
				EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,227,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				typarr0[4] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNTS(typres0.id, 2, 0);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
			RTAR(tr1,Current);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			{
				static EIF_TYPE_INDEX typarr0[] = {469,232,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
				RT_SPECIAL_COUNT(tr3) = 1L;
				memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
			}
			*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(3711, Dtype(tr3)))(tr3).it_r;
			
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,928,0xFF01,0xFFF9,1,227,232,232,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr4= RTLNRW(typres0.id, 0, (EIF_POINTER) _A9_50_2, (EIF_POINTER)(0),272, tr2, 0, 1, -1, tr1, 1);
			}
			Result = (EIF_REFERENCE) RTCCL(tr4);
			break;
		case 2L:
			RTHOOK(3);
			RTDBGAL(0, 0xF80003A0, 0,0); /* Result */
			{
				EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,227,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				typarr0[4] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNTS(typres0.id, 2, 0);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
			RTAR(tr1,Current);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			{
				static EIF_TYPE_INDEX typarr0[] = {469,232,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
				RT_SPECIAL_COUNT(tr3) = 1L;
				memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
			}
			*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(3711, Dtype(tr3)))(tr3).it_r;
			
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,928,0xFF01,0xFFF9,1,227,232,232,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr4= RTLNRW(typres0.id, 0, (EIF_POINTER) _A9_51_2, (EIF_POINTER)(0),273, tr2, 0, 1, -1, tr1, 1);
			}
			Result = (EIF_REFERENCE) RTCCL(tr4);
			break;
		case 0L:
		case 3L:
			RTHOOK(4);
			RTDBGAL(0, 0xF80003A0, 0,0); /* Result */
			{
				EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,227,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				typarr0[4] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNTS(typres0.id, 2, 0);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
			RTAR(tr1,Current);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			{
				static EIF_TYPE_INDEX typarr0[] = {469,232,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
				RT_SPECIAL_COUNT(tr3) = 1L;
				memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
			}
			*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(3711, Dtype(tr3)))(tr3).it_r;
			
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,928,0xFF01,0xFFF9,1,227,232,232,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr4= RTLNRW(typres0.id, 0, (EIF_POINTER) _A9_52_2, (EIF_POINTER)(0),274, tr2, 0, 1, -1, tr1, 1);
			}
			Result = (EIF_REFERENCE) RTCCL(tr4);
			break;
		case 4L:
			RTHOOK(5);
			RTDBGAL(0, 0xF80003A0, 0,0); /* Result */
			{
				EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,227,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				typarr0[4] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNTS(typres0.id, 2, 0);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
			RTAR(tr1,Current);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			{
				static EIF_TYPE_INDEX typarr0[] = {469,232,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
				RT_SPECIAL_COUNT(tr3) = 1L;
				memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
			}
			*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(3711, Dtype(tr3)))(tr3).it_r;
			
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,928,0xFF01,0xFFF9,1,227,232,232,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr4= RTLNRW(typres0.id, 0, (EIF_POINTER) _A9_53_2, (EIF_POINTER)(0),275, tr2, 0, 1, -1, tr1, 1);
			}
			Result = (EIF_REFERENCE) RTCCL(tr4);
			break;
		case 5L:
			RTHOOK(6);
			RTDBGAL(0, 0xF80003A0, 0,0); /* Result */
			{
				EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,227,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				typarr0[4] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNTS(typres0.id, 2, 0);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
			RTAR(tr1,Current);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			{
				static EIF_TYPE_INDEX typarr0[] = {469,232,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
				RT_SPECIAL_COUNT(tr3) = 1L;
				memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
			}
			*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(3711, Dtype(tr3)))(tr3).it_r;
			
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,928,0xFF01,0xFFF9,1,227,232,232,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr4= RTLNRW(typres0.id, 0, (EIF_POINTER) _A9_54_2, (EIF_POINTER)(0),276, tr2, 0, 1, -1, tr1, 1);
			}
			Result = (EIF_REFERENCE) RTCCL(tr4);
			break;
		case 6L:
			RTHOOK(7);
			RTDBGAL(0, 0xF80003A0, 0,0); /* Result */
			{
				EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,227,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				typarr0[4] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNTS(typres0.id, 2, 0);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
			RTAR(tr1,Current);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			{
				static EIF_TYPE_INDEX typarr0[] = {469,232,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
				RT_SPECIAL_COUNT(tr3) = 1L;
				memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
			}
			*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(3711, Dtype(tr3)))(tr3).it_r;
			
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,928,0xFF01,0xFFF9,1,227,232,232,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr4= RTLNRW(typres0.id, 0, (EIF_POINTER) _A9_55_2, (EIF_POINTER)(0),277, tr2, 0, 1, -1, tr1, 1);
			}
			Result = (EIF_REFERENCE) RTCCL(tr4);
			break;
		case 7L:
			RTHOOK(8);
			RTDBGAL(0, 0xF80003A0, 0,0); /* Result */
			{
				EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,227,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				typarr0[4] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNTS(typres0.id, 2, 0);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
			RTAR(tr1,Current);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			{
				static EIF_TYPE_INDEX typarr0[] = {469,232,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
				RT_SPECIAL_COUNT(tr3) = 1L;
				memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
			}
			*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(3711, Dtype(tr3)))(tr3).it_r;
			
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,928,0xFF01,0xFFF9,1,227,232,232,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr4= RTLNRW(typres0.id, 0, (EIF_POINTER) _A9_56_2, (EIF_POINTER)(0),278, tr2, 0, 1, -1, tr1, 1);
			}
			Result = (EIF_REFERENCE) RTCCL(tr4);
			break;
		case 8L:
			RTHOOK(9);
			RTDBGAL(0, 0xF80003A0, 0,0); /* Result */
			{
				EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,227,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				typarr0[4] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNTS(typres0.id, 2, 0);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
			RTAR(tr1,Current);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			{
				static EIF_TYPE_INDEX typarr0[] = {469,232,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
				RT_SPECIAL_COUNT(tr3) = 1L;
				memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
			}
			*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(3711, Dtype(tr3)))(tr3).it_r;
			
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,928,0xFF01,0xFFF9,1,227,232,232,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr4= RTLNRW(typres0.id, 0, (EIF_POINTER) _A9_57_2, (EIF_POINTER)(0),279, tr2, 0, 1, -1, tr1, 1);
			}
			Result = (EIF_REFERENCE) RTCCL(tr4);
			break;
		case 9L:
			RTHOOK(10);
			RTDBGAL(0, 0xF80003A0, 0,0); /* Result */
			{
				EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,227,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				typarr0[4] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNTS(typres0.id, 2, 0);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
			RTAR(tr1,Current);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			{
				static EIF_TYPE_INDEX typarr0[] = {469,232,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
				RT_SPECIAL_COUNT(tr3) = 1L;
				memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
			}
			*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(3711, Dtype(tr3)))(tr3).it_r;
			
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,928,0xFF01,0xFFF9,1,227,232,232,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr4= RTLNRW(typres0.id, 0, (EIF_POINTER) _A9_58_2, (EIF_POINTER)(0),280, tr2, 0, 1, -1, tr1, 1);
			}
			Result = (EIF_REFERENCE) RTCCL(tr4);
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {I18N_PLURAL_TOOLS}.get_nplural */
EIF_TYPED_VALUE F9_271 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_nplural";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 8, Current, 0, 1, 268);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(8, Current, 268);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 3L))) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 1L))) {
			RTHOOK(4);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		} else {
			RTHOOK(5);
			if ((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 8L))) {
				RTHOOK(6);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
			} else {
				RTHOOK(7);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {I18N_PLURAL_TOOLS}.reduce_one_plural_form */
EIF_TYPED_VALUE F9_272 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "reduce_one_plural_form";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 8, Current, 0, 1, 269);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(8, Current, 269);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {I18N_PLURAL_TOOLS}.reduce_two_plural_forms_singular_one */
EIF_TYPED_VALUE F9_273 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "reduce_two_plural_forms_singular_one";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 8, Current, 0, 1, 270);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(8, Current, 270);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {I18N_PLURAL_TOOLS}.reduce_two_plural_forms_singular_one_zero */
EIF_TYPED_VALUE F9_274 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "reduce_two_plural_forms_singular_one_zero";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 8, Current, 0, 1, 271);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(8, Current, 271);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {I18N_PLURAL_TOOLS}.reduce_three_plural_forms_special_zero */
EIF_TYPED_VALUE F9_275 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "reduce_three_plural_forms_special_zero";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 8, Current, 0, 1, 272);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(8, Current, 272);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 10L)) == ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 100L)) != ((EIF_INTEGER_32) 11L)))) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(arg1 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(4);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		} else {
			RTHOOK(5);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {I18N_PLURAL_TOOLS}.reduce_three_plural_forms_special_one_two */
EIF_TYPED_VALUE F9_276 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "reduce_three_plural_forms_special_one_two";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 8, Current, 0, 1, 273);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(8, Current, 273);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 2L))) {
			RTHOOK(4);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		} else {
			RTHOOK(5);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {I18N_PLURAL_TOOLS}.reduce_three_plural_forms_special_twelve_to_nineteen */
EIF_TYPED_VALUE F9_277 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "reduce_three_plural_forms_special_twelve_to_nineteen";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 8, Current, 0, 1, 274);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(8, Current, 274);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 10L)) == ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 100L)) != ((EIF_INTEGER_32) 11L)))) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 10L)) >= ((EIF_INTEGER_32) 2L)) && (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 100L)) < ((EIF_INTEGER_32) 10L)) || (EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 100L)) >= ((EIF_INTEGER_32) 20L))))) {
			RTHOOK(4);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		} else {
			RTHOOK(5);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {I18N_PLURAL_TOOLS}.reduce_three_plural_forms_special_slavic */
EIF_TYPED_VALUE F9_278 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "reduce_three_plural_forms_special_slavic";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 8, Current, 0, 1, 275);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(8, Current, 275);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 10L)) == ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 100L)) != ((EIF_INTEGER_32) 11L)))) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 10L)) >= ((EIF_INTEGER_32) 2L)) && (EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 10L)) <= ((EIF_INTEGER_32) 4L))) && (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 100L)) < ((EIF_INTEGER_32) 10L)) || (EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 100L)) >= ((EIF_INTEGER_32) 20L))))) {
			RTHOOK(4);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		} else {
			RTHOOK(5);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {I18N_PLURAL_TOOLS}.reduce_three_plural_forms_special_polish */
EIF_TYPED_VALUE F9_279 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "reduce_three_plural_forms_special_polish";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 8, Current, 0, 1, 276);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(8, Current, 276);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 10L)) >= ((EIF_INTEGER_32) 2L)) && (EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 10L)) <= ((EIF_INTEGER_32) 4L))) && (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 100L)) < ((EIF_INTEGER_32) 10L)) || (EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 100L)) >= ((EIF_INTEGER_32) 20L))))) {
			RTHOOK(4);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		} else {
			RTHOOK(5);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {I18N_PLURAL_TOOLS}.reduce_four_plural_forms_special_slovenian */
EIF_TYPED_VALUE F9_280 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "reduce_four_plural_forms_special_slovenian";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 8, Current, 0, 1, 277);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(8, Current, 277);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 100L)) == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 100L)) == ((EIF_INTEGER_32) 2L))) {
			RTHOOK(4);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		} else {
			RTHOOK(5);
			if ((EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 100L)) == ((EIF_INTEGER_32) 3L))) {
				RTHOOK(6);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			} else {
				RTHOOK(7);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

void EIF_Minit9 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
