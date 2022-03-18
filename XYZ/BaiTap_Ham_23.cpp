#include<iostream>
using namespace std;
void Nhap_Mang(int N, int mang[]) {
    for (int i=0; i<N; i++) {   
        cin >> mang[i];
    }
}

void Xuat_Mang(int N, int mangA[]) {
    cout << "Mang da nhap la: ";
    for (int i=0; i<N; i++) {
        cout << mangA[i] << " ";
    }
}



int Max_Min(int N, int mang[], int cmd) {
    int min = mang[0];
    int max = mang[0];
    
    for (int i=1; i<N; i++) {
        if (max < mang[i]) {
            max = mang[i];
        }
        if (min > mang[i]) {
            min = mang[i];
        }
    }

    if (cmd == 1) {
        return max;
    } else {
        return min;
    }
}

int main() {
    int N;
    cout << "Nhap so N = ";
    cin >> N;
    int mang[N];
    Nhap_Mang(N, mang);
    Xuat_Mang(N, mang);
    /*int Max = max(N, mang);
    cout << "\nVay so lon Nhat la: " << Max << endl;

    int Min = min(N, mang);
    cout << "Vay so nho nhat la: " << Min << endl; */
    
    int max = Max_Min(N, mang, 1);
    int min = Max_Min(N, mang, 0);
    cout << "\nVay so lon nhat la " << max << " va so nho nhat la " << min << endl;
    return 0;
}
