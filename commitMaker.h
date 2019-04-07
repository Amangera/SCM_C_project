#include<iostream>
#include<fstream>
#include<windows.h>

using namespace std;

class CommitMaker{

public:

    void commit(string commitMessage , int commitNumber ){

    ofstream fout;

    SetCurrentDirectory("vcs");

    fout.open("commits.txt" , ios::app);
    fout<<commitNumber<<" "<<commitMessage<<endl;
    fout.close();

    }



    };

