void makeSwap(int *a, int *b) {

	int temp;
	temp = *b;
	*b = *a;
	*a = temp;
}
/*
 * swap without using temp variable
 * 1
 void makeSwap(int *a , int *b )
 {
 *a = *a+*b ;
 *b =  *a - *b ;
 *a =  *a - *b ;

 }
 * 2
 void makeSwap(int *a , int *b )
 {
 *a = *a^*b ;
 *b =  *a ^ *b ;
 *a =  *a ^ *b ;

 }
 */

