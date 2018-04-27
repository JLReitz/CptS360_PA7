#include "type.h"

void list_file()
{

}

void change_dir()
{
	u32 ino = kcwgetino(dev, pathname);
	
	if(ino)
		running->cwd = iget(dev, ino);
}

void pwd(MINODE * wd)
{
	
}
