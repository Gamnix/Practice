//
//  Assign1
//  Created by Gambhir Shrestha on 2/18/14.
//  Copyright (c) 2014 Gambhir Shrestha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()

{
    int a,i, product;
    
    cout << "Multipication Table" << endl;
    cout << "Enter number to find the multiplication table" <<endl ;
    cin >> a;
    
    for(i=1 ;i<=10 ;i++)
    {
        product = (a * i);
    cout << a << " * " <<i << " = " << product <<endl ;
    }
    return 0;
}

