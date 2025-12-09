/*
 * Code for class I18N_TEST_APP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F65_1355(EIF_REFERENCE);
extern void F65_1356(EIF_REFERENCE);
extern void F65_1357(EIF_REFERENCE);
extern void F65_1358(EIF_REFERENCE);
extern void F65_1359(EIF_REFERENCE);
extern void F65_1360(EIF_REFERENCE);
extern void F65_1361(EIF_REFERENCE);
extern void F65_1362(EIF_REFERENCE);
extern void F65_1363(EIF_REFERENCE);
extern void F65_1364(EIF_REFERENCE);
extern void F65_1365(EIF_REFERENCE);
extern void EIF_Minit65(void);

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

/* {I18N_TEST_APP}.make */
void F65_1355 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 64, Current, 0, 0, 1402);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1402);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(32, dtype))(Current);
	RTHOOK(2);
	tr1 = RTMS_EX_H("Running SIMPLE_I18N tests...\012\012",30,1282230538);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1308, dtype))(Current);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1309, dtype))(Current);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1310, dtype))(Current);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1311, dtype))(Current);
	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1312, dtype))(Current);
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1313, dtype))(Current);
	RTHOOK(9);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1314, dtype))(Current);
	RTHOOK(10);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1315, dtype))(Current);
	RTHOOK(11);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1316, dtype))(Current);
	RTHOOK(12);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1317, dtype))(Current);
	RTHOOK(13);
	tr1 = RTMS_EX_H("\012=== All tests passed ===\012",26,1776312586);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
}

/* {I18N_TEST_APP}.test_create_with_system_locale */
void F65_1356 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_create_with_system_locale";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 64, Current, 1, 0, 1403);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1403);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("test_create_with_system_locale: ",32,1479511328);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF800003A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(58, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(1162, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("has language",12,523860581);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1165, "language", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4862, "is_empty", tr2))(tr2)).it_b);
	ub1 = (EIF_BOOLEAN) !tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1270, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("is system locale",16,1794360933);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1189, "is_system_locale", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1270, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("has locale name",15,449996645);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1167, "locale_name", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4862, "is_empty", tr2))(tr2)).it_b);
	ub1 = (EIF_BOOLEAN) !tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1270, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("OK (locale: ",12,858198560);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1167, "locale_name", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4898, "to_string_8", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr3);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H(")\012",2,10506);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ub1
}

/* {I18N_TEST_APP}.test_create_with_specific_locale */
void F65_1357 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_create_with_specific_locale";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,ur3);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 64, Current, 1, 0, 1404);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1404);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("test_create_with_specific_locale: ",34,443920928);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF800003A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(58, 0x01).id);
	tr2 = RTMS_EX_H("en_US",5,1852517203);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1163, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("language",8,1640923749);
	ur1 = tr1;
	tr2 = RTMS_EX_H("en",2,25966);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1165, "language", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4898, "to_string_8", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1134, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("region",6,1959871854);
	ur1 = tr1;
	tr2 = RTMS_EX_H("US",2,21843);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1166, "region", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4898, "to_string_8", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1134, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("OK\012",3,5196554);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
}

/* {I18N_TEST_APP}.test_register_translation */
void F65_1358 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_register_translation";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 64, Current, 1, 0, 1405);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1405);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("test_register_translation: ",27,559208992);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF800003A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(58, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(1162, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("hello",5,1702403183);
	ur1 = tr1;
	tr2 = RTMS_EX_H("Hello, World!",13,306209);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1169, "register_translation", loc1))(loc1, ur1x, ur2x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("has translation",15,2082915694);
	ur1 = tr1;
	tr2 = RTMS_EX_H("hello",5,1702403183);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1175, "has_translation", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1270, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("count",5,1870727284);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1168, "translation_count", loc1))(loc1)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1132, dtype))(Current, ur1x, ui4_1x, ui4_2x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("OK\012",3,5196554);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ub1
}

/* {I18N_TEST_APP}.test_translate */
void F65_1359 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_translate";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLR(6,tr3);
	RTLR(7,ur3);
	RTLR(8,tr4);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 64, Current, 1, 0, 1406);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1406);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("test_translate: ",16,453144864);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF800003A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(58, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(1162, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("greeting",8,1572271463);
	ur1 = tr1;
	tr2 = RTMS_EX_H("Bonjour!",8,2135911457);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1169, "register_translation", loc1))(loc1, ur1x, ur2x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("translation",11,1235133806);
	ur1 = tr1;
	tr2 = RTMS_EX_H("Bonjour!",8,2135911457);
	ur2 = tr2;
	tr3 = RTMS_EX_H("greeting",8,1572271463);
	ur3 = tr3;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1173, "translate", loc1))(loc1, ur3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4898, "to_string_8", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1134, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("OK\012",3,5196554);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
}

/* {I18N_TEST_APP}.test_translate_missing */
void F65_1360 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_translate_missing";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLR(6,tr3);
	RTLR(7,ur3);
	RTLR(8,tr4);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 64, Current, 1, 0, 1407);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1407);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("test_translate_missing: ",24,1867413792);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF800003A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(58, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(1162, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("fallback to key",15,2043639417);
	ur1 = tr1;
	tr2 = RTMS_EX_H("unknown_key",11,1367074425);
	ur2 = tr2;
	tr3 = RTMS_EX_H("unknown_key",11,1367074425);
	ur3 = tr3;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1173, "translate", loc1))(loc1, ur3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4898, "to_string_8", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1134, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("OK\012",3,5196554);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
}

/* {I18N_TEST_APP}.test_plural_translation */
void F65_1361 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_plural_translation";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLR(6,tr3);
	RTLR(7,ur3);
	RTLR(8,tr4);
	RTLR(9,ur4);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 64, Current, 1, 0, 1408);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1408);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("test_plural_translation: ",25,1825978400);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF800003A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(58, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(1162, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("item",4,1769235821);
	ur1 = tr1;
	tr2 = RTMS_EX_H("items",5,1953610611);
	ur2 = tr2;
	tr3 = RTMS_EX_H("1 item",6,1865819501);
	ur3 = tr3;
	tr4 = RTMS_EX_H("many items",10,820458867);
	ur4 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1170, "register_plural_translation", loc1))(loc1, ur1x, ur2x, ur3x, ur4x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("singular",8,1374828146);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1 item",6,1865819501);
	ur2 = tr2;
	tr3 = RTMS_EX_H("item",4,1769235821);
	ur3 = tr3;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1174, "translate_plural", loc1))(loc1, ur3x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4898, "to_string_8", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1134, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("plural",6,43980908);
	ur1 = tr1;
	tr2 = RTMS_EX_H("many items",10,820458867);
	ur2 = tr2;
	tr3 = RTMS_EX_H("item",4,1769235821);
	ur3 = tr3;
	ui4_1 = ((EIF_INTEGER_32) 5L);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1174, "translate_plural", loc1))(loc1, ur3x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4898, "to_string_8", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1134, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("OK\012",3,5196554);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ui4_1
}

/* {I18N_TEST_APP}.test_format_placeholders */
void F65_1362 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_format_placeholders";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,ur2);
	RTLR(8,ur3);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 64, Current, 2, 0, 1409);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1409);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("test_format_placeholders: ",26,710805280);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF800003A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(58, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(1162, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(2, 0xF8000116, 0, 0); /* loc2 */
	tr1 = RTMS_EX_H("Hello, $1!",10,1507480353);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,227,0xFF01,275,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	tr3 = RTMS_EX_H("World",5,1870437988);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	ur2 = tr2;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1176, "format", loc1))(loc1, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("single placeholder",18,677965938);
	ur1 = tr1;
	tr2 = RTMS_EX_H("Hello, World!",13,306209);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4898, "to_string_8", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1134, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(5);
	RTDBGAL(2, 0xF8000116, 0, 0); /* loc2 */
	tr1 = RTMS_EX_H("$1 has $2 messages",18,1359142771);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("User",4,1433625970);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 5L);
	ur2 = tr2;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1176, "format", loc1))(loc1, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	tr1 = RTMS_EX_H("multiple placeholders",21,1390468467);
	ur1 = tr1;
	tr2 = RTMS_EX_H("User has 5 messages",19,482887539);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4898, "to_string_8", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1134, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("OK\012",3,5196554);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
}

/* {I18N_TEST_APP}.test_translate_format */
void F65_1363 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_translate_format";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLR(6,loc2);
	RTLR(7,tr3);
	RTLR(8,ur3);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 64, Current, 2, 0, 1410);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1410);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("test_translate_format: ",23,347988768);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF800003A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(58, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(1162, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("welcome",7,1632876901);
	ur1 = tr1;
	tr2 = RTMS_EX_H("Welcome, $1!",12,19419425);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1169, "register_translation", loc1))(loc1, ur1x, ur2x);
	RTHOOK(4);
	RTDBGAL(2, 0xF8000116, 0, 0); /* loc2 */
	tr1 = RTMS_EX_H("welcome",7,1632876901);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,227,0xFF01,275,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	tr3 = RTMS_EX_H("Alice",5,1819345253);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	ur2 = tr2;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1177, "translate_format", loc1))(loc1, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	tr1 = RTMS_EX_H("translated and formatted",24,1704332900);
	ur1 = tr1;
	tr2 = RTMS_EX_H("Welcome, Alice!",15,260693025);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4898, "to_string_8", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1134, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("OK\012",3,5196554);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
}

/* {I18N_TEST_APP}.test_register_multiple */
void F65_1364 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_register_multiple";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
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
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,ur2);
	RTLR(8,ur3);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 64, Current, 1, 0, 1400);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1400);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("test_register_multiple: ",24,1274859808);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF800003A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(58, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(1162, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	{
		static EIF_TYPE_INDEX typarr0[] = {401,0xFF01,0xFFF9,2,227,0xFF01,275,0xFF01,275,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr2) = 3L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,0xFF01,275,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = RTMS_EX_H("yes",3,7955827);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	tr4 = RTMS_EX_H("Oui",3,5207401);
	((EIF_TYPED_VALUE *)tr3+2)->it_r = tr4;
	RTAR(tr3,tr4);
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,0xFF01,275,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = RTMS_EX_H("no",2,28271);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	tr4 = RTMS_EX_H("Non",3,5140334);
	((EIF_TYPED_VALUE *)tr3+2)->it_r = tr4;
	RTAR(tr3,tr4);
	*((EIF_REFERENCE *)tr2+1) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,227,0xFF01,275,0xFF01,275,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = RTMS_EX_H("cancel",6,2047394668);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	tr4 = RTMS_EX_H("Annuler",7,543046002);
	((EIF_TYPED_VALUE *)tr3+2)->it_r = tr4;
	RTAR(tr3,tr4);
	*((EIF_REFERENCE *)tr2+2) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(3711, Dtype(tr2)))(tr2).it_r;
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1171, "register_translations", loc1))(loc1, ur1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("count",5,1870727284);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 3L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1168, "translation_count", loc1))(loc1)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1132, dtype))(Current, ur1x, ui4_1x, ui4_2x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("yes",3,7955827);
	ur1 = tr1;
	tr2 = RTMS_EX_H("Oui",3,5207401);
	ur2 = tr2;
	tr3 = RTMS_EX_H("yes",3,7955827);
	ur3 = tr3;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1173, "translate", loc1))(loc1, ur3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4898, "to_string_8", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1134, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("no",2,28271);
	ur1 = tr1;
	tr2 = RTMS_EX_H("Non",3,5140334);
	ur2 = tr2;
	tr3 = RTMS_EX_H("no",2,28271);
	ur3 = tr3;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1173, "translate", loc1))(loc1, ur3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4898, "to_string_8", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1134, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("cancel",6,2047394668);
	ur1 = tr1;
	tr2 = RTMS_EX_H("Annuler",7,543046002);
	ur2 = tr2;
	tr3 = RTMS_EX_H("cancel",6,2047394668);
	ur3 = tr3;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1173, "translate", loc1))(loc1, ur3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4898, "to_string_8", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1134, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("OK\012",3,5196554);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
}

/* {I18N_TEST_APP}.test_locale_info */
void F65_1365 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_locale_info";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 64, Current, 1, 0, 1401);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1401);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("test_locale_info: ",18,446594336);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF800003A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(58, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(1162, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("has decimal separator",21,1866095730);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1184, "decimal_separator", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ub1 = (EIF_BOOLEAN)(tr2 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1270, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("has thousands separator",23,2056682610);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1185, "thousands_separator", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ub1 = (EIF_BOOLEAN)(tr2 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1270, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("has currency symbol",19,480631148);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1186, "currency_symbol", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ub1 = (EIF_BOOLEAN)(tr2 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1270, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("has date format",15,931471732);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1187, "date_format", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ub1 = (EIF_BOOLEAN)(tr2 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1270, dtype))(Current, ur1x, ub1x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("has time format",15,1166272884);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1188, "time_format", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ub1 = (EIF_BOOLEAN)(tr2 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1270, dtype))(Current, ur1x, ub1x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("OK (decimal: \'",14,1999307047);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1184, "decimal_separator", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4898, "to_string_8", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr3);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("\', currency: \'",14,514181159);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1186, "currency_symbol", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4898, "to_string_8", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr3);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("\')\012",3,2566410);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ub1
}

void EIF_Minit65 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
