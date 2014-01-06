#include<stdio.h>
#include<string.h>

int len;
int k;
void copy (char *s, int len) {
  for (k=len/2 -1; k>=0 ;k--) {
    s[len-1-k]=s[k];
  }
}
int less(char *s,int len) {
  int flag=0;
  for (k=len/2 -1; k>=0 ;k--) {
    if (s[k]==s[len-k-1]) continue;
    else if (s[k] >  s[len-k-1]) {flag = 1;break;         }
    else if ( s[k] < s[len-k-1]) {flag = 2;break;         }
  }
  return flag;
}
int inc(char *s, int len) {
  k=len/2;
  s[k-1]+=1;
  int flag=0;
  while(s[k-1]==':'){
    if (k==1) {flag=1; break;}
    s[k-1]='0';
    k-=1;
    s[k-1]+=1;
  }
  return flag;
}    
int inco(char *s, int len) {
  k=len/2;
  s[k]+=1;
  int flag=0;
  while(s[k]==':'){
    if (k==0) {flag=1; break;}
    s[k]='0';
    k-=1;
    s[k]+=1;
  }
  return flag;
}
void zero(char *s,int len){
  s[0]='1';
  for (k=0;k<len;k++) {
    s[k+1]='0';
  }
  s[k]='1';
  s[k+1]='\0';
}
int palin(char *s,int len) {

}

int main() {
  char a[1000000];
  int n,i;
  int len;
  scanf("%d",&n);
  int parity=0;
  int flag9=0;
  for (i=0;i<n;i++) {
    scanf("%s",&a);
    len=strlen(a);
    switch (len%2) {
      case 0:
        parity=less(a,len);
        if (parity==1) { 
          copy(a,len); 
        }
        else if (parity ==2 ) { 
          flag9=inc(a,len); 
          if (flag9==1) { zero(a,len);}
          else {
            copy(a,len);
          }
        }
        else if (parity ==0 ) { 
          flag9=inc(a,len);
          if (flag9==1) { zero(a,len);}
          else {
            copy(a,len);
          }
        }
        printf("%s\n",a);
        break;
      case 1:
        parity=less(a,len);
        if (parity==1) { 
          copy(a,len); 
        }
        else if (parity ==2 ) { 
          flag9=inco(a,len); 
          if (flag9==1) { zero(a,len);}
          else {
            copy(a,len);
          }
        }
        else if (parity ==0 ) { 
          flag9=inco(a,len);
          if (flag9==1) { zero(a,len);}
          else {
            copy(a,len);
          }
        }
        printf("%s\n",a);
        break;
    }
  }
  return 0;
}


