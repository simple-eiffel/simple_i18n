/*
 * Code for class I18N_NLS_PICTURE_TOOLS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F43_929(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F43_930(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F43_931(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F43_932(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F43_933(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F43_934(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F43_935(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit43(void);
extern EIF_REFERENCE _A43_37_2();
extern EIF_REFERENCE _A43_38_2();
extern EIF_REFERENCE _A43_35_2();
extern EIF_REFERENCE _A43_36_2();

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

/* {I18N_NLS_PICTURE_TOOLS}.translate_date_format */
EIF_TYPED_VALUE F43_929 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "translate_date_format";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(14);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,ur2);
	RTLR(8,tr5);
	RTLR(9,tr6);
	RTLR(10,tr7);
	RTLR(11,tr8);
	RTLR(12,ur3);
	RTLR(13,Result);
	RTLIU(14);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 42, Current, 0, 1, 1003);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(42, Current, 1003);
	RTCC(arg1, 42, l_feature_name, 1, eif_new_type(278, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in_not_null", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000116, 0,0); /* Result */
	ur1 = RTCCL(arg1);
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
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,733,0xFF01,0xFFF9,1,227,259,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4= RTLNRW(typres0.id, 0, (EIF_POINTER) _A43_35_2, (EIF_POINTER)(0),919, tr2, 0, 1, -1, tr1, 1);
	}
	ur2 = RTCCL(tr4);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,227,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr5+1)->it_r = Current;
	RTAR(tr5,Current);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	{
		static EIF_TYPE_INDEX typarr0[] = {469,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr7 = RTLNSP2(typres0.id,0,ui4_2,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr7) = 1L;
		memset(tr7, 0, RT_SPECIAL_VISIBLE_SIZE(tr7));
	}
	*((EIF_INTEGER_32 *)tr7+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	tr6 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(3711, Dtype(tr7)))(tr7).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,524,0xFF01,0xFFF9,1,227,0xFF01,278,0xFF01,278,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr8= RTLNRW(typres0.id, 0, (EIF_POINTER) _A43_37_2, (EIF_POINTER)(0),921, tr6, 0, 1, -1, tr5, 1);
	}
	ur3 = RTCCL(tr8);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(918, dtype))(Current, ur1x, ur2x, ur3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {I18N_NLS_PICTURE_TOOLS}.translate_time_format */
EIF_TYPED_VALUE F43_930 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "translate_time_format";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(14);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,ur2);
	RTLR(8,tr5);
	RTLR(9,tr6);
	RTLR(10,tr7);
	RTLR(11,tr8);
	RTLR(12,ur3);
	RTLR(13,Result);
	RTLIU(14);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 42, Current, 0, 1, 997);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(42, Current, 997);
	RTCC(arg1, 42, l_feature_name, 1, eif_new_type(278, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in_not_null", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000116, 0,0); /* Result */
	ur1 = RTCCL(arg1);
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
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,733,0xFF01,0xFFF9,1,227,259,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4= RTLNRW(typres0.id, 0, (EIF_POINTER) _A43_36_2, (EIF_POINTER)(0),920, tr2, 0, 1, -1, tr1, 1);
	}
	ur2 = RTCCL(tr4);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,227,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr5+1)->it_r = Current;
	RTAR(tr5,Current);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	{
		static EIF_TYPE_INDEX typarr0[] = {469,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr7 = RTLNSP2(typres0.id,0,ui4_2,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr7) = 1L;
		memset(tr7, 0, RT_SPECIAL_VISIBLE_SIZE(tr7));
	}
	*((EIF_INTEGER_32 *)tr7+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	tr6 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(3711, Dtype(tr7)))(tr7).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,524,0xFF01,0xFFF9,1,227,0xFF01,278,0xFF01,278,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr8= RTLNRW(typres0.id, 0, (EIF_POINTER) _A43_38_2, (EIF_POINTER)(0),922, tr6, 0, 1, -1, tr5, 1);
	}
	ur3 = RTCCL(tr8);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(918, dtype))(Current, ur1x, ur2x, ur3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {I18N_NLS_PICTURE_TOOLS}.translate_picture_string */
EIF_TYPED_VALUE F43_931 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "translate_picture_string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,ur1);
	RTLR(6,Current);
	RTLR(7,tr2);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 42, Current, 2, 3, 998);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(42, Current, 998);
	RTCC(arg1, 42, l_feature_name, 1, eif_new_type(278, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,1,227,259,265,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg2, 42, l_feature_name, 2, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,524,0xFF01,0xFFF9,1,227,0xFF01,278,0xFF01,278,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg3, 42, l_feature_name, 3, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_code_character_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("process_code_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("input_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(0, 0xF8000116, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(278, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4846, Dtype(tr1)))(tr1);
	RTNHOOK(4,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(6);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(7);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5082, "count", arg1));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(8);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\01';
		tb4 = '\01';
		ui4_1 = loc1;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4848, "item", arg1))(arg1, ui4_1x)).it_c4);
		tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
		if (!(EIF_BOOLEAN)(tw1 == tw2)) {
			ui4_1 = loc1;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4848, "item", arg1))(arg1, ui4_1x)).it_c4);
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '/';
			tb4 = (EIF_BOOLEAN)(tw1 == tw2);
		}
		if (!tb4) {
			ui4_1 = loc1;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4848, "item", arg1))(arg1, ui4_1x)).it_c4);
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ':';
			tb3 = (EIF_BOOLEAN)(tw1 == tw2);
		}
		if (!tb3) {
			ui4_1 = loc1;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4848, "item", arg1))(arg1, ui4_1x)).it_c4);
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ',';
			tb2 = (EIF_BOOLEAN)(tw1 == tw2);
		}
		if (!tb2) {
			ui4_1 = loc1;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4848, "item", arg1))(arg1, ui4_1x)).it_c4);
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '.';
			tb1 = (EIF_BOOLEAN)(tw1 == tw2);
		}
		if (tb1) {
			RTHOOK(9);
			ui4_1 = loc1;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4848, "item", arg1))(arg1, ui4_1x)).it_c4);
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
		} else {
			RTHOOK(10);
			ui4_1 = loc1;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4848, "item", arg1))(arg1, ui4_1x)).it_c4);
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\'';
			if ((EIF_BOOLEAN)(tw1 == tw2)) {
				RTHOOK(11);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
				for (;;) {
					RTHOOK(12);
					tb1 = '\01';
					ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5082, "count", arg1));
					if (!(EIF_BOOLEAN) (loc2 > ti4_2)) {
						ui4_1 = loc2;
						tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4848, "item", arg1))(arg1, ui4_1x)).it_c4);
						tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\'';
						tb1 = (EIF_BOOLEAN)(tw1 == tw2);
					}
					if (tb1) break;
					RTHOOK(13);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					loc2++;
				}
				RTHOOK(14);
				tb2 = '\0';
				ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5082, "count", arg1));
				if ((EIF_BOOLEAN) (loc2 <= ti4_2)) {
					tb2 = (EIF_BOOLEAN)((EIF_INTEGER_32) (loc2 - loc1) == ((EIF_INTEGER_32) 1L));
				}
				if (tb2) {
					RTHOOK(15);
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\'';
					uw1 = tw1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
				} else {
					RTHOOK(16);
					ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
					ui4_2 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4925, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5108, "append", Result))(Result, ur1x);
				}
				RTHOOK(17);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) loc2;
			} else {
				RTHOOK(18);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,227,259,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLNTS(typres0.id, 2, 1);
				}
				ui4_1 = loc1;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4848, "item", arg1))(arg1, ui4_1x)).it_c4);
				((EIF_TYPED_VALUE *)tr1+1)->it_c4 = tw1;
				ur1 = RTCCL(tr1);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4839, "item", arg2))(arg2, ur1x)).it_b);
				if (tb2) {
					RTHOOK(19);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
					for (;;) {
						RTHOOK(20);
						tb2 = '\01';
						ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5082, "count", arg1));
						if (!(EIF_BOOLEAN) (loc2 > ti4_2)) {
							ui4_1 = loc2;
							tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4848, "item", arg1))(arg1, ui4_1x)).it_c4);
							ui4_1 = loc1;
							tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4848, "item", arg1))(arg1, ui4_1x)).it_c4);
							tb2 = (EIF_BOOLEAN)(tw1 != tw2);
						}
						if (tb2) break;
						RTHOOK(21);
						RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
						loc2++;
					}
					RTHOOK(22);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,227,0xFF01,278,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr1 = RTLNTS(typres0.id, 2, 0);
					}
					ui4_1 = loc1;
					ui4_2 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4925, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					((EIF_TYPED_VALUE *)tr1+1)->it_r = tr2;
					RTAR(tr1,tr2);
					ur1 = RTCCL(tr1);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4839, "item", arg3))(arg3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5108, "append", Result))(Result, ur1x);
					RTHOOK(23);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
				}
			}
		}
		RTHOOK(24);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uw1
#undef arg3
#undef arg2
#undef arg1
}

/* {I18N_NLS_PICTURE_TOOLS}.is_date_code_character */
EIF_TYPED_VALUE F43_932 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_date_code_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 42, Current, 0, 1, 999);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(42, Current, 999);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\01';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'd';
	if (!(EIF_BOOLEAN)(arg1 == tw1)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'M';
		tb3 = (EIF_BOOLEAN)(arg1 == tw1);
	}
	if (!tb3) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'y';
		tb2 = (EIF_BOOLEAN)(arg1 == tw1);
	}
	if (!tb2) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'g';
		tb1 = (EIF_BOOLEAN)(arg1 == tw1);
	}
	Result = (EIF_BOOLEAN) tb1;
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

/* {I18N_NLS_PICTURE_TOOLS}.is_time_code_character */
EIF_TYPED_VALUE F43_933 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_time_code_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 42, Current, 0, 1, 1000);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(42, Current, 1000);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\01';
	tb4 = '\01';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'm';
	if (!(EIF_BOOLEAN)(arg1 == tw1)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 's';
		tb4 = (EIF_BOOLEAN)(arg1 == tw1);
	}
	if (!tb4) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 't';
		tb3 = (EIF_BOOLEAN)(arg1 == tw1);
	}
	if (!tb3) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'h';
		tb2 = (EIF_BOOLEAN)(arg1 == tw1);
	}
	if (!tb2) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'H';
		tb1 = (EIF_BOOLEAN)(arg1 == tw1);
	}
	Result = (EIF_BOOLEAN) tb1;
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

/* {I18N_NLS_PICTURE_TOOLS}.process_date_code */
EIF_TYPED_VALUE F43_934 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "process_date_code";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 42, Current, 0, 1, 1001);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(42, Current, 1001);
	RTCC(arg1, 42, l_feature_name, 1, eif_new_type(278, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000116, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(278, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4846, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("d",1,100);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4890, "same_string_general", arg1))(arg1, ur1x)).it_b);
	if (tb1) {
		RTHOOK(4);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(202, 3))(Current)).it_c1);
		tw1 = (EIF_CHARACTER_32) tc1;
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
		RTHOOK(5);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(157, 3))(Current)).it_c1);
		tw1 = (EIF_CHARACTER_32) tc1;
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
	} else {
		RTHOOK(6);
		tr1 = RTMS_EX_H("dd",2,25700);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4890, "same_string_general", arg1))(arg1, ur1x)).it_b);
		if (tb1) {
			RTHOOK(7);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(202, 3))(Current)).it_c1);
			tw1 = (EIF_CHARACTER_32) tc1;
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
			RTHOOK(8);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(158, 3))(Current)).it_c1);
			tw1 = (EIF_CHARACTER_32) tc1;
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
		} else {
			RTHOOK(9);
			tr1 = RTMS_EX_H("ddd",3,6579300);
			ur1 = tr1;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4890, "same_string_general", arg1))(arg1, ur1x)).it_b);
			if (tb1) {
				RTHOOK(10);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(202, 3))(Current)).it_c1);
				tw1 = (EIF_CHARACTER_32) tc1;
				uw1 = tw1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
				RTHOOK(11);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(148, 3))(Current)).it_c1);
				tw1 = (EIF_CHARACTER_32) tc1;
				uw1 = tw1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
			} else {
				RTHOOK(12);
				tr1 = RTMS_EX_H("dddd",4,1684300900);
				ur1 = tr1;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4890, "same_string_general", arg1))(arg1, ur1x)).it_b);
				if (tb1) {
					RTHOOK(13);
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(202, 3))(Current)).it_c1);
					tw1 = (EIF_CHARACTER_32) tc1;
					uw1 = tw1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
					RTHOOK(14);
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(156, 3))(Current)).it_c1);
					tw1 = (EIF_CHARACTER_32) tc1;
					uw1 = tw1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
				} else {
					RTHOOK(15);
					tr1 = RTMS_EX_H("M",1,77);
					ur1 = tr1;
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4890, "same_string_general", arg1))(arg1, ur1x)).it_b);
					if (tb1) {
						RTHOOK(16);
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(202, 3))(Current)).it_c1);
						tw1 = (EIF_CHARACTER_32) tc1;
						uw1 = tw1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
						RTHOOK(17);
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(175, 3))(Current)).it_c1);
						tw1 = (EIF_CHARACTER_32) tc1;
						uw1 = tw1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
					} else {
						RTHOOK(18);
						tr1 = RTMS_EX_H("MM",2,19789);
						ur1 = tr1;
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4890, "same_string_general", arg1))(arg1, ur1x)).it_b);
						if (tb1) {
							RTHOOK(19);
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(202, 3))(Current)).it_c1);
							tw1 = (EIF_CHARACTER_32) tc1;
							uw1 = tw1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
							RTHOOK(20);
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(177, 3))(Current)).it_c1);
							tw1 = (EIF_CHARACTER_32) tc1;
							uw1 = tw1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
						} else {
							RTHOOK(21);
							tr1 = RTMS_EX_H("MMM",3,5066061);
							ur1 = tr1;
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4890, "same_string_general", arg1))(arg1, ur1x)).it_b);
							if (tb1) {
								RTHOOK(22);
								tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(202, 3))(Current)).it_c1);
								tw1 = (EIF_CHARACTER_32) tc1;
								uw1 = tw1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
								RTHOOK(23);
								tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(149, 3))(Current)).it_c1);
								tw1 = (EIF_CHARACTER_32) tc1;
								uw1 = tw1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
							} else {
								RTHOOK(24);
								tr1 = RTMS_EX_H("MMMM",4,1296911693);
								ur1 = tr1;
								tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4890, "same_string_general", arg1))(arg1, ur1x)).it_b);
								if (tb1) {
									RTHOOK(25);
									tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(202, 3))(Current)).it_c1);
									tw1 = (EIF_CHARACTER_32) tc1;
									uw1 = tw1;
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
									RTHOOK(26);
									tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(176, 3))(Current)).it_c1);
									tw1 = (EIF_CHARACTER_32) tc1;
									uw1 = tw1;
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
								} else {
									RTHOOK(27);
									tr1 = RTMS_EX_H("y",1,121);
									ur1 = tr1;
									tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4890, "same_string_general", arg1))(arg1, ur1x)).it_b);
									if (tb1) {
										RTHOOK(28);
										tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(202, 3))(Current)).it_c1);
										tw1 = (EIF_CHARACTER_32) tc1;
										uw1 = tw1;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
										RTHOOK(29);
										tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(190, 3))(Current)).it_c1);
										tw1 = (EIF_CHARACTER_32) tc1;
										uw1 = tw1;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
									} else {
										RTHOOK(30);
										tr1 = RTMS_EX_H("yy",2,31097);
										ur1 = tr1;
										tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4890, "same_string_general", arg1))(arg1, ur1x)).it_b);
										if (tb1) {
											RTHOOK(31);
											tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(202, 3))(Current)).it_c1);
											tw1 = (EIF_CHARACTER_32) tc1;
											uw1 = tw1;
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
											RTHOOK(32);
											tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(191, 3))(Current)).it_c1);
											tw1 = (EIF_CHARACTER_32) tc1;
											uw1 = tw1;
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
										} else {
											RTHOOK(33);
											tb1 = '\01';
											tr1 = RTMS_EX_H("yyy",3,7960953);
											ur1 = tr1;
											tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4890, "same_string_general", arg1))(arg1, ur1x)).it_b);
											if (!tb2) {
												tr1 = RTMS_EX_H("yyyy",4,2038004089);
												ur1 = tr1;
												tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4890, "same_string_general", arg1))(arg1, ur1x)).it_b);
												tb1 = tb2;
											}
											if (tb1) {
												RTHOOK(34);
												tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(202, 3))(Current)).it_c1);
												tw1 = (EIF_CHARACTER_32) tc1;
												uw1 = tw1;
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
												RTHOOK(35);
												tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(192, 3))(Current)).it_c1);
												tw1 = (EIF_CHARACTER_32) tc1;
												uw1 = tw1;
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
											} else {
												RTHOOK(36);
												tr1 = RTMS_EX_H("gg",2,26471);
												ur1 = tr1;
												tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4890, "same_string_general", arg1))(arg1, ur1x)).it_b);
												if (tb1) {
													RTHOOK(37);
													tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(202, 3))(Current)).it_c1);
													tw1 = (EIF_CHARACTER_32) tc1;
													uw1 = tw1;
													(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
													RTHOOK(38);
													tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(162, 3))(Current)).it_c1);
													tw1 = (EIF_CHARACTER_32) tc1;
													uw1 = tw1;
													(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(39);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(40);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef uw1
#undef arg1
}

/* {I18N_NLS_PICTURE_TOOLS}.process_time_code */
EIF_TYPED_VALUE F43_935 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "process_time_code";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 42, Current, 0, 1, 1002);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(42, Current, 1002);
	RTCC(arg1, 42, l_feature_name, 1, eif_new_type(278, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000116, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(278, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4846, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("h",1,104);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4890, "same_string_general", arg1))(arg1, ur1x)).it_b);
	if (tb1) {
		RTHOOK(4);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(202, 3))(Current)).it_c1);
		tw1 = (EIF_CHARACTER_32) tc1;
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
		RTHOOK(5);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(163, 3))(Current)).it_c1);
		tw1 = (EIF_CHARACTER_32) tc1;
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
	} else {
		RTHOOK(6);
		tr1 = RTMS_EX_H("hh",2,26728);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4890, "same_string_general", arg1))(arg1, ur1x)).it_b);
		if (tb1) {
			RTHOOK(7);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(202, 3))(Current)).it_c1);
			tw1 = (EIF_CHARACTER_32) tc1;
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
			RTHOOK(8);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(164, 3))(Current)).it_c1);
			tw1 = (EIF_CHARACTER_32) tc1;
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
		} else {
			RTHOOK(9);
			tr1 = RTMS_EX_H("H",1,72);
			ur1 = tr1;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4890, "same_string_general", arg1))(arg1, ur1x)).it_b);
			if (tb1) {
				RTHOOK(10);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(202, 3))(Current)).it_c1);
				tw1 = (EIF_CHARACTER_32) tc1;
				uw1 = tw1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
				RTHOOK(11);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(165, 3))(Current)).it_c1);
				tw1 = (EIF_CHARACTER_32) tc1;
				uw1 = tw1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
			} else {
				RTHOOK(12);
				tr1 = RTMS_EX_H("HH",2,18504);
				ur1 = tr1;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4890, "same_string_general", arg1))(arg1, ur1x)).it_b);
				if (tb1) {
					RTHOOK(13);
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(202, 3))(Current)).it_c1);
					tw1 = (EIF_CHARACTER_32) tc1;
					uw1 = tw1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
					RTHOOK(14);
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(166, 3))(Current)).it_c1);
					tw1 = (EIF_CHARACTER_32) tc1;
					uw1 = tw1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
				} else {
					RTHOOK(15);
					tr1 = RTMS_EX_H("m",1,109);
					ur1 = tr1;
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4890, "same_string_general", arg1))(arg1, ur1x)).it_b);
					if (tb1) {
						RTHOOK(16);
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(202, 3))(Current)).it_c1);
						tw1 = (EIF_CHARACTER_32) tc1;
						uw1 = tw1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
						RTHOOK(17);
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(173, 3))(Current)).it_c1);
						tw1 = (EIF_CHARACTER_32) tc1;
						uw1 = tw1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
					} else {
						RTHOOK(18);
						tr1 = RTMS_EX_H("mm",2,28013);
						ur1 = tr1;
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4890, "same_string_general", arg1))(arg1, ur1x)).it_b);
						if (tb1) {
							RTHOOK(19);
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(202, 3))(Current)).it_c1);
							tw1 = (EIF_CHARACTER_32) tc1;
							uw1 = tw1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
							RTHOOK(20);
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(174, 3))(Current)).it_c1);
							tw1 = (EIF_CHARACTER_32) tc1;
							uw1 = tw1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
						} else {
							RTHOOK(21);
							tr1 = RTMS_EX_H("s",1,115);
							ur1 = tr1;
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4890, "same_string_general", arg1))(arg1, ur1x)).it_b);
							if (tb1) {
								RTHOOK(22);
								tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(202, 3))(Current)).it_c1);
								tw1 = (EIF_CHARACTER_32) tc1;
								uw1 = tw1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
								RTHOOK(23);
								tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(179, 3))(Current)).it_c1);
								tw1 = (EIF_CHARACTER_32) tc1;
								uw1 = tw1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
							} else {
								RTHOOK(24);
								tr1 = RTMS_EX_H("ss",2,29555);
								ur1 = tr1;
								tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4890, "same_string_general", arg1))(arg1, ur1x)).it_b);
								if (tb1) {
									RTHOOK(25);
									tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(202, 3))(Current)).it_c1);
									tw1 = (EIF_CHARACTER_32) tc1;
									uw1 = tw1;
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
									RTHOOK(26);
									tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(180, 3))(Current)).it_c1);
									tw1 = (EIF_CHARACTER_32) tc1;
									uw1 = tw1;
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
								} else {
									RTHOOK(27);
									tr1 = RTMS_EX_H("t",1,116);
									ur1 = tr1;
									tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4890, "same_string_general", arg1))(arg1, ur1x)).it_b);
									if (tb1) {
										RTHOOK(28);
										tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(202, 3))(Current)).it_c1);
										tw1 = (EIF_CHARACTER_32) tc1;
										uw1 = tw1;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
										RTHOOK(29);
										tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(151, 3))(Current)).it_c1);
										tw1 = (EIF_CHARACTER_32) tc1;
										uw1 = tw1;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
									} else {
										RTHOOK(30);
										tr1 = RTMS_EX_H("tt",2,29812);
										ur1 = tr1;
										tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4890, "same_string_general", arg1))(arg1, ur1x)).it_b);
										if (tb1) {
											RTHOOK(31);
											tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(202, 3))(Current)).it_c1);
											tw1 = (EIF_CHARACTER_32) tc1;
											uw1 = tw1;
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
											RTHOOK(32);
											tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(152, 3))(Current)).it_c1);
											tw1 = (EIF_CHARACTER_32) tc1;
											uw1 = tw1;
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", Result))(Result, uw1x);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(33);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef uw1
#undef arg1
}

void EIF_Minit43 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
