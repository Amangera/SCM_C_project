#include<iostream>
#include "createFile.h"
#include "fileCopyMaker.h"
#include "VCS_initialization.h"

using namespace std;


class VCSadd{};

class VCScommit{};

int main(){
     CreatingFil obj1;    //obj1 to create file
     VCSInitialize obj2;  //obj2 to initialize directory VCS
     fileCopyMaker obj3;   //obj3 to copy files
     string fileName;

    obj2.VCSinitialize();
   fileName = obj1.CreateFil();

    cout<<"\n Want to add file to VCS press 1 >>>>";    //to add file to stagged area
    int options;
    cin>>options;                                       //getting user choice
    if(options == 1){
        string copyName = fileName + "1" +  ".txt";
        fileName = fileName + ".txt";

        obj3.CopyMaker(fileName,copyName , "stagedFiles" );  //sending redefined arguments

    }


//cout<<" \n Enter the name of file to be added :";

  //      cin>>fileName;
    cout<<"\n"<<fileName;



return 0;
}
