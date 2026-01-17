/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>

int main() {
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
    return 0;
}