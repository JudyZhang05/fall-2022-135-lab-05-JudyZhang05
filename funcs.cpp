#include <iostream>
#include "funcs.h"

// add functions here

bool isDivisibleBy(int n, int d){

    if (n % d == 0){
        return true;
    }
    else{
        return false;
    }
}

bool isPrime(int n){

    int result = 0;
    
    for ( int i = 2; i < n - 1; i++){
        if ( n % i == 0 ){
            result+=1;
        }
    }
    if (result > 0 || n < 2 ){
        return false;
    }
    else{
        return true;
    }

}

int nextPrime(int n){
    bool result = false;
    
    while (result == false){
        n+=1;
        for ( int i = 2; i < n - 1; i++){
            if ( n % i == 0 ){
                result+=1;
            }
        }
        if (result > 0 || n < 2){
            result = false;
        }
        else{
            result = true;
        }
    }
    return n; 
}

int countPrimes(int a, int b){
    bool outcome = false; int num = 0; int result = 0;
    
    while (a != b){
        for ( int i = 2; i < a - 1; i++){
            if ( a % i == 0 ){
                num+=1;
            }
        }
        if (num > 0 || a < 2 ){
            outcome = false;
            num = 0;
        }
        else{
            outcome = true;
            result+=1;
        }
        a+=1;
    }
    return result; 
}

bool isTwinPrime(int n){
    bool prime = false;
    
    for ( int i = 2; i < n - 1; i++){
        if ( n % i == 0 ){
            prime+=1;
        }
    }
    if (prime > 0  || n < 2){
        return false;
    }
    else{
        prime = true;
    }

    int twin = n + 2; bool outcome = false; bool loop = false; int num = 0;
    
    while (loop == false){
        if (twin == n - 2){
                loop = true;
            }
        for ( int i = 2; i < twin - 1; i++){
            if ( twin % i == 0 ){
                num+=1;
            }
        }
        if (num > 0 || twin < 3){
            outcome += false;
        }
        else{
            outcome += true;
        }
        twin -= 4;
        num = 0;
    }
        if (outcome == true){
            return true;
        }
}

int nextTwinPrime(int n){
    bool prime = false;
    
    while (prime == false){
        n+=1;
        for ( int i = 2; i < n - 1; i++){
            if ( n % i == 0 ){
                prime+=1;
            }
        }
        if (prime > 0 || n < 2 ){
            prime = false;
        }
        else{
            prime = true;
        }
    }

    int twin = n + 2; bool outcome = false; bool loop = false; int num = 0;
    
    while (loop == false){
        if (twin == n - 2){
                loop = true;
            }
        for ( int i = 2; i < twin - 1; i++){
            if ( twin % i == 0 ){
                num+=1;
            }
        }
        if (num > 0 || twin < 3){
            outcome += false;
        }
        else{
            outcome += true;
        }
        twin -= 4;
        num = 0;
    }
        if (outcome == true){
            return true;
        }
        else{
            return false;
        }
}

int largestTwinPrime(int a, int b){
    bool prime = false; int result; int greater = 0; int valid = 0; int length = b-a;
    
    while ( a < b ){
        while (prime == false){
            for ( int i = 2; i < a - 1; i++){
                if ( a % i == 0 ){
                    greater+=1;
                }
            }
            if ( a == b ){
                prime = true;
            }
            else if (greater > 0 || a < 2){
                a+=1;
                greater = 0;
                valid+=1;
            }
            else{
                prime = true;
            }
        }

        int twin = a + 2; bool outcome = false; bool loop = false; int num = 0;
        
        while (loop == false){
            if (twin == a - 2){
                    loop = true;
                }
            for ( int i = 2; i < twin - 1; i++){
                if ( twin % i == 0 || twin < 3){
                    num+=1;
                }
            }
            if (num > 0 || twin < 3){
                outcome += false;
            }
            else{
                outcome += true;
            }
            twin -= 4;
            num = 0;
        }
            if (outcome == true){
                result = a;
                valid = 0;
            }
            else if (valid == length && a == b){
                return -1;
            }
            else{
                valid+=1;
            }
        a+=1;
        prime = false;
    }
    return result;
}