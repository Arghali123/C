//Define a structure Table having data members lenght,breadth and height.Represent different measurements by
//another structure Measurement having data members meter and centimeter.Take data for some table and find volume.

#include<stdio.h>
struct Table
{
    int lenght;
    int breadth;
    int height;
}tab;
struct Measurement
{
    float meter;
    float centimeter;
}vol;
int main()
{
    printf("Enter the lenght breadth and height of table\n");
    printf("Enter lenght of table: ");
    scanf("%d",&tab.lenght);
    printf("Enter breadth of table: ");
    scanf("%d",&tab.breadth);
    printf("Enter the height of table: ");
    scanf("%d",&tab.height);
    vol.centimeter=(tab.lenght)*(tab.breadth)*(tab.height);
    vol.meter=(tab.lenght/100.0)*(tab.breadth/100.0)*(tab.height/100.0);
    printf("The volume in centimeter: %.2fcm^3\n",vol.centimeter);
    printf("The volume in meter: %.2fm^3\n",vol.meter);
    return 0;

}