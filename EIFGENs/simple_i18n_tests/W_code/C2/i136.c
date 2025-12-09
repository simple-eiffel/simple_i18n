/*
 * Code for class I18N_NLS_GETLOCALEINFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F36_867(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F36_868(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F36_869(EIF_REFERENCE);
extern EIF_TYPED_VALUE F36_870(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F36_871(EIF_REFERENCE);
extern EIF_TYPED_VALUE F36_872(EIF_REFERENCE);
extern EIF_TYPED_VALUE F36_873(EIF_REFERENCE);
extern void EIF_Minit36(void);

#ifdef __cplusplus
}
#endif

#include <windows.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F36_870
static EIF_INTEGER_32 inline_F36_870 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	return GetLocaleInfo((LCID) arg1, (LCTYPE) arg2, (LPTSTR) arg3, (DWORD) arg4);
	;
}
#define INLINE_F36_870
#endif
#ifndef INLINE_F36_872
static EIF_INTEGER_32 inline_F36_872 (void)
{
	return LOCALE_RETURN_NUMBER;
	;
}
#define INLINE_F36_872
#endif
#ifndef INLINE_F36_873
static EIF_INTEGER_32 inline_F36_873 (void)
{
	return LOCALE_NOUSEROVERRIDE;
	;
}
#define INLINE_F36_873
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {I18N_NLS_GETLOCALEINFO}.extract_locale_integer */
EIF_TYPED_VALUE F36_867 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "extract_locale_integer";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 35, Current, 2, 2, 942);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(35, Current, 942);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(859, dtype));
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(862, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		ti4_2 = eif_bit_or(arg2,ui4_1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(863, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		ti4_3 = eif_bit_or(ti4_2,ui4_1);
		loc2 = (EIF_INTEGER_32) ti4_3;
	} else {
		RTHOOK(3);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(862, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		ti4_2 = eif_bit_or(arg2,ui4_1);
		loc2 = (EIF_INTEGER_32) ti4_2;
	}
	RTHOOK(4);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ui4_1 = arg1;
	ui4_2 = loc2;
	up1 = (EIF_INTEGER_32 *) &(Result);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2139, 164))(Current)).it_i4);
	ui4_3 = (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L));
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(860, dtype))(Current, ui4_1x, ui4_2x, up1x, ui4_3x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_CHECK) {
		RTHOOK(5);
		RTCT("l_result /= 0", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg2
#undef arg1
}

/* {I18N_NLS_GETLOCALEINFO}.extract_locale_string */
EIF_TYPED_VALUE F36_868 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "extract_locale_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	struct eif_ex_24 sloc4;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) sloc4.data;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	memset (&sloc4.overhead, 0, OVERHEAD + 0);
	sloc4.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc4.overhead, eif_new_type(24, 0x00).id);
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc4);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 35, Current, 4, 2, 936);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(35, Current, 936);
	RTIV(Current, RTAL);
	wstdinit(loc4,loc4);
	RTLXI(loc4);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(859, dtype));
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(863, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		ti4_2 = eif_bit_or(arg2,ui4_1);
		loc3 = (EIF_INTEGER_32) ti4_2;
	} else {
		RTHOOK(3);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) arg2;
	}
	RTHOOK(4);
	RTDBGAL(1, 0xF80000B7, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(861, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ui4_1 = arg1;
	ui4_2 = loc3;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	up1 = tp1;
	ui4_3 = ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(860, dtype))(Current, ui4_1x, ui4_2x, up1x, ui4_3x)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(2586, "count", loc1));
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 * ((EIF_INTEGER_32) 2L)) > ti4_1)) {
			RTHOOK(8);
			ui4_1 = (EIF_INTEGER_32) (loc2 * ((EIF_INTEGER_32) 2L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2667, "resize", loc1))(loc1, ui4_1x);
		}
		RTHOOK(9);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ui4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(863, dtype))(Current)).it_i4);
		ui4_2 = ti4_1;
		ti4_2 = eif_bit_or(loc3,ui4_2);
		ui4_2 = ti4_2;
		tp1 = *(EIF_POINTER *)(loc1 + RTVA(2585, "item", loc1));
		up1 = tp1;
		ui4_3 = loc2;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(860, dtype))(Current, ui4_1x, ui4_2x, up1x, ui4_3x)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_1;
	}
	RTHOOK(10);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
		if (RTAL & CK_CHECK) {
			RTHOOK(11);
			RTCT("False", EX_CHECK);
				RTCF;
		}
		RTHOOK(12);
		RTDBGAL(0, 0xF8000116, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(278, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4846, Dtype(tr1)))(tr1);
		RTNHOOK(12,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(13);
		RTDBGAL(0, 0xF8000116, 0,0); /* Result */
		ur1 = RTCCL(loc1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(766, "utf_16_0_pointer_to_string_32", loc4))(loc4, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg2
#undef arg1
}

/* {I18N_NLS_GETLOCALEINFO}.is_overriding_current_user_setting */
EIF_TYPED_VALUE F36_869 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(859,Dtype(Current)));
	return r;
}


/* {I18N_NLS_GETLOCALEINFO}.c_get_locale_info */
EIF_TYPED_VALUE F36_870 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_get_locale_info";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
#define arg4 arg4x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 35, Current, 0, 4, 938);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(35, Current, 938);
	RTIV(Current, RTAL);
	Result = inline_F36_870 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_POINTER) arg3, (EIF_INTEGER_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {I18N_NLS_GETLOCALEINFO}.c_ptr */
RTOID (F36_871)
EIF_TYPED_VALUE F36_871 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_ptr";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F36_871);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 35, Current, 0, 0, 939);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(35, Current, 939);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF80000B7, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(183, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2579, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("at_least_2", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(2586, "count", Result));
		if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("multiple_of_two", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(2586, "count", Result));
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef Result
}

/* {I18N_NLS_GETLOCALEINFO}.locale_return_number */
EIF_TYPED_VALUE F36_872 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "locale_return_number";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 35, Current, 0, 0, 940);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(35, Current, 940);
	RTIV(Current, RTAL);
	Result = inline_F36_872 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {I18N_NLS_GETLOCALEINFO}.locale_no_user_override */
EIF_TYPED_VALUE F36_873 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "locale_no_user_override";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 35, Current, 0, 0, 941);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(35, Current, 941);
	RTIV(Current, RTAL);
	Result = inline_F36_873 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

void EIF_Minit36 (void)
{
	GTCX
	RTOTS (871,F36_871)
}


#ifdef __cplusplus
}
#endif
