#include <iostream>
#include <math.h>
#include <ctime>

using namespace std;

int main() {
	int start_s = clock();
	cout << "start";
	
	int prime[1230] = {3, 5, 7};

	int a = 3, count = 0, j = 0, num = 0;    	//num refers to number of primes between 1 & 100 milion.

	for(int i = 9; i <= 100; i = (i + 2)){
		if((i % 3 != 0) && (i % 5 != 0) && (i % 7 != 0)){
			cout << i << " ";
			prime[a] = i;
			a++;
			num++;	
		}
	}
	
	for(int i = 101; i <= 10000; i = (i + 2)){
		YES :count = 0, j = 0;
		while(prime[j] * prime[j] <= i){
			if(j >= a){
				cout << i << " ";
				prime[a] = i;
				i = (i + 2);
				a++;
				num++;
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
			num++;
		}
	}
	
	for(int i = 10001; i <= 100000000; i =	(i + 2)){
		YESS :count = 0, j = 0;
		while(prime[j] * prime[j] <= i){
			if(j >= a){
				cout << i << " ";
				i = (i + 2);
				num++;
				goto YESS;
			}

			if(i % prime[j] == 0){
				count++;
				break;
			}
			j++;
		}

		if(count == 0){
			num++;
			cout << i << " ";
		}

	}
	
	cout << "end \n";
	int stop_s = clock();
	cout << " \n time : " <<(stop_s-start_s)/double(CLOCKS_PER_SEC)<< endl << num << endl;

	return 0;
}
