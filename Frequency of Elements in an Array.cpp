#include <stdio.h>

int main() {
    int arr[100], freq[100];
    int size, i, j, count;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; 
    }
    for(i = 0; i < size; i++) {
        count = 1;
        if(freq[i] != 0) {
            for(j = i + 1; j < size; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0;  
                }
            }
            freq[i] = count;
        }
    }
    printf("\nFrequency of elements:\n");
    for(i = 0; i < size; i++) {
        if(freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
