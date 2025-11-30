#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define WIDTH 40
#define HEIGHT 20

// direzioni
enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };

int snakeX, snakeY;
enum Direction dir;

void setup() {
    snakeX = WIDTH / 2;
    snakeY = HEIGHT / 2;
    dir = STOP;
}

void draw() {
    system("cls");

    // bordo superiore
    for (int i = 0; i < WIDTH + 2; i++) printf("#");
    printf("\n");

    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            if (x == 0) printf("#");

            if (x == snakeX && y == snakeY)
                printf("O");      // corpo del serpente
            else
                printf(" ");

            if (x == WIDTH - 1) printf("#");
        }
        printf("\n");
    }

    // bordo inferiore
    for (int i = 0; i < WIDTH + 2; i++) printf("#");
    printf("\n");
}

void input() {
    if (_kbhit()) {
        switch (_getch()) {
        case 'a':
        case 'A': dir = LEFT; break;
        case 'd':
        case 'D': dir = RIGHT; break;
        case 'w':
        case 'W': dir = UP; break;
        case 's':
        case 'S': dir = DOWN; break;
        }
    }
}

void logic() {
    switch (dir) {
    case LEFT:  snakeX--; break;
    case RIGHT: snakeX++; break;
    case UP:    snakeY--; break;
    case DOWN:  snakeY++; break;
    default: break;
    }

    // bordo continuo: esci da un lato ed entri dall'altro
    if (snakeX >= WIDTH) snakeX = 0;
    else if (snakeX < 0) snakeX = WIDTH - 1;

    if (snakeY >= HEIGHT) snakeY = 0;
    else if (snakeY < 0) snakeY = HEIGHT - 1;
}

int main() {
    setup();

    while (1) {
        draw();
        input();
        logic();
        Sleep(100); // velocità
    }

    return 0;
}
