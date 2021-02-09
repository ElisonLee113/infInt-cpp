#include <bits/stdc++.h>
#include "infInt.h"
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    infInt i1(s1), i2(s2);
    infInt result = i1 / i2;
    result.print_value();
}
