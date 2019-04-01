#include<iostream>
#include<fstream>
#include<windows.h>

using namespace std;


int main(){

    ifstream fin;
    string stringFin;

    fin.open("ak.txt");
    stringFin = (char)fin.get();
    while(fin){
            stringFin = stringFin + (char)fin.get(); //getting char and storing in string

    }

    SetCurrentDirectory("vcs"); //set another directory

    ofstream fout;      //outputStream object

    fout.open("new_file.txt", ios::ate);       // opening file in update mode


    fout<<stringFin;

}
