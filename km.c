  // Keyboard Report
  0x05, 0x01,                    // USAGE_PAGE (Generic Desktop)
  0x09, 0x06,                    // USAGE (Keyboard)
  0xA1, 0x01,                    // COLLECTION (Application)
  0x85, 0x03,      //   REPORT_ID
  0x75, 0x01,                    //   REPORT_SIZE (1)
  0x95, 0x08,                    //   REPORT_COUNT (8)
  0x05, 0x07,                    //   USAGE_PAGE (Keyboard/Keypad)
  0x19, 0xE0,                    //   USAGE_MINIMUM (Keyboard LeftControl)
  0x29, 0xE7,                    //   USAGE_MAXIMUM (Keyboard Right GUI)
  0x15, 0x00,                    //   LOGICAL_MINIMUM (0)
  0x25, 0x01,                    //   LOGICAL_MAXIMUM (1)
  0x81, 0x02,                    //   INPUT (Data,Var,Abs)
  0x95, 0x01,                    //   REPORT_COUNT (1)
  0x75, 0x08,                    //   REPORT_SIZE (8)
  0x81, 0x03,                    //   INPUT (Cnst,Var,Abs)
  0x95, 0x05,                    //   REPORT_COUNT (5)
  0x75, 0x01,                    //   REPORT_SIZE (1)
  0x05, 0x08,                    //   USAGE_PAGE (LED)
  0x19, 0x01,                    //   USAGE_MINIMUM (Num Lock)
  0x29, 0x05,                    //   USAGE_MAXIMUM (Kana)
  0x91, 0x02,                    //   OUTPUT (Data,Var,Abs)
  0x95, 0x01,                    //   REPORT_COUNT (1)
  0x75, 0x03,                    //   REPORT_SIZE (3)
  0x91, 0x03,                    //   OUTPUT (Cnst,Var,Abs)
  0x95, 0x06,                    //   REPORT_COUNT (6)
  0x75, 0x08,                    //   REPORT_SIZE (8)
  0x15, 0x00,                    //   LOGICAL_MINIMUM (0)
  0x26, 0xFF, 0x00,              //   LOGICAL_MAXIMUM (255)
  0x05, 0x07,                    //   USAGE_PAGE (Keyboard/Keypad)
  0x19, 0x00,                    //   USAGE_MINIMUM (0x0)
  0x29, 0xFF,                    //   USAGE_MAXIMUM (0xFF)
  0x81, 0x00,                    //   INPUT (Data,Ary,Abs)
  0xC0,                          // END_COLLECTION

  // TODO: Remove dead report
  // Keyboard Bitmap Report
  0x05, 0x0C,                    // USAGE_PAGE (Consumer)
  0x09, 0x01,                    // USAGE (Consumer Control)
  0xA1, 0x01,                    // COLLECTION (Application)
  0x85, 0x05,    //   REPORT_ID
  0x15, 0x00,                    //   LOGICAL_MINIMUM (0)
  0x25, 0x01,                    //   LOGICAL_MAXIMUM (1)
  0x75, 0x01,                    //   REPORT_SIZE (1)
  0x95, 0x18,                    //   REPORT_COUNT (24)
  0x09, 0xCD,                    //   USAGE (Play/Pause)
  0x09, 0xB5,                    //   USAGE (Scan Next Track)
  0x09, 0xB6,                    //   USAGE (Scan Previous Track)
  0x09, 0xE2,                    //   USAGE (Mute)
  0x09, 0xE9,                    //   USAGE (Volume Increment)
  0x09, 0xEA,                    //   USAGE (Volume Decrement)
  0x09, 0xB8,                    //   USAGE (Eject)
  0x0A, 0x8A, 0x01,              //   USAGE (AL Email Reader)
  0x0A, 0x92, 0x01,              //   USAGE (AL Calculator)
  0x0A, 0x94, 0x01,              //   USAGE (AL Local Machine Browser)
  0x0A, 0x96, 0x01,              //   USAGE (AL Internet Browser)
  0x0A, 0x21, 0x02,              //   USAGE (AC Search)
  0x0A, 0x23, 0x02,              //   USAGE (AC Home)
  0x0A, 0x24, 0x02,              //   USAGE (AC Back)
  0x0A, 0x25, 0x02,              //   USAGE (AC Forward)
  0x0A, 0x2A, 0x02,              //   USAGE (AC Bookmarks)
  0x0A, 0x03, 0x02,              //   USAGE (AC Close)
  0x0A, 0x04, 0x02,              //   USAGE (AC Exit)
  0x0A, 0x05, 0x02,              //   USAGE (AC Maximize)
  0x0A, 0x06, 0x02,              //   USAGE (AC Minimize)
  0x0A, 0x5D, 0x02,              //   USAGE (AC Yes)
  0x0A, 0x5F, 0x02,              //   USAGE (AC Cancel)
  0x0A, 0x82, 0x01,              //   USAGE (AL Programmable Button Configuration)
  0x09, 0x30,                    //   USAGE (Power)
  0x81, 0x03,                    //   INPUT (Cnst,Var,Abs)
  0xC0,                          // END_COLLECTION

  // Mouse Report
  0x05, 0x01,                    // USAGE_PAGE (Generic Desktop)
  0x09, 0x02,                    // USAGE (Mouse)
  0xA1, 0x01,                    // COLLECTION (Application)
  0x85, 0x04,         //   REPORT_ID
  0x09, 0x01,                    //   USAGE (Pointer)
  0xA1, 0x00,                    //   COLLECTION (Physical)
  0x05, 0x09,                    //     USAGE_PAGE (Button)
  0x19, 0x01,                    //     USAGE_MINIMUM (Button 1)
  0x29, 0x03,                    //     USAGE_MAXIMUM (Button 3)
  0x15, 0x00,                    //     LOGICAL_MINIMUM (0)
  0x25, 0x01,                    //     LOGICAL_MAXIMUM (1)
  // TODO: support more mouse buttons
  0x75, 0x01,                    //     REPORT_SIZE (1)
  0x95, 0x03,                    //     REPORT_COUNT (3)
  0x81, 0x02,                    //     INPUT (Data,Var,Abs)
  0x75, 0x05,                    //     REPORT_SIZE (5)
  0x95, 0x01,                    //     REPORT_COUNT (1)
  0x81, 0x01,                    //     INPUT (Cnst,Ary,Abs)
  0x05, 0x01,                    //     USAGE_PAGE (Generic Desktop)
  0x09, 0x30,                    //     USAGE (X)
  0x09, 0x31,                    //     USAGE (Y)
  0x16, 0x01, 0x80,              //     LOGICAL_MINIMUM (-32767)
  0x26, 0xFF, 0x7F,              //     LOGICAL_MAXIMUM (32767)
  0x75, 0x10,                    //     REPORT_SIZE (16)
  0x95, 0x02,                    //     REPORT_COUNT (2)
  0x81, 0x06,                    //     INPUT (Data,Var,Rel)
  0x09, 0x38,                    //     USAGE (Wheel)
  0x15, 0x81,                    //     LOGICAL_MINIMUM (-127)
  0x25, 0x7F,                    //     LOGICAL_MAXIMUM (127)
  0x75, 0x08,                    //     REPORT_SIZE (8)
  0x95, 0x01,                    //     REPORT_COUNT (1)
  0x81, 0x06,                    //     INPUT (Data,Var,Rel)
  0x05, 0x0C,                    //     USAGE_PAGE (Consumer)
  0x0A, 0x38, 0x02,              //     USAGE (AC Pan)
  0x15, 0x81,                    //     LOGICAL_MINIMUM (-127)
  0x25, 0x7F,                    //     LOGICAL_MAXIMUM (127)
  0x75, 0x08,                    //     REPORT_SIZE (8)
  0x81, 0x06,                    //     INPUT (Data,Var,Rel)
  0xC0,                          //   END_COLLECTION
  0xC0,                          // END_COLLECTION

  // Upgrade Report - In
  0x06, 0x00, 0xFF,              // USAGE_PAGE (Vendor Page 0)
  0x09, 0x01,                    // USAGE (Vendor Usage 1)
  0xA1, 0x01,                    // COLLECTION (Application)
  0x85, 0x02,    //   REPORT_ID
  0x95, 0x3A, //REPORT_COUNT
  0x75, 0x08,                    //   REPORT_SIZE (8)
  0x26, 0xFF, 0x00,              //   LOGICAL_MAXIMUM (255)
  0x15, 0x00,                    //   LOGICAL_MINIMUM (0)
  0x09, 0x01,                    //   USAGE (Vendor Usage 1)
  0x81, 0x02,                    //   INPUT (Data,Var,Abs)

  // Upgrade Report - Out
  0x85, 0x01,   //   REPORT_ID
  0x95, 0x3A, //REPORT_COUNT
  0x75, 0x08,                    //   REPORT_SIZE (8)
  0x26, 0xFF, 0x00,              //   LOGICAL_MAXIMUM (255)
  0x15, 0x00,                    //   LOGICAL_MINIMUM (0)
  0x09, 0x01,                    //   USAGE (Vendor Usage 1)
  0x91, 0x02,                    //   OUTPUT (Data,Var,Abs)
  0xC0,                          // END_COLLECTION

  // TODO: Remove dead report
  // Key Layer Report
  0x06, 0x00, 0xFF,              // USAGE_PAGE (Vendor Page 0)
  0x09, 0x01,                    // USAGE (Vendor Usage 1)
  0xA1, 0x01,                    // COLLECTION (Application)
  0x85, 0x07,     //   REPORT_ID
  0x95, 0x02,                    //   REPORT_COUNT (2)
  0x75, 0x08,                    //   REPORT_SIZE (8)
  0x26, 0xFF, 0x00,              //   LOGICAL_MAXIMUM (255)
  0x15, 0x00,                    //   LOGICAL_MINIMUM (0)
  0x09, 0x01,                    //   USAGE (Vendor Usage 1)
  0x81, 0x02,                    //   INPUT (Data,Var,Abs)
  0xC0,                          // END_COLLECTION

  // TODO: Remove dead report
  // Software Macro Report
  0x06, 0x00, 0xFF,              // USAGE_PAGE (Vendor Page 0)
  0x09, 0x01,                    // USAGE (Vendor Usage 1)
  0xA1, 0x01,                    // COLLECTION (Application)
  0x85, 0x08,    // REPORT ID
  0x95, 0x02,                    //   REPORT_COUNT (2)
  0x75, 0x08,                    //   REPORT_SIZE (8)
  0x26, 0xFF, 0x00,              //   LOGICAL_MAXIMUM (255)
  0x15, 0x00,                    //   LOGICAL_MINIMUM (0)
  0x09, 0x01,                    //   USAGE (Vendor Usage 1)
  0x81, 0x02,                    //   INPUT (Data,Var,Abs)
  0xC0,                          // END_COLLECTION

  // TODO: Remove dead report
  // System Control Report
  0x05, 0x01,                    // USAGE_PAGE (Generic Desktop)
  0x09, 0x80,                    // USAGE (System Control)
  0xA1, 0x01,                    // COLLECTION (Application)
  0x85, 0x06,        //   REPORT_ID (8)
  0x15, 0x00,                    //   LOGICAL_MINIMUM (0)
  0x25, 0x01,                    //   LOGICAL_MAXIMUM (1)
  0x75, 0x01,                    //   REPORT_SIZE (1)
  0x95, 0x03,                    //   REPORT_COUNT (3)
  0x09, 0x81,                    //   USAGE (System Power Down)
  0x09, 0x82,                    //   USAGE (System Sleep)
  0x09, 0x83,                    //   USAGE (System Wake Up)
  0x81, 0x02,                    //   INPUT (Data,Var,Abs)
  0x95, 0x01,                    //   REPORT_COUNT (1)
  0x75, 0x05,                    //   REPORT_SIZE (5)
  0x81, 0x03,                    //   INPUT (Cnst,Var,Abs)
  0xC0,                          // END_COLLECTION
