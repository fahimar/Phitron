#include<stdio.h>
#include<math.h>

/*
bubbleSort(array)

  for i <- 1 to indexOfLastUnsortedElement-1

    if leftElement > rightElement

      swap leftElement and rightElement

end bubbleSort*/

void bubble_sort(int n,int* ptr){

    int i,j, temp;
    for (int i=0;i<n;i++){
       for (int j=0;j<n;j++){

          if(*(ptr+j) > *(ptr+i)){
              temp = *(ptr+i);
              *(ptr+i) = *(ptr+j);
              *(ptr+j) = temp;

          }
       }

    }
    for (int i=0;i<n;i++){
        printf("%d ", *(ptr+i));
    }

}


int main()
{
    int n;
    scanf("%d",&n);
    int arr[1001];
    for (int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }

    bubble_sort(n,arr);

    //printf("%0.3f\n",sum/2.0);


    return 0;
}
/* I/O
5
4 3 8 2 6
output: 2 3 4 6 8
*/
