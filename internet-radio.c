#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #include <gst/gst.h> for futre integration

int main ()
{
// uses mplayer
// char string[]="mplayer 'http://stream-93.shoutcast.com:80'" ;	

// Uses gstreamer-tools this is how NOT to do things :-)
char string[]="gst-launch playbin2 uri='http://stream-93.shoutcast.com:80'"; 

     system(string);

   return(0);
} 
