#include <cstdlib>

short test(short x, short y, short z) {
    short result = z + y - x;

    if (z > 5) {
        if (y > 2) {
            result = x / z; 
        }
        result = x / y; 
    }
    if (z < 3) {
        result = z / y;
    }

    return result;
}


int main(int argc, char *argv[]){
    short x, y, z;
    if (argc != 4) {
        cout << "error: please try again with 3 numbers" << endl;
        return 1;
    }
    x = atoi(argv[1]); y = atoi(argv[2]); z = atoi(argv[3]);
    cout << "result: " << test(x, y, z) << endl; 
    return 0;
}
