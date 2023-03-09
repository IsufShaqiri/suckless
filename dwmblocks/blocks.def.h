//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/	 	                            /*Update Interval*/	/*Update Signal*/
    {" 🐧 ", "/home/trix/.local/bin/kernel",	 360,		          2},

	{" 🔺 ", "/home/trix/.local/bin/upt",		 60,		          2},

//	{" 📦 ", "/home/trix/.local/bin/pacupdate",  360,		          9},
	
	{" 💻 ", "/home/trix/.local/bin/memory",	 6,		              1},

	{" 🔊 ", "/home/trix/.local/bin/volume",     0,		              10},

	{" 🕑 ", "/home/trix/.local/bin/clock",	     60,	              0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
