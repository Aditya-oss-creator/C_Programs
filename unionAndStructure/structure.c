#include <stdio.h>
#include <strings.h>

struct Books
{
char book_name[50];
char authors_name[50];
float price;
int page_no;
}book1,book2,book3;

int main(int argc, char const *argv[])
{
    struct Books book1 = {"C Programming","Dennis Ritchie",360.50,203},
                 book2 = {"ANSI c","Harry",310.50,230};

                 
    // book3.book_name = "DBMS";  gives error
    strcpy(book3.book_name, "DBMS");
    strcpy(book3.authors_name, "Michael B Joradan");
    book3.price = 251.50;
    book3.page_no = 3003;

    printf("\n%s\n", book1.book_name);
    printf("%s\n", book1.authors_name);
    printf("%.2f\n", book1.price);
    printf("%d\n\n", book1.page_no);

    printf("%s\n", book2.book_name);
    printf("%s\n", book2.authors_name);
    printf("%.2f\n", book2.price);
    printf("%d\n", book2.page_no);

    printf("\n%s\n", book3.book_name);
    printf("%s\n", book3.authors_name);
    printf("%.2f\n", book3.price);
    printf("%d\n", book3.page_no);

    return 0;
}
