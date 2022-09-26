#include <iostream>

int divide_by_two(int x){
    return x>>=1;
}

int multiply_two(int x){
    return x<<=1;
}

int clear_lsb(int x){
    return x&(x-1);
}

int show_lsb(int x){
    return x & ~(x-1);
}

int set_lowest_cleared_bit(int x){
    return x | (x+1);
}

int show_lowest_cleared_bit(int x){
    return x | ~(x+1);
}

int clear_lsb_till_ith(int x, int i){
    int mask = ~((1<<i+1)-1);
    x &= mask;
    return x;
}

int keep_lsb_till_ith(int x, int i){
    int mask = ((1<<i+1)-1);
    x&=mask;
    return x;
}

int clear_msb_till_ith(int x, int i){
    int mask = ((1<<i)-1);
    x&=mask;
    return x;
}

int keep_msb_till_ith(int x, int i){
    int mask = ~((1<<i)-1);
    x&=mask;
    return x;
}

bool check_power_of_two_m1(int x){
    if ((x && !(x & (x-1)))==1) return true;
    else return false;
}

bool check_power_of_two_m2(int x){
    if ((x & (x-1))==0) return true;
    else return false;
}

int clear_run_of_set_bits_from_ith(int x, int i){
    return x & (x + (1<<i));
}

int run_of_set_bits_from_ith(int x, int i){
    return x & ~(x + (1<<i));
}

int run_of_clear_bits_from_ith(int x, int i){
    return x | ~(x - (1 << i));
}
