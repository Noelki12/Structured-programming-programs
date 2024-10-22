#include <stdio.h>

void getInput(int *bookID, int *dueDate, int *returnDate);
int calculateOverdueDays(int returnDate, int dueDate);
int calculateFineRate(int daysOverdue);
void displayDetails(int bookID, int dueDate, int returnDate, int daysOverdue, int fineRate, int fineAmount);

int main() {
    int bookID, dueDate, returnDate, daysOverdue, fineRate, fineAmount;
    getInput(&bookID, &dueDate, &returnDate);
    daysOverdue = calculateOverdueDays(returnDate, dueDate);
    fineRate = calculateFineRate(daysOverdue);
    fineAmount = daysOverdue * fineRate;
    displayDetails(bookID, dueDate, returnDate, daysOverdue, fineRate, fineAmount);

    return 0;
}
void getInput(int *bookID, int *dueDate, int *returnDate) {
    printf("Enter Book ID: ");
    scanf("%d", bookID);
    printf("Enter Due Date (as an integer): ");
    scanf("%d", dueDate);
    printf("Enter Return Date (as an integer): ");
    scanf("%d", returnDate);
}

int calculateOverdueDays(int returnDate, int dueDate) {
    return returnDate - dueDate;
}

int calculateFineRate(int daysOverdue) {
    if (daysOverdue <= 7) {
        return 20;
    } else if (daysOverdue <= 14) {
        return 50;
    } else {
        return 100;
    }
}
void displayDetails(int bookID, int dueDate, int returnDate, int daysOverdue, int fineRate, int fineAmount) {
    printf("\nBook ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh %d per day\n", fineRate);
    printf("Total Fine Amount: Ksh %d\n", fineAmount);
}
    