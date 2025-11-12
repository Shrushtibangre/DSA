#include <iostream>
#include <deque>
#include <set>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <algorithm>
#include <chrono>
#include <thread>
#include <windows.h>
using namespace std;

const int ROWS = 10;
const int COLS = 10;

struct Position
{
    int x, y;

    bool operator<(const Position &other) const
    {
        return (x == other.x) ? (y < other.y) : (x < other.x);
    }

    bool operator==(const Position &other) const
    {
        return x == other.x && y == other.y;
    }
};

// Directions: Up, Down, Left, Right
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
char dirKeys[] = {'W', 'S', 'A', 'D'};

int getDirectionIndex(char input)
{
    input = toupper(input);
    for (int i = 0; i < 4; i++)
    {
        if (input == dirKeys[i])
            return i;
    }
    return -1;
}

Position generateFood(const set<Position> &snakeSet)
{
    Position food;
    while (true)
    {
        food.x = rand() % ROWS;
        food.y = rand() % COLS;
        if (snakeSet.find(food) == snakeSet.end())
            break;
    }
    return food;
}

void printBoard(const deque<Position> &snake, Position food)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            Position p = {i, j};
            if (p == snake.front())
            {
                cout << "H "; // Head
            }
            else if (find(snake.begin(), snake.end(), p) != snake.end())
            {
                cout << "S "; // Snake body
            }
            else if (p == food)
            {
                cout << "F "; // Food
            }
            else
            {
                cout << ". ";
            }
        }
        cout << endl;
    }
    cout << "Use W/A/S/D to move. Current length: " << snake.size() << endl;
}
// Sleep(300);

int main()
{
    srand(time(0));

    deque<Position> snake;
    set<Position> snakeSet;

    snake.push_back({0, 0});
    snakeSet.insert({0, 0});

    Position food = generateFood(snakeSet);

    int direction = 3; // Start moving right

    while (true)
    {
        system("cls"); // For Windows. Use system("clear") on Linux/Mac
        printBoard(snake, food);

        if (_kbhit())
        {
            char input = _getch();
            int newDir = getDirectionIndex(input);
            if (newDir != -1)
                direction = newDir;
        }

        Position head = snake.front();
        Position newHead = {head.x + dx[direction], head.y + dy[direction]};

        // Check wall collision
        if (newHead.x < 0 || newHead.x >= ROWS || newHead.y < 0 || newHead.y >= COLS)
        {
            cout << "Game Over! You hit the wall." << endl;
            break;
        }

        // Check self collision
        if (snakeSet.count(newHead))
        {
            cout << "Game Over! You ran into yourself." << endl;
            break;
        }

        // Move the snake
        snake.push_front(newHead);
        snakeSet.insert(newHead);

        if (newHead == food)
        {
            food = generateFood(snakeSet); // Don't remove tail if food eaten
        }
        else
        {
            Position tail = snake.back();
            snake.pop_back();
            snakeSet.erase(tail);
        }

       

        
    }
   
    Sleep(300);

    return 0;
}
