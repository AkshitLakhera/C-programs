// Pattern 1
//  #include <stdio.h>
//  int main()
//  {
//      int i;
//      for (i = 0; i <= 5; i++)
//      {
//          for (int j = 0; j <= 5; j++)
//          {
//              printf("*");
//          }
//          printf("\n");
//          }
//      return 0;
//  }

// Pattern 2
// #include <stdio.h>
// int main()
// {
//     int i;
//     for (i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
// }

// Pattern 3
// #include <stdio.h>
// int main()
// {
//     int i;
//     for (i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", i);
//         }
//         printf("\n");
//     }
// }

// Pattern 4
// #include <stdio.h>
// int main()
// {
//     int n;
//     n = 5;
//     int i;
//     for (i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// Pattern 5
// #include <stdio.h>
// int main()
// {
//     int i, j, k;
//     int n = 4;
//     for (i = 1; i <= 4; i++)
//     {
//         // space
//         for (j = 1; j <= n - i; j++)
//         {
//             printf(" ");
//         }
//         // star
//         for (k = 1; k <= i; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// Pattern 6
// input = 12345
// output = 1,2,3 ... on  consecutive lines
// dividend= divisor * quotient + rem;
// #include <stdio.h>
// int main()
// {
//     // check no of digit in input
//     // then divide extract last no
//     // then decrease the value of 10
//     // update input
//     int input, divisor, digit;
//     input = 23452;
//     divisor = 1;
//     while (input / divisor >= 10)
//     {
//         divisor *= 10;
//     }
//     while (divisor > 0)
//     {
//         {
//             digit = input / divisor;
//             printf("%d\n", digit);
//             input = input % divisor;
//             divisor = divisor / 10;
//         }
//         }
//     return 0;
// };