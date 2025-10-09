#include <bits/stdc++.h>
#include "../header/taxiPrice.h"

using namespace std;

int dn(int dis) {
    if (dis <= 1) return 10;
    else if(dis <= 10) return 10 + (dis-1)*8;
    else return 10 + 9*8 + (dis-10)*5;
}

int df(int dis) {
    if (dis <= 10) return dis * 12;
    else if(dis <= 32) return 10*12 + (dis-10)*10;
    else return 10*12 + 22*10 + (dis-32)*8;
}

int airPortPrice(int type, int direction) {
    // int type, direction;
    // cout << "Nhap loai xe:" << endl;
    // cout << "1: 4 cho" << endl;
    // cout << "2: 5 cho" << endl;
    // cout << "3: 7 cho" << endl;
    // cout << "4: 16 cho" << endl;
    // cin >> type;
    
    if(type < 1 || type > 4) {
        return -1;
    }
    
    // cout << "Nhap huong di:" << endl;
    // cout << "1: HN-NB" << endl;
    // cout << "2: NB-HN" << endl;
    // cin >> direction;
    
    if(direction != 1 && direction != 2) {
        return -1;
    }
    
    int prices[4][2] = {
        {200, 250},  // 4 chỗ
        {210, 260},  // 5 chỗ
        {250, 300},  // 7 chỗ
        {400, 500}   // 16 chỗ
    };
    
    return prices[type-1][direction-1];
}

int dayPrice(int dd, int day) {
    if (dd <= 100) return 800*day;
    else return 800*day + (dd-100*day)*5;
}

int weekPrice(int dw, int week) {
    if (dw <= 700) return 4500*week;
    else return 4500*week + (dw-700*week)*5;
}

int longTimePrice() {
    int type;
    cout << "Nhap loai dich vu thue:" << endl;
    cout << "1: Thue theo ngay" << endl;
    cout << "2: Thue theo tuan" << endl;
    cin >> type;
    
    while(type != 1 && type != 2) {
        cout << "Khong hop le, xin hay nhap lai:" << endl;
        cin >> type;
    }
    
    if (type == 1) {
        int dd, day;
        cout << "Nhap so km da di:" << endl;
        cin >> dd;
        cout << "Nhap so ngay thue:" << endl;
        cin >> day;
        while (dd < 0) {
            cout << "Khong hop le, xin hay nhap lai:" << endl;
            cin >> dd;
        }
        while (day < 0) {
            cout << "Khong hop le, xin hay nhap lai:" << endl;
            cin >> day;
        }
        return dayPrice(dd, day);
        
    } else {
        int dw, week;
        cout << "Nhap so km da di:" << endl;
        cin >> dw;
        cout << "Nhap so tuan thue:" << endl;
        cin >> week;
        while (dw < 0) {
            cout << "Khong hop le, xin hay nhap lai:" << endl;
            cin >> dw;
        }
        while (week < 0) {
            cout << "Khong hop le, xin hay nhap lai:" << endl;
            cin >> week;
        }
        return weekPrice(dw, week);
    }
}

int oneWayPrice() {
    int type; 
    int dis;
    cout << "Nhap loai dich vu:" << endl;
    cout << "1: Di gan (noi thanh)" << endl;
    cout << "2: Di tinh" << endl;
    cin >> type;

    while(type != 1 && type != 2) {
        cout << "Khong hop le, xin hay nhap lai:" << endl;
        cin >> type;
    }
    
    cout << "Nhap so km da di:" << endl;
    cin >> dis;
    while (dis < 0) {
        cout << "Khong hop le, xin hay nhap lai:" << endl;
        cin >> dis;
    }

    if (type == 1) {
        return dn(dis);
    } else {
        return df(dis);
    }
}

bool minPrice(char serv, int res) {
    if (serv == 'a' && res < 15) {
        return false;
    } else if (serv == 'b' && res < 100) {
        return false;
    }
    return true;
}


int price(char serv) {
    if (serv == 'a') {
        return oneWayPrice();
    } 
    // else if (serv == 'b') {
    //     return airPortPrice();
    // } 
    else if (serv == 'c') {
        return longTimePrice();
    }
    return -1;
}

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     char serv;
//     cout << "Nhap dich vu:" << endl;
//     cout << "a: Dich vu 1 luot" << endl;
//     cout << "b: Di san bay" << endl;
//     cout << "c: Thue theo thoi gian" << endl;
//     cin >> serv;
    
//     while(serv != 'a' && serv != 'b' && serv != 'c') {
//         cout << "Khong hop le, xin hay nhap lai:" << endl;
//         cin >> serv;
//     }
    
//     int res = price(serv);
    
//     // Kiểm tra điều kiện tối thiểu
//     if (!minPrice(serv, res)) {
//         cout << "Khong du dieu kien toi thieu!!!";
//         return 0;
//     }
    
    
    
//     int time;
//     cout << "Nhap gio bat dau di chuyen (0-23):" << endl;
//     cin >> time;
//     while(time < 0 || time > 23) {
//         cout << "Khong hop le, xin hay nhap lai:" << endl;
//         cin >> time;
//     }
    
//     if (time >= 23 || time <= 5) {
//         res = res + res * 20 / 100;
//     }
    
//     cout << "Tong chi phi: " << res << "k VND" << endl;
    
//     return 0;
// }