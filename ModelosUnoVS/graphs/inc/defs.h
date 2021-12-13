#ifndef _defs_h
#define _defs_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>


/// Exit codes of the program
#ifndef EXIT_CODES
  #define EXIT_CODES
  #define EXIT_SUCCESS          	0	///< Correct termination
  #define EXIT_WRONGCOMMANDLINE 	1	///< Incorrect command line
  #define EXIT_MEMORY           	2	///< Insufficient memory
  #define EXIT_OPENFILE         	3	///< Error while opening a file
  #define EXIT_WRONGINPUTFORMAT 	4	///< Incorrect format in an input file
  #define EXIT_INCONSISTENCY    	5	///< Inconsistency in the data structures
  #define EXIT_WRONGCONF          6 ///< Incorrect configuration file
#endif

#ifndef _boolean
#define _boolean
  typedef short int boolean;
#define TRUE  1
#define FALSE 0
#endif

///Flag debug
#define DEBUG TRUE

#define LONGITUD 80

#define MAXCOLORS 5000

#define DEFAULTVERB 0

#define CONF_FILE "col.conf"

char *getColorName(int color);
#endif
