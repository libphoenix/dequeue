// CONSTANTS

#ifndef QUEUE_SIMULA_H
#define QUEUE_SIMULA_H

#define SCREEN_X 1000
#define BACKGROUND_R 1.0
#define BACKGROUND_G 1.0
#define BACKGROUND_B 1.0
#define BACKGROUND_A 1.0
#define SCREEN_Y 500
#define OFFSET_X 50
#define differenc 180.000000
#define fnot 20
#define ARROW_LENGTH 50
#define ENQUEUE 19
#define DEQUEUE1 38
#define DEQUEUE2 39
#define NO_OP 45
#define OPERATION_POSITION_X SCREEN_X/4+SCREEN_X/20
#define OPERATION_POSITION_Y SCREEN_Y/5
#define ENTER_POSITION_Y SCREEN_Y-60
#define ENTER_POSITION_X OFFSET_X
#define EMPTY 0
#define FULL 1
#define NO_MESSAGE 2

static int MAX;		// MAXIMUM NUMBER OF ELEMENTS IN THE QUEUE. TAKEN AS INPUT
int DIST = SCREEN_X - 2*OFFSET_X;
int f = 0;		// FRONT OF QUEUE
int b = 0;		// REAR OF QUEUE
int YD = SCREEN_Y/10;		// just a random height. HEIGHT OF EACH ELEMENT (BOX) IN THE QUEUE
double FONT_ADJUST = 9;	// DENOMINATOR OF FONT_RATIO. LARGER THE VALUE, LARGER THE FONT
double FONT_RATIO = YD/FONT_ADJUST;  // SETS THE SIZE OF THE FONT
int enqORdq = NO_OP;			// indicates what the last operation was.

// end of all Constants
int clr = 0;
int isback = 1;
char enter_str[10000];
char blinking[2] = {'_', 0};
char displayString[10003];
char displayString1[10003];
int start_of_num;
int cnt_of_chars = 0;
int message = EMPTY;

// Each element of the queue is encapsulated into a structure.
struct elem {
	float r, g, b; // filling colors
	float rl, gl, bl; // for outlines
	float x1, x2;	// start and end x positions
	char num[11];
} ;

struct elem queue[16];			// elements of the queue

#endif
