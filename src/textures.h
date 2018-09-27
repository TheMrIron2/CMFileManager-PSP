#include <oslib/oslib.h>

OSL_IMAGE *icon_file, *icon_dir, *icon_dir_dark, \
          *icon_check, *icon_check_dark, *icon_uncheck, *icon_uncheck_dark, *icon_toggle_on, *icon_toggle_dark_on, *icon_toggle_off, \
          *icon_radio_off, *icon_radio_on, *icon_radio_dark_off, *icon_radio_dark_on, *icon_nav_drawer, *icon_back, \
          *options_dialog, *options_dialog_dark, *properties_dialog, *properties_dialog_dark, *dialog, *dialog_dark, \
          *battery_20, *battery_20_charging, *battery_30, *battery_30_charging, *battery_50, *battery_50_charging, \
          *battery_60, *battery_60_charging, *battery_80, *battery_80_charging, *battery_90, *battery_90_charging, \
          *battery_full, *battery_full_charging, *battery_low, *battery_unknown;

void Textures_Load(void);
void Textures_Free(void);
