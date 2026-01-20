/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH  
// 2.2 BẬC 2 
// Phương trình có dạng: ax2 + bx + c = 0 
// Input: Nhập vào từ bàn phím: a, b, c 
// Output: Nghiệm của phương trình 
// Biết rằng: 
// Nếu a == 0, phương trình thành bx + c = 0  
// Ngược lại nếu a != 0 
//  Tính delta 
//  Nếu delta < 0: Phương trình vô nghiệm 
//  Nếu delta == 0: Phương trình có nghiệm kép x = -b/(2*a) 
//  Nếu delta > 0: Phương trình có 2 nghiệm riêng biệt  
// o X1 = (-b + căn(delta))/(2*a) 
// o X2 = (-b – căn(delta))/(2*a)

#include <stdio.h>
#include <math.h> //Thư viện toán học

int main() {
    float a=0, b=0, c=0;
    printf("Nhập số a: ");
    scanf("%f", &a);
    printf("Nhập số b: ");
    scanf("%f", &b);
    printf("Nhập số c: ");
    scanf("%f", &c);
    if (a == 0) {//Phương trình bậc nhất
        float x = -c / b;//Nghiệm phương trình bậc nhất
        printf("Phương trình bậc nhất có nghiệm x = %.2f", x);
    } else if (a != 0) {//Nghiệm phương trình bậc hai
        float delta = b * b - 4 * a * c;//tính delta
        if (delta < 0) {//vô nghiệm
            printf("Phương trình vô nghiệm.");
        } else if (delta == 0) {//nghiệm kép
            float x = -b / (2 * a);
            printf("Phương trình có nghiệm kép x = %.2f", x);
        } else {
            float x1 = (-b + sqrt(delta)) / (2 * a);//sprt là hàm căn bậc hai
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phương trình có hai nghiệm phân biệt: x1 = %.2f, x2 = %.2f", x1, x2);
        }
    }
    return 0;
}
//Hàm lượng giác: sin(x), cos(x), tan(x); asin(x), acos(x), atan(x)
//Hàm mũ và logarit: exp(x), log(x), log10(x)
//Hàm làm tròn: ceil(x), floor(x), round(x)
//Hàm giá trị tuyệt đối: fabs(x)
//Hàm lũy thừa: pow(x, y)
//Căn bậc hai: sqrt(x)