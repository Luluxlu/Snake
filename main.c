#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void get_dimen(char* world, int *width, int *height){
    bool stop_count_with = false;
    for(int i=0;world[i] != '\0';++i){
        if(world[i] == '\n'){
            (*height)++;
            stop_count_with = true;
        }
        if(!stop_count_with){
            (*width)++;
        }
    }
} 

int main(int argc, char** argv){
    char* fileName = NULL;
    if(argc > 0){
        fileName = argv[1];
    }else{
        printf("Entrez au moins un paramètre");
        return 1;
    }

    FILE* file = fopen(fileName, "r");
    if(file == NULL){
        return -1;
    }
    fseek(file, 0, SEEK_END);
    int size = ftell(file);
    fclose(file);

    char* world = malloc(size);

    file = fopen(fileName, "r");
    size_t read_bytes = fread(world, sizeof(char), size, file);

    printf("%s\n", world);

    int height = 0;
    int width = 0;

    get_dimen(world, &width, &height);

    bool stop = false;
    while (!stop) {
        int user_input = getchar();
        if(user_input == 27) {
            stop = true;
        }
    }

    free(world);

    fclose(file);

    return 0;
}