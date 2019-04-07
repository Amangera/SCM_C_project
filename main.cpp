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
     CreatingFil obj1;    //obj1 to create file
     VCSInitialize obj2;  //obj2 to initialize directory VCS
     fileCopyMaker obj3;   //obj3 to copy files
     fileMover obj4;        //obj4 to moveFiles
     CommitMaker obj5;      //obj5 to make commits

     string fileName;
     string copyName;
     string getfileName;

    obj2.VCSinitialize();
   getfileName = obj1.CreateFil();
    fileName = getfileName;

    cout<<"\n Want to add file to VCS press 1 >>>>";    //to add file to stagged area
    int options;
    cin>>options;                                       //getting user choice
    if(options == 1){
        copyName = fileName + "1" +  ".txt";
        fileName = fileName + ".txt";

        obj3.CopyMaker(fileName,copyName , "stagedFiles" );  //sending redefined arguments

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
