#ifndef SQL_H
#define SQL_H

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>

class SQL
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC","odbc");

    QString
        ID = "",
        MDP = "";

    void connection();

public:
    SQL();

    void test();

    // setter
    void setID(QString& id);
    void setMDP(QString& mdp);

};

#endif // SQL_H
