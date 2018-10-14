#include <iostream>

struct box{
    char maker[40];
    double height;
    double width;
    double length;
    double volume;
};

void show_box(box box_val);
void update_box(box *p_box);

int main() {
    box box_val = {"BOX_1", 2.0, 2.0, 2.0, 0.0};
    show_box(box_val);
    update_box(&box_val);
    show_box(box_val);
    return 0;
}

void show_box(box box_val){
    std::cout << "Maker: "  << box_val.maker << std::endl;
    std::cout << "Height: " << box_val.height << std::endl;
    std::cout << "Width: "  << box_val.width << std::endl;
    std::cout << "Length: " << box_val.length << std::endl;
    std::cout << "Volume: " << box_val.volume << std::endl;
}

void update_box(box *p_box) {
    p_box->volume = p_box->height * p_box->length * p_box->width;
}