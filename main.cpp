// I am seeing multiple prints in coolterm for one press of the joystick. It is random and deos not happen everytime.
// This is most probably being caused by a bounce of the input signal when the joystick is being pressed and released.
// The software soloution for this would be to implement a debounce into the callback function to filter out the extra interrupts.

#include "mbed.h"

InterruptIn joystick_up(p15);
InterruptIn joystick_down(p12);
InterruptIn joystick_left(p13);
InterruptIn joystick_right(p16);
InterruptIn joystick_center(p14);

void joystick_up_h() {
    printf("Joystick up\n");
}

void joystick_down_h() {
    printf("Joystick down\n");
}

void joystick_left_h() {
    printf("Joystick left\n");
}

void joystick_right_h() {
    printf("Joystick right\n");
}

void joystick_center_h() {
    printf("Joystick center\n");
}

int main() {
    joystick_up.rise(&joystick_up_h);
    joystick_down.rise(&joystick_down_h);
    joystick_left.rise(&joystick_left_h);
    joystick_right.rise(&joystick_right_h);
    joystick_center.rise(&joystick_center_h);
    while(1) {
    }
}