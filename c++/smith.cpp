#include <iostream>
#include <vector>

using namespace std;

int prim[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61};
vector <unsigned int> smith;
vector <unsigned int> prime;
vector <unsigned int> primesum;
unsigned int max = 0;


void init (void)
{
    prime.push_back(2); primesum.push_back(2);
    prime.push_back(3); primesum.push_back(3);
    prime.push_back(5); primesum.push_back(5);
    prime.push_back(7); primesum.push_back(7);
    prime.push_back(11); primesum.push_back(2);
    prime.push_back(13); primesum.push_back(4);
    prime.push_back(17); primesum.push_back(8);
    prime.push_back(19); primesum.push_back(10);
    prime.push_back(23); primesum.push_back(5);
    prime.push_back(29); primesum.push_back(11);
    prime.push_back(31); primesum.push_back(4);
    prime.push_back(37); primesum.push_back(10);
    prime.push_back(41); primesum.push_back(5);
    prime.push_back(43); primesum.push_back(7);
    prime.push_back(47); primesum.push_back(10);
    prime.push_back(53); primesum.push_back(8);
    prime.push_back(59); primesum.push_back(14);
    prime.push_back(61); primesum.push_back(7);
    max = 61;

}
unsigned int sumdigit (unsigned int num)
{
    unsigned int temp = num, sum = 0;
    while (temp)
    {
        sum = sum + (temp % 10);
        temp /= 10;
    }
     return sum;
}

bool isprime (unsigned int num)
{
    unsigned int i = 0;

    for (i=0; i<num/2; i++)
        if (num % i) continue;
        else return false;

    // Number's prime number
    return true;
}

int main(void)
{
    unsigned int testcase = 0, l, r, i;
    init();

    // Read the num testcase
    cin >> testcase;
    cin.ignore();

    // Read the input
    do {

        cin >> l;
        cin.ignore();
        cin >> r;
        cin.ignore();

        // Start to find the Smith numbers
        for (i=l; i<=r; i++)
        {
            sumnum1 = sumdigit(i);
            sumnum2 = 0;

            // is the ith number a smith number
            temp = i;
            for (j=0; (j<=prime.size()) && (i<max); j++)
            {
                while (temp % prime[j]) 
                {
                    temp = temp / prime[j];
                    sumnum2 += primesum[j];
                }
            }

            // Our Databse doesn't have all prime factors for this number
            if (temp > 1) {
                for (j=max; (j<=temp) && (temp != 1); j++)
                {
                    // Does current j is a factor of temp
                    if (temp % j) continue;

                    // yes it is, then is it prime factor
                    else {

                        // yes its a prime factor
                        if (isprime(j)) {

                            sumnum2 += sumdigit(j);
                            temp = temp/j;
                        } else continue;
                    }
                }
            }
        }

    } while (--testcase);

}
