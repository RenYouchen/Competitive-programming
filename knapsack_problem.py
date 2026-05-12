cap = 8
weight = [3, 2, 4, 5, 1]
value = [50, 40, 70, 80, 10]

def dp_knapsack(cap, weights, values):
    row = len(weights) + 1
    col = cap + 1
    dp = [[0] for i in range(row)]
    for i in range(row):
        dp[i] = [None for i in range(col)]
        for j in range(col):
            if i == 0 or j == 0:
                dp[i][j] = 0
            elif weights[i-1] > j:
                dp[i][j] = dp[i-1][j]
            else:
                include_item = value[i-1] + dp[i-1][j - weights[i-1]]
                exclude_item = dp[i-1][j]
                dp[i][j] = max(include_item, exclude_item)
    print(dp)
    return dp[-1][cap]

print(dp_knapsack(cap, weight, value))
