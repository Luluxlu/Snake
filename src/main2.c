#include <stdio.h>
#include <stdlib.h>

struct coords {
    int x;
    int y;
};

char world[20][21]={
    "XXXXXXXXXXXXXXXXXXXX",
    "x                  x",
    "x                  x",
    "x                  x",
    "x                  x",
    "x                  x",
    "x                  x",
    "x                  x",
    "x                  x",
    "x                  x",
    "x                  x",
    "x                  x",
    "x                  x",
    "x                  x",
    "x                  x",
    "x                  x",
    "x                  x",
    "x                  x",
    "x                  x",
    "XXXXXXXXXXXXXXXXXXXX"
};

int main(){

    for(int i=0; i<20; ++i)
    {
        printf("%s\n", world[i]);
    }

    int score = 0;
    int pommeX = (rand() % 20) + 1 ;
    int pommeY = (rand() % 21) + 1 ;
    
    int x = 10;
    int xbis = 10;
    int ybis = 10;
    int y = 10;

    for (;;) {

        world[pommeX][pommeY] = 'x';

        int user_input = getchar();

        if(user_input == 'm'){
            break;
        }
        if(user_input == 's'){
            if(x >= 1 && x<18){
                xbis = x;
                ybis = y;
                x +=1;
            }
            if(x >= 18) {
                xbis = x;
                ybis = y;
                x = 1;
            }
            if(x <= 0) {
                xbis = x;
                ybis = y;
                x = 17;
            }
            
        }
        if(user_input == 'z'){
            if(x >= 1 && x<18){
                xbis = x;
                ybis = y;
                x -=1;
            }
            if(x >= 18) {
                xbis = x;
                ybis = y;
                x = 1;
            }
            if(x <= 0) {
                xbis = x;
                ybis = y;
                x = 17;
            }
            
        }
        if(user_input == 'd'){
            if(y >= 1 && y<18){
                xbis = x;
                ybis = y;
                y +=1;
            }
            if(y >= 18) {
                xbis = x;
                ybis = y;
                y = 1;
            }
            if(y <= 0) {
                xbis = x;
                ybis = y;
                y = 17;
            }
            
        }
        if(user_input == 'q'){
            if(y >= 1 && y<18){
                xbis = x;
                ybis = y;
                y -=1;
            }
            if(y >= 18) {
                xbis = x;
                ybis = y;
                y = 1;
            }
            if(y <= 0) {
                xbis = x;
                ybis = y;
                y = 17;
            }
        }

        if (pommeX == x & pommeY == y){
            world[pommeX][pommeY] = ' ';
            pommeX = (rand() % 18) + 1;
            pommeY = (rand() % 19) + 1;
            score += 1;
        }
        
        world[xbis][ybis] = ' ';
        world[x][y] = 'o';
    

    for(int i=0; i<20; ++i)
    {
        printf("%s\n", world[i]);
    }

        printf("%d\n", score);
        printf("%d\n", xbis);
        printf("%d\n", ybis);
    }

    return 0;
}