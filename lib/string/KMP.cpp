vector<int> A(s.size()+1);
A[0] = -1;
int j = -1;
for (int i = 0; i < s.size(); i++) {
    while (j >= 0 && s[i] != s[j]) j = A[j];
    j++;
    A[i+1] = j;
}
