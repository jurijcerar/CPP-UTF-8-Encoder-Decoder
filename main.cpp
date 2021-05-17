#include <iostream>

void dec_to_bin(char* binary,int num){

    int i=31;
    while (num > 0){

        if (num % 2 == 0) {
            binary[i] = '0';
        }
        else{
            binary[i] = '1';
        }
        num /= 2;
        i--;
    }
}

int pow (int i){

    int num=1;

    for (int j=0; j < i; j++){
        num*=2;
    }
    return num;
}

void bin_to_hex(const char* encoding){

    int num=0;
    int j=31;

    for (int i = 0; i < 32; ++i) {

        if (encoding[i] == '1'){
            num+=pow(j);
        }
        j--;
    }

    std::cout <<"Hex oblika: "<< std::hex << num;
}

void utf8(char* encoding, int num, const char* binary){
    std::cout<<"Bin oblika: ";

    if ( num >= 0 && num < 128 ) {

        for (int i = 31; i > 24; i--) {
            encoding[i] = binary [i];
        }

        for (int i = 24; i < 32; i++) {
            std::cout<<encoding[i];
        }

    }

    else if ( num >= 128 && num < 2048 ) {

        int j = 31;

        for (int i = 31; i >= 16; i--) {

            if(i == 16 || i == 17 || i== 24 ) {
                encoding[i]='1';
            }

            else if(i == 18 || i == 25) {
                encoding[i]='0';
            }

            else {
                encoding[i] = binary[j];
                j--;
            }
        }

        for (int i = 16; i < 32; i++) {
            std::cout<<encoding[i];
        }
    }

    else if ( num >= 2048 && num < 65536 ) {

        int j = 31;

        for (int i = 31; i >= 8; i--) {

            if( i == 8 || i == 9 || i== 10 || i == 16 || i==24 ) {
                encoding[i]='1';
            }

            else if( i == 11 || i == 17 || i == 25 ) {
                encoding[i]='0';
            }

            else {
                encoding[i] = binary[j];
                j--;
            }
        }

        for (int i = 8; i < 32; i++) {
            std::cout<<encoding[i];
        }
    }

    else if ( num >= 65536 && num < 1112064 ) {

        int j = 31;

        for (int i = 31; i >= 0; i--) {

            if( i == 0 || i == 1 || i== 2 || i == 3 || i == 8 || i == 16 || i == 24 ) {
                encoding[i]='1';
            }

            else if( i == 4 || i == 9 || i == 17 || i == 25) {
                encoding[i]='0';
            }

            else {
                encoding[i] = binary[j];
                j--;
            }
        }

        for (int i = 0; i < 32; i++) {
            std::cout<<encoding[i];
        }
    }
}

void utf8dec( const char* binary){
    std::cout<<"Dec oblika: ";

    if ( binary[0]=='1' && binary[1]=='1' || binary[2]=='1' && binary[3]=='1' && binary[4]=='0' ) {

        int numb=0;
        int j=0;

        for (int i = 31; i >= 0; i--) {

            if (binary[i] == '1') {
                if(i == 0 || i == 1 || i == 2 || i == 3 || i == 8 || i == 16 || i == 24 ){
                    j--;
                }

                else{
                    numb+=pow(j);
                }
            }
            else if( i == 4 || i == 9 || i == 17 || i == 25) {
                j--;
            }
            j++;
        }

        std::cout << numb;
    }

    else if ( binary[8]=='1' && binary[9]=='1' && binary[10]=='1' && binary[11]=='0' ) {

        int numb=0;
        int j=0;

        for (int i = 31; i >= 0; i--) {

            if (binary[i] == '1') {
                if( i == 8 || i == 9 || i == 10 || i == 16 || i == 24 ){
                    j--;
                }

                else{
                    numb+=pow(j);
                }
            }
            else if( i == 11 || i == 17 || i == 25 ) {
                j--;
            }
            j++;
        }

        std::cout << numb;
    }

    else if ( binary[16]=='1' && binary[17]=='1' && binary[18]=='0' ) {

        int numb=0;
        int j=0;

        for (int i = 31; i >= 0; i--) {

            if (binary[i] == '1') { //25 in 18 nista ena zato to spremeni
                if ( i == 16 || i == 17 || i == 24){
                    j--;
                }
                else{
                    numb+=pow(j);
                }
            }
            else if( i == 18 || i == 25) {
                j--;
            }
            j++;

        }

        std::cout << numb;
    }

    else if ( binary[24]== '0' ) {

        int numb=0;
        int j=31;

        for (int i = 0; i < 32; ++i) {

            if (binary[i] == '1'){
                numb+=pow(j);
            }
            if (i==0){
                j++;
            }
            j--;
        }
        std::cout << numb;
    }

}

int bin_to_dec(long long num)
{
    long long dec_value = 0;
    int base = 1;
    int digits = 0;

    long long temp = num;
    while (temp) {
        long long last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
        digits++;
    }
   /* if(digits < 8) {
        return 0;
    }*/
    return (int) dec_value;
}

int main() {
    
    char encoding[32];
    char binary[32];
    int choice;

    for (int i = 0; i < 32; ++i) {
        encoding[i] = '0';
        binary[i] = '0';
    }

    std::cout << "Ali zelite kodirati (1) ali dekodirati (2) ? ";
    std::cin>>choice;

    if(choice == 1) {
        bool running = true;
        int num;

        while (running) {

            std::cout << "Vpisi v katerem sistemu bos vpisoval stevila: \n";
            std::cout << "1. Decimalnem \n";
            std::cout << "2. Hexdecimalnem \n";
            std::cout << "3. Binarnem \n";
            std::cout << "Tvoja izbira od 1 do 3: ";
            std::cin >> num;

            switch (num) {

                case 1:
                    std::cout << "Vnesi decimalno stevilo: ";
                    std::cin >> num;
                    if(num<33 || num == 127){
                        std::cout << "To je kontrolni znak z kodo: "<<num<<"\n";
                        return 0;
                    }
                    dec_to_bin(binary, num);
                    running = false;
                    break;
                case 2:
                    std::cout << "Vnesi hexdecimalno stevilo: ";
                    std::cin >> std::hex >> num >> std::dec;
                    dec_to_bin(binary, num);
                    running = false;
                    break;
                case 3:
                    std::cout << "Vnesi binarno stevilo: ";
                    long long bini;
                    std::cin >> bini;
                    num = bin_to_dec(bini);
                    dec_to_bin(binary, num);
                    running = false;
                    break;
                default:
                    std::cout << "Neveljavna izbira!";
                    break;
            }
        }

        utf8(encoding, num, binary);
        std::cout << "\n";
        bin_to_hex(encoding);
    }

    else {

        bool running = true;
        int num;

        while (running) {

            std::cout << "Vpisi v katerem sistemu bos vpisoval stevila: \n";
            std::cout << "1. Hexdecimalnem \n";
            std::cout << "2. Binarnem \n";
            std::cout << "Tvoja izbira od 1 do 2: ";
            std::cin >> num;

            switch (num) {

                case 1:
                    std::cout << "Vnesi hexdecimalno stevilo: ";
                    std::cin >> std::hex >> num >> std::dec;

                    if(num == 0xff || num == 0xfe){
                        std::cout<<"Napaka! Te vrednosti ne moremo pretvorit!\n";
                    }

                    else if ( num < 0x7f ){
                        std::cout<<"Napaka stevilo je premajhno za byte nabor!\n";
                    }

                    else {
                        dec_to_bin(binary, num);
                        running = false;
                    }
                    break;
                case 2:
                    std::cout << "Vnesi binarno stevilo: ";
                    long long bini;
                    std::cin >> bini;

                    if(bini == 11111111 || bini == 11111110){
                        std::cout<<"Napaka! Te vrednosti ne moremo pretvorit!\n";
                    }
                    
                    else {
                        num = bin_to_dec(bini);
                        if (num == 0){
                            std::cout<<"Napaka! Te vrednosti ne moremo pretvorit, ker ne zaseda vsaj enega bytea!\n";
                        }
                        else {
                            dec_to_bin(binary, num);
                            running = false;
                        }
                    }
                    break;
                default:
                    std::cout << "Neveljavna izbira!\n";
                    break;
            }
        }
        utf8dec(binary);
    }
    return 0;
}
