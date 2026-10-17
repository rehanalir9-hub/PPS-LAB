// Program to Check Whether a Given Number is a Palindrome or not1#include<stdio.h>
#include<stdio.h>
int main()
{
                int n,original, remainder, reverse = 0;
                printf ("Enter a number: ");
                scanf("%d",&n);
                original = n;
                while (n != 0)
                {
                remiander  = n%10;
                reverse  = reverse *10 + remainder;
                n = n / 10;
                }
                if (reverse == original)
                printf("%d is a palindrome number.", original);
                else
                printf("%d is not a pallindrome number.", original);
                return 0;
}
