#include <iostream>
#include "TblUser.h"
#include "jdbc/mysql_driver.h"
#include "jdbc/mysql_error.h"
#include "jdbc/mysql_connection.h"
#include "jdbc/cppconn/statement.h"


using namespace std;
using namespace sql;

//前置声明
class TblUser;

class TblUserDao{
private:
    TblUser tblUser;

public:
    TblUser selectUserInfoById(int id);
};


TblUser TblUserDao::selectUserInfoById(int id)
{

    mysql::MySQL_Driver *driver;
    Connection *con;
    Statement *state;
    ResultSet *result;

    driver = sql::mysql::get_mysql_driver_instance();

   con = driver->connect("tcp://localhost:3306", "root", "lemon2012");
    state = con->createStatement();
    state->execute("use test");

  result = state->executeQuery("select * from tbl_cdhd_inf where id = 1");

    int ret_id;
    string name;
    while(result->next())
    {
        ret_id = result->getInt("ID");
        name = result->getString("name");
        cout << ret_id << " : " << name << endl;
    }
    delete state;
    delete con;

    this->tblUser.setId(ret_id);
    this->tblUser.setName(name);

    return this->tblUser;
}
