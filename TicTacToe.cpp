
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;

bool isFilled(char arr[9]);
bool determinewin(char arr[9]);
void intro();
char friendorbot();
char replay();
bool placepiece(char arr[9]);
bool botmove(char arr[9]);
void smartmove(char arr[9]);
void printboard(char arr[9]);

int main() {
    char replaya;
    replaya = 'y';
    intro();


    while (replaya == 'y' || replaya == 'Y') {

        char friendorbota;
        friendorbota = friendorbot();
        if (friendorbota == 'f' || friendorbota == 'F') {

            cout << "friend";

        }
        else if (friendorbota == 'b' || friendorbota == 'B') {
            char arr[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };


            //1
            placepiece(arr);

            if (determinewin(arr) == true) {
                replaya = replay();
            }
            if (isFilled(arr) == true) {
                replaya = replay();
            }

            //2
            smartmove(arr);

            if (determinewin(arr) == true) {
                replaya = replay();
            }
            if (isFilled(arr) == true) {
                replaya = replay();
            }

            //3
            placepiece(arr);

            if (determinewin(arr) == true) {
                replaya = replay();
            }
            if (isFilled(arr) == true) {
                replaya = replay();
            }

            //4
            smartmove(arr);

            if (determinewin(arr) == true) {
                replaya = replay();
            }
            if (isFilled(arr) == true) {
                replaya = replay();
            }

            //5
            placepiece(arr);

            if (determinewin(arr) == true) {
                replaya = replay();
            }
            if (isFilled(arr) == true) {
                replaya = replay();
            }

            //6
            smartmove(arr);

            if (determinewin(arr) == true) {
                replaya = replay();
            }
            if (isFilled(arr) == true) {
                replaya = replay();
            }

            //7
            placepiece(arr);

            if (determinewin(arr) == true) {
                replaya = replay();
            }
            if (isFilled(arr) == true) {
                replaya = replay();
            }

            //8
            smartmove(arr);

            if (determinewin(arr) == true) {
                replaya = replay();
            }
            if (isFilled(arr) == true) {
                replaya = replay();
            }

            //9
            placepiece(arr);

            if (determinewin(arr) == true) {
                replaya = replay();
            }
            if (isFilled(arr) == true) {
                replaya = replay();
            }
        }
        cout << "\nThanks for playing!\n";
        exit(0);

    }
}
bool isFilled(char arr[9]) {
    for (int i = 0; i < 9; i++) {
        if (arr[i] == ' ') {
            return false;
        }
    }
    cout << "\n Its a tie!!! \n";
    return true;
}

bool determinewin(char arr[9]) {
    // check for wins in rows
    if (arr[0] == arr[1] && arr[1] == arr[2] && arr[0] != ' ') {
        if (arr[0] == 'X') {
            cout << "\n\n X wins!!! \n" << endl;
        }
        else {
            cout << "\n \n\n O wins!!! \n!!! \n" << endl;
        }
        return true;
    }
    if (arr[3] == arr[4] && arr[4] == arr[5] && arr[3] != ' ') {
        if (arr[3] == 'X') {
            cout << "\n \n\n X wins!!! \n!!! \n" << endl;
        }
        else {
            cout << "\n\n O wins!!! \n" << endl;
        }
        return true;
    }
    if (arr[6] == arr[7] && arr[7] == arr[8] && arr[6] != ' ') {
        if (arr[6] == 'X') {
            cout << "\n\n X wins!!! \n" << endl;
        }
        else {
            cout << "\n \n \n\n O wins!!! \n!!! \n!!! \n" << endl;
        }
        return true;
    }
    // check for wins in columns
    if (arr[0] == arr[3] && arr[3] == arr[6] && arr[0] != ' ') {
        if (arr[0] == 'X') {
            cout << "\n\n X wins!!! \n" << endl;
        }
        else {
            cout << "\n \n\n O wins!!! \n!!! \n" << endl;
        }
        return true;
    }
    if (arr[1] == arr[4] && arr[4] == arr[7] && arr[1] != ' ') {
        if (arr[1] == 'X') {
            cout << "\n\n X wins!!! \n" << endl;
        }
        else {
            cout << "\n \n\n O wins!!! \n!!! \n" << endl;
        }
        return true;
    }
    if (arr[2] == arr[5] && arr[5] == arr[8] && arr[2] != ' ') {
        if (arr[2] == 'X') {
            cout << "\n\n X wins!!! \n" << endl;
        }
        else {
            cout << "\n \n\n O wins!!! \n!!! \n" << endl;
        }
        return true;
    }
    // check for wins in diagonals
    if (arr[0] == arr[4] && arr[4] == arr[8] && arr[0] != ' ') {
        if (arr[0] == 'X') {
            cout << "\n\n X wins!!! \n" << endl;
        }
        else {
            cout << "\n \n\n O wins!!! \n!!! \n" << endl;
        }
        return true;
    }
    if (arr[2] == arr[4] && arr[4] == arr[6] && arr[2] != ' ') {
        if (arr[2] == 'X') {
            cout << "\n\n X wins!!! \n" << endl;
        }
        else {
            cout << "\n \n\n O wins!!! \n!!! \n" << endl;
        }
        return true;
    }
    return false;
}


void intro() {

    cout << "Welcome to rudimentary C++ Tic Tac Toe. To play, you will enter a number 0-8, each of which corresponds to the panel on this 3x3 grid: \n\n";
    cout << "\n 0 | 1 | 2 ";
    cout << "\n -------- ";
    cout << "\n 3 | 4 | 5 ";
    cout << "\n -------- ";
    cout << "\n 6 | 7 | 8 \n";
}

char friendorbot() {

    cout << "\nWould you like to play against a friend, or against a bot ? (F/B) ";
    char temp;
    cin >> temp;
    return temp;
}

char replay() {

    cout << "\nWould you like to play again?";
    char temp;
    cin >> temp;
    return temp;
}

bool placepiece(char arr[9]) {
    bool determine = false;
    do {
    cout << "\nPlease select where you would like to put your piece: (0-8)";
    int placement;
    cin >> placement;

        if (placement >= 0 && placement <= 8) {
            if (arr[placement] == ' ') {
                arr[placement] = 'X';

                determine = true;
                printboard(arr);
                return true;
            }
            else {
                cout << "\n Invalid placement location. Please select a proper placement.";
                determine = false;
                placepiece(arr);
            }
        }
        else {
            cout << "\n Invalid placement location. Please select a proper placement.";
            determine = false;
            placepiece(arr);
        }
    } while (determine = false);
}

bool botmove(char arr[9]) {

    this_thread::sleep_for(chrono::milliseconds(500));
    cout << "\n\n . . . \n\n";
    this_thread::sleep_for(chrono::milliseconds(500));
    
    srand(time(0));
        int placement = rand() % 9;
        if (arr[placement] == ' ') {
            arr[placement] = 'O';
            printboard(arr);
            return true;
        }
        else {
            botmove(arr);
        }

}

void smartmove(char arr[9]) {

    this_thread::sleep_for(chrono::milliseconds(500));
    cout << "\n\n . . . \n\n";
    this_thread::sleep_for(chrono::milliseconds(500));

    // Check if player has two in a row
    for (int i = 0; i < 9; i += 3) {
        if (arr[i] == 'X' && arr[i + 1] == 'X' && arr[i + 2] == ' ') {
            arr[i + 2] = 'O';
            return;
        }
        else if (arr[i] == 'X' && arr[i + 1] == ' ' && arr[i + 2] == 'X') {
            arr[i + 1] = 'O';
            return;
        }
        else if (arr[i] == ' ' && arr[i + 1] == 'X' && arr[i + 2] == 'X') {
            arr[i] = 'O';
            return;
        }
    }

    // Check if player has two in a column
    for (int i = 0; i < 3; i++) {
        if (arr[i] == 'X' && arr[i + 3] == 'X' && arr[i + 6] == ' ') {
            arr[i + 6] = 'O';
            return;
        }
        else if (arr[i] == 'X' && arr[i + 3] == ' ' && arr[i + 6] == 'X') {
            arr[i + 3] = 'O';
            return;
        }
        else if (arr[i] == ' ' && arr[i + 3] == 'X' && arr[i + 6] == 'X') {
            arr[i] = 'O';
            return;
        }
    }

    // Check if player has two in a diagonal
    if (arr[0] == 'X' && arr[4] == 'X' && arr[8] == ' ') {
        arr[8] = 'O';
    }
    else if (arr[0] == 'X' && arr[4] == ' ' && arr[8] == 'X') {
        arr[4] = 'O';
    }
    else if (arr[0] == ' ' && arr[4] == 'X' && arr[8] == 'X') {
        arr[0] = 'O';
    }
    else if (arr[2] == 'X' && arr[4] == 'X' && arr[6] == ' ') {
        arr[6] = 'O';
    }
    else if (arr[2] == 'X' && arr[4] == ' ' && arr[6] == 'X') {
        arr[4] = 'O';
    }
    else if (arr[2] == ' ' && arr[4] == 'X' && arr[6] == 'X') {
        arr[2] = 'O';
    }
    else {
        // Default to botmove() if no smart move is available
        botmove(arr);
    }
}

void printboard(char arr[9]) {
    cout << "\n "<< arr[0] <<" | " << arr[1]<<" | "<< arr[2] <<" ";
    cout << "\n -------- ";
    cout << "\n " << arr[3] << " | " << arr[4] << " | " << arr[5] << " ";
    cout << "\n -------- ";
    cout << "\n " << arr[6] << " | " << arr[7] << " | " << arr[8] << " ";
}