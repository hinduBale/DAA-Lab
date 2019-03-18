#include <bits/stdc++.h>
#include <process.h>
#include <dir.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fstream>

using namespace std;

string random_string( size_t length )
{
   auto randchar = []() -> char
   {
       const char charset[] =
       "0123456789"
       "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
       "abcdefghijklmnopqrstuvwxyz";
       const size_t max_index = (sizeof(charset) - 1);
       return charset[ rand() % max_index ];
   };
   std::string str(length,0);
   std::generate_n( str.begin(), length, randchar );
   return str;
}
void bubbleSort(string arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
           {
               string temp;
               temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
           }
}
int main()
{
    char* dirname = "MyNewDir";
   int check = mkdir(dirname);
   // Creating a directory
   if (!check)
       cout << "Error " << endl;

   else
       cout << "Directory created";

   string f_name[10];
   // files create
   for(int i=0; i<10; i++) {
       f_name[i] = random_string(5);
       std::ofstream outfile ("./newDir/"+f_name[i]+".txt");

       outfile << "my text here!" << std::endl;

       outfile.close();
   }
   cout<<"before sorted: \n";
   for(int i=0; i<10; i++) {

       cout<<f_name[i]<<".txt"<<endl;
   }
   // sort
   bubbleSort(f_name, 10);
   cout<<"after sorted: \n";
   for(int i=0; i<10; i++) {

       cout<<f_name[i]<<".txt"<<endl;
   }

return 0;

}
