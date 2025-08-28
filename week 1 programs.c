#include <stdio.h>

int main() {
    int number;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check divisibility
    if (number % 5 == 0 && number % 11 == 0) {
        printf("The number %d is divisible by both 5 and 11.\n", number);
    } else {
        printf("The number %d is NOT divisible by both 5 and 11.\n", number);
    }

    return 0;
}

#include <stdio.h>

int main() {
    char ch;

    // Input from user
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    // Check if the character is an alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // Convert to lowercase for simplicity
        char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

        // Check for vowels
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("'%c' is a vowel.\n", ch);
        } else {
            printf("'%c' is a consonant.\n", ch);
        }
    } else {
        printf("'%c' is not a valid alphabet.\n", ch);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int month;

    // Input from user
    printf("Enter a number (1-12): ");
    scanf("%d", &month);

    // Check and print corresponding month
    switch(month) {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 12.\n");
    }

    return 0;
}

#include <stdio.h>

// Function to return number of days in a given month and year
int getDaysInMonth(int month, int year) {
    if (month == 2) {
        // Check for leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return 29;
        else
            return 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

int main() {
    int d1, m1, y1; // birth date
    int d2, m2, y2; // current date
    int d, m, y;

    // Input birth date
    printf("Enter birth date (dd mm yyyy): ");
    scanf("%d %d %d", &d1, &m1, &y1);

    // Input current date
    printf("Enter current date (dd mm yyyy): ");
    scanf("%d %d %d", &d2, &m2, &y2);

    // Borrow days if needed
    if (d2 < d1) {
        // Borrow days from previous month
        m2--;

        if (m2 == 0) {
            m2 = 12;
            y2--;
        }

        d2 += getDaysInMonth(m2, y2);
    }

    // Borrow months if needed
    if (m2 < m1) {
        m2 += 12;
        y2--;
    }

    // Final differences
    d = d2 - d1;
    m = m2 - m1;
    y = y2 - y1;

    printf("Age: %d years, %d months, %d days\n", y, m, d);

    return 0;
}