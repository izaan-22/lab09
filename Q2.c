#include <stdio.h>

float calculateBonus(int salaries[], int i);

int main(){
    int salaries[5]= {0};

    printf("================\n");
    printf("Bonus Calculator\n");
    printf("================\n");
    
    for (int i = 0; i < 5; i++){
        printf("Enter the salary of employee %d: ",i+1);
        scanf("%d",&salaries[i]);
    }

    printf("\n");
    for (int i = 0; i < 5; i++){
        float total = salaries[i] + calculateBonus(salaries,i);
        printf("Emplyee %d Bonus: %.2f\n",i+1,calculateBonus(salaries,i));
        printf("Total Payout for Employee %d: %.2f\n\n",i+1,total);
    }
    return 0;
}

float calculateBonus(int salaries[], int i){
    if (salaries[i] < 30000){
        return (float) 0.20 * salaries[i];
    }
    else {
        return (float) 0.10 * salaries[i];
    }
}