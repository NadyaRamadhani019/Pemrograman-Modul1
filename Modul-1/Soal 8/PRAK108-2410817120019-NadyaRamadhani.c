#include <stdio.h>
int main(){
    float putaran = 5;
    float jarak_total = 14;
    float keliling = jarak_total / putaran;
    float jarijari = keliling / (2 * 3.14);
    printf("Diketahui:\n");
    printf("Pak Dengklek mengelilingi taman = %.f Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.f Kilometer\n", jarak_total);
    printf("\n");
    printf("Jawaban:\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", jarijari);
    return 0;
}