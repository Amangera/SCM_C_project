#include<iostream>
#include "createFile.h"
#include "fileCopyMaker.h"
#include "VCS_initialization.h"

using namespace std;


class VCSadd{};
class VCScommit{};

int main(){ CreatingFil obj1;    //obj1 to create file
     VCSInitialize obj2;  //obj2 to initialize directory VCS
     fileCopyMaker obj3;   //obj3 to copy files


    obj2.VCSinitialize();

    string fileName;

    fileName = obj1.CreateFil() + ".txt";

      obj3.CopyMaker(fileName);



    cout<<"\n"<<fileName;

return 0;
}
