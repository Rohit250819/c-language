# include<stdio.h>
void slice(char*st,int y, int z){
    int i=0;
    while(y+i<z){
        st[i]=st[i+y];
        i++;
    }
    st[i]='\0';
}

int main(){
    char st[]="RohitKumar";
    slice(st,2,7);
    printf("%s",st);
    
    return 0;
}