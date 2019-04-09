#include<iostream>
#include<fstream>
#include<windows.h> //to perform directory change

using namespace std;

class fileCopyMaker{
    public:
int CopyMaker(string fileNam, string copyName , string copyLocation){  //redefined to get args from main and modify the program

    ifstream fin;
    string stringFin;
  //  string fileName1 = fileName;
    fin.open(fileNam.c_str());
    stringFin = (char)fin.get();
    while(!fin.eof()){
            stringFin = stringFin + (char)fin.get(); //getting char and storing in string

    }
    SetCurrentDirectory( "vcs" ); //set another directory
    SetCurrentDirectory( "textFileRecords" );
    SetCurrentDirectory( copyLocation.c_str() );

    ofstream fout;      //outputStream object

    fout.open( copyName.c_str() , ios::ate);       // opening file in update mode

    fout<<stringFin;

    fin.close();
    fout.close();
return 0;
}
};
