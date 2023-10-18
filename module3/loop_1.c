#include <stdio.h>
// int main()
// {
//     int i;
//     for(i=1;i<=10;i=i+2)
//     {
//         printf("Hello\n");
//     }
//     return 0;
// }

// int main() {
//     int N;
//     scanf("%d", &N);
//     if (N >= 1 && N <= 1000) {
//         for (int i = 0; i < N; i++) {
//             printf("I Love Practice\n");
//         }
//     } else {
//         printf("Invalid input. N should be between 1 and 1000");
//     }

//     return 0;
// }

// int main() {
//     int N;
//     scanf("%d", &N);
//     if (N >= 1 && N <= 1000) {
//         for (int i = 1; i <= N; i++) {
//             if (i % 5 == 0) {
//                 printf("%d Yes\n", i);
//             } else {
//                 printf("%d No\n", i);
//             }
//         }
//     } else {
//         printf("N should be between 1 and 1000");
//     }

//     return 0;
// }

// int main() {
//     printf("Hello, world! I am learning C programming language. ^_^\n");
//     printf("Programming is fun and challenging. /\\/\\/\\ \n");
//     printf("I want to give my 100%% dedication to learn!\t\t I will succeed one day.\n");

//     return 0;
// }

// int main()
// {

//     long long A, B;
//     scanf("%lld %lld",&A,&B);
//     long long mult = A * B;
//     printf("%lld\n",mult);
//     return 0;
// }

int main() {

    int N;
    scanf("%d", &N);
    if (N >= 0 && N <= 1000000000)
    {
        if (N % 3 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
   
    return 0;
}



// int main() {
//     int N;
//     scanf("%d", &N);
//     if (N >= 1000) {
//         printf("I will buy Punjabi\n");
//         N -= 1000;
//         if (N >= 500) {
//             printf("I will buy new shoes\n");
//             N -= 500; 
//         }
//     } else {
//         printf("Bad luck!\n");
//     }
//     if (N >= 500) {
//         printf("Alisa will buy new shoes\n");
//     }

//     return 0;
// }