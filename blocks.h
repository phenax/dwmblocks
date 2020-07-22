#define MENUITEM(x) ("~/scripts/menuitems.sh " #x)

static const Block blocks[] = {
  /*Icon*/ /*Command*/       /*Interval*/ /*Signal*/
  {"", MENUITEM(keymode),            0,      13},
  {"", MENUITEM(volume),             0,      10},
  {"", MENUITEM(music),              10,     11},
  {"", MENUITEM(brightness),         0,      12},
  {"", MENUITEM(date),               5,      0},
  {"", MENUITEM(battery),            10,     0},
};

static char delim = '|';

