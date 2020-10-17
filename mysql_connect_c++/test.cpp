#include "jdbc/mysql_driver.h"
#include "jdbc/mysql_error.h"
#include "jdbc/mysql_connection.h"
#include "jdbc/cppconn/statement.h"
#include <iostream>
#include "TblUser.h"
#include "TblUserDao.hpp"

using namespace std;

class TblUserDap;
int main(void)
{
    //貌似不能这样???
    TblUserDao tblUserDao;
    tblUserDao.selectUserInfoById(1);

    return 0;
}
