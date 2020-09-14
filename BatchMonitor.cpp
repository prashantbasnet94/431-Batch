#include <iostream>
#include<stdio.h>
#include<cstdlib>
#include<iostream>
#include<string.h>
#include<fstream>
#include<dirent.h>
using namespace std;

 int userInput;
   


void listOptions(){
    cout << "\n\n"<< endl;
    cout << "1: List all jobs \n"<< endl;
    cout << "2: Set jobs directory \n"<< endl;
    cout << "3: Compile and run specific program \n"<< endl;
    cout << "4: Compile and run all jobs in a specific directory \n"<< endl;
    cout << "5: Shutdown \n"<< endl;
    cout << "6: List program options \n"<< endl;
    cout << "7: Help \n"<< endl;
    cout << "\n\n"<< endl;

     cin >> userInput;
}

 void listFile(){
            DIR *dir;
            struct dirent *ent;
            if ((dir = opendir ("./Jobs/")) != NULL) {
            /* print all the files and directories within directory */
            while ((ent = readdir (dir)) != NULL) {
               
                   printf ("%s\n", ent->d_name);
                //    cout << (ent = readdir (dir)) << endl;
            }
            closedir (dir);
            } else {
            /* could not open directory */
            perror ("");
            cout << EXIT_FAILURE << endl;
            }
}


int main(){ 

    while (userInput!=5)
    {
        listOptions();
         switch (userInput)
         {
         case 1:
             cout << "1 is entered" << endl;
             listFile();
             break;
         case 2:
             cout << "2 is entered" << endl;
         default:
             break;
         }
    }
    
}
