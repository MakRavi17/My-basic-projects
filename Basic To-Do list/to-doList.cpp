#include<iostream>
#include <vector>
using namespace std;

void displayMenu(){
    cout << "========== To-Do List ==========" << endl;
    cout << "1. Add Task" << endl;
    cout << "2. View Tasks" << endl;
    cout << "3. Mark Task as Completed" << endl;
    cout << "4. Delete Task" << endl;
    cout << "5. Exit" << endl;
    cout << "================================" << endl;
    cout << "Enter your choice: ";
}

void addTask(vector<string>& tasks){
    string task;
    cout<<"Enter the Task: ";
    cin.ignore();
    getline(cin,task);
    tasks.push_back(task);
    cout<<"Task added successfully!";
}

void viewTasks(const vector<string>& tasks){
    if(tasks.empty()){
        cout<<"No tasks to display!"<<endl;
        return;
    }
    cout<<"===== TO-DO LIST ====="<<endl;
    for (int i = 0; i < tasks.size(); i++)
    {
        cout<< i+1 <<". "<<tasks[i]<<endl;
    }
}

void markComplete(vector<string>& tasks){
    if(tasks.empty()){
        cout<<"No tasks to display!"<<endl;
        return;
    }
    int taskNumber;
    viewTasks(tasks);
    cout<<"Enter the Task number to mark as completed: ";
    cin>>taskNumber;
    if (taskNumber < 1 || taskNumber > tasks.size()) {
        cout << "Invalid task number!" << endl;
        return;
    }
    tasks[taskNumber - 1] += " (Completed)";
    cout << "Task marked as completed!" << endl;
}

void deleteTask(vector<string>& tasks){
    if(tasks.empty()){
        cout<<"No tasks to display!"<<endl;
        return;
    }
    int taskNumber;
    viewTasks(tasks);
    cout<<"Enter the Task number to mark as completed: ";
    cin>>taskNumber;
    if (taskNumber < 1 || taskNumber > tasks.size()) {
        cout << "Invalid task number!" << endl;
        return;
    }
    tasks.erase(tasks.begin() + taskNumber - 1);
    cout << "Task deleted successfully!" << endl;
}

int main(){
    vector<string> tasks;
    int choice;

    while(true){
        displayMenu();
        cin>>choice;

        switch (choice)
        {
        case 1:
            addTask(tasks);
            break;

        case 2:
            viewTasks(tasks);
            break;

        case 3:
            markComplete(tasks);
            break;    
        
        case 4:
            deleteTask(tasks);
            break;

        case 5:
            cout << "Exiting... Goodbye!" << endl;
            return 0;

        default:
            cout << "Invalid choice! Please try again." << endl;
            break;
        }
        cout<<endl;
    }

    return 0;
}