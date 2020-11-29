#include<stdio.h>
float creditcalculate(float point,float credit ) ;
int main() {
	int i, sum = 0 ,number = 3 ;
	float credit, mul = 0 ;
	float point ;
	printf( "--------------------------------------------------------" ) ;
	printf( "\nNo./Point.   Credit.    Grade.   Mulyiply." );
	printf( "\n--------------------------------------------------------\n" ) ;
	for( i = 1 ; i <= number ; i++ ) {
		printf( "     %d.",i ) ;
		printf( "        " );
		scanf( "%f %f",&credit, &point ) ;
		sum = sum + number ;
		mul = mul + creditcalculate(point,credit) ;
	}
	printf( "\n--------------------------------" ) ;
	printf( "\nYour Grade : %.2f",mul / sum ) ;
	
	return 0 ;
}

float creditcalculate( float point,float credit ) {
	float multi ;
	while( point <=49 ){
			printf( "\t\t\t   F       %.2f\n\n",credit*0 ) ;
			multi = credit*0  ;
			break ;		
	}
	while( point < 55 && point >= 50 ){
			printf( "\t\t\t   D       %.2f\n\n",credit*1 ) ;
			multi = credit*1 ;
			break ;
	}
	while( point < 60 && point >= 55 ){
			printf( "\t\t\t   D+       %.2f\n\n",credit*1.5 ) ;
			multi = credit*1.5 ;
			break ;
	}
	while( point < 65 && point >= 60 ){
			printf( "\t\t\t   C       %.2f\n\n\n\n",credit*2 ) ;
			multi = credit*2 ;
			break ;
	}
	while( point < 70 && point >= 65 ){
			printf( "\t\t\t   C+       %.2f\n\n",credit*2.5 ) ;
			multi = credit*2.5 ;
			break ;
	}
	while( point < 75 && point >= 70 ){
			printf( "\t\t\t   B       %.2f\n\n",credit*3 ) ;
			multi = credit*3 ;
			break ;
	}
	while( point < 80 && point >= 75 ){
			printf( "\t\t\t   B+       %.2f\n\n",credit*3.5 ) ;
			multi = credit*3.5;
			break ;
	}
	while( point >= 80 ){
			printf( "\t\t\t   A       %.2f\n\n",credit*4 ) ;
			multi = credit*4 ;
			break ;
	}		
	return multi ;
}