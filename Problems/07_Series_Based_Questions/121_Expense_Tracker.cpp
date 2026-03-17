/*
Q7. Income, Expenditure and Savings Tracker ■ VERIFIED PYQ [Medium]
Problem Write a program that continuously takes user input: - Income (amount earned) - Type of Material (category of expenditure) - 
Expenditure on that Material (amount spent) The input continues until the user enters "done". Then display: 1. Total income 
2. Total savings (Income - Total Expenditure) 3. List of where money was spent with respective amounts
Sample Input
5000
Food
1200
Rent
2000
done
Sample Output
Total Income: 5000
Total Savings: 1800
Food: 1200
Rent: 2000


TEST CASES:
10
5000
Food
1200
Rent
2000
done
1000
done
2000
Food
2000
done
3000
Groceries
500
Rent
1500
Taxes
1000
done
500
Candy
100
Candy
100
Candy
100
done
10000
Bills
0
done
100
ExpensiveGift
150
done
5000
Utilities
1200.50
Food
800.75
done
1000
A
100
B
200
A
50
done
0
done

OUTPUT:
Total Income: 5000
Total Savings: 1800
Food: 1200
Rent: 2000

Total Income: 1000
Total Savings: 1000

Total Income: 2000
Total Savings: 0
Food: 2000

Total Income: 3000
Total Savings: 0
Groceries: 500
Rent: 1500
Taxes: 1000

Total Income: 500
Total Savings: 200
Candy: 300

Total Income: 10000
Total Savings: 10000
Bills: 0

Total Income: 100
Total Savings: -50
ExpensiveGift: 150

Total Income: 5000
Total Savings: 2998.75
Food: 800.75
Utilities: 1200.5

Total Income: 1000
Total Savings: 650
A: 150
B: 200

Total Income: 0
Total Savings: 0

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--) {
        double income;
        cin >> income;
        double expenditure = 0;
        map<string, double> mp;
        string str;
        while((cin >> str) && (str != "done")) {
            double cost;
            cin >> cost;
            mp[str] += cost;
            expenditure += cost;
        }
        cout << "Total Income: " << income << "\n";
        cout << "Total Savings: " << (income - expenditure) << "\n";
        for(auto& [key, value]:mp) cout << key << ": " << value << "\n";
        cout << "\n";
    }
    return 0;
}