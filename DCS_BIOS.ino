#define DCSBIOS_DEFAULT_SERIAL

#include "DcsBios.h"

/* paste code snippets from the reference documentation here */
DcsBios::Switch2Pos pltAutopltEngage("PLT_AUTOPLT_ENGAGE", 8);
DcsBios::Switch2Pos pltAutopltAlt("PLT_AUTOPLT_ALT", 9);
DcsBios::Switch3Pos pltEngineCrank("PLT_ENGINE_CRANK", 18, 17);
DcsBios::Switch3Pos pltMasterArmSw("PLT_MASTER_ARM_SW", 20, 19);
DcsBios::Switch2Pos pltMasterArmCover("PLT_MASTER_ARM_COVER", 3); 
DcsBios::Switch2Pos pltGunRate("PLT_GUN_RATE", 5);
DcsBios::Switch2Pos pltSidewinderCool("PLT_SIDEWINDER_COOL", 6);
DcsBios::Switch2Pos pltMisslePrep("PLT_MISSLE_PREP", 7);
DcsBios::Switch2Pos pltHudDeclutter("PLT_HUD_DECLUTTER", 4);                 
DcsBios::Switch2Pos pltHudPwSw("PLT_HUD_PW_SW", 11);
DcsBios::Switch2Pos pltVdiPwSw("PLT_VDI_PW_SW", 10);
DcsBios::Switch2Pos pltHsdPwSw("PLT_HSD_PW_SW", 12);
DcsBios::Switch2Pos pltAfcsRoll("PLT_AFCS_ROLL", 15);
DcsBios::Switch2Pos pltAfcsYaw("PLT_AFCS_YAW", 16);
DcsBios::Switch2Pos pltAfcsPitch("PLT_AFCS_PITCH", 14);
DcsBios::Switch2Pos pltMasterReset("PLT_MASTER_RESET", A0);
DcsBios::Switch3Pos pltNoseStrutSw("PLT_NOSE_STRUT_SW", 53, 52);


void setup() {
  DcsBios::setup();
}

void loop() {
  DcsBios::loop();
}
