/*_____create file c++ program______*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
cout<<"Enter the name of text file to be created or edit :";
string fileName;
getline(cin , fileName);   //getting name of text file from user

string commandToOpenNotepad = "notepad \"" + fileName + "\"";  //storing command to open notepad in a single string.
system(commandToOpenNotepad.c_str());  //system function used to open notepad using windows command prompt.
cout<<"file saved successfully";

return 0;
}
