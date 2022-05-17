#include <stdio.h>

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
    
    int x = 10;
    int xbis = 10;
    int ybis = 10;
    int y = 10;

    for (;;) {
        int user_input = getchar();

        if(user_input == 'm'){
            break;
        }
        if(user_input == 's'){
            if(x >= 1 && x<18){
                x +=1;
            }
            
        }
        if(user_input == 'z'){
            if(x >= 1 && x<18){
                x -=1;
            }
        }
        if(user_input == 'd'){
            if(y >= 1 && y<18){
                y +=1;
            }
        }
        if(user_input == 'q'){
            if(y >= 1 && y<18){
                y -=1;
            }
        }
        
        world[x][y] = 'o';
    

    for(int i=0; i<20; ++i)
    {
        printf("%s\n", world[i]);
    }+
    

    world[x][y] = ' ';
    }

    return 0;
}