#include <iostream>
#include <utility> // for pair
#include <math.h> // for hypot
#include <cstdlib> // for exit

using namespace std;

pair<int, int> mapSize = {10, 10}; // .first -> y .second -> x

enum Directions {
    NORTH,
    WEST,
    EAST,
    SOUTH
};

void movePair(pair<size_t, size_t>& position, Directions direction, u_int distance) {
    switch (direction){
    case NORTH:
        if (position.second - distance < mapSize.first) {
            position.second -= distance;
        } else {
            cout << "Invalid move" << endl;
        }
        break;
    case WEST:
        if (position.first - distance >= 0) {
            position.first -= distance;
        } else {
            cout << "Invalid move" << endl;
        }
        break;

    case EAST:
        if (position.first + distance < mapSize.second) {
            position.first += distance;
        } else {
            cout << "Invalid move" << endl;
        }
        break;

    case SOUTH:
        if (position.second + distance >= 0) {
            position.second += distance;
        } else {
            cout << "Invalid move" << endl;
        }
        break;

    default:
        cout << "Invalid direction" << endl;
        break;
    }
}

pair<Directions, u_int> printAllOptions(){
    char direction;
    u_int distance;
    cout << "State movement direction (N|W|E|S) + the amount to move or (Q) to quit: ";
    cin >> direction;
    Directions parsedDirection;
    switch (direction)
    {
    case 'N':
    case 'n':
        parsedDirection = NORTH;
        break;
    case 'W':
    case 'w':
        parsedDirection = WEST;
        break;
    case 'E':
    case 'e':
        parsedDirection = EAST;
        break;
    case 'S':
    case 's':
        parsedDirection = SOUTH;
        break;
    case 'Q':
    case 'q':
        throw runtime_error("exit case used");
        break;
    default:
        // make this quit the program
        cout << "Invalid direction" << endl;
        return {NORTH, 0};
    }
    cin >> distance;
    pair<Directions, u_int> move = {parsedDirection, distance};
    return move;
}

int main() {
    string sPlayer = " @ ";
    string sGoal = " X ";
    string sEmpty = " * ";
    pair<size_t, size_t> player = {0, 0};
    pair<size_t, size_t> goal = {9, 9};
    double distanceToGoal = -1;
    // main game cycle
    while (true) {
        if(player == goal){
            cout << "YOU WIN!!" << endl;
            break;
        }
        for (size_t y = 0; y < mapSize.first; y++) {
            for (size_t x = 0; x < mapSize.second; x++){
                pair<size_t, size_t> mapPos = {x, y};
                if(mapPos == player){
                    cout << sPlayer;
                    continue;
                } else if(mapPos == goal){
                    cout << sGoal;
                    continue;
                } else {
                    cout << sEmpty;
                    continue;
                }
            }
            cout << endl;
        }
        pair<Directions, u_int> move;
        try {
            move = printAllOptions();
        }
        catch(const runtime_error& e){
            return 0;
        }
        movePair(player, move.first, move.second);
        distanceToGoal = hypot(goal.first - player.first, goal.second - player.second);
        cout << distanceToGoal << endl;
    }
    return 0;
}