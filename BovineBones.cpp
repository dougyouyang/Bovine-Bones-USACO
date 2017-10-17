//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>

using namespace std;
int num[100], lar=0, p;

int main()
{
    int s1, s2, s3;
    int i, j, k;
    
    cin >> s1 >> s2 >> s3;
    
    for(i=1;i<=s1;i++)
        for(j=1;j<=s2;j++)
            for(k=1;k<=s3;k++)
                num[i+j+k]++;
    
    for(i=1;i<100;i++)
        if(num[i]>lar)
            lar=num[i], p=i;
    cout << p << endl;
    
    return 0;
}
