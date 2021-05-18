#include<stdio.h>
#include<stdlib.h>
#include<mysql/mysql.h>
#include"dbconfig.h"
int main(int argc, char * argv[]){
    MYSQL * dbcon;
    MYSQL_RES * dbres;
    MYSQL_ROW dbrow;
    dbcon = mysql_init(NULL);
    if(!(mysql_real_connect(dbcon,dbhost,dbuser,dbpasswd,dbname,dbport,dbusocket,dbflag))){
        fprintf(stderr,"\nError: %s [%d]",mysql_error(dbcon),mysql_errno(dbcon));
        exit(1);
    }
    printf("\n\n");

}
