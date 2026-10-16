int main() {
    int N;
    printf("Nhap N: ");
    scanf("%d", &N);
    if (N < 2) {
        printf("Khong nguyen to\n");
    } else {
        int i = 2;
        int ktra = 1;       
        while (i <= sqrt(N)) {
            if (N % i == 0) {
                printf("Khong nguyen to\n");
                ktra = 0;
                break;
            }
            i++;
        }        
        if (ktra == 1) {
            printf("Co nguyen to\n");
        }
    }    
    return 0;
}
