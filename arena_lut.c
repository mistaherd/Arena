#include <stdio.h>
#include <stdlib.h>
#include <sys/ioctl.h> // For ioctl()
#include <unistd.h> 
int8_t get_terminal_dimensions(int16_t *width,int16_t *height){
    struct winsize ws;
    if (ioctl(STDOUT_FILENO,TIOCGWINSZ,&ws)==0){
        *width= (int)ws.
    }
}
void display_Arena(Arena *arena,size_t sizeofarena,LUT *lut){
    
}
