#include <stdio.h>

// Enum são constantes inteiras nomeadas (Exemplo: lista de syscalls do SO)

enum Week_Days {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

typedef enum {
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    Octuber,
    November,
    December,

} Month_of_the_Year;


int main(){
    enum Week_Days todayNow = Tuesday;
    Month_of_the_Year Months;

    switch(todayNow) {
        case Sunday:
            printf("Today is Sunday");
            break; 

        case Monday:
            printf("Today is Monday");
            break;

        case Tuesday:
            printf("Today is Tuesday");
            break;

        case Thursday:
            printf("Today us Thursday");
            break; 

        case Friday:
            printf("Today is Friday");
            break;

        case Saturday:
            printf("Today is Saturday");
            break;

        default:
            printf("Invalid day");
            break;
    }

    return 0;
    
}