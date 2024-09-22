#include <iostream>
#include <cstdlib> //for system()
#include <string>
#include <cmath>


//functions prototypes declaration

bool intro();
void add();
void sub();
void mul();
void div();

//global variables

int score = 0;
int life = 3;

using namespace std;

int main() {
    srand(time(0));
    int oper;
    bool contgame = intro();
    while (contgame == true) 
    {
        cout << "\nScore(s): " << score << endl;
        cout << "Life(s): " << life << endl;
        oper = int(rand() %4); //operator
        switch(oper)
        {
            case 0: 
                add();
                break;

            case 1:
                sub();
                break;

            case 2:
                mul();
                break;

            case 3:
                div();
        }
        if (life < 1)
        {
            contgame = false;
            cout << "\n\nYour end score is " << score << endl; 
            cout << "Thanks for joining!\n";
        }
        if (score < 10) 
        {
            cout << "continuing...\n\n";
        }
        else if  (score ==10) 
        {
            cout<<"score: "<<score<<endl;
            cout << "Congrats! You have won the game!";
            contgame = false;
        }
    }


    return 0;
}

bool intro() {
    string username;
    cout << 
    "=================================================================================================\n"
    " __    __     ______     ______   __  __        ______     __  __     __     ______     ______\n"    
    "/\\ \"-./  \\   /\\  __ \\   /\\__  _\\ /\\ \\_\\ \\      /\\  __ \\   /\\ \\/\\ \\   /\\ \\   /\\___  \\   /\\___  \\ \n"   
    "\\ \\ \\-./\\ \\  \\ \\  __ \\  \\/_/\\ \\/ \\ \\  __ \\     \\ \\ \\/\\_\\  \\  \\ \\_\\ \\  \\ \\ \\  \\/_/  /__  \\/_/  /__\n"  
    " \\ \\_\\ \\ \\_\\  \\ \\_\\ \\_\\    \\ \\_\\  \\ \\_\\ \\_\\     \\ \\___\\_\\  \\ \\_____\\  \\ \\_\\   /\\_____\\   /\\_____\\ \n" 
    "  \\/_/  \\/_/   \\/_/\\/_/     \\/_/   \\/_/\\/_/      \\/___/_/   \\/_____/   \\/_/   \\/_____/   \\/_____/\n\n"
    "=================================================================================================\n\n";

    cout << "You'll be given 3 lives, try to reach ten points before you ran out of lives!\n";
    cout << "Username: ";
    cin >> username;
    username[0] = toupper(username[0]); //capitalize the first letter of username

    char ans1;

    do
    {
        cout << "Hi! " << username << ", are you ready to work your brain? [y/n]";
        cin >> ans1;
    } while (tolower(ans1) != 'y' && tolower(ans1) != 'n'); //added tolower() for error handling
    
    if (ans1 == 'y') 
    {
        cout << "\n";
        return true;
    } else
    {
        return false;
    }
}

void add()
{
    int num1, num2, ans;
    num1 = int(rand() % 50);
    num2 = int(rand() % 50);

    cout << num1 << " + " << num2 << "= ";
    cin >> ans;
    if (num1 + num2 == ans) 
    {
        cout << "Congrats u got it right!\n";
        score++;
        
    }
    else 
    {
        cout << "Ehhh u got it wrong\n";
        life--;
    }
}

void sub()
{
    //Dhaifan
}

void mul()
{
    int num1, num2, ans;
    num1 = int(rand() % 11);
    num2 = int(rand() % 11);

    cout << num1 << " * " << num2 << "= ";
    cin>> ans;
    if (num1 * num2 == ans)
    {
        cout << "Congrats u got it right!\n";
        score++;
    }
    else
    {
        cout << "Ehhh u got it wrong\n";
        life--;
    }
}

void div()
{
    float num1, num2;
    int ans;
    num1 = float(rand() % 10 + 1);
    num2 = float (rand() % 10 + 1);

    cout << "(Round the answer into nearest integer)\n" << num1 << '/' << num2 << "= ";
    cin >> ans;
    if(round(num1 / num2) == ans)
    {
        cout << "Congrats u got it right!\n";
        score++;
        
    }
    else 
    {
        cout << "Ehhh u got it wrong\n";
        life--;
    }
}