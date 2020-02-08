#include "task7.h"

#define printf //
extern char labirinth[N][N];

void place(int x, int y) {
    printf("%d, %d\n", x, y);
    labirinth[x][y] = '*';

    if (x == 0 || y == 0 || x == N - 1 || y == N - 1) {
        fprintf(stdout, "Выход: %d, %d\n", x, y);
        exit(1);
    }

    if (labirinth[x + 1][y] == ' ') {
        printf("labirinth[x + 1][y] = %c\n", labirinth[x + 1][y]);
        printf("x + 1 = %d, y = %d\n", x + 1, y);
        place(x + 1, y);
    }
    else if (labirinth[x][y + 1] == ' ') {
        printf("labirinth[x][y + 1] = %c\n", labirinth[x][y + 1]);
        printf("x = %d, y + 1 = %d\n", x, y + 1);
        place(x, y + 1);
    }
    else if (labirinth[x - 1][y] == ' ') {
        printf("labirinth[x - 1][y] = %c\n", labirinth[x - 1][y]);
        printf("x - 1 = %d, y = %d\n", x - 1, y);
        place(x - 1, y);
    }
    else if (labirinth[x][y - 1] == ' ') {
        printf("labirinth[x - 1][y] = %c\n", labirinth[x][y - 1]);
        printf("x = %d, y - 1 = %d\n", x, y - 1);
        place(x, y - 1);
    }
    
    
}