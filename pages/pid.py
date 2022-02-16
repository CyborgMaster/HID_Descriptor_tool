PID = {
  'PID_Undefined'                        : 0x00,
  'PID_Physical_Interface_Device'        : 0x01,
  'PID_Normal'                           : 0x20,
  'PID_Set_Effect_Report'                : 0x21,
  'PID_Effect_Block_Index'               : 0x22,
  'PID_Parameter_Block_Offset'           : 0x23,
  'PID_ROM_Flag'                         : 0x24,
  'PID_Effect_Type'                      : 0x25,
  'PID_ET_Constant_Force'                : 0x26,
  'PID_ET_Ramp'                          : 0x27,
  'PID_ET_Custom_Force_Data'             : 0x28,
  'PID_ET_Square'                        : 0x30,
  'PID_ET_Sine'                          : 0x31,
  'PID_ET_Triangle'                      : 0x32,
  'PID_ET_Sawtooth_Up'                   : 0x33,
  'PID_ET_Sawtooth_Down'                 : 0x34,
  'PID_ET_Spring'                        : 0x40,
  'PID_ET_Damper'                        : 0x41,
  'PID_ET_Inertia'                       : 0x42,
  'PID_ET_Friction'                      : 0x43,
  'PID_Duration'                         : 0x50,
  'PID_Sample_Period'                    : 0x51,
  'PID_Gain'                             : 0x52,
  'PID_Trigger_Button'                   : 0x53,
  'PID_Trigger_Repeat_Interval'          : 0x54,
  'PID_Axes_Enable'                      : 0x55,
  'PID_Direction_Enable'                 : 0x56,
  'PID_Direction'                        : 0x57,
  'PID_Type_Specific_Block_Offset'       : 0x58,
  'PID_Block_Type'                       : 0x59,
  'PID_Set_Envelope_Report'              : 0x5A,
  'PID_Attack_Level'                     : 0x5B,
  'PID_Attack_Time'                      : 0x5C,
  'PID_Fade_Level'                       : 0x5D,
  'PID_Fade_Time'                        : 0x5E,
  'PID_Set_Condition_Report'             : 0x5F,
  'PID_CP_Offset'                        : 0x60,
  'PID_Positive_Coefficient'             : 0x61,
  'PID_Negative_Coefficient'             : 0x62,
  'PID_Positive_Saturation'              : 0x63,
  'PID_Negative_Saturation'              : 0x64,
  'PID_Dead_Band'                        : 0x65,
  'PID_Download_Force_Sample'            : 0x66,
  'PID_Isoch_Custom_Force_Enable'        : 0x67,
  'PID_Custom_Force_Data_Report'         : 0x68,
  'PID_Custom_Force_Data'                : 0x69,
  'PID_Custom_Force_Vendor_Defined_Data' : 0x6A,
  'PID_Set_Custom_Force_Report'          : 0x6B,
  'PID_Custom_Force_Data_Offset'         : 0x6C,
  'PID_Sample_Count'                     : 0x6D,
  'PID_Set_Periodic_Report'              : 0x6E,
  'PID_Offset'                           : 0x6F,
  'PID_Magnitude'                        : 0x70,
  'PID_Phase'                            : 0x71,
  'PID_Period'                           : 0x72,
  'PID_Set_Constant_Force_Report'        : 0x73,
  'PID_Set_Ramp_Force_Report'            : 0x74,
  'PID_Ramp_Start'                       : 0x75,
  'PID_Ramp_End'                         : 0x76,
  'PID_Effect_Operation_Report'          : 0x77,
  'PID_Effect_Operation'                 : 0x78,
  'PID_Op_Effect_Start'                  : 0x79,
  'PID_Op_Effect_Start_Solo'             : 0x7A,
  'PID_Op_Effect_Stop'                   : 0x7B,
  'PID_Loop_Count'                       : 0x7C,
  'PID_Device_Gain_Report'               : 0x7D,
  'PID_Device_Gain'                      : 0x7E,
  'PID_PID_Pool_Report'                  : 0x7F,
  'PID_RAM_Pool_Size'                    : 0x80,
  'PID_ROM_Pool_Size'                    : 0x81,
  'PID_ROM_Effect_Block_Count'           : 0x82,
  'PID_Simultaneous_Effects_Max'         : 0x83,
  'PID_Pool_Alignment'                   : 0x84,
  'PID_PID_Pool_Move_Report'             : 0x85,
  'PID_Move_Source'                      : 0x86,
  'PID_Move_Destination'                 : 0x87,
  'PID_Move_Length'                      : 0x88,
  'PID_PID_Block_Load_Report'            : 0x89,
  'PID_Block_Load_Status'                : 0x8B,
  'PID_Block_Load_Success'               : 0x8C,
  'PID_Block_Load_Full'                  : 0x8D,
  'PID_Block_Load_Error'                 : 0x8E,
  'PID_Block_Handle'                     : 0x8F,
  'PID_PID_Block_Free_Report'            : 0x90,
  'PID_Type_Specific_Block_Handle'       : 0x91,
  'PID_PID_State_Report'                 : 0x92,
  'PID_Effect_Playing'                   : 0x94,
  'PID_PID_Device_Control_Report'        : 0x95,
  'PID_PID_Device_Control'               : 0x96,
  'PID_DC_Enable_Actuators'              : 0x97,
  'PID_DC_Disable_Actuators'             : 0x98,
  'PID_DC_Stop_All_Effects'              : 0x99,
  'PID_DC_Device_Reset'                  : 0x9A,
  'PID_DC_Device_Pause'                  : 0x9B,
  'PID_DC_Device_Continue'               : 0x9C,
  'PID_Device_Paused'                    : 0x9F,
  'PID_Actuators_Enabled'                : 0xA0,
  'PID_Safety_Switch'                    : 0xA4,
  'PID_Actuator_Override_Switch'         : 0xA5,
  'PID_Actuator_Power'                   : 0xA6,
  'PID_Start_Delay'                      : 0xA7,
  'PID_Parameter_Block_Size'             : 0xA8,
  'PID_Device_Managed_Pool'              : 0xA9,
  'PID_Shared_Parameter_Blocks'          : 0xAA,
  'PID_Create_New_Effect_Report'         : 0xAB,
  'PID_RAM_Pool_Available'               : 0xAC,
}
