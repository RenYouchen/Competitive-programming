dna_1 = "ACCGTT"
dna_2 = "CCAGCA"

def longest_common_subsequence(str1, str2):
  row = len(dna_1) + 1
  col = len(dna_2) + 1
  grid = [[0 for i in range(col)] for j in range(row)]

  for i in range(1, row):
    # print(f"Comparing: {str1[i-1]}")
    for j in range(1, col):
      # print(f"Against: {str2[j-1]}")
      if str1[i-1] == str2[j-1]:
        grid[i][j] = grid[i-1][j-1] + 1
      else:
        grid[i][j] = max(grid[i-1][j], grid[i][j-1])
  for row_line in grid:
    print(row_line)
  # backtrace
  result = []
  while i > 0 and j > 0:
    if str1[i-1] == str2[j-1]:
      result += str1[i-1]
      i -= 1
      j -= 1
    else:
      if grid[i][j-1] > grid[i-1][j]:
        j-=1
      else:
        i-=1
  result.reverse()
  print("".join(result))


longest_common_subsequence(dna_1, dna_2)
