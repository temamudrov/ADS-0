// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    // поместить сюда текст реализации алгоритма (на С++)
    int nod = 0;
    for (int i = 1; i <= a; i++)
        if (a % i == 0 && b % i == 0)
        nod = i;
    return nod;
}
