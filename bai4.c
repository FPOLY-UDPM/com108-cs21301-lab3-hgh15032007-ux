/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [PS48269]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>
#include <math.h>
void bai1() {;
printf ("Bài 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC\n");
    float diem;
    printf("Nhập điểm sinh viên (0 - 10): ");
    scanf("%f", &diem);//Nhập điểm
    if (diem < 0 || diem > 10) {
        printf("Điểm không hợp lệ!\nNhập lại điểm: ");
        scanf("%f", &diem);//Nhập lại điểm nếu điểm không hợp lệ
         if (diem >= 9)
         printf("Học lực: Xuất sắc");
         else if (diem >= 8)
         printf("Học lực: Giỏi");
         else if (diem >= 6.5)
         printf("Học lực: Khá");
         else if (diem >= 5)
         printf("Học lực: Trung bình");
         else if (diem >= 3.5)
         printf("Học lực: Yếu");
         else
         printf("Học lực: Kém");
    }
}
void bai2_1(){
    printf ("Bài 2_1:Chương trình giải phương trình bậc 1\n");
    float a=0, b=0;
    printf("Nhập số a: ");
    scanf("%f", &a);
    printf("Nhập số b: ");
    scanf("%f", &b);
    if (a == 0) {
        if (b == 0) { // a == 0 và b == 0
            printf("Phương trình có vô số nghiệm.");
        } else { // a == 0 và b != 0
            printf("Phương trình vô nghiệm.");
        }
    } else { // a != 0
        float x = -b / a;
        printf("Nghiệm của phương trình là x = %.2f", x);
    }

}
void bai2_2() {
printf ("Bài 2_2:Chương trình giải phương trình bậc 2\n");
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
            float x1 = (-b + sqrt(delta)) / (2 * a);//sqrt là hàm căn bậc hai
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phương trình có hai nghiệm phân biệt: x1 = %.2f, x2 = %.2f", x1, x2);
        }
    }

}
void bai3() {
    printf ("Bài 3: Chương trình tính tiền điện.\n");
    float So_dien=0;
    printf("Nhập số điện tiêu thụ: ");
    scanf("%f", &So_dien);
    if (So_dien < 0) {
        printf("Số điện không hợp lệ!\nNhập lại số điện: ");
        scanf("%f kWh", &So_dien);
    }else if (So_dien <= 50) {
        printf("Số tiền cần phải đóng là: %.2f VNĐ", So_dien * 1.678);
    } else if (So_dien <= 100) {
        printf("Số tiền cần phải đóng là: %.2f VNĐ", So_dien * 1.734);
    } else if (So_dien <= 200) {
        printf("Số tiền cần phải đóng là: %.2f VNĐ", So_dien * 2.014);
    } else if (So_dien <= 300) {
        printf("Số tiền cần phải đóng là: %.2f VNĐ", So_dien * 2.536);
    } else if (So_dien <= 400) {
        printf("Số tiền cần phải đóng là: %.2f VNĐ", So_dien * 2.834);
    } else if (So_dien > 400) {
        printf("Số tiền cần phải đóng là: %.2f VNĐ", So_dien * 2.927);
    }

}


int main() {
    int choice;
    printf("Menu Chương Trình:\n");
    printf("1. Bai 1\n");
    printf("2. Bai 2_1 hoặc 2_2\n");
    printf("3. Bai 3\n");
    printf("Mời bạn chọn bài (1-4): ");
    scanf("%d", &choice);   
    switch (choice) {
        case 1:
            bai1();
            break;
        case 2:{
        int subChoice;
        printf("Nhập bài (1 = bai2_1 hoặc 2 = bai2_2): ");
        scanf("%d", &subChoice);
        switch (subChoice) {
            case 1:
                bai2_1();
                break;
            case 2:
                bai2_2();
                break;
            default:
                printf("Bài không hợp lệ");     
        }
            break;
    }
        case 3:
            bai3();
            break;
        default:
            printf("Lựa chọn không hợp lệ. Vui lòng chọn lại.");
            break;
    }


     return 0;
}