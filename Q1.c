#include <stdio.h>

void InputData(int arr[], int n);
float AveragePatients(int arr[], int n);
int busiestDay(int arr[], int n);
int slowestDay(int arr[], int n);

int main(){
    int n = 7;
    int arr[7];

    printf("==========================\n");
    printf("Hospital Management System\n");
    printf("==========================\n\n");
    
    InputData(arr,n);

    float avg = AveragePatients(arr,n);
    int busy = busiestDay(arr,n);
    int slow = slowestDay(arr,n);

    printf("\nAverage Patients per day : %.2f\n",avg);
    printf("Busiest Day : %d (%d patients)\n",busy+1,arr[busy]);
    printf("Slowest Day : %d (%d patients)\n",slow+1,arr[slow]);

    return 0;
}

void InputData(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("Enter number of patients for Day %d : ",i+1);
        scanf("%d",&arr[i]);
    }
}

float AveragePatients(int arr[], int n){
    int total = 0;

    for (int i = 0; i < n; i++){
        total += arr[i];
    }
    return (float) total / n;
}

int busiestDay(int arr[], int n){
    int temp1 = 0;
    int max = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
            temp1 = i;
        }
    }
    return temp1;
}

int slowestDay(int arr[], int n){
    int temp2 = 0;
    int min = 999;
    for (int i = 0; i < n; i++){
        if (arr[i] < min){
            min = arr[i];
            temp2 = i;
        }
    }
    return temp2;
}