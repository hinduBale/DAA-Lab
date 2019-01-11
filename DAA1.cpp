/*  Write a program to input information about four students and display same information according
to the ascending order of their name.

2. Input a string (i.e. a student's name),  search in the output set  above question and display the
 related record details of the corresponding student. */

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

    for(int i = 0; i < 4; i++)\
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
        cout <<"\n" << S1[i].name << "\n";
        cout << S1[i].RollNo << "\n";
        cout << S1[i].College << "\n";
        cout << "***************************************";

    }

    char choice;
    string name;
    cout << "Do you want to search for a particular student's records??\n";
    cout << "Press Y/N\n";
    cin >> choice;
    if(choice == 'Y' || choice == 'y')
    {
        cout << "Enter name:\t";
        cin >> name;
        for(int i = 0; i < 4; i++)
        {
            if (name == S1[i].name)
            {
                cout << S1[i].name << "\n";
                cout << S1[i].RollNo << "\n";
                cout << S1[i].College << "\n";
            }
        }
    }
    else if(choice == 'N' || choice == 'n')
    {
        exit(0);
    }
    else
        cout << "Bhaag chutiye\n";

    return 0;
}
