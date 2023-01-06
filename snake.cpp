#include <iostream>
#include <array>
#include <random>
#include <ctime>

const int BOARD_WIDTH = 20;
const int BOARD_HEIGHT = 20;

enum class Tile {
    Blank,
    Snake,
    Food
};

std::array<std::array<Tile, BOARD_WIDTH>, BOARD_HEIGHT> board;

int main() {
    // Initialize the board
    for (int y = 0; y < BOARD_HEIGHT; y++) {
        for (int x = 0; x < BOARD_WIDTH; x++) {
            board[y][x] = Tile::Blank;
        }
    }

    // Initialize the snake at the center of the board
    int snake_x = BOARD_WIDTH / 2;
    int snake_y = BOARD_HEIGHT / 2;
    board[snake_y][snake_x] = Tile::Snake;

    // Place the first piece of food somewhere on the board
    std::mt19937 random_engine(time(nullptr));
    std::uniform_int_distribution<int> x_dist(0, BOARD_WIDTH - 1);
    std::uniform_int_distribution<int> y_dist(0, BOARD_HEIGHT - 1);
    int food_x = x_dist(random_engine);
    int food_y = y_dist(random_engine);
    board[food_y][food_x] = Tile::Food;

    // Main game loop
    while (true) {
        // Redraw the board
        for (int y = 0; y < BOARD_HEIGHT; y++) {
            for (int x = 0; x < BOARD_WIDTH; x++) {
                switch (board[y][x]) {
                    case Tile::Blank:
                        std::cout << ".";
                        break;
                    case Tile::Snake:
                        std::cout << "S";
                        break;
                    case Tile::Food:
                        std::cout << "F";
                        break;
                }
            }
            std::cout << std::endl;
        }

        // Get the snake's next move
        std::cout << "Enter a move (w/

