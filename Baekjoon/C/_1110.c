#include<stdio.h>
// Problem Number : 1110
// 0���� ũ�ų� ����, 99���� �۰ų� ���� ������ �־��� �� ������ ���� ������ �� �� �ִ�.
// ���� �־��� ���� 10���� �۴ٸ� 0�� �ٿ� �� �ڸ� ���� �����, �� �ڸ��� ���ڸ� ���Ѵ�.
// �� ����, �־��� ���� ���� ������ �ڸ� ���ڿ� �տ��� ���� ���� ���� ������ �ڸ� ���ڸ� 
// �̾� ���̸� ���ο� ���� ���� �� �ִ�.
// 26���� �����Ѵ�. 2+6=8�̴�. ���ο� ���ڴ� 68�̴�. 6+8=14�̴�. ���ο� ���ڴ� 84�̴�. 8+4=12�̴�
// ���ο� ���ڴ� 42�̴�. 4+2=6�̴�. ���ο� ���ڴ� 26�̴�.
// N�� �־����� ��, N�� ����Ŭ�� ���̸� ���ϴ� ���α׷�
int main() {
    int n;
    scanf("%d", &n);
    int count = 0;
    int a, b, c, add;

    add = n;

    while(add != n || count == 0) {
        a = add / 10;
        b = add % 10;
        c = (a+b) % 10;
        a = b; b = c;
        add = a * 10 + b;
        
		count++;
     }

    printf("%d\n", count);
}