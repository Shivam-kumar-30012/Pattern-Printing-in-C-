#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int arr[2] = { 0,1 }; //helper
	int choice;
	bool done = true;
	cout << "---------------------------<Welcome to PRINT ANY PATTERN PLATFORM>----------------------------" << endl;
	while (done) {
		int stars = 0; //heper
		int space = 0; //helper 
		char ch = '-'; // helper
		int a = 0;  // helper 
		cout << "Select Pattern To Print:" << endl;
		cout << "1.Grid of stars." << endl;
		cout << "2.Right-Aligned Incremental Star Pattern." << endl;
		cout << "3.Right-Aligned Number Triangle." << endl;
		cout << "4.Repeating Number Triangle." << endl;
		cout << "5.Right-Aligned Descending Star Triangle" << endl;
		cout << "6.Right-Aligned Descending Number Triangle." << endl;
		cout << "7.Ascending Pyramid." << endl;
		cout << "8.Descending Pyramid." << endl;
		cout << "9.Diamond" << endl;
		cout << "10.half diamond star pattern" << endl;
		cout << "11.Alternating 1's and 0's Right-Aligned Incremental Star Pattern." << endl;
		cout << "12.Growing Digit Palindrome Pattern." << endl;
		cout << "13.Floyd's Triangle." << endl;
		cout << "14.Right-aligned incremental alphabetical pyramid." << endl;
		cout << "15.Right-aligned descending alphabetical pyramid." << endl;
		cout << "16.Repeeating alphabetical pyramid." << endl;
		cout << "17.Alphabatical Pyramid" << endl;
		cout << "18.Reverse alphabetical triangle(E)" << endl;
		cout << "19.Internal Square of Triangular stars" << endl;
		cout << "20. Two Merged Right Pyramid" << endl;
		cout << "21. Boundries of rectangle" << endl;
		cout << "22. Special Pattern: " << endl;
		cout << "Press 0 to exit." << endl;
		cin >> choice;
		switch (choice) {
			int m, n;
		case 0:
			done = false;
			break;
		case 1:
			cout << "Enter number of rows." << endl;
			cin >> m;
			cout << "Enter number of colomns." << endl;
			cin >> n;
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					cout << "*";
				}cout << endl;
			}cout << endl;
			break;
		case 2:
			cout << "Enter number of rows." << endl;
			cin >> m;
			cout << "Enter number of colomns." << endl;
			cin >> n;
			for (int i = 1; i <= m; i++) {
				for (int j = 1; j <= i; j++) {
					cout << "*";
				}cout << endl;
			}cout << endl;
			break;
		case 3:
			cout << "Enter number of rows." << endl;
			cin >> m;
			cout << "Enter number of colomns." << endl;
			cin >> n;
			for (int i = 1; i <= m; i++) {
				for (int j = 1; j <= i; j++) {
					cout << j;
				}cout << endl;
			}cout << endl;
			break;
		case 4:
			cout << "Enter number of rows." << endl;
			cin >> m;
			cout << "Enter number of colomns." << endl;
			cin >> n;
			for (int i = 1; i <= m; i++) {
				for (int j = 1; j <= i; j++) {
					cout << i;
				}cout << endl;
			}cout << endl;
			break;
		case 5:
			cout << "Enter number of rows." << endl;
			cin >> m;
			cout << "Enter number of colomns." << endl;
			cin >> n;
			for (int i = 0; i < m; i++) {
				for (int j = n - i; j > 0; j--) {
					cout << "*";
				}cout << endl;
			}cout << endl;
			break;
		case 6:
			cout << "Enter number of rows." << endl;
			cin >> m;
			cout << "Enter number of colomns." << endl;
			cin >> n;
			for (int i = 0; i < m; i++) {
				for (int j = 1; j <= n - i; j++) {
					cout << j;
				}cout << endl;
			}cout << endl;
			break;
		case 7:
			cout << "Enter number of rows." << endl;
			cin >> m;
			for (int i = 1; i <= m; i++) {
				for (int j = 1; j <= m - i; j++) {
					cout << " ";
				}
				for (int k = 1; k <= 2 * i - 1; k++) {
					cout << "*";
				}
				cout << endl;
			}cout << endl;
			break;
		case 8:
			cout << "Enter number of rows." << endl;
			cin >> m;
			/*for (int i = m; i >0; i--) {
				for (int k = 1; k <= m-i; k++) {
					cout << " ";
				}
				for (int j = 2 * i - 1; j > 0; j--) {
					cout << "*";
				}cout << endl;
			}*/
			for (int i = 1; i <= m; i++) {
				for (int k = 1; k < i; k++) {
					cout << " ";
				}
				for (int j = 1; j <= (m - i + 1) * 2 - 1; j++) {
					cout << "*";
				}cout << endl;
			}cout << endl;
		case 9:
			cout << "Enter number of rows: " << endl;
			cin >> m;
			for (int i = 1; i <= m; i++) {
				for (int k = 1; k <= m - i; k++) {
					cout << " ";
				}
				for (int j = 1; j <= 2 * i - 1; j++) {
					cout << "*";
				}
				cout << endl;
			}
			m = m - 1;
			for (int i = 1; i <= m; i++) {
				for (int k = 1; k <= i; k++) {
					cout << " ";
				}
				for (int j = 1; j <= (2 * m - 1 )- a ; j++) {
					cout << "*";
				}cout << endl;
				a += 2;
			}
			break;
		case 10:
			cout << "Enter number of rows: " << endl;
			cin >> m;
			for (int i = 1; i <= m; i++) {
				for (int j = 1; j <= i; j++) {
					cout << "*";
				}cout << endl;
			}
			m = m - 1;
			for (int i = 1; i <= m; i++) {
				for (int j = 1; j <= m -i+1; j++) {
					cout << "*";
				}cout << endl;
			}cout << endl;
			break;
		case 11:
			cout << "Enter number of rows: " << endl;
			cin >> m;
			for (int i = 1; i <= m; i++) {
				for (int j = 1; j <= i; j++) {
					cout << arr[j%2];
				}cout << endl;
				swap(arr[0], arr[1]);
			}cout << endl;
			break;
		case 12:
			cout << "Enter number of rows" << endl;
			cin >> m;
			/*for (int i = 1; i <= m; i++) {
				for (int j = 1; j <= i; j++) {
					cout << j;
				}
				for (int k = m - i; k >= 1; k--) {
					cout << " ";
				}
				for (int p = m - i; p >= 1; p--) {
					cout << " ";
				}
				for (int q = i; q >= 1; q--) {
					cout << q;
				}
				cout << endl;
			}cout << endl;*/
			space = 2 * (m - 1);
			for (int i = 1; i <= m; i++) {
				for (int j = 1; j <= i; j++) {
					cout << j;
				}
				for (int s = 1; s <= space; s++) {
					cout << " ";
				}
				for (int k = i; k >= 1; k--) {
					cout << k;
				}
				cout << endl;
				space -= 2;
			}
			cout << endl;
			break;
		case 13:
			a = 1;
			cout << "Enter number of rows" << endl;
			cin >> m;
			for (int i = 1; i <= m; i++) {
				for (int j = 1; j <= i; j++) {
					cout << a++<<" ";
				}cout << endl;
			}
			break;
		case 14:
			cout << "Enter number of rows" << endl;
			cin >> m;
			for (int i = 0; i <m; i++) {
				for (char j = 'A'; j <= 'A' + i; j++) {
					cout << j;
				}cout << endl;
			}
			break;
		case 15:
			cout << "Enter number of rows" << endl;
			cin >> m;
			for (int i = 0; i < m; i++) {
				for (char j = 'A'; j <= 'A' + m - i-1; j++) {
					cout << j;
				}cout << endl;
			}cout << endl;
			break;
		case 16:
			cout << "Enter number of rows" << endl;
			cin >> m;
			ch = 'A';
			for (int i = 1; i <= m; i++) {
				for (int j = 1; j <= i; j++) {
					cout << ch;
				}cout << endl; ch++;
			}
			break;
		case 17:
			cout << "Enter numbr of rows" << endl;
			cin >> m;
			/*for (int i = 1; i <= m; i++) {
				for (int s = 1; s <= m - i; s++) {
					cout << " ";
				}
				ch = 'A';
				for (int j = 1; j <= i; j++) {
					cout << ch;
					ch++;
				}
				if (i >= 2) {
					for (char k = 'A' + i - 2; k >= 'A'; k--) {
						cout << k;
					}
				}
				cout << endl;
			}cout << endl;*/
			for (int i = 0; i < m; i++) {
				ch = 'A';
				for (int j = 0; j < m - i-1; j++) {
					cout << " ";
				}
				for (int k = 0; k < 2*i+1; k++) {
					cout << ch;
					if (k >= (2 * i + 1) / 2)ch--;
					else ch++;
				}
				cout << endl;
			}
			cout << endl;
			break;
		case 18:
			cout << "Enter numbr of rows(only upto 5)" << endl;
			cin >> m;
			for (int i = 0; i < m; i++) {
				for (char j = 'E' - i; j >= 'A'; j--) {
					cout << j;
				}cout << endl;
			}
			cout << endl;
			break;
		case 19:
			cout << "Enter numbr of rows(of one triangle)" << endl;
			cin >> m;
			for (int i = 0; i < m; i++) {
				for (int k = 0; k < m - i; k++) {
					cout << "*";
				}
				for (int j = 0; j < 2 * i; j++) {
					cout << " ";
				}
				for (int k = 0; k < m - i; k++) {
					cout << "*";
				}
				cout << endl;
			}
			space = 2*(m-1);
			for (int i = 0; i < m; i++) {
				for (int j = 0; j <=i; j++) {
					cout << "*";
				}
				for (int k = space; k > 0; k--) {
					cout << " ";
				}
				for (int j = 0; j <=i; j++) {
					cout << "*";
				}
				cout << endl;
				space -= 2;
			}
			cout << endl;
			break;
		case 20:
			cout << "Enter numbr of rows(of one triangle)" << endl;
			cin >> m;
			stars = 1;
			space = 2*(m - 1);
			for (int i = 1; i <= 2 * m - 1; i++) {
				for (int j = 1; j <= stars; j++) {
					cout << "*";
				}
				for (int j = 1; j <= space; j++) {
					cout << " ";
				}
				for (int j = 1; j <= stars; j++) {
					cout << "*";
				}
				if (i >= m) {
					stars--;
					space += 2;
				}
				else {
					stars++;
					space -= 2;
				}
				cout << endl;
			}cout << endl;
			break;
		case 21:
			cout << "Enter number of rows:" << endl;
			cin >> m;
			cout << "Enter number of colomns:" << endl;
			cin >> n;
			for (int i = 1; i <= m; i++) {
				for (int j = 1; j <= n; j++) {
					if (i == 1 || i == m || j == 1 || j == n) cout << "*";
					else cout << " ";
				}
				cout << endl;
			}
			cout << endl;
		case 22:
			cout << "Enter Special Number For Special pattern:" << endl;
			cin >> n;
			for (int i = 0; i < 2 * n - 1; i++) {
				for (int j = 0; j < 2 * n - 1; j++) {
					int top = i;
					int right = j;
					int bottom = 2 * n - 2 - i;
					int left = 2 * n - 2 - j;
					cout << (n - fmin(fmin(top, bottom), fmin(right, left)));
				}cout << endl;
			}
			cout << endl;
			break;
		default:
			cout << "Invalid Choice " << endl;
			break;
		}
	}
	cout << "Thankyou For Using Our Platform" << endl;
	return 0;
}