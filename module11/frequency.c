#include <stdio.h>

int main() {
 int n; 
 scanf("%d", &n);
 int arr[n];  
 for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
        
    };

int count0 = 0, count1 = 0;

int freqarr[2] = {0};

for(int i = 0; i < n; i++) {
    // if(arr[i] == 0) {
    //     freqarr[0]++;
    // } else if(arr[i] == 1) {
    //     freqarr[1]++;
    // }
    freqarr[arr[i]]++;
}
printf("%d %d", freqarr[0], freqarr[1]);

    return 0;
}