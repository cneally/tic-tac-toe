
//------------------------------------
//	Define 
//------------------------------------
#ifndef _ex2_
#define _ex2_

#define _CRT_SECURE_NO_WARNINGS

//------------------------------------
//	Include Libraries 
//------------------------------------
#include <time.h>
#include "game.h"
#include <string.h>

//------------------------------------
//	FUNCTION main 
//------------------------------------
int main(int argc, char *argv[]) {


    srand((unsigned int) time(NULL));

    int im = 0;

    char *p1 = "Computer_p1";

    char *p2 = "Computer_p2";
    //3. We call to the main function of the game
    play_game(p1, p2, im);


}

#endif


