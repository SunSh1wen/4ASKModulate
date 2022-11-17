/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2020 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#if defined(_WIN32)
 #include "stdio.h"
 #define IKI_DLLESPEC __declspec(dllimport)
#else
 #define IKI_DLLESPEC
#endif
#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2020 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#if defined(_WIN32)
 #include "stdio.h"
 #define IKI_DLLESPEC __declspec(dllimport)
#else
 #define IKI_DLLESPEC
#endif
#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
IKI_DLLESPEC extern void execute_2(char*, char *);
IKI_DLLESPEC extern void execute_3(char*, char *);
IKI_DLLESPEC extern void execute_4(char*, char *);
IKI_DLLESPEC extern void execute_5(char*, char *);
IKI_DLLESPEC extern void execute_6(char*, char *);
IKI_DLLESPEC extern void execute_14061(char*, char *);
IKI_DLLESPEC extern void execute_14062(char*, char *);
IKI_DLLESPEC extern void execute_14063(char*, char *);
IKI_DLLESPEC extern void execute_14009(char*, char *);
IKI_DLLESPEC extern void execute_14048(char*, char *);
IKI_DLLESPEC extern void vlog_const_rhs_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
IKI_DLLESPEC extern void execute_14052(char*, char *);
IKI_DLLESPEC extern void execute_14053(char*, char *);
IKI_DLLESPEC extern void execute_14055(char*, char *);
IKI_DLLESPEC extern void execute_14056(char*, char *);
IKI_DLLESPEC extern void execute_14057(char*, char *);
IKI_DLLESPEC extern void execute_14058(char*, char *);
IKI_DLLESPEC extern void execute_14059(char*, char *);
IKI_DLLESPEC extern void execute_14060(char*, char *);
IKI_DLLESPEC extern void execute_9(char*, char *);
IKI_DLLESPEC extern void execute_10(char*, char *);
IKI_DLLESPEC extern void execute_11(char*, char *);
IKI_DLLESPEC extern void execute_12(char*, char *);
IKI_DLLESPEC extern void vlog_simple_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
IKI_DLLESPEC extern void execute_14(char*, char *);
IKI_DLLESPEC extern void execute_15(char*, char *);
IKI_DLLESPEC extern void execute_16(char*, char *);
IKI_DLLESPEC extern void execute_17(char*, char *);
IKI_DLLESPEC extern void execute_14019(char*, char *);
IKI_DLLESPEC extern void execute_19(char*, char *);
IKI_DLLESPEC extern void execute_14020(char*, char *);
IKI_DLLESPEC extern void execute_21(char*, char *);
IKI_DLLESPEC extern void execute_14021(char*, char *);
IKI_DLLESPEC extern void execute_23(char*, char *);
IKI_DLLESPEC extern void execute_24(char*, char *);
IKI_DLLESPEC extern void execute_14008(char*, char *);
IKI_DLLESPEC extern void execute_14022(char*, char *);
IKI_DLLESPEC extern void execute_14023(char*, char *);
IKI_DLLESPEC extern void execute_14024(char*, char *);
IKI_DLLESPEC extern void execute_14025(char*, char *);
IKI_DLLESPEC extern void execute_14026(char*, char *);
IKI_DLLESPEC extern void execute_14027(char*, char *);
IKI_DLLESPEC extern void execute_14028(char*, char *);
IKI_DLLESPEC extern void execute_14029(char*, char *);
IKI_DLLESPEC extern void execute_14030(char*, char *);
IKI_DLLESPEC extern void execute_14031(char*, char *);
IKI_DLLESPEC extern void execute_14032(char*, char *);
IKI_DLLESPEC extern void execute_14033(char*, char *);
IKI_DLLESPEC extern void execute_14034(char*, char *);
IKI_DLLESPEC extern void execute_14035(char*, char *);
IKI_DLLESPEC extern void execute_14036(char*, char *);
IKI_DLLESPEC extern void execute_14037(char*, char *);
IKI_DLLESPEC extern void execute_14038(char*, char *);
IKI_DLLESPEC extern void execute_14039(char*, char *);
IKI_DLLESPEC extern void execute_14040(char*, char *);
IKI_DLLESPEC extern void execute_14041(char*, char *);
IKI_DLLESPEC extern void execute_14042(char*, char *);
IKI_DLLESPEC extern void execute_14043(char*, char *);
IKI_DLLESPEC extern void execute_14044(char*, char *);
IKI_DLLESPEC extern void execute_14045(char*, char *);
IKI_DLLESPEC extern void execute_14046(char*, char *);
IKI_DLLESPEC extern void execute_14047(char*, char *);
IKI_DLLESPEC extern void execute_107(char*, char *);
IKI_DLLESPEC extern void execute_110(char*, char *);
IKI_DLLESPEC extern void execute_662(char*, char *);
IKI_DLLESPEC extern void execute_663(char*, char *);
IKI_DLLESPEC extern void execute_661(char*, char *);
IKI_DLLESPEC extern void execute_122(char*, char *);
IKI_DLLESPEC extern void execute_123(char*, char *);
IKI_DLLESPEC extern void execute_124(char*, char *);
IKI_DLLESPEC extern void execute_125(char*, char *);
IKI_DLLESPEC extern void execute_126(char*, char *);
IKI_DLLESPEC extern void execute_654(char*, char *);
IKI_DLLESPEC extern void execute_649(char*, char *);
IKI_DLLESPEC extern void execute_145(char*, char *);
IKI_DLLESPEC extern void execute_151(char*, char *);
IKI_DLLESPEC extern void execute_157(char*, char *);
IKI_DLLESPEC extern void execute_163(char*, char *);
IKI_DLLESPEC extern void execute_169(char*, char *);
IKI_DLLESPEC extern void execute_175(char*, char *);
IKI_DLLESPEC extern void execute_181(char*, char *);
IKI_DLLESPEC extern void execute_187(char*, char *);
IKI_DLLESPEC extern void execute_193(char*, char *);
IKI_DLLESPEC extern void execute_199(char*, char *);
IKI_DLLESPEC extern void execute_205(char*, char *);
IKI_DLLESPEC extern void execute_211(char*, char *);
IKI_DLLESPEC extern void execute_217(char*, char *);
IKI_DLLESPEC extern void execute_223(char*, char *);
IKI_DLLESPEC extern void execute_229(char*, char *);
IKI_DLLESPEC extern void execute_235(char*, char *);
IKI_DLLESPEC extern void execute_241(char*, char *);
IKI_DLLESPEC extern void execute_247(char*, char *);
IKI_DLLESPEC extern void execute_257(char*, char *);
IKI_DLLESPEC extern void execute_278(char*, char *);
IKI_DLLESPEC extern void execute_294(char*, char *);
IKI_DLLESPEC extern void execute_310(char*, char *);
IKI_DLLESPEC extern void execute_326(char*, char *);
IKI_DLLESPEC extern void execute_342(char*, char *);
IKI_DLLESPEC extern void execute_358(char*, char *);
IKI_DLLESPEC extern void execute_374(char*, char *);
IKI_DLLESPEC extern void execute_390(char*, char *);
IKI_DLLESPEC extern void execute_406(char*, char *);
IKI_DLLESPEC extern void execute_422(char*, char *);
IKI_DLLESPEC extern void execute_438(char*, char *);
IKI_DLLESPEC extern void execute_454(char*, char *);
IKI_DLLESPEC extern void execute_470(char*, char *);
IKI_DLLESPEC extern void execute_486(char*, char *);
IKI_DLLESPEC extern void execute_502(char*, char *);
IKI_DLLESPEC extern void execute_518(char*, char *);
IKI_DLLESPEC extern void execute_535(char*, char *);
IKI_DLLESPEC extern void execute_586(char*, char *);
IKI_DLLESPEC extern void execute_543(char*, char *);
IKI_DLLESPEC extern void execute_545(char*, char *);
IKI_DLLESPEC extern void execute_548(char*, char *);
IKI_DLLESPEC extern void execute_550(char*, char *);
IKI_DLLESPEC extern void execute_552(char*, char *);
IKI_DLLESPEC extern void execute_554(char*, char *);
IKI_DLLESPEC extern void execute_556(char*, char *);
IKI_DLLESPEC extern void execute_558(char*, char *);
IKI_DLLESPEC extern void execute_560(char*, char *);
IKI_DLLESPEC extern void execute_562(char*, char *);
IKI_DLLESPEC extern void execute_564(char*, char *);
IKI_DLLESPEC extern void execute_566(char*, char *);
IKI_DLLESPEC extern void execute_568(char*, char *);
IKI_DLLESPEC extern void execute_570(char*, char *);
IKI_DLLESPEC extern void execute_572(char*, char *);
IKI_DLLESPEC extern void execute_574(char*, char *);
IKI_DLLESPEC extern void execute_576(char*, char *);
IKI_DLLESPEC extern void execute_578(char*, char *);
IKI_DLLESPEC extern void execute_580(char*, char *);
IKI_DLLESPEC extern void execute_582(char*, char *);
IKI_DLLESPEC extern void execute_584(char*, char *);
IKI_DLLESPEC extern void execute_591(char*, char *);
IKI_DLLESPEC extern void execute_602(char*, char *);
IKI_DLLESPEC extern void execute_612(char*, char *);
IKI_DLLESPEC extern void execute_619(char*, char *);
IKI_DLLESPEC extern void execute_626(char*, char *);
IKI_DLLESPEC extern void execute_633(char*, char *);
IKI_DLLESPEC extern void execute_640(char*, char *);
IKI_DLLESPEC extern void execute_647(char*, char *);
IKI_DLLESPEC extern void execute_653(char*, char *);
IKI_DLLESPEC extern void execute_264(char*, char *);
IKI_DLLESPEC extern void execute_266(char*, char *);
IKI_DLLESPEC extern void execute_268(char*, char *);
IKI_DLLESPEC extern void execute_136(char*, char *);
IKI_DLLESPEC extern void execute_137(char*, char *);
IKI_DLLESPEC extern void execute_131(char*, char *);
IKI_DLLESPEC extern void execute_135(char*, char *);
IKI_DLLESPEC extern void execute_14011(char*, char *);
IKI_DLLESPEC extern void execute_14050(char*, char *);
IKI_DLLESPEC extern void execute_14014(char*, char *);
IKI_DLLESPEC extern void execute_14015(char*, char *);
IKI_DLLESPEC extern void execute_14016(char*, char *);
IKI_DLLESPEC extern void execute_14017(char*, char *);
IKI_DLLESPEC extern void execute_14064(char*, char *);
IKI_DLLESPEC extern void execute_14065(char*, char *);
IKI_DLLESPEC extern void execute_14066(char*, char *);
IKI_DLLESPEC extern void execute_14067(char*, char *);
IKI_DLLESPEC extern void execute_14068(char*, char *);
IKI_DLLESPEC extern void execute_14069(char*, char *);
IKI_DLLESPEC extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
IKI_DLLESPEC extern void transaction_10(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_45(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_46(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_50(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
IKI_DLLESPEC extern void transaction_151(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_223(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_295(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_367(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_439(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_511(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_583(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_655(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_727(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_799(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_871(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_943(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_1015(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_1087(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_1159(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_1231(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_1303(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_1375(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_1447(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_1519(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_1591(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_1663(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_1735(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_1807(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_44(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[191] = {(funcp)execute_2, (funcp)execute_3, (funcp)execute_4, (funcp)execute_5, (funcp)execute_6, (funcp)execute_14061, (funcp)execute_14062, (funcp)execute_14063, (funcp)execute_14009, (funcp)execute_14048, (funcp)vlog_const_rhs_process_execute_0_fast_no_reg_no_agg, (funcp)execute_14052, (funcp)execute_14053, (funcp)execute_14055, (funcp)execute_14056, (funcp)execute_14057, (funcp)execute_14058, (funcp)execute_14059, (funcp)execute_14060, (funcp)execute_9, (funcp)execute_10, (funcp)execute_11, (funcp)execute_12, (funcp)vlog_simple_process_execute_0_fast_no_reg_no_agg, (funcp)execute_14, (funcp)execute_15, (funcp)execute_16, (funcp)execute_17, (funcp)execute_14019, (funcp)execute_19, (funcp)execute_14020, (funcp)execute_21, (funcp)execute_14021, (funcp)execute_23, (funcp)execute_24, (funcp)execute_14008, (funcp)execute_14022, (funcp)execute_14023, (funcp)execute_14024, (funcp)execute_14025, (funcp)execute_14026, (funcp)execute_14027, (funcp)execute_14028, (funcp)execute_14029, (funcp)execute_14030, (funcp)execute_14031, (funcp)execute_14032, (funcp)execute_14033, (funcp)execute_14034, (funcp)execute_14035, (funcp)execute_14036, (funcp)execute_14037, (funcp)execute_14038, (funcp)execute_14039, (funcp)execute_14040, (funcp)execute_14041, (funcp)execute_14042, (funcp)execute_14043, (funcp)execute_14044, (funcp)execute_14045, (funcp)execute_14046, (funcp)execute_14047, (funcp)execute_107, (funcp)execute_110, (funcp)execute_662, (funcp)execute_663, (funcp)execute_661, (funcp)execute_122, (funcp)execute_123, (funcp)execute_124, (funcp)execute_125, (funcp)execute_126, (funcp)execute_654, (funcp)execute_649, (funcp)execute_145, (funcp)execute_151, (funcp)execute_157, (funcp)execute_163, (funcp)execute_169, (funcp)execute_175, (funcp)execute_181, (funcp)execute_187, (funcp)execute_193, (funcp)execute_199, (funcp)execute_205, (funcp)execute_211, (funcp)execute_217, (funcp)execute_223, (funcp)execute_229, (funcp)execute_235, (funcp)execute_241, (funcp)execute_247, (funcp)execute_257, (funcp)execute_278, (funcp)execute_294, (funcp)execute_310, (funcp)execute_326, (funcp)execute_342, (funcp)execute_358, (funcp)execute_374, (funcp)execute_390, (funcp)execute_406, (funcp)execute_422, (funcp)execute_438, (funcp)execute_454, (funcp)execute_470, (funcp)execute_486, (funcp)execute_502, (funcp)execute_518, (funcp)execute_535, (funcp)execute_586, (funcp)execute_543, (funcp)execute_545, (funcp)execute_548, (funcp)execute_550, (funcp)execute_552, (funcp)execute_554, (funcp)execute_556, (funcp)execute_558, (funcp)execute_560, (funcp)execute_562, (funcp)execute_564, (funcp)execute_566, (funcp)execute_568, (funcp)execute_570, (funcp)execute_572, (funcp)execute_574, (funcp)execute_576, (funcp)execute_578, (funcp)execute_580, (funcp)execute_582, (funcp)execute_584, (funcp)execute_591, (funcp)execute_602, (funcp)execute_612, (funcp)execute_619, (funcp)execute_626, (funcp)execute_633, (funcp)execute_640, (funcp)execute_647, (funcp)execute_653, (funcp)execute_264, (funcp)execute_266, (funcp)execute_268, (funcp)execute_136, (funcp)execute_137, (funcp)execute_131, (funcp)execute_135, (funcp)execute_14011, (funcp)execute_14050, (funcp)execute_14014, (funcp)execute_14015, (funcp)execute_14016, (funcp)execute_14017, (funcp)execute_14064, (funcp)execute_14065, (funcp)execute_14066, (funcp)execute_14067, (funcp)execute_14068, (funcp)execute_14069, (funcp)vlog_transfunc_eventcallback, (funcp)transaction_10, (funcp)transaction_45, (funcp)transaction_46, (funcp)transaction_50, (funcp)vhdl_transfunc_eventcallback, (funcp)transaction_151, (funcp)transaction_223, (funcp)transaction_295, (funcp)transaction_367, (funcp)transaction_439, (funcp)transaction_511, (funcp)transaction_583, (funcp)transaction_655, (funcp)transaction_727, (funcp)transaction_799, (funcp)transaction_871, (funcp)transaction_943, (funcp)transaction_1015, (funcp)transaction_1087, (funcp)transaction_1159, (funcp)transaction_1231, (funcp)transaction_1303, (funcp)transaction_1375, (funcp)transaction_1447, (funcp)transaction_1519, (funcp)transaction_1591, (funcp)transaction_1663, (funcp)transaction_1735, (funcp)transaction_1807, (funcp)transaction_44};
const int NumRelocateId= 191;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/TB_TOP_behav/xsim.reloc",  (void **)funcTab, 191);
	iki_vhdl_file_variable_register(dp + 638976);
	iki_vhdl_file_variable_register(dp + 639032);


	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/TB_TOP_behav/xsim.reloc");
}

	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net

void wrapper_func_0(char *dp)

{

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 666560, dp + 661128, 0, 18, 0, 18, 19, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 726720, dp + 661128, 19, 37, 0, 18, 19, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 786880, dp + 661128, 38, 56, 0, 18, 19, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 847040, dp + 661128, 57, 75, 0, 18, 19, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 907200, dp + 661128, 76, 94, 0, 18, 19, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 967360, dp + 661128, 95, 113, 0, 18, 19, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 1027520, dp + 661128, 114, 132, 0, 18, 19, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 1087680, dp + 661128, 133, 151, 0, 18, 19, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 1147840, dp + 661128, 152, 170, 0, 18, 19, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 1208000, dp + 661128, 171, 189, 0, 18, 19, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 1268160, dp + 661128, 190, 208, 0, 18, 19, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 1328320, dp + 661128, 209, 227, 0, 18, 19, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 1388480, dp + 661128, 228, 246, 0, 18, 19, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 1448640, dp + 661128, 247, 265, 0, 18, 19, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 1508800, dp + 661128, 266, 284, 0, 18, 19, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 1568960, dp + 661128, 285, 303, 0, 18, 19, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 1629120, dp + 661128, 304, 322, 0, 18, 19, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 1689280, dp + 661128, 323, 341, 0, 18, 19, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 1749440, dp + 661128, 342, 360, 0, 18, 19, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 1809600, dp + 661128, 361, 379, 0, 18, 19, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 1869760, dp + 661128, 380, 398, 0, 18, 19, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 1929920, dp + 661128, 399, 417, 0, 18, 19, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 1990080, dp + 661128, 418, 436, 0, 18, 19, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 2050240, dp + 661128, 437, 455, 0, 18, 19, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 2110400, dp + 661128, 456, 474, 0, 18, 19, 1);

}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/TB_TOP_behav/xsim.reloc");
	wrapper_func_0(dp);

	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/TB_TOP_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/TB_TOP_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/TB_TOP_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, (void*)0, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
