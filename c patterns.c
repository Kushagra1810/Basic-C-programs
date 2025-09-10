// Right Half pyramid
#include <stdio.h>

int main() {
    int n;
    printf("Rows: "); scanf("%d", &n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++) putchar('*');
        putchar('\n');
    }
    return 0;


// Left Half pyramid
#include <stdio.h>

int main(){
    int n; printf("Rows: "); scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int s=0;s<n-i;s++) putchar(' ');
        for(int j=0;j<i;j++) putchar('*');
        putchar('\n');
    }
    return 0;
}

// Full Pyramid(Centrred)
#include <stdio.h>

int main(){
    int n; printf("Rows: "); scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int s=0;s<n-i;s++) putchar(' ');
        for(int j=0;j<2*i-1;j++) putchar('*');
        putchar('\n');
    }
    return 0;
}

// Inverted Right Half Pyramid
#include <stdio.h>

int main(){
    int n; printf("Rows: "); scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=0;j<i;j++) putchar('*');
        putchar('\n');
    }
    return 0;
}

// Inverted Left Half Pyramid
#include <stdio.h>

int main(){
    int n; printf("Rows: "); scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int s=0;s<n-i;s++) putchar(' ');
        for(int j=0;j<i;j++) putchar('*');
        putchar('\n');
    }
    return 0;
}

// Inverted Full Pyramid
#include <stdio.h>

int main(){
    int n; printf("Rows: "); scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int s=0;s<n-i;s++) putchar(' ');
        for(int j=0;j<2*i-1;j++) putchar('*');
        putchar('\n');
    }
    return 0;
}

// Rhombus Pattern (solid)
#include <stdio.h>

int main(){
    int n; printf("Side length (rows): "); scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int s=0;s<n-i;s++) putchar(' ');
        for(int j=0;j<n;j++) putchar('*');
        putchar('\n');
    }
    return 0;
}

// Diamond Pattern (solid)
#include <stdio.h>

int main(){
    int n; printf("Half height: "); scanf("%d",&n); // diamond height = 2*n-1
    // upper
    for(int i=1;i<=n;i++){
        for(int s=0;s<n-i;s++) putchar(' ');
        for(int j=0;j<2*i-1;j++) putchar('*');
        putchar('\n');
    }
    // lower
    for(int i=n-1;i>=1;i--){
        for(int s=0;s<n-i;s++) putchar(' ');
        for(int j=0;j<2*i-1;j++) putchar('*');
        putchar('\n');
    }
    return 0;
}

// Hourglass Pattern (solid X-like)
#include <stdio.h>

int main(){
    int n; printf("Odd size n: "); scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (j==i || j==n-1-i) putchar('*'); else putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}

// Hollow Square Pattern
#include <stdio.h>

int main(){
    int n; printf("Size: "); scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n) putchar('*'); else putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}

// Hollow Full Pyramid
#include <stdio.h>

int main(){
    int n; printf("Rows: "); scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int s=0;s<n-i;s++) putchar(' ');
        for(int j=1;j<=2*i-1;j++){
            if(i==n || j==1 || j==2*i-1) putchar('*');
            else putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}

// Hollow Inverted Full Pyramid
#include <stdio.h>

int main(){
    int n; printf("Rows: "); scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int s=0;s<n-i;s++) putchar(' ');
        for(int j=1;j<=2*i-1;j++){
            if(i==n || j==1 || j==2*i-1) putchar('*');
            else putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}

// Hollow Diamond Pyramid (hollow diamond)
#include <stdio.h>

int main(){
    int n; printf("Half height: "); scanf("%d",&n); // diamond height = 2*n-1
    for(int i=1;i<=n;i++){
        for(int s=0;s<n-i;s++) putchar(' ');
        for(int j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1) putchar('*'); else putchar(' ');
        }
        putchar('\n');
    }
    for(int i=n-1;i>=1;i--){
        for(int s=0;s<n-i;s++) putchar(' ');
        for(int j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1) putchar('*'); else putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}

// Hollow Hourglass Pattern (hollow X with border)
#include <stdio.h>

int main(){
    int n; printf("Odd size n: "); scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (j==i || j==n-1-i || i==0 || i==n-1 || j==0 || j==n-1) putchar('*');
            else putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}

// Floyd's Triangle
#include <stdio.h>

int main(){
    int n; printf("Rows: "); scanf("%d",&n);
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ", num++);
        }
        putchar('\n');
    }
    return 0;
}

// Pascal's Triangle
#include <stdio.h>

int main(){
    int n; printf("Rows: "); scanf("%d",&n);
    for(int i=0;i<n;i++){
        unsigned long long c = 1;
        for(int s=0;s<n-i-1;s++) putchar(' ');
        for(int j=0;j<=i;j++){
            printf("%llu ", c);
            c = c * (i - j) / (j + 1); // next binomial coefficient
        }
        putchar('\n');
    }
    return 0;
}

// Left-increasing numbers (column at left)
#include <stdio.h>

int main() {
    int n;
    printf("Rows (e.g. 10): ");
    if (scanf("%d", &n)!=1) return 0;

    for (int i = 1; i <= n; ++i) {
        for (int x = 1; x <= i; ++x)
            printf("%d", x);
        putchar('\n');
    }
    return 0;
}

// Centered number pyramid (1..i centered)
#include <stdio.h>

int main() {
    int n;
    printf("Rows (e.g. 6): ");
    if (scanf("%d", &n)!=1) return 0;

    for (int i = 1; i <= n; ++i) {
        
        for (int s = 0; s < n - i; ++s) putchar(' ');
        
        for (int x = 1; x <= i; ++x) printf("%d", x);
        putchar('\n');
    }
    return 0;
}

// Double-sequence diamond
#include <stdio.h>

int main() {
    int n;
    printf("Max i (e.g. 6): ");
    if (scanf("%d", &n)!=1) return 0;

    
    for (int i = 1; i <= n; ++i) {
        for (int s = 0; s < n - i; ++s) putchar(' ');
        for (int x = 1; x <= i; ++x) printf("%d", x);
        for (int x = 1; x <= i; ++x) printf("%d", x); 
        putchar('\n');
    }
    

    for (int i = n - 1; i >= 1; --i) {
        for (int s = 0; s < n - i; ++s) putchar(' ');
        for (int x = 1; x <= i; ++x) printf("%d", x);
        for (int x = 1; x <= i; ++x) printf("%d", x);
        putchar('\n');
    }
    return 0;
}

// Pyramid of repeated 10 blocks

#include <stdio.h>

int main() {
    int n;
    printf("Rows (e.g. 6): ");
    if (scanf("%d", &n)!=1) return 0;

    for (int i = 1; i <= n; ++i) {
    
        for (int s = 0; s < (n - i) * 1; ++s) putchar(' ');
        for (int k = 0; k < i; ++k) printf("10");
        putchar('\n');
    }
    return 0;
}


// Descending repeated-digit block

#include <stdio.h>

int main() {
    int n;
    printf("Start from (e.g. 5): ");
    if (scanf("%d", &n)!=1) return 0;

    for (int i = n; i >= 1; --i) {
        for (int k = 0; k < i; ++k)
            printf("%d", i);
        putchar('\n');
    }
    return 0;
}




