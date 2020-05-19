#ifndef CONFIGURATION_BACKEND_H_CR10CNC
  #define CONFIGURATION_BACKEND_H_CR10CNC
  #define CONFIGURATION_BACKEND_H_CR10CNC_VERSION 010109
  //CR-10 Arda CNC
  #if ENABLED(CR10_CNC)
      #define SLIM_1284P
      #define BAUDRATE 115200
      #define EXTRUDERS 0
      //#define CR10_STOCKDISPLAY
      #define TEMP_SENSOR_0 0
      #define SLIM_LCD_MENUS
      //#define SDSUPPORT
      #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
      #define MOTHERBOARD BOARD_MELZI_CREALITY
      #define PINS_DEBUGGING
      
      #if ENABLED(LINEAR_ADVANCE)
      #define SPEAKER_KILL
      #endif
      
      #define X_MIN_ENDSTOP_INVERTING false
      #define Y_MIN_ENDSTOP_INVERTING false
      #define Z_MIN_ENDSTOP_INVERTING false
      #define X_MAX_ENDSTOP_INVERTING false
      #define Y_MAX_ENDSTOP_INVERTING false
      #define Z_MAX_ENDSTOP_INVERTING false
      #define Z_MIN_PROBE_ENDSTOP_INVERTING false
      
      #define CREALITY_Z_STEPS 400
      
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, CREALITY_Z_STEPS, 95 }
      
      
      #define DEFAULT_MAX_FEEDRATE          { 200, 200, 15, 50 }
      #define DEFAULT_MAX_ACCELERATION      { 500, 800, 500, 5000 }
      
      #define DEFAULT_ACCELERATION          500
      #define DEFAULT_RETRACT_ACCELERATION  500
      #define DEFAULT_TRAVEL_ACCELERATION   500
      
      #define DEFAULT_XJERK                 7.0
      #define DEFAULT_YJERK                 7.0
      
      #define DEFAULT_ZJERK                  0.3
      #define DEFAULT_EJERK                  5.0
      
      #define INVERT_X_DIR true
      #define INVERT_Y_DIR true
      
      #define INVERT_Z_DIR false
      
      #define INVERT_E0_DIR true
      
      
      
      
      
      #define X_BED_SIZE 300
      #define Y_BED_SIZE 300
      #define Z_MAX_POS 400
      
      #if ENABLED(HOME_ADJUST)
      #define X_MIN_POS X_HOME_ADJUST_LOCATION
      #define Y_MIN_POS Y_HOME_ADJUST_LOCATION
      #else
      #define X_MIN_POS 0
      #define Y_MIN_POS 0
      #endif
      
      #define ENCODER_PULSES_PER_STEP 4
      #define ENCODER_STEPS_PER_MENU_ITEM 1
      
      #define PRINTER_ENABLED_CHECK
  
  #endif //end CR-10
#endif // CONFIGURATION_BACKEND_H_CR10CNC
