#ifndef _H_TblUser_
#define _H_TblUser_

#include <iostream>
#include <string>

using namespace std;


class TblUser{
private:
int id;
string name;

public:
int getId(){
    cout << "getId()" << endl;
    return this->id;
};
string getName(){
   cout << "getName()" << endl;
   return this->name;
};

void setId(int id)
{
    this->id = id;
}

void setName(string name)
{
   this->name = name;
}

TblUser(){
    cout << "TblUser()" << endl;
}

TblUser(int id, string name){
    cout << "TblUser(int id, string name)" << endl;
    this->id = id;
    this->name = name;
}

TblUser(TblUser &tblUser)
{
    cout << "TblUser(TblUser&)" << endl;
    this->id = tblUser.id;
    this->name = tblUser.name;
}

~TblUser(){
    cout << "~TblUser()" << endl;
}
};

#endif
