#include<stdio.h>

int main(){
    int bookID, dueDate, returnDate;
    int daysOverdue, fineRate, fineAmount;

    printf("Enter bookID \t");
    scanf("%d", &bookID);
    printf("\nEnter dueDate \t");
    scanf("%d", &dueDate);
    printf("\nEnter returnDate \t");
    scanf("%d", &returnDate);

    daysOverdue = returnDate - dueDate;

    if (daysOverdue <= 0) {fineRate = 0;
    } else if (daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue <=14) {
        fineRate =50;
    }else {
        fineRate =100;

    }

    fineAmount = daysOverdue * fineRate;

    printf("\n---- Library Fine Details -----\n");
    printf("bookID : %d\n", bookID);
    printf("\ndueDate : %d", dueDate);
    printf("\nreturnDate : %d", returnDate);
    printf("\ndaysOverdue : %d", daysOverdue);
    printf("\nfineRate : ksh. %d per days", fineRate);
    printf("\nfineAmount : ksh. %d, fineAmount, fineAmount");

    return 0;
}

