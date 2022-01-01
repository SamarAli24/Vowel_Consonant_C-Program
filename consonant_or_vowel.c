#include<stdio.h>
int main ()

{
	
 char v;
 int s_vowel, b_vowel;
 
 
  printf("Enter Alphabet : ");
  scanf("%c",&v);
  	
 b_vowel=(v=='a'  || v=='e' || v=='i' || v=='o' || v=='u');
 s_vowel=(v=='A'  || v=='E' || v=='I' || v=='O' || v=='U');
 
 if( b_vowel||s_vowel)
 {
 	printf("%c is vowel",v);
	 }	
	
 else
	{
		printf("%c is consonant",v);
	}
	
	
	
	return 0;
}
