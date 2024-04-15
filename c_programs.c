// CHECK LEAP YEAR
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // leap year if perfectly divisible by 400
    if (year % 400 == 0)
    {
        printf("%d is a leap year.", year);
    }
    // not a leap year if divisible by 100
    // but not divisible by 400
    else if (year % 100 == 0)
    {
        printf("%d is not a leap year.", year);
    }
    // leap year if not divisible by 100
    // but divisible by 4
    else if (year % 4 == 0)
    {
        printf("%d is a leap year.", year);
    }
    // all other years are not leap years
    else
    {
        printf("%d is not a leap year.", year);
    }

    return 0;
}

// Check Whether a Number is Palindrome or Not
#include <stdio.h>
int main()
{
    int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    // reversed integer is stored in reversed variable
    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}

// Print Pyramids and Patterns
// Example 1: Half Pyramid of *
#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// Example 2: Half Pyramid of Numbers
#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// Example 3: Half Pyramid of Alphabets
#include <stdio.h>
int main()
{
    int i, j;
    char input, alphabet = 'A';
    printf("Enter an uppercase character you want to print in the last row: ");
    scanf("%c", &input);
    for (i = 1; i <= (input - 'A' + 1); ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("%c ", alphabet);
        }
        ++alphabet;
        printf("\n");
    }
    return 0;
}

// Example 4: Inverted half pyramid of *
#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = rows; i >= 1; --i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// Example 5: Inverted half pyramid of numbers
#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = rows; i >= 1; --i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// Example 6: Full Pyramid of *
#include <stdio.h>
int main()
{
    int i, space, rows, k = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i, k = 0)
    {
        for (space = 1; space <= rows - i; ++space)
        {
            printf("  ");
        }
        while (k != 2 * i - 1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
    return 0;
}

// Example 7: Full Pyramid of Numbers
#include <stdio.h>
int main()
{
    int i, space, rows, k = 0, count = 0, count1 = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i)
    {
        for (space = 1; space <= rows - i; ++space)
        {
            printf("  ");
            ++count;
        }
        while (k != 2 * i - 1)
        {
            if (count <= rows - 1)
            {
                printf("%d ", i + k);
                ++count;
            }
            else
            {
                ++count1;
                printf("%d ", (i + k - 2 * count1));
            }
            ++k;
        }
        count1 = count = k = 0;
        printf("\n");
    }
    return 0;
}

// Example 8: Inverted full pyramid of *
#include <stdio.h>
int main()
{
    int rows, i, j, space;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = rows; i >= 1; --i)
    {
        for (space = 0; space < rows - i; ++space)
            printf("  ");
        for (j = i; j <= 2 * i - 1; ++j)
            printf("* ");
        for (j = 0; j < i - 1; ++j)
            printf("* ");
        printf("\n");
    }
    return 0;
}

// Example 9: Pascal's Triangle
#include <stdio.h>
int main()
{
    int rows, coef = 1, space, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++)
    {
        for (space = 1; space <= rows - i; space++)
            printf("  ");
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
        }
        printf("\n");
    }
    return 0;
}

// Example 10: Floyd's Triangle.
#include <stdio.h>
int main()
{
    int rows, i, j, number = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("%d ", number);
            ++number;
        }
        printf("\n");
    }
    return 0;
}

// Remove all Characters in a String Except Alphabets
#include <stdio.h>
int main()
{
    char line[150];

    printf("Enter a string: ");
    fgets(line, sizeof(line), stdin); // take input

    for (int i = 0, j; line[i] != '\0'; ++i)
    {

        // enter the loop if the character is not an alphabet
        // and not the null character
        while (!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == '\0'))
        {
            for (j = i; line[j] != '\0'; ++j)
            {

                // if jth element of line is not an alphabet,
                // assign the value of (j+1)th element to the jth element
                line[j] = line[j + 1];
            }
            line[j] = '\0';
        }
    }
    printf("Output String: ");
    puts(line);
    return 0;
}

// Count the Number of Vowels, Consonants and so on
#include <stdio.h>
int main()
{

    char line[150];
    int vowels, consonant, digit, space;

    // initialize all variables to 0
    vowels = consonant = digit = space = 0;

    // get full line of string input
    printf("Enter a line of string: ");
    fgets(line, sizeof(line), stdin);

    // loop through each character of the string
    for (int i = 0; line[i] != '\0'; ++i)
    {

        // convert character to lowercase
        line[i] = tolower(line[i]);

        // check if the character is a vowel
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u')
        {

            // increment value of vowels by 1
            ++vowels;
        }

        // if it is not a vowel and if it is an alphabet, it is a consonant
        else if ((line[i] >= 'a' && line[i] <= 'z'))
        {
            ++consonant;
        }

        // check if the character is a digit
        else if (line[i] >= '0' && line[i] <= '9')
        {
            ++digit;
        }

        // check if the character is an empty space
        else if (line[i] == ' ')
        {
            ++space;
        }
    }

    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    printf("\nDigits: %d", digit);
    printf("\nWhite spaces: %d", space);

    return 0;
}

// Multiply two Matrices by Passing Matrix to a Function
#include <stdio.h>

void enterData(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int multResult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
void display(int mult[][10], int rowFirst, int columnSecond);

int main()
{
    int firstMatrix[10][10], secondMatrix[10][10], mult[10][10], rowFirst, columnFirst, rowSecond, columnSecond, i, j, k;

    printf("Enter rows and column for first matrix: ");
    scanf("%d %d", &rowFirst, &columnFirst);

    printf("Enter rows and column for second matrix: ");
    scanf("%d %d", &rowSecond, &columnSecond);

    // If colum of first matrix in not equal to row of second matrix, asking user to enter the size of matrix again.
    while (columnFirst != rowSecond)
    {
        printf("Error! column of first matrix not equal to row of second.\n");
        printf("Enter rows and column for first matrix: ");
        scanf("%d%d", &rowFirst, &columnFirst);
        printf("Enter rows and column for second matrix: ");
        scanf("%d%d", &rowSecond, &columnSecond);
    }

    // Function to take matrices data
    enterData(firstMatrix, secondMatrix, rowFirst, columnFirst, rowSecond, columnSecond);

    // Function to multiply two matrices.
    multiplyMatrices(firstMatrix, secondMatrix, mult, rowFirst, columnFirst, rowSecond, columnSecond);

    // Function to display resultant matrix after multiplication.
    display(mult, rowFirst, columnSecond);

    return 0;
}

void enterData(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
{
    int i, j;
    printf("\nEnter elements of matrix 1:\n");
    for (i = 0; i < rowFirst; ++i)
    {
        for (j = 0; j < columnFirst; ++j)
        {
            printf("Enter elements a%d%d: ", i + 1, j + 1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("\nEnter elements of matrix 2:\n");
    for (i = 0; i < rowSecond; ++i)
    {
        for (j = 0; j < columnSecond; ++j)
        {
            printf("Enter elements b%d%d: ", i + 1, j + 1);
            scanf("%d", &secondMatrix[i][j]);
        }
    }
}

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int mult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
{
    int i, j, k;

    // Initializing elements of matrix mult to 0.
    for (i = 0; i < rowFirst; ++i)
    {
        for (j = 0; j < columnSecond; ++j)
        {
            mult[i][j] = 0;
        }
    }

    // Multiplying matrix firstMatrix and secondMatrix and storing in array mult.
    for (i = 0; i < rowFirst; ++i)
    {
        for (j = 0; j < columnSecond; ++j)
        {
            for (k = 0; k < columnFirst; ++k)
            {
                mult[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void display(int mult[][10], int rowFirst, int columnSecond)
{
    int i, j;
    printf("\nOutput Matrix:\n");
    for (i = 0; i < rowFirst; ++i)
    {
        for (j = 0; j < columnSecond; ++j)
        {
            printf("%d  ", mult[i][j]);
            if (j == columnSecond - 1)
                printf("\n\n");
        }
    }
}

// Find Transpose of a Matrix
#include <stdio.h>
int main()
{
    int a[10][10], transpose[10][10], r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    // asssigning elements to the matrix
    printf("\nEnter matrix elements:\n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    // printing the matrix a[][]
    printf("\nEntered matrix: \n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            printf("%d  ", a[i][j]);
            if (j == c - 1)
                printf("\n");
        }

    // computing the transpose
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            transpose[j][i] = a[i][j];
        }

    // printing the transpose
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < c; ++i)
        for (int j = 0; j < r; ++j)
        {
            printf("%d  ", transpose[i][j]);
            if (j == r - 1)
                printf("\n");
        }
    return 0;
}

// Find Largest Element in an Array
#include <stdio.h>
int main()
{
    int n;
    double arr[100];
    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        printf("Enter number%d: ", i + 1);
        scanf("%lf", &arr[i]);
    }

    // storing the largest number to arr[0]
    for (int i = 1; i < n; ++i)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }

    printf("Largest element = %.2lf", arr[0]);

    return 0;
}

// calculate the power using recursion
#include <stdio.h>
int power(int n1, int n2);
int main()
{
    int base, a, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d^%d = %d", base, a, result);
    return 0;
}

int power(int base, int a)
{
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}

// Check Prime or Armstrong Number Using User-defined Function
#include <math.h>
#include <stdio.h>

int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);

int main()
{
    int n, flag;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // check prime number
    flag = checkPrimeNumber(n);
    if (flag == 1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    // check Armstrong number
    flag = checkArmstrongNumber(n);
    if (flag == 1)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);
    return 0;
}

// function to check prime number
int checkPrimeNumber(int n)
{
    int i, flag = 1, squareRoot;

    // computing the square root
    squareRoot = sqrt(n);
    for (i = 2; i <= squareRoot; ++i)
    {
        // condition for non-prime number
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

// function to check Armstrong number
int checkArmstrongNumber(int num)
{
    int originalNum, remainder, n = 0, flag;
    double result = 0.0;

    // store the number of digits of num in n
    for (originalNum = num; originalNum != 0; ++n)
    {
        originalNum /= 10;
    }

    for (originalNum = num; originalNum != 0; originalNum /= 10)
    {
        remainder = originalNum % 10;

        // store the sum of the power of individual digits in result
        result += pow(remainder, n);
    }

    // condition for Armstrong number
    if (round(result) == num)
        flag = 1;
    else
        flag = 0;
    return flag;
}
