#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

int main() {
    double radius, height, volume_cylinder, volume_cone, slant_height, curved_surface_area, total_surface_area, surface_area_sphere;


    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);


    volume_cylinder = PI * radius * radius * height;


    printf("The volume of the cylinder is: %.2lf\n", volume_cylinder);


    printf("Enter the slant height of the cone: ");
    scanf("%lf", &slant_height);


    curved_surface_area = PI * radius * slant_height;


    printf("The curved surface area of the cone is: %.2lf\n", curved_surface_area);


    total_surface_area = PI * radius * (radius + sqrt(height * height + radius * radius));


    printf("The total surface area of the cone is: %.2lf\n", total_surface_area);


    volume_cone = (1.0 / 3.0) * PI * radius * radius * height;


    printf("The volume of the cone is: %.2lf\n", volume_cone);


    surface_area_sphere = 4 * PI * radius * radius;


    printf("The surface area of the sphere is: %.2lf\n", surface_area_sphere);

    return 0;
}