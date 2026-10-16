int main() {
    float a, b, c;    
    printf("Nhap a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);    
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Vo so nghiem\n");
            } else {
                printf("Vo nghiem\n");
            }
        } else {
            float x = -c / b;
            printf("Nghiem x = %.2f\n", x);
        }
    } else {
        float delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf("Vo nghiem\n");
        } else if (delta == 0) {
            float x1 = -b / (2 * a);
            float x2 = x1;
            printf("x1 = x2 = %.2f\n", x1);
        } else {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }
    return 0;
}
