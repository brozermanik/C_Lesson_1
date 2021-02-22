int main(void)
{
    int height_pyramid, point, bricks_place_amount, point2, i;
    string place_holder, bricks_place;

    height_pyramid = 4;
    i = 1;
    point2 = 2;
    place_holder = "                          ";
    bricks_place = "###############################";

    for (i=1; i < height_pyramid+1; i++)
    {
        point = height_pyramid - i;
        bricks_place_amount = i;
        printf("%.*s", point, place_holder);
        printf("%.*s", bricks_place_amount, bricks_place);
        printf("%.*s", point2, place_holder);
        printf("%.*s\n", bricks_place_amount, bricks_place);
    }

}