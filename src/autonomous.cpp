#include "main.h"
#include "util/Side.hpp"
#include "okapi/impl/device/rotarysensor/integratedEncoder.hpp"
#include "ui/autonUI.hpp"
/**
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */
void autonomous() {
  // autonUI::initialize();
  int auton = autonUI::getAuton();
  pros::Motor left1 = pros::Motor(1);
	pros::Motor right1 = pros::Motor(3);
	pros::Motor left2 = pros::Motor(2);
	pros::Motor right2 = pros::Motor(4);
  pros::Motor intake1 = pros::Motor(8);
	pros::Motor intake2 = pros::Motor(6);
  pros::Motor tilter = pros::Motor(7);
  Side left = Side(&left1,&left2,false);
  Side right = Side(&right1,&right2,true);
  bool red = true;
  bool other = true;
  if(red == false && other == false){
    intake1.move(-127);
    intake2.move(127);
    left.move_relative(41.4, 80);
    right.move_relative(41.4, 80);
    pros::delay(3500);
    left.move_relative(5.0, 80);
    right.move_relative(-5.0, 80);
    pros::delay(1000);
    left.move_relative(9, 80);
    right.move_relative(9, 80);
    pros::delay(1000);
    intake1.move(0);
    intake2.move(0);
    left.move_relative(-28, 80);
    right.move_relative(-28, 80);
    pros::delay(1500);
    left.move_relative(21, 80);
    right.move_relative(-21, 80);
    pros::delay(1200);
    left.move_relative(18, 80);
    right.move_relative(18, 80);
    pros::delay(1200);
    tilter.move(-80);
    pros::delay(200);
    tilter.move(0);
    pros::delay(600);
    intake1.move(127);
    intake2.move(-127);
    pros::delay(1000);
    intake1.move(0);
    intake2.move(0);
  }
  if(red == true && other == false){
    intake1.move(127);
    intake2.move(-127);
    left.move_relative(43, 80);
    right.move_relative(43, 80);
    pros::delay(3500);
    left.move_relative(-5.0, 80);
    right.move_relative(5.0, 80);
    pros::delay(1000);
    left.move_relative(8, 80);
    right.move_relative(8, 80);
    pros::delay(800);
    intake1.move(0);
    intake2.move(0);
    left.move_relative(-27.5, 80);
    right.move_relative(-27.5, 80);
    pros::delay(1500);
    left.move_relative(-19, 80);
    right.move_relative(19, 80);
    pros::delay(1200);
    left.move_relative(18, 80);
    right.move_relative(18, 80);
    pros::delay(1200);
    tilter.move(-80);
    pros::delay(500);
    tilter.move(0);
    pros::delay(200);
    intake1.move(127);
    intake2.move(-127);
    pros::delay(1000);
    intake1.move(0);
    intake2.move(0);
  }
  if(other == true && red == false){
    // left.move_relative(-22, 80);
    // right.move_relative(22, 80);
    intake1.move(-127);
    intake2.move(127);
    left.move_relative(24, 80);
    right.move_relative(24, 80);
    pros::delay(1250);
    left.move_relative(18, 80);
    right.move_relative(18, 80);
    pros::delay(1000);
    left.move_relative(-22, 80);
    right.move_relative(22, 80);
    pros::delay(2000);
    left.move_relative(22, 80);
    right.move_relative(22, 80);
    pros::delay(1400);
    left.move_relative(11, 80);
    right.move_relative(-11, 80);
    pros::delay(1000);
    left.move_relative(18, 80);
    right.move_relative(18, 80);
    pros::delay(1200);
    left.move_relative(-9, 80);
    right.move_relative(-9, 80);
    pros::delay(800);
    left.move_relative(-22, 80);
    right.move_relative(22, 80);
    pros::delay(2000);
    left.move_relative(26, 80);
    right.move_relative(26, 80);
    pros::delay(1500);
    left.move_relative(6.5, 80);
    right.move_relative(-6.5, 80);
    pros::delay(600);
    left.move_relative(18, 80);
    right.move_relative(18, 80);
    pros::delay(1500);
    tilter.move(80);
    pros::delay(1000);
    tilter.move(0);
    pros::delay(600);
    intake1.move(127);
    intake2.move(-127);
    pros::delay(1000);
    intake1.move(0);
    intake2.move(0);
  }
  if(other == true && red == true){
    // left.move_relative(-22, 80);
    // right.move_relative(22, 80);
    intake1.move(-127);
    intake2.move(127);
    left.move_relative(24, 80);
    right.move_relative(24, 80);
    pros::delay(1250);
    left.move_relative(18, 80);
    right.move_relative(18, 80);
    pros::delay(1000);
    left.move_relative(-22, 80);
    right.move_relative(22, 80);
    pros::delay(2000);
    left.move_relative(22, 80);
    right.move_relative(22, 80);
    pros::delay(1400);
    left.move_relative(-11, 80);
    right.move_relative(11, 80);
    pros::delay(1000);
    left.move_relative(18, 80);
    right.move_relative(18, 80);
    pros::delay(1200);
    left.move_relative(-9, 80);
    right.move_relative(-9, 80);
    pros::delay(800);
    left.move_relative(-22, 80);
    right.move_relative(22, 80);
    pros::delay(2000);
    left.move_relative(26, 80);
    right.move_relative(26, 80);
    pros::delay(1500);
    left.move_relative(-6.5, 80);
    right.move_relative(6.5, 80);
    pros::delay(600);
    left.move_relative(18, 80);
    right.move_relative(18, 80);
    pros::delay(1200);
    tilter.move(80);
    pros::delay(200);
    tilter.move(0);
    pros::delay(600);
    intake1.move(127);
    intake2.move(-127);
    pros::delay(1000);
    intake1.move(0);
    intake2.move(0);
  }
}
