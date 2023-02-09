//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*//*Command*/       /*Update Interval*/ /*Update Signal*/
  {"", "cat /tmp/recordingicon 2>/dev/null", 0,      9},
  {"", "sb-packages",                        0,      8},
  {"", "sb-xkbmap",                          0,      15},
  {"", "sb-forecast",                        3600,   5},
  // {"", "sb-tasks",                           10,     26},
  {"", "sb-playerctl",                       0,      11},
  // {"", "sb-news",                            0,      6},
  // {"", "sb-torrent 192.168.178.200",         20,     7},
  // {"", "sb-mailbox",                         180,    12},
  // {"", "sb-memory",                          10,     14},
  {"", "sb-cpubars",                         1,      18},
  // {"", "sb-ip",                              5,      13},
  {"", "sb-internet",                        5,      4},
  {"", "sb-nettraf",                         1,      16},
  {"", "sb-battery",                         5,      3},
  // {"", "sb-volume",                          0,      10},
  {"", "sb-clock",                           60,     1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;


// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }

