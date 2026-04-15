/*Frequencies are 10Hz: 100M is written 10000000
  Max bandname length is 11
  AVAILABLE STEPS ARE 
  S_STEP_0_01kHz,  S_STEP_0_1kHz,  S_STEP_0_5kHz,  S_STEP_1_0kHz,  S_STEP_2_5kHz,  S_STEP_5_0kHz,  S_STEP_6_25kHz,
  S_STEP_8_33kHz,  S_STEP_10_0kHz,  S_STEP_12_5kHz,  S_STEP_25_0kHz,  S_STEP_100kHz,  S_STEP_500kHz, */


#ifdef ENABLE_FULL_BAND
static const bandparameters BParams[MAX_BANDS] = {
   {"AIR 25k",       11500000,         14000000,       S_STEP_25_0kHz,   MODULATION_AM},
	{"SATCOM",        24000000,         27000000,       S_STEP_10_0kHz,   MODULATION_FM},
	{"HAM 144",      14400000,         14600000,       S_STEP_12_5kHz,   MODULATION_FM},
	{"136-144",      13600000,         14400000,       S_STEP_25_0kHz,   MODULATION_FM},
	{"146-150",      14600000,         15000000,       S_STEP_25_0kHz,   MODULATION_FM},
	{"RAIL",          15000000,         15550000,       S_STEP_25_0kHz,   MODULATION_FM},
	{"LPD433",        43307500,         43377500,       S_STEP_6_25kHz,   MODULATION_FM},
	{"PMR 446",       44600625,         44619375,       S_STEP_12_5kHz,   MODULATION_FM},
	{"HAM 430",      43000000,         44000000,       S_STEP_12_5kHz,   MODULATION_FM},
	{"VHF-H",         16200000,         17000000,       S_STEP_25_0kHz,   MODULATION_FM},
	{"VHF-H1",        17000000,         17400000,       S_STEP_25_0kHz,   MODULATION_FM},
	{"PMR 446d",      44600312,         44619687,       S_STEP_6_25kHz,   MODULATION_FM},
    {"UHF400",        40000000,         42000000,       S_STEP_25_0kHz,   MODULATION_FM},
	{"UHF420",        42000000,         43300000,       S_STEP_25_0kHz,   MODULATION_FM},
	{"UHF440",        44000000,         45500000,       S_STEP_25_0kHz,   MODULATION_FM},
	{"UHF455",        45500000,         47000000,       S_STEP_25_0kHz,   MODULATION_FM},
	{"Meteo_sondy",   40300000,         40400000,       S_STEP_12_5kHz,   MODULATION_FM},
	{"REMOTE433",     43200000,         43400000,       S_STEP_5_0kHz,    MODULATION_FM}, //Remote control search
    {"AIR MIL1",      22500000,         24107500,       S_STEP_25_0kHz,   MODULATION_AM},
    {"AIR MIL2",      33540000,         33970000,       S_STEP_25_0kHz,   MODULATION_AM},
	{"SATWX_137",     13700000,         13800000,       S_STEP_12_5kHz,   MODULATION_FM},
    {"MARINE",        15550000,         16202500,       S_STEP_25_0kHz,   MODULATION_FM},
	{"FULL",           1700000,        130000000,        S_STEP_500kHz,   MODULATION_FM},
	{"24MHz",          2489000,          2499000,       S_STEP_5_0kHz,    MODULATION_AM},
	{"21MHz",          2100000,          2145000,       S_STEP_5_0kHz,    MODULATION_AM},
	{"18MHz",          1806800,          1816800,       S_STEP_5_0kHz,    MODULATION_AM},
	{"17MHz",          1740000,          1780000,       S_STEP_5_0kHz,    MODULATION_AM},
	{"28MHz",        2800000,           2970000,       S_STEP_5_0kHz,    MODULATION_SSB},
	{"CB_27",          2651500,          2800000,       S_STEP_5_0kHz,    MODULATION_SSB},
	{"CB_135",         2700000,          2714000,       S_STEP_5_0kHz,    MODULATION_AM},
}; 
#endif


