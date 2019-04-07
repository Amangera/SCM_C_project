#include<iostream>
#include<fstream>
#include<windows.h> //to perform directory change

using namespace std;

class fileMover{
    public:
int Mover(string fileNameToMove , string MovedFileName , string MoveLocation , string MoveFileFromPath ){  //redefined to get args from main and modify the program



    SetCurrentDirectory( "vcs" ); //set another directory
    SetCurrentDirectory( "textFileRecords" );
    SetCurrentDirectory( MoveFileFromPath.c_str() );



    ifstream fin;
    string stringFin;
  //  string fileName1 = fileName;
    fin.open(fileNameToMove.c_str());
    stringFin = (char)fin.get();
    while(!fin.eof()){
            stringFin = stringFin + (char)fin.get(); //getting char and storing in string
    }
     string commandToRemoveFile ="del " + fileNameToMove;
    fin.close();
    system(commandToRemoveFile.c_str());


   SetCurrentDirectory( MoveLocation.c_str() );


    ofstream fout;      //outputStream object

    fout.open( MovedFileName.c_str() , ios::ate);       // opening file in update mode

    fout<<stringFin;
return 0;
}
};
