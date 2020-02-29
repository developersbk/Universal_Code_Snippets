This program connects to an ODBC data source called "db97".
It then executes a SQL statement SELECT Model

Code :


#include <windows.h>

#include <sqlext.h>

#include <stdio.h>



int main(void)

{

                HENV                      hEnv = NULL;
// Env Handle from SQLAllocEnv()

                HDBC                      hDBC = NULL;
// Connection handle

                HSTMT                   hStmt = NULL;
// Statement handle

                UCHAR                   szDSN[SQL_MAX_DSN_LENGTH] =
"db97";                // Data Source Name buffer
UCHAR*                  szUID = NULL;
// User ID buffer

                UCHAR*                  szPasswd = NULL;
// Password buffer

                UCHAR                   szModel[128];
// Model buffer

                SDWORD             cbModel;
// Model buffer bytes recieved

                UCHAR                   szSqlStr[] = "Select Model From
Makes Where Make='Vauxhall'";                // SQL string

                RETCODE              retcode;
// Return code



                // Allocate memory for ODBC Environment handle

                SQLAllocEnv (&hEnv);



                // Allocate memory for the connection handle

                SQLAllocConnect (hEnv, &hDBC);



                // Connect to the data source "db97" using userid and
password.

                retcode = SQLConnect (hDBC, szDSN, SQL_NTS, szUID,
SQL_NTS, szPasswd, SQL_NTS);



                if (retcode == SQL_SUCCESS || retcode ==
SQL_SUCCESS_WITH_INFO)

                {

                                // Allocate memory for the statement
handle

                                retcode = SQLAllocStmt (hDBC, &hStmt);



                                // Prepare the SQL statement by 
assigning
it to the statement handle

                                retcode = SQLPrepare (hStmt, szSqlStr,
sizeof (szSqlStr));



                                // Execute the SQL statement handle

                                retcode = SQLExecute (hStmt);



                                // Project only column 1 which is the
models

                                SQLBindCol (hStmt, 1, SQL_C_CHAR, 
szModel,
sizeof(szModel), &cbModel);



                                // Get row of data from the result set
defined above in the statement

                                retcode = SQLFetch (hStmt);



                                while (retcode == SQL_SUCCESS || 
retcode
== SQL_SUCCESS_WITH_INFO)

                                {

                                                printf ("	%s
",
szModel);                                                // Print row
(model)

                                                retcode = SQLFetch
(hStmt);                                 // Fetch next row from result 
set

                                }



                                // Free the allocated statement handle

                                SQLFreeStmt (hStmt, SQL_DROP);



                                // Disconnect from datasource

                                SQLDisconnect (hDBC);

                }



                // Free the allocated connection handle

                SQLFreeConnect (hDBC);



                // Free the allocated ODBC environment handle

                SQLFreeEnv (hEnv);

                return 0;

}
