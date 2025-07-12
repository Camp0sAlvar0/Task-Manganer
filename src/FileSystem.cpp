#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string taskName = "";

void addTask()
{
    ofstream todolist("todolist.txt", ios::app);
    if (todolist.is_open())
    {
        todolist << taskName << "\n";
        cout << "TASK ADDED TO THE LIST.\n";
        todolist.close();
    }
    else
    {
        cerr << "CANNOT OPEN FILE\n";
    }
}

void viewTask()
{
    ifstream todolist("todolist.txt");
    if (todolist.is_open())
    {
        string taskName;
        cout << "TASK LIST:\n";
        
        while (getline(todolist, taskName)) {
            cout << "- " << taskName << "\n";
        }
        todolist.close();
    }
    else
    {
        cerr << "CANNOT OPEN FILE\n";
    }
}

void editTask()
{
    string searchTask;
    string replaceTask;

    cout << "TASK TO EDIT:\n";
    getline(cin, searchTask);
    cout << "NEW TASK:\n";
    getline(cin, replaceTask);

    ifstream todolist("todolist.txt");

    if((!todolist)){
        cerr<<"Cannot open file. \n";
    }
}



int main()
{
    return 0;
}
