#include<stdio.h>
#include<string.h>

int main(){
	int def=0x13371337;
	int key[13]={0xDEADBEEF,0x9F1810DE,0xDE9250C4,0x95323EB9,0x03906B0C,0x7E1A318A,0x1b7c6a1b,0x873F48Ad,0xfb844c29,0xA31E3c94,0x0f9e6502,0x7c282aa9,0x147c5f12};
	int tmp,k;
	for(int i=0;i<=11;i++){
		tmp=(key[i+1]-def)^key[i];
		for (int j = 0; j <= 24;){
    		printf("%c",(tmp >> j) & 0xFF);
    		j=j+8;
    		k++;
		}
	}
}
