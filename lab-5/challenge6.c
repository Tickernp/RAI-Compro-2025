#include <stdio.h>

int main() {
    int n, occ;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int counted[n];
    for ( int i = 0; i < n; i++)counted[i]=0;
    
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOutput:\n");
    
    for (int i = 0; i < n; i++) {
        if (counted[i] == 1) continue; 
        int count = 1;
        for (occ = i + 1; occ < n; occ++) {
            if (arr[occ] == arr[i]) {
                count++;
                counted[occ] = 1; 
            }
        }
        printf("Element %d occurs %d times\n", arr[i], count);
    }

    return 0;
}
