#include "ui/autonUI.hpp"

lv_obj_t * autonUI::odom_container = lv_cont_create(lv_scr_act(), NULL);
lv_obj_t * autonUI::auton1_btn = lv_btn_create(odom_container, NULL);
lv_obj_t * autonUI::auton2_btn = lv_btn_create(odom_container, NULL);
lv_obj_t * autonUI::auton3_btn = lv_btn_create(odom_container, NULL);
lv_obj_t * autonUI::auton4_btn = lv_btn_create(odom_container, NULL);
lv_obj_t * autonUI::auton1_lbl = lv_label_create(auton1_btn, NULL);
lv_obj_t * autonUI::auton2_lbl = lv_label_create(auton2_btn, NULL);
lv_obj_t * autonUI::auton3_lbl = lv_label_create(auton3_btn, NULL);
lv_obj_t * autonUI::auton4_lbl = lv_label_create(auton4_btn, NULL);

void autonUI::initialize(){
  lv_obj_set_size(odom_container, 400, 240);
  lv_label_set_text(auton1_lbl, "auton1");
  lv_label_set_text(auton2_lbl, "auton2");
  lv_label_set_text(auton3_lbl, "auton3");
  lv_label_set_text(auton4_lbl, "auton4");
  lv_obj_set_pos(auton1_btn, 100, 20);
  lv_obj_set_pos(auton2_btn, 250, 20);
  lv_obj_set_pos(auton3_btn, 100, 150);
  lv_obj_set_pos(auton4_btn, 250, 150);
  //file magic
  if(lv_btn_get_state(auton1_btn) == LV_BTN_STATE_PR){
    lv_btn_set_state(auton1_btn, LV_BTN_STATE_REL);
    FILE* usd_file_write = fopen("Autonomous.txt", "w");
    fputs("1", usd_file_write);
    fclose(usd_file_write);
  }
}

int autonUI::getAuton(){
  return(auton);
}
int autonUI::auton = 0;
