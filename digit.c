// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
int main() {
   int n,digit, counter=0, sum=0;
    printf("Enter the n:");
    scanf("%d",&n);
    do{
        digit=n%10;
        sum=sum+digit;
        counter++;
        n=n/10;
    }
        while(n>0);
    printf("Digit count:%d\n",counter);
    printf("Sum:%d",sum);
    return 0;
}


// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
int main() {
   int n;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int space=1; space<=n-i; space++){
            printf(" ");
        }
            for(int j=1; j<=2*i-1; j++){
                printf("*");
            
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int space=1; space<=n-i; space++){
            printf(" ");
        }
            for(int j=1; j<=2*i-1; j++){
                printf("*");
            
        }
        printf("\n");
    }

    for(int i=n-1; i>=1; i--){
        for(int space=1; space<=n-i; space++){
            printf(" ");
        }
            for(int j=1; j<=2*i-1; j++){
                printf("*");
            
        }
        printf("\n");
    }

    return 0;
}




#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++) {
        int prime = 1;

        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                prime = 0;
                break;
            }
        }

        if(prime) {
            printf("%d\n", i);
        }
    }

    return 0;
}




//Character tally
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char word[51];
    int length = 0, vowels = 0, consonants = 0, digits = 0, others = 0;

    printf("Enter a word: ");
    scanf("%50s", word);

    for(int i = 0; word[i] != '\0'; i++) {

        length++;

        if(isalpha(word[i])) {

            if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
               word[i] == 'o' || word[i] == 'u' ||
               word[i] == 'A' || word[i] == 'E' || word[i] == 'I' ||
               word[i] == 'O' || word[i] == 'U') {

                vowels++;
            }
            else {
                consonants++;
            }
        }
        else if(isdigit(word[i])) {
            digits++;
        }
        else {
            others++;
        }
    }

    printf("Length: %d\n", length);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Others: %d\n", others);

    return 0;
}






#include <stdio.h>
#include <string.h>

int main() {
   int n,val, largest=0, sec_largest=0;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter val:");
    scanf("%d",&val);
    for(int i=1; i<=n-1; i++){
        printf("Enter value:");
        scanf("%d",&val);
        if(val>largest){
            sec_largest=largest;
            largest=val;
        }
        else{
            if(val>sec_largest){
                sec_largest=val;
            }
        }
    }
    printf("Largest:%d\n",largest);
    printf("Second largest:%d\n",sec_largest);
    return 0;
}



#include <stdio.h>
int readInt(void);
int square(int n);
int cube(int n);


int readInt(){
    int x;
    printf("Enter x:");
    scanf("%d",&x);
    return x;
}

int square(int n){
    return n*n;
}
int cube(int n){
    return n*n*n;
}

int main() {
  int n=readInt();
    int sq=square(n);
    int cu=cube(n);
    printf("Number:%d\n",n);
    printf("Square:%d\n",sq);
    printf("Cube:%d\n",cu);
    return 0;
}




#include <stdio.h>
#include<stdlib.h>


int readInt(void);
int digitSum(int n);
int output(int n, int sum);
int main(){
    
    

}
int readInt(){
    int n;
     printf("Enter an integer:");
    scanf("%d",&n);
    return n;
}

int digitSum(int n){
    int rev,digit,n,sum=0;
    printf("Enter integer:");
    scanf("%d",&n);
    n=abs(n);
    while(n>0){
        digit%10;
        rev=rev*10+digit;
        n=n/10;
    }
    //digit sum
   digit=num 
}



#include <stdio.h>

int readInt(void);
int nthTerm(int a, int d, int n);
int sumAP(int a, int d, int n);
void outputTerms(int a, int d, int n);
void outputSummary(int last, int sum);

int main() {
    int a, d, n;
    int last, sum;

    a = readInt();
    d = readInt();
    n = readInt();

    outputTerms(a, d, n);

    last = nthTerm(a, d, n);
    sum = sumAP(a, d, n);

    outputSummary(last, sum);

    return 0;
}

int readInt(void) {
    int x;
    scanf("%d", &x);
    return x;
}

int nthTerm(int a, int d, int n) {
    return a + (n - 1) * d;
}

int sumAP(int a, int d, int n) {
    return n * (2 * a + (n - 1) * d) / 2;
}

void outputTerms(int a, int d, int n) {
    for(int i = 1; i <= n; i++) {
        printf("Terms:%d ", nthTerm(a, d, i));
    }
    printf("\n");
}


void outputSummary(int last, int sum) {
    printf("Last term: %d\n", last);
    printf("Sum: %d\n", sum);
}




#include <stdio.h>

int readInt(void);
void input(int n, int arr[]);
int sum(int n, int arr[]);
double average(int n, int arr[]);
void output(int total, double avg);

int readInt(void) {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    return n;
}

void input(int n, int arr[]) {
    printf("Enter array elements: ");

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

int sum(int n, int arr[]) {
    int total = 0;

    for(int i = 0; i < n; i++) {
        total = total + arr[i];
    }

    return total;
}

double average(int n, int arr[]) {
    int total = sum(n, arr);

    return (double)total / n;
}

void output(int total, double avg) {
    printf("Sum: %d\n", total);
    printf("Average: %.2f\n", avg);
}

int main() {
    int n = readInt();

    int arr[n];

    input(n, arr);

    int total = sum(n, arr);
    double avg = average(n, arr);

    output(total, avg);

    return 0;
}



#include <stdio.h>

int readInt(void);
void input(int n, int arr[]);
void reverse(int n, int arr[]);
void output(char label[], int n, int arr[]);


int readInt(void) {
    int n;
    scanf("%d", &n);

    return n;
}

void input(int n, int arr[]) {
    printf("Enter array elements:\n ");

    for(int i = 0; i < n; i++) {
        arr[i]=readInt();
    }
}

void reverse(int n, int arr[]){
    int temp;
    int left=0;
    int right=n-1;
    while(left<right){
        temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
}

void output(char label[], int n, int arr[]){
     printf("%s", label);

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

}

int main() {
   int n = readInt();
    printf("Enter n:\n");
    int arr[n];

    input(n, arr);

    output("Original array: ", n, arr);

    reverse(n, arr);

    output("Reversed array: ", n, arr);

    return 0;
}





#include <stdio.h>

typedef struct {
    int roll;
    char name[30];
    int marks1;
    int marks2;
    int marks3;
} Student;

Student inputStudent(void);
int totalMarks(Student s);
double percentage(Student s);
void output(Student s, int total, double pct);

Student inputStudent(void) {
    Student s;

    printf("Enter roll: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf("%29s", s.name);

    printf("Enter marks 1: ");
    scanf("%d", &s.marks1);

    printf("Enter marks 2: ");
    scanf("%d", &s.marks2);

    printf("Enter marks 3: ");
    scanf("%d", &s.marks3);

    return s;
}

int totalMarks(Student s) {
    int total = s.marks1 + s.marks2 + s.marks3;

    return total;
}

double percentage(Student s) {
    int total = totalMarks(s);

    double percent = (double)total / 300 * 100;

    return percent;
}

void output(Student s, int total, double pct) {
    printf("\nRoll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Total: %d\n", total);
    printf("Percentage: %.2f%%\n", pct);
}


int main() {
    Student s1;
    int total;
    double pct;

    s1 = inputStudent();

    total = totalMarks(s1);

    pct = percentage(s1);

    output(s1, total, pct);

    return 0;
}



#include <stdio.h>
#include <math.h>

typedef struct { 
    double x; 
    double y; 
} Point;
Point inputPoint(void);
double distance(Point a, Point b);
void output(double d);


Point inputPoint(void){
    Point p;
    scanf("%lf %lf", &p.x, &p.y);
    return p;
}

double distance(Point a, Point b){
    double dx=b.x-a.x;
    double dy=b.y-a.y;
    double d=(sqrt((dx*dx)+(dy*dy)));
    return d;
}

void output(double d){
     printf("Distance: %.2lf\n", d);
}

int main(){
     Point p1, p2;
    double d;

    p1 = inputPoint();
    p2 = inputPoint();

    d = distance(p1, p2);

    output(d);

    return 0;
}






#include <stdio.h>

typedef struct {
    int hours;
    int minutes;
} Time;

Time inputTime(void);
Time addTime(Time a, Time b);
void output(Time t);

Time inputTime(void)
{
    Time t;
    scanf("%d %d", &t.hours, &t.minutes);
    return t;
}

Time addTime(Time a, Time b)
{
    Time total;

    total.minutes = a.minutes + b.minutes;
    total.hours = a.hours + b.hours + total.minutes / 60;
    total.minutes = total.minutes % 60;

    return total;
}

void output(Time t)
{
    printf("Total = %d h %d m", t.hours, t.minutes);
}

int main(void)
{
    Time t1, t2, total;

    t1 = inputTime();
    t2 = inputTime();

    total = addTime(t1, t2);

    output(total);

    return 0;
}





#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num;
    int den;
} Fraction;

Fraction inputFraction(void);
int gcd(int a, int b);
Fraction addFractions(Fraction a, Fraction b);
void output(Fraction f);

Fraction inputFraction(void)
{
    Fraction f;

    scanf("%d %d", &f.num, &f.den);

    return f;
}

int gcd(int a, int b)
{
    a = abs(a);
    b = abs(b);

    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

Fraction addFractions(Fraction a, Fraction b)
{
    Fraction result;
    int g;

    result.num = a.num * b.den + b.num * a.den;
    result.den = a.den * b.den;

    g = gcd(result.num, result.den);

    result.num = result.num / g;
    result.den = result.den / g;

    return result;
}

void output(Fraction f)
{
    if (f.den == 1)
        printf("Sum = %d", f.num);
    else
        printf("Sum = %d/%d", f.num, f.den);
}

int main(void)
{
    Fraction f1, f2, result;

    f1 = inputFraction();
    f2 = inputFraction();

    result = addFractions(f1, f2);

    output(result);

    return 0;
} 