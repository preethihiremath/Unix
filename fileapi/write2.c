#include&lt;stdio.h&gt;
#include&lt;unistd.h&gt;
#include&lt;sys/types.h&gt;
#include&lt;iostream&gt;
#include&lt;string.h&gt;
#include&lt;fcntl.h&gt;
int main()
{ int fd,sz;
char *c=(char*)calloc(100,sizeof(char));
fd=open(&quot;f1.txt&quot;,O_RDONLY);
if(fd&lt;0)
{ perror(&quot;r1&quot;);
exit(1);
}
sz=read(fd,c,10);
c[sz]=&#39;\0&#39;;
printf(&quot;%s\n&quot;,c);
lseek(fd,20,SEEK_SET);
sz=read(fd,c,40);
c[sz]=&#39;\0&#39;;
printf(&quot;%s\n&quot;,c);}
