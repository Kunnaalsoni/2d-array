#include <stdio.h>
#include <stdlib.h>


int main(){
    //declaring matrix variables
    int m;
    int n;
    //declaring loop variables
    int r,c;

    //reading data from input.dat
    FILE *fptr;
    fptr = (fopen("input.dat", "r"));
    fscanf (fptr, "%i %i", &m, &n);
    fclose(fptr);
    // initialize of array
    int A[m][n];

    //reading values from user
    for (r = 0; r < m; r++){
       for(c = 0; c < n; c++){
             printf("\nENTER VALUE AT marks[%d][%d] : ", r, c);
             scanf("%d", &A[r][c]);
       }
    }

    //storing output on the output.dat
    FILE *fout;
    fout = fopen("output.dat", "w");
    freopen("output.dat","w",stdout);

    printf("\n2D Array Values are: \n\n");

    for (r = 0; r < m; r++){
       for(c = 0; c < n; c++){
             printf("A[%d][%d] = %d \n", r, c, A[r][c]);
       }
    }
    printf("The array has %d places", m*n);
    fclose(fout);
    return 0;
}
