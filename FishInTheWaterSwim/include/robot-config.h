using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor_group Left;
extern motor_group Right;
extern controller Controller1;
extern digital_out DigitalOutA;
extern motor Roller;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );