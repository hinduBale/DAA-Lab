 #include<iostream>

using namespace std;

class Student {
    public:
        string name;
        int id;
        void get_stud_data() {
            int i;
            string s;
            cout<< "name and id: ";
            cin>>s>>i;
            name = s; id = i;
        }
        void show_stud_data() {
            cout<<"name: "<<name<<"	"<<"id: "<<id<<endl;
        }
};

int partition(Student S[], int p, int r) {

    int x = S[r].id;
    int i = p-1;

    for(int j=p; j<=r-1; j++) {
        if(S[j].id <= x) {
            i++;
            swap(S[i].id, S[j].id);
            swap(S[i].name, S[j].name);
        }
    }
    swap(S[i+1].id, S[r].id);
    swap(S[i+1].name, S[r].name);
    return i+1;

}

void quickSort(Student S[], int p, int r) {
    if(p < r) {
        int q = partition(S, p, r);
        quickSort(S, p, q-1);
        quickSort(S, q+1, r);
    }
}

int main()
{


    int arr_size = 8;
    Student S[arr_size];
    int i;
    int s_id[arr_size];
    string s_name[arr_size];

    cout<<"enter 8 Students details to sort: "<<endl;
    for(i=0; i<arr_size; i++)
    {
        S[i].get_stud_data();
    }

    cout<<"Given data is ";
    for (i=0; i < arr_size; i++){
        s_id[i] = S[i].id;
        s_name[i] = S[i].name;
        S[i].show_stud_data();
    }

    // sort id
    quickSort(S, 0, arr_size-1);

    cout<<" Sorted data is ";
    for (i=0; i < arr_size; i++)
        S[i].show_stud_data();
    cout<<endl;

    return 0;
}

