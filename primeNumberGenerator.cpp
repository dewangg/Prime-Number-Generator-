#include <iostream>
#include <math.h>
#include <ctime>

using namespace std;

int main() {
	int start_s = clock();
	cout << "start";
	
	register int prime[1230] = {3, 5, 7}; 

	register int a = 3;

	for(register int i = 9; i <= 100; i = (i + 2)){
		if((i % 3 != 0) && (i % 5 != 0) && (i % 7 != 0)){
			cout << i << " ";
			prime[a] = i;
			a++;	
		}
	}

	// cout << endl;
    // cout << endl<<endl;
	
	for(register int i = 101; i <= 10000; i = (i + 2)){
		YES :int count = 0, j = 0;
		while(prime[j] <= sqrt(i)){
			if(j >= a){
				cout << i << " ";
				prime[a] = i;
				i = (i + 2);
				a++;
				goto YES;
			}

		    	if(i % prime[j] == 0){
				count++;
				break;
			}
			j++;
		}

		if(count == 0){
			cout << i << " ";
			prime[a] = i;
			a++;
		}
	}
	
	for(register int i = 10001; i <= 100000000; i =	(i + 2)){
		YESS :int count = 0, j = 0;
		while(prime[j] <= sqrt(i)){
			if(j >= a){
				cout << i << " ";
				i = (i + 2);
				goto YESS;
			}

			if(i % prime[j] == 0){
				count++;
				break;
			}
			j++;
		}

		if(count == 0){
			cout << i << " ";
		}

	}
	
	cout << "end";
	int stop_s = clock();
	cout << "time : " <<(stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;

	return 0;
}
