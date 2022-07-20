// Tic Tac Toe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Author: Ivan Madeira de Oliveira

#include<iostream> //Input-Output Library
#include<math.h> //Math Library as ceil(), floor()
#include<string>

using namespace std;

bool winner_test(bool winner, char tic_tac_toe[3][3]) {
    int i = 0;

    //Equal Line test
    for (i = 0; i <= 2; i++) {
        if (tic_tac_toe[i][0] == tic_tac_toe[i][1] && tic_tac_toe[i][0] == tic_tac_toe[i][2] && tic_tac_toe[i][0] == 'X') {
            cout << "Player X Wins!" << endl;
            winner = true;
            system("pause");
        }
        else if (tic_tac_toe[i][0] == tic_tac_toe[i][1] && tic_tac_toe[i][0] == tic_tac_toe[i][2] && tic_tac_toe[i][0] == 'O'){ 
            cout << "Player X Wins!" << endl;
            winner = true;
            system("pause");
        }
        else winner = false;
    }


    //Equal Column test
    for (i = 0; i <= 2; i++) {
        if (tic_tac_toe[0][i] == tic_tac_toe[1][i] && tic_tac_toe[0][i] == tic_tac_toe[2][i] && tic_tac_toe[0][i] == 'X') {
            cout << "Player X Wins!" << endl;
            winner = true;
            system("pause");
        }
        else if (tic_tac_toe[0][i] == tic_tac_toe[1][i] && tic_tac_toe[0][i] == tic_tac_toe[2][i] && tic_tac_toe[0][i] == 'O') {
            cout << "Player O Wins!" << endl;
            winner = true;
            system("pause");
        }
        else winner = false;
    


    //Equal Diagonal test
    if (tic_tac_toe[0][0] == tic_tac_toe[1][1] && tic_tac_toe[0][0] == tic_tac_toe[2][2] && tic_tac_toe[0][0] == 'X') {
        cout << "Player X Wins!" << endl;
        winner = true;
        system("pause");
    }
    else if (tic_tac_toe[0][0] == tic_tac_toe[1][1] && tic_tac_toe[0][0] == tic_tac_toe[2][2] && tic_tac_toe[0][0] == 'O') {
        cout << "Player O Wins!" << endl;
        winner = true;
        system("pause");
    }
    else winner = false;


    if (tic_tac_toe[0][2] == tic_tac_toe[1][1] && tic_tac_toe[0][2] == tic_tac_toe[2][0] && tic_tac_toe[0][2] == 'X') {
        cout << "Player X Wins!" << endl;
        winner = true;
        system("pause");
    }
    else if (tic_tac_toe[0][2] == tic_tac_toe[1][1] && tic_tac_toe[0][2] == tic_tac_toe[2][0] && tic_tac_toe[0][2] == 'O') {
        cout << "Player O Wins!" << endl;
        winner = true;
        system("pause");
    }
    else winner = false;

    return winner;
}

//Print Tic Tac Toe
    void print_tic_tac_toe(char tic_tac_toe[3][3]) {
        int i;
        for (i = 0; i <= 2; i++) {
            cout << "          " << tic_tac_toe[i][0] << " " << tic_tac_toe[i][1] << " " << tic_tac_toe[i][2] << endl;
        }
    }
   

int main() {

    //Initializing Variables
    char tic_tac_toe[3][3] = { {'*','*','*'},{'*','*','*'},{'*','*','*'} };
    int i = 0, l = 0, c = 0;
    bool winner = false;

    //Welcome and Rules
    cout << "Welcome to Tic Tac Toe on C++!\n" << endl;
    cout << "Rules of the game:" << endl;
    cout << "Player X and Player O plays once per turn marking a spot in a matrix [3][3]." << endl;
    cout << "Who manage to mark tree spots in a role Wins!" << endl;
    cout << "Player X plays first.\n" << endl;
    cout << "The matrix has the following format:\n" << endl;

    //Print Tic Tac Toe
    print_tic_tac_toe(tic_tac_toe);

    //Matrix format
    cout << " " << endl;
    cout << "  [0][0] [0][1] [0][2]" << endl;
    cout << "  [1][0] [1][1] [1][2]" << endl;
    cout << "  [2][0] [1][1] [2][2]" << endl;
   


    //Do While, Players turns until we have a Winner
    do {
        //Player X turn
        cout << " " << endl;
        cout << "\nPlayer X, where would you like to put your mark? [Line][Column] (0, 1 or 2 indexes)" << endl;
        cout << "Enter the line number: ";
        cin >> l;
        cout << "Enter the column number: ";
        cin >> c;

        tic_tac_toe[l][c] = 'X';

        //Test
        winner = winner_test(winner, tic_tac_toe);

        //Print Tic Tac Toe
        switch (winner){
            case true: print_tic_tac_toe(tic_tac_toe); break;
            default: print_tic_tac_toe(tic_tac_toe);
        } 
        

        //Player O turn
        cout << " " << endl;
        cout << "\nPlayer O, where would you like to put your mark? [Line][Column] (0, 1 or 2 indexes)" << endl;
        cout << "Enter the line number: ";
        cin >> l;
        cout << "Enter the column number: ";
        cin >> c;

        //Test
        tic_tac_toe[l][c] = 'O';

        //Print Tic Tac Toe
        winner = winner_test(winner, tic_tac_toe);

        switch (winner) {
            case true: print_tic_tac_toe(tic_tac_toe); break;
            default: print_tic_tac_toe(tic_tac_toe);
        }

    } while (winner == false);


    //Print Tic Tac Toe
    for (i = 0; i <= 2; i++) {
        cout << "        " << tic_tac_toe[i][0] << " " << tic_tac_toe[i][1] << " " << tic_tac_toe[i][2] << endl;
    }

    return 0;
}

