#include <iostream>
#include <cstdlib> //for system()
#include <string>
int score = 0;
using namespace std;

int game() {
    bool contgame = true;
    while (contgame == true) {
        int ans, oper;
        double num1, num2;
        num1 = int(rand() % 50);
        num2 = int(rand() % 50);
        oper = int(rand() %4);//operator
        switch(oper){
            case 0: 
        }
        cout << "\nscore: " << score << endl;
        cout << num1 << " + " << num2 << " = ";//nyawa
        cin >> ans;
        if (num1 + num2 == ans) {
            cout << "Congrats u got it right!" << endl;
            score += 1;
            if (score < 5) {
                cout << "continuing..." << endl;
            }
            else if  (score ==5) {
                cout << "" << endl;
                cout<<"score: "<<score<<endl;
                cout << "Congrats! You have won the game!";
                contgame = false;
            } else {}

        } 
        else {
            cout << "ehhh u got it wrong";
            contgame = false;
        }
    }
    cout << "\n\nYour end score is " << score << endl; 
    cout << "Thanks for joining!" << endl;

    return 0;
}

int main() {
    srand(time(0));
    bool cont = true;
    string username;
    cout << "MATH QUIZ" << endl;
    cout << "The game will end when u reach 5 points or when u fail before 5 points" << endl;
    cout << "Username: ";
    cin >> username;
    while (cont == true) {
        string ans1;
        cout << "Hi! " << username << ", are you ready to work your brain? (yes/no)";
        cin >> ans1;//use do while

        if (ans1 == "yes") {
            cout << "" << endl;
            cont = false;
            game();
        } else if (ans1 == "no") {
            cont = false;
            break;
        } else {
            cout << "Error in the answer, please answer with yes or no.\n" << endl;
        }
    }
    return 0;
}
