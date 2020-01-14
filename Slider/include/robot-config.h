using namespace vex;

extern brain Brain;

extern brain Brain;
extern motor BackL;
extern motor BackR;
extern motor FrontL;
extern motor FrontR;
extern motor intakeL;
extern motor intakeR;
extern motor angler;
extern motor bar;
extern gyro Gyro;


extern controller con;
extern competition Competition;
extern double ONE_TILE;
extern bool armCommand;
extern bool intakeLock;

// VEXcode devices

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );