#include<stdio.h>
int main() {
    char s[109];
    while (scanf("%s",s)!=EOF) {
          int i=0;
          if(!islower(s[0])) { printf("Error!\n"); continue; }
          int a=0;
          char ans[109];
          int b=strlen(s);
          int flag=0;
          while (islower(s[a])) {a++;}
          if (s[a]=='_' || a==b) flag=1;
          else if (isupper(s[a])) flag=2;
          else { printf("Error!\n"); continue; }
          switch (flag) {
                 case 1:
                      for (i=0;i<a;i++) {
                          ans[i]=s[i];
                      }
                      while (a!=b) {
                            if ( s[a]=='_' ) {
                                 if(!islower(s[a+1])) { printf("Error!\n"); flag=3; break; }
                                 else {
                                      a++;
                                      ans[i++]=toupper(s[a++]);
                                 }
                            }
                            else if (islower(s[a])){
                                 while(islower(s[a])) { ans[i++]=s[a++]; }
                            }
                            else {printf("Error!\n"); flag=3; break;}
                      }                    
                      ans[i]='\0';
                      if(flag!=3) { printf("%s\n",ans); }
                      break;
                 case 2:
                      for (i=0;i<a;i++) {
                          ans[i]=s[i];
                      }
                      while (a!=b) {
                            if ( isupper(s[a]) ) {
                                 if(!isalpha(s[a+1]) && (a+1)!=b ) { printf("Error!\n"); flag=3; break; }
                                 else {
                                      ans[i++]='_';
                                      ans[i++]=tolower(s[a++]);
                                 }
                            }
                            else if (islower(s[a])){
                                 while(islower(s[a])) { ans[i++]=s[a++]; }
                            }
                            else {printf("Error!\n"); flag=3; break;}
                      }                    
                      ans[i]='\0';
                      if(flag!=3) { printf("%s\n",ans); }     
                      break;
                 default:
                         printf("Error!\n");
                         break;
          }
          
    }
    return 0;
}


