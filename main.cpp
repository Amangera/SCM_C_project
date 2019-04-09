#include<iostream>
#include "createFile.h"
#include "fileCopyMaker.h"
#include "VCS_initialization.h"
#include "fileMover.h"
#include "commit maker.h"

using namespace std;


class VCSadd{};

class VCScommit{};

int main(){
     int choice;
     cout<<"Press 0 to create new file and 1 to add file to VCS >>>>";
     cin>>choice;
     
    
     VCSInitialize obj2;  //obj2 to initialize directory VCS
     fileCopyMaker obj3;   //obj3 to copy files
     fileMover obj4;        //obj4 to moveFiles
     CommitMaker obj5;      //obj5 to make commits

     string fileName;
     string copyName;
     string getfileName;

    obj2.VCSinitialize();
//<<<<<<< collab_aka
    switch(choice)
    {
       case 0:
	       {
       CreatingFil obj1;    //obj1 to create file
       getfileName = obj1.CreateFil();
       fileName = getfileName;
        break;
	       }
       case 1:
	       {
       copyName = fileName + "1" +  ".txt";   
     //to add file to stagged area
        copyName = fileName + "1" +  ".txt";
//>>>>>>> dev_akash
        fileName = fileName + ".txt";
        obj3.CopyMaker(fileName,copyName , "stagedFiles" );  //sending redefined arguments
       break;
    }
       default:
	       cout<<"Enter valid operation >>>>";
	       break;
    }


    cout<<"\n"<<fileName;
//MODIFICATION REQUIRED
    cout<<endl<<"Press 1 to commit and 0 to continue :";
    int choice;
    cin>>choice;
    if(choice = 1){

        obj5.commit("first Commit." , 1);
        obj4.Mover( copyName , "MovedFile.txt" , "unmodifiedFiles" , "stagedFiles" );

    }



return 0;
}
