#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mt-plat/battery_meter.h>

/* ============================================================*/
/* define*/
/* ============================================================*/
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R	16900
#define RBAT_PULL_DOWN_R	27000
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R	61900
#define RBAT_PULL_DOWN_R	100000
#endif
#define RBAT_PULL_UP_VOLT	1800



/* ============================================================*/
/* ENUM*/
/* ============================================================*/

/* ============================================================*/
/* structure*/
/* ============================================================*/

/* ============================================================*/
/* typedef*/
/* ============================================================*/
typedef struct _BATTERY_PROFILE_STRUCT {
	signed int percentage;
	signed int voltage;
} BATTERY_PROFILE_STRUCT, *BATTERY_PROFILE_STRUCT_P;

typedef struct _R_PROFILE_STRUCT {
	signed int resistance; /* Ohm*/
	signed int voltage;
} R_PROFILE_STRUCT, *R_PROFILE_STRUCT_P;

typedef enum {
	T1_0C,
	T2_25C,
	T3_50C
} PROFILE_TEMPERATURE;

/* ============================================================*/
/* External Variables*/
/* ============================================================*/

/* ============================================================*/
/* External function*/
/* ============================================================*/

/* ============================================================*/
/* <DOD, Battery_Voltage> Table*/
/* ============================================================*/
#if (BAT_NTC_10 == 1)
	BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-30,127476},
        {-25,96862},
        {-20,74354},
        {-15,57626},
        {-10,45068},
        { -5,35548},
        {  0,28267},
        {  5,22650},
        { 10,18280},
        { 15,14855},
        { 20,12151},
        { 25,10000},
        { 30,8279},
        { 35,6892},
        { 40,5768},
        { 45,4852},
        { 50,4101},
        { 55,3483},
        { 60,2970},
        { 65,2544},
        { 70,2188},
        { 75,1889},
        { 80,1637}
};
#endif

#if (BAT_NTC_47 == 1)
	BATT_TEMPERATURE Batt_Temperature_Table[] = {
		{-20, 483954},
		{-15, 360850},
		{-10, 271697},
		{ -5, 206463},
		{  0, 158214},
		{  5, 122259},
		{ 10, 95227},
		{ 15, 74730},
		{ 20, 59065},
		{ 25, 47000},
		{ 30, 37643},
		{ 35, 30334},
		{ 40, 24591},
		{ 45, 20048},
		{ 50, 16433},
		{ 55, 13539},
		{ 60, 11210}
	};
#endif

#ifdef CONFIG_ALUMINUM_SHELL_BATTERY_ZCV  /* Aluminum shell battery ZCV table fyf add*/
/* T0 -10C*/
BATTERY_PROFILE_STRUCT battery_profile_t0[] =
{
	{0   , 4312},         
	{2   , 4293},         
	{3   , 4274},         
	{5   , 4252},         
	{6   , 4220},         
	{8   , 4181},         
	{10  , 4160},         
	{11  , 4145},         
	{13  , 4130},         
	{14  , 4116},         
	{16  , 4104},         
	{18  , 4093},         
	{19  , 4084},         
	{21  , 4075},         
	{22  , 4061},         
	{24  , 4041},         
	{26  , 4018},         
	{27  , 3996},         
	{29  , 3977},         
	{30  , 3961},         
	{32  , 3946},         
	{34  , 3934},         
	{35  , 3923},         
	{37  , 3914},         
	{38  , 3907},         
	{40  , 3899},         
	{42  , 3892},         
	{43  , 3885},         
	{45  , 3878},         
	{46  , 3872},         
	{48  , 3865},         
	{49  , 3859},         
	{51  , 3853},         
	{53  , 3847},         
	{54  , 3841},         
	{56  , 3835},         
	{58  , 3830},         
	{59  , 3825},         
	{61  , 3820},         
	{62  , 3815},         
	{64  , 3810},         
	{65  , 3806},         
	{67  , 3801},         
	{69  , 3796},         
	{70  , 3792},         
	{72  , 3787},         
	{73  , 3783},         
	{75  , 3779},         
	{77  , 3774},         
	{78  , 3769},         
	{80  , 3764},         
	{81  , 3758},         
	{83  , 3750},         
	{85  , 3745},         
	{86  , 3735},         
	{88  , 3727},         
	{89  , 3718},         
	{91  , 3711},         
	{93  , 3699},         
	{94  , 3697},         
	{96  , 3714},          
  	{96  , 3712},
  	{96  , 3710},
  	{96  , 3709},
  	{97  , 3708},
  	{97  , 3707},
  	{97  , 3707},
  	{97  , 3706},
  	{97  , 3706},
  	{97  , 3706},
  	{98  , 3705},
  	{98  , 3705},
  	{98  , 3705},
  	{98  , 3704},
  	{98  , 3704},
  	{98  , 3704},
  	{99  , 3703},
  	{99  , 3703},
  	{99  , 3703},
  	{99  , 3702},
  	{99  , 3702},
  	{99  , 3701},
  	{99  , 3701},
  	{100 , 3701},
  	{100 , 3700},
  	{100 , 3700},      
  	{100 , 3700},
  	{100 , 3700},
  	{100 , 3700} 
};      

/* T1 0C */
BATTERY_PROFILE_STRUCT battery_profile_t1[] =
{  
	{0  , 4316},         
	{1  , 4280},         
	{3  , 4242},         
	{4  , 4220},         
	{5  , 4204},         
	{7  , 4190},         
	{8  , 4176},         
	{9  , 4163},         
	{10 , 4150},         
	{12 , 4137},         
	{13 , 4124},         
	{14 , 4112},         
	{16 , 4100},         
	{17 , 4091},         
	{18 , 4084},         
	{20 , 4075},         
	{21 , 4061},         
	{22 , 4041},         
	{23 , 4018},         
	{25 , 4000},         
	{26 , 3985},         
	{27 , 3974},         
	{29 , 3965},         
	{30 , 3957},         
	{31 , 3951},         
	{33 , 3944},         
	{34 , 3936},         
	{35 , 3926},         
	{36 , 3915},         
	{38 , 3904},         
	{39 , 3892},         
	{40 , 3881},         
	{42 , 3871},         
	{43 , 3863},         
	{44 , 3855},         
	{46 , 3848},         
	{47 , 3842},         
	{48 , 3837},         
	{49 , 3831},         
	{51 , 3826},         
	{52 , 3821},         
	{53 , 3816},         
	{55 , 3812},         
	{56 , 3808},         
	{57 , 3804},         
	{59 , 3800},         
	{60 , 3797},         
	{61 , 3793},         
	{63 , 3791},         
	{64 , 3788},         
	{65 , 3786},         
	{66 , 3784},         
	{68 , 3782},         
	{69 , 3781},         
	{70 , 3779},         
	{72 , 3776},         
	{73 , 3774},         
	{74 , 3770},         
  	{76 , 3767},
	{77 , 3762},         
	{78 , 3757},          
  	{79 , 3752},
  	{81 , 3745},
  	{82 , 3738},
  	{83 , 3730},
  	{85 , 3721},
  	{86 , 3711},	
  	{87 , 3704},
  	{89 , 3700},
  	{100, 3697},
  	{100, 3694},
  	{100, 3691},
  	{100, 3687},
  	{100, 3677},
  	{100, 3649},
  	{100, 3605},
  	{100, 3571},
  	{100, 3542},
  	{100, 3519},
  	{100, 3501},
  	{100, 3487},
  	{100, 3476},
  	{100, 3467},
  	{100, 3460},
  	{100, 3453},
  	{100, 3448},
  	{100, 3448},
  	{100, 3448},
  	{100, 3448}
};

/* T2 25C*/
BATTERY_PROFILE_STRUCT battery_profile_t2[] = 
{
	{0   , 4334},         
	{1   , 4317},         
	{2   , 4302},         
	{3   , 4287},         
	{5   , 4273},         
	{6   , 4259},         
	{7   , 4246},         
	{8   , 4232},         
	{9   , 4219},         
	{10  , 4205},         
	{11  , 4192},         
	{13  , 4179},         
	{14  , 4167},         
	{15  , 4154},         
	{16  , 4141},         
	{17  , 4129},         
	{18  , 4117},         
	{19  , 4105},         
	{21  , 4093},         
	{22  , 4081},         
	{23  , 4071},         
	{24  , 4060},         
	{25  , 4049},         
	{26  , 4037},         
	{27  , 4025},         
	{29  , 4014},         
	{30  , 4003},         
	{31  , 3993},         
	{32  , 3984},         
	{33  , 3976},         
	{34  , 3968},         
	{35  , 3960},         
	{37  , 3951},         
	{38  , 3943},         
	{39  , 3935},         
	{40  , 3926},         
	{41  , 3917},         
	{42  , 3907},         
	{43  , 3894},         
	{45  , 3880},         
	{46  , 3869},         
	{47  , 3860},         
	{48  , 3852},         
	{49  , 3844},         
	{50  , 3838},         
	{51  , 3832},         
	{53  , 3827},         
	{54  , 3822},         
	{55  , 3817},         
	{56  , 3812},         
	{57  , 3808},         
	{58  , 3804},         
	{59  , 3800},         
	{61  , 3797},         
	{62  , 3793},         
	{63  , 3790},         
	{64  , 3787},         
	{65  , 3784},         
	{66  , 3782},         
	{67  , 3779},         
	{69  , 3777},          
  	{70  , 3775},
  	{71  , 3773},
  	{72  , 3770},
  	{73  , 3767},
  	{74  , 3764},
  	{75  , 3760},
  	{77  , 3755},
  	{78  , 3750},
  	{79  , 3745},
  	{80  , 3741},
  	{81  , 3737},
  	{82  , 3732},
  	{83  , 3726},
    {85  , 3718},
    {86  , 3710},
    {87  , 3702},
    {88  , 3690},
    {89  , 3682},
    {90  , 3679},
    {92  , 3677},
    {93  , 3673},
    {94  , 3669},
    {95  , 3663},
    {96  , 3649},
    {100 , 3608},
    {100 , 3545},
    {100 , 3458},
    {100 , 3320} 
};

/* T3 50C*/
BATTERY_PROFILE_STRUCT battery_profile_t3[] =
{
	{0   , 4340},         
	{1   , 4324},         
	{2   , 4309},         
	{4   , 4295},         
	{5   , 4280},         
	{6   , 4266},         
	{7   , 4252},         
	{8   , 4239},         
	{9   , 4225},         
	{11  , 4211},         
	{12  , 4198},         
	{13  , 4185},         
	{14  , 4172},         
	{15  , 4159},         
	{16  , 4146},         
	{18  , 4133},         
	{19  , 4121},         
	{20  , 4108},         
	{21  , 4096},         
	{22  , 4084},         
	{24  , 4073},         
	{25  , 4061},         
	{26  , 4049},         
	{27  , 4038},         
	{28  , 4027},         
	{29  , 4017},         
	{31  , 4006},         
	{32  , 3996},         
	{33  , 3986},         
	{34  , 3976},         
	{35  , 3966},         
	{36  , 3957},         
	{38  , 3948},         
	{39  , 3938},         
	{40  , 3928},         
	{41  , 3918},         
	{42  , 3907},         
	{44  , 3894},         
	{45  , 3882},         
	{46  , 3872},         
	{47  , 3863},         
	{48  , 3855},         
	{49  , 3848},         
	{51  , 3842},         
	{52  , 3836},         
	{53  , 3830},         
	{54  , 3825},         
	{55  , 3819},         
	{56  , 3815},         
	{58  , 3810},         
	{59  , 3806},         
	{60  , 3801},         
	{61  , 3797},         
	{62  , 3794},         
	{64  , 3790},         
	{65  , 3786},         
	{66  , 3783},         
	{67  , 3780},         
	{68  , 3776},         
	{69  , 3772},         
	{71  , 3765},          
 	{72  , 3756},
 	{73  , 3749},
 	{74  , 3745},
 	{75  , 3740},
 	{76  , 3735},
 	{78  , 3731},	  
 	{79  , 3726},
 	{80  , 3722},
 	{81  , 3718},
 	{82  , 3712},
 	{84  , 3704},
 	{85  , 3697},
 	{86  , 3688},
 	{87  , 3678},
 	{88  , 3673},
 	{89  , 3672},
 	{91  , 3671},
 	{92  , 3670},
 	{93  , 3668},
 	{94  , 3663},
 	{95  , 3642},
 	{96  , 3595},
 	{98  , 3531},
 	{99  , 3441},
 	{100 , 3441},
 	{100 , 3441},
 	{100 , 3441},
 	{100 , 3441} 
};           

/* battery profile for actual temperature. The size should be the same as T1, T2 and T3*/
BATTERY_PROFILE_STRUCT battery_profile_temperature[] =
{
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },	
	{0  , 0 },      
	{0  , 0 },      
	{0  , 0 },      
	{0  , 0 },      
	{0  , 0 },      
	{0  , 0 },      
	{0  , 0 },      
	{0  , 0 },      
	{0  , 0 },      
	{0  , 0 },      
	{0  , 0 },      
	{0  , 0 },      
	{0  , 0 },      
	{0  , 0 },      
	{0  , 0 },      
	{0  , 0 },      
	{0  , 0 },      
	{0  , 0 },      
	{0  , 0 },
	{0  , 0 },	
        {0  , 0 },
        {0  , 0 }
};    

/* ============================================================*/
/* <Rbat, Battery_Voltage> Table*/
/* ============================================================*/
/* T0 -10C*/
R_PROFILE_STRUCT r_profile_t0[] =
{
	{648  , 4312},         
	{648  , 4293},         
	{650  , 4274},         
	{765  , 4252},         
	{688  , 4220},         
	{870  , 4181},         
	{868  , 4160},         
	{945  , 4145},         
	{968  , 4130},         
	{963  , 4116},         
	{938  , 4104},         
	{918  , 4093},         
	{903  , 4084},         
	{998  , 4075},         
	{988  , 4061},         
	{905  , 4041},         
	{973  , 4018},         
	{928  , 3996},         
	{898  , 3977},         
	{963  , 3961},         
	{885  , 3946},         
	{880  , 3934},         
	{958  , 3923},         
	{928  , 3914},         
	{865  , 3907},         
	{825  , 3899},         
	{870  , 3892},         
	{890  , 3885},         
	{850  , 3878},         
	{775  , 3872},         
	{745  , 3865},         
	{750  , 3859},         
	{790  , 3853},         
	{845  , 3847},         
	{875  , 3841},         
	{865  , 3835},         
	{855  , 3830},         
	{828  , 3825},         
	{808  , 3820},         
	{813  , 3815},         
	{820  , 3810},         
	{835  , 3806},         
	{830  , 3801},         
	{835  , 3796},         
	{835  , 3792},         
	{833  , 3787},         
	{835  , 3783},         
	{833  , 3779},         
	{963  , 3774},         
	{1000 , 3769},         
	{898  , 3764},         
	{1013 , 3758},         
	{1065 , 3750},         
	{960  , 3745},         
	{1245 , 3735},         
	{1023 , 3727},         
	{1263 , 3718},         
	{1155 , 3711},         
	{1155 , 3699},         
	{1155 , 3697},         
	{1155 , 3714},          
  	{1283 , 3712},
  	{1278 , 3710},
  	{1273 , 3709},
  	{1273 , 3708},
  	{1270 , 3707},
  	{1270 , 3707},	
  	{1268 , 3706},
  	{1268 , 3706},
  	{1268 , 3706},
  	{1265 , 3705},
  	{1265 , 3705},
  	{1263 , 3705},
  	{1263 , 3704},
  	{1263 , 3704},
  	{1260 , 3704},
  	{1258 , 3703},
  	{1258 , 3703},
  	{1258 , 3703},
  	{1258 , 3702},
  	{1258 , 3702},
  	{1255 , 3701},
  	{1253 , 3701},
  	{1255 , 3701},
  	{1253 , 3700},
  	{1253 , 3700},	
  	{1253 , 3700},
  	{1253 , 3700},
  	{1253 , 3700}
};      

/* T1 0C*/
R_PROFILE_STRUCT r_profile_t1[] = 
{
	{463   , 4316},         
	{463   , 4280},         
	{538   , 4242},         
	{598   , 4220},         
	{610   , 4204},         
	{618   , 4190},         
	{620   , 4176},         
	{625   , 4163},         
	{630   , 4150},         
	{635   , 4137},         
	{638   , 4124},         
	{640   , 4112},         
	{643   , 4100},         
	{645   , 4091},         
	{653   , 4084},         
	{655   , 4075},         
	{653   , 4061},         
	{643   , 4041},         
	{633   , 4018},         
	{633   , 4000},         
	{630   , 3985},         
	{628   , 3974},         
	{628   , 3965},         
	{625   , 3957},         
	{630   , 3951},         
	{630   , 3944},         
	{628   , 3936},         
	{623   , 3926},         
	{615   , 3915},         
	{608   , 3904},         
	{600   , 3892},         
	{593   , 3881},         
	{588   , 3871},         
	{588   , 3863},         
	{585   , 3855},         
	{585   , 3848},         
	{585   , 3842},         
	{588   , 3837},         
	{588   , 3831},         
	{590   , 3826},         
	{595   , 3821},         
	{595   , 3816},         
	{598   , 3812},         
	{603   , 3808},         
	{603   , 3804},         
	{605   , 3800},         
	{610   , 3797},         
	{608   , 3793},         
	{608   , 3791},         
	{600   , 3788},         
	{598   , 3786},         
	{598   , 3784},         
	{598   , 3782},         
	{603   , 3781},         
	{608   , 3779},         
	{610   , 3776},         
	{618   , 3774},         
	{620   , 3770},         
	{633   , 3767},         
	{643   , 3762},         
	{653   , 3757},          
  	{663   , 3752},
  	{670   , 3745},
  	{675   , 3738},
  	{685   , 3730},
  	{695   , 3721},
  	{705   , 3711},	  
  	{723   , 3704},
  	{743   , 3700},
  	{768   , 3697},
  	{800   , 3694},
  	{843   , 3691},
  	{895   , 3687},
  	{953   , 3677},
  	{983   , 3649},
  	{956   , 3605},
  	{928   , 3571},
  	{858   , 3542},
  	{798   , 3519},
  	{755   , 3501},
  	{718   , 3487},
  	{693   , 3476},
  	{670   , 3467},
  	{650   , 3460},
  	{638   , 3453},
  	{623   , 3448},
  	{628   , 3448},
  	{628   , 3448},
  	{628   , 3448}
};     

/* T2 25C*/
R_PROFILE_STRUCT r_profile_t2[] = 
{
	{143  , 4334},         
	{143  , 4317},         
	{145  , 4302},         
	{143  , 4287},         
	{145  , 4273},         
	{145  , 4259},         
	{145  , 4246},         
	{145  , 4232},         
	{145  , 4219},         
	{145  , 4205},         
	{145  , 4192},         
	{145  , 4179},         
	{148  , 4167},         
	{148  , 4154},         
	{148  , 4141},         
	{148  , 4129},         
	{150  , 4117},         
	{150  , 4105},         
	{153  , 4093},         
	{150  , 4081},         
	{155  , 4071},         
	{155  , 4060},         
	{158  , 4049},         
	{158  , 4037},         
	{160  , 4025},         
	{160  , 4014},         
	{160  , 4003},         
	{163  , 3993},         
	{163  , 3984},         
	{165  , 3976},         
	{168  , 3968},         
	{173  , 3960},         
	{173  , 3951},         
	{175  , 3943},         
	{180  , 3935},         
	{178  , 3926},         
	{178  , 3917},         
	{178  , 3907},         
	{170  , 3894},         
	{160  , 3880},         
	{155  , 3869},         
	{153  , 3860},         
	{150  , 3852},         
	{148  , 3844},         
	{148  , 3838},         
	{148  , 3832},         
	{148  , 3827},         
	{150  , 3822},         
	{150  , 3817},         
	{148  , 3812},         
	{150  , 3808},         
	{153  , 3804},         
	{153  , 3800},         
	{155  , 3797},         
	{153  , 3793},         
	{155  , 3790},         
	{155  , 3787},         
	{155  , 3784},         
	{158  , 3782},         
	{155  , 3779},         
	{158  , 3777},          
  	{158  , 3775},
  	{158  , 3773},
  	{158  , 3770},
  	{158  , 3767},
  	{158  , 3764},
  	{158  , 3760},	
  	{158  , 3755},
  	{158  , 3750},
  	{160  , 3745},
  	{163  , 3741},
  	{165  , 3737},
  	{168  , 3732},
  	{170  , 3726},
  	{173  , 3718},
  	{175  , 3710},
  	{180  , 3702},
  	{178  , 3690},
  	{183  , 3682},
  	{188  , 3679},
  	{195  , 3677},
  	{203  , 3673},
  	{215  , 3669},
  	{233  , 3663},
  	{258  , 3649},
  	{285  ,	3608},  
  	{343  , 3545},
  	{468  , 3458},
  	{468  , 3320} 
};

/* T3 50C*/
R_PROFILE_STRUCT r_profile_t3[] = 
{
	{83  , 4340},         
	{83  , 4324},         
	{83  , 4309},         
	{85  , 4295},         
	{85  , 4280},         
	{85  , 4266},         
	{85  , 4252},         
	{88  , 4239},         
	{85  , 4225},         
	{85  , 4211},         
	{85  , 4198},         
	{88  , 4185},         
	{88  , 4172},         
	{88  , 4159},         
	{88  , 4146},         
	{88  , 4133},         
	{88  , 4121},         
	{88  , 4108},         
	{90  , 4096},         
	{90  , 4084},         
	{93  , 4073},         
	{90  , 4061},         
	{90  , 4049},         
	{93  , 4038},         
	{93  , 4027},         
	{95  , 4017},         
	{95  , 4006},         
	{95  , 3996},         
	{98  , 3986},         
	{98  , 3976},         
	{98  , 3966},         
	{103 , 3957},         
	{103 , 3948},         
	{105 , 3938},         
	{103 , 3928},         
	{105 , 3918},         
	{103 , 3907},         
	{98  , 3894},         
	{93  , 3882},         
	{93  , 3872},         
	{90  , 3863},         
	{88  , 3855},         
	{88  , 3848},         
	{88  , 3842},         
	{90  , 3836},         
	{88  , 3830},         
	{90  , 3825},         
	{88  , 3819},         
	{90  , 3815},         
	{90  , 3810},         
	{93  , 3806},         
	{90  , 3801},         
	{93  , 3797},         
	{95  , 3794},         
	{95  , 3790},         
	{95  , 3786},         
	{98  , 3783},         
	{100 , 3780},         
	{100 , 3776},         
	{98  , 3772},         
	{93  , 3765},          
  	{90  , 3756},
  	{90  , 3749},
  	{93  , 3745},
  	{90  , 3740},
  	{90  , 3735},
  	{93  , 3731},      
  	{90  , 3726},
  	{93  , 3722},
  	{93  , 3718},
  	{93  , 3712},
  	{90  , 3704},
  	{93  , 3697},
  	{93  , 3688},
  	{93  , 3678},
  	{88  , 3673},
  	{90  , 3672},
  	{93  , 3671},
  	{95  , 3670},
  	{100 , 3668},
  	{103 , 3663},
  	{100 , 3642},
  	{103 , 3595},
  	{113 , 3531},
  	{133 , 3441},
  	{133 , 3441},
  	{134 , 3441},
  	{135 , 3441},
  	{136 , 3441} 
}; 

/* r-table profile for actual temperature. The size should be the same as T1, T2 and T3*/
R_PROFILE_STRUCT r_profile_temperature[] = 
{
  	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }		
	{0  , 0 }
};    
#else /*Polymer battery ZCV table fyf add*/

// T0 -10C
BATTERY_PROFILE_STRUCT battery_profile_t0[] =
{
	{0   , 4325},         
	{3   , 4293},         
	{5   , 4265},         
	{8   , 4236},         
	{10  , 4196},         
	{13  , 4143},         
	{15  , 4114},         
	{18  , 4096},         
	{21  , 4076},         
	{23  , 4047},         
	{26  , 4007},         
	{28  , 3974},         
	{31  , 3949},         
	{33  , 3929},         
	{36  , 3914},         
	{38  , 3900},         
	{41  , 3888},         
	{44  , 3876},         
	{46  , 3865},         
	{49  , 3854},         
	{51  , 3844},         
	{54  , 3835},         
	{57  , 3826},         
	{59  , 3818},         
	{62  , 3810},         
	{64  , 3802},         
	{67  , 3795},         
	{69  , 3787},         
	{72  , 3779},         
	{74  , 3771},         
	{77  , 3761},         
	{80  , 3749},         
	{82  , 3736},         
	{85  , 3724},         
	{87  , 3715},         
	{90  , 3707},         
	{92  , 3702},         
	{93  , 3698},         
	{94  , 3694},         
	{95  , 3688},         
	{96  , 3681},         
	{97  , 3673},         
	{97  , 3664},         
	{98  , 3654},         
	{98  , 3643},         
	{99  , 3633},         
	{99  , 3624},         
	{99  , 3617},         
	{99  , 3610},         
	{99  , 3605},         
	{99  , 3600},         
	{100 , 3596},         
	{100 , 3592},         
	{100 , 3589},         
	{100 , 3587},         
	{100 , 3584},         
	{100 , 3582},         
	{100 , 3580}   
};                 
             
// T1 0C     
BATTERY_PROFILE_STRUCT battery_profile_t1[] =
{        
	{0  , 4326},         
	{2  , 4289},         
	{4  , 4263},         
	{6  , 4239},         
	{8  , 4216},         
	{10 , 4195},         
	{12 , 4174},         
	{14 , 4153},         
	{16 , 4132},         
	{18 , 4112},         
	{20 , 4095},         
	{22 , 4083},         
	{24 , 4063},         
	{26 , 4027},         
	{28 , 3995},         
	{30 , 3973},         
	{32 , 3958},         
	{34 , 3947},         
	{36 , 3933},         
	{39 , 3917},         
	{41 , 3900},         
	{43 , 3884},         
	{45 , 3868},         
	{47 , 3856},         
	{49 , 3844},         
	{51 , 3834},         
	{53 , 3825},         
	{55 , 3817},         
	{57 , 3810},         
	{59 , 3803},         
	{61 , 3797},         
	{63 , 3792},         
	{65 , 3788},         
	{67 , 3784},         
	{69 , 3782},         
	{71 , 3779},         
	{73 , 3775},         
	{75 , 3771},         
	{77 , 3765},         
	{79 , 3757},         
	{81 , 3747},         
	{83 , 3735},         
	{85 , 3721},         
	{87 , 3708},         
	{89 , 3700},         
	{91 , 3695},         
	{93 , 3689},         
	{95 , 3675},         
	{97 , 3625},         
	{98 , 3581},         
	{99 , 3545},         
	{99 , 3514},         
	{99 , 3490},         
	{100, 3472},         
	{100, 3457},         
	{100, 3446},         
	{100, 3437},         
	{100, 3430}    
};           

// T2 25C
BATTERY_PROFILE_STRUCT battery_profile_t2[] =
{
	{0  , 4343},         
	{2  , 4316},         
	{4  , 4292},         
	{6  , 4269},         
	{8  , 4246},         
	{10 , 4224},         
	{12 , 4202},         
	{14 , 4181},         
	{16 , 4160},         
	{18 , 4139},         
	{20 , 4118},         
	{22 , 4098},         
	{23 , 4080},         
	{25 , 4069},         
	{27 , 4048},         
	{29 , 4014},         
	{31 , 3991},         
	{33 , 3977},         
	{35 , 3969},         
	{37 , 3956},         
	{39 , 3940},         
	{41 , 3923},         
	{43 , 3904},         
	{45 , 3884},         
	{47 , 3868},         
	{49 , 3854},         
	{51 , 3843},         
	{53 , 3834},         
	{55 , 3825},         
	{57 , 3817},         
	{59 , 3810},         
	{61 , 3803},         
	{63 , 3797},         
	{65 , 3792},         
	{66 , 3786},         
	{68 , 3781},         
	{70 , 3776},         
	{72 , 3772},         
	{74 , 3767},         
	{76 , 3760},         
	{78 , 3752},         
	{80 , 3745},         
	{82 , 3737},         
	{84 , 3725},         
	{86 , 3712},         
	{88 , 3695},         
	{90 , 3688},         
	{92 , 3679},         
	{94 , 3666},         
	{96 , 3629},         
	{98 , 3567},         
	{100, 3431},         
	{100, 3307},         
	{100, 3290},         
	{100, 3283},         
	{100, 3280},         
	{100, 3278},         
	{100, 3276}  
};          
            
// T3 50C   
BATTERY_PROFILE_STRUCT battery_profile_t3[] =
{
	{0  , 4345},         
	{2  , 4321},         
	{4  , 4297},         
	{6  , 4274},         
	{8  , 4252},         
	{10 , 4229},         
	{12 , 4207},         
	{14 , 4185},         
	{16 , 4164},         
	{18 , 4142},         
	{20 , 4122},         
	{22 , 4101},         
	{24 , 4081},         
	{25 , 4062},         
	{27 , 4044},         
	{29 , 4025},         
	{31 , 4006},         
	{33 , 3990},         
	{35 , 3975},         
	{37 , 3959},         
	{39 , 3945},         
	{41 , 3929},         
	{43 , 3910},         
	{45 , 3888},         
	{47 , 3870},         
	{49 , 3856},         
	{51 , 3845},         
	{53 , 3835},         
	{55 , 3825},         
	{57 , 3817},         
	{59 , 3809},         
	{61 , 3803},         
	{63 , 3796},         
	{65 , 3790},         
	{67 , 3785},         
	{69 , 3780},         
	{70 , 3773},         
	{72 , 3760},         
	{74 , 3751},         
	{76 , 3743},         
	{78 , 3735},         
	{80 , 3727},         
	{82 , 3721},         
	{84 , 3709},         
	{86 , 3696},         
	{88 , 3679},         
	{90 , 3676},         
	{92 , 3674},         
	{94 , 3672},         
	{96 , 3651},         
	{98 , 3568},         
	{100, 3417},         
	{100, 3265},         
	{100, 3244},         
	{100, 3239},         
	{100, 3237},         
	{100, 3236},         
	{100, 3234}
};           

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUCT battery_profile_temperature[] =
{
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};      
        
// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUCT r_profile_t0[] =
{       
	{790   , 4325},         
	{790   , 4293},         
	{808   , 4265},         
	{820   , 4236},         
	{838   , 4196},         
	{950   , 4143},         
	{1093  , 4114},         
	{1115  , 4096},         
	{1128  , 4076},         
	{1120  , 4047},         
	{1088  , 4007},         
	{1070  , 3974},         
	{1063  , 3949},         
	{1060  , 3929},         
	{1060  , 3914},         
	{1055  , 3900},         
	{1055  , 3888},         
	{1053  , 3876},         
	{1055  , 3865},         
	{1055  , 3854},         
	{1058  , 3844},         
	{1063  , 3835},         
	{1065  , 3826},         
	{1073  , 3818},         
	{1078  , 3810},         
	{1083  , 3802},         
	{1093  , 3795},         
	{1100  , 3787},         
	{1108  , 3779},         
	{1120  , 3771},         
	{1133  , 3761},         
	{1145  , 3749},         
	{1160  , 3736},         
	{1180  , 3724},         
	{1213  , 3715},         
	{1253  , 3707},         
	{1255  , 3702},         
	{1248  , 3698},         
	{1235  , 3694},         
	{1220  , 3688},         
	{1203  , 3681},         
	{1185  , 3673},         
	{1163  , 3664},         
	{1135  , 3654},         
	{1108  , 3643},         
	{1085  , 3633},         
	{1060  , 3624},         
	{1043  , 3617},         
	{1028  , 3610},         
	{1015  , 3605},         
	{1000  , 3600},         
	{995   , 3596},         
	{983   , 3592},         
	{973   , 3589},         
	{970   , 3587},         
	{965   , 3584},         
	{958   , 3582},         
	{953   , 3580}         
};           

// T1 0C
R_PROFILE_STRUCT r_profile_t1[] =
{
	{505   ,4326 },         
	{505   ,4289 },         
	{515   ,4263 },         
	{518   ,4239 },         
	{520   ,4216 },         
	{523   ,4195 },         
	{525   ,4174 },         
	{525   ,4153 },         
	{525   ,4132 },         
	{525   ,4112 },         
	{530   ,4095 },         
	{550   ,4083 },         
	{558   ,4063 },         
	{535   ,4027 },         
	{520   ,3995 },         
	{518   ,3973 },         
	{520   ,3958 },         
	{525   ,3947 },         
	{520   ,3933 },         
	{510   ,3917 },         
	{500   ,3900 },         
	{493   ,3884 },         
	{485   ,3868 },         
	{485   ,3856 },         
	{483   ,3844 },         
	{485   ,3834 },         
	{488   ,3825 },         
	{493   ,3817 },         
	{498   ,3810 },         
	{503   ,3803 },         
	{505   ,3797 },         
	{513   ,3792 },         
	{518   ,3788 },         
	{525   ,3784 },         
	{535   ,3782 },         
	{545   ,3779 },         
	{555   ,3775 },         
	{568   ,3771 },         
	{580   ,3765 },         
	{595   ,3757 },         
	{610   ,3747 },         
	{633   ,3735 },         
	{655   ,3721 },         
	{685   ,3708 },         
	{725   ,3700 },         
	{783   ,3695 },         
	{865   ,3689 },         
	{988   ,3675 },         
	{977   ,3625 },         
	{953   ,3581 },         
	{868   ,3545 },         
	{788   ,3514 },         
	{728   ,3490 },         
	{683   ,3472 },         
	{643   ,3457 },         
	{618   ,3446 },         
	{595   ,3437 },         
	{580   ,3430 }
};                   
                     
// T2 25C            
R_PROFILE_STRUCT r_profile_t2[] =
{
	{145 ,4343 },         
	{145 ,4316 },         
	{145 ,4292 },         
	{145 ,4269 },         
	{145 ,4246 },         
	{145 ,4224 },         
	{145 ,4202 },         
	{145 ,4181 },         
	{148 ,4160 },         
	{150 ,4139 },         
	{150 ,4118 },         
	{155 ,4098 },         
	{158 ,4080 },         
	{168 ,4069 },         
	{168 ,4048 },         
	{158 ,4014 },         
	{163 ,3991 },         
	{168 ,3977 },         
	{178 ,3969 },         
	{180 ,3956 },         
	{175 ,3940 },         
	{173 ,3923 },         
	{165 ,3904 },         
	{150 ,3884 },         
	{145 ,3868 },         
	{140 ,3854 },         
	{138 ,3843 },         
	{140 ,3834 },         
	{140 ,3825 },         
	{140 ,3817 },         
	{143 ,3810 },         
	{143 ,3803 },         
	{145 ,3797 },         
	{148 ,3792 },         
	{148 ,3786 },         
	{148 ,3781 },         
	{148 ,3776 },         
	{150 ,3772 },         
	{148 ,3767 },         
	{145 ,3760 },         
	{140 ,3752 },         
	{140 ,3745 },         
	{145 ,3737 },         
	{145 ,3725 },         
	{148 ,3712 },         
	{145 ,3695 },         
	{165 ,3688 },         
	{153 ,3679 },         
	{293 ,3666 },         
	{178 ,3629 },         
	{118 ,3567 },         
	{190 ,3431 },         
	{270 ,3307 },         
	{228 ,3290 },         
	{210 ,3283 },         
	{200 ,3280 },         
	{198 ,3278 },         
	{190 ,3276 }
}; 

// T3 50C
R_PROFILE_STRUCT r_profile_t3[] =
{
	{95   ,4345 },         
	{95   ,4321 },         
	{93   ,4297 },         
	{93   ,4274 },         
	{95   ,4252 },         
	{93   ,4229 },         
	{95   ,4207 },         
	{95   ,4185 },         
	{95   ,4164 },         
	{95   ,4142 },         
	{98   ,4122 },         
	{98   ,4101 },         
	{98   ,4081 },         
	{100  ,4062 },         
	{103  ,4044 },         
	{103  ,4025 },         
	{105  ,4006 },         
	{105  ,3990 },         
	{110  ,3975 },         
	{113  ,3959 },         
	{118  ,3945 },         
	{123  ,3929 },         
	{120  ,3910 },         
	{105  ,3888 },         
	{100  ,3870 },         
	{98   ,3856 },         
	{95   ,3845 },         
	{98   ,3835 },         
	{95   ,3825 },         
	{98   ,3817 },         
	{98   ,3809 },         
	{100  ,3803 },         
	{103  ,3796 },         
	{105  ,3790 },         
	{108  ,3785 },         
	{110  ,3780 },         
	{110  ,3773 },         
	{100  ,3760 },         
	{100  ,3751 },         
	{98   ,3743 },         
	{98   ,3735 },         
	{98   ,3727 },         
	{100  ,3721 },         
	{100  ,3709 },         
	{100  ,3696 },         
	{98   ,3679 },         
	{98   ,3676 },         
	{100  ,3674 },         
	{110  ,3672 },         
	{110  ,3651 },         
	{120  ,3568 },         
	{148  ,3417 },         
	{163  ,3265 },         
	{115  ,3244 },         
	{100  ,3239 },         
	{93   ,3237 },         
	{90   ,3236 },         
	{90   ,3234 }
}; 

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUCT r_profile_temperature[] =
{
  	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }	
};

#endif

/* ============================================================*/
/* function prototype*/
/* ============================================================*/
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUCT_P fgauge_get_profile(unsigned int temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUCT_P fgauge_get_profile_r_table(unsigned int temperature);

#endif

