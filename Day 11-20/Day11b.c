#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitOrLoss;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) {
        profitOrLoss = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit %.0f%%\n", profitOrLoss);
    } 
    else if (sellingPrice < costPrice) {
        profitOrLoss = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss %.0f%%\n", profitOrLoss);
    } 
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
