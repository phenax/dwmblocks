#define MENUITEM(x) ("~/scripts/menuitems.sh " #x)

static const Block blocks[] = {
  /*Icon*/ /*Command*/       /*Interval*/ /*Signal*/
  {"", MENUITEM(volume),             10,      10},
  {"", MENUITEM(music),              5,       11},
  // {"", MENUITEM(network),            10,      14},
  {"", MENUITEM(date),               5,       0},
  {"", MENUITEM(battery),            10,      0},
  // {"", MENUITEM(keymode),            0,      13},
  // {"", MENUITEM(brightness),         0,      12},
};

static char delim = '|';

