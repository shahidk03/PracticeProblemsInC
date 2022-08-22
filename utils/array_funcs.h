# include <stdbool.h>

# define len(x) (sizeof (x)/ sizeof((x)[0]))


struct Array
{
    int *valOf;
    int length; 
};


int min(struct Array arr){
    int m = arr.valOf[0];
    for(int i=1; i<arr.length; i++){
        if (arr.valOf[i] < m){
            m = arr.valOf[i];
        }
    }
    return m;
}

int max(struct Array arr){
    int m = arr.valOf[0];
    for(int i=1; i<arr.length; i++){
        if (arr.valOf[i] > m){
            m = arr.valOf[i];
        }
    }
    return m;
}

bool in(struct Array arr, int val){
    bool found = false;
    for(int i=0; i<arr.length; i++){
        if(arr.valOf[i] == val){
            found = true;
            break;
        }
    }
    return found;
}
