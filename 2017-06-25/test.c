#include <stdio.h>
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>

#include <id3v2lib.h>

int main(int argc, char* argv[])
{
  ID3v2_tag* tag = load_tag(argv[1]);
  if(tag == NULL)
  {
    return 0;
  }

  ID3v2_frame* artist_frame = tag_get_artist(tag);
  
  free(tag);
  return 0; 
}
