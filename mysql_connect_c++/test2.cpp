#include "jdbc/mysql_driver.h"
#include "jdbc/mysql_error.h"
#include "jdbc/mysql_connection.h"
#include "jdbc/cppconn/statement.h"
#include <iostream>

using namespace std;
using namespace sql;

int main(void)
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


    while(result->next())  
    {  
        int id = result->getInt("ID");  
        string name = result->getString("name");  
        cout << id << " : " << name << endl;  
    }  
    delete state;  
    delete con;  
}
