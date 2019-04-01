/* program to initialize repository
   used to create VCS directory and various other records*/
#include<iostream>
#include<dir.h>
#include<stdlib.h>
using namespace std;


int main(){
int directoryCheck;

directoryCheck = mkdir("vcs");  //created directory vcs using dir.h

if(!directoryCheck){                //check if file is created or not
        cout<<"Directory Created";

        system("cd vcs && mkdir textFileRecords");      //created textFileRecords directory inside vcs
        system("cd vcs && echo.>commits.txt");          //created commits.txt inside vcs
        system("cd vcs && echo.>filetracker.txt");      //created filetracker.txt inside vcs


}
    else{
        cout<<"Unable to create directory \n";
    }
}
