#include "sql.h"

SQL::SQL() {}

void SQL::connection()
{

    db.setConnectOptions("SQL_ATTR_ACCESS_MODE=SQL_MODE_READ_ONLY;"
                         "SQL_ATTR_TRACE=SQL_OPT_TRACE_ON" );
    db.setHostName("AS400");
    db.setUserName(ID);
    db.setPassword(MDP);
    db.setDatabaseName("ERK+");
    //qDebug() << db.databaseName();
}

void SQL::setID(QString &id)
{
    ID = id;
}

void SQL::setMDP(QString &mdp)
{
    MDP = mdp;
}



void SQL::test()
{
    connection();

    if(db.open())
    {
        qDebug() << "Connecté";
        //QMessageBox::information(this,"test","connecter à iSeries ODBC");
        QSqlQuery Query_MAC_PAC(db);
        QString Code_Article = "N03743C00";

        if(Query_MAC_PAC.exec("select nom.nome, nom.narl, RT.texd, concat(concat(trim(rt.texd),'  -  '),nom.narl)"
                               " from (SELECT NOMLIG.NOME, NOMLIG.NART, ARTTOT.NARL, nino"
                               " FROM S65AAE3E.EURO4CHAU.ARTTOT ARTTOT, S65AAE3E.EURO4CHAU.NOMLIG NOMLIG"
                               " WHERE ARTTOT.NART = NOMLIG.NART AND ((NOMLIG.NOME='" + Code_Article + "') AND (dfef > 20240612) and (nomlig.qnom/nomlig.qbas>0.0001))) as nom"
                                                " left outer join"
                                                " (SELECT LIGTXT.TYTX, LIGTXT.CLTX, LIGTXT.FATX, LIGTXT.NLTX, LIGTXT.TEXD, LIGTXT.TLGX, LIGTXT.UTIC, LIGTXT.DTC8, LIGTXT.HHC6, LIGTXT.UTIM, LIGTXT.DMA8, LIGTXT.HHM6, LIGTXT.NSEQ, LIGTXT.CLEP, LIGTXT.IDUNIQ"
                                                " FROM S65AAE3E.TEUR4CHAU.LIGTXT LIGTXT"
                                                " WHERE (LIGTXT.TYTX='COM') AND (LIGTXT.FATX='NOM')) as RT"
                                                " on RT.cltx = NOM.nino")){
            qDebug() << "ok";
        }
        else{
            qDebug() << "nok";
        }
        while(Query_MAC_PAC.next() and Query_MAC_PAC.isSelect()){
            qDebug() << Query_MAC_PAC.value(3).toString().trimmed();
        }
        db.close();
    }
    else{
        qDebug() << "Non connecté";
    }
}
