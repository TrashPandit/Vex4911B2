#include "main.h"

auto left = okapi::MotorGroup({-1,-2, -6});
auto right = okapi::MotorGroup({3,4, 7});
pros::Motor intake1 = pros::Motor(8);
pros::Motor intake2 = pros::Motor(9);
// pros::Motor intake2 = pros::Motor(6);
pros::Motor tilter = pros::Motor(7);

using namespace okapi;
auto chassis = okapi::ChassisControllerFactory::create(
  left,
  right,
  okapi::AbstractMotor::gearset::green,
  {4 * okapi::inch, 14 * okapi::inch}
);
auto profileController = okapi::AsyncControllerFactory::motionProfile(
  1.0,  // Maximum linear velocity of the Chassis in m/s
  2.0,  // Maximum linear acceleration of the Chassis in m/s/s
  10.0, // Maximum linear jerk of the Chassis in m/s/s/s
  chassis // Chassis Controller
);


void autonomous() {
  // programmingSkills::initialize();
  // profileController.generatePath({Point{0_ft, 0_ft, 0_deg}, Point{3_ft, 0_ft, 0_deg}}, "A");
  // profileController.generatePath({Point{0_ft, 0_ft, 0_deg}, Point{0.5_ft, 0_ft, -90_deg}}, "B");
  // profileController.setTarget("A");
  // profileController.waitUntilSettled();
  // profileController.setTarget("A", true);
  // profileController.waitUntilSettled();
  // left.moveRelative(2, 80);
  // right.moveRelative(-2, 80);
  // profileController.setTarget("B");
  // profileController.waitUntilSettled();
  chassis.moveDistance(1_ft);
  chassis.moveDistance(-1_ft);
  bool red = false;
  bool blue = true;
  // if(blue == true && red == false){
    // intake1.move(127);
    // intake2.move(-127);
    // pros::delay(1000);
    // intake1.move(-127);
    // intake2.move(127);
    // chassis.moveDistance(18_in);
    // left.moveRelative(10, 80);
    // right.moveRelative(-10, 80);
    // intake1.move(127);
    // intake2.move(-127);
    // pros::delay(1000);
    // intake1.move(0);
    // intake2.move(0);
    // intake1.move(-127);
    // intake2.move(127);
    // left.moveRelative(50, 80);
    // right.moveRelative(50, 80);
    // chassis.moveDistance(52_in);
    // chassis.moveDistance(-52_in);
    // intake1.move(0);
    // intake2.move(0);
    // left.moveRelative(-11, 80);
    // left.moveRelative(11, 80);
    // chassis.moveDistance(1_ft);
    // intake1.move(127);
    // intake2.move(-127);
    // pros::delay(750);
    // tilter.move(80);
    // pros::delay(1000);
    // intake1.move(50);
    // intake2.move(-50);
    // pros::delay(750);
    // chassis.moveDistance(-1_ft);
  // }
  // if(red == true && blue == false){
  //   intake1.move(127);
  //   intake2.move(127);
  //   chassis.moveDistance(52_in);
  //   chassis.moveDistance(-52_in);
  //   intake1.move(0);
  //   intake2.move(0);
  //   left.moveRelative(11, 80);
  //   left.moveRelative(-11, 80);
  //   chassis.moveDistance(1_ft);
  //   intake1.move(-127);
  //   intake2.move(-127);
  //   pros::delay(750);
  //   tilter.move(80);
  //   pros::delay(1000);
  //   intake1.move(-50);
  //   intake2.move(-50);
  //   pros::delay(750);
  //   chassis.moveDistance(-1_ft);
  // }
  // if(red == false && other == false){
  //     intake1.move(127);
  //     intake2.move(-127);
  //     chassis.moveDistance(42 * okapi::inch);
  //     chassis.moveDistance(-38 * okapi::inch);
  //     intake1.move(0);
  //     intake2.move(0);
  //     chassis.turnAngle(-90 * okapi::degree);
  //     chassis.moveDistance(18.9 * okapi::inch);
  //     tilter.move_relative(-1200, 127);
  //     pros::delay(2000);
  //     intake1.move(-127);
  //     intake2.move(127);
  //     pros::delay(1000);
  //     intake1.move(0);
  //     intake2.move(0);
  // }
  // if(red == true && other == false){
  //   intake1.move(127);
  //   intake2.move(-127);
  //   chassis.moveDistance(50.4 * okapi::inch);
  //   chassis.moveDistance(-42 * okapi::inch);
  //   intake1.move(0);
  //   intake2.move(0);
  //   chassis.turnAngle(90 * okapi::degree);
  //   chassis.moveDistance(18.9 * okapi::inch);
  //   tilter.move_relative(-1200, 127);
  //   pros::delay(2000);
  //   intake1.move(-127);
  //   intake2.move(127);
  //   pros::delay(1000);
  //   intake1.move(0);
  //   intake2.move(0);
  // }
  // if(red == true && other == true){
  //   intake1.move(127);
  //   intake2.move(-127);
  //   chassis.moveDistance(50.4 * okapi::inch);
  //   chassis.moveDistance(-42 * okapi::inch);
  //   intake1.move(0);
  //   intake2.move(0);
  //   chassis.turnAngle(90 * okapi::degree);
  //   chassis.moveDistance(18.9 * okapi::inch);
  //   tilter.move_relative(-1200, 127);
  //   pros::delay(2000);
  //   intake1.move(-127);
  //   intake2.move(127);
  //   pros::delay(1000);
  //   intake1.move(0);
  //   intake2.move(0);
  // }
  // if(red == false && other == true){
  //   intake1.move(127);
  //   intake2.move(-127);
  //   chassis.moveDistance(50.4 * okapi::inch);
  //   chassis.moveDistance(-42 * okapi::inch);
  //   intake1.move(0);
  //   intake2.move(0);
  //   chassis.turnAngle(-90 * okapi::degree);
  //   chassis.moveDistance(18.9 * okapi::inch);
  //   tilter.move_relative(-1200, 127);
  //   pros::delay(2000);
  //   intake1.move(-127);
  //   intake2.move(127);
  //   pros::delay(1000);
  //   intake1.move(0);
  //   intake2.move(0);
  // }
  }
