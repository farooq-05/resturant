#include <stdio.h>

struct LuxuriousCar {
    char brand[50];
    char model[50];
    double price;
    char features[100];
};

int main() {
    struct LuxuriousCar car1, car2;

    
    printf("Enter details of Car 1:\n");
    printf("Brand: ");
    scanf("%s", car1.brand);
    printf("Model: ");
    scanf("%s", car1.model);
    printf("Price (in USD): ");
    scanf("%lf", &car1.price);
    printf("Features: ");
    getchar(); 
    fgets(car1.features, 100, stdin);

    printf("\nEnter details of Car 2:\n");
    printf("Brand: ");
    scanf("%s", car2.brand);
    printf("Model: ");
    scanf("%s", car2.model);
    printf("Price (in USD): ");
    scanf("%lf", &car2.price);
    printf("Features: ");
    getchar(); 
    fgets(car2.features, 100, stdin);

    printf("\nDetails of Luxurious Cars:\n");
    printf("Car 1:\nBrand: %s\nModel: %s\nPrice: $%.2lf\nFeatures: %s", car1.brand, car1.model, car1.price, car1.features);
    printf("Car 2:\nBrand: %s\nModel: %s\nPrice: $%.2lf\nFeatures: %s", car2.brand, car2.model, car2.price, car2.features);

    return 0;
}
