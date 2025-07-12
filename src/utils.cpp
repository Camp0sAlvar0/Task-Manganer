#include <iostream> //Standard library for input/output
#include <string>   //To use "getline"
#include <cstdlib>  //To use the command line
#include <fstream>  //To the file system
using namespace std;

int option = 0;

class User
{
private:

    string nickname;
    string password;

public:
    User(const string &name, const string &pass)
    {

        nickname = name;
        password = pass;

    }

    bool autentication(const string &name, const string &pass){
        return (name==nickname && pass==password);
    }
};

string taskName = "";

void Welcome()
{

    // This part show a the welcome and wait for a Enter
    cout << "════ ∘◦❁◦∘ ════";
    cout << "    WELCOME    ";
    cout << "════ ∘◦❁◦∘ ════\n";
    cout << "";
    cout << "Press Enter";
    cin.get();
}

// When you choose an option in "menu", this function is used to execute the specific order

void OptionFromMenu()
{
    switch (option)
    {
    case 1:
      
        break;

    case 2:

      
        break;

    case 3:

       
        break;

    case 4:

        
        break;

    case 5:
        system("exit");
        break;
    }
}

void Menu()
{
    do
    {
        cout << "————————》✧《—————————\n";
        cout << "SELECT AN OPTION (1,2,3,4)\n",
        cout << "1- NEW TASK\n";
        cout << "2- VIEW TASK\n";
        cout << "3- EDIT TASK\n";
        cout << "4- DELETE TASK\n";
        cout << "5- EXIT\n";
        cout << "————————》✧《—————————\n";
        cin >> option;

    } while (!(option == 1 || option == 2 || option == 3 || option == 4));
}

int main()
{

    Welcome();
    Menu();
    OptionFromMenu();

    return 0;
}