/*
 * Code for class I18N_NLS_LCID_TOOLS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F37_874(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F37_875(EIF_REFERENCE);
extern EIF_TYPED_VALUE F37_876(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F37_877(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F37_878(EIF_REFERENCE);
extern EIF_TYPED_VALUE F37_879(EIF_REFERENCE);
extern void F37_880(EIF_REFERENCE);
extern EIF_TYPED_VALUE F37_881(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F37_7182(EIF_REFERENCE, int);
extern void EIF_Minit37(void);

#ifdef __cplusplus
}
#endif

#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {I18N_NLS_LCID_TOOLS}.is_supported_locale */
EIF_TYPED_VALUE F37_874 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_supported_locale";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 36, Current, 0, 1, 943);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(36, Current, 943);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ui4_1 = arg1;
	ui4_2 = ((EIF_INTEGER_32) 2L);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(871, dtype))(Current, ui4_1x, ui4_2x)).it_b);
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
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {I18N_NLS_LCID_TOOLS}.supported_locales */
EIF_TYPED_VALUE F37_875 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "supported_locales";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 36, Current, 1, 0, 944);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(36, Current, 944);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800017D, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,381,0xFF01,281,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(3961, "count", tr2));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3827, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,2);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3133, "new_cursor", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr2);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3119, "after", loc1))(loc1)).it_b);
		if (tb1) break;
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3118, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_1 = eif_integer_32_item(RTCW(tr1),2);
		ui4_1 = ti4_1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(864, dtype))(Current, ui4_1x)).it_b);
		if (tb2) {
			RTHOOK(4);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3118, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ti4_1 = eif_integer_32_item(RTCW(tr1),2);
			ui4_1 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(866, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3259, "extend", Result))(Result, ur1x);
		}
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3120, "forth", loc1))(loc1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
}

/* {I18N_NLS_LCID_TOOLS}.lcid_to_locale_id */
EIF_TYPED_VALUE F37_876 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "lcid_to_locale_id";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(10);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,loc3);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLR(8,ur3);
	RTLR(9,Result);
	RTLIU(10);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 36, Current, 4, 1, 945);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(36, Current, 945);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000116, 0, 0); /* loc1 */
	ui4_1 = arg1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(856, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(138, "locale_siso639langname", tr1))(tr1)).it_i4);
	ui4_2 = ti4_1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(858, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000116, 0, 0); /* loc2 */
	ui4_1 = arg1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(856, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(139, "locale_siso3166ctryname", tr1))(tr1)).it_i4);
	ui4_2 = ti4_1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(858, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(869, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(3575, "upper", tr1));
		if ((EIF_BOOLEAN) (loc4 > ti4_1)) break;
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(869, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ui4_1 = loc4;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3266, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ti4_2 = eif_integer_32_item(RTCW(tr2),2);
		if ((EIF_BOOLEAN)(ti4_2 == arg1)) {
			RTHOOK(6);
			RTDBGAL(3, 0xF8000113, 0, 0); /* loc3 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(869, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
			ui4_1 = loc4;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3266, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tr1 = eif_boxed_item(tr2,1);
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(7);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(869, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,1);
			ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(3575, "upper", tr1));
			loc4 = (EIF_INTEGER_32) ti4_2;
		}
		RTHOOK(8);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4++;
	}
	RTHOOK(9);
	RTDBGAL(0, 0xF8000119, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(281, 0x01).id);
	ur1 = RTCCL(loc1);
	ur2 = RTCCL(loc2);
	ur3 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5150, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(9,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {I18N_NLS_LCID_TOOLS}.locale_id_to_lcid */
EIF_TYPED_VALUE F37_877 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "locale_id_to_lcid";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLR(7,Current);
	RTLIU(8);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 36, Current, 3, 1, 946);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(36, Current, 946);
	RTCC(arg1, 36, l_feature_name, 1, eif_new_type(281, 0x01), 0x01);
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
	RTDBGAL(1, 0xF8000116, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(278, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5154, "language", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5054, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5156, "script", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		tr1 = RTMS_EX_H("euro",4,1702195823);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4904, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc2))(loc2, ur1x)).it_b);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(4);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '-';
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", loc1))(loc1, uw1x);
		RTHOOK(5);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5108, "append", loc1))(loc1, ur1x);
	}
	RTHOOK(6);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '-';
	uw1 = tw1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "append_character", loc1))(loc1, uw1x);
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5155, "region", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5108, "append", loc1))(loc1, ur1x);
	RTHOOK(8);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(8,1);
	ur1 = RTCCL(loc1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3876, "item", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	loc3 = RTCCL(tr2);
	if (EIF_TEST(loc3)) {
		RTHOOK(9);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ti4_1 = eif_integer_32_item(loc3,2);
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef uw1
#undef arg1
}

/* {I18N_NLS_LCID_TOOLS}.locales */
EIF_TYPED_VALUE F37_878 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(868,Dtype(Current)));
	return r;
}


/* {I18N_NLS_LCID_TOOLS}.scripts */
EIF_TYPED_VALUE F37_879 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(869,Dtype(Current)));
	return r;
}


/* {I18N_NLS_LCID_TOOLS}.initialize_locales */
void F37_880 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "initialize_locales";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,tr4);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 36, Current, 0, 0, 949);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(36, Current, 949);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 868, 0xF800029B, 0); /* locales */
	tr1 = RTLNSMART(RTWCT(868, dtype, dftype).id);
	ui4_1 = ((EIF_INTEGER_32) 250L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3973, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(868, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Afrikaans (South Africa)",24,749520169);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1078L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("af-ZA",5,1714993217);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Amharic (Ethiopia)",18,2078104617);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1118L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("am-ET",5,1832428372);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Arabic (U.A.E.)",15,272316201);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 14337L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ar-AE",5,1916313413);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Arabic (Bahrain)",16,1439444521);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 15361L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ar-BH",5,1916313672);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Arabic (Algeria)",16,816399401);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 5121L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ar-DZ",5,1916314202);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(7,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Arabic (Egypt)",14,1777930793);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 3073L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ar-EG",5,1916314439);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(8);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(8,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Arabic (Iraq)",13,1280469545);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2049L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ar-IQ",5,1916315473);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(9);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(9,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Arabic (Jordan)",15,66787113);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 11265L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ar-JO",5,1916315727);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(10);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(10,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Arabic (Kuwait)",15,532132649);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 13313L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ar-KW",5,1916315991);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(11);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(11,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Arabic (Lebanon)",16,1514104617);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 12289L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ar-LB",5,1916316226);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(12);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(12,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Arabic (Libya)",14,1406417705);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 4097L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ar-LY",5,1916316249);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(13);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(13,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Arabic (Morocco)",16,2098769449);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 6145L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ar-MA",5,1916316481);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(14);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(14,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Arabic (Oman)",13,1196628777);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 8193L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ar-OM",5,1916317005);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(15);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(15,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Arabic (Qatar)",14,1716608041);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 16385L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ar-QA",5,1916317505);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(16);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(16,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Arabic (Saudi Arabia)",21,481882153);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1025L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ar-SA",5,1916318017);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(17);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(17,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Arabic (Syria)",14,1687690025);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 10241L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ar-SY",5,1916318041);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(18);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(18,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Arabic (Tunisia)",16,1086236201);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 7169L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ar-TN",5,1916318286);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(19);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(19,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Arabic (Yemen)",14,1615188009);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 9217L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ar-YE",5,1916319557);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(20);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(20,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Mapudungun (Chile)",18,545229609);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1146L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("arn-CL",6,2040045388);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(21);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(21,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Assamese (India)",16,846797353);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1101L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("as-IN",5,1933092686);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(22);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(22,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Azeri (Azerbaijan, Cyrillic)",28,269387049);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2092L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("az-Cyrl-AZ",10,102232922);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(23);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(23,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Azeri (Azerbaijan, Latin)",25,2003731241);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1068L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("az-Latn-AZ",10,323505498);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(24);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(24,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Bashkir (Russia)",16,1265557801);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1133L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ba-RU",5,1631112789);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(25);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(25,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Belarusian (Belarus)",20,1019865897);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1059L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("be-BY",5,1698217561);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(26);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(26,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Bulgarian (Bulgaria)",20,878996009);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1026L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("bg-BG",5,1731771975);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(27);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(27,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Bengali (India)",15,137070377);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1093L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("bn-IN",5,1849214286);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(28);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(28,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Tibetan (Bhutan)",16,1831306537);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2129L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("bo-BT",5,1865989716);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(29);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(29,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Tibetan (PRC)",13,873629225);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1105L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("bo-CN",5,1865989966);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(30);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(30,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Breton (France)",15,1803948329);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1150L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("br-FR",5,1916322386);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(31);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(31,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Bosnian (Bosnia and Herzegovina, Cyrillic)",42,1190384169);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 8218L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("bs-Cyrl-BA",10,1903971905);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(32);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(32,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Bosnian (Bosnia and Herzegovina, Latin)",39,960691241);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 5146L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("bs-Latn-BA",10,2125244481);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(33);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(33,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Catalan (Catalan)",17,1020149033);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1027L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ca-ES",5,1631117139);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(34);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(34,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Corsican (France)",17,809654057);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("co-FR",5,1865998418);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(35);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(35,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Czech (Czech Republic)",22,1215067433);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1029L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("cs-CZ",5,1933106522);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(36);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(36,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Welsh (United Kingdom)",22,307787561);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1106L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("cy-GB",5,2033770818);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(37);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(37,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Danish (Denmark)",16,1870832169);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1030L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("da-DK",5,1631124555);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(38);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(38,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("German (Austria)",16,793637161);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 3079L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("de-AT",5,1698232660);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(39);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(39,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("German (Switzerland)",20,1371086377);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2055L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("de-CH",5,1698233160);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(40);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(40,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("German (Germany)",16,1044976425);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1031L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("de-DE",5,1698233413);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(41);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(41,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("German (Liechtenstein)",22,1066274601);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 5127L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("de-LI",5,1698235465);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(42);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(42,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("German (Luxembourg)",19,2141997865);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 4103L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("de-LU",5,1698235477);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(43);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(43,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Lower Sorbian (Germany)",23,2134610473);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2094L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("dsb-DE",6,1844624965);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(44);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(44,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Divehi (Maldives)",17,1691618857);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1125L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("dv-MV",5,1983448406);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(45);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(45,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Greek (Greece)",14,185079593);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1032L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("el-GR",5,1815682386);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(46);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(46,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("English (Caribbean)",19,1769065513);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 9225L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("en-029",6,957552185);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(47);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(47,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("English (Australia)",19,2058125353);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 3081L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("en-AU",5,1849235285);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(48);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(48,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("English (Belize)",16,367340073);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 10249L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("en-BZ",5,1849235546);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(49);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(49,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("English (Canada)",16,727147049);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 4105L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("en-CA",5,1849235777);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(50);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(50,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("English (United Kingdom)",24,906999849);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2057L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("en-GB",5,1849236802);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(51);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(51,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("English (Ireland)",17,1367149609);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 6153L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("en-IE",5,1849237317);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(52);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(52,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("English (India)",15,1852361769);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 16393L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("en-IN",5,1849237326);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(53);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(53,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("English (Jamaica)",17,1550059305);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 8201L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("en-JM",5,1849237581);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(54);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(54,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("English (Malaysia)",18,1621625129);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 17417L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("en-MY",5,1849238361);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(55);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(55,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("English (New Zealand)",21,1113800745);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 5129L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("en-NZ",5,1849238618);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(56);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(56,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("English (Philippines)",21,1118287145);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 13321L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("en-PH",5,1849239112);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(57);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(57,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("English (Singapore)",19,327087657);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 18441L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("en-SG",5,1849239879);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(58);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(58,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("English (Trinidad and Tobago)",29,2090868521);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 11273L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("en-TT",5,1849240148);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(59);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(59,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("English (United States)",23,16755497);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1033L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("en-US",5,1849240403);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(60);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(60,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("English (South Africa)",22,337123369);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 7177L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("en-ZA",5,1849241665);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(61);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(61,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("English (Zimbabwe)",18,463563817);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 12297L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("en-ZW",5,1849241687);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(62);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(62,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Spanish (Argentina)",19,1360595497);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 11274L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("es-AR",5,1933121362);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(63);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(63,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Spanish (Bolivia)",17,1735569193);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 16394L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("es-BO",5,1933121615);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(64);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(64,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Spanish (Chile)",15,386498857);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 13322L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("es-CL",5,1933121868);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(65);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(65,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Spanish (Colombia)",18,1878680873);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 9226L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("es-CO",5,1933121871);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(66);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(66,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Spanish (Costa Rica)",20,594637097);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 5130L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("es-CR",5,1933121874);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(67);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(67,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Spanish (Dominican Republic)",28,359238185);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 7178L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("es-DO",5,1933122127);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(68);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(68,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Spanish (Ecuador)",17,1854943017);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 12298L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("es-EC",5,1933122371);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(69);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(69,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Spanish (Spain)",15,283605545);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 3082L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("es-ES",5,1933122387);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(70);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(70,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Spanish (Guatemala)",19,746705449);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 4106L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("es-GT",5,1933122900);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(71);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(71,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Spanish (Honduras)",18,1279096361);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 18442L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("es-HN",5,1933123150);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(72);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(72,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Spanish (Mexico)",16,841613609);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2058L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("es-MX",5,1933124440);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(73);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(73,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Spanish (Nicaragua)",19,1810433577);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 19466L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("es-NI",5,1933124681);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(74);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(74,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Spanish (Panama)",16,62576169);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 6154L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("es-PA",5,1933125185);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(75);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(75,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Spanish (Peru)",14,253859369);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 10250L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("es-PE",5,1933125189);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(76);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(76,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Spanish (Puerto Rico)",21,1382049833);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 20490L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("es-PR",5,1933125202);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(77);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(77,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Spanish (Paraguay)",18,1657843497);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 15370L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("es-PY",5,1933125209);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(78);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(78,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Spanish (El Salvador)",21,1883838761);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 17418L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("es-SV",5,1933125974);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(79);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(79,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Spanish (United States)",23,1338851625);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 21514L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("es-US",5,1933126483);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(80);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(80,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Spanish (Uruguay)",17,1102800425);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 14346L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("es-UY",5,1933126489);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(81);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(81,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Spanish (Venezuela)",19,1961648425);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 8202L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("es-VE",5,1933126725);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(82);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(82,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Estonian (Estonia)",18,227345449);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1061L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("et-EE",5,1949899589);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(83);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(83,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Basque (Basque)",15,1429796905);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1069L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("eu-ES",5,1966676819);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(84);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(84,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Persian (Iran)",14,306761769);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1065L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("fa-IR",5,1631141202);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(85);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(85,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Finnish (Finland)",17,2101263145);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1035L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("fi-FI",5,1765358153);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(86);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(86,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Filipino (Philippines)",22,416832297);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1124L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("fil-PH",6,2016255560);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(87);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(87,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Faroese (Faroe Islands)",23,275185961);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1080L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("fo-FO",5,1866021455);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(88);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(88,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("French (Belgium)",16,147886633);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2060L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("fr-BE",5,1916352069);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(89);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(89,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("French (Canada)",15,1561063465);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 3084L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("fr-CA",5,1916352321);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(90);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(90,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("French (Switzerland)",20,496871721);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 4108L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("fr-CH",5,1916352328);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(91);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(91,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("French (France)",15,1174895913);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1036L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("fr-FR",5,1916353106);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(92);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(92,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("French (Luxembourg)",19,1643655977);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 5132L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("fr-LU",5,1916354645);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(93);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(93,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("French (Monaco)",15,179252009);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 6156L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("fr-MC",5,1916354883);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(94);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(94,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Frisian (Netherlands)",21,1333964073);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1122L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("fy-NL",5,2033795660);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(95);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(95,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Irish (Ireland)",15,1641158697);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2108L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ga-IE",5,1631148869);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(96);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(96,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Dari (Afghanistan)",18,1622062377);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1164L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("gbz-AF",6,105565254);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(97);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(97,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Galician (Spain)",16,1150054185);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1110L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("gl-ES",5,1815697235);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(98);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(98,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Alsatian (France)",17,893802793);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1156L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("gsw-FR",6,55365458);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(99);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(99,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Gujarati (India)",16,64154921);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1095L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("gu-IN",5,1966693198);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(100);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(100,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Hausa (Nigeria, Latin)",22,1634997033);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1128L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ha-Latn-NG",10,1466378823);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(101);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(101,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Hebrew (Israel)",15,624151849);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1037L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("he-IL",5,1698265420);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(102);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(102,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Hindi (India)",13,1372274473);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1081L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("hi-IN",5,1765374286);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(103);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(103,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Croatian (Bosnia and Herzegovina, Latin)",40,1438581801);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 4122L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("hr-BA",5,1916367425);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(104);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(104,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Croatian (Croatia)",18,1476626729);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1050L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("hr-HR",5,1916368978);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(105);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(105,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Hungarian (Hungary)",19,1582278697);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1038L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("hu-HU",5,1966700629);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(106);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(106,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Armenian (Armenia)",18,1088545321);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1067L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("hy-AM",5,2033807693);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(107);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(107,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Indonesian (Indonesia)",22,2091679529);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1057L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("id-ID",5,1681495876);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(108);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(108,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Igbo (Nigeria)",14,993129769);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1136L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ig-NG",5,1731828807);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(109);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(109,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Yi (PRC)",8,592530985);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1144L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ii-CN",5,1765380430);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(110);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(110,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Icelandic (Iceland)",19,596947753);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1039L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("is-IS",5,1933154131);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(111);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(111,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Italian (Switzerland)",21,1609399337);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2064L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("it-CH",5,1949929800);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(112);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(112,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Italian (Italy)",15,580994089);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1040L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("it-IT",5,1949931348);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(113);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(113,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Inuktitut (Canada, Syllabics)",29,528733481);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1117L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("iu-Cans-CA",10,414631233);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(114);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(114,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Inuktitut (Canada, Latin)",25,315090729);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2141L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("iu-Latn-CA",10,565679937);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(115);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(115,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Japanese (Japan)",16,650150953);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1041L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ja-JP",5,1631172176);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(116);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(116,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Georgian (Georgia)",18,360343081);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1079L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ka-GE",5,1631179077);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(117);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(117,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Khmer (Cambodia)",16,1800770601);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1107L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("kh-KH",5,1748620616);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(118);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(118,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Kazakh (Kazakhstan)",19,317581353);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1087L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("kk-KZ",5,1798952282);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(119);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(119,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Greenlandic (Greenland)",23,1249655593);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1135L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("kl-GL",5,1815728460);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(120);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(120,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Kannada (India)",15,964512809);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1099L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("kn-IN",5,1849283406);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(121);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(121,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Korean (Korea)",14,2146728233);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1042L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ko-KR",5,1866061138);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(122);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(122,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Konkani (India)",15,1849833257);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1111L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("kok-IN",6,2009353038);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(123);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(123,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Kyrgyz (Kyrgyzstan)",19,669632809);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1088L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ky-KG",5,2033833287);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(124);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(124,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Luxembourgish (Luxembourg)",26,1340463401);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1134L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("lb-LU",5,1647965269);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(125);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(125,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Lao (Lao PDR)",13,283570473);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1108L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("lo-LA",5,1866069057);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(126);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(126,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Lithuanian (Lithuania)",22,330195753);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1063L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("lt-LT",5,1949955156);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(127);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(127,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Latvian (Latvia)",16,2103338025);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1062L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("lv-LV",5,1983509590);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(128);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(128,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Maori (New Zealand)",19,2020317481);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1153L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("mi-NZ",5,1765413978);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(129);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(129,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Macedonian (Macedonia, FYROM)",29,11789865);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1071L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("mk-MK",5,1798968139);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(130);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(130,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Malayalam (India)",17,724000553);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1100L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ml-IN",5,1815744334);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(131);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(131,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Mongolian (Mongolia)",20,615446825);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1104L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("mn-Cyrl-MN",10,200076110);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(132);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(132,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Mongolian (PRC)",15,440457257);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2128L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("mn-Mong-CN",10,834701134);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(133);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(133,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Mohawk (Canada)",15,1572663337);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1148L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("moh-CA",6,1962952001);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(134);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(134,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Marathi (India)",15,716084521);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1102L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("mr-IN",5,1916407630);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(135);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(135,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Malay (Brunei Darussalam)",25,219501609);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2110L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ms-BN",5,1933183054);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(136);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(136,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Malay (Malaysia)",16,327619113);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1086L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ms-MY",5,1933185881);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(137);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(137,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Maltese (Malta)",15,1318407209);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1082L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("mt-MT",5,1949963092);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(138);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(138,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Norwegian (Bokm\345l, Norway)",26,436615977);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1044L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("nb-NO",5,1647981135);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(139);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(139,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Nepali (India)",14,741313577);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ne-IN",5,1698311502);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(140);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(140,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Nepali (Nepal)",14,951879977);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1121L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ne-NP",5,1698312784);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(141);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(141,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Dutch (Belgium)",15,1314253353);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2067L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("nl-BE",5,1815750213);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(142);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(142,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Dutch (Netherlands)",19,1005257513);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1043L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("nl-NL",5,1815753292);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(143);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(143,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Norwegian (Nynorsk, Norway)",27,77945641);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2068L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("nn-NO",5,1849307727);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(144);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(144,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Sesotho sa Leboa/Northern Sotho (South Africa)",46,1231033897);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1132L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ns-ZA",5,1933196865);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(145);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(145,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Occitan (France)",16,1295651881);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1154L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("oc-FR",5,1664763986);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(146);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(146,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Oriya (India)",13,87263017);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1096L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("or-IN",5,1916422990);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(147);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(147,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Punjabi (India)",15,1799675945);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1094L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("pa-IN",5,1631217998);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(148);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(148,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Polish (Poland)",15,401210409);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1045L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("pl-PL",5,1815769164);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(149);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(149,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Pashto (Afghanistan)",20,1688047913);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1123L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ps-AF",5,1933205830);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(150);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(150,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Portuguese (Brazil)",19,881483049);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1046L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("pt-BR",5,1949983314);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(151);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(151,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Portuguese (Portugal)",21,218414889);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2070L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("pt-PT",5,1949986900);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(152);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(152,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("K\'iche (Guatemala)",18,1355928361);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1158L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("qut-GT",6,24710228);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(153);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(153,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Quechua (Bolivia)",17,426709801);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1131L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("quz-BO",6,125372239);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(154);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(154,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Quechua (Ecuador)",17,546083625);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2155L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("quz-EC",6,125372995);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(155);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(155,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Quechua (Peru)",14,1928214569);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 3179L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("quz-PE",6,125375813);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(156);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(156,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Romansh (Switzerland)",21,1613278249);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1047L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("rm-CH",5,1832558408);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(157);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(157,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Romanian (Romania)",18,154921769);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1048L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ro-RO",5,1866116687);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(158);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(158,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Russian (Russia)",16,1447226921);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1049L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ru-RU",5,1966779989);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(159);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(159,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Kinyarwanda (Rwanda)",20,147082793);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1159L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("rw-RW",5,2000334423);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(160);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(160,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Sanskrit (India)",16,1703297065);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1103L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("sa-IN",5,1631241038);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(161);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(161,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Yakut (Russia)",14,1820094761);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1157L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("sah-RU",6,1974644821);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(162);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(162,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Sami (Northern, Finland)",24,1230801193);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 3131L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("se-FI",5,1698349129);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(163);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(163,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Sami (Northern, Norway)",23,1098773801);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1083L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("se-NO",5,1698351183);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(164);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(164,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Sami (Northern, Sweden)",23,1164997417);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2107L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("se-SE",5,1698352453);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(165);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(165,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Sinhala (Sri Lanka)",19,1778411305);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1115L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("si-LK",5,1765459531);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(166);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(166,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Slovak (Slovakia)",17,295530793);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1051L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("sk-SK",5,1799015755);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(167);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(167,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Slovenian (Slovenia)",20,2092655401);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1060L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("sl-SI",5,1815792969);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(168);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(168,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Sami (Southern, Norway)",23,329550889);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 6203L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("sma-NO",6,1857295439);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(169);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(169,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Sami (Southern, Sweden)",23,395774505);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 7227L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("sma-SE",6,1857296709);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(170);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(170,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Sami (Lule, Norway)",19,424189225);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 4155L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("smj-NO",6,2008290383);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(171);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(171,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Sami (Lule, Sweden)",19,490412841);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 5179L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("smj-SE",6,2008291653);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(172);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(172,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Sami (Inari, Finland)",21,1745760553);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 9275L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("smn-FI",6,2075397193);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(173);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(173,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Sami (Skolt, Finland)",21,2014141993);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 8251L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("sms-FI",6,11803465);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(174);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(174,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Albanian (Albania)",18,715561257);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1052L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("sq-AL",5,1899674444);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(175);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(175,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Serbian (Bosnia and Herzegovina, Cyrillic)",42,657749289);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 7194L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("sr-Cyrl-BA",10,838817345);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(176);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(176,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Serbian (Serbia and Montenegro, Cyrillic)",41,489865769);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 3098L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("sr-Cyrl-CS",10,838817619);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(177);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(177,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Serbian (Bosnia and Herzegovina, Latin)",39,2016676649);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 6170L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("sr-Latn-BA",10,1060089921);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(178);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(178,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Serbian (Serbia and Montenegro, Latin)",38,221514025);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2074L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("sr-Latn-CS",10,1060090195);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(179);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(179,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Swedish (Finland)",17,227717673);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2077L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("sv-FI",5,1983561801);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(180);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(180,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Swedish (Sweden)",16,1756669225);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1053L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("sv-SE",5,1983565125);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(181);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(181,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Swahili (Kenya)",15,1648060713);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1089L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("sw-KE",5,2000340293);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(182);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(182,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Syriac (Syria)",14,1866442537);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1114L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("syr-SY",6,2142601561);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(183);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(183,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Tamil (India)",13,1153681193);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1097L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ta-IN",5,1631248718);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(184);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(184,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Telugu (India)",14,1860375081);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1098L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("te-IN",5,1698357582);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(185);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(185,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Tajik (Tajikistan)",18,358865961);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1064L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("tg-Cyrl-TJ",10,257151306);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(186);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(186,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Thai (Thailand)",15,466902825);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1054L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("th-TH",5,1748692040);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(187);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(187,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Turkmen (Turkmenistan)",22,1495306793);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1090L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("tk-TM",5,1799023693);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(188);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(188,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Tamazight (Algeria, Latin)",26,1311094825);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2143L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("tmz-Latn-DZ",11,1930927194);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(189);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(189,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Setswana/Tswana (South Africa)",30,1332795433);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1074L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("tn-ZA",5,1849356865);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(190);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(190,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Urdu (India)",12,2093368105);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2080L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("tr-IN",5,1916461390);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(191);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(191,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Turkish (Turkey)",16,1338870057);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1055L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("tr-TR",5,1916464210);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(192);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(192,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Tatar (Russia)",14,1403672617);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1092L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("tt-RU",5,1950018133);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(193);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(193,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Uighur (PRC)",12,1805436713);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1152L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ug-CN",5,1731918158);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(194);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(194,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Ukrainian (Ukraine)",19,2096134441);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1058L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("uk-UA",5,1799031617);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(195);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(195,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Urdu (Pakistan)",15,2114945321);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1056L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("ur-PK",5,1916470859);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(196);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(196,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Uzbek (Uzbekistan, Cyrillic)",28,1524140329);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2115L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("uz-Cyrl-UZ",10,1444952922);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(197);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(197,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Uzbek (Uzbekistan, Latin)",25,613903145);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1091L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("uz-Latn-UZ",10,1666225498);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(198);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(198,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Vietnamese (Vietnam)",20,728655913);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1066L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("vi-VN",5,1765485134);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(199);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(199,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Upper Sorbian (Germany)",23,439837225);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1070L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("wen-DE",6,2083199557);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(200);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(200,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Wolof (Senegal)",15,138893609);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1160L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("wo-SN",5,1866155342);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(201);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(201,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Xhosa/isiXhosa (South Africa)",29,1642615081);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1076L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("xh-ZA",5,1748724289);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(202);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(202,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Yoruba (Nigeria)",16,1028799529);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1130L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("yo-NG",5,1866169415);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(203);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(203,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Chinese (PRC)",13,909212713);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2052L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("zh-CN",5,1748733774);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(204);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(204,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Chinese (Hong Kong SAR, PRC)",28,1174937641);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 3076L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("zh-HK",5,1748735051);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(205);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(205,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Chinese (Macao SAR)",19,1837232937);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 5124L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("zh-MO",5,1748736335);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(206);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(206,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Chinese (Singapore)",19,1885447721);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 4100L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("zh-SG",5,1748737863);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(207);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(207,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Chinese (Taiwan)",16,1257585705);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1028L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("zh-TW",5,1748738135);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(208);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(208,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("Zulu/isiZulu (South Africa)",27,1206739753);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1077L);
	ur1 = tr2;
	tr3 = RTMS_EX_H("zu-ZA",5,1966843457);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3269, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(209);
	RTDBGAA(Current, dtype, 869, 0xF800018E, 0); /* scripts */
	ui4_1 = ((EIF_INTEGER_32) 17L);
	{
		static EIF_TYPE_INDEX typarr0[] = {401,0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr2) = 17L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = RTMS_EX_H("Cyrl",4,1132032620);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ((EIF_INTEGER_32) 1064L);
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = RTMS_EX_H("Latn",4,1281455214);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ((EIF_INTEGER_32) 1068L);
	*((EIF_REFERENCE *)tr2+1) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = RTMS_EX_H("Latn",4,1281455214);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ((EIF_INTEGER_32) 1091L);
	*((EIF_REFERENCE *)tr2+2) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = RTMS_EX_H("Cyrl",4,1132032620);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ((EIF_INTEGER_32) 1104L);
	*((EIF_REFERENCE *)tr2+3) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = RTMS_EX_H("Cans",4,1130458739);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ((EIF_INTEGER_32) 1117L);
	*((EIF_REFERENCE *)tr2+4) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = RTMS_EX_H("Latn",4,1281455214);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ((EIF_INTEGER_32) 1128L);
	*((EIF_REFERENCE *)tr2+5) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = RTMS_EX_H("Latn",4,1281455214);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ((EIF_INTEGER_32) 2074L);
	*((EIF_REFERENCE *)tr2+6) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = RTMS_EX_H("Cyrl",4,1132032620);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ((EIF_INTEGER_32) 2092L);
	*((EIF_REFERENCE *)tr2+7) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = RTMS_EX_H("Cyrl",4,1132032620);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ((EIF_INTEGER_32) 2115L);
	*((EIF_REFERENCE *)tr2+8) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = RTMS_EX_H("Mong",4,1299148391);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ((EIF_INTEGER_32) 2128L);
	*((EIF_REFERENCE *)tr2+9) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = RTMS_EX_H("Latn",4,1281455214);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ((EIF_INTEGER_32) 2141L);
	*((EIF_REFERENCE *)tr2+10) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = RTMS_EX_H("Latn",4,1281455214);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ((EIF_INTEGER_32) 2143L);
	*((EIF_REFERENCE *)tr2+11) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = RTMS_EX_H("Cyrl",4,1132032620);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ((EIF_INTEGER_32) 3098L);
	*((EIF_REFERENCE *)tr2+12) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = RTMS_EX_H("Latn",4,1281455214);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ((EIF_INTEGER_32) 5146L);
	*((EIF_REFERENCE *)tr2+13) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = RTMS_EX_H("Latn",4,1281455214);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ((EIF_INTEGER_32) 6170L);
	*((EIF_REFERENCE *)tr2+14) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = RTMS_EX_H("Cyrl",4,1132032620);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ((EIF_INTEGER_32) 7194L);
	*((EIF_REFERENCE *)tr2+15) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = RTMS_EX_H("Cyrl",4,1132032620);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ((EIF_INTEGER_32) 8218L);
	*((EIF_REFERENCE *)tr2+16) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(3711, Dtype(tr2)))(tr2).it_r;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(869, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(210);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
}

/* {I18N_NLS_LCID_TOOLS}.is_valid_locale */
EIF_TYPED_VALUE F37_881 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "is_valid_locale";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 36, Current, 0, 2, 950);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(36, Current, 950);
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(IsValidLocale((LCID) arg1, (DWORD) arg2));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg2
#undef arg1
}

/* {I18N_NLS_LCID_TOOLS}._invariant */
void F37_7182 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 36, Current, 0, 7181);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("attached locales", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
}

void EIF_Minit37 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
