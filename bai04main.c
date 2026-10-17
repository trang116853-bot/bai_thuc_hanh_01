int main() {
    int a, b;    
    printf("Nhap a, b: ");
    scanf("%d %d", &a, &b);    
    int x = a;
    int y = b;
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }    
    int Bcnn = (x * y) / a;    
    printf("Bcnn = %d\n", Bcnn);    
    return 0;
}
