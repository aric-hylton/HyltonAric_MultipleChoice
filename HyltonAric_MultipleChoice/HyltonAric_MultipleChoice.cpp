// HyltonAric_MultipleChoice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h> 
#include <time.h>
#include <vector>
#include <functional>

using namespace std;
using func_type = function<void()>;
void answerBank(int num);
void Question1();
void Question2();
void Question3();
void Question4();

int main()
{
    int iSecret;
    srand(time(NULL));
    iSecret = rand() % 4;

    func_type functions[4] = { &Question1, &Question2, &Question3, &Question4 };

    functions[iSecret]();
}

void Question1() {
    char ans;
    cout << "What color is the sky? " << "\n";
    answerBank(0);
    cin >> ans;

    if (ans == 'a') {
        cout << "Correct! " << "\n";
    }
    else {
        cout << "Sorry, you might check if you have a type of color blindess. " << "\n";
    }
}

void Question2() {
    char ans;
    cout << "What are the kings of the jungle? " << "\n";
    answerBank(1);
    cin >> ans;

    if (ans == 'd') {
        cout << "Correct! " << "\n";
    }
    else {
        cout << "Sorry, but that isn't who's roaring at night. " << "\n";
    }
}

void Question3() {
    char ans;
    cout << "Whats the smallest animal out of these? " << "\n";
    answerBank(2);
    cin >> ans;

    if (ans == 'c') {
        cout << "Correct! " << "\n";
    }
    else {
        cout << "Some tunas can be quite big... But not as large as these fellow sea buddies. " << "\n";
    }
}

void Question4() {
    char ans;
    cout << "Michael Phelps is amazing at what sport? " << "\n";
    answerBank(3);
    cin >> ans;

    if (ans == 'b') {
        cout << "Correct! " << "\n";
    }
    else {
        cout << "Sorry, he might be good at that, but he didn't win 23 olympic gold medals doing that.  " << "\n";
    }
}

void answerBank(int num) {
    // Initialize array of pointer
    vector<vector<string>> answers {
        { "a) Blue", "b) Red", "c) Orange", "d) Black" },
        { "a) Elephants", "b) Zebras", "c) Bears", "d) Lions" },
        { "a) Orca", "b) Blue Whale", "c) Tuna", "d) Great White Shark" },
        { "a) Tennis", "b) Swimming", "c) Golf", "d) Pole Vaulting" }
    };

    // Printing Strings stored in 2D array
    for (int i = 0; i < 4; i++) {
        cout << answers[num][i] << "\n";
    }
}
