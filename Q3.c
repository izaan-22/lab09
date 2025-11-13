#include <stdio.h>

void findRoads(int arr[], int n, int target);

int main() {
    int n, target;
    printf("Enter number of roads: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter vehicle count for road %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter target vehicle count: ");
    scanf("%d", &target);

    findRoads(arr, n, target);
    return 0;
}

void findRoads(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Road %d and Road %d have combined traffic equal to target.\n", i + 1, j + 1);
                return;
            }
        }
    }
}
