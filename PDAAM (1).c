#include <stdio.h>
#include <stdlib.h>

int main(void){
	int bpm, jumlah, hasil, denda, denda_total, administrasi;
	int tanggal1, tanggal2;

	void menu_awal();
	void golongan1();
	void golongan2();
	void golongan3();
	int  debit, debit1, debit2;
	
	administrasi=2000;

	
	do{
		menu_awal();
		printf("masukkan kode BPM : ");
		scanf("%d", &bpm);
		system("clear");
		if(!bpm || bpm<90 || bpm>92){
			printf("input salah\n");
			system("pause");
		}
		fflush(stdin);
		system("clear");
	}while(!bpm || bpm<90 || bpm>92);
	
	if(bpm==90){
		bpm=5000;
		int kode;
		do{
			golongan1();
			printf("Masukkan Kode Golongan : ");
			scanf("%d", &kode);
			system("clear");
			if(!kode || kode<111||kode>112 && kode<121||kode>122 && kode<131||kode>132 &&kode<141||kode>142){
				printf("input salah\n");
				system("pause");
			}	
			fflush(stdin);
			system("clear");
		}while(!kode || kode<111||kode>112 && kode<121||kode>122 && kode<131||kode>132 &&kode<141||kode>142);
		
		
		if(kode==111){
			
		int a=1700, b=2060, c=5880;
		
		do{
			printf("Masukkan pemakaian bulan ini (M3) : ");
			scanf("%d", &debit1);
			printf("Masukkan tanggal bayar bulan ini (hanya angka tanggal): ");
			scanf("%d", &tanggal1);
			printf("Masukkan pemakaian bulan lalu (M3) : ");
			scanf("%d", &debit2);
			printf("Masukkan tanggal bayar bulan lalu (hanya angka tanggal): ");
			scanf("%d", &tanggal2);
			system("clear");
			debit = debit1-debit2;
			if(!debit1 || !debit2 || !tanggal1||!tanggal2 ||tanggal1,tanggal2<=0||tanggal1,tanggal2>31 ||debit<0){
				printf("input salah\n");
				system("pause");
			}
			fflush(stdin);
			system("clear");
			
		}while(!debit1 || !debit2 || !tanggal1||!tanggal2 ||tanggal1,tanggal2<=0||tanggal1,tanggal2>31 ||debit<0);
		
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
			hasil=debit*a;
			} else if(debit >=11 && debit <=20){
			hasil=debit*b;
			} else if(debit >20){
			hasil=debit*c;
			}
		if(tanggal1>tanggal2){
			denda=0.2*hasil;
		}	
		hasil+=administrasi+denda;
			
		} else if(kode==112){
			
		int a=2060, b=2340, c=5940;
		
		do{
			printf("Masukkan pemakaian bulan ini (M3) : ");
			scanf("%d", &debit1);
			printf("Masukkan tanggal bayar bulan ini (hanya angka tanggal): ");
			scanf("%d", &tanggal1);
			printf("Masukkan pemakaian bulan lalu (M3) : ");
			scanf("%d", &debit2);
			printf("Masukkan tanggal bayar bulan lalu (hanya angka tanggal): ");
			scanf("%d", &tanggal2);
			system("clear");
			debit = debit1-debit2;
			if(!debit1 || !debit2 || !tanggal1||!tanggal2 ||tanggal1,tanggal2<=0||tanggal1,tanggal2>31 ||debit<0){
				printf("input salah\n");
				system("pause");
			}
			fflush(stdin);
			system("clear");
			
		}while(!debit1 || !debit2 || !tanggal1||!tanggal2 ||tanggal1,tanggal2<=0||tanggal1,tanggal2>31 ||debit<0);
		
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
			hasil=debit*a;
			} else if(debit >=11 && debit <=20){
			hasil=debit*b;
			} else if(debit >20){
			hasil=debit*c;
			}
		if(tanggal1>tanggal2){
			denda=0.2*hasil;
		}	
		hasil+=administrasi+denda;
		
		} else if(kode==121){
			
		int a=2340, b=2620, c=6000;
		
		do{
			printf("Masukkan pemakaian bulan ini (M3) : ");
			scanf("%d", &debit1);
			printf("Masukkan tanggal bayar bulan ini (hanya angka tanggal): ");
			scanf("%d", &tanggal1);
			printf("Masukkan pemakaian bulan lalu (M3) : ");
			scanf("%d", &debit2);
			printf("Masukkan tanggal bayar bulan lalu (hanya angka tanggal): ");
			scanf("%d", &tanggal2);
			system("clear");
			debit = debit1-debit2;
			if(!debit1 || !debit2 || !tanggal1||!tanggal2 ||tanggal1,tanggal2<=0||tanggal1,tanggal2>31 ||debit<0){
				printf("input salah\n");
				system("pause");
			}
			fflush(stdin);
			system("clear");
			
		}while(!debit1 || !debit2 || !tanggal1||!tanggal2 ||tanggal1,tanggal2<=0||tanggal1,tanggal2>31 ||debit<0);
		
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
			hasil=debit*a;
			} else if(debit >=11 && debit <=20){
			hasil=debit*b;
			} else if(debit >20){
			hasil=debit*c;
			}
		if(tanggal1>tanggal2){
			denda=0.2*hasil;
		}	
		hasil+=administrasi+denda;
		
		} else if(kode==122){
			
		int a=2620, b=2900, c=6060;
		
		do{
			printf("Masukkan pemakaian bulan ini (M3) : ");
			scanf("%d", &debit1);
			printf("Masukkan tanggal bayar bulan ini (hanya angka tanggal): ");
			scanf("%d", &tanggal1);
			printf("Masukkan pemakaian bulan lalu (M3) : ");
			scanf("%d", &debit2);
			printf("Masukkan tanggal bayar bulan lalu (hanya angka tanggal): ");
			scanf("%d", &tanggal2);
			system("clear");
			debit = debit1-debit2;
			if(!debit1 || !debit2 || !tanggal1||!tanggal2 ||tanggal1,tanggal2<=0||tanggal1,tanggal2>31 ||debit<0){
				printf("input salah\n");
				system("pause");
			}
			fflush(stdin);
			system("clear");
			
		}while(!debit1 || !debit2 || !tanggal1||!tanggal2 ||tanggal1,tanggal2<=0||tanggal1,tanggal2>31 ||debit<0);
		
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
			hasil=debit*a;
			} else if(debit >=11 && debit <=20){
			hasil=debit*b;
			} else if(debit >20){
			hasil=debit*c;
			}
		if(tanggal1>tanggal2){
			denda=0.2*hasil;
		}	
		hasil+=administrasi+denda;
		
		} else if(kode==131){
			
		int a=2900, b=3180, c=6180;
		
		do{
			printf("Masukkan pemakaian bulan ini (M3) : ");
			scanf("%d", &debit1);
			printf("Masukkan tanggal bayar bulan ini (hanya angka tanggal): ");
			scanf("%d", &tanggal1);
			printf("Masukkan pemakaian bulan lalu (M3) : ");
			scanf("%d", &debit2);
			printf("Masukkan tanggal bayar bulan lalu (hanya angka tanggal): ");
			scanf("%d", &tanggal2);
			system("clear");
			debit = debit1-debit2;
			if(!debit1 || !debit2 || !tanggal1||!tanggal2 ||tanggal1,tanggal2<=0||tanggal1,tanggal2>31 ||debit<0){
				printf("input salah\n");
				system("pause");
			}
			fflush(stdin);
			system("clear");
			
		}while(!debit1 || !debit2 || !tanggal1||!tanggal2 ||tanggal1,tanggal2<=0||tanggal1,tanggal2>31 ||debit<0);
		
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
			hasil=debit*a;
			} else if(debit >=11 && debit <=20){
			hasil=debit*b;
			} else if(debit >20){
			hasil=debit*c;
			}
		if(tanggal1>tanggal2){
			denda=0.2*hasil;
		}	
		hasil+=administrasi+denda;
		
		} else if(kode==132){
			
		int a=3180, b=3460, c=6180;
		
		do{
			printf("Masukkan pemakaian bulan ini (M3) : ");
			scanf("%d", &debit1);
			printf("Masukkan tanggal bayar bulan ini (hanya angka tanggal): ");
			scanf("%d", &tanggal1);
			printf("Masukkan pemakaian bulan lalu (M3) : ");
			scanf("%d", &debit2);
			printf("Masukkan tanggal bayar bulan lalu (hanya angka tanggal): ");
			scanf("%d", &tanggal2);
			system("clear");
			debit = debit1-debit2;
			if(!debit1 || !debit2 || !tanggal1||!tanggal2 ||tanggal1,tanggal2<=0||tanggal1,tanggal2>31 ||debit<0){
				printf("input salah\n");
				system("pause");
			}
			fflush(stdin);
			system("clear");
			
		}while(!debit1 || !debit2 || !tanggal1||!tanggal2 ||tanggal1,tanggal2<=0||tanggal1,tanggal2>31 ||debit<0);
		
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
			hasil=debit*a;
			} else if(debit >=11 && debit <=20){
			hasil=debit*b;
			} else if(debit >20){
			hasil=debit*c;
			}
		if(tanggal1>tanggal2){
			denda=0.2*hasil;
		}	
		hasil+=administrasi+denda;
		
		} else if(kode==141){
			
		int a=3460, b=3740, c=6240;
		
		do{
			printf("Masukkan pemakaian bulan ini (M3) : ");
			scanf("%d", &debit1);
			printf("Masukkan tanggal bayar bulan ini (hanya angka tanggal): ");
			scanf("%d", &tanggal1);
			printf("Masukkan pemakaian bulan lalu (M3) : ");
			scanf("%d", &debit2);
			printf("Masukkan tanggal bayar bulan lalu (hanya angka tanggal): ");
			scanf("%d", &tanggal2);
			system("clear");
			debit = debit1-debit2;
			if(!debit1 || !debit2 || !tanggal1||!tanggal2 ||tanggal1,tanggal2<=0||tanggal1,tanggal2>31 ||debit<0){
				printf("input salah\n");
				system("pause");
			}
			fflush(stdin);
			system("clear");
			
		}while(!debit1 || !debit2 || !tanggal1||!tanggal2 ||tanggal1,tanggal2<=0||tanggal1,tanggal2>31 ||debit<0);
		
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
			hasil=debit*a;
			} else if(debit >=11 && debit <=20){
			hasil=debit*b;
			} else if(debit >20){
			hasil=debit*c;
			}
		if(tanggal1>tanggal2){
			denda=0.2*hasil;
		}	
		hasil+=administrasi+denda;
		
		} else if(kode==142){
			
		int a=3740, b=4020, c=6300;
		
		do{
			printf("Masukkan pemakaian bulan ini (M3) : ");
			scanf("%d", &debit1);
			printf("Masukkan tanggal bayar bulan ini (hanya angka tanggal): ");
			scanf("%d", &tanggal1);
			printf("Masukkan pemakaian bulan lalu (M3) : ");
			scanf("%d", &debit2);
			printf("Masukkan tanggal bayar bulan lalu (hanya angka tanggal): ");
			scanf("%d", &tanggal2);
			system("clear");
			debit = debit1-debit2;
			if(!debit1 || !debit2 || !tanggal1||!tanggal2 ||tanggal1,tanggal2<=0||tanggal1,tanggal2>31 ||debit<0){
				printf("input salah\n");
				system("pause");
			}
			fflush(stdin);
			system("clear");
			
		}while(!debit1 || !debit2 || !tanggal1||!tanggal2 ||tanggal1,tanggal2<=0||tanggal1,tanggal2>31 ||debit<0);
		
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
			hasil=debit*a;
			} else if(debit >=11 && debit <=20){
			hasil=debit*b;
			} else if(debit >20){
			hasil=debit*c;
			}
		if(tanggal1>tanggal2){
			denda_total=hasil*denda;
		}	
		hasil+=administrasi+denda_total;
		
		} else {
			printf("input salah!!");
		}
	} else if(bpm==91){
		bpm=7000;
		int kode;
		
		do{
			golongan1();
			printf("Masukkan Kode Golongan : ");
			scanf("%d", &kode);
			system("clear");
			if(!kode || kode<211||kode>212 && kode<221||kode>222 && kode<231||kode>232 &&kode<241||kode>242&& kode<251||kode>254){
				printf("input salah\n");
				system("pause");
			}	
			fflush(stdin);
			system("clear");
		}while(!kode || kode<211||kode>212 && kode<221||kode>222 && kode<231||kode>232 &&kode<241||kode>242&& kode<251||kode>254);
		
		
		if(kode==211){
			
		int a=6340, b=9200, c=9600;
		
		do{
			printf("Masukkan pemakaian bulan ini (M3) : ");
			scanf("%d", &debit1);
			printf("Masukkan tanggal bayar bulan ini (hanya angka tanggal): ");
			scanf("%d", &tanggal1);
			printf("Masukkan pemakaian bulan lalu (M3) : ");
			scanf("%d", &debit2);
			printf("Masukkan tanggal bayar bulan lalu (hanya angka tanggal): ");
			scanf("%d", &tanggal2);
			system("clear");
			debit = debit1-debit2;
			if(!debit1 || !debit2 || !tanggal1||!tanggal2 ||tanggal1,tanggal2<=0||tanggal1,tanggal2>31 ||debit<0){
				printf("input salah\n");
				system("pause");
			}
			fflush(stdin);
			system("clear");
			
		}while(!debit1 || !debit2 || !tanggal1||!tanggal2 ||tanggal1,tanggal2<=0||tanggal1,tanggal2>31 ||debit<0);
		
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
			hasil=debit*a;
			} else if(debit >=11 && debit <=20){
			hasil=debit*b;
			} else if(debit >20){
			hasil=debit*c;
			}
		if(tanggal1>tanggal2){
			denda_total=hasil*denda;
		}	
		hasil+=administrasi+denda_total;
		
		} else if(kode==212){
			
		int a=6420, b=9350, c=9650;
		
		do{
			printf("Masukkan pemakaian bulan ini (M3) : ");
			scanf("%d", &debit1);
			printf("Masukkan pemakaian bulan lalu (M3) : ");
			scanf("%d", &debit2);
			system("clear");
			if(!debit1 || !debit2){
				printf("input salah");
				system("pause");
			}
			fflush(stdin);
			system("clear");
		}while(!debit1 || !debit2);
		
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
				hasil=debit*a;
			} else if(debit >=11 && debit <=20){
				hasil=debit*b;
			} else if(debit >20){
				hasil=debit*c;
			}
		} else if(kode==221){
		int a=6490, b=9500, c=9800;
		printf("Masukkan pemakaian bulan ini (M3) : ");
		scanf("%d", &debit1);
		printf("Masukkan pemakaian bulan lalu (M3) : ");
		scanf("%d", &debit2);
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
				hasil=debit*a;
			} else if(debit >=11 && debit <=20){
				hasil=debit*b;
			} else if(debit >20){
				hasil=debit*c;
			}
		} else if(kode==222){
		int a=6570, b=9650, c=9950;
		printf("Masukkan pemakaian bulan ini (M3) : ");
		scanf("%d", &debit1);
		printf("Masukkan pemakaian bulan lalu (M3) : ");
		scanf("%d", &debit2);
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
				hasil=debit*a;
			} else if(debit >=11 && debit <=20){
				hasil=debit*b;
			} else if(debit >20){
				hasil=debit*c;
			}
		} else if(kode==231){
		int a=6640, b=9800, c=10100;
		printf("Masukkan pemakaian bulan ini (M3) : ");
		scanf("%d", &debit1);
		printf("Masukkan pemakaian bulan lalu (M3) : ");
		scanf("%d", &debit2);
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
				hasil=debit*a;
			} else if(debit >=11 && debit <=20){
				hasil=debit*b;
			} else if(debit >20){
				hasil=debit*c;
			}
		} else if(kode==232){
			int a=6720, b=9950, c=10250;
		printf("Masukkan pemakaian bulan ini (M3) : ");
		scanf("%d", &debit1);
		printf("Masukkan pemakaian bulan lalu (M3) : ");
		scanf("%d", &debit2);
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
				hasil=debit*a;
			} else if(debit >=11 && debit <=20){
				hasil=debit*b;
			} else if(debit >20){
				hasil=debit*c;
			}
		} else if(kode==241){
		int a=6790, b=10100, c=10400;
		printf("Masukkan pemakaian bulan ini (M3) : ");
		scanf("%d", &debit1);
		printf("Masukkan pemakaian bulan lalu (M3) : ");
		scanf("%d", &debit2);
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
				hasil=debit*a;
			} else if(debit >=11 && debit <=20){
				hasil=debit*b;
			} else if(debit >20){
				hasil=debit*c;
			}
		} else if(kode==242){
		int a=6870, b=10250, c=10550;
		printf("Masukkan pemakaian bulan ini (M3) : ");
		scanf("%d", &debit1);
		printf("Masukkan pemakaian bulan lalu (M3) : ");
		scanf("%d", &debit2);
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
				hasil=debit*a;
			} else if(debit >=11 && debit <=20){
				hasil=debit*b;
			} else if(debit >20){
				hasil=debit*c;
			}
		} else if (kode==251){
		int a=6940, b=10400, c=10700;
		printf("Masukkan pemakaian bulan ini (M3) : ");
		scanf("%d", &debit1);
		printf("Masukkan pemakaian bulan lalu (M3) : ");
		scanf("%d", &debit2);
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
				hasil=debit*a;
			} else if(debit >=11 && debit <=20){
				hasil=debit*b;
			} else if(debit >20){
				hasil=debit*c;
			}
		} else if(kode==252){
		int a=7020, b=10550, c=10850;
		printf("Masukkan pemakaian bulan ini (M3) : ");
		scanf("%d", &debit1);
		printf("Masukkan pemakaian bulan lalu (M3) : ");
		scanf("%d", &debit2);
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
				hasil=debit*a;
			} else if(debit >=11 && debit <=20){
				hasil=debit*b;
			} else if(debit >20){
				hasil=debit*c;
			}
		} else if(kode==253){
		int a=7090, b=10700, c=11000;
		printf("Masukkan pemakaian bulan ini (M3) : ");
		scanf("%d", &debit1);
		printf("Masukkan pemakaian bulan lalu (M3) : ");
		scanf("%d", &debit2);
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
				hasil=debit*a;
			} else if(debit >=11 && debit <=20){
				hasil=debit*b;
			} else if(debit >20){
				hasil=debit*c;
			}
		} else if(kode==254){
		int a=7170, b=10850, c=11150;
		printf("Masukkan pemakaian bulan ini (M3) : ");
		scanf("%d", &debit1);
		printf("Masukkan pemakaian bulan lalu (M3) : ");
		scanf("%d", &debit2);
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
				hasil=debit*a;
			} else if(debit >=11 && debit <=20){
				hasil=debit*b;
			} else if(debit >20){
				hasil=debit*c;
			}
		} else {
			printf("Input salah!!");
		}
	} else if(bpm==92){
		bpm=9000;
		golongan3();
		int kode;
		printf("Masukkan Kode Golongan : ");
		scanf("%d", &kode);
		if(kode==311){
		int a=9200, b=9850, c=10950;
		printf("Masukkan pemakaian bulan ini (M3) : ");
		scanf("%d", &debit1);
		printf("Masukkan pemakaian bulan lalu (M3) : ");
		scanf("%d", &debit2);
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
			hasil=debit*a;
			} else if(debit >=11 && debit <=20){
			hasil=debit*b;
			} else if(debit >20){
			hasil=debit*c;
			}
		} else if(kode==312){
		int a=9500, b=10150, c=11250;
		printf("Masukkan pemakaian bulan ini (M3) : ");
		scanf("%d", &debit1);
		printf("Masukkan pemakaian bulan lalu (M3) : ");
		scanf("%d", &debit2);
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
				hasil=debit*a;
			} else if(debit >=11 && debit <=20){
				hasil=debit*b;
			} else if(debit >20){
				hasil=debit*c;
			}
		} else if(kode==313){
		int a=9800, b=10450, c=11550;
		printf("Masukkan pemakaian bulan ini (M3) : ");
		scanf("%d", &debit1);
		printf("Masukkan pemakaian bulan lalu (M3) : ");
		scanf("%d", &debit2);
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
				hasil=debit*a;
			} else if(debit >=11 && debit <=20){
				hasil=debit*b;
			} else if(debit >20){
				hasil=debit*c;
			}
		} else if(kode==314){
		int a=10100, b=10750, c=11850;
		printf("Masukkan pemakaian bulan ini (M3) : ");
		scanf("%d", &debit1);
		printf("Masukkan pemakaian bulan lalu (M3) : ");
		scanf("%d", &debit2);
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
				hasil=debit*a;
			} else if(debit >=11 && debit <=20){
				hasil=debit*b;
			} else if(debit >20){
				hasil=debit*c;
			}
		} else if(kode==321){
		int a=10400, b=11050, c=12150;
		printf("Masukkan pemakaian bulan ini (M3) : ");
		scanf("%d", &debit1);
		printf("Masukkan pemakaian bulan lalu (M3) : ");
		scanf("%d", &debit2);
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
				hasil=debit*a;
			} else if(debit >=11 && debit <=20){
				hasil=debit*b;
			} else if(debit >20){
				hasil=debit*c;
			}
		} else if(kode==322){
			int a=10700, b=11350, c=12550;
		printf("Masukkan pemakaian bulan ini (M3) : ");
		scanf("%d", &debit1);
		printf("Masukkan pemakaian bulan lalu (M3) : ");
		scanf("%d", &debit2);
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
				hasil=debit*a;
			} else if(debit >=11 && debit <=20){
				hasil=debit*b;
			} else if(debit >20){
				hasil=debit*c;
			}
		} else if(kode==323){
		int a=11000, b=11650, c=13150;
		printf("Masukkan pemakaian bulan ini (M3) : ");
		scanf("%d", &debit1);
		printf("Masukkan pemakaian bulan lalu (M3) : ");
		scanf("%d", &debit2);
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
				hasil=debit*a;
			} else if(debit >=11 && debit <=20){
				hasil=debit*b;
			} else if(debit >20){
				hasil=debit*c;
			}
		} else if(kode==324){
		int a=11300, b=11950, c=13950;
		printf("Masukkan pemakaian bulan ini (M3) : ");
		scanf("%d", &debit1);
		printf("Masukkan pemakaian bulan lalu (M3) : ");
		scanf("%d", &debit2);
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
				hasil=debit*a;
			} else if(debit >=11 && debit <=20){
				hasil=debit*b;
			} else if(debit >20){
				hasil=debit*c;
			}
		} else if (kode==331){
		int a=11600, b=12250, c=14750;
		printf("Masukkan pemakaian bulan ini (M3) : ");
		scanf("%d", &debit1);
		printf("Masukkan pemakaian bulan lalu (M3) : ");
		scanf("%d", &debit2);
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
				hasil=debit*a;
			} else if(debit >=11 && debit <=20){
				hasil=debit*b;
			} else if(debit >20){
				hasil=debit*c;
			}
		} else if(kode==332){
		int a=11900, b=12550, c=14750;
		printf("Masukkan pemakaian bulan ini (M3) : ");
		scanf("%d", &debit1);
		printf("Masukkan pemakaian bulan lalu (M3) : ");
		scanf("%d", &debit2);
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
				hasil=debit*a;
			} else if(debit >=11 && debit <=20){
				hasil=debit*b;
			} else if(debit >20){
				hasil=debit*c;
			}
		} else if(kode==333){
		int a=12200, b=12850, c=15850;
		printf("Masukkan pemakaian bulan ini (M3) : ");
		scanf("%d", &debit1);
		printf("Masukkan pemakaian bulan lalu (M3) : ");
		scanf("%d", &debit2);
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
				hasil=debit*a;
			} else if(debit >=11 && debit <=20){
				hasil=debit*b;
			} else if(debit >20){
				hasil=debit*c;
			}
		} else if(kode==334){
		int a=12500, b=13150, c=16650;
		printf("Masukkan pemakaian bulan ini (M3) : ");
		scanf("%d", &debit1);
		printf("Masukkan pemakaian bulan lalu (M3) : ");
		scanf("%d", &debit2);
		debit = debit1-debit2;
			if(debit >=0 && debit <=10){
				hasil=debit*a;
			} else if(debit >=11 && debit <=20){
				hasil=debit*b;
			} else if(debit >20){
				hasil=debit*c;
			} else {
				printf("Input salah!!");
			}
		}
	} else {
		printf("Input Salah!!");
	}
	
	jumlah = bpm+hasil;
	printf("|-----------------------------------------------------------------------|\n");
	printf("|                                Total Pembayaran                       |\n");
	printf("|-----------------------------------------------------------------------|\n");
	printf("|   BPM     |   Tarif Air   |   Denda  |   Administrasi   |    Total    |\n");
	printf("|-----------------------------------------------------------------------|\n");
	printf("|   %d    |  %d        |    %d   |     %d     |    %d       |\n", bpm, hasil,denda,administrasi,jumlah);
	printf("|-----------------------------------------------------------------------|\n");
	
	return 0;
}

void menu_awal(){
	printf("|------------------------------------------------|\n");
	printf("|      Kelompok Pelanggan    | BPM |    TARIF    |\n");
	printf("|----------------------------+-----+-------------|\n");
	printf("| 1. Non NIaga Bersubsidi    |  90 |  Rp. 5000   |\n");
	printf("| 2. Non Niaga Tanpa Subsidi |  91 |  Rp. 7000   |\n");
	printf("| 3. Niaga                   |  92 |  Rp. 9000   |\n");  
	printf("|------------------------------------------------|\n");
}
void golongan1(){
	printf("|---------------------------------------------------------------|\n");
	printf("|                      Non Niaga Bersubsidi                     |\n");
	printf("|---------------------------------------------------------------|\n");
	printf("|   jenis  | Tegangan |__Tarif__pemakaian_per_M3___|     Kode   |\n");
	printf("| Golongan |  Listrik |  0-10  |  11-20  |   >20   |   Golongan |\n");
	printf("|----------+----------+--------+---------+---------+------------|\n");
	printf("| 1. RT A1 |  450 VA  |  1.780 |  2.060  |  5.880  |     111    |\n");
	printf("|          |  900 VA  |  2.060 |  2.340  |  5.940  |     112    |\n");
	printf("|----------+----------+--------+---------+---------+------------|\n");
	printf("| 2. RT A2 |  450 VA  |  2.340 |  2.620  |  6.000  |     121    |\n");
	printf("|          |  900 VA  |  2.620 |  2.900  |  6.060  |     122    |\n");
	printf("|----------+----------+--------+---------+---------+------------|\n");
	printf("| 3. RT A3 |  450 VA  |  2.900 |  3.180  |  6.120  |     131    |\n");
	printf("|          |  900 VA  |  3.180 |  3.460  |  6.180  |     132    |\n");
	printf("|----------+----------+--------+---------+---------+------------|\n");
	printf("| 4. RT A4 |  450 VA  |  3.460 |  3.740  |  6.240  |     141    |\n");
	printf("|          |  900 VA  |  3.740 |  4.020  |  6.300  |     142    |\n");
	printf("|---------------------------------------------------------------|\n");
}
void golongan2(){
	printf("|----------------------------------------------------------------|\n");
	printf("|                      Non Niaga Tanpa Subsidi                   |\n");
	printf("|----------------------------------------------------------------|\n");
	printf("|   jenis  | Tegangan  |__Tarif__pemakaian_per_M3___|     Kode   |\n");
	printf("| Golongan |  Listrik  |  0-10  |  11-20  |   >20   |   Golongan |\n");
	printf("|----------+-----------+--------+---------+---------+------------|\n");
	printf("| 1. RT A1 | 1.300 VA  |  6.340 |  9.200  |  9.600  |     211    |\n");
	printf("|          | >1.300 VA |  6.420 |  9.350  |  9.650  |     212    |\n");
	printf("|----------+-----------+--------+---------+---------+------------|\n");
	printf("| 2. RT A2 | 1.300 VA  |  6.490 |  9.500  |  9.800  |     221    |\n");
	printf("|          | >1.300 VA |  6.570 |  9.650  |  9.950  |     222    |\n");
	printf("|----------+-----------+--------+---------+---------+------------|\n");
	printf("| 3. RT A3 | 1.300 VA  |  6.640 |  9.800  | 10.100  |     231    |\n");
	printf("|          | >1.300 VA |  6.720 |  9.950  | 10.250  |     232    |\n");
	printf("|----------+-----------+--------+---------+---------+------------|\n");
	printf("| 4. RT A4 | 1.300 VA  |  6.790 | 10.100  | 10.400  |     241    |\n");
	printf("|          | >1.300 VA |  6.870 | 10.250  | 10.550  |     242    |\n");
	printf("|----------+-----------+--------+---------+---------+------------|\n");
	printf("| 5. RT B  |   450 VA  |  6.940 | 10.400  | 10.700  |     251    |\n");
	printf("|          |   900 VA  |  7.020 | 10.550  | 10.850  |     252    |\n");
	printf("|          |  1.300 VA |  7.090 | 10.700  | 11.000  |     253    |\n");
	printf("|          | >1.300 VA |  7.170 | 10.850  | 11.150  |     254    |\n");
	printf("|----------------------------------------------------------------|\n");
}
void golongan3(){
	printf("|------------------------------------------------------------------|\n");
	printf("|                               Niaga                              |\n");
	printf("|------------------------------------------------------------------|\n");
	printf("|   jenis    | Tegangan  |__Tarif__pemakaian_per_M3___|    Kode    |\n");
	printf("| Golongan   |  Listrik  |  0-10  |  11-20  |   >20   |   Golongan |\n");
	printf("|------------+-----------+--------+---------+---------+------------|\n");
	printf("| 1. Niaga   |   450 VA  |  9.200 |  9.850  | 10.950  |     311    |\n");
	printf("|    Kecil   |   900 VA  |  9.500 | 10.150  | 11.250  |     312    |\n");
	printf("|            |  1.300 VA |  9.800 | 10.450  | 11.550  |     313    |\n");
	printf("|            | >1.300 VA | 10.100 | 10.750  | 11.850  |     314    |\n");
	printf("|------------+-----------+--------+---------+---------+------------|\n");
	printf("| 2. Niaga   |   450 VA  | 10.400 | 11.050  | 12.150  |     321    |\n");
	printf("|    Sedang  |   900 VA  | 10.700 | 11.350  | 12.550  |     322    |\n");
	printf("|            |  1.300 VA | 11.000 | 11.650  | 13.150  |     323    |\n");
	printf("|            | >1.300 VA | 11.300 | 11.950  | 13.950  |     324    |\n");
	printf("|------------+-----------+--------+---------+---------+------------|\n");
	printf("| 3. Niaga   |   450 VA  | 11.600 | 12.250  | 14.750  |     331    |\n");
	printf("|    Besar   |   900 VA  | 11.900 | 12.550  | 15.050  |     332    |\n");
	printf("|            |  1.300 VA | 12.200 | 12.850  | 15.850  |     333    |\n");
	printf("|            | >1.300 VA | 12.500 | 13.150  | 16.650  |     334    |\n");
	printf("|------------------------------------------------------------------|\n");
}
