#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;sys/stat.h&gt;
int main(int argc, char *argv[])
{
const char *filename;
struct stat fs;
int st;
if( argc&lt;2 )
{
puts(&quot;Filename is not entered! Exit(0)..&quot;);
exit(1);
}
filename = argv[1];
st = stat(filename,&amp;fs);
if( st==-1 )
{
fprintf(stderr,&quot;File error!\n&quot;);
exit(1);
}
if( S_ISREG(fs.st_mode) )
printf(&quot; &#39;%s&#39; is regular file\n&quot;,filename);
else
printf(&quot; &#39;%s&#39; is not a regular file\n&quot;,filename);
return(0);
}