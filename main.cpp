#include <iostream>
#include <tuple>
#include <vector>
#include <string>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol213;

/* Example 1:
Input: m = 3, n = 2
Output: 3
Explanation:
From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
1. Right -> Right -> Down
2. Right -> Down -> Right
3. Down -> Right -> Right
*/
tuple<int, int, int>
testFixture1()
{
  return make_tuple(3, 2, 3);
}

/* Example 2:
Input: m = 7, n = 3
Output: 28

*/
tuple<int, int, int>
testFixture2()
{
  return make_tuple(7, 3, 28);
}

void test1()
{
  auto f = testFixture1();
  cout << "Test 1 - exepct to see " << get<2>(f) << endl;
  Solution sol;
  cout << sol.uniquePaths(get<0>(f), get<1>(f)) << endl;
}

void test2()
{
  auto f = testFixture2();
  cout << "Test 1 - exepct to see " << get<2>(f) << endl;
  Solution sol;
  cout << sol.uniquePaths(get<0>(f), get<1>(f)) << endl;
}

main()
{
  test1();
  test2();

  return 0;
}