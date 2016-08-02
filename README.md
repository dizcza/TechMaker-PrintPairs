## Benchmarks (ms):

| N          | brute  | hash   | 2 pointers |   flag      |
|------------|--------|--------|------------|-------------|
| 100 000    | 0      | 28     | 5          | the_same    |
| 100 000    | 1      | 29     | 6          | one_pair    | 
| 100 000    | 15 911 | 66     | 59         | random      |
| 100 000    | 23 035 | 64     | 73         | descending  |

| N          | brute  | hash   | 2 pointers |   flag      |
|------------|--------|--------|------------|-------------|
| 1 000 000  | XXXXX  | 269    | 60         | the_same    |
| 1 000 000  | XXXXX  | 268    | 60         | one_pair    |
| 1 000 000  | XXXXX  | 847    | 705        | random      |
| 1 000 000  | XXXXX  | 957    | 928        | descending  |

| N          | brute  | hash   | 2 pointers |   flag      |
|------------|--------|--------|------------|-------------|
| 10 000 000 | XXXXX  | 2 692  | 1 069      | the_same    |
| 10 000 000 | XXXXX  | 2 682  | 1 215      | one_pair    |
| 10 000 000 | XXXXX  | 8 755  | 8 639      | random      |
| 10 000 000 | XXXXX  | 11 427 | 10 989     | descending  |
