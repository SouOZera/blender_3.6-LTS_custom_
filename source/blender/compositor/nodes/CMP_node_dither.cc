// Standard 4x4 Bayer Dithering Matrix Math
static const float bayer4x4[4][4] = {
    { 0.0/16.0,  8.0/16.0,  2.0/16.0, 10.0/16.0},
    {12.0/16.0,  4.0/16.0, 14.0/16.0,  6.0/16.0},
    { 3.0/16.0, 11.0/16.0,  1.0/16.0,  9.0/16.0},
    {15.0/16.0,  7.0/16.0, 13.0/16.0,  5.0/16.0}
};

// Apply threshold to input pixel intensity
int x = pixel_x % 4;
int y = pixel_y % 4;
float threshold = bayer4x4[y][x];
float result = (input_color > threshold) ? 1.0f : 0.0f;
