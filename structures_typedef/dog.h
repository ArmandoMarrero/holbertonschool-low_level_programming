#include <stdio.h>

struct Dog {
  char name[50];
  float age;
  char owner[50];
};

int main() {

  struct Dog myDog;

  snprintf(myDog.name, sizeof(myDog.name), "Buddy");
  myDog.age = 2.5;
  snprintf(myDog.0wner, sizeof(myDog.owner), "John Doe");

   printf("Dog's Name: %s\n", myDog.name);
    printf("Dog's Age: %.1f\n", myDog.age);
    printf("Owner's Name: %s\n", myDog.owner);

    return 0;
}
