/* program to initialize repository
   used to create VCS directory and various other records*/
#include<iostream>
#include<dir.h>
#include<stdlib.h>
using namespace std;


class VCSInitialize{
    public:
        int directoryCheck;
        int VCSinitialize(){


directoryCheck = mkdir("vcs");  //created directory vcs using dir.h

if(!directoryCheck){                //check if file is created or not
        cout<<"\n Initializing directory......";

        system("cd vcs && mkdir textFileRecords");      //created textFileRecords directory inside vcs
        system("cd vcs && cd textFileRecords && mkdir stagedFiles");
        system("cd vcs && cd textFileRecords && mkdir modifiedFiles");
        system("cd vcs && cd textFileRecords && mkdir unmodifiedFiles");
        system("cd vcs && cd textFileRecords && mkdir untrackedFiles");
        system("cd vcs && echo.>commits.txt");          //created commits.txt inside vcs
        system("cd vcs && echo.>filetracker.txt");      //created filetracker.txt inside vcs


}
    else{
        cout<<"\n Initialization already done";
    }
}
};
