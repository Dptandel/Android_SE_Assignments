// Patterns: 
/*

 1  2  3  4  5  6  7  8  9 10
11 12 13 14 15 16 17 18 19 20
21 22 23 24 25 26 27 28 29 30
31 32 33 34 35 36 37 38 39 40
41 42 43 44 45 46 47 48 49 50
51 52 53 54 55 56 57 58 59 60
61 62 63 64 65 66 67 68 69 70
71 72 73 74 75 76 77 78 79 80
81 82 83 84 85 86 87 88 89 90
91 92 93 94 95 96 97 98 99 100

*/

#include<stdio.h>
int main(){
    int size;
    printf("Enter size:");
    scanf("%d", &size);
    int arr[size][size];
    int row = 0,col;
    int num = 1;
    int end = size - 1;

    for(row = 0; row <= size / 2; row++, end--) {
    
        // loop for left to right
        for (col = row; col <= end; col++) {
            arr[row][col] = num++;
        }

        // loop for top to bottom
        for (col = row + 1; col <= end; col++) {
            arr[col][end] = num++;
        }

        // loop for right to left
        for (col = end - 1; col >= row; col--) {
            arr[end][col] = num++;
        }

        // loop for left to right
        for (col = end - 1; col > row; col--) {
            arr[col][row] = num++;
        }
    }


    // printing the pattern
    for (row = 0; row < size; row++) {
        for(col = 0; col < size; col++) {
            printf("%3d ",arr[row][col]);
        }
        printf("\n");
    }
}
