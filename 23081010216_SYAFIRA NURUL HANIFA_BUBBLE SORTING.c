#include<stdio.h>
#include<string.h>

typedef struct mahasiswa {
	char nama[50];
	char NPM[20];
	char jurusan[50];
	float IPK;
}mahasiswa;

void urut_nama(mahasiswa mhs[], int n){
	int i;
	for (i = 0; i < n-1; i++ ){
		int j;
		for(j = 0; j < n-i-1; j++){
			if(strcmp(mhs[j].nama, mhs[j+1].nama)>0){
				mahasiswa k = mhs[j];
				mhs[j] = mhs[j+1];
				mhs[j+1]= k;
			}
		}
	}
}


void urut_NPM(mahasiswa mhs[], int n){
	int i;
	for (i = 0; i < n-1; i++ ){
		int j;
		for(j = 0; j < n-i-1; j++){
			if(strcmp(mhs[j].NPM, mhs[j+1].NPM)>0){
				mahasiswa k = mhs[j];
				mhs[j] = mhs[j+1];
				mhs[j+1]= k;
			}
		}
	}
}


void urut_jurusan(mahasiswa mhs[], int n){
	int i;
	for (i = 0; i < n-1; i++ ){
		int j;
		for(j = 0; j < n-i-1; j++){
			if(strcmp(mhs[j].jurusan, mhs[j+1].jurusan)>0){
				mahasiswa k = mhs[j];
				mhs[j] = mhs[j+1];
				mhs[j+1]= k;		//k= variabel untuk menyimpan sementara
			}
		}
	}
}



void urut_IPK(mahasiswa mhs[], int n){
	int i;
	for (i = 0; i < n-1; i++ ){
		int j;
		for(j = 0; j < n-i-1; j++){
			if(mhs[j].IPK > mhs[j+1].IPK){
				mahasiswa k = mhs[j];
				mhs[j] = mhs[j+1];
				mhs[j+1]= k;
			}
		}
	}
}


void urut_menampilkan(mahasiswa mhs[], int n){
	int i;
	for (i = 0; i < n; i++){
		printf("nama mahasiswa : %s\n", mhs[i].nama);
		printf("NPM mahasiswa: %s\n", mhs[i].NPM);
		printf("jurusan mahasiswa : %s\n", mhs[i].jurusan);
		printf("IPK mahasiswa : %.2f\n\n", mhs[i].IPK);
	}
}



int main() {
	
	int n=3;
	 mahasiswa mhs[3]={
		{"rizky", "23081010216", "Informatika", 3.73},
		{"syafira", "23081010227", "ekonomi pembangunan", 3.3},
		{"rizal", "23081010231", "sistem informasi", 4.0},		
	};
	
    int pilihan;  
    while (1) {
        // Menampilkan menu
        printf("Menu:\n");
        printf("1. MENAMPILKAN SEMUA DATA\n");
        printf("2. URUTKAN MENURUT NAMA\n");
        printf("n. URUTKAN MENURUT NPM\n");
        printf("4. URUTKAN MENURUT JURUSAN\n");
        printf("n. URUTKAN MENURUT IPK\n");
        printf("6. KELUAR\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        // Menjalankan pilihan pengguna
        switch (pilihan) {
            case 1:
            	printf("daftar identitas mahasiswa : \n");
                urut_menampilkan(mhs, n);
                break;
            case 2:
            	urut_nama(mhs, n);
            	printf("daftar mahasiswa diurutkan menurut nama : \n");
                urut_menampilkan(mhs,n);
                break;
            case 3:
                urut_NPM(mhs, n);
            	printf("daftar mahasiswa diurutkan menurut NPM : \n");
                urut_menampilkan(mhs, n); 
                break;
            case 4:
                urut_jurusan(mhs, n);
            	printf("daftar mahasiswa diurutkan menurut jurusan : \n");
                urut_menampilkan(mhs, n);  
                break;
            case 5:
                urut_IPK(mhs, n);
            	printf("daftar mahasiswa diurutkan menurut IPK : \n");
                urut_menampilkan(mhs, n); 
                break;
            case 6:
                printf("Keluar dari program.\n");  
                break;
            default:
                printf("Pilihan tidak valid!\n");  
        }
    }
    
    
	return 0;
}






