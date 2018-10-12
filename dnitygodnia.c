#include "stdio.h"
int main(){
	enum dni{
		ni, po, wt, sr, cz, pi, so
};
enum dni dzien_tygodnia;
dzien_tygodnia = wt;

printf("%i", dzien_tygodnia);

}
