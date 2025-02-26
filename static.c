#include <stdio.h>

void static_variable(void);
void log_message(char* message);

//after finishing compilation , we open log.txt file to see log messages

int main(void)
{
    static_variable();
    static_variable();
    static_variable();

    log_message("system error");
    log_message("data missing");
    log_message("system warning");

    return 0;
}


void log_message(char* message)
{
    static int total = 0;
    total++;

    FILE *logfile = fopen("log.txt" , "a");
    if(logfile!=NULL)
    {
        fprintf(logfile , "log %d : %s\n", total , message);
        fclose(logfile);
    }
}


void static_variable()
{
    static int calls = 0;
    calls++;

    printf("calls : %d\n" , calls);
}