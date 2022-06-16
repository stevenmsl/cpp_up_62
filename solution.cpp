#include "solution.h"
#include "util.h"
#include <unordered_map>
#include <algorithm> //lower_bound
#include <string>
#include <queue>
#include <sstream>
#include <functional>
#include <math.h>

using namespace sol213;
using namespace std;

/*takeaways
  - DP
  - time complexity: O(mn)
*/

int Solution::uniquePaths(int m, int n)
{
  /* number of unique paths arriving at (i,j)
     - add an additional row and column to simplify
       the logic
  */
  auto dp = vector<vector<int>>(m + 1, vector<int>(n + 1, 0));

  /* initial condition */
  dp[1][1] = 1;

  for (auto i = 1; i <= m; i++)
    for (auto j = 1; j <= n; j++)
    {
      if (i == 1 && j == 1)
        continue;
      /* walking down from the top or
         walking right from the left
      */
      dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
    }
  return dp[m][n];
}
