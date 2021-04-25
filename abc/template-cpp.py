import os

print("Input folder name like 'ABC000'")
folder = input()

os.mkdir('./{}'.format(folder))
for s in ['a', 'b', 'c', 'd', 'e']:
    with open('./{0}/CPP/{1}.cpp'.format(folder, s), mode='w') as f:
        f.write(
            "#include <bits/stdc++.h>\n#define rep(i, n) for (int i = 0; i < (int)(n); i++)\nusing namespace std;\nusing ll = long long;\nusing P = pair<int, int>;\nconst int MOD = 1E9 + 7;\nconst int INF = 1<<29; \n\nint main(){\n\n}"
        )
