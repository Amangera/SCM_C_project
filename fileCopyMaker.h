#include<iostream>
#include<fstream>
#include<windows.h>//to perform directory change

using namespace std;


class fileCopyMaker{
    public:
int CopyMaker(string fileNam){
    ifstream fin;
    string stringFin;

    fin.open(fileNam.c_str());
    stringFin = (char)fin.get();
    while(!fin.eof()){
            stringFin = stringFin + (char)fin.get(); //getting char and storing in string

    }

    SetCurrentDirectory("vcs"); //set another directory

    ofstream fout;      //outputStream object

    fout.open("new_file.txt", ios::ate);       // opening file in update mode


    fout<<stringFin;

return 0;
}
};
