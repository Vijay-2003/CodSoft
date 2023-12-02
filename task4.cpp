#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

void intask(string taskarr[], int task_count){
    cout << endl << "Task To Do: " << endl;
    cout << "--------------------------------------" << endl;
    for(int i = 0; i < task_count; i++){
        cout << "Task " << i << " : " << taskarr[i] << endl;
    }
    cout << "--------------------------------------" << endl;
}

int main(){

    string taskarr[10] = {""};
    int task_count = 0;

    int option = -1;

    while(option != 0){
        cout << endl << "--- TO DO LIST ---" << endl;
        cout << "1] Add New Task \n2] View Tasks \n3] Delete Task \n0] Terminate/Exit Program" << endl;
        cout << "Enter your preferred operation: ";
        cin >> option;

        switch (option)
        {
            case 1:
            {
                if(task_count > 9){
                    cout << "--- TASK LIST IS FULL ---" << endl;
                }else{
                    cout << "Enter A New Task: ";
                    cin.ignore();
                    getline(cin, taskarr[task_count]);
                    task_count++;
                    cout << "Task Submitted" << endl;
                }
                break;
            }
            case 2: 
            system("cls");
            intask(taskarr, task_count);
            break;
            case 3: 
            {
                system("cls");
                intask(taskarr, task_count);
                int del_task = 0;
                cout << "Enter A Task Number To Delete It: ";
                cin >> del_task;

                if(del_task < 0 || del_task > 9){
                    cout << "!!! YOU ENTERED INVALID TASK NUMBER !!!" << endl;
                    break;
                }

                for(int i = del_task; i < task_count; i++){
                    taskarr[i] = taskarr[i + 1];
                }
                task_count = task_count - 1;
                cout << "Task Deleted" << endl;
                break;
            }
            case 0:
            cout << "!!! Program Terminated !!!";
            break;
            default: 
            cout << "!!! Plz Enter A Valid Operation(1,2,3 or 0) !!!" << endl;
        }
    }
    return 0;
}