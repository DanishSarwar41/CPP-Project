#include <iostream>
#include<string>
#include<limits>
using namespace std;
int islamabad[] = { 0,30,30,50,70,70,80,90,120,140,160,180,210,240 };
int fatehJhang[2][13] = { {0,30,30,50,70,80,100,130,140,160,200,230 },{30} };
int AWT[2][12] = { { 0,30,40,50,60,70,90,120,130,150,190,220 },{30,30} };
int brahma[2][11] = { { 0,30,30,30,40,70,100,110,130,160,190 },{50,30,30} };
int burhan[2][10] = { { 0,30,30,30,50,80,90,110,150,170 } ,{70,50,40,30} };
int hazara[2][9] = { { 0,30,30,50,70,90,110,140,170 }, {70,60,50,30,30} };
int ghazi[2][8] = {{ 0,30,40,60,80,100,130,160 },{80,70,60,30,30,30}};
int chach[2] [7] = { { 0,30,50,70,90,120,150 },{90,80,70,40,30,30,30} };
int swabi[2][8] = { { 0,30,40,60,90,120 },{120,100,90,70,50,50,40,30} };
int sherkhan[2][9] = { { 0,30,30,70,100}, {140,130,120,100,80,70,60,50,30} };
int wali[2][10] = { { 0,30,50,80 } ,{160,140,130,110,90,90,80,70,40,30} };
int rashaki[2][11] = { { 0,30,60 }, {180,160,150,130,110,110,100,90,60,30,30} };
int charsada[2][12] = { { 0,30 }, {210,200,190,160,150,140,130,120,90,70,50,30} };
int peshawar[2][13] = { { 0 } ,{240,230,220,190,170,170,160,150,120,100,80,60,30} };
struct infor {
	double cnic, corona, p_no, reg_no, balance = 100;
}regs[100];
int n,x, r_verify, lchoice, nchoice;

void registeration() {
	cout << "\n**************************************";
	cout << "\n*          Vehicle Registration      *";
	cout << "\n**************************************" << endl;
	cout << "Please Enter your CNIC : ";
	cin >> regs[n].cnic;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Error! Please Enter Valid CNIC Number :  ";
		cin >> regs[n].cnic;
	}
	cin.ignore();
	cout << "Please Enter your Phone Number : ";
	cin >> regs[n].p_no;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Error! Please Enter Valid Phone Number :  ";
		cin >> regs[n].p_no;
	}
	cin.ignore();
	cout << "Please Enter your Digital Corona Verification Number  : ";
	cin >> regs[n].corona;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Error! Please Enter Valid Digital Corona Verification Number :  ";
		cin >> regs[n].corona;
	}
	cin.ignore();;
	cout << "Please Enter your Vehicle Registration Number : ";
	cin >> regs[n].reg_no;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Error! Please Enter Valid Vehicle Registration Number :  ";
		cin >> regs[n].reg_no;
	}
	cout << "\n";
	cout << "PLEASE WAIT... \n\n";
	cout << "M-Tag Registration Completed! " << endl;;
	cout << "Your M-Tag Registration Number is " << n << endl;
	cout << "You have been rewarded with PKR 100 Balance\nM-Tag Current Balance is : " << regs[n].balance << endl;
	n++;
}

void mtag_rech() {
	double credit;
	cout << "\n**************************************";
	cout << "\n*          M-Tag Recharge Portal     *";
	cout << "\n**************************************" << endl;
	cout << "Please Enter your M-Tag Registration No : ";
	cin >> r_verify;
	while (r_verify > 100) {
		cout << "Error! Please Enter Valid Vehicle Registration Number :  ";
		cin >> r_verify;
	}
	cout << "Your Current M-Tag Balance is: " << regs[r_verify].balance << endl; cout << "\n";
	cout << "Enter Credit Amount in PKR : ";
	cin >> credit;
	cin.ignore();
	regs[r_verify].balance += credit;
	cout << "Your New M-Tag Balance is :" << regs[r_verify].balance << endl;
}
void choices() {
	cout << "0-Islamabad" << endl;
	cout << "1-Fateh Jhang" << endl;
	cout << "2-AWT/Sangjani" << endl;
	cout << "3-Brahma Bahatar" << endl;
	cout << "4-Burhan" << endl;
	cout << "5-Hazara" << endl;
	cout << "6-Ghazi" << endl;
	cout << "7-Chach" << endl;
	cout << "8-Sawabi" << endl;
	cout << "9-Karnal Sherkhan" << endl;
	cout << "10-Wali Khan Interchange" << endl;
	cout << "11-Rashaki" << endl;
	cout << "12-Charsada" << endl;
	cout << "13-Peshawar" << endl;
}
int tolltax() {
	int nxt;
	if (lchoice == 0) {
		cout << "Enter Next City : ";
		choices();
		cin >> nxt;
		cin.ignore();
		while (nxt == 0) {
			cout << "Enter Valid Next City : ";
			cin >> nxt;
			cin.ignore();
		}
		x = islamabad[nxt];

	}
	else if (lchoice == 1) {
		int index=0;
		cout << "Enter Next City : " << endl;
		cout << index++ << "-Islamabad" << endl;
		cout << index++ << "-AWT/Sangjani" << endl;
		cout << index++ << "-Brahma Bahatar" << endl;
		cout << index++ << "-Burhan" << endl;
		cout << index++ << "-Hazara" << endl;
		cout << index++ << "-Ghazi" << endl;
		cout << index++ << "-Chach" << endl;
		cout << index++ << "-Sawabi" << endl;
		cout << index++ << "-Karnal Sherkhan" << endl;
		cout << index++ << "-Wali Khan Interchange" << endl;
		cout << index++<< "-Rashaki" << endl;
		cout << index++ << "-Charsada" << endl;
		cout << index << "-Peshawar" << endl;
		cin >> nxt;
		cin.ignore();
		while ( nxt > 12) {
			cout << "Enter Valid Next City : ";
			cin >> nxt;
			cin.ignore();
		}
		if (nxt == 0) {
			x = fatehJhang[1][0];
		}
		else {
			x = fatehJhang[0][nxt];
		}
	}
	else if (lchoice == 2) {
		int index=0;
		cout << "Enter Next City : " << endl;
		cout << index++ << "-Islamabad" << endl;
		cout << index++ << "-Fateh Jhang" << endl;
		cout << index++ << "-Brahma Bahatar" << endl;
		cout << index++ << "-Burhan" << endl;
		cout << index++ << "-Hazara" << endl;
		cout << index++ << "-Ghazi" << endl;
		cout << index++ << "-Chach" << endl;
		cout << index++ << "-Sawabi" << endl;
		cout << index++ << "-Karnal Sherkhan" << endl;
		cout << index++ << "-Wali Khan Interchange" << endl;
		cout << index++ << "-Rashaki" << endl;
		cout << index++ << "-Charsada" << endl;
		cout << index << "-Peshawar" << endl;
		
		cin >> nxt;
		while ( nxt >13 ) {
			cout << "Enter Valid Next City : ";
			cin >> nxt;
		}
		if (nxt == 0) {
			x = AWT[1][0];
		}
		else if (nxt == 1) { x = AWT[1][1]; }
		else {
			x = AWT[0][nxt-1];
		}
		
	}

	else if (lchoice == 3) {
		int index = 0;
		cout << "Enter Next City : "<<endl;
		cout << index++ << "-Islamabad" << endl;
		cout << index++ << "-Fateh Jhang" << endl;
		cout << index++ << "-AWT/Sangjani" << endl;
		cout << index++ << "-Burhan" << endl;
		cout << index++ << "-Hazara" << endl;
		cout << index++ << "-Ghazi" << endl;
		cout << index++ << "-Chach" << endl;
		cout << index++ << "-Sawabi" << endl;
		cout << index++ << "-Karnal Sherkhan" << endl;
		cout << index++ << "-Wali Khan Interchange" << endl;
		cout << index++ << "-Rashaki" << endl;
		cout << index++ << "-Charsada" << endl;
		cout << index << "-Peshawar" << endl;
		cin >> nxt;
		while (nxt > 13) {
			cout << "Enter Valid Next City : ";
			cin >> nxt;
		}
		if (nxt == 0 || nxt == 1 || nxt == 2) {
			x = brahma[1][nxt];
		}
		else {
			x = brahma[0][nxt - 2];
		}
		
		
	}

	else if (lchoice == 4) {
	int index = 0;
	cout << "Enter Next City : " << endl;
	cout << index++ << "-Islamabad" << endl;
	cout << index++ << "-Fateh Jhang" << endl;
	cout << index++ << "-AWT/Sangjani" << endl;
	cout << index++ << "-Barhama Bahatar" << endl;
	cout << index++ << "-Hazara" << endl;
	cout << index++ << "-Ghazi" << endl;
	cout << index++ << "-Chach" << endl;
	cout << index++ << "-Sawabi" << endl;
	cout << index++ << "-Karnal Sherkhan" << endl;
	cout << index++ << "-Wali Khan Interchange" << endl;
	cout << index++ << "-Rashaki" << endl;
	cout << index++ << "-Charsada" << endl;
	cout << index << "-Peshawar" << endl;
		cin >> nxt;
		while ( nxt >13 ) {
			cout << "Enter Valid Next City : ";
			cin >> nxt;
		}
		if (nxt == 0 || nxt == 1 || nxt == 2||nxt==3) {
			x = burhan[1][nxt];
		}
		else {
			x = burhan[0][nxt - 3];
		}
	}

	else if (lchoice == 5) {
	int index = 0;
	cout << "Enter Next City : " << endl;
	cout << index++ << "-Islamabad" << endl;
	cout << index++ << "-Fateh Jhang" << endl;
	cout << index++ << "-AWT/Sangjani" << endl;
	cout << index++ << "-Barhama Bahatar" << endl;
	cout << index++ << "-Burhan" << endl;
	cout << index++ << "-Ghazi" << endl;
	cout << index++ << "-Chach" << endl;
	cout << index++ << "-Sawabi" << endl;
	cout << index++ << "-Karnal Sherkhan" << endl;
	cout << index++ << "-Wali Khan Interchange" << endl;
	cout << index++ << "-Rashaki" << endl;
	cout << index++ << "-Charsada" << endl;
	cout << index << "-Peshawar" << endl;
		cin >> nxt;
		while ( nxt >13 ) {
			cout << "Enter Valid Next City : ";
			cin >> nxt;
		}
		if (nxt == 0 || nxt == 1 || nxt == 2 || nxt == 3||nxt == 4) {
			x = hazara[1][nxt];
		}
		else {
			x = hazara[0][nxt - 4];
		}
	}
	else if (lchoice == 6) {
	int index = 0;
	cout << "Enter Next City : " << endl;
	cout << index++ << "-Islamabad" << endl;
	cout << index++ << "-Fateh Jhang" << endl;
	cout << index++ << "-AWT/Sangjani" << endl;
	cout << index++ << "-Barhama Bahatar" << endl;
	cout << index++ << "-Burhan" << endl;
	cout << index++ << "-Hazara" << endl;
	cout << index++ << "-Chach" << endl;
	cout << index++ << "-Sawabi" << endl;
	cout << index++ << "-Karnal Sherkhan" << endl;
	cout << index++ << "-Wali Khan Interchange" << endl;
	cout << index++ << "-Rashaki" << endl;
	cout << index++ << "-Charsada" << endl;
	cout << index << "-Peshawar" << endl;
		cin >> nxt;
		while ( nxt >13 ) {
			cout << "Enter Valid Next City : ";
			cin >> nxt;
		}
		if (nxt == 0 || nxt == 1 || nxt == 2 || nxt == 3 || nxt == 4||nxt==5) {
			x = ghazi[1][nxt];
		}
		else {
			x = ghazi[0][nxt - 5];
		}
	}

	else if (lchoice == 7) {
	int index = 0;
	cout << "Enter Next City : " << endl;
	cout << index++ << "-Islamabad" << endl;
	cout << index++ << "-Fateh Jhang" << endl;
	cout << index++ << "-AWT/Sangjani" << endl;
	cout << index++ << "-Barhama Bahatar" << endl;
	cout << index++ << "-Burhan" << endl;
	cout << index++ << "-Hazara" << endl;
	cout << index++ << "-Ghazi" << endl;
	cout << index++ << "-Sawabi" << endl;
	cout << index++ << "-Karnal Sherkhan" << endl;
	cout << index++ << "-Wali Khan Interchange" << endl;
	cout << index++ << "-Rashaki" << endl;
	cout << index++ << "-Charsada" << endl;
	cout << index << "-Peshawar" << endl;
		cin >> nxt;
		while  (nxt > 13) {
			cout << "Enter Valid Next City : ";
			cin >> nxt;
		}
		if (nxt == 0 || nxt == 1 || nxt == 2 || nxt == 3 || nxt == 4 || nxt == 5||nxt==6) {
			x = chach[1][nxt];
		}
		else {
			x = chach[0][nxt - 6];
		}
	}

	else if (lchoice == 8) {
	int index = 0;
	cout << "Enter Next City : " << endl;
	cout << index++ << "-Islamabad" << endl;
	cout << index++ << "-Fateh Jhang" << endl;
	cout << index++ << "-AWT/Sangjani" << endl;
	cout << index++ << "-Barhama Bahatar" << endl;
	cout << index++ << "-Burhan" << endl;
	cout << index++ << "-Hazara" << endl;
	cout << index++ << "-Ghazi" << endl;
	cout << index++ << "-Chach" << endl;
	cout << index++ << "-Karnal Sherkhan" << endl;
	cout << index++ << "-Wali Khan Interchange" << endl;
	cout << index++ << "-Rashaki" << endl;
	cout << index++ << "-Charsada" << endl;
	cout << index << "-Peshawar" << endl;
		cin >> nxt;
		while ( nxt > 13) {
			cout << "Enter Valid Next City : ";
			cin >> nxt;
		}
		if (nxt == 0 || nxt == 1 || nxt == 2 || nxt == 3 || nxt == 4 || nxt == 5 || nxt == 6||nxt==7) {
			x = swabi[1][nxt];
		}
		else {
			x = swabi[0][nxt - 7];
		}
	}

	else if (lchoice == 9) {
	int index = 0;
	cout << "Enter Next City : " << endl;
	cout << index++ << "-Islamabad" << endl;
	cout << index++ << "-Fateh Jhang" << endl;
	cout << index++ << "-AWT/Sangjani" << endl;
	cout << index++ << "-Barhama Bahatar" << endl;
	cout << index++ << "-Burhan" << endl;
	cout << index++ << "-Hazara" << endl;
	cout << index++ << "-Ghazi" << endl;
	cout << index++ << "-Chach" << endl;
	cout << index++ << "-Sawabi" << endl;
	cout << index++ << "-Wali Khan Interchange" << endl;
	cout << index++ << "-Rashaki" << endl;
	cout << index++ << "-Charsada" << endl;
	cout << index << "-Peshawar" << endl;
		cin >> nxt;
		while (nxt == 9) {
			cout << "Enter Valid Next City : ";
			cin >> nxt;
		}
		if (nxt == 0 || nxt == 1 || nxt == 2 || nxt == 3 || nxt == 4 || nxt == 5 || nxt == 6 || nxt == 7||nxt==8) {
			x = sherkhan[1][nxt];
		}
		else {
			x = sherkhan[0][nxt - 8];
		}
	}

	else if (lchoice == 10) {
	int index = 0;
	cout << "Enter Next City : " << endl;
	cout << index++ << "-Islamabad" << endl;
	cout << index++ << "-Fateh Jhang" << endl;
	cout << index++ << "-AWT/Sangjani" << endl;
	cout << index++ << "-Barhama Bahatar" << endl;
	cout << index++ << "-Burhan" << endl;
	cout << index++ << "-Hazara" << endl;
	cout << index++ << "-Ghazi" << endl;
	cout << index++ << "-Chach" << endl;
	cout << index++ << "-Sawabi" << endl;
	cout << index++ << "-Karnal Sherkhan" << endl;
	cout << index++ << "-Rashaki" << endl;
	cout << index++ << "-Charsada" << endl;
	cout << index << "-Peshawar" << endl;
		cin >> nxt;
		while (nxt > 13) {
			cout << "Enter Valid Next City : ";
			cin >> nxt;
		}
		if (nxt == 0 || nxt == 1 || nxt == 2 || nxt == 3 || nxt == 4 || nxt == 5 || nxt == 6 || nxt == 7 || nxt == 8||nxt==9) {
			x = wali [1] [nxt] ;
		}
		else {
			x = wali[0][nxt - 9];
		}
	}

	else if (lchoice == 11) {
	int index = 0;
	cout << "Enter Next City : " << endl;
	cout << index++ << "-Islamabad" << endl;
	cout << index++ << "-Fateh Jhang" << endl;
	cout << index++ << "-AWT/Sangjani" << endl;
	cout << index++ << "-Barhama Bahatar" << endl;
	cout << index++ << "-Burhan" << endl;
	cout << index++ << "-Hazara" << endl;
	cout << index++ << "-Ghazi" << endl;
	cout << index++ << "-Chach" << endl;
	cout << index++ << "-Sawabi" << endl;
	cout << index++ << "-Karnal Sherkhan" << endl;
	cout << index++ << "-Wali Khan Interchange" << endl;
	cout << index++ << "-Charsada" << endl;
	cout << index << "-Peshawar" << endl;
		cin >> nxt;
		while (nxt > 13) {
			cout << "Enter Valid Next City : ";
			cin >> nxt;
		}
		if (nxt == 0 || nxt == 1 || nxt == 2 || nxt == 3 || nxt == 4 || nxt == 5 || nxt == 6 || nxt == 7 || nxt == 8 || nxt == 9||nxt==10) {
			x = rashaki[1][nxt];
		}
		else {
			x = rashaki[0][nxt - 10];
		}
	}

	else if (lchoice == 12) {
	int index = 0;
	cout << "Enter Next City : " << endl;
	cout << index++ << "-Islamabad" << endl;
	cout << index++ << "-Fateh Jhang" << endl;
	cout << index++ << "-AWT/Sangjani" << endl;
	cout << index++ << "-Barhama Bahatar" << endl;
	cout << index++ << "-Burhan" << endl;
	cout << index++ << "-Hazara" << endl;
	cout << index++ << "-Ghazi" << endl;
	cout << index++ << "-Chach" << endl;
	cout << index++ << "-Sawabi" << endl;
	cout << index++ << "-Karnal Sherkhan" << endl;
	cout << index++ << "-Wali Khan Interchange" << endl;
	cout << index++ << "-Rashaki" << endl;
	cout << index << "-Peshawar" << endl;
		cin >> nxt;
		while (nxt > 13) {
			cout << "Enter Valid Next City : ";
			cin >> nxt;
		}
		if (nxt == 0 || nxt == 1 || nxt == 2 || nxt == 3 || nxt == 4 || nxt == 5 || nxt == 6 || nxt == 7 || nxt == 8 || nxt == 9 || nxt == 10||nxt==11) {
			x = charsada[1][nxt];
		}
		else {
			x = charsada[0][nxt - 11];
		}
	}

	else if (lchoice == 13) {
	int index = 0;
	cout << "Enter Next City : " << endl;
	cout << index++ << "-Islamabad" << endl;
	cout << index++ << "-Fateh Jhang" << endl;
	cout << index++ << "-AWT/Sangjani" << endl;
	cout << index++ << "-Barhama Bahatar" << endl;
	cout << index++ << "-Burhan" << endl;
	cout << index++ << "-Hazara" << endl;
	cout << index++ << "-Ghazi" << endl;
	cout << index++ << "-Chach" << endl;
	cout << index++ << "-Sawabi" << endl;
	cout << index++ << "-Karnal Sherkhan" << endl;
	cout << index++ << "-Wali Khan Interchange" << endl;
	cout << index++ << "-Rashaki" << endl;
	cout << index++ << "-Charsada" << endl;
		cin >> nxt;
		while (nxt > 13) {
			cout << "Enter Valid Next City : ";
			cin >> nxt;
		}
		if (nxt == 0 || nxt == 1 || nxt == 2 || nxt == 3 || nxt == 4 || nxt == 5 || nxt == 6 || nxt == 7 || nxt == 8 || nxt == 9 || nxt == 10 || nxt == 11||nxt==12) {
			x = peshawar[1][nxt];
		}
		else {
			x = peshawar[0][nxt - 12];
		}
	}
	return x;
}

int main() {

	int choice, dest, x, y,mreg;
Welcome:
	cout << "\n**************************************";
	cout << "\n*          M-Tag Portal              *";
	cout << "\n**************************************" << endl;

	cout << "Welcome to M-Tag Portal\n" << endl;

	cout << "Please Select either of the options" << endl;
	cout << "1- Toll Tax Payment\n2- New Vehicle Registration\n3- Recharge M-Tag Balance\n4- Exit " << endl;
	cin >> choice;
	switch (choice) {
	case 2:registeration(); cout << "\n\n"; goto Welcome;
	case 3:mtag_rech(); cout << "\n\n"; goto Welcome;
	case 4:goto exit;
	case 1: {
		cout << "\n**************************************";
		cout << "\n*          M-Tag Toll Tax Portal     *";
		cout << "\n**************************************" << endl;
		cout << "\n";
		cout << "Please Enter your M-Tag Registration Number : ";
		cin >> mreg;
		cout << "Enter last City" << endl;
		choices();
		cin >> lchoice;
		cout << "\n";
		cin.ignore();
		dest = tolltax();
		while (regs[mreg].balance < dest) {
			int c;
			cout << "\n!!! Balance Low !!!\nPlease Recharge!" << endl;
			cout << "1-Recharge M-Tag Balance\n2-Exit "<<endl;
			cin >> c;
			if (c == 1) {
				mtag_rech();
			}
			else { goto exit; }
			if (regs[mreg].balance >= dest) { break; }
		}
		regs[mreg].balance -= dest;
		cout << "\nPayment Successful!" << endl;
		cout << "Your Remaining balance is : " << regs[mreg].balance<<endl;

		goto Welcome;
	}
	}
exit:
	cout << "Have a Good Day!" << endl;
	system("pause");

	return 0;
}

