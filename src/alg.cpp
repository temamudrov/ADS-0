// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int nod = 0;
    for (int i = a; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            nod = i;
            break;
        }
    }
    return nod;
}
