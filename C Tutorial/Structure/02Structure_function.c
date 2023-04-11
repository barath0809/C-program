#include <stdio.h>
#include <string.h>
//int print_function ( data_base);
typedef struct stru_name
{
   int sensor_quantity;
   char name_of_sensor[15];
   int sensor_price;
}data_base;
  
int print_function ( data_base pin)
{
   printf("Name of the sensor:%s\n", pin.name_of_sensor );
   printf("Price:%d\n",pin.sensor_price);
   printf("No of sensors:%d\n",pin.sensor_quantity);                                                                                       
}
int print_function_ponter ( data_base *pin_new)
{
   printf("Name of the sensor:%s\n", pin_new->name_of_sensor);
   printf("Price:%d\n",pin_new->sensor_price);
   printf("No of sensors:%d\n",pin_new->sensor_quantity);                                                                                       
}

int main()
{
   data_base millitary_project;
  strcpy(millitary_project.name_of_sensor ,"LDR_Sensor");
  millitary_project.sensor_price= 68;
  millitary_project.sensor_quantity=2;
    print_function(millitary_project);
    print_function_ponter(&millitary_project);
    return 0;
}
