int main() {
    int N;    
    printf("Nhap N: ");
    scanf("%d", &N);    
    int A[N + 1];
    for (int k = 1; k <= N; k++) {
        printf("Nhap A[%d]: ", k);
        scanf("%d", &A[k]);
    }    
    int Max = A[1];
    int i = 2;    
    while (i <= N) {
        if (A[i] > Max) {
            Max = A[i];
        }
        i = i + 1;
    }    
    printf("Max = %d\n", Max);
    return 0;
}
