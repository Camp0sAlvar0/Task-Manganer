#include <iostream>

using namespace std;

int option = 0;

void welcome()
{

    //This part show a the welcome and wait for a Enter
    cout << "════ ∘◦❁◦∘ ════";
    cout << "    WELCOME    ";
    cout << "════ ∘◦❁◦∘ ════\n";
    cout << "";
    cout << "Press Enter";
    cin.get();
}

void menu()
{
    do
    {
        cout<<"————————》✧《—————————\n";
        cout << "SELECT AN OPTION (1,2,3,4)\n",
        cout << "1- NEW TASK\n";
        cout << "2- VIEW TASK\n";
        cout << "3- EDIT TASK\n";
        cout << "4-DELETE TASK\n";
        cout<<"————————》✧《—————————\n";

    } while (!(option == 1 || option == 2 || option == 3 || option == 4));
}

int main()
{

    welcome();
    menu();

    return 0;
}