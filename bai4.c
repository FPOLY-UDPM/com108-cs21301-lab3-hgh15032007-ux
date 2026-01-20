/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [PS48269]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>
void bai1() {
    printf("Bạn đã chọn Bài 1\n");
   
}
void bai2_1() {
    printf("Bạn đã chọn Bài 2_1\n");
   
}
void bai2_2() {
    printf("Bạn đã chọn Bài 2_2\n");
   
}
void bai3() {
    printf("Bạn đã chọn Bài 3\n");
   
}
void bai4() {
    printf("Bạn đã chọn Bài 4\n");
   
}

int main() {
    int choice;
    printf("Menu Chương Trình:\n");
    printf("1. Bai 1\n");
    printf("2. Bai 2_1 hoặc 2_2\n");
    printf("3. Bai 3\n");
    printf("4. Bai 4\n");
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
        case 4:
            bai4();
            break;
        default:
            printf("Lựa chọn không hợp lệ. Vui lòng chọn lại.");
            break;
    }
     return 0;
}