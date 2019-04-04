#include<iostream>
#include "createFile.h"
#include "fileCopyMaker.h"
#include "VCS_initialization.h"

using namespace std;


class VCSadd{};

class VCScommit{};

int main(){
     int choice;
     cout<<"Press 0 to create new file and 1 to add file to VCS >>>>";
     cin>>choice;
     
    
     VCSInitialize obj2;  //obj2 to initialize directory VCS
     fileCopyMaker obj3;   //obj3 to copy files
     string fileName;

    obj2.VCSinitialize();
    switch(choice)
    {
       case 0:
	       {
       CreatingFil obj1;    //obj1 to create file
       fileName = obj1.CreateFil();
       break;
	       }
       case 1:
	       {
        string copyName = fileName + "1" +  ".txt";
        fileName = fileName + ".txt";

        obj3.CopyMaker(fileName,copyName , "stagedFiles" );  //sending redefined arguments
       break;
    }
       default:
	       cout<<"Enter valid operation >>>>";
	       break;
    }


//cout<<" \n Enter the name of file to be added :";

  //      cin>>fileName;
    cout<<"\n"<<fileName;



return 0;
}
