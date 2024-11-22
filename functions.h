#include <stdlib.h>

//note struct defintion
struct note {
    int duration; //in ticks
    int pitch; //in ticks
};

typedef note Note;

// Initializes the two user LEDs
void init_user_leds();

//Sets the two user LEDs
void set_user_leds(unsigned char uled);

// Initializes the buttons for input
void init_buttons();

//Reads the four buttons
unsigned char read_buttons();

//Turn on the buzzer
void buzzer_on(int ticks);

//Sets a specific note duration to the TimerA2
//Assumption: A2 timer, Div1, and Up mode
void note_duration(int duration);