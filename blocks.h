//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*/ /*Command*/  /*Update Interval*/ /*Update Signal*/
  {"", "~/scripts/menuitems.sh keymode",            0,   13},
  {"", "~/scripts/menuitems.sh volume",             0,   10},
  {"", "~/scripts/menuitems.sh music",              0,   11},
  {"", "~/scripts/menuitems.sh brightness",         0,   12},
  {"", "~/scripts/menuitems.sh date",               5,   0},
  {"", "~/scripts/menuitems.sh battery",            10,  0},
  {"", "~/scripts/menuitems.sh network",            10,  0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';

