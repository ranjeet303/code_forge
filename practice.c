#include <stdio.h>
#include <math.h>
// int main(){
//     int number;
//     printf("Enter the number\n");
//     // scanf("enter the age ", &age);
//     scanf( "%d",&number);
// if(number%2==0){
//     printf("number is divisible by 2");
// }
// else{
//     printf("number is not divisible by 2");
// }

// return 0;
// }

// int main() {
//     long int original_number, temp, remainder;
//     long int result = 0, n = 0;

//     printf("Enter the number: ");
//     scanf("%ld", &original_number);

//     temp = original_number;

//     // Count digits
//     while (temp != 0) {
//         temp /= 10;
//         n++;
//     }

//     // 🔴 FIX: reset temp
//     temp = original_number;

//     // Calculate Armstrong sum
//     while (temp != 0) {
//         remainder = temp % 10;
//         result += (long int)pow(remainder, n);
//         temp /= 10;
//     }
//     printf("%ld\n",result);

//     if (result == original_number) {
//         printf("%ld is an Armstrong number\n", original_number);
//     } else {
//         printf("%ld is not an Armstrong number\n", original_number);
//     }

//     return 0;
// }

// int main() {
//     long int original_number, temp, remainder;
//     long int result = 0, n = 0;

//     printf("Enter the number: ");
//     scanf("%ld", &original_number);

//     temp = original_number;

//     // Count digits
//     while (temp != 0) {
//         temp /= 10;
//         n++;
//     }

//     temp = original_number;

//     // Calculate Armstrong sum
//     while (temp != 0) {
//         remainder = temp % 10;

//         // Integer power calculation
//         long int power = 1;
//         for (int i = 0; i < n; i++) {
//             power *= remainder;
//         }

//         result += power;
//         temp /= 10;
//     }

//     if (result == original_number) {
//         printf("%ld is an Armstrong number\n", original_number);
//     } else {
//         printf("%ld is not an Armstrong number\n", original_number);
//     }

//     return 0;
// }

// int main()
// {
//     char ch;
//     int n;
//     printf("enter the character : ");
//     scanf("%c", &ch);
//     printf("enter the number : ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("\n");
//         for (int i = 0; i <= n; i++)
//         {
//             printf("%c", ch);
//         }
//     }
// }

// int main()
// {
//     int num;
//     int Isprime;
//     printf("ENTER A NUMBER :");
//     scanf("%d", &num);
//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             Isprime = 0;
//             break;
//         }
//     }
//     if (Isprime == 1)
//     {
//         printf("entered number is a prime number");
//     }
//     else
//     {
//         printf("entered number is not a prime number");
//     }
// }
