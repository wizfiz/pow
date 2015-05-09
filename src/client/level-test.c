#include <stdio.h>
#include <assert.h>
#include "level.h"
#define CUBE "cube.lff"

static char *level =
"1.000000 1.000000 -1.000000 1.000000 -1.000000 -1.000000 -1.000000 -1.000000 -1.000000 \n"
"-1.000000 -1.000000 -1.000000 -1.000000 1.000000 -1.000000 1.000000 1.000000 -1.000000 \n"
"1.000000 0.999999 1.000000 -1.000000 1.000000 1.000000 -1.000000 -1.000000 1.000000 \n"
"-1.000000 -1.000000 1.000000 0.999999 -1.000001 1.000000 1.000000 0.999999 1.000000 \n"
"1.000000 1.000000 -1.000000 1.000000 0.999999 1.000000 0.999999 -1.000001 1.000000 \n"
"0.999999 -1.000001 1.000000 1.000000 -1.000000 -1.000000 1.000000 1.000000 -1.000000 \n"
"1.000000 -1.000000 -1.000000 0.999999 -1.000001 1.000000 -1.000000 -1.000000 1.000000 \n"
"-1.000000 -1.000000 1.000000 -1.000000 -1.000000 -1.000000 1.000000 -1.000000 -1.000000 \n"
"-1.000000 -1.000000 -1.000000 -1.000000 -1.000000 1.000000 -1.000000 1.000000 1.000000 \n"
"-1.000000 1.000000 1.000000 -1.000000 1.000000 -1.000000 -1.000000 -1.000000 -1.000000 \n"
"1.000000 0.999999 1.000000 1.000000 1.000000 -1.000000 -1.000000 1.000000 -1.000000 \n"
"-1.000000 1.000000 -1.000000 -1.000000 1.000000 1.000000 1.000000 0.999999 1.000000 \n";

int main(void)
{
	static float buf[8192];
	
	assert(level_parse(level, buf) >= 1);
	return 0;
}