/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>
#include <math.h>

int main() {
    int So_dien;
    float a, b, c, d, e, f;

    printf("Nhập số điện tiêu thụ: ");
    scanf("%d", &So_dien);

    // Tính toán các mốc tiền cố định (Lũy kế từng bậc)
    a = So_dien * 1.678; 
    b = (50 * 1.678) + (So_dien - 50) * 1.734;
    c = (50 * 1.678) + (50 * 1.734) + (So_dien - 100) * 2.014;
    d = (50 * 1.678) + (50 * 1.734) + (100 * 2.014) + (So_dien - 200) * 2.536;
    e = (50 * 1.678) + (50 * 1.734) + (100 * 2.014) + (100 * 2.536) + (So_dien - 300) * 2.834;
    f = (50 * 1.678) + (50 * 1.734) + (100 * 2.014) + (100 * 2.536) + (100 * 2.834) + (So_dien - 400) * 2.927;

    if (So_dien < 0) {
        printf("Số điện không hợp lệ!\n");
    } else if (So_dien <= 50) {
        printf("Số tiền điện cần đóng là: %.3f đồng", a);
    } else if (So_dien <= 100) {
        printf("Số tiền điện cần đóng là: %.3f đồng", b);
    } else if (So_dien <= 200) {
        printf("Số tiền điện cần đóng là: %.3f đồng", c);
    } else if (So_dien <= 300) {
        printf("Số tiền điện cần đóng là: %.3f đồng", d);
    } else if (So_dien <= 400) {
        printf("Số tiền điện cần đóng là: %.3f đồng", e);
    } else {
        printf("Số tiền điện cần đóng là: %.3f đồng", f);
    }

    return 0;
}