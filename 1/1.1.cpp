
#include <bits/stdc++.h>

using namespace std;

struct student
{
    string name;
    string RollNo;
    string College;
};


int main()
{
    struct student S[4], S1[4];
    for(int i = 0; i < 4; i++)
    {
        cout << "Enter name, RollNo. and College of Student" << i+1 << endl;
        cin >> S[i].name;
        cin >> S[i].RollNo;
        cin >> S[i].College;
    }



    vector <string> StudentNames;
    for(int i = 0; i < 4; i++)
    {
        StudentNames.push_back(S[i].name);
    }
    sort(StudentNames.begin(), StudentNames.end());

    for(int i = 0; i < 4; i++)
    {
        S1[i].name = StudentNames[i];
        for(int j = 0; j < 4; j++)
        {
            if(S[j].name == StudentNames[i])
            {
                S1[i].RollNo = S[j].RollNo;
                S1[i].College = S[j].College;
            }
        }
    }



    for(int i = 0; i < 4; i++)
    {
        cout <<" " << S1[i].name << " ";
        cout << S1[i].RollNo << " ";
        cout << S1[i].College << " ";
        cout << "***************************************";

    }

    char choice;
    string name;
    cout << "Do you want to search for a particular student's records?? ";
    cout << "Press Y/N ";
    cin >> choice;
    if(choice == 'Y' || choice == 'y')
    {
        cout << "Enter name:	";
        cin >> name;
        for(int i = 0; i < 4; i++)
        {
            if (name == S1[i].name)
            {
                cout << S1[i].name << " ";
                cout << S1[i].RollNo << " ";
                cout << S1[i].College << " ";
            }
        }
    }
    else if(choice == 'N' || choice == 'n')
    {
        exit(0);
    }
    else
        cout << "Bhag chutiye ";



    return 0;
}


