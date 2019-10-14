#ifndef AUTONUI_HPP
#define AUTONUI_HPP
#include "pros/apix.h"
class autonUI{
public:
  static void initialize();
  static int getAuton();

private:
  static int auton;
  // static lv_btn_state_t auton1_btn_state;
  static lv_obj_t * auton1_lbl;
  static lv_obj_t * auton2_lbl;
  static lv_obj_t * auton3_lbl;
  static lv_obj_t * auton4_lbl;
  static lv_obj_t * auton1_btn;
  static lv_obj_t * auton2_btn;
  static lv_obj_t * auton3_btn;
  static lv_obj_t * auton4_btn;
  static lv_obj_t * odom_container;
};
#endif
