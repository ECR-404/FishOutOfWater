#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor LeftMotorA = motor(PORT8, ratio18_1, false);
motor LeftMotorB = motor(PORT20, ratio18_1, true);
motor_group Left = motor_group(LeftMotorA, LeftMotorB);
motor RightMotorA = motor(PORT6, ratio18_1, true);
motor RightMotorB = motor(PORT18, ratio18_1, false);
motor_group Right = motor_group(RightMotorA, RightMotorB);
controller Controller1 = controller(primary);
digital_out DigitalOutA = digital_out(Brain.ThreeWirePort.A);
motor Roller = motor(PORT19, ratio18_1, false);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}